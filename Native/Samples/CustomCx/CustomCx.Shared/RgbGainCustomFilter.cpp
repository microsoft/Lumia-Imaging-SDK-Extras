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
#include "RgbGainCustomFilter.h"

using namespace Lumia::Imaging;
using namespace Lumia::Imaging::Custom;
using namespace Lumia::Imaging::Extras;
using namespace Microsoft::WRL;
using namespace Platform;
using namespace CustomCx;
using namespace Windows::Foundation;

RgbGainCustomFilter::RgbGainCustomFilter() :
	m_redLevel(1.0f),
	m_greenLevel(1.0f),
	m_blueLevel(1.0f)
{
	// Initialize the helper. This hooks up callbacks to OnBeginProcessing, OnProcessBlock etc.
	m_customFilterHelper = CreateCustomFilterHelper(this);
}

RgbGainCustomFilter::~RgbGainCustomFilter()
{
	m_customFilterHelper->Close();
}

// Create session state, if needed.
Platform::Object^ RgbGainCustomFilter::OnCreateSession()
{
	return nullptr;
}

// Prepare to process. 
void RgbGainCustomFilter::OnBeginProcessing(
	CustomFilterSessionInfo* sessionInfo)
{
	sessionInfo->AcceptedColorMode = ColorMode::Bgra8888;
}

// Process a block of pixels.
void RgbGainCustomFilter::OnProcessBlock(
	const CustomFilterSessionInfo* sessionInfo, 
	const CustomFilterBlockParameters* blockParameters, 
	const uint32_t* sourcePixels, 
	uint32_t* targetPixels)
{
	int32 redLevelFp = static_cast<int32>(m_redLevel * 256.0f);
	int32 greenLevelFp = static_cast<int32>(m_greenLevel * 256.0f);
	int32 blueLevelFp = static_cast<int32>(m_blueLevel * 256.0f);

	sourcePixels += blockParameters->SourceStartIndex;

	for(int y = 0; y < blockParameters->Height; ++y)
	{
		for(int x = 0; x < blockParameters->Width; ++x)
		{
			uint32 pixel = sourcePixels[x];

			int32 r = (pixel >> 16) & 0xFF;
			int32 g = (pixel >> 8) & 0xFF;
			int32 b = pixel & 0xFF;

			r = (r * redLevelFp) >> 8;
			g = (g * greenLevelFp) >> 8;
			b = (b * blueLevelFp) >> 8;

			r = r < 0 ? 0 : r;
			g = g < 0 ? 0 : g;
			b = b < 0 ? 0 : b;

			r = r > 255 ? 255 : r;
			g = g > 255 ? 255 : g;
			b = b > 255 ? 255 : b;

			pixel = b | (g << 8) | (r << 16) | (0xFF << 24);

			targetPixels[x] = pixel;
		}

		sourcePixels += blockParameters->SourcePitch;
		targetPixels += blockParameters->Width;
	}
}

float RgbGainCustomFilter::RedLevel::get()
{
	return m_redLevel;
}

void RgbGainCustomFilter::RedLevel::set(float value)
{
	m_redLevel = value;
}

float RgbGainCustomFilter::GreenLevel::get()
{
	return m_greenLevel;
}

void RgbGainCustomFilter::GreenLevel::set(float value)
{
	m_greenLevel = value;
}

float RgbGainCustomFilter::BlueLevel::get()
{
	return m_blueLevel;
}

void RgbGainCustomFilter::BlueLevel::set(float value)
{
	m_blueLevel = value;
}
