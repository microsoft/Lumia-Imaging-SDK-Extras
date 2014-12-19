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

#include "EffectGroupCx.h"

namespace CustomCx {

	public ref class HighpassEffectGroup sealed : Lumia::Imaging::IImageProvider, Lumia::Imaging::IImageConsumer, Lumia::Imaging::Custom::IEffectGroup
	{
	public:
		/// <summary>
		/// Constructs a high pass effect with the specified parameters.
		/// </summary>
		/// <param name="kernelSize">The size of the filter kernel. A larger size preserves more of lower frequencies.</param>
		HighpassEffectGroup(uint32 kernelSize);

		/// <summary>
		/// Constructs a high pass effect with the specified parameters.
		/// </summary>
		/// <param name="kernelSize">The size of the filter kernel. A larger size preserves more of lower frequencies.</param>
		HighpassEffectGroup(uint32 kernelSize, bool isGrayscale);

		/// <summary>
		/// Constructs a high pass effect with the specified parameters.
		/// </summary>
		/// <param name="kernelSize">The size of the filter kernel. A larger size preserves more of lower frequencies.</param>
		/// <param name="isGrayscale">True if the highpass effect should give a grayscale result. Otherwise the individual R, G, B channels are treated separately.</param>
		/// <param name="downscaleDivisor">How much to downscale the image to reduce the cost of the internal blur operation, trading speed for some fidelity. Suitable value depends on the kernelSize.</param>
		HighpassEffectGroup(uint32 kernelSize, bool isGrayscale, uint32 downscaleDivisor);

		virtual ~HighpassEffectGroup();

		EFFECTGROUP_WRAP_IIMAGEPROVIDER_AND_IIMAGECONSUMER

		virtual Lumia::Imaging::IImageProvider^ PrepareGroup(Lumia::Imaging::IImageProvider^ groupSource);

		/// <summary>
		/// True if the highpass effect gives a grayscale result. Otherwise the individual R, G, B channels are treated separately.
		/// </summary>
		property bool IsGrayscale
		{
			bool get();
		}

		/// <summary>
		/// The size of the filter kernel. A larger kernel size preserves more of lower frequencies.
		/// </summary>
		property uint32 KernelSize
		{
			uint32 get();
			void set(uint32 value);
		}

		/// <summary>
		/// Controls quality/speed by determinining whether the image should be downscaled internally or not, and by how much. The default value is 1, which means don't downscale.
		/// The user is advised to find the lowest possible value that performs well enough.
		/// </summary>
		property uint32 DownscaleDivisor
		{
			uint32 get();
		}

	private:
		Lumia::Imaging::Custom::EffectGroupAdapter^ m_effectGroupAdapter;

		Lumia::Imaging::Compositing::BlendEffect^ m_highPassBlendEffect;
		Lumia::Imaging::FilterEffect^ m_highPassGrayscaleFilterEffect;
		Lumia::Imaging::FilterEffect^ m_downscaleFilterEffect;
		Lumia::Imaging::CachingEffect^ m_downscaleCachingEffect;
		Lumia::Imaging::FilterEffect^ m_blurredFilterEffect;
		Lumia::Imaging::Adjustments::BlurFilter^ m_blurFilter;

		uint32 m_kernelSize;
		uint32 m_downscaleDivisor;
		bool m_isGrayscale;
	};
}
