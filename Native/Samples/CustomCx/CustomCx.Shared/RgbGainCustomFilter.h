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

#include "CustomFilterCx.h"

namespace CustomCx {

	public ref class RgbGainCustomFilter sealed : Lumia::Imaging::IFilter
	{
	public:
		RgbGainCustomFilter();
		virtual ~RgbGainCustomFilter();

#pragma region IFilter implementation

		virtual Windows::Foundation::IAsyncAction^ PrepareAsync()
		{
			return m_customFilterHelper->PrepareAsync();
		}

		virtual void Apply(Lumia::Imaging::IFilterEffect^ filterEffect)
		{
			return m_customFilterHelper->Apply(filterEffect);
		}

		virtual bool Lock(Lumia::Imaging::RenderRequest^ renderRequest)
		{
			return m_customFilterHelper->Lock(renderRequest);
		}

#pragma endregion

		property float RedLevel
		{
			float get();
			void set(float value);
		}

		property float GreenLevel
		{
			float get();
			void set(float value);
		}

		property float BlueLevel
		{
			float get();
			void set(float value);
		}

	internal:
		Platform::Object^ OnCreateSession();

		void OnBeginProcessing(Lumia::Imaging::Extras::CustomFilterSessionInfo* sessionInfo);

		void OnProcessBlock(
			const Lumia::Imaging::Extras::CustomFilterSessionInfo* sessionInfo,
			const Lumia::Imaging::Custom::CustomFilterBlockParameters* blockParameters,
			const uint32_t* sourcePixels,
			uint32_t* targetPixels);

	private:
		Microsoft::WRL::ComPtr<Lumia::Imaging::Extras::CustomFilterHelper<RgbGainCustomFilter>> m_customFilterHelper;

		float m_redLevel;
		float m_greenLevel;
		float m_blueLevel;
	};
}
