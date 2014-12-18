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

#pragma once

#ifndef __cplusplus_winrt 
#error Only use CustomFilterHelper.h when writing a C++/CX custom filter. For WRL, use CustomFilterBase.h.
#endif

#define CUSTOMFILTERCX_H_INCLUDES_CUSTOMFILTERBASE_H
#include "CustomFilterBase.h"
#undef CUSTOMFILTERCX_H_INCLUDES_CUSTOMFILTERBASE_H

namespace Lumia { namespace Imaging { namespace Extras {

	struct CustomFilterSessionInfo final
	{
		CustomFilterSessionInfo() :
			RequestedColorMode(Lumia::Imaging::ColorMode::Bgra8888),
			AcceptedColorMode(Lumia::Imaging::ColorMode::Bgra8888),
			ImageSize({ 0, 0 }),
			SessionState(nullptr)
		{
		}

		Lumia::Imaging::ColorMode RequestedColorMode;
		Lumia::Imaging::ColorMode AcceptedColorMode;
		Windows::Foundation::Size ImageSize;
		Platform::Object^ SessionState;
	};

	static_assert(sizeof(Platform::Object^) == sizeof(IInspectable*), "sizeof(Platform::Object^) == sizeof(IInspectable*)");

	/*
	CustomFilterHelper - C++/CX helper for Imaging SDK custom filters.

	Derives from CustomFilterBase, as C++/CX ref classes cannot derive (in general). 	
	The usage is similar, except the helper should be held as a member and the IFilter 
	methods must be called via the outer user class.
	*/
	template<typename TImplementation>
	class CustomFilterHelper : 
		public ABI::Lumia::Imaging::Extras::CustomFilterBase<CustomFilterHelper<TImplementation>, void>
	{
	public:
		DECLSPEC_NOTHROW CustomFilterHelper() : 
			m_userFilter(nullptr)
		{
		}

		DECLSPEC_NOTHROW HRESULT RuntimeClassInitialize(IInspectable* userFilter)
		{
			m_userFilter = userFilter;

			HRESULT hr = CheckUserFilter();

			if(SUCCEEDED(hr))
			{
				hr = CustomFilterBase::RuntimeClassInitialize();
			}

			return hr;
		}

		DECLSPEC_NOTHROW HRESULT OnCreateSession(_COM_Outptr_result_maybenull_ IInspectable** sessionState)
		{
			HRESULT hr = CheckUserFilter();

			Microsoft::WRL::ComPtr<IInspectable> userSessionStateInspectable;

			if(SUCCEEDED(hr))
			{
				try
				{
					auto userFilter = reinterpret_cast<TImplementation^>(m_userFilter);
					Platform::Object^ userSessionState = userFilter->OnCreateSession();
					userSessionStateInspectable = reinterpret_cast<IInspectable*>(userSessionState);
				}
				catch(Platform::Exception^ e)
				{
					hr = Platform::Details::ReCreateFromException(e);
				}
				catch(std::bad_alloc& badAlloc)
				{
					UNREFERENCED_PARAMETER(badAlloc);
					hr = E_OUTOFMEMORY;
				}
				catch(...)
				{
					hr = E_UNEXPECTED;
				}
			}

			if(SUCCEEDED(hr))
			{
				hr = userSessionStateInspectable.CopyTo(sessionState);
			}

			if(FAILED(hr))
			{
				*sessionState = nullptr;
			}

			return hr;
		}

		DECLSPEC_NOTHROW HRESULT OnBeginProcessing(_In_ ABI::Lumia::Imaging::Extras::CustomFilterSessionInfo* sessionInfo)
		{
			HRESULT hr = CheckUserFilter();

			if(SUCCEEDED(hr))
			{
				try
				{
					auto userFilter = reinterpret_cast<TImplementation^>(m_userFilter);

					userFilter->OnBeginProcessing(reinterpret_cast<CustomFilterSessionInfo*>(sessionInfo));
				}
				catch(Platform::Exception^ e)
				{
					hr = Platform::Details::ReCreateFromException(e);
				}
				catch(std::bad_alloc& badAlloc)
				{
					UNREFERENCED_PARAMETER(badAlloc);
					hr = E_OUTOFMEMORY;
				}
				catch(...)
				{
					hr = E_UNEXPECTED;
				}
			}

			return hr;
		}

		DECLSPEC_NOTHROW HRESULT OnProcessBlock(
			_In_ ABI::Lumia::Imaging::Extras::CustomFilterSessionInfo* sessionInfo, 
			_In_ const ABI::Lumia::Imaging::Custom::CustomFilterBlockParameters* blockParameters,
			_In_ const uint32_t* sourcePixels,
			_In_ uint32_t* targetPixels)
		{
			HRESULT hr = CheckUserFilter();

			if(SUCCEEDED(hr))
			{
				try
				{
					auto userFilter = reinterpret_cast<TImplementation^>(m_userFilter);

					userFilter->OnProcessBlock(
						reinterpret_cast<const CustomFilterSessionInfo*>(sessionInfo),
						reinterpret_cast<const Lumia::Imaging::Custom::CustomFilterBlockParameters*>(blockParameters),
						sourcePixels,
						targetPixels);
				}
				catch(Platform::Exception^ e)
				{
					hr = Platform::Details::ReCreateFromException(e);
				}
				catch(std::bad_alloc& badAlloc)
				{
					UNREFERENCED_PARAMETER(badAlloc);
					hr = E_OUTOFMEMORY;
				}
				catch(...)
				{
					hr = E_UNEXPECTED;
				}
			}

			return hr;
		}

		// Called from user filter class in its implementation of IFilter.
		Windows::Foundation::IAsyncAction^ PrepareAsync()
		{
			Microsoft::WRL::ComPtr<ABI::Windows::Foundation::IAsyncAction> asyncAction;

			__abi_ThrowIfFailed(
				__super::PrepareAsync(&asyncAction)
				);

			return reinterpret_cast<Windows::Foundation::IAsyncAction^>(asyncAction.Get());
		}
		
		// Called from user filter class in its implementation of IFilter.
		void Apply(Lumia::Imaging::IFilterEffect^ filterEffect)
		{
			__abi_ThrowIfFailed(
				__super::Apply(reinterpret_cast<ABI::Lumia::Imaging::IFilterEffect*>(filterEffect))
				);
		}

		// Called from user filter class in its implementation of IFilter.
		bool Lock(Lumia::Imaging::RenderRequest^ renderRequest)
		{
			boolean result = FALSE;

			__abi_ThrowIfFailed(
				__super::Lock(reinterpret_cast<ABI::Lumia::Imaging::IRenderRequest*>(renderRequest), &result)
				);

			return result != FALSE;
		}

	private:
		HRESULT CheckUserFilter()
		{
			return m_userFilter != nullptr ? S_OK : E_POINTER;
		}

		IInspectable* m_userFilter;
	};

	// CreateCustomFilterHelper: Creates and initializes a C++/CX custom filter helper.
	// Should be called in the constructor of the outer filter class.
	//
	// Example:
	// 
	// ref class MyCustomFilter : IFilter
	// {
	//		CustomFilterHelper<MyCustomFilter> m_customFilterHelper;
	// public:
	//		MyCustomFilter()
	//		{
	//			m_customFilterHelper = CreateCustomFilterHelper(this);
	//		}
	//  ...
	//
	template<typename TImplementation>
	Microsoft::WRL::ComPtr<CustomFilterHelper<TImplementation>> CreateCustomFilterHelper(TImplementation^ implementation)
	{
		Microsoft::WRL::ComPtr<CustomFilterHelper<TImplementation>> customFilterHelper;

		__abi_ThrowIfFailed(MakeAndInitialize<CustomFilterHelper<TImplementation>>(&customFilterHelper, reinterpret_cast<IInspectable*>(implementation)));

		return customFilterHelper;
	}

}}}
