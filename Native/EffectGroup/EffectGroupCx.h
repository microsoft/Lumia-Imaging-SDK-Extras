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

namespace Lumia { namespace Imaging { namespace Extras {

#define EFFECTGROUP_WRAP_IIMAGEPROVIDER_AND_IIMAGECONSUMER \
	virtual Windows::Foundation::IAsyncAction^ PreloadAsync() { return m_effectGroupAdapter->PreloadAsync(); } \
	virtual Windows::Foundation::IAsyncOperation<Lumia::Imaging::ImageProviderInfo^>^ GetInfoAsync() { return m_effectGroupAdapter->GetInfoAsync(); } \
	virtual Windows::Foundation::IAsyncOperation<Lumia::Imaging::Bitmap^>^ GetBitmapAsync(Lumia::Imaging::Bitmap^ bitmap, Lumia::Imaging::OutputOption outputOption) { return m_effectGroupAdapter->GetBitmapAsync(bitmap, outputOption); } \
	virtual bool Lock(Lumia::Imaging::RenderRequest^ renderRequest) { return m_effectGroupAdapter->Lock(renderRequest); } \
	virtual property Lumia::Imaging::IImageProvider^ Source { \
		Lumia::Imaging::IImageProvider^ get() { return m_effectGroupAdapter->Source; } \
		void set(Lumia::Imaging::IImageProvider^ value) { m_effectGroupAdapter->Source = value; } \
	}

}}}
