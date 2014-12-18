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

#include <wrl\module.h>

extern "C" BOOL WINAPI DllMain(_In_opt_ HINSTANCE, DWORD, _In_opt_ LPVOID);
extern "C" HRESULT WINAPI DllCanUnloadNow();

#if !defined(__WRL_CLASSIC_COM__)
extern "C" HRESULT WINAPI DllGetActivationFactory(_In_ HSTRING, _Deref_out_ IActivationFactory**);

extern "C" HRESULT WINAPI DllGetActivationFactory(_In_ HSTRING activatibleClassId, _Deref_out_ IActivationFactory** factory)
{
    auto &module = Microsoft::WRL::Module<Microsoft::WRL::InProc>::GetModule();
    return module.GetActivationFactory(activatibleClassId, factory);
}
#endif 

#if !defined(__WRL_WINRT_STRICT__)

extern "C" HRESULT WINAPI DllGetClassObject(REFCLSID rclsid, REFIID riid, LPVOID *ppv)
{
    auto &module = Microsoft::WRL::Module<Microsoft::WRL::InProc>::GetModule();
    return module.GetClassObject(rclsid, riid, ppv);
}
#endif

extern "C" BOOL WINAPI DllMain(_In_opt_ HINSTANCE, DWORD, _In_opt_ LPVOID)
{
    return TRUE;
}

extern "C" HRESULT WINAPI DllCanUnloadNow()
{
    const auto &module = Microsoft::WRL::Module<Microsoft::WRL::InProc>::GetModule();    
    return module.GetObjectCount() == 0 ? S_OK : S_FALSE;
}

#if defined(_M_IX86)
#if !defined(__WRL_CLASSIC_COM__)
#pragma comment(linker, "/EXPORT:DllGetActivationFactory=_DllGetActivationFactory@8,PRIVATE")
#endif
#if !defined(__WRL_WINRT_STRICT__)
#pragma comment(linker, "/EXPORT:DllGetClassObject=_DllGetClassObject@12,PRIVATE")
#endif
#pragma comment(linker, "/EXPORT:DllCanUnloadNow=_DllCanUnloadNow@0,PRIVATE")
#elif defined(_M_ARM) || defined(_M_AMD64)
#if !defined(__WRL_CLASSIC_COM__)
#pragma comment(linker, "/EXPORT:DllGetActivationFactory,PRIVATE")
#endif
#if !defined(__WRL_WINRT_STRICT__)
#pragma comment(linker, "/EXPORT:DllGetClassObject,PRIVATE")
#endif
#pragma comment(linker, "/EXPORT:DllCanUnloadNow,PRIVATE")
#endif
