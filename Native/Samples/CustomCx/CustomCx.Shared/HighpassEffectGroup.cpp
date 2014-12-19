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

#include "pch.h"
#include "HighpassEffectGroup.h"

using namespace Lumia::Imaging;
using namespace Lumia::Imaging::Adjustments;
using namespace Lumia::Imaging::Compositing;
using namespace Lumia::Imaging::Custom;
using namespace Lumia::Imaging::Extras;
using namespace Lumia::Imaging::Transforms;
using namespace Microsoft::WRL;
using namespace Platform;
using namespace Platform::Collections;
using namespace CustomCx;
using namespace Windows::Foundation;

template<typename T>
static void CloseAndSetNull(T^& obj)
{
	if(obj)
	{
		delete obj;
		obj = nullptr;
	}
}

HighpassEffectGroup::HighpassEffectGroup(uint32 kernelSize) :
	HighpassEffectGroup(kernelSize, false)
{
}

HighpassEffectGroup::HighpassEffectGroup(uint32 kernelSize, bool isGrayscale) :
	HighpassEffectGroup(kernelSize, isGrayscale, 1)
{
}

HighpassEffectGroup::HighpassEffectGroup(uint32 kernelSize, bool isGrayscale, uint32 downscaleDivisor)
{
	m_effectGroupAdapter = ref new EffectGroupAdapter(this, this);

	m_kernelSize = kernelSize;
	m_downscaleDivisor = downscaleDivisor;
	m_isGrayscale = isGrayscale;

	m_blurFilter = ref new BlurFilter();
	m_blurredFilterEffect = ref new FilterEffect(/*source*/);
	auto filters = ref new Vector<IFilter^>();
	filters->Append(m_blurFilter);
	m_blurredFilterEffect->Filters = filters;

	m_highPassBlendEffect = ref new BlendEffect( /*source*/);
	m_highPassBlendEffect->ForegroundSource = m_blurredFilterEffect;
	m_highPassBlendEffect->BlendFunction = BlendFunction::SignedDifference;

	if(m_downscaleDivisor > 1)
	{
		m_downscaleFilterEffect = ref new FilterEffect(/*source*/);
		auto filters = ref new Vector<IFilter^>();
		filters->Append(ref new ScaleFilter(1.0 / m_downscaleDivisor));
		m_downscaleFilterEffect->Filters = filters;

		m_downscaleCachingEffect = ref new CachingEffect(m_downscaleFilterEffect);
		m_blurredFilterEffect->Source = m_downscaleCachingEffect;

		m_blurFilter->KernelSize = (std::max)(1, (int)(3.0 * m_kernelSize / m_downscaleDivisor));
	}
	else
	{
		m_blurFilter->KernelSize = (std::max)(1, (int)(3.0 * m_kernelSize));
	}

	if(m_isGrayscale)
	{
		m_highPassGrayscaleFilterEffect = ref new FilterEffect(m_highPassBlendEffect);
		auto filters = ref new Vector<IFilter^>();
		filters->Append(ref new GrayscaleFilter());
		m_highPassGrayscaleFilterEffect->Filters = filters;
	}
}

HighpassEffectGroup::~HighpassEffectGroup()
{
	CloseAndSetNull(m_blurredFilterEffect);
	CloseAndSetNull(m_downscaleFilterEffect);
	CloseAndSetNull(m_downscaleCachingEffect);
	CloseAndSetNull(m_highPassBlendEffect);
	CloseAndSetNull(m_highPassGrayscaleFilterEffect);
}

IImageProvider^ HighpassEffectGroup::PrepareGroup(IImageProvider^ groupSource)
{
	if(m_downscaleDivisor > 1)
	{
		m_downscaleFilterEffect->Source = groupSource;
	}
	else
	{
		m_blurredFilterEffect->Source = groupSource;
	}

	m_highPassBlendEffect->Source = groupSource;

	return m_isGrayscale ? (IImageProvider^)m_highPassGrayscaleFilterEffect : (IImageProvider^)m_highPassBlendEffect;
}

bool HighpassEffectGroup::IsGrayscale::get()
{
	return m_isGrayscale;
}

uint32 HighpassEffectGroup::KernelSize::get()
{
	return m_kernelSize;
}

void HighpassEffectGroup::KernelSize::set(uint32 value)
{
	if(value == m_kernelSize)
	{
		return;
	}

	m_kernelSize = value;

	m_blurFilter->KernelSize = (std::max)(1, (int)(3.0 * m_kernelSize / m_downscaleDivisor));
}

uint32 HighpassEffectGroup::DownscaleDivisor::get()
{
	return m_downscaleDivisor;
}
