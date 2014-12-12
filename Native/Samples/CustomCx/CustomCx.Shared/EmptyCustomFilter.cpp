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
#include "EmptyCustomFilter.h"

using namespace Lumia::Imaging;
using namespace Lumia::Imaging::Custom;
using namespace Lumia::Imaging::Extras;
using namespace Microsoft::WRL;
using namespace Platform;
using namespace CustomCx;
using namespace Windows::Foundation;

EmptyCustomFilter::EmptyCustomFilter()
{
	// Initialize the helper. This hooks up callbacks to OnBeginProcessing, OnProcessBlock etc.
	m_customFilterHelper = CreateCustomFilterHelper(this);
}

EmptyCustomFilter::~EmptyCustomFilter()
{
	m_customFilterHelper->Close();
}

// Create session state, if needed.
Platform::Object^ EmptyCustomFilter::OnCreateSession()
{
	return nullptr;
}

// Prepare to process. 
void EmptyCustomFilter::OnBeginProcessing(
	CustomFilterSessionInfo* sessionInfo)
{
	sessionInfo->AcceptedColorMode = ColorMode::Bgra8888;
}

// Process a block of pixels.
void EmptyCustomFilter::OnProcessBlock(
	const CustomFilterSessionInfo* sessionInfo, 
	const CustomFilterBlockParameters* blockParameters, 
	const uint32_t* sourcePixels, 
	uint32_t* targetPixels)
{
	sourcePixels += blockParameters->SourceStartIndex;

	for(int y = 0; y < blockParameters->Height; ++y)
	{
		for(int x = 0; x < blockParameters->Width; ++x)
		{
			UINT32 p = sourcePixels[x];

			// TODO: Process pixels.
			
			targetPixels[x] = p;
		}

		sourcePixels += blockParameters->SourcePitch;
		targetPixels += blockParameters->Width;
	}

}
