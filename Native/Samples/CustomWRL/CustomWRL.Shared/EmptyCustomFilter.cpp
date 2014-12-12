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
#include "CustomFilterBase.h"
#include "EmptyCustomFilter_h.h"

using namespace ABI::Lumia::Imaging;
using namespace ABI::Lumia::Imaging::Custom;
using namespace ABI::Lumia::Imaging::Extras;
using namespace Microsoft::WRL;
using namespace Microsoft::WRL::Wrappers;
using namespace Windows::Foundation;

namespace ABI { namespace CustomWRL {

	class EmptyCustomFilter : public CustomFilterBase<EmptyCustomFilter, IEmptyCustomFilter>
	{
		InspectableClass(RuntimeClass_CustomWRL_EmptyCustomFilter, BaseTrust)
	public:
		DECLSPEC_NOTHROW EmptyCustomFilter() 
		{
		}
		
		virtual ~EmptyCustomFilter()
		{
		}

		DECLSPEC_NOTHROW HRESULT OnClose()
		{
			// TODO: Clean up.
			return S_OK;
		}

		DECLSPEC_NOTHROW HRESULT OnCreateSession(IInspectable** sessionState)
		{
			*sessionState = nullptr;
			return S_OK;
		}

		DECLSPEC_NOTHROW HRESULT OnBeginProcessing(CustomFilterSessionInfo* sessionInfo)
		{
			sessionInfo->AcceptedColorMode = sessionInfo->RequestedColorMode;
			return S_OK;
		}

		DECLSPEC_NOTHROW HRESULT OnProcessBlock(
			const CustomFilterSessionInfo* sessionInfo,
			const CustomFilterBlockParameters* blockParameters, 
			const UINT32* sourcePixels, 
			UINT32* targetPixels)
		{
			sourcePixels += blockParameters->SourceStartIndex;

			for(int y = 0; y < blockParameters->Height; ++y)
			{
				for(int x = 0; x < blockParameters->Width; ++x)
				{
					UINT32 pixel = sourcePixels[x];

					// TODO: process pixels...

					targetPixels[x] = pixel;
				}

				sourcePixels += blockParameters->SourcePitch;
				targetPixels += blockParameters->Width;
			}

			return S_OK;
		}

	};

	ActivatableClass(EmptyCustomFilter)

}}
