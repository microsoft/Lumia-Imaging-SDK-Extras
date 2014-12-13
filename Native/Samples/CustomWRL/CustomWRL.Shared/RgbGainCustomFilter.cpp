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
#include "RgbGainCustomFilter_h.h"

using namespace ABI::Lumia::Imaging;
using namespace ABI::Lumia::Imaging::Custom;
using namespace ABI::Lumia::Imaging::Extras;

namespace ABI { namespace CustomWRL {

	class RgbGainCustomFilter : public CustomFilterBase<RgbGainCustomFilter, IRgbGainCustomFilter>
	{
		InspectableClass(RuntimeClass_CustomWRL_RgbGainCustomFilter, BaseTrust)
	public:
		DECLSPEC_NOTHROW RgbGainCustomFilter()
		{
			m_redLevel = 1.0f;
			m_greenLevel = 1.0f;
			m_blueLevel = 1.0f;
		}
		
		virtual ~RgbGainCustomFilter()
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
			sessionInfo->AcceptedColorMode = ColorMode_Bgra8888;
			return S_OK;
		}

		DECLSPEC_NOTHROW HRESULT OnProcessBlock(
			const CustomFilterSessionInfo* sessionInfo,
			const CustomFilterBlockParameters* blockParameters, 
			const UINT32* sourcePixels, 
			UINT32* targetPixels)
		{
			INT32 redLevelFp = static_cast<INT32>(m_redLevel * 256.0f);
			INT32 greenLevelFp = static_cast<INT32>(m_greenLevel * 256.0f);
			INT32 blueLevelFp = static_cast<INT32>(m_blueLevel * 256.0f);

			sourcePixels += blockParameters->SourceStartIndex;

			// Making local copies of block width and block height here
			// helps the auto-vectorizer in VS 2013 prove that they are
			// loop-invariant.
			const int blockWidth = blockParameters->Width;
			const int blockHeight = blockParameters->Height;

			// Should not be vectorized due to reason '1106' (outer loops aren't vectorized). Check Output window.
			for(int y = 0; y < blockHeight; ++y)
			{
				// Should be vectorized. Check Output window.
				for(int x = 0; x < blockWidth; ++x)
				{
					UINT32 pixel = sourcePixels[x];

					INT32 r = (pixel >> 16) & 0xFF;
					INT32 g = (pixel >> 8) & 0xFF;
					INT32 b = pixel & 0xFF;

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

			return S_OK;
		}

		IFACEMETHOD(get_RedLevel)(_Out_ float* __returnValue)
		{
			*__returnValue = m_redLevel;
			return S_OK;
		}

		IFACEMETHOD(put_RedLevel)(_In_ float value)
		{
			m_redLevel = value;
			return S_OK;
		}

		IFACEMETHOD(get_GreenLevel)(_Out_ float* __returnValue)
		{
			*__returnValue = m_greenLevel;
			return S_OK;
		}

		IFACEMETHOD(put_GreenLevel)(_In_ float value)
		{
			m_greenLevel = value;
			return S_OK;
		}

		IFACEMETHOD(get_BlueLevel)(_Out_ float* __returnValue)
		{
			*__returnValue = m_blueLevel;
			return S_OK;
		}

		IFACEMETHOD(put_BlueLevel)(_In_ float value)
		{
			m_blueLevel = value;
			return S_OK;
		}

	private:
		float m_redLevel;
		float m_greenLevel;
		float m_blueLevel;
	};

	ActivatableClass(RgbGainCustomFilter)

}}
