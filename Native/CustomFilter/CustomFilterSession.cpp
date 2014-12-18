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
#include "CustomFilterSession.h"

using namespace ABI::Windows::Storage::Streams;
using namespace Microsoft::WRL;
using namespace Microsoft::WRL::Wrappers;

_Use_decl_annotations_
DECLSPEC_NOTHROW HRESULT ABI::Lumia::Imaging::Extras::Detail::CreateBufferAndGetByteAccessIfNecessary(
	UINT32 requestedLength,
	IBuffer** buffer,
	::Windows::Storage::Streams::IBufferByteAccess** bufferByteAccess,
	BYTE** bufferData)
{
	HRESULT hr = S_OK;

	UINT32 currentCapacity = 0;

	if(SUCCEEDED(hr) && (*buffer))
	{
		hr = (*buffer)->get_Capacity(&currentCapacity);
	}

	if(SUCCEEDED(hr))
	{
		if(currentCapacity < requestedLength)
		{
			ComPtr<IBufferFactory> bufferFactory;

			if(SUCCEEDED(hr))
			{
				HStringReference bufferACID(RuntimeClass_Windows_Storage_Streams_Buffer);
				hr = Windows::Foundation::GetActivationFactory(bufferACID.Get(), &bufferFactory);
			}

			if(SUCCEEDED(hr))
			{
				hr = bufferFactory->Create(requestedLength, buffer);
			}

			if(SUCCEEDED(hr))
			{
				hr = (*buffer)->QueryInterface(IID_PPV_ARGS(bufferByteAccess));
			}
		}
	}

	if(SUCCEEDED(hr))
	{
		hr = (*buffer)->put_Length(requestedLength);
	}

	if(SUCCEEDED(hr))
	{
		hr = (*bufferByteAccess)->Buffer(bufferData);
	}

	if(FAILED(hr))
	{
		*buffer = nullptr;
		*bufferByteAccess = nullptr;
		*bufferData = nullptr;
		::RoOriginateErrorW(hr, 0, L"CustomFilterBase failed to (re)allocate buffer.");
	}

	return hr;
}
