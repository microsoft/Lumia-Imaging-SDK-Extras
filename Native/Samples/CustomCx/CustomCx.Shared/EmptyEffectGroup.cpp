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
#include "EmptyEffectGroup.h"

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

EmptyEffectGroup::EmptyEffectGroup()
{
	m_effectGroupAdapter = ref new EffectGroupAdapter(this, this);
}

EmptyEffectGroup::EmptyEffectGroup(IImageProvider^ source)
{
	m_effectGroupAdapter = ref new EffectGroupAdapter(this, this);
	m_effectGroupAdapter->Source = source;
}

EmptyEffectGroup::~EmptyEffectGroup()
{
	// Note: this is a public virtual destructor, which is 
	// really IClosable::Close() (or in .NET terms, IDisposable::Dispose()).
	// By deleting the helper, we will Close/Dispose it. 
	delete m_effectGroupAdapter;
}

IImageProvider^ EmptyEffectGroup::PrepareGroup(IImageProvider^ groupSource)
{
	return groupSource;
}
