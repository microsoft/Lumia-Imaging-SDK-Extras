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
