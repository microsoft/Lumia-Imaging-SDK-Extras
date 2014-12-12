/*
* Copyright (c) 2014 Microsoft Mobile
* 
* Permission is hereby granted, free of charge, to any person obtaining a copy
* of this software and associated documentation files (the "Software"), to deal
* in the Software without restriction, including without limitation the rights
* to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
* copies of the Software, and to permit persons to whom the Software is
* furnished to do so, subject to the following conditions:
* The above copyright notice and this permission notice shall be included in
* all copies or substantial portions of the Software.
* 
* THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
* IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
* FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
* AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
* LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
* OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN
* THE SOFTWARE.
*/

/*
	CustomFilterBase.h 
	This file contains WRL support for user defined custom filters.
*/
#pragma once

#include <wrl.h>
#include <wrl\client.h>
#include <wrl\wrappers\corewrappers.h>
#include <robuffer.h>

#include "..\Include\Lumia.Imaging.h"
#include "..\Include\Lumia.Imaging.Custom.h"

#include "CustomFilterSession.h"

#ifndef CUSTOMFILTERCX_H_INCLUDES_CUSTOMFILTERBASE_H
#ifdef __cplusplus_winrt 
#error Only use CustomFilterBase.h when writing a WRL custom filter. For C++/CX, use CustomFilterCx.h.
#endif
#endif

namespace ABI { namespace Lumia { namespace Imaging { namespace Extras {

	namespace Detail {

		// NOTE: Workaround for ICustomFilter::PrepareAsync which clashes with IFilter::PrepareAsync if they are implemented in the same class.
		// By not listing ICustomFilter in the IDL for the custom filter and implementing CloakedIid<ICustomFilterFixed> in the RuntimeClass, we can use
		// this alternate form. At the client, QueryInterface for IID_ICustomFilter still works as expected.
		MIDL_INTERFACE("88A51FA5-C028-3DBD-AC50-67041FBEE9C2")
		ICustomFilterFixed : public IInspectable
		{
		public:
			STDMETHOD(ICustomFilter_PrepareAsync)(
				_COM_Outptr_result_maybenull_ ABI::Windows::Foundation::IAsyncAction **__returnValue) = 0;

			STDMETHOD(ICustomFilter_BeginProcessing)(
				_In_ Custom::ICustomFilterRequest *request, 
				_COM_Outptr_result_maybenull_ Custom::ICustomFilterResponse **__returnValue) = 0;

			STDMETHOD(ICustomFilter_ProcessBlock)(
				_In_ Custom::CustomFilterBlockParameters blockParameters) = 0;
		};
	}

	/*
		CustomFilterBase - WRL base class for Imaging SDK custom filters.

		Benefits over C++/CX equivalent:
		- Implementation close to the ABI level, so abstraction overhead is pay-for-play.
		- No exceptions, so slightly faster/smaller code footprint.
		- Simpler to integrate with non-exception-based user code.
		- Only one runtimeclass is needed rather than two (see Detail::ICustomFilterFixed).

		Prefer C++/CX if:
		- You don't want to declare your types in IDL.
		- You prefer slightly less verbose code.
		- You don't want the responsibility of making sure exceptions don't escape ABI methods.
	*/
	template<typename TImplementation, typename TDefaultInterface>
	class CustomFilterBase abstract : public Microsoft::WRL::RuntimeClass<
		Microsoft::WRL::RuntimeClassFlags<Microsoft::WRL::WinRt>,
#ifndef __cplusplus_winrt
		IFilter,
		TDefaultInterface,
#endif
		ABI::Windows::Foundation::IClosable,
		Microsoft::WRL::CloakedIid<Detail::ICustomFilterFixed>,
		Custom::ICustomFilter2
	>
	{
	public:
		DECLSPEC_NOTHROW CustomFilterBase()
		{
		}

		virtual ~CustomFilterBase()
		{
			Close();
		}

		DECLSPEC_NOTHROW HRESULT RuntimeClassInitialize()
		{
			auto customFilter = reinterpret_cast<Custom::ICustomFilter*>(static_cast<ICustomFilterFixed*>(this));

			HRESULT hr = S_OK;

			Microsoft::WRL::ComPtr<Lumia::Imaging::Custom::ICustomFilterAdapterFactory> customFilterAdapterFactory;

			if(SUCCEEDED(hr))
			{
				Microsoft::WRL::Wrappers::HStringReference adapterClassName(RuntimeClass_Lumia_Imaging_Custom_CustomFilterAdapter);
				hr = ABI::Windows::Foundation::GetActivationFactory(adapterClassName.Get(), &customFilterAdapterFactory);
			}

			if(SUCCEEDED(hr))
			{
				hr = customFilterAdapterFactory->Create(customFilter, &m_customFilterAdapter);
			}

			if(SUCCEEDED(hr))
			{
				hr = m_customFilterAdapter.As(&m_customFilterAdapterIFilter);
			}

			if(FAILED(hr))
			{
				::RoOriginateErrorW(hr, 0, L"Custom filter failed initialization.");
			}

			return hr;
		}

#pragma region ICustomFilter implementation

		IFACEMETHOD(ICustomFilter_PrepareAsync)(
			_COM_Outptr_result_maybenull_ ABI::Windows::Foundation::IAsyncAction **__returnValue)
		{
			auto lock = m_cs.Lock();

			HRESULT hr = CheckDisposed();
			*__returnValue = nullptr;
			return hr;
		}

		IFACEMETHOD(ICustomFilter_BeginProcessing)(
			_In_ Custom::ICustomFilterRequest *request, 
			_COM_Outptr_ Custom::ICustomFilterResponse **__returnValue)
		{
			UNREFERENCED_PARAMETER(request);
			*__returnValue = nullptr;
			return E_NOTIMPL;
		}

		IFACEMETHOD(ICustomFilter_ProcessBlock)(
			_In_ Custom::CustomFilterBlockParameters blockParameters)
		{
			UNREFERENCED_PARAMETER(blockParameters);
			return E_NOTIMPL;
		}

#pragma endregion

#pragma region ICustomFilter2 implementation

		IFACEMETHOD(CreateSession)(
			_COM_Outptr_result_maybenull_ ABI::Lumia::Imaging::Custom::ICustomFilterSession **__returnValue)
		{
			auto lock = m_cs.Lock();

			Microsoft::WRL::ComPtr<IInspectable> sessionState;
			HRESULT hr = static_cast<TImplementation*>(this)->OnCreateSession(&sessionState);

			if(SUCCEEDED(hr))
			{
				hr = Microsoft::WRL::MakeAndInitialize<Detail::CustomFilterSession<TImplementation>>(
					__returnValue, 
					static_cast<TImplementation*>(this), 
					sessionState.Get());
			}

			if(FAILED(hr))
			{
				*__returnValue = nullptr;
				::RoOriginateErrorW(hr, 0, L"Custom filter failed in CreateSession.");
			}

			return hr;
		}

#pragma endregion

#pragma region IFilter implementation (wraps CustomFilterAdapter)

		IFACEMETHOD(PrepareAsync)(
			_Outptr_result_maybenull_ ABI::Windows::Foundation::IAsyncAction **__returnValue)
		{
			auto lock = m_cs.Lock();

			HRESULT hr = CheckDisposed();

			if(SUCCEEDED(hr))
			{
				hr = m_customFilterAdapterIFilter->PrepareAsync(__returnValue);
			}

			if(FAILED(hr))
			{
				*__returnValue = nullptr;
			}

			return hr;
		}

		IFACEMETHOD(Apply)(
			_In_ IFilterEffect *filterEffect)
		{
			auto lock = m_cs.Lock();

			if(!m_customFilterAdapter)
			{
				return RO_E_CLOSED;
			}

			return m_customFilterAdapterIFilter->Apply(filterEffect);
		}

		IFACEMETHOD(Lock)(
			_In_ IRenderRequest *renderRequest, 
			_Out_ boolean *__returnValue)
		{
			auto lock = m_cs.Lock();

			if(!m_customFilterAdapter)
			{
				*__returnValue = FALSE;
				return RO_E_CLOSED;
			}

			return m_customFilterAdapterIFilter->Lock(renderRequest, __returnValue);
		}

#pragma endregion

#pragma region IClosable implementation

		IFACEMETHOD(Close)()
		{
			auto lock = m_cs.Lock();

			m_customFilterAdapter = nullptr;
			m_customFilterAdapterIFilter = nullptr;

			return S_OK;
		}

#pragma endregion

	protected:
		DECLSPEC_NOTHROW HRESULT CheckDisposed()
		{
			return m_customFilterAdapter != nullptr ? S_OK : RO_E_CLOSED;
		}

	private:
		Microsoft::WRL::Wrappers::CriticalSection m_cs;

		Microsoft::WRL::ComPtr<Custom::ICustomFilterAdapter> m_customFilterAdapter;
		Microsoft::WRL::ComPtr<IFilter> m_customFilterAdapterIFilter;

	};

}}}}
