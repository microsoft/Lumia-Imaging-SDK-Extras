#pragma once

/*
Unified native support for custom filters.

ABI::Lumia::Imaging::Extras::CustomFilterBase
	Base class for WRL.

Lumia::Imaging::Extras::CustomFilterHelper 
	Helper for C++/CX (as a base class isn't possible).
*/
#pragma once

#include <wrl.h>
#include <wrl\client.h>
#include <wrl\wrappers\corewrappers.h>
#include <robuffer.h>

#include "..\Include\Lumia.Imaging.h"
#include "..\Include\Lumia.Imaging.Custom.h"

namespace ABI { namespace Lumia { namespace Imaging { namespace Extras {

	template<typename TImplementation, typename TDefaultInterface>
	class CustomFilterBase;

	struct CustomFilterSessionInfo final
	{
		CustomFilterSessionInfo() :
			RequestedColorMode(ColorMode_Bgra8888),
			AcceptedColorMode(ColorMode_Bgra8888),
			ImageSize({ 0, 0 }),
			SessionState(nullptr)
		{
		}

		ColorMode RequestedColorMode;
		ColorMode AcceptedColorMode;
		ABI::Windows::Foundation::Size ImageSize;
		IInspectable* SessionState;
	};

	namespace Detail {

		DECLSPEC_NOTHROW HRESULT CreateBufferAndGetByteAccessIfNecessary(
			UINT32 requestedLength,
			_Inout_ Windows::Storage::Streams::IBuffer** buffer,
			_Inout_ ::Windows::Storage::Streams::IBufferByteAccess** bufferByteAccess,
			_Inout_ BYTE** bufferData);

		template<typename TImplementation>
		class CustomFilterSession final : public Microsoft::WRL::RuntimeClass<
			Microsoft::WRL::RuntimeClassFlags<Microsoft::WRL::WinRt>,
			Custom::ICustomFilterResponse,
			Custom::ICustomFilterSession
		>
		{
		public:
			DECLSPEC_NOTHROW CustomFilterSession()
			{
			}

			DECLSPEC_NOTHROW HRESULT RuntimeClassInitialize(_In_ TImplementation* customFilter, _In_opt_ IInspectable* sessionState)
			{
				if(!customFilter)
				{
					return E_POINTER;
				}

				m_customFilter = customFilter;
				m_userSessionState = sessionState;
				m_sessionInfo.SessionState = sessionState;
				return S_OK;
			}

			virtual ~CustomFilterSession()
			{
			}

	#pragma region ICustomFilterSession implementation

			IFACEMETHOD(BeginProcessing)(
				_In_ Custom::ICustomFilterRequest *request,
				_COM_Outptr_ Custom::ICustomFilterResponse **__returnValue)
			{
				if(!request)
				{
					return E_POINTER;
				}

				HRESULT hr = S_OK;

				if(SUCCEEDED(hr))
				{
					hr = request->get_PreferredColorMode(&m_sessionInfo.RequestedColorMode);
				}

				if(SUCCEEDED(hr))
				{
					hr = request->get_ImageSize(&m_sessionInfo.ImageSize);
				}

				if(SUCCEEDED(hr))
				{
					hr = request->get_SourceBufferLength(&m_requestedSourceBufferLength);
				}

				if(SUCCEEDED(hr))
				{
					hr = request->get_TargetBufferLength(&m_requestedTargetBufferLength);
				}

				if(SUCCEEDED(hr))
				{
					hr = Detail::CreateBufferAndGetByteAccessIfNecessary(m_requestedSourceBufferLength, &m_sourceBuffer, &m_sourceBufferByteAccess, reinterpret_cast<BYTE**>(const_cast<UINT32**>(&m_sourcePixels)));
				}

				if(SUCCEEDED(hr))
				{
					hr = Detail::CreateBufferAndGetByteAccessIfNecessary(m_requestedTargetBufferLength, &m_targetBuffer, &m_targetBufferByteAccess, reinterpret_cast<BYTE**>(&m_targetPixels));
				}

				if(SUCCEEDED(hr))
				{
					hr = m_customFilter->OnBeginProcessing(&m_sessionInfo);
				}

				if(SUCCEEDED(hr))
				{
					hr = static_cast<IInspectable*>(static_cast<ICustomFilterSession*>(this))->QueryInterface(IID_PPV_ARGS(__returnValue));
				}

				if(FAILED(hr))
				{
					::RoOriginateErrorW(hr, 0, L"Custom filter failed in BeginProcessing.");
					*__returnValue = nullptr;
				}

				return hr;
			}

			IFACEMETHOD(ProcessBlock)(
				_In_ Custom::CustomFilterBlockParameters blockParameters)
			{
				HRESULT hr = m_customFilter->OnProcessBlock(
					&m_sessionInfo,
					&blockParameters, 
					m_sourcePixels, 
					m_targetPixels
					);

				if(FAILED(hr))
				{
					::RoOriginateErrorW(hr, 0, L"Custom filter failed in ProcessBlock.");
				}

				return hr;
			}

	#pragma endregion

	#pragma region ICustomFilterResponse implementation

			IFACEMETHOD(get_ColorMode)(
				_Out_ ColorMode *__returnValue)
			{
				HRESULT hr = S_OK;

				if(SUCCEEDED(hr))
				{
					*__returnValue = static_cast<ABI::Lumia::Imaging::ColorMode>(m_sessionInfo.AcceptedColorMode);
				}

				if(FAILED(hr))
				{
					*__returnValue = ColorMode_Ayuv4444;
				}

				return hr;
			}

			IFACEMETHOD(get_SourceBuffer)(
				_COM_Outptr_result_maybenull_ ABI::Windows::Storage::Streams::IBuffer **__returnValue)
			{
				HRESULT hr = S_OK;

				if(SUCCEEDED(hr))
				{
					hr = m_sourceBuffer.CopyTo(IID_PPV_ARGS(__returnValue));
				}

				if(FAILED(hr))
				{
					*__returnValue = nullptr;
				}

				return hr;
			}

			IFACEMETHOD(get_TargetBuffer)(
				_COM_Outptr_result_maybenull_ ABI::Windows::Storage::Streams::IBuffer **__returnValue)
			{
				HRESULT hr = S_OK;

				if(SUCCEEDED(hr))
				{
					hr = m_targetBuffer.CopyTo(IID_PPV_ARGS(__returnValue));
				}

				if(FAILED(hr))
				{
					*__returnValue = nullptr;
				}

				return hr;
			}

	#pragma endregion

		private:
			Microsoft::WRL::ComPtr<ABI::Windows::Storage::Streams::IBuffer> m_sourceBuffer;
			Microsoft::WRL::ComPtr<ABI::Windows::Storage::Streams::IBuffer> m_targetBuffer;

			Microsoft::WRL::ComPtr<::Windows::Storage::Streams::IBufferByteAccess> m_sourceBufferByteAccess;
			Microsoft::WRL::ComPtr<::Windows::Storage::Streams::IBufferByteAccess> m_targetBufferByteAccess;

			const UINT32* m_sourcePixels;
			UINT32* m_targetPixels;

			UINT32 m_requestedSourceBufferLength;
			UINT32 m_requestedTargetBufferLength;

			CustomFilterSessionInfo m_sessionInfo;

			Microsoft::WRL::ComPtr<TImplementation> m_customFilter;
			Microsoft::WRL::ComPtr<IInspectable> m_userSessionState;
		};

	}

}}}}
