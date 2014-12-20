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

#include <algorithm>
#include <type_traits>
#include <robuffer.h>

#include <wrl.h>

#include "CustomEffectCxBuffer.h"

namespace Lumia { namespace Imaging { namespace Extras {

	enum CustomEffectOption
	{
		None = 0,
		InPlaceEffect = 1
	};

	struct CustomEffectProcessParameters
	{
		uint32 StartIndex;
		uint32 Pitch;
		uint32 Width;
		uint32 Height;
	};

	template<typename TImplementation>
	ref class CustomEffectHelper sealed : IImageProvider, IImageConsumer, Custom::ICustomEffect
	{
	internal:
		CustomEffectHelper(TImplementation^ implementation, CustomEffectOption options) :
			m_implementation(implementation),
			m_options(options)
		{
			m_customEffectAdapter = ref new Custom::CustomEffectAdapter(implementation, this);
			m_customEffectAdapterAsIImageProvider = (IImageProvider^)m_customEffectAdapter;
			m_customEffectAdapterAsIImageConsumer = (IImageConsumer^)m_customEffectAdapter;
		}

	public:
		virtual ~CustomEffectHelper()
		{
			if(m_customEffectAdapter)
			{
				m_sourceBuffer.Clear();
				m_targetBuffer.Clear();

				m_customEffectAdapterAsIImageProvider = nullptr;
				m_customEffectAdapterAsIImageConsumer = nullptr;

				delete m_customEffectAdapter;
				m_customEffectAdapter = nullptr;
			}
		}

#pragma region IImageProvider implementation wrapper (called by outer class)

		virtual Windows::Foundation::IAsyncAction^ PreloadAsync()
		{
			return m_customEffectAdapterAsIImageProvider->PreloadAsync();
		}

		virtual Windows::Foundation::IAsyncOperation<Lumia::Imaging::ImageProviderInfo^>^ GetInfoAsync()
		{
			return m_customEffectAdapterAsIImageProvider->GetInfoAsync();
		}

		virtual Windows::Foundation::IAsyncOperation<Bitmap^>^ GetBitmapAsync(Bitmap^ bitmap, OutputOption outputOption)
		{
			return m_customEffectAdapterAsIImageProvider->GetBitmapAsync(bitmap, outputOption);
		}

		virtual bool Lock(RenderRequest^ renderRequest)
		{
			return m_customEffectAdapterAsIImageProvider->Lock(renderRequest);
		}

#pragma endregion 

#pragma region IImageProvider implementation wrapper (called by outer class)

		virtual property Lumia::Imaging::IImageProvider^ Source
		{
			Lumia::Imaging::IImageProvider^ get()
			{
				return m_customEffectAdapterAsIImageConsumer->Source;
			}
			void set(Lumia::Imaging::IImageProvider^ value)
			{
				m_customEffectAdapterAsIImageConsumer->Source = value;
			}
		}

#pragma endregion 

#pragma region ICustomEffect implementation

		virtual Windows::Foundation::IAsyncAction^ LoadAsync()
		{
			auto implementation = m_implementation.Resolve<TImplementation>();
			
			return implementation->OnLoadAsync();
		}

		virtual Windows::Storage::Streams::IBuffer^ ProvideSourceBuffer(Windows::Foundation::Size imageSize)
		{
			m_imageSize = imageSize;
			const uint32 requiredLength = (uint32)imageSize.Width * (uint32)imageSize.Height * sizeof(uint32);
			m_sourceBuffer.EnsureCapacity(requiredLength);
			return m_sourceBuffer.GetBuffer();
		}

		virtual Windows::Storage::Streams::IBuffer^ ProvideTargetBuffer(Windows::Foundation::Size imageSize)
		{
			if(m_options & CustomEffectOption::InPlaceEffect)
			{
				return m_sourceBuffer.GetBuffer();
			}

			const uint32 requiredLength = (uint32)imageSize.Width * (uint32)imageSize.Height * sizeof(uint32);
			m_targetBuffer.EnsureCapacity(requiredLength);
			return m_targetBuffer.GetBuffer();
		}

		virtual void Process(Windows::Foundation::Rect rect)
		{
			auto implementation = m_implementation.Resolve<TImplementation>();

			CustomEffectProcessParameters processParameters =
			{
				(uint32)rect.X + (uint32)rect.Y * (uint32)m_imageSize.Width,
				(uint32)m_imageSize.Width,
				(uint32)rect.Width,
				(uint32)rect.Height
			};

			auto* targetBufferData = m_options & CustomEffectOption::InPlaceEffect ? m_sourceBuffer.GetData() : m_targetBuffer.GetData();

			implementation->OnProcess(processParameters, m_sourceBuffer.GetData(), targetBufferData);
		}

#pragma endregion

	private:
		Custom::CustomEffectAdapter^ m_customEffectAdapter;
		IImageProvider^ m_customEffectAdapterAsIImageProvider;
		IImageConsumer^ m_customEffectAdapterAsIImageConsumer;

		Platform::WeakReference m_implementation;

		CustomEffectOption m_options;
		Windows::Foundation::Size m_imageSize;

		Detail::CustomEffectCxBuffer m_sourceBuffer;
		Detail::CustomEffectCxBuffer m_targetBuffer;
	};

#define CUSTOMEFFECT_WRAP_IIMAGEPROVIDER_AND_IIMAGECONSUMER \
	virtual Windows::Foundation::IAsyncAction^ PreloadAsync() { return m_customEffectHelper->PreloadAsync(); } \
	virtual Windows::Foundation::IAsyncOperation<Lumia::Imaging::ImageProviderInfo^>^ GetInfoAsync() { return m_customEffectHelper->GetInfoAsync(); } \
	virtual Windows::Foundation::IAsyncOperation<Lumia::Imaging::Bitmap^>^ GetBitmapAsync(Lumia::Imaging::Bitmap^ bitmap, Lumia::Imaging::OutputOption outputOption) { return m_customEffectHelper->GetBitmapAsync(bitmap, outputOption); } \
	virtual bool Lock(Lumia::Imaging::RenderRequest^ renderRequest) { return m_customEffectHelper->Lock(renderRequest); } \
	virtual property Lumia::Imaging::IImageProvider^ Source { \
		Lumia::Imaging::IImageProvider^ get() { return m_customEffectHelper->Source; } \
		void set(Lumia::Imaging::IImageProvider^ value) { m_customEffectHelper->Source = value; } \
	}

}}}
