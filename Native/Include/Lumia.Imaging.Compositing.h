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

/* this ALWAYS GENERATED file contains the definitions for the interfaces */


 /* File created by MIDL compiler version 8.00.0603 */
/* at Tue Dec 09 14:28:25 2014
 */
/* Compiler settings for C:\Users\cadahl\AppData\Local\Temp\Lumia.Imaging.Compositing.idl-6f34f7d9:
    Oicf, W1, Zp8, env=Win32 (32b run), target_arch=X86 8.00.0603 
    protocol : dce , ms_ext, c_ext, robust
    error checks: allocation ref bounds_check enum stub_data 
    VC __declspec() decoration level: 
         __declspec(uuid()), __declspec(selectany), __declspec(novtable)
         DECLSPEC_UUID(), MIDL_INTERFACE()
*/
/* @@MIDL_FILE_HEADING(  ) */

#pragma warning( disable: 4049 )  /* more than 64k source lines */


/* verify that the <rpcndr.h> version is high enough to compile this file*/
#ifndef __REQUIRED_RPCNDR_H_VERSION__
#define __REQUIRED_RPCNDR_H_VERSION__ 475
#endif

/* verify that the <rpcsal.h> version is high enough to compile this file*/
#ifndef __REQUIRED_RPCSAL_H_VERSION__
#define __REQUIRED_RPCSAL_H_VERSION__ 100
#endif

#include "rpc.h"
#include "rpcndr.h"

#ifndef __RPCNDR_H_VERSION__
#error this stub requires an updated version of <rpcndr.h>
#endif // __RPCNDR_H_VERSION__

#ifndef COM_NO_WINDOWS_H
#include "windows.h"
#include "ole2.h"
#endif /*COM_NO_WINDOWS_H*/

#ifndef __Lumia2EImaging2ECompositing_h__
#define __Lumia2EImaging2ECompositing_h__

#if defined(_MSC_VER) && (_MSC_VER >= 1020)
#pragma once
#endif

/* Forward Declarations */ 

#ifndef ____FIIterator_1_Lumia__CImaging__CCompositing__CExtractedObjectImageSource_FWD_DEFINED__
#define ____FIIterator_1_Lumia__CImaging__CCompositing__CExtractedObjectImageSource_FWD_DEFINED__
typedef interface __FIIterator_1_Lumia__CImaging__CCompositing__CExtractedObjectImageSource __FIIterator_1_Lumia__CImaging__CCompositing__CExtractedObjectImageSource;

#endif 	/* ____FIIterator_1_Lumia__CImaging__CCompositing__CExtractedObjectImageSource_FWD_DEFINED__ */


#ifndef ____FIIterable_1_Lumia__CImaging__CCompositing__CExtractedObjectImageSource_FWD_DEFINED__
#define ____FIIterable_1_Lumia__CImaging__CCompositing__CExtractedObjectImageSource_FWD_DEFINED__
typedef interface __FIIterable_1_Lumia__CImaging__CCompositing__CExtractedObjectImageSource __FIIterable_1_Lumia__CImaging__CCompositing__CExtractedObjectImageSource;

#endif 	/* ____FIIterable_1_Lumia__CImaging__CCompositing__CExtractedObjectImageSource_FWD_DEFINED__ */


#ifndef ____FIVectorView_1_Lumia__CImaging__CCompositing__CExtractedObjectImageSource_FWD_DEFINED__
#define ____FIVectorView_1_Lumia__CImaging__CCompositing__CExtractedObjectImageSource_FWD_DEFINED__
typedef interface __FIVectorView_1_Lumia__CImaging__CCompositing__CExtractedObjectImageSource __FIVectorView_1_Lumia__CImaging__CCompositing__CExtractedObjectImageSource;

#endif 	/* ____FIVectorView_1_Lumia__CImaging__CCompositing__CExtractedObjectImageSource_FWD_DEFINED__ */


#ifndef ____FIAsyncOperationCompletedHandler_1___FIVectorView_1_Lumia__CImaging__CCompositing__CExtractedObjectImageSource_FWD_DEFINED__
#define ____FIAsyncOperationCompletedHandler_1___FIVectorView_1_Lumia__CImaging__CCompositing__CExtractedObjectImageSource_FWD_DEFINED__
typedef interface __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Lumia__CImaging__CCompositing__CExtractedObjectImageSource __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Lumia__CImaging__CCompositing__CExtractedObjectImageSource;

#endif 	/* ____FIAsyncOperationCompletedHandler_1___FIVectorView_1_Lumia__CImaging__CCompositing__CExtractedObjectImageSource_FWD_DEFINED__ */


#ifndef ____FIAsyncOperation_1___FIVectorView_1_Lumia__CImaging__CCompositing__CExtractedObjectImageSource_FWD_DEFINED__
#define ____FIAsyncOperation_1___FIVectorView_1_Lumia__CImaging__CCompositing__CExtractedObjectImageSource_FWD_DEFINED__
typedef interface __FIAsyncOperation_1___FIVectorView_1_Lumia__CImaging__CCompositing__CExtractedObjectImageSource __FIAsyncOperation_1___FIVectorView_1_Lumia__CImaging__CCompositing__CExtractedObjectImageSource;

#endif 	/* ____FIAsyncOperation_1___FIVectorView_1_Lumia__CImaging__CCompositing__CExtractedObjectImageSource_FWD_DEFINED__ */


#ifndef ____x_ABI_CLumia_CImaging_CCompositing_CIAlphaToGrayscaleFilter_FWD_DEFINED__
#define ____x_ABI_CLumia_CImaging_CCompositing_CIAlphaToGrayscaleFilter_FWD_DEFINED__
typedef interface __x_ABI_CLumia_CImaging_CCompositing_CIAlphaToGrayscaleFilter __x_ABI_CLumia_CImaging_CCompositing_CIAlphaToGrayscaleFilter;

#ifdef __cplusplus
namespace ABI {
    namespace Lumia {
        namespace Imaging {
            namespace Compositing {
                interface IAlphaToGrayscaleFilter;
            } /* end namespace */
        } /* end namespace */
    } /* end namespace */
} /* end namespace */

#endif /* __cplusplus */

#endif 	/* ____x_ABI_CLumia_CImaging_CCompositing_CIAlphaToGrayscaleFilter_FWD_DEFINED__ */


#ifndef ____x_ABI_CLumia_CImaging_CCompositing_CIBlendEffect_FWD_DEFINED__
#define ____x_ABI_CLumia_CImaging_CCompositing_CIBlendEffect_FWD_DEFINED__
typedef interface __x_ABI_CLumia_CImaging_CCompositing_CIBlendEffect __x_ABI_CLumia_CImaging_CCompositing_CIBlendEffect;

#ifdef __cplusplus
namespace ABI {
    namespace Lumia {
        namespace Imaging {
            namespace Compositing {
                interface IBlendEffect;
            } /* end namespace */
        } /* end namespace */
    } /* end namespace */
} /* end namespace */

#endif /* __cplusplus */

#endif 	/* ____x_ABI_CLumia_CImaging_CCompositing_CIBlendEffect_FWD_DEFINED__ */


#ifndef ____x_ABI_CLumia_CImaging_CCompositing_CIBlendEffectFactory_FWD_DEFINED__
#define ____x_ABI_CLumia_CImaging_CCompositing_CIBlendEffectFactory_FWD_DEFINED__
typedef interface __x_ABI_CLumia_CImaging_CCompositing_CIBlendEffectFactory __x_ABI_CLumia_CImaging_CCompositing_CIBlendEffectFactory;

#ifdef __cplusplus
namespace ABI {
    namespace Lumia {
        namespace Imaging {
            namespace Compositing {
                interface IBlendEffectFactory;
            } /* end namespace */
        } /* end namespace */
    } /* end namespace */
} /* end namespace */

#endif /* __cplusplus */

#endif 	/* ____x_ABI_CLumia_CImaging_CCompositing_CIBlendEffectFactory_FWD_DEFINED__ */


#ifndef ____x_ABI_CLumia_CImaging_CCompositing_CIBlendFilter_FWD_DEFINED__
#define ____x_ABI_CLumia_CImaging_CCompositing_CIBlendFilter_FWD_DEFINED__
typedef interface __x_ABI_CLumia_CImaging_CCompositing_CIBlendFilter __x_ABI_CLumia_CImaging_CCompositing_CIBlendFilter;

#ifdef __cplusplus
namespace ABI {
    namespace Lumia {
        namespace Imaging {
            namespace Compositing {
                interface IBlendFilter;
            } /* end namespace */
        } /* end namespace */
    } /* end namespace */
} /* end namespace */

#endif /* __cplusplus */

#endif 	/* ____x_ABI_CLumia_CImaging_CCompositing_CIBlendFilter_FWD_DEFINED__ */


#ifndef ____x_ABI_CLumia_CImaging_CCompositing_CIBlendFilterFactory_FWD_DEFINED__
#define ____x_ABI_CLumia_CImaging_CCompositing_CIBlendFilterFactory_FWD_DEFINED__
typedef interface __x_ABI_CLumia_CImaging_CCompositing_CIBlendFilterFactory __x_ABI_CLumia_CImaging_CCompositing_CIBlendFilterFactory;

#ifdef __cplusplus
namespace ABI {
    namespace Lumia {
        namespace Imaging {
            namespace Compositing {
                interface IBlendFilterFactory;
            } /* end namespace */
        } /* end namespace */
    } /* end namespace */
} /* end namespace */

#endif /* __cplusplus */

#endif 	/* ____x_ABI_CLumia_CImaging_CCompositing_CIBlendFilterFactory_FWD_DEFINED__ */


#ifndef ____x_ABI_CLumia_CImaging_CCompositing_CIExtractedObjectImageSource_FWD_DEFINED__
#define ____x_ABI_CLumia_CImaging_CCompositing_CIExtractedObjectImageSource_FWD_DEFINED__
typedef interface __x_ABI_CLumia_CImaging_CCompositing_CIExtractedObjectImageSource __x_ABI_CLumia_CImaging_CCompositing_CIExtractedObjectImageSource;

#ifdef __cplusplus
namespace ABI {
    namespace Lumia {
        namespace Imaging {
            namespace Compositing {
                interface IExtractedObjectImageSource;
            } /* end namespace */
        } /* end namespace */
    } /* end namespace */
} /* end namespace */

#endif /* __cplusplus */

#endif 	/* ____x_ABI_CLumia_CImaging_CCompositing_CIExtractedObjectImageSource_FWD_DEFINED__ */


#ifndef ____x_ABI_CLumia_CImaging_CCompositing_CIChromaKeyFilter_FWD_DEFINED__
#define ____x_ABI_CLumia_CImaging_CCompositing_CIChromaKeyFilter_FWD_DEFINED__
typedef interface __x_ABI_CLumia_CImaging_CCompositing_CIChromaKeyFilter __x_ABI_CLumia_CImaging_CCompositing_CIChromaKeyFilter;

#ifdef __cplusplus
namespace ABI {
    namespace Lumia {
        namespace Imaging {
            namespace Compositing {
                interface IChromaKeyFilter;
            } /* end namespace */
        } /* end namespace */
    } /* end namespace */
} /* end namespace */

#endif /* __cplusplus */

#endif 	/* ____x_ABI_CLumia_CImaging_CCompositing_CIChromaKeyFilter_FWD_DEFINED__ */


#ifndef ____x_ABI_CLumia_CImaging_CCompositing_CIChromaKeyFilterFactory_FWD_DEFINED__
#define ____x_ABI_CLumia_CImaging_CCompositing_CIChromaKeyFilterFactory_FWD_DEFINED__
typedef interface __x_ABI_CLumia_CImaging_CCompositing_CIChromaKeyFilterFactory __x_ABI_CLumia_CImaging_CCompositing_CIChromaKeyFilterFactory;

#ifdef __cplusplus
namespace ABI {
    namespace Lumia {
        namespace Imaging {
            namespace Compositing {
                interface IChromaKeyFilterFactory;
            } /* end namespace */
        } /* end namespace */
    } /* end namespace */
} /* end namespace */

#endif /* __cplusplus */

#endif 	/* ____x_ABI_CLumia_CImaging_CCompositing_CIChromaKeyFilterFactory_FWD_DEFINED__ */


#ifndef ____x_ABI_CLumia_CImaging_CCompositing_CIImageFusionFilter_FWD_DEFINED__
#define ____x_ABI_CLumia_CImaging_CCompositing_CIImageFusionFilter_FWD_DEFINED__
typedef interface __x_ABI_CLumia_CImaging_CCompositing_CIImageFusionFilter __x_ABI_CLumia_CImaging_CCompositing_CIImageFusionFilter;

#ifdef __cplusplus
namespace ABI {
    namespace Lumia {
        namespace Imaging {
            namespace Compositing {
                interface IImageFusionFilter;
            } /* end namespace */
        } /* end namespace */
    } /* end namespace */
} /* end namespace */

#endif /* __cplusplus */

#endif 	/* ____x_ABI_CLumia_CImaging_CCompositing_CIImageFusionFilter_FWD_DEFINED__ */


#ifndef ____x_ABI_CLumia_CImaging_CCompositing_CIImageFusionFilterFactory_FWD_DEFINED__
#define ____x_ABI_CLumia_CImaging_CCompositing_CIImageFusionFilterFactory_FWD_DEFINED__
typedef interface __x_ABI_CLumia_CImaging_CCompositing_CIImageFusionFilterFactory __x_ABI_CLumia_CImaging_CCompositing_CIImageFusionFilterFactory;

#ifdef __cplusplus
namespace ABI {
    namespace Lumia {
        namespace Imaging {
            namespace Compositing {
                interface IImageFusionFilterFactory;
            } /* end namespace */
        } /* end namespace */
    } /* end namespace */
} /* end namespace */

#endif /* __cplusplus */

#endif 	/* ____x_ABI_CLumia_CImaging_CCompositing_CIImageFusionFilterFactory_FWD_DEFINED__ */


#ifndef ____x_ABI_CLumia_CImaging_CCompositing_CIInteractiveSegmentationMaskRectifier_FWD_DEFINED__
#define ____x_ABI_CLumia_CImaging_CCompositing_CIInteractiveSegmentationMaskRectifier_FWD_DEFINED__
typedef interface __x_ABI_CLumia_CImaging_CCompositing_CIInteractiveSegmentationMaskRectifier __x_ABI_CLumia_CImaging_CCompositing_CIInteractiveSegmentationMaskRectifier;

#ifdef __cplusplus
namespace ABI {
    namespace Lumia {
        namespace Imaging {
            namespace Compositing {
                interface IInteractiveSegmentationMaskRectifier;
            } /* end namespace */
        } /* end namespace */
    } /* end namespace */
} /* end namespace */

#endif /* __cplusplus */

#endif 	/* ____x_ABI_CLumia_CImaging_CCompositing_CIInteractiveSegmentationMaskRectifier_FWD_DEFINED__ */


#ifndef ____x_ABI_CLumia_CImaging_CCompositing_CIInteractiveForegroundSegmenter_FWD_DEFINED__
#define ____x_ABI_CLumia_CImaging_CCompositing_CIInteractiveForegroundSegmenter_FWD_DEFINED__
typedef interface __x_ABI_CLumia_CImaging_CCompositing_CIInteractiveForegroundSegmenter __x_ABI_CLumia_CImaging_CCompositing_CIInteractiveForegroundSegmenter;

#ifdef __cplusplus
namespace ABI {
    namespace Lumia {
        namespace Imaging {
            namespace Compositing {
                interface IInteractiveForegroundSegmenter;
            } /* end namespace */
        } /* end namespace */
    } /* end namespace */
} /* end namespace */

#endif /* __cplusplus */

#endif 	/* ____x_ABI_CLumia_CImaging_CCompositing_CIInteractiveForegroundSegmenter_FWD_DEFINED__ */


#ifndef ____x_ABI_CLumia_CImaging_CCompositing_CIInteractiveForegroundSegmenterFactory_FWD_DEFINED__
#define ____x_ABI_CLumia_CImaging_CCompositing_CIInteractiveForegroundSegmenterFactory_FWD_DEFINED__
typedef interface __x_ABI_CLumia_CImaging_CCompositing_CIInteractiveForegroundSegmenterFactory __x_ABI_CLumia_CImaging_CCompositing_CIInteractiveForegroundSegmenterFactory;

#ifdef __cplusplus
namespace ABI {
    namespace Lumia {
        namespace Imaging {
            namespace Compositing {
                interface IInteractiveForegroundSegmenterFactory;
            } /* end namespace */
        } /* end namespace */
    } /* end namespace */
} /* end namespace */

#endif /* __cplusplus */

#endif 	/* ____x_ABI_CLumia_CImaging_CCompositing_CIInteractiveForegroundSegmenterFactory_FWD_DEFINED__ */


#ifndef ____x_ABI_CLumia_CImaging_CCompositing_CIObjectExtractor_FWD_DEFINED__
#define ____x_ABI_CLumia_CImaging_CCompositing_CIObjectExtractor_FWD_DEFINED__
typedef interface __x_ABI_CLumia_CImaging_CCompositing_CIObjectExtractor __x_ABI_CLumia_CImaging_CCompositing_CIObjectExtractor;

#ifdef __cplusplus
namespace ABI {
    namespace Lumia {
        namespace Imaging {
            namespace Compositing {
                interface IObjectExtractor;
            } /* end namespace */
        } /* end namespace */
    } /* end namespace */
} /* end namespace */

#endif /* __cplusplus */

#endif 	/* ____x_ABI_CLumia_CImaging_CCompositing_CIObjectExtractor_FWD_DEFINED__ */


#ifndef ____x_ABI_CLumia_CImaging_CCompositing_CIObjectExtractorFactory_FWD_DEFINED__
#define ____x_ABI_CLumia_CImaging_CCompositing_CIObjectExtractorFactory_FWD_DEFINED__
typedef interface __x_ABI_CLumia_CImaging_CCompositing_CIObjectExtractorFactory __x_ABI_CLumia_CImaging_CCompositing_CIObjectExtractorFactory;

#ifdef __cplusplus
namespace ABI {
    namespace Lumia {
        namespace Imaging {
            namespace Compositing {
                interface IObjectExtractorFactory;
            } /* end namespace */
        } /* end namespace */
    } /* end namespace */
} /* end namespace */

#endif /* __cplusplus */

#endif 	/* ____x_ABI_CLumia_CImaging_CCompositing_CIObjectExtractorFactory_FWD_DEFINED__ */


/* header files for imported files */
#include "inspectable.h"
#include "AsyncInfo.h"
#include "EventToken.h"
#include "Windows.Foundation.h"
#include "Lumia.Imaging.h"

#ifdef __cplusplus
extern "C"{
#endif 


/* interface __MIDL_itf_Lumia2EImaging2ECompositing_0000_0000 */
/* [local] */ 

#ifdef __cplusplus
} /*extern "C"*/ 
#endif
#include <windows.foundation.collections.h>
#ifdef __cplusplus
extern "C" {
#endif
#ifdef __cplusplus
namespace ABI {
namespace Lumia {
namespace Imaging {
namespace Compositing {
class ExtractedObjectImageSource;
} /*Compositing*/
} /*Imaging*/
} /*Lumia*/
}
#endif

#ifdef __cplusplus
namespace ABI {
namespace Lumia {
namespace Imaging {
namespace Compositing {
interface IExtractedObjectImageSource;
} /*Compositing*/
} /*Imaging*/
} /*Lumia*/
}
#endif


/* interface __MIDL_itf_Lumia2EImaging2ECompositing_0000_0000 */
/* [local] */ 




extern RPC_IF_HANDLE __MIDL_itf_Lumia2EImaging2ECompositing_0000_0000_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_Lumia2EImaging2ECompositing_0000_0000_v0_0_s_ifspec;

/* interface __MIDL_itf_Lumia2EImaging2ECompositing_0000_2003 */




/* interface __MIDL_itf_Lumia2EImaging2ECompositing_0000_2003 */




extern RPC_IF_HANDLE __MIDL_itf_Lumia2EImaging2ECompositing_0000_2003_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_Lumia2EImaging2ECompositing_0000_2003_v0_0_s_ifspec;

/* interface __MIDL_itf_Lumia2EImaging2ECompositing_0000_0001 */
/* [local] */ 

#ifndef DEF___FIIterator_1_Lumia__CImaging__CCompositing__CExtractedObjectImageSource_USE
#define DEF___FIIterator_1_Lumia__CImaging__CCompositing__CExtractedObjectImageSource_USE
#if defined(__cplusplus) && !defined(RO_NO_TEMPLATE_NAME)
} /*extern "C"*/ 
namespace ABI { namespace Windows { namespace Foundation { namespace Collections {
template <>
struct __declspec(uuid("25149759-7f34-5fef-a976-f6a19fca7452"))
IIterator<ABI::Lumia::Imaging::Compositing::ExtractedObjectImageSource*> : IIterator_impl<ABI::Windows::Foundation::Internal::AggregateType<ABI::Lumia::Imaging::Compositing::ExtractedObjectImageSource*, ABI::Lumia::Imaging::Compositing::IExtractedObjectImageSource*>> {
static const wchar_t* z_get_rc_name_impl() {
return L"Windows.Foundation.Collections.IIterator`1<Lumia.Imaging.Compositing.ExtractedObjectImageSource>"; }
};
typedef IIterator<ABI::Lumia::Imaging::Compositing::ExtractedObjectImageSource*> __FIIterator_1_Lumia__CImaging__CCompositing__CExtractedObjectImageSource_t;
#define ____FIIterator_1_Lumia__CImaging__CCompositing__CExtractedObjectImageSource_FWD_DEFINED__
#define __FIIterator_1_Lumia__CImaging__CCompositing__CExtractedObjectImageSource ABI::Windows::Foundation::Collections::__FIIterator_1_Lumia__CImaging__CCompositing__CExtractedObjectImageSource_t

/* ABI */ } /* Windows */ } /* Foundation */ } /* Collections */ }
extern "C" {
#endif //__cplusplus
#endif /* DEF___FIIterator_1_Lumia__CImaging__CCompositing__CExtractedObjectImageSource_USE */


/* interface __MIDL_itf_Lumia2EImaging2ECompositing_0000_0001 */
/* [local] */ 




extern RPC_IF_HANDLE __MIDL_itf_Lumia2EImaging2ECompositing_0000_0001_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_Lumia2EImaging2ECompositing_0000_0001_v0_0_s_ifspec;

/* interface __MIDL_itf_Lumia2EImaging2ECompositing_0000_2004 */




/* interface __MIDL_itf_Lumia2EImaging2ECompositing_0000_2004 */




extern RPC_IF_HANDLE __MIDL_itf_Lumia2EImaging2ECompositing_0000_2004_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_Lumia2EImaging2ECompositing_0000_2004_v0_0_s_ifspec;

/* interface __MIDL_itf_Lumia2EImaging2ECompositing_0000_0002 */
/* [local] */ 

#ifndef DEF___FIIterable_1_Lumia__CImaging__CCompositing__CExtractedObjectImageSource_USE
#define DEF___FIIterable_1_Lumia__CImaging__CCompositing__CExtractedObjectImageSource_USE
#if defined(__cplusplus) && !defined(RO_NO_TEMPLATE_NAME)
} /*extern "C"*/ 
namespace ABI { namespace Windows { namespace Foundation { namespace Collections {
template <>
struct __declspec(uuid("90cb1b80-c21c-5031-89ca-5f28c8d70765"))
IIterable<ABI::Lumia::Imaging::Compositing::ExtractedObjectImageSource*> : IIterable_impl<ABI::Windows::Foundation::Internal::AggregateType<ABI::Lumia::Imaging::Compositing::ExtractedObjectImageSource*, ABI::Lumia::Imaging::Compositing::IExtractedObjectImageSource*>> {
static const wchar_t* z_get_rc_name_impl() {
return L"Windows.Foundation.Collections.IIterable`1<Lumia.Imaging.Compositing.ExtractedObjectImageSource>"; }
};
typedef IIterable<ABI::Lumia::Imaging::Compositing::ExtractedObjectImageSource*> __FIIterable_1_Lumia__CImaging__CCompositing__CExtractedObjectImageSource_t;
#define ____FIIterable_1_Lumia__CImaging__CCompositing__CExtractedObjectImageSource_FWD_DEFINED__
#define __FIIterable_1_Lumia__CImaging__CCompositing__CExtractedObjectImageSource ABI::Windows::Foundation::Collections::__FIIterable_1_Lumia__CImaging__CCompositing__CExtractedObjectImageSource_t

/* ABI */ } /* Windows */ } /* Foundation */ } /* Collections */ }
extern "C" {
#endif //__cplusplus
#endif /* DEF___FIIterable_1_Lumia__CImaging__CCompositing__CExtractedObjectImageSource_USE */


/* interface __MIDL_itf_Lumia2EImaging2ECompositing_0000_0002 */
/* [local] */ 




extern RPC_IF_HANDLE __MIDL_itf_Lumia2EImaging2ECompositing_0000_0002_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_Lumia2EImaging2ECompositing_0000_0002_v0_0_s_ifspec;

/* interface __MIDL_itf_Lumia2EImaging2ECompositing_0000_2005 */




/* interface __MIDL_itf_Lumia2EImaging2ECompositing_0000_2005 */




extern RPC_IF_HANDLE __MIDL_itf_Lumia2EImaging2ECompositing_0000_2005_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_Lumia2EImaging2ECompositing_0000_2005_v0_0_s_ifspec;

/* interface __MIDL_itf_Lumia2EImaging2ECompositing_0000_0003 */
/* [local] */ 

#ifndef DEF___FIVectorView_1_Lumia__CImaging__CCompositing__CExtractedObjectImageSource_USE
#define DEF___FIVectorView_1_Lumia__CImaging__CCompositing__CExtractedObjectImageSource_USE
#if defined(__cplusplus) && !defined(RO_NO_TEMPLATE_NAME)
} /*extern "C"*/ 
namespace ABI { namespace Windows { namespace Foundation { namespace Collections {
template <>
struct __declspec(uuid("11fd42fe-09f3-58ef-8995-e4f658dba1c4"))
IVectorView<ABI::Lumia::Imaging::Compositing::ExtractedObjectImageSource*> : IVectorView_impl<ABI::Windows::Foundation::Internal::AggregateType<ABI::Lumia::Imaging::Compositing::ExtractedObjectImageSource*, ABI::Lumia::Imaging::Compositing::IExtractedObjectImageSource*>> {
static const wchar_t* z_get_rc_name_impl() {
return L"Windows.Foundation.Collections.IVectorView`1<Lumia.Imaging.Compositing.ExtractedObjectImageSource>"; }
};
typedef IVectorView<ABI::Lumia::Imaging::Compositing::ExtractedObjectImageSource*> __FIVectorView_1_Lumia__CImaging__CCompositing__CExtractedObjectImageSource_t;
#define ____FIVectorView_1_Lumia__CImaging__CCompositing__CExtractedObjectImageSource_FWD_DEFINED__
#define __FIVectorView_1_Lumia__CImaging__CCompositing__CExtractedObjectImageSource ABI::Windows::Foundation::Collections::__FIVectorView_1_Lumia__CImaging__CCompositing__CExtractedObjectImageSource_t

/* ABI */ } /* Windows */ } /* Foundation */ } /* Collections */ }
extern "C" {
#endif //__cplusplus
#endif /* DEF___FIVectorView_1_Lumia__CImaging__CCompositing__CExtractedObjectImageSource_USE */


/* interface __MIDL_itf_Lumia2EImaging2ECompositing_0000_0003 */
/* [local] */ 




extern RPC_IF_HANDLE __MIDL_itf_Lumia2EImaging2ECompositing_0000_0003_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_Lumia2EImaging2ECompositing_0000_0003_v0_0_s_ifspec;

/* interface __MIDL_itf_Lumia2EImaging2ECompositing_0000_2006 */




/* interface __MIDL_itf_Lumia2EImaging2ECompositing_0000_2006 */




extern RPC_IF_HANDLE __MIDL_itf_Lumia2EImaging2ECompositing_0000_2006_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_Lumia2EImaging2ECompositing_0000_2006_v0_0_s_ifspec;

/* interface __MIDL_itf_Lumia2EImaging2ECompositing_0000_0004 */
/* [local] */ 

#ifndef DEF___FIAsyncOperationCompletedHandler_1___FIVectorView_1_Lumia__CImaging__CCompositing__CExtractedObjectImageSource_USE
#define DEF___FIAsyncOperationCompletedHandler_1___FIVectorView_1_Lumia__CImaging__CCompositing__CExtractedObjectImageSource_USE
#if defined(__cplusplus) && !defined(RO_NO_TEMPLATE_NAME)
} /*extern "C"*/ 
namespace ABI { namespace Windows { namespace Foundation {
template <>
struct __declspec(uuid("88c512cd-8a44-586d-a426-53f675d9ade2"))
IAsyncOperationCompletedHandler<__FIVectorView_1_Lumia__CImaging__CCompositing__CExtractedObjectImageSource*> : IAsyncOperationCompletedHandler_impl<__FIVectorView_1_Lumia__CImaging__CCompositing__CExtractedObjectImageSource*> {
static const wchar_t* z_get_rc_name_impl() {
return L"Windows.Foundation.AsyncOperationCompletedHandler`1<Windows.Foundation.Collections.IVectorView`1<Lumia.Imaging.Compositing.ExtractedObjectImageSource>>"; }
};
typedef IAsyncOperationCompletedHandler<__FIVectorView_1_Lumia__CImaging__CCompositing__CExtractedObjectImageSource*> __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Lumia__CImaging__CCompositing__CExtractedObjectImageSource_t;
#define ____FIAsyncOperationCompletedHandler_1___FIVectorView_1_Lumia__CImaging__CCompositing__CExtractedObjectImageSource_FWD_DEFINED__
#define __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Lumia__CImaging__CCompositing__CExtractedObjectImageSource ABI::Windows::Foundation::__FIAsyncOperationCompletedHandler_1___FIVectorView_1_Lumia__CImaging__CCompositing__CExtractedObjectImageSource_t

/* ABI */ } /* Windows */ } /* Foundation */ }
extern "C" {
#endif //__cplusplus
#endif /* DEF___FIAsyncOperationCompletedHandler_1___FIVectorView_1_Lumia__CImaging__CCompositing__CExtractedObjectImageSource_USE */


/* interface __MIDL_itf_Lumia2EImaging2ECompositing_0000_0004 */
/* [local] */ 




extern RPC_IF_HANDLE __MIDL_itf_Lumia2EImaging2ECompositing_0000_0004_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_Lumia2EImaging2ECompositing_0000_0004_v0_0_s_ifspec;

/* interface __MIDL_itf_Lumia2EImaging2ECompositing_0000_2007 */




/* interface __MIDL_itf_Lumia2EImaging2ECompositing_0000_2007 */




extern RPC_IF_HANDLE __MIDL_itf_Lumia2EImaging2ECompositing_0000_2007_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_Lumia2EImaging2ECompositing_0000_2007_v0_0_s_ifspec;

/* interface __MIDL_itf_Lumia2EImaging2ECompositing_0000_0005 */
/* [local] */ 

#ifndef DEF___FIAsyncOperation_1___FIVectorView_1_Lumia__CImaging__CCompositing__CExtractedObjectImageSource_USE
#define DEF___FIAsyncOperation_1___FIVectorView_1_Lumia__CImaging__CCompositing__CExtractedObjectImageSource_USE
#if defined(__cplusplus) && !defined(RO_NO_TEMPLATE_NAME)
} /*extern "C"*/ 
namespace ABI { namespace Windows { namespace Foundation {
template <>
struct __declspec(uuid("632b608d-7164-59ef-a3c5-af2479d3171a"))
IAsyncOperation<__FIVectorView_1_Lumia__CImaging__CCompositing__CExtractedObjectImageSource*> : IAsyncOperation_impl<__FIVectorView_1_Lumia__CImaging__CCompositing__CExtractedObjectImageSource*> {
static const wchar_t* z_get_rc_name_impl() {
return L"Windows.Foundation.IAsyncOperation`1<Windows.Foundation.Collections.IVectorView`1<Lumia.Imaging.Compositing.ExtractedObjectImageSource>>"; }
};
typedef IAsyncOperation<__FIVectorView_1_Lumia__CImaging__CCompositing__CExtractedObjectImageSource*> __FIAsyncOperation_1___FIVectorView_1_Lumia__CImaging__CCompositing__CExtractedObjectImageSource_t;
#define ____FIAsyncOperation_1___FIVectorView_1_Lumia__CImaging__CCompositing__CExtractedObjectImageSource_FWD_DEFINED__
#define __FIAsyncOperation_1___FIVectorView_1_Lumia__CImaging__CCompositing__CExtractedObjectImageSource ABI::Windows::Foundation::__FIAsyncOperation_1___FIVectorView_1_Lumia__CImaging__CCompositing__CExtractedObjectImageSource_t

/* ABI */ } /* Windows */ } /* Foundation */ }
extern "C" {
#endif //__cplusplus
#endif /* DEF___FIAsyncOperation_1___FIVectorView_1_Lumia__CImaging__CCompositing__CExtractedObjectImageSource_USE */
#if defined(__cplusplus)
}
#endif // defined(__cplusplus)
#include <Windows.Foundation.h>
#if !defined(__lumia2Eimaging_h__)
#include "Lumia.Imaging.h"
#endif // !defined(__lumia2Eimaging_h__)
#if !defined(__windows2Eui_h__)
#include <Windows.UI.h>
#endif // !defined(__windows2Eui_h__)
#if defined(__cplusplus)
extern "C" {
#endif // defined(__cplusplus)



#if !defined(__cplusplus)
#if !defined(__cplusplus)

typedef enum __x_ABI_CLumia_CImaging_CMaskAnnotationType __x_ABI_CLumia_CImaging_CMaskAnnotationType;


#endif /* end if !defined(__cplusplus) */


#endif
#if !defined(__cplusplus)
#if !defined(__cplusplus)

typedef enum __x_ABI_CLumia_CImaging_COutputOption __x_ABI_CLumia_CImaging_COutputOption;


#endif /* end if !defined(__cplusplus) */


#endif

#if !defined(__cplusplus)
typedef struct __x_ABI_CWindows_CFoundation_CRect __x_ABI_CWindows_CFoundation_CRect;

#endif
#if !defined(__cplusplus)
typedef struct __x_ABI_CWindows_CUI_CColor __x_ABI_CWindows_CUI_CColor;

#endif
#if !defined(__cplusplus)
#if !defined(__cplusplus)

typedef enum __x_ABI_CLumia_CImaging_CCompositing_CBlendFunction __x_ABI_CLumia_CImaging_CCompositing_CBlendFunction;


#endif /* end if !defined(__cplusplus) */


#endif














#ifdef __cplusplus
namespace ABI {
namespace Lumia {
namespace Imaging {
namespace Compositing {
class AlphaToGrayscaleFilter;
} /*Compositing*/
} /*Imaging*/
} /*Lumia*/
}
#endif
#ifdef __cplusplus
namespace ABI {
namespace Lumia {
namespace Imaging {
namespace Compositing {
class BlendEffect;
} /*Compositing*/
} /*Imaging*/
} /*Lumia*/
}
#endif
#ifdef __cplusplus
namespace ABI {
namespace Lumia {
namespace Imaging {
namespace Compositing {
class BlendFilter;
} /*Compositing*/
} /*Imaging*/
} /*Lumia*/
}
#endif
#ifdef __cplusplus
namespace ABI {
namespace Lumia {
namespace Imaging {
namespace Compositing {
class ChromaKeyFilter;
} /*Compositing*/
} /*Imaging*/
} /*Lumia*/
}
#endif
#ifdef __cplusplus
namespace ABI {
namespace Lumia {
namespace Imaging {
namespace Compositing {
class ImageFusionFilter;
} /*Compositing*/
} /*Imaging*/
} /*Lumia*/
}
#endif
#ifdef __cplusplus
namespace ABI {
namespace Lumia {
namespace Imaging {
namespace Compositing {
class InteractiveSegmentationMaskRectifier;
} /*Compositing*/
} /*Imaging*/
} /*Lumia*/
}
#endif
#ifdef __cplusplus
namespace ABI {
namespace Lumia {
namespace Imaging {
namespace Compositing {
class InteractiveForegroundSegmenter;
} /*Compositing*/
} /*Imaging*/
} /*Lumia*/
}
#endif
#ifdef __cplusplus
namespace ABI {
namespace Lumia {
namespace Imaging {
namespace Compositing {
class ObjectExtractor;
} /*Compositing*/
} /*Imaging*/
} /*Lumia*/
}
#endif


/* interface __MIDL_itf_Lumia2EImaging2ECompositing_0000_0005 */
/* [local] */ 





#ifdef __cplusplus

} /* end extern "C" */
namespace ABI {
    namespace Lumia {
        namespace Imaging {
            
            typedef enum MaskAnnotationType MaskAnnotationType;
            
        } /* end namespace */
    } /* end namespace */
} /* end namespace */

extern "C" { 
#endif

#ifdef __cplusplus

} /* end extern "C" */
namespace ABI {
    namespace Lumia {
        namespace Imaging {
            
            typedef enum OutputOption OutputOption;
            
        } /* end namespace */
    } /* end namespace */
} /* end namespace */

extern "C" { 
#endif


#ifdef __cplusplus

} /* end extern "C" */
namespace ABI {
    namespace Windows {
        namespace Foundation {
            
            typedef struct Rect Rect;
            
        } /* end namespace */
    } /* end namespace */
} /* end namespace */

extern "C" { 
#endif

#ifdef __cplusplus

} /* end extern "C" */
namespace ABI {
    namespace Windows {
        namespace UI {
            
            typedef struct Color Color;
            
        } /* end namespace */
    } /* end namespace */
} /* end namespace */

extern "C" { 
#endif

#ifdef __cplusplus

} /* end extern "C" */
namespace ABI {
    namespace Lumia {
        namespace Imaging {
            namespace Compositing {
                
                typedef enum BlendFunction BlendFunction;
                
            } /* end namespace */
        } /* end namespace */
    } /* end namespace */
} /* end namespace */

extern "C" { 
#endif

















extern RPC_IF_HANDLE __MIDL_itf_Lumia2EImaging2ECompositing_0000_0005_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_Lumia2EImaging2ECompositing_0000_0005_v0_0_s_ifspec;

/* interface __MIDL_itf_Lumia2EImaging2ECompositing_0000_2008 */




/* interface __MIDL_itf_Lumia2EImaging2ECompositing_0000_2008 */




extern RPC_IF_HANDLE __MIDL_itf_Lumia2EImaging2ECompositing_0000_2008_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_Lumia2EImaging2ECompositing_0000_2008_v0_0_s_ifspec;

/* interface __MIDL_itf_Lumia2EImaging2ECompositing_0000_0006 */
/* [local] */ 

#ifndef DEF___FIIterator_1_Lumia__CImaging__CCompositing__CExtractedObjectImageSource
#define DEF___FIIterator_1_Lumia__CImaging__CCompositing__CExtractedObjectImageSource
#if !defined(__cplusplus) || defined(RO_NO_TEMPLATE_NAME)


/* interface __MIDL_itf_Lumia2EImaging2ECompositing_0000_0006 */
/* [local] */ 



extern RPC_IF_HANDLE __MIDL_itf_Lumia2EImaging2ECompositing_0000_0006_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_Lumia2EImaging2ECompositing_0000_0006_v0_0_s_ifspec;

#ifndef ____FIIterator_1_Lumia__CImaging__CCompositing__CExtractedObjectImageSource_INTERFACE_DEFINED__
#define ____FIIterator_1_Lumia__CImaging__CCompositing__CExtractedObjectImageSource_INTERFACE_DEFINED__

/* interface __FIIterator_1_Lumia__CImaging__CCompositing__CExtractedObjectImageSource */
/* [unique][uuid][object] */ 



/* interface __FIIterator_1_Lumia__CImaging__CCompositing__CExtractedObjectImageSource */
/* [unique][uuid][object] */ 


EXTERN_C const IID IID___FIIterator_1_Lumia__CImaging__CCompositing__CExtractedObjectImageSource;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("25149759-7f34-5fef-a976-f6a19fca7452")
    __FIIterator_1_Lumia__CImaging__CCompositing__CExtractedObjectImageSource : public IInspectable
    {
    public:
        virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_Current( 
            /* [retval][out] */ __RPC__deref_out_opt ABI::Lumia::Imaging::Compositing::IExtractedObjectImageSource **current) = 0;
        
        virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_HasCurrent( 
            /* [retval][out] */ __RPC__out boolean *hasCurrent) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE MoveNext( 
            /* [retval][out] */ __RPC__out boolean *hasCurrent) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetMany( 
            /* [in] */ unsigned int capacity,
            /* [size_is][length_is][out] */ __RPC__out_ecount_part(capacity, *actual) ABI::Lumia::Imaging::Compositing::IExtractedObjectImageSource **items,
            /* [retval][out] */ __RPC__out unsigned int *actual) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct __FIIterator_1_Lumia__CImaging__CCompositing__CExtractedObjectImageSourceVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            __RPC__in __FIIterator_1_Lumia__CImaging__CCompositing__CExtractedObjectImageSource * This,
            /* [in] */ __RPC__in REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            __RPC__in __FIIterator_1_Lumia__CImaging__CCompositing__CExtractedObjectImageSource * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            __RPC__in __FIIterator_1_Lumia__CImaging__CCompositing__CExtractedObjectImageSource * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetIids )( 
            __RPC__in __FIIterator_1_Lumia__CImaging__CCompositing__CExtractedObjectImageSource * This,
            /* [out] */ __RPC__out ULONG *iidCount,
            /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
        
        HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )( 
            __RPC__in __FIIterator_1_Lumia__CImaging__CCompositing__CExtractedObjectImageSource * This,
            /* [out] */ __RPC__deref_out_opt HSTRING *className);
        
        HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )( 
            __RPC__in __FIIterator_1_Lumia__CImaging__CCompositing__CExtractedObjectImageSource * This,
            /* [out] */ __RPC__out TrustLevel *trustLevel);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_Current )( 
            __RPC__in __FIIterator_1_Lumia__CImaging__CCompositing__CExtractedObjectImageSource * This,
            /* [retval][out] */ __RPC__deref_out_opt __x_ABI_CLumia_CImaging_CCompositing_CIExtractedObjectImageSource **current);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_HasCurrent )( 
            __RPC__in __FIIterator_1_Lumia__CImaging__CCompositing__CExtractedObjectImageSource * This,
            /* [retval][out] */ __RPC__out boolean *hasCurrent);
        
        HRESULT ( STDMETHODCALLTYPE *MoveNext )( 
            __RPC__in __FIIterator_1_Lumia__CImaging__CCompositing__CExtractedObjectImageSource * This,
            /* [retval][out] */ __RPC__out boolean *hasCurrent);
        
        HRESULT ( STDMETHODCALLTYPE *GetMany )( 
            __RPC__in __FIIterator_1_Lumia__CImaging__CCompositing__CExtractedObjectImageSource * This,
            /* [in] */ unsigned int capacity,
            /* [size_is][length_is][out] */ __RPC__out_ecount_part(capacity, *actual) __x_ABI_CLumia_CImaging_CCompositing_CIExtractedObjectImageSource **items,
            /* [retval][out] */ __RPC__out unsigned int *actual);
        
        END_INTERFACE
    } __FIIterator_1_Lumia__CImaging__CCompositing__CExtractedObjectImageSourceVtbl;

    interface __FIIterator_1_Lumia__CImaging__CCompositing__CExtractedObjectImageSource
    {
        CONST_VTBL struct __FIIterator_1_Lumia__CImaging__CCompositing__CExtractedObjectImageSourceVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define __FIIterator_1_Lumia__CImaging__CCompositing__CExtractedObjectImageSource_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __FIIterator_1_Lumia__CImaging__CCompositing__CExtractedObjectImageSource_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __FIIterator_1_Lumia__CImaging__CCompositing__CExtractedObjectImageSource_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __FIIterator_1_Lumia__CImaging__CCompositing__CExtractedObjectImageSource_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 

#define __FIIterator_1_Lumia__CImaging__CCompositing__CExtractedObjectImageSource_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 

#define __FIIterator_1_Lumia__CImaging__CCompositing__CExtractedObjectImageSource_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 


#define __FIIterator_1_Lumia__CImaging__CCompositing__CExtractedObjectImageSource_get_Current(This,current)	\
    ( (This)->lpVtbl -> get_Current(This,current) ) 

#define __FIIterator_1_Lumia__CImaging__CCompositing__CExtractedObjectImageSource_get_HasCurrent(This,hasCurrent)	\
    ( (This)->lpVtbl -> get_HasCurrent(This,hasCurrent) ) 

#define __FIIterator_1_Lumia__CImaging__CCompositing__CExtractedObjectImageSource_MoveNext(This,hasCurrent)	\
    ( (This)->lpVtbl -> MoveNext(This,hasCurrent) ) 

#define __FIIterator_1_Lumia__CImaging__CCompositing__CExtractedObjectImageSource_GetMany(This,capacity,items,actual)	\
    ( (This)->lpVtbl -> GetMany(This,capacity,items,actual) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* ____FIIterator_1_Lumia__CImaging__CCompositing__CExtractedObjectImageSource_INTERFACE_DEFINED__ */


/* interface __MIDL_itf_Lumia2EImaging2ECompositing_0000_0007 */
/* [local] */ 

#endif /* pinterface */
#endif /* DEF___FIIterator_1_Lumia__CImaging__CCompositing__CExtractedObjectImageSource */


/* interface __MIDL_itf_Lumia2EImaging2ECompositing_0000_0007 */
/* [local] */ 



extern RPC_IF_HANDLE __MIDL_itf_Lumia2EImaging2ECompositing_0000_0007_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_Lumia2EImaging2ECompositing_0000_0007_v0_0_s_ifspec;

/* interface __MIDL_itf_Lumia2EImaging2ECompositing_0000_2009 */




/* interface __MIDL_itf_Lumia2EImaging2ECompositing_0000_2009 */




extern RPC_IF_HANDLE __MIDL_itf_Lumia2EImaging2ECompositing_0000_2009_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_Lumia2EImaging2ECompositing_0000_2009_v0_0_s_ifspec;

/* interface __MIDL_itf_Lumia2EImaging2ECompositing_0000_0008 */
/* [local] */ 

#ifndef DEF___FIIterable_1_Lumia__CImaging__CCompositing__CExtractedObjectImageSource
#define DEF___FIIterable_1_Lumia__CImaging__CCompositing__CExtractedObjectImageSource
#if !defined(__cplusplus) || defined(RO_NO_TEMPLATE_NAME)


/* interface __MIDL_itf_Lumia2EImaging2ECompositing_0000_0008 */
/* [local] */ 



extern RPC_IF_HANDLE __MIDL_itf_Lumia2EImaging2ECompositing_0000_0008_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_Lumia2EImaging2ECompositing_0000_0008_v0_0_s_ifspec;

#ifndef ____FIIterable_1_Lumia__CImaging__CCompositing__CExtractedObjectImageSource_INTERFACE_DEFINED__
#define ____FIIterable_1_Lumia__CImaging__CCompositing__CExtractedObjectImageSource_INTERFACE_DEFINED__

/* interface __FIIterable_1_Lumia__CImaging__CCompositing__CExtractedObjectImageSource */
/* [unique][uuid][object] */ 



/* interface __FIIterable_1_Lumia__CImaging__CCompositing__CExtractedObjectImageSource */
/* [unique][uuid][object] */ 


EXTERN_C const IID IID___FIIterable_1_Lumia__CImaging__CCompositing__CExtractedObjectImageSource;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("90cb1b80-c21c-5031-89ca-5f28c8d70765")
    __FIIterable_1_Lumia__CImaging__CCompositing__CExtractedObjectImageSource : public IInspectable
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE First( 
            /* [retval][out] */ __RPC__deref_out_opt __FIIterator_1_Lumia__CImaging__CCompositing__CExtractedObjectImageSource **first) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct __FIIterable_1_Lumia__CImaging__CCompositing__CExtractedObjectImageSourceVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            __RPC__in __FIIterable_1_Lumia__CImaging__CCompositing__CExtractedObjectImageSource * This,
            /* [in] */ __RPC__in REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            __RPC__in __FIIterable_1_Lumia__CImaging__CCompositing__CExtractedObjectImageSource * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            __RPC__in __FIIterable_1_Lumia__CImaging__CCompositing__CExtractedObjectImageSource * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetIids )( 
            __RPC__in __FIIterable_1_Lumia__CImaging__CCompositing__CExtractedObjectImageSource * This,
            /* [out] */ __RPC__out ULONG *iidCount,
            /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
        
        HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )( 
            __RPC__in __FIIterable_1_Lumia__CImaging__CCompositing__CExtractedObjectImageSource * This,
            /* [out] */ __RPC__deref_out_opt HSTRING *className);
        
        HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )( 
            __RPC__in __FIIterable_1_Lumia__CImaging__CCompositing__CExtractedObjectImageSource * This,
            /* [out] */ __RPC__out TrustLevel *trustLevel);
        
        HRESULT ( STDMETHODCALLTYPE *First )( 
            __RPC__in __FIIterable_1_Lumia__CImaging__CCompositing__CExtractedObjectImageSource * This,
            /* [retval][out] */ __RPC__deref_out_opt __FIIterator_1_Lumia__CImaging__CCompositing__CExtractedObjectImageSource **first);
        
        END_INTERFACE
    } __FIIterable_1_Lumia__CImaging__CCompositing__CExtractedObjectImageSourceVtbl;

    interface __FIIterable_1_Lumia__CImaging__CCompositing__CExtractedObjectImageSource
    {
        CONST_VTBL struct __FIIterable_1_Lumia__CImaging__CCompositing__CExtractedObjectImageSourceVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define __FIIterable_1_Lumia__CImaging__CCompositing__CExtractedObjectImageSource_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __FIIterable_1_Lumia__CImaging__CCompositing__CExtractedObjectImageSource_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __FIIterable_1_Lumia__CImaging__CCompositing__CExtractedObjectImageSource_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __FIIterable_1_Lumia__CImaging__CCompositing__CExtractedObjectImageSource_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 

#define __FIIterable_1_Lumia__CImaging__CCompositing__CExtractedObjectImageSource_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 

#define __FIIterable_1_Lumia__CImaging__CCompositing__CExtractedObjectImageSource_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 


#define __FIIterable_1_Lumia__CImaging__CCompositing__CExtractedObjectImageSource_First(This,first)	\
    ( (This)->lpVtbl -> First(This,first) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* ____FIIterable_1_Lumia__CImaging__CCompositing__CExtractedObjectImageSource_INTERFACE_DEFINED__ */


/* interface __MIDL_itf_Lumia2EImaging2ECompositing_0000_0009 */
/* [local] */ 

#endif /* pinterface */
#endif /* DEF___FIIterable_1_Lumia__CImaging__CCompositing__CExtractedObjectImageSource */


/* interface __MIDL_itf_Lumia2EImaging2ECompositing_0000_0009 */
/* [local] */ 



extern RPC_IF_HANDLE __MIDL_itf_Lumia2EImaging2ECompositing_0000_0009_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_Lumia2EImaging2ECompositing_0000_0009_v0_0_s_ifspec;

/* interface __MIDL_itf_Lumia2EImaging2ECompositing_0000_2010 */




/* interface __MIDL_itf_Lumia2EImaging2ECompositing_0000_2010 */




extern RPC_IF_HANDLE __MIDL_itf_Lumia2EImaging2ECompositing_0000_2010_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_Lumia2EImaging2ECompositing_0000_2010_v0_0_s_ifspec;

/* interface __MIDL_itf_Lumia2EImaging2ECompositing_0000_0010 */
/* [local] */ 

#ifndef DEF___FIVectorView_1_Lumia__CImaging__CCompositing__CExtractedObjectImageSource
#define DEF___FIVectorView_1_Lumia__CImaging__CCompositing__CExtractedObjectImageSource
#if !defined(__cplusplus) || defined(RO_NO_TEMPLATE_NAME)


/* interface __MIDL_itf_Lumia2EImaging2ECompositing_0000_0010 */
/* [local] */ 



extern RPC_IF_HANDLE __MIDL_itf_Lumia2EImaging2ECompositing_0000_0010_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_Lumia2EImaging2ECompositing_0000_0010_v0_0_s_ifspec;

#ifndef ____FIVectorView_1_Lumia__CImaging__CCompositing__CExtractedObjectImageSource_INTERFACE_DEFINED__
#define ____FIVectorView_1_Lumia__CImaging__CCompositing__CExtractedObjectImageSource_INTERFACE_DEFINED__

/* interface __FIVectorView_1_Lumia__CImaging__CCompositing__CExtractedObjectImageSource */
/* [unique][uuid][object] */ 



/* interface __FIVectorView_1_Lumia__CImaging__CCompositing__CExtractedObjectImageSource */
/* [unique][uuid][object] */ 


EXTERN_C const IID IID___FIVectorView_1_Lumia__CImaging__CCompositing__CExtractedObjectImageSource;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("11fd42fe-09f3-58ef-8995-e4f658dba1c4")
    __FIVectorView_1_Lumia__CImaging__CCompositing__CExtractedObjectImageSource : public IInspectable
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE GetAt( 
            /* [in] */ unsigned int index,
            /* [retval][out] */ __RPC__deref_out_opt ABI::Lumia::Imaging::Compositing::IExtractedObjectImageSource **item) = 0;
        
        virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_Size( 
            /* [retval][out] */ __RPC__out unsigned int *size) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE IndexOf( 
            /* [in] */ __RPC__in_opt ABI::Lumia::Imaging::Compositing::IExtractedObjectImageSource *item,
            /* [out] */ __RPC__out unsigned int *index,
            /* [retval][out] */ __RPC__out boolean *found) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetMany( 
            /* [in] */ unsigned int startIndex,
            /* [in] */ unsigned int capacity,
            /* [size_is][length_is][out] */ __RPC__out_ecount_part(capacity, *actual) ABI::Lumia::Imaging::Compositing::IExtractedObjectImageSource **items,
            /* [retval][out] */ __RPC__out unsigned int *actual) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct __FIVectorView_1_Lumia__CImaging__CCompositing__CExtractedObjectImageSourceVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            __RPC__in __FIVectorView_1_Lumia__CImaging__CCompositing__CExtractedObjectImageSource * This,
            /* [in] */ __RPC__in REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            __RPC__in __FIVectorView_1_Lumia__CImaging__CCompositing__CExtractedObjectImageSource * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            __RPC__in __FIVectorView_1_Lumia__CImaging__CCompositing__CExtractedObjectImageSource * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetIids )( 
            __RPC__in __FIVectorView_1_Lumia__CImaging__CCompositing__CExtractedObjectImageSource * This,
            /* [out] */ __RPC__out ULONG *iidCount,
            /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
        
        HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )( 
            __RPC__in __FIVectorView_1_Lumia__CImaging__CCompositing__CExtractedObjectImageSource * This,
            /* [out] */ __RPC__deref_out_opt HSTRING *className);
        
        HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )( 
            __RPC__in __FIVectorView_1_Lumia__CImaging__CCompositing__CExtractedObjectImageSource * This,
            /* [out] */ __RPC__out TrustLevel *trustLevel);
        
        HRESULT ( STDMETHODCALLTYPE *GetAt )( 
            __RPC__in __FIVectorView_1_Lumia__CImaging__CCompositing__CExtractedObjectImageSource * This,
            /* [in] */ unsigned int index,
            /* [retval][out] */ __RPC__deref_out_opt __x_ABI_CLumia_CImaging_CCompositing_CIExtractedObjectImageSource **item);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_Size )( 
            __RPC__in __FIVectorView_1_Lumia__CImaging__CCompositing__CExtractedObjectImageSource * This,
            /* [retval][out] */ __RPC__out unsigned int *size);
        
        HRESULT ( STDMETHODCALLTYPE *IndexOf )( 
            __RPC__in __FIVectorView_1_Lumia__CImaging__CCompositing__CExtractedObjectImageSource * This,
            /* [in] */ __RPC__in_opt __x_ABI_CLumia_CImaging_CCompositing_CIExtractedObjectImageSource *item,
            /* [out] */ __RPC__out unsigned int *index,
            /* [retval][out] */ __RPC__out boolean *found);
        
        HRESULT ( STDMETHODCALLTYPE *GetMany )( 
            __RPC__in __FIVectorView_1_Lumia__CImaging__CCompositing__CExtractedObjectImageSource * This,
            /* [in] */ unsigned int startIndex,
            /* [in] */ unsigned int capacity,
            /* [size_is][length_is][out] */ __RPC__out_ecount_part(capacity, *actual) __x_ABI_CLumia_CImaging_CCompositing_CIExtractedObjectImageSource **items,
            /* [retval][out] */ __RPC__out unsigned int *actual);
        
        END_INTERFACE
    } __FIVectorView_1_Lumia__CImaging__CCompositing__CExtractedObjectImageSourceVtbl;

    interface __FIVectorView_1_Lumia__CImaging__CCompositing__CExtractedObjectImageSource
    {
        CONST_VTBL struct __FIVectorView_1_Lumia__CImaging__CCompositing__CExtractedObjectImageSourceVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define __FIVectorView_1_Lumia__CImaging__CCompositing__CExtractedObjectImageSource_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __FIVectorView_1_Lumia__CImaging__CCompositing__CExtractedObjectImageSource_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __FIVectorView_1_Lumia__CImaging__CCompositing__CExtractedObjectImageSource_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __FIVectorView_1_Lumia__CImaging__CCompositing__CExtractedObjectImageSource_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 

#define __FIVectorView_1_Lumia__CImaging__CCompositing__CExtractedObjectImageSource_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 

#define __FIVectorView_1_Lumia__CImaging__CCompositing__CExtractedObjectImageSource_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 


#define __FIVectorView_1_Lumia__CImaging__CCompositing__CExtractedObjectImageSource_GetAt(This,index,item)	\
    ( (This)->lpVtbl -> GetAt(This,index,item) ) 

#define __FIVectorView_1_Lumia__CImaging__CCompositing__CExtractedObjectImageSource_get_Size(This,size)	\
    ( (This)->lpVtbl -> get_Size(This,size) ) 

#define __FIVectorView_1_Lumia__CImaging__CCompositing__CExtractedObjectImageSource_IndexOf(This,item,index,found)	\
    ( (This)->lpVtbl -> IndexOf(This,item,index,found) ) 

#define __FIVectorView_1_Lumia__CImaging__CCompositing__CExtractedObjectImageSource_GetMany(This,startIndex,capacity,items,actual)	\
    ( (This)->lpVtbl -> GetMany(This,startIndex,capacity,items,actual) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* ____FIVectorView_1_Lumia__CImaging__CCompositing__CExtractedObjectImageSource_INTERFACE_DEFINED__ */


/* interface __MIDL_itf_Lumia2EImaging2ECompositing_0000_0011 */
/* [local] */ 

#endif /* pinterface */
#endif /* DEF___FIVectorView_1_Lumia__CImaging__CCompositing__CExtractedObjectImageSource */


/* interface __MIDL_itf_Lumia2EImaging2ECompositing_0000_0011 */
/* [local] */ 



extern RPC_IF_HANDLE __MIDL_itf_Lumia2EImaging2ECompositing_0000_0011_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_Lumia2EImaging2ECompositing_0000_0011_v0_0_s_ifspec;

/* interface __MIDL_itf_Lumia2EImaging2ECompositing_0000_2011 */




/* interface __MIDL_itf_Lumia2EImaging2ECompositing_0000_2011 */




extern RPC_IF_HANDLE __MIDL_itf_Lumia2EImaging2ECompositing_0000_2011_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_Lumia2EImaging2ECompositing_0000_2011_v0_0_s_ifspec;

/* interface __MIDL_itf_Lumia2EImaging2ECompositing_0000_0012 */
/* [local] */ 

#ifndef DEF___FIAsyncOperationCompletedHandler_1___FIVectorView_1_Lumia__CImaging__CCompositing__CExtractedObjectImageSource
#define DEF___FIAsyncOperationCompletedHandler_1___FIVectorView_1_Lumia__CImaging__CCompositing__CExtractedObjectImageSource
#if !defined(__cplusplus) || defined(RO_NO_TEMPLATE_NAME)



/* interface __MIDL_itf_Lumia2EImaging2ECompositing_0000_0012 */
/* [local] */ 




extern RPC_IF_HANDLE __MIDL_itf_Lumia2EImaging2ECompositing_0000_0012_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_Lumia2EImaging2ECompositing_0000_0012_v0_0_s_ifspec;

#ifndef ____FIAsyncOperationCompletedHandler_1___FIVectorView_1_Lumia__CImaging__CCompositing__CExtractedObjectImageSource_INTERFACE_DEFINED__
#define ____FIAsyncOperationCompletedHandler_1___FIVectorView_1_Lumia__CImaging__CCompositing__CExtractedObjectImageSource_INTERFACE_DEFINED__

/* interface __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Lumia__CImaging__CCompositing__CExtractedObjectImageSource */
/* [unique][uuid][object] */ 



/* interface __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Lumia__CImaging__CCompositing__CExtractedObjectImageSource */
/* [unique][uuid][object] */ 


EXTERN_C const IID IID___FIAsyncOperationCompletedHandler_1___FIVectorView_1_Lumia__CImaging__CCompositing__CExtractedObjectImageSource;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("88c512cd-8a44-586d-a426-53f675d9ade2")
    __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Lumia__CImaging__CCompositing__CExtractedObjectImageSource : public IUnknown
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE Invoke( 
            /* [in] */ __RPC__in_opt __FIAsyncOperation_1___FIVectorView_1_Lumia__CImaging__CCompositing__CExtractedObjectImageSource *asyncInfo,
            /* [in] */ AsyncStatus status) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Lumia__CImaging__CCompositing__CExtractedObjectImageSourceVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            __RPC__in __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Lumia__CImaging__CCompositing__CExtractedObjectImageSource * This,
            /* [in] */ __RPC__in REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            __RPC__in __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Lumia__CImaging__CCompositing__CExtractedObjectImageSource * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            __RPC__in __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Lumia__CImaging__CCompositing__CExtractedObjectImageSource * This);
        
        HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            __RPC__in __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Lumia__CImaging__CCompositing__CExtractedObjectImageSource * This,
            /* [in] */ __RPC__in_opt __FIAsyncOperation_1___FIVectorView_1_Lumia__CImaging__CCompositing__CExtractedObjectImageSource *asyncInfo,
            /* [in] */ AsyncStatus status);
        
        END_INTERFACE
    } __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Lumia__CImaging__CCompositing__CExtractedObjectImageSourceVtbl;

    interface __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Lumia__CImaging__CCompositing__CExtractedObjectImageSource
    {
        CONST_VTBL struct __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Lumia__CImaging__CCompositing__CExtractedObjectImageSourceVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Lumia__CImaging__CCompositing__CExtractedObjectImageSource_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Lumia__CImaging__CCompositing__CExtractedObjectImageSource_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Lumia__CImaging__CCompositing__CExtractedObjectImageSource_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Lumia__CImaging__CCompositing__CExtractedObjectImageSource_Invoke(This,asyncInfo,status)	\
    ( (This)->lpVtbl -> Invoke(This,asyncInfo,status) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* ____FIAsyncOperationCompletedHandler_1___FIVectorView_1_Lumia__CImaging__CCompositing__CExtractedObjectImageSource_INTERFACE_DEFINED__ */


/* interface __MIDL_itf_Lumia2EImaging2ECompositing_0000_0013 */
/* [local] */ 

#endif /* pinterface */
#endif /* DEF___FIAsyncOperationCompletedHandler_1___FIVectorView_1_Lumia__CImaging__CCompositing__CExtractedObjectImageSource */


/* interface __MIDL_itf_Lumia2EImaging2ECompositing_0000_0013 */
/* [local] */ 



extern RPC_IF_HANDLE __MIDL_itf_Lumia2EImaging2ECompositing_0000_0013_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_Lumia2EImaging2ECompositing_0000_0013_v0_0_s_ifspec;

/* interface __MIDL_itf_Lumia2EImaging2ECompositing_0000_2012 */




/* interface __MIDL_itf_Lumia2EImaging2ECompositing_0000_2012 */




extern RPC_IF_HANDLE __MIDL_itf_Lumia2EImaging2ECompositing_0000_2012_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_Lumia2EImaging2ECompositing_0000_2012_v0_0_s_ifspec;

/* interface __MIDL_itf_Lumia2EImaging2ECompositing_0000_0014 */
/* [local] */ 

#ifndef DEF___FIAsyncOperation_1___FIVectorView_1_Lumia__CImaging__CCompositing__CExtractedObjectImageSource
#define DEF___FIAsyncOperation_1___FIVectorView_1_Lumia__CImaging__CCompositing__CExtractedObjectImageSource
#if !defined(__cplusplus) || defined(RO_NO_TEMPLATE_NAME)


/* interface __MIDL_itf_Lumia2EImaging2ECompositing_0000_0014 */
/* [local] */ 



extern RPC_IF_HANDLE __MIDL_itf_Lumia2EImaging2ECompositing_0000_0014_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_Lumia2EImaging2ECompositing_0000_0014_v0_0_s_ifspec;

#ifndef ____FIAsyncOperation_1___FIVectorView_1_Lumia__CImaging__CCompositing__CExtractedObjectImageSource_INTERFACE_DEFINED__
#define ____FIAsyncOperation_1___FIVectorView_1_Lumia__CImaging__CCompositing__CExtractedObjectImageSource_INTERFACE_DEFINED__

/* interface __FIAsyncOperation_1___FIVectorView_1_Lumia__CImaging__CCompositing__CExtractedObjectImageSource */
/* [unique][uuid][object] */ 



/* interface __FIAsyncOperation_1___FIVectorView_1_Lumia__CImaging__CCompositing__CExtractedObjectImageSource */
/* [unique][uuid][object] */ 


EXTERN_C const IID IID___FIAsyncOperation_1___FIVectorView_1_Lumia__CImaging__CCompositing__CExtractedObjectImageSource;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("632b608d-7164-59ef-a3c5-af2479d3171a")
    __FIAsyncOperation_1___FIVectorView_1_Lumia__CImaging__CCompositing__CExtractedObjectImageSource : public IInspectable
    {
    public:
        virtual /* [propput] */ HRESULT STDMETHODCALLTYPE put_Completed( 
            /* [in] */ __RPC__in_opt __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Lumia__CImaging__CCompositing__CExtractedObjectImageSource *handler) = 0;
        
        virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_Completed( 
            /* [retval][out] */ __RPC__deref_out_opt __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Lumia__CImaging__CCompositing__CExtractedObjectImageSource **handler) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetResults( 
            /* [retval][out] */ __RPC__deref_out_opt __FIVectorView_1_Lumia__CImaging__CCompositing__CExtractedObjectImageSource **results) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct __FIAsyncOperation_1___FIVectorView_1_Lumia__CImaging__CCompositing__CExtractedObjectImageSourceVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            __RPC__in __FIAsyncOperation_1___FIVectorView_1_Lumia__CImaging__CCompositing__CExtractedObjectImageSource * This,
            /* [in] */ __RPC__in REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            __RPC__in __FIAsyncOperation_1___FIVectorView_1_Lumia__CImaging__CCompositing__CExtractedObjectImageSource * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            __RPC__in __FIAsyncOperation_1___FIVectorView_1_Lumia__CImaging__CCompositing__CExtractedObjectImageSource * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetIids )( 
            __RPC__in __FIAsyncOperation_1___FIVectorView_1_Lumia__CImaging__CCompositing__CExtractedObjectImageSource * This,
            /* [out] */ __RPC__out ULONG *iidCount,
            /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
        
        HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )( 
            __RPC__in __FIAsyncOperation_1___FIVectorView_1_Lumia__CImaging__CCompositing__CExtractedObjectImageSource * This,
            /* [out] */ __RPC__deref_out_opt HSTRING *className);
        
        HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )( 
            __RPC__in __FIAsyncOperation_1___FIVectorView_1_Lumia__CImaging__CCompositing__CExtractedObjectImageSource * This,
            /* [out] */ __RPC__out TrustLevel *trustLevel);
        
        /* [propput] */ HRESULT ( STDMETHODCALLTYPE *put_Completed )( 
            __RPC__in __FIAsyncOperation_1___FIVectorView_1_Lumia__CImaging__CCompositing__CExtractedObjectImageSource * This,
            /* [in] */ __RPC__in_opt __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Lumia__CImaging__CCompositing__CExtractedObjectImageSource *handler);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_Completed )( 
            __RPC__in __FIAsyncOperation_1___FIVectorView_1_Lumia__CImaging__CCompositing__CExtractedObjectImageSource * This,
            /* [retval][out] */ __RPC__deref_out_opt __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Lumia__CImaging__CCompositing__CExtractedObjectImageSource **handler);
        
        HRESULT ( STDMETHODCALLTYPE *GetResults )( 
            __RPC__in __FIAsyncOperation_1___FIVectorView_1_Lumia__CImaging__CCompositing__CExtractedObjectImageSource * This,
            /* [retval][out] */ __RPC__deref_out_opt __FIVectorView_1_Lumia__CImaging__CCompositing__CExtractedObjectImageSource **results);
        
        END_INTERFACE
    } __FIAsyncOperation_1___FIVectorView_1_Lumia__CImaging__CCompositing__CExtractedObjectImageSourceVtbl;

    interface __FIAsyncOperation_1___FIVectorView_1_Lumia__CImaging__CCompositing__CExtractedObjectImageSource
    {
        CONST_VTBL struct __FIAsyncOperation_1___FIVectorView_1_Lumia__CImaging__CCompositing__CExtractedObjectImageSourceVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define __FIAsyncOperation_1___FIVectorView_1_Lumia__CImaging__CCompositing__CExtractedObjectImageSource_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __FIAsyncOperation_1___FIVectorView_1_Lumia__CImaging__CCompositing__CExtractedObjectImageSource_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __FIAsyncOperation_1___FIVectorView_1_Lumia__CImaging__CCompositing__CExtractedObjectImageSource_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __FIAsyncOperation_1___FIVectorView_1_Lumia__CImaging__CCompositing__CExtractedObjectImageSource_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 

#define __FIAsyncOperation_1___FIVectorView_1_Lumia__CImaging__CCompositing__CExtractedObjectImageSource_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 

#define __FIAsyncOperation_1___FIVectorView_1_Lumia__CImaging__CCompositing__CExtractedObjectImageSource_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 


#define __FIAsyncOperation_1___FIVectorView_1_Lumia__CImaging__CCompositing__CExtractedObjectImageSource_put_Completed(This,handler)	\
    ( (This)->lpVtbl -> put_Completed(This,handler) ) 

#define __FIAsyncOperation_1___FIVectorView_1_Lumia__CImaging__CCompositing__CExtractedObjectImageSource_get_Completed(This,handler)	\
    ( (This)->lpVtbl -> get_Completed(This,handler) ) 

#define __FIAsyncOperation_1___FIVectorView_1_Lumia__CImaging__CCompositing__CExtractedObjectImageSource_GetResults(This,results)	\
    ( (This)->lpVtbl -> GetResults(This,results) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* ____FIAsyncOperation_1___FIVectorView_1_Lumia__CImaging__CCompositing__CExtractedObjectImageSource_INTERFACE_DEFINED__ */


/* interface __MIDL_itf_Lumia2EImaging2ECompositing_0000_0015 */
/* [local] */ 

#endif /* pinterface */
#endif /* DEF___FIAsyncOperation_1___FIVectorView_1_Lumia__CImaging__CCompositing__CExtractedObjectImageSource */
#if !defined(__cplusplus)

#if !defined(__cplusplus)
/* [v1_enum] */ 
enum __x_ABI_CLumia_CImaging_CCompositing_CBlendFunction
    {
        BlendFunction_Normal	= 0,
        BlendFunction_Multiply	= 1,
        BlendFunction_Add	= 2,
        BlendFunction_Lineardodge	= 2,
        BlendFunction_Color	= 3,
        BlendFunction_Colorburn	= 4,
        BlendFunction_Colordodge	= 5,
        BlendFunction_Screen	= 8,
        BlendFunction_Overlay	= 6,
        BlendFunction_Softlight	= 7,
        BlendFunction_Hardlight	= 9,
        BlendFunction_Darken	= 10,
        BlendFunction_Lighten	= 11,
        BlendFunction_Hue	= 12,
        BlendFunction_Exclusion	= 13,
        BlendFunction_Difference	= 14,
        BlendFunction_Linearlight	= 15,
        BlendFunction_Vividlight	= 16,
        BlendFunction_SignedDifference	= 17
    } ;
#endif /* end if !defined(__cplusplus) */

#endif
#if !defined(____x_ABI_CLumia_CImaging_CCompositing_CIAlphaToGrayscaleFilter_INTERFACE_DEFINED__)
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Lumia_Imaging_Compositing_IAlphaToGrayscaleFilter[] = L"Lumia.Imaging.Compositing.IAlphaToGrayscaleFilter";
#endif /* !defined(____x_ABI_CLumia_CImaging_CCompositing_CIAlphaToGrayscaleFilter_INTERFACE_DEFINED__) */


/* interface __MIDL_itf_Lumia2EImaging2ECompositing_0000_0015 */
/* [local] */ 

#ifdef __cplusplus
} /* end extern "C" */
namespace ABI {
    namespace Lumia {
        namespace Imaging {
            namespace Compositing {
                
                /* [v1_enum] */ 
                enum BlendFunction
                    {
                        BlendFunction_Normal	= 0,
                        BlendFunction_Multiply	= 1,
                        BlendFunction_Add	= 2,
                        BlendFunction_Lineardodge	= 2,
                        BlendFunction_Color	= 3,
                        BlendFunction_Colorburn	= 4,
                        BlendFunction_Colordodge	= 5,
                        BlendFunction_Screen	= 8,
                        BlendFunction_Overlay	= 6,
                        BlendFunction_Softlight	= 7,
                        BlendFunction_Hardlight	= 9,
                        BlendFunction_Darken	= 10,
                        BlendFunction_Lighten	= 11,
                        BlendFunction_Hue	= 12,
                        BlendFunction_Exclusion	= 13,
                        BlendFunction_Difference	= 14,
                        BlendFunction_Linearlight	= 15,
                        BlendFunction_Vividlight	= 16,
                        BlendFunction_SignedDifference	= 17
                    } ;
            } /* end namespace */
        } /* end namespace */
    } /* end namespace */
} /* end namespace */

extern "C" { 
#endif



extern RPC_IF_HANDLE __MIDL_itf_Lumia2EImaging2ECompositing_0000_0015_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_Lumia2EImaging2ECompositing_0000_0015_v0_0_s_ifspec;

#ifndef ____x_ABI_CLumia_CImaging_CCompositing_CIAlphaToGrayscaleFilter_INTERFACE_DEFINED__
#define ____x_ABI_CLumia_CImaging_CCompositing_CIAlphaToGrayscaleFilter_INTERFACE_DEFINED__

/* interface __x_ABI_CLumia_CImaging_CCompositing_CIAlphaToGrayscaleFilter */
/* [uuid][object] */ 



/* interface ABI::Lumia::Imaging::Compositing::IAlphaToGrayscaleFilter */
/* [uuid][object] */ 


EXTERN_C const IID IID___x_ABI_CLumia_CImaging_CCompositing_CIAlphaToGrayscaleFilter;

#if defined(__cplusplus) && !defined(CINTERFACE)
    } /* end extern "C" */
    namespace ABI {
        namespace Lumia {
            namespace Imaging {
                namespace Compositing {
                    
                    MIDL_INTERFACE("8F24A84C-E4B8-35D4-82A9-881C41380D46")
                    IAlphaToGrayscaleFilter : public IInspectable
                    {
                    public:
                    };

                    extern const __declspec(selectany) IID & IID_IAlphaToGrayscaleFilter = __uuidof(IAlphaToGrayscaleFilter);

                    
                }  /* end namespace */
            }  /* end namespace */
        }  /* end namespace */
    }  /* end namespace */
    extern "C" { 
    
#else 	/* C style interface */

    typedef struct __x_ABI_CLumia_CImaging_CCompositing_CIAlphaToGrayscaleFilterVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            __RPC__in __x_ABI_CLumia_CImaging_CCompositing_CIAlphaToGrayscaleFilter * This,
            /* [in] */ __RPC__in REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            __RPC__in __x_ABI_CLumia_CImaging_CCompositing_CIAlphaToGrayscaleFilter * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            __RPC__in __x_ABI_CLumia_CImaging_CCompositing_CIAlphaToGrayscaleFilter * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetIids )( 
            __RPC__in __x_ABI_CLumia_CImaging_CCompositing_CIAlphaToGrayscaleFilter * This,
            /* [out] */ __RPC__out ULONG *iidCount,
            /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
        
        HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )( 
            __RPC__in __x_ABI_CLumia_CImaging_CCompositing_CIAlphaToGrayscaleFilter * This,
            /* [out] */ __RPC__deref_out_opt HSTRING *className);
        
        HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )( 
            __RPC__in __x_ABI_CLumia_CImaging_CCompositing_CIAlphaToGrayscaleFilter * This,
            /* [out] */ __RPC__out TrustLevel *trustLevel);
        
        END_INTERFACE
    } __x_ABI_CLumia_CImaging_CCompositing_CIAlphaToGrayscaleFilterVtbl;

    interface __x_ABI_CLumia_CImaging_CCompositing_CIAlphaToGrayscaleFilter
    {
        CONST_VTBL struct __x_ABI_CLumia_CImaging_CCompositing_CIAlphaToGrayscaleFilterVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define __x_ABI_CLumia_CImaging_CCompositing_CIAlphaToGrayscaleFilter_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __x_ABI_CLumia_CImaging_CCompositing_CIAlphaToGrayscaleFilter_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __x_ABI_CLumia_CImaging_CCompositing_CIAlphaToGrayscaleFilter_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __x_ABI_CLumia_CImaging_CCompositing_CIAlphaToGrayscaleFilter_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 

#define __x_ABI_CLumia_CImaging_CCompositing_CIAlphaToGrayscaleFilter_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 

#define __x_ABI_CLumia_CImaging_CCompositing_CIAlphaToGrayscaleFilter_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 


#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* ____x_ABI_CLumia_CImaging_CCompositing_CIAlphaToGrayscaleFilter_INTERFACE_DEFINED__ */


/* interface __MIDL_itf_Lumia2EImaging2ECompositing_0000_0016 */
/* [local] */ 

#if !defined(____x_ABI_CLumia_CImaging_CCompositing_CIBlendEffect_INTERFACE_DEFINED__)
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Lumia_Imaging_Compositing_IBlendEffect[] = L"Lumia.Imaging.Compositing.IBlendEffect";
#endif /* !defined(____x_ABI_CLumia_CImaging_CCompositing_CIBlendEffect_INTERFACE_DEFINED__) */


/* interface __MIDL_itf_Lumia2EImaging2ECompositing_0000_0016 */
/* [local] */ 



extern RPC_IF_HANDLE __MIDL_itf_Lumia2EImaging2ECompositing_0000_0016_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_Lumia2EImaging2ECompositing_0000_0016_v0_0_s_ifspec;

#ifndef ____x_ABI_CLumia_CImaging_CCompositing_CIBlendEffect_INTERFACE_DEFINED__
#define ____x_ABI_CLumia_CImaging_CCompositing_CIBlendEffect_INTERFACE_DEFINED__

/* interface __x_ABI_CLumia_CImaging_CCompositing_CIBlendEffect */
/* [uuid][object] */ 



/* interface ABI::Lumia::Imaging::Compositing::IBlendEffect */
/* [uuid][object] */ 


EXTERN_C const IID IID___x_ABI_CLumia_CImaging_CCompositing_CIBlendEffect;

#if defined(__cplusplus) && !defined(CINTERFACE)
    } /* end extern "C" */
    namespace ABI {
        namespace Lumia {
            namespace Imaging {
                namespace Compositing {
                    
                    MIDL_INTERFACE("BCE63A17-7C07-3CC1-8303-417FD1026CE7")
                    IBlendEffect : public IInspectable
                    {
                    public:
                        virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_ForegroundSource( 
                            /* [out][retval] */ __RPC__deref_out_opt ABI::Lumia::Imaging::IImageProvider **__returnValue) = 0;
                        
                        virtual /* [propput] */ HRESULT STDMETHODCALLTYPE put_ForegroundSource( 
                            /* [in] */ __RPC__in_opt ABI::Lumia::Imaging::IImageProvider *value) = 0;
                        
                        virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_MaskSource( 
                            /* [out][retval] */ __RPC__deref_out_opt ABI::Lumia::Imaging::IImageProvider **__returnValue) = 0;
                        
                        virtual /* [propput] */ HRESULT STDMETHODCALLTYPE put_MaskSource( 
                            /* [in] */ __RPC__in_opt ABI::Lumia::Imaging::IImageProvider *value) = 0;
                        
                        virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_GlobalAlpha( 
                            /* [out][retval] */ __RPC__out DOUBLE *__returnValue) = 0;
                        
                        virtual /* [propput] */ HRESULT STDMETHODCALLTYPE put_GlobalAlpha( 
                            /* [in] */ DOUBLE value) = 0;
                        
                        virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_BlendFunction( 
                            /* [out][retval] */ __RPC__out ABI::Lumia::Imaging::Compositing::BlendFunction *__returnValue) = 0;
                        
                        virtual /* [propput] */ HRESULT STDMETHODCALLTYPE put_BlendFunction( 
                            /* [in] */ ABI::Lumia::Imaging::Compositing::BlendFunction value) = 0;
                        
                        virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_TargetArea( 
                            /* [out][retval] */ __RPC__out ABI::Windows::Foundation::Rect *__returnValue) = 0;
                        
                        virtual /* [propput] */ HRESULT STDMETHODCALLTYPE put_TargetArea( 
                            /* [in] */ ABI::Windows::Foundation::Rect value) = 0;
                        
                        virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_TargetAreaRotation( 
                            /* [out][retval] */ __RPC__out DOUBLE *__returnValue) = 0;
                        
                        virtual /* [propput] */ HRESULT STDMETHODCALLTYPE put_TargetAreaRotation( 
                            /* [in] */ DOUBLE value) = 0;
                        
                        virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_TargetOutputOption( 
                            /* [out][retval] */ __RPC__out ABI::Lumia::Imaging::OutputOption *__returnValue) = 0;
                        
                        virtual /* [propput] */ HRESULT STDMETHODCALLTYPE put_TargetOutputOption( 
                            /* [in] */ ABI::Lumia::Imaging::OutputOption value) = 0;
                        
                    };

                    extern const __declspec(selectany) IID & IID_IBlendEffect = __uuidof(IBlendEffect);

                    
                }  /* end namespace */
            }  /* end namespace */
        }  /* end namespace */
    }  /* end namespace */
    extern "C" { 
    
#else 	/* C style interface */

    typedef struct __x_ABI_CLumia_CImaging_CCompositing_CIBlendEffectVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            __RPC__in __x_ABI_CLumia_CImaging_CCompositing_CIBlendEffect * This,
            /* [in] */ __RPC__in REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            __RPC__in __x_ABI_CLumia_CImaging_CCompositing_CIBlendEffect * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            __RPC__in __x_ABI_CLumia_CImaging_CCompositing_CIBlendEffect * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetIids )( 
            __RPC__in __x_ABI_CLumia_CImaging_CCompositing_CIBlendEffect * This,
            /* [out] */ __RPC__out ULONG *iidCount,
            /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
        
        HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )( 
            __RPC__in __x_ABI_CLumia_CImaging_CCompositing_CIBlendEffect * This,
            /* [out] */ __RPC__deref_out_opt HSTRING *className);
        
        HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )( 
            __RPC__in __x_ABI_CLumia_CImaging_CCompositing_CIBlendEffect * This,
            /* [out] */ __RPC__out TrustLevel *trustLevel);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_ForegroundSource )( 
            __RPC__in __x_ABI_CLumia_CImaging_CCompositing_CIBlendEffect * This,
            /* [out][retval] */ __RPC__deref_out_opt __x_ABI_CLumia_CImaging_CIImageProvider **__returnValue);
        
        /* [propput] */ HRESULT ( STDMETHODCALLTYPE *put_ForegroundSource )( 
            __RPC__in __x_ABI_CLumia_CImaging_CCompositing_CIBlendEffect * This,
            /* [in] */ __RPC__in_opt __x_ABI_CLumia_CImaging_CIImageProvider *value);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_MaskSource )( 
            __RPC__in __x_ABI_CLumia_CImaging_CCompositing_CIBlendEffect * This,
            /* [out][retval] */ __RPC__deref_out_opt __x_ABI_CLumia_CImaging_CIImageProvider **__returnValue);
        
        /* [propput] */ HRESULT ( STDMETHODCALLTYPE *put_MaskSource )( 
            __RPC__in __x_ABI_CLumia_CImaging_CCompositing_CIBlendEffect * This,
            /* [in] */ __RPC__in_opt __x_ABI_CLumia_CImaging_CIImageProvider *value);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_GlobalAlpha )( 
            __RPC__in __x_ABI_CLumia_CImaging_CCompositing_CIBlendEffect * This,
            /* [out][retval] */ __RPC__out DOUBLE *__returnValue);
        
        /* [propput] */ HRESULT ( STDMETHODCALLTYPE *put_GlobalAlpha )( 
            __RPC__in __x_ABI_CLumia_CImaging_CCompositing_CIBlendEffect * This,
            /* [in] */ DOUBLE value);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_BlendFunction )( 
            __RPC__in __x_ABI_CLumia_CImaging_CCompositing_CIBlendEffect * This,
            /* [out][retval] */ __RPC__out __x_ABI_CLumia_CImaging_CCompositing_CBlendFunction *__returnValue);
        
        /* [propput] */ HRESULT ( STDMETHODCALLTYPE *put_BlendFunction )( 
            __RPC__in __x_ABI_CLumia_CImaging_CCompositing_CIBlendEffect * This,
            /* [in] */ __x_ABI_CLumia_CImaging_CCompositing_CBlendFunction value);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_TargetArea )( 
            __RPC__in __x_ABI_CLumia_CImaging_CCompositing_CIBlendEffect * This,
            /* [out][retval] */ __RPC__out __x_ABI_CWindows_CFoundation_CRect *__returnValue);
        
        /* [propput] */ HRESULT ( STDMETHODCALLTYPE *put_TargetArea )( 
            __RPC__in __x_ABI_CLumia_CImaging_CCompositing_CIBlendEffect * This,
            /* [in] */ __x_ABI_CWindows_CFoundation_CRect value);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_TargetAreaRotation )( 
            __RPC__in __x_ABI_CLumia_CImaging_CCompositing_CIBlendEffect * This,
            /* [out][retval] */ __RPC__out DOUBLE *__returnValue);
        
        /* [propput] */ HRESULT ( STDMETHODCALLTYPE *put_TargetAreaRotation )( 
            __RPC__in __x_ABI_CLumia_CImaging_CCompositing_CIBlendEffect * This,
            /* [in] */ DOUBLE value);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_TargetOutputOption )( 
            __RPC__in __x_ABI_CLumia_CImaging_CCompositing_CIBlendEffect * This,
            /* [out][retval] */ __RPC__out __x_ABI_CLumia_CImaging_COutputOption *__returnValue);
        
        /* [propput] */ HRESULT ( STDMETHODCALLTYPE *put_TargetOutputOption )( 
            __RPC__in __x_ABI_CLumia_CImaging_CCompositing_CIBlendEffect * This,
            /* [in] */ __x_ABI_CLumia_CImaging_COutputOption value);
        
        END_INTERFACE
    } __x_ABI_CLumia_CImaging_CCompositing_CIBlendEffectVtbl;

    interface __x_ABI_CLumia_CImaging_CCompositing_CIBlendEffect
    {
        CONST_VTBL struct __x_ABI_CLumia_CImaging_CCompositing_CIBlendEffectVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define __x_ABI_CLumia_CImaging_CCompositing_CIBlendEffect_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __x_ABI_CLumia_CImaging_CCompositing_CIBlendEffect_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __x_ABI_CLumia_CImaging_CCompositing_CIBlendEffect_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __x_ABI_CLumia_CImaging_CCompositing_CIBlendEffect_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 

#define __x_ABI_CLumia_CImaging_CCompositing_CIBlendEffect_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 

#define __x_ABI_CLumia_CImaging_CCompositing_CIBlendEffect_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 


#define __x_ABI_CLumia_CImaging_CCompositing_CIBlendEffect_get_ForegroundSource(This,__returnValue)	\
    ( (This)->lpVtbl -> get_ForegroundSource(This,__returnValue) ) 

#define __x_ABI_CLumia_CImaging_CCompositing_CIBlendEffect_put_ForegroundSource(This,value)	\
    ( (This)->lpVtbl -> put_ForegroundSource(This,value) ) 

#define __x_ABI_CLumia_CImaging_CCompositing_CIBlendEffect_get_MaskSource(This,__returnValue)	\
    ( (This)->lpVtbl -> get_MaskSource(This,__returnValue) ) 

#define __x_ABI_CLumia_CImaging_CCompositing_CIBlendEffect_put_MaskSource(This,value)	\
    ( (This)->lpVtbl -> put_MaskSource(This,value) ) 

#define __x_ABI_CLumia_CImaging_CCompositing_CIBlendEffect_get_GlobalAlpha(This,__returnValue)	\
    ( (This)->lpVtbl -> get_GlobalAlpha(This,__returnValue) ) 

#define __x_ABI_CLumia_CImaging_CCompositing_CIBlendEffect_put_GlobalAlpha(This,value)	\
    ( (This)->lpVtbl -> put_GlobalAlpha(This,value) ) 

#define __x_ABI_CLumia_CImaging_CCompositing_CIBlendEffect_get_BlendFunction(This,__returnValue)	\
    ( (This)->lpVtbl -> get_BlendFunction(This,__returnValue) ) 

#define __x_ABI_CLumia_CImaging_CCompositing_CIBlendEffect_put_BlendFunction(This,value)	\
    ( (This)->lpVtbl -> put_BlendFunction(This,value) ) 

#define __x_ABI_CLumia_CImaging_CCompositing_CIBlendEffect_get_TargetArea(This,__returnValue)	\
    ( (This)->lpVtbl -> get_TargetArea(This,__returnValue) ) 

#define __x_ABI_CLumia_CImaging_CCompositing_CIBlendEffect_put_TargetArea(This,value)	\
    ( (This)->lpVtbl -> put_TargetArea(This,value) ) 

#define __x_ABI_CLumia_CImaging_CCompositing_CIBlendEffect_get_TargetAreaRotation(This,__returnValue)	\
    ( (This)->lpVtbl -> get_TargetAreaRotation(This,__returnValue) ) 

#define __x_ABI_CLumia_CImaging_CCompositing_CIBlendEffect_put_TargetAreaRotation(This,value)	\
    ( (This)->lpVtbl -> put_TargetAreaRotation(This,value) ) 

#define __x_ABI_CLumia_CImaging_CCompositing_CIBlendEffect_get_TargetOutputOption(This,__returnValue)	\
    ( (This)->lpVtbl -> get_TargetOutputOption(This,__returnValue) ) 

#define __x_ABI_CLumia_CImaging_CCompositing_CIBlendEffect_put_TargetOutputOption(This,value)	\
    ( (This)->lpVtbl -> put_TargetOutputOption(This,value) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* ____x_ABI_CLumia_CImaging_CCompositing_CIBlendEffect_INTERFACE_DEFINED__ */


/* interface __MIDL_itf_Lumia2EImaging2ECompositing_0000_0017 */
/* [local] */ 

#if !defined(____x_ABI_CLumia_CImaging_CCompositing_CIBlendEffectFactory_INTERFACE_DEFINED__)
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Lumia_Imaging_Compositing_IBlendEffectFactory[] = L"Lumia.Imaging.Compositing.IBlendEffectFactory";
#endif /* !defined(____x_ABI_CLumia_CImaging_CCompositing_CIBlendEffectFactory_INTERFACE_DEFINED__) */


/* interface __MIDL_itf_Lumia2EImaging2ECompositing_0000_0017 */
/* [local] */ 



extern RPC_IF_HANDLE __MIDL_itf_Lumia2EImaging2ECompositing_0000_0017_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_Lumia2EImaging2ECompositing_0000_0017_v0_0_s_ifspec;

#ifndef ____x_ABI_CLumia_CImaging_CCompositing_CIBlendEffectFactory_INTERFACE_DEFINED__
#define ____x_ABI_CLumia_CImaging_CCompositing_CIBlendEffectFactory_INTERFACE_DEFINED__

/* interface __x_ABI_CLumia_CImaging_CCompositing_CIBlendEffectFactory */
/* [uuid][object] */ 



/* interface ABI::Lumia::Imaging::Compositing::IBlendEffectFactory */
/* [uuid][object] */ 


EXTERN_C const IID IID___x_ABI_CLumia_CImaging_CCompositing_CIBlendEffectFactory;

#if defined(__cplusplus) && !defined(CINTERFACE)
    } /* end extern "C" */
    namespace ABI {
        namespace Lumia {
            namespace Imaging {
                namespace Compositing {
                    
                    MIDL_INTERFACE("FA483C22-15BB-3A8E-BD4C-9874277756AC")
                    IBlendEffectFactory : public IInspectable
                    {
                    public:
                        virtual HRESULT STDMETHODCALLTYPE CreateWithSources( 
                            /* [in] */ __RPC__in_opt ABI::Lumia::Imaging::IImageProvider *backgroundSource,
                            /* [in] */ __RPC__in_opt ABI::Lumia::Imaging::IImageProvider *foregroundSource,
                            /* [out][retval] */ __RPC__deref_out_opt ABI::Lumia::Imaging::Compositing::IBlendEffect **__returnValue) = 0;
                        
                        virtual HRESULT STDMETHODCALLTYPE CreateWithSourcesAndBlendFunction( 
                            /* [in] */ __RPC__in_opt ABI::Lumia::Imaging::IImageProvider *backgroundSource,
                            /* [in] */ __RPC__in_opt ABI::Lumia::Imaging::IImageProvider *foregroundSource,
                            /* [in] */ ABI::Lumia::Imaging::Compositing::BlendFunction blendFunction,
                            /* [out][retval] */ __RPC__deref_out_opt ABI::Lumia::Imaging::Compositing::IBlendEffect **__returnValue) = 0;
                        
                        virtual HRESULT STDMETHODCALLTYPE CreateWithSourcesAndBlendSettings( 
                            /* [in] */ __RPC__in_opt ABI::Lumia::Imaging::IImageProvider *backgroundSource,
                            /* [in] */ __RPC__in_opt ABI::Lumia::Imaging::IImageProvider *foregroundSource,
                            /* [in] */ ABI::Lumia::Imaging::Compositing::BlendFunction blendFunction,
                            /* [in] */ DOUBLE globalAlpha,
                            /* [out][retval] */ __RPC__deref_out_opt ABI::Lumia::Imaging::Compositing::IBlendEffect **__returnValue) = 0;
                        
                        virtual HRESULT STDMETHODCALLTYPE CreateMaskedWithSourcesAndBlendSettings( 
                            /* [in] */ __RPC__in_opt ABI::Lumia::Imaging::IImageProvider *backgroundSource,
                            /* [in] */ __RPC__in_opt ABI::Lumia::Imaging::IImageProvider *foregroundSource,
                            /* [in] */ __RPC__in_opt ABI::Lumia::Imaging::IImageProvider *maskSource,
                            /* [in] */ ABI::Lumia::Imaging::Compositing::BlendFunction blendFunction,
                            /* [in] */ DOUBLE globalAlpha,
                            /* [out][retval] */ __RPC__deref_out_opt ABI::Lumia::Imaging::Compositing::IBlendEffect **__returnValue) = 0;
                        
                    };

                    extern const __declspec(selectany) IID & IID_IBlendEffectFactory = __uuidof(IBlendEffectFactory);

                    
                }  /* end namespace */
            }  /* end namespace */
        }  /* end namespace */
    }  /* end namespace */
    extern "C" { 
    
#else 	/* C style interface */

    typedef struct __x_ABI_CLumia_CImaging_CCompositing_CIBlendEffectFactoryVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            __RPC__in __x_ABI_CLumia_CImaging_CCompositing_CIBlendEffectFactory * This,
            /* [in] */ __RPC__in REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            __RPC__in __x_ABI_CLumia_CImaging_CCompositing_CIBlendEffectFactory * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            __RPC__in __x_ABI_CLumia_CImaging_CCompositing_CIBlendEffectFactory * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetIids )( 
            __RPC__in __x_ABI_CLumia_CImaging_CCompositing_CIBlendEffectFactory * This,
            /* [out] */ __RPC__out ULONG *iidCount,
            /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
        
        HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )( 
            __RPC__in __x_ABI_CLumia_CImaging_CCompositing_CIBlendEffectFactory * This,
            /* [out] */ __RPC__deref_out_opt HSTRING *className);
        
        HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )( 
            __RPC__in __x_ABI_CLumia_CImaging_CCompositing_CIBlendEffectFactory * This,
            /* [out] */ __RPC__out TrustLevel *trustLevel);
        
        HRESULT ( STDMETHODCALLTYPE *CreateWithSources )( 
            __RPC__in __x_ABI_CLumia_CImaging_CCompositing_CIBlendEffectFactory * This,
            /* [in] */ __RPC__in_opt __x_ABI_CLumia_CImaging_CIImageProvider *backgroundSource,
            /* [in] */ __RPC__in_opt __x_ABI_CLumia_CImaging_CIImageProvider *foregroundSource,
            /* [out][retval] */ __RPC__deref_out_opt __x_ABI_CLumia_CImaging_CCompositing_CIBlendEffect **__returnValue);
        
        HRESULT ( STDMETHODCALLTYPE *CreateWithSourcesAndBlendFunction )( 
            __RPC__in __x_ABI_CLumia_CImaging_CCompositing_CIBlendEffectFactory * This,
            /* [in] */ __RPC__in_opt __x_ABI_CLumia_CImaging_CIImageProvider *backgroundSource,
            /* [in] */ __RPC__in_opt __x_ABI_CLumia_CImaging_CIImageProvider *foregroundSource,
            /* [in] */ __x_ABI_CLumia_CImaging_CCompositing_CBlendFunction blendFunction,
            /* [out][retval] */ __RPC__deref_out_opt __x_ABI_CLumia_CImaging_CCompositing_CIBlendEffect **__returnValue);
        
        HRESULT ( STDMETHODCALLTYPE *CreateWithSourcesAndBlendSettings )( 
            __RPC__in __x_ABI_CLumia_CImaging_CCompositing_CIBlendEffectFactory * This,
            /* [in] */ __RPC__in_opt __x_ABI_CLumia_CImaging_CIImageProvider *backgroundSource,
            /* [in] */ __RPC__in_opt __x_ABI_CLumia_CImaging_CIImageProvider *foregroundSource,
            /* [in] */ __x_ABI_CLumia_CImaging_CCompositing_CBlendFunction blendFunction,
            /* [in] */ DOUBLE globalAlpha,
            /* [out][retval] */ __RPC__deref_out_opt __x_ABI_CLumia_CImaging_CCompositing_CIBlendEffect **__returnValue);
        
        HRESULT ( STDMETHODCALLTYPE *CreateMaskedWithSourcesAndBlendSettings )( 
            __RPC__in __x_ABI_CLumia_CImaging_CCompositing_CIBlendEffectFactory * This,
            /* [in] */ __RPC__in_opt __x_ABI_CLumia_CImaging_CIImageProvider *backgroundSource,
            /* [in] */ __RPC__in_opt __x_ABI_CLumia_CImaging_CIImageProvider *foregroundSource,
            /* [in] */ __RPC__in_opt __x_ABI_CLumia_CImaging_CIImageProvider *maskSource,
            /* [in] */ __x_ABI_CLumia_CImaging_CCompositing_CBlendFunction blendFunction,
            /* [in] */ DOUBLE globalAlpha,
            /* [out][retval] */ __RPC__deref_out_opt __x_ABI_CLumia_CImaging_CCompositing_CIBlendEffect **__returnValue);
        
        END_INTERFACE
    } __x_ABI_CLumia_CImaging_CCompositing_CIBlendEffectFactoryVtbl;

    interface __x_ABI_CLumia_CImaging_CCompositing_CIBlendEffectFactory
    {
        CONST_VTBL struct __x_ABI_CLumia_CImaging_CCompositing_CIBlendEffectFactoryVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define __x_ABI_CLumia_CImaging_CCompositing_CIBlendEffectFactory_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __x_ABI_CLumia_CImaging_CCompositing_CIBlendEffectFactory_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __x_ABI_CLumia_CImaging_CCompositing_CIBlendEffectFactory_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __x_ABI_CLumia_CImaging_CCompositing_CIBlendEffectFactory_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 

#define __x_ABI_CLumia_CImaging_CCompositing_CIBlendEffectFactory_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 

#define __x_ABI_CLumia_CImaging_CCompositing_CIBlendEffectFactory_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 


#define __x_ABI_CLumia_CImaging_CCompositing_CIBlendEffectFactory_CreateWithSources(This,backgroundSource,foregroundSource,__returnValue)	\
    ( (This)->lpVtbl -> CreateWithSources(This,backgroundSource,foregroundSource,__returnValue) ) 

#define __x_ABI_CLumia_CImaging_CCompositing_CIBlendEffectFactory_CreateWithSourcesAndBlendFunction(This,backgroundSource,foregroundSource,blendFunction,__returnValue)	\
    ( (This)->lpVtbl -> CreateWithSourcesAndBlendFunction(This,backgroundSource,foregroundSource,blendFunction,__returnValue) ) 

#define __x_ABI_CLumia_CImaging_CCompositing_CIBlendEffectFactory_CreateWithSourcesAndBlendSettings(This,backgroundSource,foregroundSource,blendFunction,globalAlpha,__returnValue)	\
    ( (This)->lpVtbl -> CreateWithSourcesAndBlendSettings(This,backgroundSource,foregroundSource,blendFunction,globalAlpha,__returnValue) ) 

#define __x_ABI_CLumia_CImaging_CCompositing_CIBlendEffectFactory_CreateMaskedWithSourcesAndBlendSettings(This,backgroundSource,foregroundSource,maskSource,blendFunction,globalAlpha,__returnValue)	\
    ( (This)->lpVtbl -> CreateMaskedWithSourcesAndBlendSettings(This,backgroundSource,foregroundSource,maskSource,blendFunction,globalAlpha,__returnValue) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* ____x_ABI_CLumia_CImaging_CCompositing_CIBlendEffectFactory_INTERFACE_DEFINED__ */


/* interface __MIDL_itf_Lumia2EImaging2ECompositing_0000_0018 */
/* [local] */ 

#if !defined(____x_ABI_CLumia_CImaging_CCompositing_CIBlendFilter_INTERFACE_DEFINED__)
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Lumia_Imaging_Compositing_IBlendFilter[] = L"Lumia.Imaging.Compositing.IBlendFilter";
#endif /* !defined(____x_ABI_CLumia_CImaging_CCompositing_CIBlendFilter_INTERFACE_DEFINED__) */


/* interface __MIDL_itf_Lumia2EImaging2ECompositing_0000_0018 */
/* [local] */ 



extern RPC_IF_HANDLE __MIDL_itf_Lumia2EImaging2ECompositing_0000_0018_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_Lumia2EImaging2ECompositing_0000_0018_v0_0_s_ifspec;

#ifndef ____x_ABI_CLumia_CImaging_CCompositing_CIBlendFilter_INTERFACE_DEFINED__
#define ____x_ABI_CLumia_CImaging_CCompositing_CIBlendFilter_INTERFACE_DEFINED__

/* interface __x_ABI_CLumia_CImaging_CCompositing_CIBlendFilter */
/* [uuid][object] */ 



/* interface ABI::Lumia::Imaging::Compositing::IBlendFilter */
/* [uuid][object] */ 


EXTERN_C const IID IID___x_ABI_CLumia_CImaging_CCompositing_CIBlendFilter;

#if defined(__cplusplus) && !defined(CINTERFACE)
    } /* end extern "C" */
    namespace ABI {
        namespace Lumia {
            namespace Imaging {
                namespace Compositing {
                    
                    MIDL_INTERFACE("F556D8E4-FA8A-36C3-8C0E-4C39B5A2E8FC")
                    IBlendFilter : public IInspectable
                    {
                    public:
                        virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_ForegroundSource( 
                            /* [out][retval] */ __RPC__deref_out_opt ABI::Lumia::Imaging::IImageProvider **__returnValue) = 0;
                        
                        virtual /* [propput] */ HRESULT STDMETHODCALLTYPE put_ForegroundSource( 
                            /* [in] */ __RPC__in_opt ABI::Lumia::Imaging::IImageProvider *foregroundSource) = 0;
                        
                        virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_MaskSource( 
                            /* [out][retval] */ __RPC__deref_out_opt ABI::Lumia::Imaging::IImageProvider **__returnValue) = 0;
                        
                        virtual /* [propput] */ HRESULT STDMETHODCALLTYPE put_MaskSource( 
                            /* [in] */ __RPC__in_opt ABI::Lumia::Imaging::IImageProvider *maskSource) = 0;
                        
                        virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_Level( 
                            /* [out][retval] */ __RPC__out DOUBLE *__returnValue) = 0;
                        
                        virtual /* [propput] */ HRESULT STDMETHODCALLTYPE put_Level( 
                            /* [in] */ DOUBLE value) = 0;
                        
                        virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_BlendFunction( 
                            /* [out][retval] */ __RPC__out ABI::Lumia::Imaging::Compositing::BlendFunction *__returnValue) = 0;
                        
                        virtual /* [propput] */ HRESULT STDMETHODCALLTYPE put_BlendFunction( 
                            /* [in] */ ABI::Lumia::Imaging::Compositing::BlendFunction value) = 0;
                        
                        virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_TargetArea( 
                            /* [out][retval] */ __RPC__out ABI::Windows::Foundation::Rect *__returnValue) = 0;
                        
                        virtual /* [propput] */ HRESULT STDMETHODCALLTYPE put_TargetArea( 
                            /* [in] */ ABI::Windows::Foundation::Rect value) = 0;
                        
                        virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_TargetAreaRotation( 
                            /* [out][retval] */ __RPC__out DOUBLE *__returnValue) = 0;
                        
                        virtual /* [propput] */ HRESULT STDMETHODCALLTYPE put_TargetAreaRotation( 
                            /* [in] */ DOUBLE value) = 0;
                        
                        virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_TargetOutputOption( 
                            /* [out][retval] */ __RPC__out ABI::Lumia::Imaging::OutputOption *__returnValue) = 0;
                        
                        virtual /* [propput] */ HRESULT STDMETHODCALLTYPE put_TargetOutputOption( 
                            /* [in] */ ABI::Lumia::Imaging::OutputOption value) = 0;
                        
                    };

                    extern const __declspec(selectany) IID & IID_IBlendFilter = __uuidof(IBlendFilter);

                    
                }  /* end namespace */
            }  /* end namespace */
        }  /* end namespace */
    }  /* end namespace */
    extern "C" { 
    
#else 	/* C style interface */

    typedef struct __x_ABI_CLumia_CImaging_CCompositing_CIBlendFilterVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            __RPC__in __x_ABI_CLumia_CImaging_CCompositing_CIBlendFilter * This,
            /* [in] */ __RPC__in REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            __RPC__in __x_ABI_CLumia_CImaging_CCompositing_CIBlendFilter * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            __RPC__in __x_ABI_CLumia_CImaging_CCompositing_CIBlendFilter * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetIids )( 
            __RPC__in __x_ABI_CLumia_CImaging_CCompositing_CIBlendFilter * This,
            /* [out] */ __RPC__out ULONG *iidCount,
            /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
        
        HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )( 
            __RPC__in __x_ABI_CLumia_CImaging_CCompositing_CIBlendFilter * This,
            /* [out] */ __RPC__deref_out_opt HSTRING *className);
        
        HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )( 
            __RPC__in __x_ABI_CLumia_CImaging_CCompositing_CIBlendFilter * This,
            /* [out] */ __RPC__out TrustLevel *trustLevel);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_ForegroundSource )( 
            __RPC__in __x_ABI_CLumia_CImaging_CCompositing_CIBlendFilter * This,
            /* [out][retval] */ __RPC__deref_out_opt __x_ABI_CLumia_CImaging_CIImageProvider **__returnValue);
        
        /* [propput] */ HRESULT ( STDMETHODCALLTYPE *put_ForegroundSource )( 
            __RPC__in __x_ABI_CLumia_CImaging_CCompositing_CIBlendFilter * This,
            /* [in] */ __RPC__in_opt __x_ABI_CLumia_CImaging_CIImageProvider *foregroundSource);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_MaskSource )( 
            __RPC__in __x_ABI_CLumia_CImaging_CCompositing_CIBlendFilter * This,
            /* [out][retval] */ __RPC__deref_out_opt __x_ABI_CLumia_CImaging_CIImageProvider **__returnValue);
        
        /* [propput] */ HRESULT ( STDMETHODCALLTYPE *put_MaskSource )( 
            __RPC__in __x_ABI_CLumia_CImaging_CCompositing_CIBlendFilter * This,
            /* [in] */ __RPC__in_opt __x_ABI_CLumia_CImaging_CIImageProvider *maskSource);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_Level )( 
            __RPC__in __x_ABI_CLumia_CImaging_CCompositing_CIBlendFilter * This,
            /* [out][retval] */ __RPC__out DOUBLE *__returnValue);
        
        /* [propput] */ HRESULT ( STDMETHODCALLTYPE *put_Level )( 
            __RPC__in __x_ABI_CLumia_CImaging_CCompositing_CIBlendFilter * This,
            /* [in] */ DOUBLE value);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_BlendFunction )( 
            __RPC__in __x_ABI_CLumia_CImaging_CCompositing_CIBlendFilter * This,
            /* [out][retval] */ __RPC__out __x_ABI_CLumia_CImaging_CCompositing_CBlendFunction *__returnValue);
        
        /* [propput] */ HRESULT ( STDMETHODCALLTYPE *put_BlendFunction )( 
            __RPC__in __x_ABI_CLumia_CImaging_CCompositing_CIBlendFilter * This,
            /* [in] */ __x_ABI_CLumia_CImaging_CCompositing_CBlendFunction value);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_TargetArea )( 
            __RPC__in __x_ABI_CLumia_CImaging_CCompositing_CIBlendFilter * This,
            /* [out][retval] */ __RPC__out __x_ABI_CWindows_CFoundation_CRect *__returnValue);
        
        /* [propput] */ HRESULT ( STDMETHODCALLTYPE *put_TargetArea )( 
            __RPC__in __x_ABI_CLumia_CImaging_CCompositing_CIBlendFilter * This,
            /* [in] */ __x_ABI_CWindows_CFoundation_CRect value);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_TargetAreaRotation )( 
            __RPC__in __x_ABI_CLumia_CImaging_CCompositing_CIBlendFilter * This,
            /* [out][retval] */ __RPC__out DOUBLE *__returnValue);
        
        /* [propput] */ HRESULT ( STDMETHODCALLTYPE *put_TargetAreaRotation )( 
            __RPC__in __x_ABI_CLumia_CImaging_CCompositing_CIBlendFilter * This,
            /* [in] */ DOUBLE value);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_TargetOutputOption )( 
            __RPC__in __x_ABI_CLumia_CImaging_CCompositing_CIBlendFilter * This,
            /* [out][retval] */ __RPC__out __x_ABI_CLumia_CImaging_COutputOption *__returnValue);
        
        /* [propput] */ HRESULT ( STDMETHODCALLTYPE *put_TargetOutputOption )( 
            __RPC__in __x_ABI_CLumia_CImaging_CCompositing_CIBlendFilter * This,
            /* [in] */ __x_ABI_CLumia_CImaging_COutputOption value);
        
        END_INTERFACE
    } __x_ABI_CLumia_CImaging_CCompositing_CIBlendFilterVtbl;

    interface __x_ABI_CLumia_CImaging_CCompositing_CIBlendFilter
    {
        CONST_VTBL struct __x_ABI_CLumia_CImaging_CCompositing_CIBlendFilterVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define __x_ABI_CLumia_CImaging_CCompositing_CIBlendFilter_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __x_ABI_CLumia_CImaging_CCompositing_CIBlendFilter_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __x_ABI_CLumia_CImaging_CCompositing_CIBlendFilter_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __x_ABI_CLumia_CImaging_CCompositing_CIBlendFilter_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 

#define __x_ABI_CLumia_CImaging_CCompositing_CIBlendFilter_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 

#define __x_ABI_CLumia_CImaging_CCompositing_CIBlendFilter_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 


#define __x_ABI_CLumia_CImaging_CCompositing_CIBlendFilter_get_ForegroundSource(This,__returnValue)	\
    ( (This)->lpVtbl -> get_ForegroundSource(This,__returnValue) ) 

#define __x_ABI_CLumia_CImaging_CCompositing_CIBlendFilter_put_ForegroundSource(This,foregroundSource)	\
    ( (This)->lpVtbl -> put_ForegroundSource(This,foregroundSource) ) 

#define __x_ABI_CLumia_CImaging_CCompositing_CIBlendFilter_get_MaskSource(This,__returnValue)	\
    ( (This)->lpVtbl -> get_MaskSource(This,__returnValue) ) 

#define __x_ABI_CLumia_CImaging_CCompositing_CIBlendFilter_put_MaskSource(This,maskSource)	\
    ( (This)->lpVtbl -> put_MaskSource(This,maskSource) ) 

#define __x_ABI_CLumia_CImaging_CCompositing_CIBlendFilter_get_Level(This,__returnValue)	\
    ( (This)->lpVtbl -> get_Level(This,__returnValue) ) 

#define __x_ABI_CLumia_CImaging_CCompositing_CIBlendFilter_put_Level(This,value)	\
    ( (This)->lpVtbl -> put_Level(This,value) ) 

#define __x_ABI_CLumia_CImaging_CCompositing_CIBlendFilter_get_BlendFunction(This,__returnValue)	\
    ( (This)->lpVtbl -> get_BlendFunction(This,__returnValue) ) 

#define __x_ABI_CLumia_CImaging_CCompositing_CIBlendFilter_put_BlendFunction(This,value)	\
    ( (This)->lpVtbl -> put_BlendFunction(This,value) ) 

#define __x_ABI_CLumia_CImaging_CCompositing_CIBlendFilter_get_TargetArea(This,__returnValue)	\
    ( (This)->lpVtbl -> get_TargetArea(This,__returnValue) ) 

#define __x_ABI_CLumia_CImaging_CCompositing_CIBlendFilter_put_TargetArea(This,value)	\
    ( (This)->lpVtbl -> put_TargetArea(This,value) ) 

#define __x_ABI_CLumia_CImaging_CCompositing_CIBlendFilter_get_TargetAreaRotation(This,__returnValue)	\
    ( (This)->lpVtbl -> get_TargetAreaRotation(This,__returnValue) ) 

#define __x_ABI_CLumia_CImaging_CCompositing_CIBlendFilter_put_TargetAreaRotation(This,value)	\
    ( (This)->lpVtbl -> put_TargetAreaRotation(This,value) ) 

#define __x_ABI_CLumia_CImaging_CCompositing_CIBlendFilter_get_TargetOutputOption(This,__returnValue)	\
    ( (This)->lpVtbl -> get_TargetOutputOption(This,__returnValue) ) 

#define __x_ABI_CLumia_CImaging_CCompositing_CIBlendFilter_put_TargetOutputOption(This,value)	\
    ( (This)->lpVtbl -> put_TargetOutputOption(This,value) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* ____x_ABI_CLumia_CImaging_CCompositing_CIBlendFilter_INTERFACE_DEFINED__ */


/* interface __MIDL_itf_Lumia2EImaging2ECompositing_0000_0019 */
/* [local] */ 

#if !defined(____x_ABI_CLumia_CImaging_CCompositing_CIBlendFilterFactory_INTERFACE_DEFINED__)
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Lumia_Imaging_Compositing_IBlendFilterFactory[] = L"Lumia.Imaging.Compositing.IBlendFilterFactory";
#endif /* !defined(____x_ABI_CLumia_CImaging_CCompositing_CIBlendFilterFactory_INTERFACE_DEFINED__) */


/* interface __MIDL_itf_Lumia2EImaging2ECompositing_0000_0019 */
/* [local] */ 



extern RPC_IF_HANDLE __MIDL_itf_Lumia2EImaging2ECompositing_0000_0019_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_Lumia2EImaging2ECompositing_0000_0019_v0_0_s_ifspec;

#ifndef ____x_ABI_CLumia_CImaging_CCompositing_CIBlendFilterFactory_INTERFACE_DEFINED__
#define ____x_ABI_CLumia_CImaging_CCompositing_CIBlendFilterFactory_INTERFACE_DEFINED__

/* interface __x_ABI_CLumia_CImaging_CCompositing_CIBlendFilterFactory */
/* [uuid][object] */ 



/* interface ABI::Lumia::Imaging::Compositing::IBlendFilterFactory */
/* [uuid][object] */ 


EXTERN_C const IID IID___x_ABI_CLumia_CImaging_CCompositing_CIBlendFilterFactory;

#if defined(__cplusplus) && !defined(CINTERFACE)
    } /* end extern "C" */
    namespace ABI {
        namespace Lumia {
            namespace Imaging {
                namespace Compositing {
                    
                    MIDL_INTERFACE("B68BE117-CA1D-3D49-BB86-3EEFC0AC50E0")
                    IBlendFilterFactory : public IInspectable
                    {
                    public:
                        virtual HRESULT STDMETHODCALLTYPE Create( 
                            /* [in] */ __RPC__in_opt ABI::Lumia::Imaging::IImageProvider *foregroundSource,
                            /* [out][retval] */ __RPC__deref_out_opt ABI::Lumia::Imaging::Compositing::IBlendFilter **__returnValue) = 0;
                        
                        virtual HRESULT STDMETHODCALLTYPE CreateWithBlendFunction( 
                            /* [in] */ __RPC__in_opt ABI::Lumia::Imaging::IImageProvider *foregroundSource,
                            /* [in] */ ABI::Lumia::Imaging::Compositing::BlendFunction blendFunction,
                            /* [out][retval] */ __RPC__deref_out_opt ABI::Lumia::Imaging::Compositing::IBlendFilter **__returnValue) = 0;
                        
                        virtual HRESULT STDMETHODCALLTYPE CreateWithBlendSettings( 
                            /* [in] */ __RPC__in_opt ABI::Lumia::Imaging::IImageProvider *foregroundSource,
                            /* [in] */ ABI::Lumia::Imaging::Compositing::BlendFunction blendFunction,
                            /* [in] */ DOUBLE level,
                            /* [out][retval] */ __RPC__deref_out_opt ABI::Lumia::Imaging::Compositing::IBlendFilter **__returnValue) = 0;
                        
                        virtual HRESULT STDMETHODCALLTYPE CreateMaskedWithBlendSettings( 
                            /* [in] */ __RPC__in_opt ABI::Lumia::Imaging::IImageProvider *foregroundSource,
                            /* [in] */ __RPC__in_opt ABI::Lumia::Imaging::IImageProvider *maskSource,
                            /* [in] */ ABI::Lumia::Imaging::Compositing::BlendFunction blendFunction,
                            /* [in] */ DOUBLE level,
                            /* [out][retval] */ __RPC__deref_out_opt ABI::Lumia::Imaging::Compositing::IBlendFilter **__returnValue) = 0;
                        
                    };

                    extern const __declspec(selectany) IID & IID_IBlendFilterFactory = __uuidof(IBlendFilterFactory);

                    
                }  /* end namespace */
            }  /* end namespace */
        }  /* end namespace */
    }  /* end namespace */
    extern "C" { 
    
#else 	/* C style interface */

    typedef struct __x_ABI_CLumia_CImaging_CCompositing_CIBlendFilterFactoryVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            __RPC__in __x_ABI_CLumia_CImaging_CCompositing_CIBlendFilterFactory * This,
            /* [in] */ __RPC__in REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            __RPC__in __x_ABI_CLumia_CImaging_CCompositing_CIBlendFilterFactory * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            __RPC__in __x_ABI_CLumia_CImaging_CCompositing_CIBlendFilterFactory * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetIids )( 
            __RPC__in __x_ABI_CLumia_CImaging_CCompositing_CIBlendFilterFactory * This,
            /* [out] */ __RPC__out ULONG *iidCount,
            /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
        
        HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )( 
            __RPC__in __x_ABI_CLumia_CImaging_CCompositing_CIBlendFilterFactory * This,
            /* [out] */ __RPC__deref_out_opt HSTRING *className);
        
        HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )( 
            __RPC__in __x_ABI_CLumia_CImaging_CCompositing_CIBlendFilterFactory * This,
            /* [out] */ __RPC__out TrustLevel *trustLevel);
        
        HRESULT ( STDMETHODCALLTYPE *Create )( 
            __RPC__in __x_ABI_CLumia_CImaging_CCompositing_CIBlendFilterFactory * This,
            /* [in] */ __RPC__in_opt __x_ABI_CLumia_CImaging_CIImageProvider *foregroundSource,
            /* [out][retval] */ __RPC__deref_out_opt __x_ABI_CLumia_CImaging_CCompositing_CIBlendFilter **__returnValue);
        
        HRESULT ( STDMETHODCALLTYPE *CreateWithBlendFunction )( 
            __RPC__in __x_ABI_CLumia_CImaging_CCompositing_CIBlendFilterFactory * This,
            /* [in] */ __RPC__in_opt __x_ABI_CLumia_CImaging_CIImageProvider *foregroundSource,
            /* [in] */ __x_ABI_CLumia_CImaging_CCompositing_CBlendFunction blendFunction,
            /* [out][retval] */ __RPC__deref_out_opt __x_ABI_CLumia_CImaging_CCompositing_CIBlendFilter **__returnValue);
        
        HRESULT ( STDMETHODCALLTYPE *CreateWithBlendSettings )( 
            __RPC__in __x_ABI_CLumia_CImaging_CCompositing_CIBlendFilterFactory * This,
            /* [in] */ __RPC__in_opt __x_ABI_CLumia_CImaging_CIImageProvider *foregroundSource,
            /* [in] */ __x_ABI_CLumia_CImaging_CCompositing_CBlendFunction blendFunction,
            /* [in] */ DOUBLE level,
            /* [out][retval] */ __RPC__deref_out_opt __x_ABI_CLumia_CImaging_CCompositing_CIBlendFilter **__returnValue);
        
        HRESULT ( STDMETHODCALLTYPE *CreateMaskedWithBlendSettings )( 
            __RPC__in __x_ABI_CLumia_CImaging_CCompositing_CIBlendFilterFactory * This,
            /* [in] */ __RPC__in_opt __x_ABI_CLumia_CImaging_CIImageProvider *foregroundSource,
            /* [in] */ __RPC__in_opt __x_ABI_CLumia_CImaging_CIImageProvider *maskSource,
            /* [in] */ __x_ABI_CLumia_CImaging_CCompositing_CBlendFunction blendFunction,
            /* [in] */ DOUBLE level,
            /* [out][retval] */ __RPC__deref_out_opt __x_ABI_CLumia_CImaging_CCompositing_CIBlendFilter **__returnValue);
        
        END_INTERFACE
    } __x_ABI_CLumia_CImaging_CCompositing_CIBlendFilterFactoryVtbl;

    interface __x_ABI_CLumia_CImaging_CCompositing_CIBlendFilterFactory
    {
        CONST_VTBL struct __x_ABI_CLumia_CImaging_CCompositing_CIBlendFilterFactoryVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define __x_ABI_CLumia_CImaging_CCompositing_CIBlendFilterFactory_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __x_ABI_CLumia_CImaging_CCompositing_CIBlendFilterFactory_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __x_ABI_CLumia_CImaging_CCompositing_CIBlendFilterFactory_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __x_ABI_CLumia_CImaging_CCompositing_CIBlendFilterFactory_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 

#define __x_ABI_CLumia_CImaging_CCompositing_CIBlendFilterFactory_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 

#define __x_ABI_CLumia_CImaging_CCompositing_CIBlendFilterFactory_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 


#define __x_ABI_CLumia_CImaging_CCompositing_CIBlendFilterFactory_Create(This,foregroundSource,__returnValue)	\
    ( (This)->lpVtbl -> Create(This,foregroundSource,__returnValue) ) 

#define __x_ABI_CLumia_CImaging_CCompositing_CIBlendFilterFactory_CreateWithBlendFunction(This,foregroundSource,blendFunction,__returnValue)	\
    ( (This)->lpVtbl -> CreateWithBlendFunction(This,foregroundSource,blendFunction,__returnValue) ) 

#define __x_ABI_CLumia_CImaging_CCompositing_CIBlendFilterFactory_CreateWithBlendSettings(This,foregroundSource,blendFunction,level,__returnValue)	\
    ( (This)->lpVtbl -> CreateWithBlendSettings(This,foregroundSource,blendFunction,level,__returnValue) ) 

#define __x_ABI_CLumia_CImaging_CCompositing_CIBlendFilterFactory_CreateMaskedWithBlendSettings(This,foregroundSource,maskSource,blendFunction,level,__returnValue)	\
    ( (This)->lpVtbl -> CreateMaskedWithBlendSettings(This,foregroundSource,maskSource,blendFunction,level,__returnValue) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* ____x_ABI_CLumia_CImaging_CCompositing_CIBlendFilterFactory_INTERFACE_DEFINED__ */


/* interface __MIDL_itf_Lumia2EImaging2ECompositing_0000_0020 */
/* [local] */ 

#if !defined(____x_ABI_CLumia_CImaging_CCompositing_CIExtractedObjectImageSource_INTERFACE_DEFINED__)
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Lumia_Imaging_Compositing_IExtractedObjectImageSource[] = L"Lumia.Imaging.Compositing.IExtractedObjectImageSource";
#endif /* !defined(____x_ABI_CLumia_CImaging_CCompositing_CIExtractedObjectImageSource_INTERFACE_DEFINED__) */


/* interface __MIDL_itf_Lumia2EImaging2ECompositing_0000_0020 */
/* [local] */ 



extern RPC_IF_HANDLE __MIDL_itf_Lumia2EImaging2ECompositing_0000_0020_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_Lumia2EImaging2ECompositing_0000_0020_v0_0_s_ifspec;

#ifndef ____x_ABI_CLumia_CImaging_CCompositing_CIExtractedObjectImageSource_INTERFACE_DEFINED__
#define ____x_ABI_CLumia_CImaging_CCompositing_CIExtractedObjectImageSource_INTERFACE_DEFINED__

/* interface __x_ABI_CLumia_CImaging_CCompositing_CIExtractedObjectImageSource */
/* [uuid][object] */ 



/* interface ABI::Lumia::Imaging::Compositing::IExtractedObjectImageSource */
/* [uuid][object] */ 


EXTERN_C const IID IID___x_ABI_CLumia_CImaging_CCompositing_CIExtractedObjectImageSource;

#if defined(__cplusplus) && !defined(CINTERFACE)
    } /* end extern "C" */
    namespace ABI {
        namespace Lumia {
            namespace Imaging {
                namespace Compositing {
                    
                    MIDL_INTERFACE("5728BE76-7383-3907-B7E7-5785332202F6")
                    IExtractedObjectImageSource : public IInspectable
                    {
                    public:
                        virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_ObjectRectangle( 
                            /* [out][retval] */ __RPC__out ABI::Windows::Foundation::Rect *__returnValue) = 0;
                        
                    };

                    extern const __declspec(selectany) IID & IID_IExtractedObjectImageSource = __uuidof(IExtractedObjectImageSource);

                    
                }  /* end namespace */
            }  /* end namespace */
        }  /* end namespace */
    }  /* end namespace */
    extern "C" { 
    
#else 	/* C style interface */

    typedef struct __x_ABI_CLumia_CImaging_CCompositing_CIExtractedObjectImageSourceVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            __RPC__in __x_ABI_CLumia_CImaging_CCompositing_CIExtractedObjectImageSource * This,
            /* [in] */ __RPC__in REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            __RPC__in __x_ABI_CLumia_CImaging_CCompositing_CIExtractedObjectImageSource * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            __RPC__in __x_ABI_CLumia_CImaging_CCompositing_CIExtractedObjectImageSource * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetIids )( 
            __RPC__in __x_ABI_CLumia_CImaging_CCompositing_CIExtractedObjectImageSource * This,
            /* [out] */ __RPC__out ULONG *iidCount,
            /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
        
        HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )( 
            __RPC__in __x_ABI_CLumia_CImaging_CCompositing_CIExtractedObjectImageSource * This,
            /* [out] */ __RPC__deref_out_opt HSTRING *className);
        
        HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )( 
            __RPC__in __x_ABI_CLumia_CImaging_CCompositing_CIExtractedObjectImageSource * This,
            /* [out] */ __RPC__out TrustLevel *trustLevel);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_ObjectRectangle )( 
            __RPC__in __x_ABI_CLumia_CImaging_CCompositing_CIExtractedObjectImageSource * This,
            /* [out][retval] */ __RPC__out __x_ABI_CWindows_CFoundation_CRect *__returnValue);
        
        END_INTERFACE
    } __x_ABI_CLumia_CImaging_CCompositing_CIExtractedObjectImageSourceVtbl;

    interface __x_ABI_CLumia_CImaging_CCompositing_CIExtractedObjectImageSource
    {
        CONST_VTBL struct __x_ABI_CLumia_CImaging_CCompositing_CIExtractedObjectImageSourceVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define __x_ABI_CLumia_CImaging_CCompositing_CIExtractedObjectImageSource_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __x_ABI_CLumia_CImaging_CCompositing_CIExtractedObjectImageSource_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __x_ABI_CLumia_CImaging_CCompositing_CIExtractedObjectImageSource_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __x_ABI_CLumia_CImaging_CCompositing_CIExtractedObjectImageSource_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 

#define __x_ABI_CLumia_CImaging_CCompositing_CIExtractedObjectImageSource_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 

#define __x_ABI_CLumia_CImaging_CCompositing_CIExtractedObjectImageSource_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 


#define __x_ABI_CLumia_CImaging_CCompositing_CIExtractedObjectImageSource_get_ObjectRectangle(This,__returnValue)	\
    ( (This)->lpVtbl -> get_ObjectRectangle(This,__returnValue) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* ____x_ABI_CLumia_CImaging_CCompositing_CIExtractedObjectImageSource_INTERFACE_DEFINED__ */


/* interface __MIDL_itf_Lumia2EImaging2ECompositing_0000_0021 */
/* [local] */ 

#if !defined(____x_ABI_CLumia_CImaging_CCompositing_CIChromaKeyFilter_INTERFACE_DEFINED__)
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Lumia_Imaging_Compositing_IChromaKeyFilter[] = L"Lumia.Imaging.Compositing.IChromaKeyFilter";
#endif /* !defined(____x_ABI_CLumia_CImaging_CCompositing_CIChromaKeyFilter_INTERFACE_DEFINED__) */


/* interface __MIDL_itf_Lumia2EImaging2ECompositing_0000_0021 */
/* [local] */ 



extern RPC_IF_HANDLE __MIDL_itf_Lumia2EImaging2ECompositing_0000_0021_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_Lumia2EImaging2ECompositing_0000_0021_v0_0_s_ifspec;

#ifndef ____x_ABI_CLumia_CImaging_CCompositing_CIChromaKeyFilter_INTERFACE_DEFINED__
#define ____x_ABI_CLumia_CImaging_CCompositing_CIChromaKeyFilter_INTERFACE_DEFINED__

/* interface __x_ABI_CLumia_CImaging_CCompositing_CIChromaKeyFilter */
/* [uuid][object] */ 



/* interface ABI::Lumia::Imaging::Compositing::IChromaKeyFilter */
/* [uuid][object] */ 


EXTERN_C const IID IID___x_ABI_CLumia_CImaging_CCompositing_CIChromaKeyFilter;

#if defined(__cplusplus) && !defined(CINTERFACE)
    } /* end extern "C" */
    namespace ABI {
        namespace Lumia {
            namespace Imaging {
                namespace Compositing {
                    
                    MIDL_INTERFACE("C578DE9F-8011-35D7-81E4-F59F6B778D9B")
                    IChromaKeyFilter : public IInspectable
                    {
                    public:
                        virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_Color( 
                            /* [out][retval] */ __RPC__out ABI::Windows::UI::Color *__returnValue) = 0;
                        
                        virtual /* [propput] */ HRESULT STDMETHODCALLTYPE put_Color( 
                            /* [in] */ ABI::Windows::UI::Color value) = 0;
                        
                        virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_ColorDistance( 
                            /* [out][retval] */ __RPC__out DOUBLE *__returnValue) = 0;
                        
                        virtual /* [propput] */ HRESULT STDMETHODCALLTYPE put_ColorDistance( 
                            /* [in] */ DOUBLE value) = 0;
                        
                        virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_NoiseSuppression( 
                            /* [out][retval] */ __RPC__out DOUBLE *__returnValue) = 0;
                        
                        virtual /* [propput] */ HRESULT STDMETHODCALLTYPE put_NoiseSuppression( 
                            /* [in] */ DOUBLE value) = 0;
                        
                        virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_InvertAlpha( 
                            /* [out][retval] */ __RPC__out boolean *__returnValue) = 0;
                        
                        virtual /* [propput] */ HRESULT STDMETHODCALLTYPE put_InvertAlpha( 
                            /* [in] */ boolean value) = 0;
                        
                    };

                    extern const __declspec(selectany) IID & IID_IChromaKeyFilter = __uuidof(IChromaKeyFilter);

                    
                }  /* end namespace */
            }  /* end namespace */
        }  /* end namespace */
    }  /* end namespace */
    extern "C" { 
    
#else 	/* C style interface */

    typedef struct __x_ABI_CLumia_CImaging_CCompositing_CIChromaKeyFilterVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            __RPC__in __x_ABI_CLumia_CImaging_CCompositing_CIChromaKeyFilter * This,
            /* [in] */ __RPC__in REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            __RPC__in __x_ABI_CLumia_CImaging_CCompositing_CIChromaKeyFilter * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            __RPC__in __x_ABI_CLumia_CImaging_CCompositing_CIChromaKeyFilter * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetIids )( 
            __RPC__in __x_ABI_CLumia_CImaging_CCompositing_CIChromaKeyFilter * This,
            /* [out] */ __RPC__out ULONG *iidCount,
            /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
        
        HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )( 
            __RPC__in __x_ABI_CLumia_CImaging_CCompositing_CIChromaKeyFilter * This,
            /* [out] */ __RPC__deref_out_opt HSTRING *className);
        
        HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )( 
            __RPC__in __x_ABI_CLumia_CImaging_CCompositing_CIChromaKeyFilter * This,
            /* [out] */ __RPC__out TrustLevel *trustLevel);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_Color )( 
            __RPC__in __x_ABI_CLumia_CImaging_CCompositing_CIChromaKeyFilter * This,
            /* [out][retval] */ __RPC__out __x_ABI_CWindows_CUI_CColor *__returnValue);
        
        /* [propput] */ HRESULT ( STDMETHODCALLTYPE *put_Color )( 
            __RPC__in __x_ABI_CLumia_CImaging_CCompositing_CIChromaKeyFilter * This,
            /* [in] */ __x_ABI_CWindows_CUI_CColor value);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_ColorDistance )( 
            __RPC__in __x_ABI_CLumia_CImaging_CCompositing_CIChromaKeyFilter * This,
            /* [out][retval] */ __RPC__out DOUBLE *__returnValue);
        
        /* [propput] */ HRESULT ( STDMETHODCALLTYPE *put_ColorDistance )( 
            __RPC__in __x_ABI_CLumia_CImaging_CCompositing_CIChromaKeyFilter * This,
            /* [in] */ DOUBLE value);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_NoiseSuppression )( 
            __RPC__in __x_ABI_CLumia_CImaging_CCompositing_CIChromaKeyFilter * This,
            /* [out][retval] */ __RPC__out DOUBLE *__returnValue);
        
        /* [propput] */ HRESULT ( STDMETHODCALLTYPE *put_NoiseSuppression )( 
            __RPC__in __x_ABI_CLumia_CImaging_CCompositing_CIChromaKeyFilter * This,
            /* [in] */ DOUBLE value);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_InvertAlpha )( 
            __RPC__in __x_ABI_CLumia_CImaging_CCompositing_CIChromaKeyFilter * This,
            /* [out][retval] */ __RPC__out boolean *__returnValue);
        
        /* [propput] */ HRESULT ( STDMETHODCALLTYPE *put_InvertAlpha )( 
            __RPC__in __x_ABI_CLumia_CImaging_CCompositing_CIChromaKeyFilter * This,
            /* [in] */ boolean value);
        
        END_INTERFACE
    } __x_ABI_CLumia_CImaging_CCompositing_CIChromaKeyFilterVtbl;

    interface __x_ABI_CLumia_CImaging_CCompositing_CIChromaKeyFilter
    {
        CONST_VTBL struct __x_ABI_CLumia_CImaging_CCompositing_CIChromaKeyFilterVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define __x_ABI_CLumia_CImaging_CCompositing_CIChromaKeyFilter_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __x_ABI_CLumia_CImaging_CCompositing_CIChromaKeyFilter_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __x_ABI_CLumia_CImaging_CCompositing_CIChromaKeyFilter_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __x_ABI_CLumia_CImaging_CCompositing_CIChromaKeyFilter_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 

#define __x_ABI_CLumia_CImaging_CCompositing_CIChromaKeyFilter_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 

#define __x_ABI_CLumia_CImaging_CCompositing_CIChromaKeyFilter_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 


#define __x_ABI_CLumia_CImaging_CCompositing_CIChromaKeyFilter_get_Color(This,__returnValue)	\
    ( (This)->lpVtbl -> get_Color(This,__returnValue) ) 

#define __x_ABI_CLumia_CImaging_CCompositing_CIChromaKeyFilter_put_Color(This,value)	\
    ( (This)->lpVtbl -> put_Color(This,value) ) 

#define __x_ABI_CLumia_CImaging_CCompositing_CIChromaKeyFilter_get_ColorDistance(This,__returnValue)	\
    ( (This)->lpVtbl -> get_ColorDistance(This,__returnValue) ) 

#define __x_ABI_CLumia_CImaging_CCompositing_CIChromaKeyFilter_put_ColorDistance(This,value)	\
    ( (This)->lpVtbl -> put_ColorDistance(This,value) ) 

#define __x_ABI_CLumia_CImaging_CCompositing_CIChromaKeyFilter_get_NoiseSuppression(This,__returnValue)	\
    ( (This)->lpVtbl -> get_NoiseSuppression(This,__returnValue) ) 

#define __x_ABI_CLumia_CImaging_CCompositing_CIChromaKeyFilter_put_NoiseSuppression(This,value)	\
    ( (This)->lpVtbl -> put_NoiseSuppression(This,value) ) 

#define __x_ABI_CLumia_CImaging_CCompositing_CIChromaKeyFilter_get_InvertAlpha(This,__returnValue)	\
    ( (This)->lpVtbl -> get_InvertAlpha(This,__returnValue) ) 

#define __x_ABI_CLumia_CImaging_CCompositing_CIChromaKeyFilter_put_InvertAlpha(This,value)	\
    ( (This)->lpVtbl -> put_InvertAlpha(This,value) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* ____x_ABI_CLumia_CImaging_CCompositing_CIChromaKeyFilter_INTERFACE_DEFINED__ */


/* interface __MIDL_itf_Lumia2EImaging2ECompositing_0000_0022 */
/* [local] */ 

#if !defined(____x_ABI_CLumia_CImaging_CCompositing_CIChromaKeyFilterFactory_INTERFACE_DEFINED__)
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Lumia_Imaging_Compositing_IChromaKeyFilterFactory[] = L"Lumia.Imaging.Compositing.IChromaKeyFilterFactory";
#endif /* !defined(____x_ABI_CLumia_CImaging_CCompositing_CIChromaKeyFilterFactory_INTERFACE_DEFINED__) */


/* interface __MIDL_itf_Lumia2EImaging2ECompositing_0000_0022 */
/* [local] */ 



extern RPC_IF_HANDLE __MIDL_itf_Lumia2EImaging2ECompositing_0000_0022_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_Lumia2EImaging2ECompositing_0000_0022_v0_0_s_ifspec;

#ifndef ____x_ABI_CLumia_CImaging_CCompositing_CIChromaKeyFilterFactory_INTERFACE_DEFINED__
#define ____x_ABI_CLumia_CImaging_CCompositing_CIChromaKeyFilterFactory_INTERFACE_DEFINED__

/* interface __x_ABI_CLumia_CImaging_CCompositing_CIChromaKeyFilterFactory */
/* [uuid][object] */ 



/* interface ABI::Lumia::Imaging::Compositing::IChromaKeyFilterFactory */
/* [uuid][object] */ 


EXTERN_C const IID IID___x_ABI_CLumia_CImaging_CCompositing_CIChromaKeyFilterFactory;

#if defined(__cplusplus) && !defined(CINTERFACE)
    } /* end extern "C" */
    namespace ABI {
        namespace Lumia {
            namespace Imaging {
                namespace Compositing {
                    
                    MIDL_INTERFACE("37EB1856-2B67-3A38-A807-4BDB432D40AC")
                    IChromaKeyFilterFactory : public IInspectable
                    {
                    public:
                        virtual HRESULT STDMETHODCALLTYPE CreateWithExactColor( 
                            /* [in] */ ABI::Windows::UI::Color color,
                            /* [out][retval] */ __RPC__deref_out_opt ABI::Lumia::Imaging::Compositing::IChromaKeyFilter **__returnValue) = 0;
                        
                        virtual HRESULT STDMETHODCALLTYPE CreateWithColor( 
                            /* [in] */ ABI::Windows::UI::Color color,
                            /* [in] */ DOUBLE colorDistance,
                            /* [out][retval] */ __RPC__deref_out_opt ABI::Lumia::Imaging::Compositing::IChromaKeyFilter **__returnValue) = 0;
                        
                        virtual HRESULT STDMETHODCALLTYPE CreateWithColorAndNoiseSuppression( 
                            /* [in] */ ABI::Windows::UI::Color color,
                            /* [in] */ DOUBLE colorDistance,
                            /* [in] */ DOUBLE noiseSuppression,
                            /* [out][retval] */ __RPC__deref_out_opt ABI::Lumia::Imaging::Compositing::IChromaKeyFilter **__returnValue) = 0;
                        
                        virtual HRESULT STDMETHODCALLTYPE CreateWithSettings( 
                            /* [in] */ ABI::Windows::UI::Color color,
                            /* [in] */ DOUBLE colorDistance,
                            /* [in] */ DOUBLE noiseSuppression,
                            /* [in] */ boolean invertAlpha,
                            /* [out][retval] */ __RPC__deref_out_opt ABI::Lumia::Imaging::Compositing::IChromaKeyFilter **__returnValue) = 0;
                        
                    };

                    extern const __declspec(selectany) IID & IID_IChromaKeyFilterFactory = __uuidof(IChromaKeyFilterFactory);

                    
                }  /* end namespace */
            }  /* end namespace */
        }  /* end namespace */
    }  /* end namespace */
    extern "C" { 
    
#else 	/* C style interface */

    typedef struct __x_ABI_CLumia_CImaging_CCompositing_CIChromaKeyFilterFactoryVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            __RPC__in __x_ABI_CLumia_CImaging_CCompositing_CIChromaKeyFilterFactory * This,
            /* [in] */ __RPC__in REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            __RPC__in __x_ABI_CLumia_CImaging_CCompositing_CIChromaKeyFilterFactory * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            __RPC__in __x_ABI_CLumia_CImaging_CCompositing_CIChromaKeyFilterFactory * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetIids )( 
            __RPC__in __x_ABI_CLumia_CImaging_CCompositing_CIChromaKeyFilterFactory * This,
            /* [out] */ __RPC__out ULONG *iidCount,
            /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
        
        HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )( 
            __RPC__in __x_ABI_CLumia_CImaging_CCompositing_CIChromaKeyFilterFactory * This,
            /* [out] */ __RPC__deref_out_opt HSTRING *className);
        
        HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )( 
            __RPC__in __x_ABI_CLumia_CImaging_CCompositing_CIChromaKeyFilterFactory * This,
            /* [out] */ __RPC__out TrustLevel *trustLevel);
        
        HRESULT ( STDMETHODCALLTYPE *CreateWithExactColor )( 
            __RPC__in __x_ABI_CLumia_CImaging_CCompositing_CIChromaKeyFilterFactory * This,
            /* [in] */ __x_ABI_CWindows_CUI_CColor color,
            /* [out][retval] */ __RPC__deref_out_opt __x_ABI_CLumia_CImaging_CCompositing_CIChromaKeyFilter **__returnValue);
        
        HRESULT ( STDMETHODCALLTYPE *CreateWithColor )( 
            __RPC__in __x_ABI_CLumia_CImaging_CCompositing_CIChromaKeyFilterFactory * This,
            /* [in] */ __x_ABI_CWindows_CUI_CColor color,
            /* [in] */ DOUBLE colorDistance,
            /* [out][retval] */ __RPC__deref_out_opt __x_ABI_CLumia_CImaging_CCompositing_CIChromaKeyFilter **__returnValue);
        
        HRESULT ( STDMETHODCALLTYPE *CreateWithColorAndNoiseSuppression )( 
            __RPC__in __x_ABI_CLumia_CImaging_CCompositing_CIChromaKeyFilterFactory * This,
            /* [in] */ __x_ABI_CWindows_CUI_CColor color,
            /* [in] */ DOUBLE colorDistance,
            /* [in] */ DOUBLE noiseSuppression,
            /* [out][retval] */ __RPC__deref_out_opt __x_ABI_CLumia_CImaging_CCompositing_CIChromaKeyFilter **__returnValue);
        
        HRESULT ( STDMETHODCALLTYPE *CreateWithSettings )( 
            __RPC__in __x_ABI_CLumia_CImaging_CCompositing_CIChromaKeyFilterFactory * This,
            /* [in] */ __x_ABI_CWindows_CUI_CColor color,
            /* [in] */ DOUBLE colorDistance,
            /* [in] */ DOUBLE noiseSuppression,
            /* [in] */ boolean invertAlpha,
            /* [out][retval] */ __RPC__deref_out_opt __x_ABI_CLumia_CImaging_CCompositing_CIChromaKeyFilter **__returnValue);
        
        END_INTERFACE
    } __x_ABI_CLumia_CImaging_CCompositing_CIChromaKeyFilterFactoryVtbl;

    interface __x_ABI_CLumia_CImaging_CCompositing_CIChromaKeyFilterFactory
    {
        CONST_VTBL struct __x_ABI_CLumia_CImaging_CCompositing_CIChromaKeyFilterFactoryVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define __x_ABI_CLumia_CImaging_CCompositing_CIChromaKeyFilterFactory_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __x_ABI_CLumia_CImaging_CCompositing_CIChromaKeyFilterFactory_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __x_ABI_CLumia_CImaging_CCompositing_CIChromaKeyFilterFactory_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __x_ABI_CLumia_CImaging_CCompositing_CIChromaKeyFilterFactory_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 

#define __x_ABI_CLumia_CImaging_CCompositing_CIChromaKeyFilterFactory_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 

#define __x_ABI_CLumia_CImaging_CCompositing_CIChromaKeyFilterFactory_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 


#define __x_ABI_CLumia_CImaging_CCompositing_CIChromaKeyFilterFactory_CreateWithExactColor(This,color,__returnValue)	\
    ( (This)->lpVtbl -> CreateWithExactColor(This,color,__returnValue) ) 

#define __x_ABI_CLumia_CImaging_CCompositing_CIChromaKeyFilterFactory_CreateWithColor(This,color,colorDistance,__returnValue)	\
    ( (This)->lpVtbl -> CreateWithColor(This,color,colorDistance,__returnValue) ) 

#define __x_ABI_CLumia_CImaging_CCompositing_CIChromaKeyFilterFactory_CreateWithColorAndNoiseSuppression(This,color,colorDistance,noiseSuppression,__returnValue)	\
    ( (This)->lpVtbl -> CreateWithColorAndNoiseSuppression(This,color,colorDistance,noiseSuppression,__returnValue) ) 

#define __x_ABI_CLumia_CImaging_CCompositing_CIChromaKeyFilterFactory_CreateWithSettings(This,color,colorDistance,noiseSuppression,invertAlpha,__returnValue)	\
    ( (This)->lpVtbl -> CreateWithSettings(This,color,colorDistance,noiseSuppression,invertAlpha,__returnValue) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* ____x_ABI_CLumia_CImaging_CCompositing_CIChromaKeyFilterFactory_INTERFACE_DEFINED__ */


/* interface __MIDL_itf_Lumia2EImaging2ECompositing_0000_0023 */
/* [local] */ 

#if !defined(____x_ABI_CLumia_CImaging_CCompositing_CIImageFusionFilter_INTERFACE_DEFINED__)
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Lumia_Imaging_Compositing_IImageFusionFilter[] = L"Lumia.Imaging.Compositing.IImageFusionFilter";
#endif /* !defined(____x_ABI_CLumia_CImaging_CCompositing_CIImageFusionFilter_INTERFACE_DEFINED__) */


/* interface __MIDL_itf_Lumia2EImaging2ECompositing_0000_0023 */
/* [local] */ 



extern RPC_IF_HANDLE __MIDL_itf_Lumia2EImaging2ECompositing_0000_0023_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_Lumia2EImaging2ECompositing_0000_0023_v0_0_s_ifspec;

#ifndef ____x_ABI_CLumia_CImaging_CCompositing_CIImageFusionFilter_INTERFACE_DEFINED__
#define ____x_ABI_CLumia_CImaging_CCompositing_CIImageFusionFilter_INTERFACE_DEFINED__

/* interface __x_ABI_CLumia_CImaging_CCompositing_CIImageFusionFilter */
/* [uuid][object] */ 



/* interface ABI::Lumia::Imaging::Compositing::IImageFusionFilter */
/* [uuid][object] */ 


EXTERN_C const IID IID___x_ABI_CLumia_CImaging_CCompositing_CIImageFusionFilter;

#if defined(__cplusplus) && !defined(CINTERFACE)
    } /* end extern "C" */
    namespace ABI {
        namespace Lumia {
            namespace Imaging {
                namespace Compositing {
                    
                    MIDL_INTERFACE("53B0786C-2651-35B2-8681-D6A06FB312F2")
                    IImageFusionFilter : public IInspectable
                    {
                    public:
                        virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_FusionImageSource( 
                            /* [out][retval] */ __RPC__deref_out_opt ABI::Lumia::Imaging::IImageProvider **__returnValue) = 0;
                        
                        virtual /* [propput] */ HRESULT STDMETHODCALLTYPE put_FusionImageSource( 
                            /* [in] */ __RPC__in_opt ABI::Lumia::Imaging::IImageProvider *value) = 0;
                        
                        virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_MaskImageSource( 
                            /* [out][retval] */ __RPC__deref_out_opt ABI::Lumia::Imaging::IImageProvider **__returnValue) = 0;
                        
                        virtual /* [propput] */ HRESULT STDMETHODCALLTYPE put_MaskImageSource( 
                            /* [in] */ __RPC__in_opt ABI::Lumia::Imaging::IImageProvider *value) = 0;
                        
                        virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_InvertAlpha( 
                            /* [out][retval] */ __RPC__out boolean *__returnValue) = 0;
                        
                        virtual /* [propput] */ HRESULT STDMETHODCALLTYPE put_InvertAlpha( 
                            /* [in] */ boolean value) = 0;
                        
                    };

                    extern const __declspec(selectany) IID & IID_IImageFusionFilter = __uuidof(IImageFusionFilter);

                    
                }  /* end namespace */
            }  /* end namespace */
        }  /* end namespace */
    }  /* end namespace */
    extern "C" { 
    
#else 	/* C style interface */

    typedef struct __x_ABI_CLumia_CImaging_CCompositing_CIImageFusionFilterVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            __RPC__in __x_ABI_CLumia_CImaging_CCompositing_CIImageFusionFilter * This,
            /* [in] */ __RPC__in REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            __RPC__in __x_ABI_CLumia_CImaging_CCompositing_CIImageFusionFilter * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            __RPC__in __x_ABI_CLumia_CImaging_CCompositing_CIImageFusionFilter * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetIids )( 
            __RPC__in __x_ABI_CLumia_CImaging_CCompositing_CIImageFusionFilter * This,
            /* [out] */ __RPC__out ULONG *iidCount,
            /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
        
        HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )( 
            __RPC__in __x_ABI_CLumia_CImaging_CCompositing_CIImageFusionFilter * This,
            /* [out] */ __RPC__deref_out_opt HSTRING *className);
        
        HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )( 
            __RPC__in __x_ABI_CLumia_CImaging_CCompositing_CIImageFusionFilter * This,
            /* [out] */ __RPC__out TrustLevel *trustLevel);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_FusionImageSource )( 
            __RPC__in __x_ABI_CLumia_CImaging_CCompositing_CIImageFusionFilter * This,
            /* [out][retval] */ __RPC__deref_out_opt __x_ABI_CLumia_CImaging_CIImageProvider **__returnValue);
        
        /* [propput] */ HRESULT ( STDMETHODCALLTYPE *put_FusionImageSource )( 
            __RPC__in __x_ABI_CLumia_CImaging_CCompositing_CIImageFusionFilter * This,
            /* [in] */ __RPC__in_opt __x_ABI_CLumia_CImaging_CIImageProvider *value);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_MaskImageSource )( 
            __RPC__in __x_ABI_CLumia_CImaging_CCompositing_CIImageFusionFilter * This,
            /* [out][retval] */ __RPC__deref_out_opt __x_ABI_CLumia_CImaging_CIImageProvider **__returnValue);
        
        /* [propput] */ HRESULT ( STDMETHODCALLTYPE *put_MaskImageSource )( 
            __RPC__in __x_ABI_CLumia_CImaging_CCompositing_CIImageFusionFilter * This,
            /* [in] */ __RPC__in_opt __x_ABI_CLumia_CImaging_CIImageProvider *value);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_InvertAlpha )( 
            __RPC__in __x_ABI_CLumia_CImaging_CCompositing_CIImageFusionFilter * This,
            /* [out][retval] */ __RPC__out boolean *__returnValue);
        
        /* [propput] */ HRESULT ( STDMETHODCALLTYPE *put_InvertAlpha )( 
            __RPC__in __x_ABI_CLumia_CImaging_CCompositing_CIImageFusionFilter * This,
            /* [in] */ boolean value);
        
        END_INTERFACE
    } __x_ABI_CLumia_CImaging_CCompositing_CIImageFusionFilterVtbl;

    interface __x_ABI_CLumia_CImaging_CCompositing_CIImageFusionFilter
    {
        CONST_VTBL struct __x_ABI_CLumia_CImaging_CCompositing_CIImageFusionFilterVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define __x_ABI_CLumia_CImaging_CCompositing_CIImageFusionFilter_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __x_ABI_CLumia_CImaging_CCompositing_CIImageFusionFilter_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __x_ABI_CLumia_CImaging_CCompositing_CIImageFusionFilter_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __x_ABI_CLumia_CImaging_CCompositing_CIImageFusionFilter_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 

#define __x_ABI_CLumia_CImaging_CCompositing_CIImageFusionFilter_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 

#define __x_ABI_CLumia_CImaging_CCompositing_CIImageFusionFilter_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 


#define __x_ABI_CLumia_CImaging_CCompositing_CIImageFusionFilter_get_FusionImageSource(This,__returnValue)	\
    ( (This)->lpVtbl -> get_FusionImageSource(This,__returnValue) ) 

#define __x_ABI_CLumia_CImaging_CCompositing_CIImageFusionFilter_put_FusionImageSource(This,value)	\
    ( (This)->lpVtbl -> put_FusionImageSource(This,value) ) 

#define __x_ABI_CLumia_CImaging_CCompositing_CIImageFusionFilter_get_MaskImageSource(This,__returnValue)	\
    ( (This)->lpVtbl -> get_MaskImageSource(This,__returnValue) ) 

#define __x_ABI_CLumia_CImaging_CCompositing_CIImageFusionFilter_put_MaskImageSource(This,value)	\
    ( (This)->lpVtbl -> put_MaskImageSource(This,value) ) 

#define __x_ABI_CLumia_CImaging_CCompositing_CIImageFusionFilter_get_InvertAlpha(This,__returnValue)	\
    ( (This)->lpVtbl -> get_InvertAlpha(This,__returnValue) ) 

#define __x_ABI_CLumia_CImaging_CCompositing_CIImageFusionFilter_put_InvertAlpha(This,value)	\
    ( (This)->lpVtbl -> put_InvertAlpha(This,value) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* ____x_ABI_CLumia_CImaging_CCompositing_CIImageFusionFilter_INTERFACE_DEFINED__ */


/* interface __MIDL_itf_Lumia2EImaging2ECompositing_0000_0024 */
/* [local] */ 

#if !defined(____x_ABI_CLumia_CImaging_CCompositing_CIImageFusionFilterFactory_INTERFACE_DEFINED__)
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Lumia_Imaging_Compositing_IImageFusionFilterFactory[] = L"Lumia.Imaging.Compositing.IImageFusionFilterFactory";
#endif /* !defined(____x_ABI_CLumia_CImaging_CCompositing_CIImageFusionFilterFactory_INTERFACE_DEFINED__) */


/* interface __MIDL_itf_Lumia2EImaging2ECompositing_0000_0024 */
/* [local] */ 



extern RPC_IF_HANDLE __MIDL_itf_Lumia2EImaging2ECompositing_0000_0024_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_Lumia2EImaging2ECompositing_0000_0024_v0_0_s_ifspec;

#ifndef ____x_ABI_CLumia_CImaging_CCompositing_CIImageFusionFilterFactory_INTERFACE_DEFINED__
#define ____x_ABI_CLumia_CImaging_CCompositing_CIImageFusionFilterFactory_INTERFACE_DEFINED__

/* interface __x_ABI_CLumia_CImaging_CCompositing_CIImageFusionFilterFactory */
/* [uuid][object] */ 



/* interface ABI::Lumia::Imaging::Compositing::IImageFusionFilterFactory */
/* [uuid][object] */ 


EXTERN_C const IID IID___x_ABI_CLumia_CImaging_CCompositing_CIImageFusionFilterFactory;

#if defined(__cplusplus) && !defined(CINTERFACE)
    } /* end extern "C" */
    namespace ABI {
        namespace Lumia {
            namespace Imaging {
                namespace Compositing {
                    
                    MIDL_INTERFACE("D2AFBC13-C5D9-3655-BD8A-B0D30AA607EA")
                    IImageFusionFilterFactory : public IInspectable
                    {
                    public:
                        virtual HRESULT STDMETHODCALLTYPE Create( 
                            /* [in] */ __RPC__in_opt ABI::Lumia::Imaging::IImageProvider *fusionImageSource,
                            /* [in] */ __RPC__in_opt ABI::Lumia::Imaging::IImageProvider *maskImageSource,
                            /* [in] */ boolean invertAlpha,
                            /* [out][retval] */ __RPC__deref_out_opt ABI::Lumia::Imaging::Compositing::IImageFusionFilter **__returnValue) = 0;
                        
                    };

                    extern const __declspec(selectany) IID & IID_IImageFusionFilterFactory = __uuidof(IImageFusionFilterFactory);

                    
                }  /* end namespace */
            }  /* end namespace */
        }  /* end namespace */
    }  /* end namespace */
    extern "C" { 
    
#else 	/* C style interface */

    typedef struct __x_ABI_CLumia_CImaging_CCompositing_CIImageFusionFilterFactoryVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            __RPC__in __x_ABI_CLumia_CImaging_CCompositing_CIImageFusionFilterFactory * This,
            /* [in] */ __RPC__in REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            __RPC__in __x_ABI_CLumia_CImaging_CCompositing_CIImageFusionFilterFactory * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            __RPC__in __x_ABI_CLumia_CImaging_CCompositing_CIImageFusionFilterFactory * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetIids )( 
            __RPC__in __x_ABI_CLumia_CImaging_CCompositing_CIImageFusionFilterFactory * This,
            /* [out] */ __RPC__out ULONG *iidCount,
            /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
        
        HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )( 
            __RPC__in __x_ABI_CLumia_CImaging_CCompositing_CIImageFusionFilterFactory * This,
            /* [out] */ __RPC__deref_out_opt HSTRING *className);
        
        HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )( 
            __RPC__in __x_ABI_CLumia_CImaging_CCompositing_CIImageFusionFilterFactory * This,
            /* [out] */ __RPC__out TrustLevel *trustLevel);
        
        HRESULT ( STDMETHODCALLTYPE *Create )( 
            __RPC__in __x_ABI_CLumia_CImaging_CCompositing_CIImageFusionFilterFactory * This,
            /* [in] */ __RPC__in_opt __x_ABI_CLumia_CImaging_CIImageProvider *fusionImageSource,
            /* [in] */ __RPC__in_opt __x_ABI_CLumia_CImaging_CIImageProvider *maskImageSource,
            /* [in] */ boolean invertAlpha,
            /* [out][retval] */ __RPC__deref_out_opt __x_ABI_CLumia_CImaging_CCompositing_CIImageFusionFilter **__returnValue);
        
        END_INTERFACE
    } __x_ABI_CLumia_CImaging_CCompositing_CIImageFusionFilterFactoryVtbl;

    interface __x_ABI_CLumia_CImaging_CCompositing_CIImageFusionFilterFactory
    {
        CONST_VTBL struct __x_ABI_CLumia_CImaging_CCompositing_CIImageFusionFilterFactoryVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define __x_ABI_CLumia_CImaging_CCompositing_CIImageFusionFilterFactory_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __x_ABI_CLumia_CImaging_CCompositing_CIImageFusionFilterFactory_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __x_ABI_CLumia_CImaging_CCompositing_CIImageFusionFilterFactory_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __x_ABI_CLumia_CImaging_CCompositing_CIImageFusionFilterFactory_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 

#define __x_ABI_CLumia_CImaging_CCompositing_CIImageFusionFilterFactory_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 

#define __x_ABI_CLumia_CImaging_CCompositing_CIImageFusionFilterFactory_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 


#define __x_ABI_CLumia_CImaging_CCompositing_CIImageFusionFilterFactory_Create(This,fusionImageSource,maskImageSource,invertAlpha,__returnValue)	\
    ( (This)->lpVtbl -> Create(This,fusionImageSource,maskImageSource,invertAlpha,__returnValue) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* ____x_ABI_CLumia_CImaging_CCompositing_CIImageFusionFilterFactory_INTERFACE_DEFINED__ */


/* interface __MIDL_itf_Lumia2EImaging2ECompositing_0000_0025 */
/* [local] */ 

#if !defined(____x_ABI_CLumia_CImaging_CCompositing_CIInteractiveSegmentationMaskRectifier_INTERFACE_DEFINED__)
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Lumia_Imaging_Compositing_IInteractiveSegmentationMaskRectifier[] = L"Lumia.Imaging.Compositing.IInteractiveSegmentationMaskRectifier";
#endif /* !defined(____x_ABI_CLumia_CImaging_CCompositing_CIInteractiveSegmentationMaskRectifier_INTERFACE_DEFINED__) */


/* interface __MIDL_itf_Lumia2EImaging2ECompositing_0000_0025 */
/* [local] */ 



extern RPC_IF_HANDLE __MIDL_itf_Lumia2EImaging2ECompositing_0000_0025_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_Lumia2EImaging2ECompositing_0000_0025_v0_0_s_ifspec;

#ifndef ____x_ABI_CLumia_CImaging_CCompositing_CIInteractiveSegmentationMaskRectifier_INTERFACE_DEFINED__
#define ____x_ABI_CLumia_CImaging_CCompositing_CIInteractiveSegmentationMaskRectifier_INTERFACE_DEFINED__

/* interface __x_ABI_CLumia_CImaging_CCompositing_CIInteractiveSegmentationMaskRectifier */
/* [uuid][object] */ 



/* interface ABI::Lumia::Imaging::Compositing::IInteractiveSegmentationMaskRectifier */
/* [uuid][object] */ 


EXTERN_C const IID IID___x_ABI_CLumia_CImaging_CCompositing_CIInteractiveSegmentationMaskRectifier;

#if defined(__cplusplus) && !defined(CINTERFACE)
    } /* end extern "C" */
    namespace ABI {
        namespace Lumia {
            namespace Imaging {
                namespace Compositing {
                    
                    MIDL_INTERFACE("23C6A67D-78D0-3F4B-9FB8-4F2A87B8B81D")
                    IInteractiveSegmentationMaskRectifier : public IInspectable
                    {
                    public:
                        virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_AnnotationsColor( 
                            /* [out][retval] */ __RPC__out ABI::Windows::UI::Color *__returnValue) = 0;
                        
                        virtual /* [propput] */ HRESULT STDMETHODCALLTYPE put_AnnotationsColor( 
                            /* [in] */ ABI::Windows::UI::Color color) = 0;
                        
                        virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_AnnotationsSource( 
                            /* [out][retval] */ __RPC__deref_out_opt ABI::Lumia::Imaging::IImageProvider **__returnValue) = 0;
                        
                        virtual /* [propput] */ HRESULT STDMETHODCALLTYPE put_AnnotationsSource( 
                            /* [in] */ __RPC__in_opt ABI::Lumia::Imaging::IImageProvider *value) = 0;
                        
                        virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_MaskAnnotationType( 
                            /* [out][retval] */ __RPC__out ABI::Lumia::Imaging::MaskAnnotationType *__returnValue) = 0;
                        
                        virtual /* [propput] */ HRESULT STDMETHODCALLTYPE put_MaskAnnotationType( 
                            /* [in] */ ABI::Lumia::Imaging::MaskAnnotationType value) = 0;
                        
                    };

                    extern const __declspec(selectany) IID & IID_IInteractiveSegmentationMaskRectifier = __uuidof(IInteractiveSegmentationMaskRectifier);

                    
                }  /* end namespace */
            }  /* end namespace */
        }  /* end namespace */
    }  /* end namespace */
    extern "C" { 
    
#else 	/* C style interface */

    typedef struct __x_ABI_CLumia_CImaging_CCompositing_CIInteractiveSegmentationMaskRectifierVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            __RPC__in __x_ABI_CLumia_CImaging_CCompositing_CIInteractiveSegmentationMaskRectifier * This,
            /* [in] */ __RPC__in REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            __RPC__in __x_ABI_CLumia_CImaging_CCompositing_CIInteractiveSegmentationMaskRectifier * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            __RPC__in __x_ABI_CLumia_CImaging_CCompositing_CIInteractiveSegmentationMaskRectifier * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetIids )( 
            __RPC__in __x_ABI_CLumia_CImaging_CCompositing_CIInteractiveSegmentationMaskRectifier * This,
            /* [out] */ __RPC__out ULONG *iidCount,
            /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
        
        HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )( 
            __RPC__in __x_ABI_CLumia_CImaging_CCompositing_CIInteractiveSegmentationMaskRectifier * This,
            /* [out] */ __RPC__deref_out_opt HSTRING *className);
        
        HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )( 
            __RPC__in __x_ABI_CLumia_CImaging_CCompositing_CIInteractiveSegmentationMaskRectifier * This,
            /* [out] */ __RPC__out TrustLevel *trustLevel);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_AnnotationsColor )( 
            __RPC__in __x_ABI_CLumia_CImaging_CCompositing_CIInteractiveSegmentationMaskRectifier * This,
            /* [out][retval] */ __RPC__out __x_ABI_CWindows_CUI_CColor *__returnValue);
        
        /* [propput] */ HRESULT ( STDMETHODCALLTYPE *put_AnnotationsColor )( 
            __RPC__in __x_ABI_CLumia_CImaging_CCompositing_CIInteractiveSegmentationMaskRectifier * This,
            /* [in] */ __x_ABI_CWindows_CUI_CColor color);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_AnnotationsSource )( 
            __RPC__in __x_ABI_CLumia_CImaging_CCompositing_CIInteractiveSegmentationMaskRectifier * This,
            /* [out][retval] */ __RPC__deref_out_opt __x_ABI_CLumia_CImaging_CIImageProvider **__returnValue);
        
        /* [propput] */ HRESULT ( STDMETHODCALLTYPE *put_AnnotationsSource )( 
            __RPC__in __x_ABI_CLumia_CImaging_CCompositing_CIInteractiveSegmentationMaskRectifier * This,
            /* [in] */ __RPC__in_opt __x_ABI_CLumia_CImaging_CIImageProvider *value);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_MaskAnnotationType )( 
            __RPC__in __x_ABI_CLumia_CImaging_CCompositing_CIInteractiveSegmentationMaskRectifier * This,
            /* [out][retval] */ __RPC__out __x_ABI_CLumia_CImaging_CMaskAnnotationType *__returnValue);
        
        /* [propput] */ HRESULT ( STDMETHODCALLTYPE *put_MaskAnnotationType )( 
            __RPC__in __x_ABI_CLumia_CImaging_CCompositing_CIInteractiveSegmentationMaskRectifier * This,
            /* [in] */ __x_ABI_CLumia_CImaging_CMaskAnnotationType value);
        
        END_INTERFACE
    } __x_ABI_CLumia_CImaging_CCompositing_CIInteractiveSegmentationMaskRectifierVtbl;

    interface __x_ABI_CLumia_CImaging_CCompositing_CIInteractiveSegmentationMaskRectifier
    {
        CONST_VTBL struct __x_ABI_CLumia_CImaging_CCompositing_CIInteractiveSegmentationMaskRectifierVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define __x_ABI_CLumia_CImaging_CCompositing_CIInteractiveSegmentationMaskRectifier_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __x_ABI_CLumia_CImaging_CCompositing_CIInteractiveSegmentationMaskRectifier_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __x_ABI_CLumia_CImaging_CCompositing_CIInteractiveSegmentationMaskRectifier_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __x_ABI_CLumia_CImaging_CCompositing_CIInteractiveSegmentationMaskRectifier_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 

#define __x_ABI_CLumia_CImaging_CCompositing_CIInteractiveSegmentationMaskRectifier_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 

#define __x_ABI_CLumia_CImaging_CCompositing_CIInteractiveSegmentationMaskRectifier_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 


#define __x_ABI_CLumia_CImaging_CCompositing_CIInteractiveSegmentationMaskRectifier_get_AnnotationsColor(This,__returnValue)	\
    ( (This)->lpVtbl -> get_AnnotationsColor(This,__returnValue) ) 

#define __x_ABI_CLumia_CImaging_CCompositing_CIInteractiveSegmentationMaskRectifier_put_AnnotationsColor(This,color)	\
    ( (This)->lpVtbl -> put_AnnotationsColor(This,color) ) 

#define __x_ABI_CLumia_CImaging_CCompositing_CIInteractiveSegmentationMaskRectifier_get_AnnotationsSource(This,__returnValue)	\
    ( (This)->lpVtbl -> get_AnnotationsSource(This,__returnValue) ) 

#define __x_ABI_CLumia_CImaging_CCompositing_CIInteractiveSegmentationMaskRectifier_put_AnnotationsSource(This,value)	\
    ( (This)->lpVtbl -> put_AnnotationsSource(This,value) ) 

#define __x_ABI_CLumia_CImaging_CCompositing_CIInteractiveSegmentationMaskRectifier_get_MaskAnnotationType(This,__returnValue)	\
    ( (This)->lpVtbl -> get_MaskAnnotationType(This,__returnValue) ) 

#define __x_ABI_CLumia_CImaging_CCompositing_CIInteractiveSegmentationMaskRectifier_put_MaskAnnotationType(This,value)	\
    ( (This)->lpVtbl -> put_MaskAnnotationType(This,value) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* ____x_ABI_CLumia_CImaging_CCompositing_CIInteractiveSegmentationMaskRectifier_INTERFACE_DEFINED__ */


/* interface __MIDL_itf_Lumia2EImaging2ECompositing_0000_0026 */
/* [local] */ 

#if !defined(____x_ABI_CLumia_CImaging_CCompositing_CIInteractiveForegroundSegmenter_INTERFACE_DEFINED__)
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Lumia_Imaging_Compositing_IInteractiveForegroundSegmenter[] = L"Lumia.Imaging.Compositing.IInteractiveForegroundSegmenter";
#endif /* !defined(____x_ABI_CLumia_CImaging_CCompositing_CIInteractiveForegroundSegmenter_INTERFACE_DEFINED__) */


/* interface __MIDL_itf_Lumia2EImaging2ECompositing_0000_0026 */
/* [local] */ 



extern RPC_IF_HANDLE __MIDL_itf_Lumia2EImaging2ECompositing_0000_0026_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_Lumia2EImaging2ECompositing_0000_0026_v0_0_s_ifspec;

#ifndef ____x_ABI_CLumia_CImaging_CCompositing_CIInteractiveForegroundSegmenter_INTERFACE_DEFINED__
#define ____x_ABI_CLumia_CImaging_CCompositing_CIInteractiveForegroundSegmenter_INTERFACE_DEFINED__

/* interface __x_ABI_CLumia_CImaging_CCompositing_CIInteractiveForegroundSegmenter */
/* [uuid][object] */ 



/* interface ABI::Lumia::Imaging::Compositing::IInteractiveForegroundSegmenter */
/* [uuid][object] */ 


EXTERN_C const IID IID___x_ABI_CLumia_CImaging_CCompositing_CIInteractiveForegroundSegmenter;

#if defined(__cplusplus) && !defined(CINTERFACE)
    } /* end extern "C" */
    namespace ABI {
        namespace Lumia {
            namespace Imaging {
                namespace Compositing {
                    
                    MIDL_INTERFACE("5E5E3761-AC14-3FE4-AF5F-0C9CC6BFBF92")
                    IInteractiveForegroundSegmenter : public IInspectable
                    {
                    public:
                        virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_ForegroundColor( 
                            /* [out][retval] */ __RPC__out ABI::Windows::UI::Color *__returnValue) = 0;
                        
                        virtual /* [propput] */ HRESULT STDMETHODCALLTYPE put_ForegroundColor( 
                            /* [in] */ ABI::Windows::UI::Color color) = 0;
                        
                        virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_BackgroundColor( 
                            /* [out][retval] */ __RPC__out ABI::Windows::UI::Color *__returnValue) = 0;
                        
                        virtual /* [propput] */ HRESULT STDMETHODCALLTYPE put_BackgroundColor( 
                            /* [in] */ ABI::Windows::UI::Color color) = 0;
                        
                        virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_AnnotationsSource( 
                            /* [out][retval] */ __RPC__deref_out_opt ABI::Lumia::Imaging::IImageProvider **__returnValue) = 0;
                        
                        virtual /* [propput] */ HRESULT STDMETHODCALLTYPE put_AnnotationsSource( 
                            /* [in] */ __RPC__in_opt ABI::Lumia::Imaging::IImageProvider *value) = 0;
                        
                        virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_Quality( 
                            /* [out][retval] */ __RPC__out DOUBLE *__returnValue) = 0;
                        
                        virtual /* [propput] */ HRESULT STDMETHODCALLTYPE put_Quality( 
                            /* [in] */ DOUBLE quality) = 0;
                        
                        virtual HRESULT STDMETHODCALLTYPE GetInteractiveSegmentationMaskRectifier( 
                            /* [out][retval] */ __RPC__deref_out_opt ABI::Lumia::Imaging::Compositing::IInteractiveSegmentationMaskRectifier **__returnValue) = 0;
                        
                    };

                    extern const __declspec(selectany) IID & IID_IInteractiveForegroundSegmenter = __uuidof(IInteractiveForegroundSegmenter);

                    
                }  /* end namespace */
            }  /* end namespace */
        }  /* end namespace */
    }  /* end namespace */
    extern "C" { 
    
#else 	/* C style interface */

    typedef struct __x_ABI_CLumia_CImaging_CCompositing_CIInteractiveForegroundSegmenterVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            __RPC__in __x_ABI_CLumia_CImaging_CCompositing_CIInteractiveForegroundSegmenter * This,
            /* [in] */ __RPC__in REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            __RPC__in __x_ABI_CLumia_CImaging_CCompositing_CIInteractiveForegroundSegmenter * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            __RPC__in __x_ABI_CLumia_CImaging_CCompositing_CIInteractiveForegroundSegmenter * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetIids )( 
            __RPC__in __x_ABI_CLumia_CImaging_CCompositing_CIInteractiveForegroundSegmenter * This,
            /* [out] */ __RPC__out ULONG *iidCount,
            /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
        
        HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )( 
            __RPC__in __x_ABI_CLumia_CImaging_CCompositing_CIInteractiveForegroundSegmenter * This,
            /* [out] */ __RPC__deref_out_opt HSTRING *className);
        
        HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )( 
            __RPC__in __x_ABI_CLumia_CImaging_CCompositing_CIInteractiveForegroundSegmenter * This,
            /* [out] */ __RPC__out TrustLevel *trustLevel);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_ForegroundColor )( 
            __RPC__in __x_ABI_CLumia_CImaging_CCompositing_CIInteractiveForegroundSegmenter * This,
            /* [out][retval] */ __RPC__out __x_ABI_CWindows_CUI_CColor *__returnValue);
        
        /* [propput] */ HRESULT ( STDMETHODCALLTYPE *put_ForegroundColor )( 
            __RPC__in __x_ABI_CLumia_CImaging_CCompositing_CIInteractiveForegroundSegmenter * This,
            /* [in] */ __x_ABI_CWindows_CUI_CColor color);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_BackgroundColor )( 
            __RPC__in __x_ABI_CLumia_CImaging_CCompositing_CIInteractiveForegroundSegmenter * This,
            /* [out][retval] */ __RPC__out __x_ABI_CWindows_CUI_CColor *__returnValue);
        
        /* [propput] */ HRESULT ( STDMETHODCALLTYPE *put_BackgroundColor )( 
            __RPC__in __x_ABI_CLumia_CImaging_CCompositing_CIInteractiveForegroundSegmenter * This,
            /* [in] */ __x_ABI_CWindows_CUI_CColor color);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_AnnotationsSource )( 
            __RPC__in __x_ABI_CLumia_CImaging_CCompositing_CIInteractiveForegroundSegmenter * This,
            /* [out][retval] */ __RPC__deref_out_opt __x_ABI_CLumia_CImaging_CIImageProvider **__returnValue);
        
        /* [propput] */ HRESULT ( STDMETHODCALLTYPE *put_AnnotationsSource )( 
            __RPC__in __x_ABI_CLumia_CImaging_CCompositing_CIInteractiveForegroundSegmenter * This,
            /* [in] */ __RPC__in_opt __x_ABI_CLumia_CImaging_CIImageProvider *value);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_Quality )( 
            __RPC__in __x_ABI_CLumia_CImaging_CCompositing_CIInteractiveForegroundSegmenter * This,
            /* [out][retval] */ __RPC__out DOUBLE *__returnValue);
        
        /* [propput] */ HRESULT ( STDMETHODCALLTYPE *put_Quality )( 
            __RPC__in __x_ABI_CLumia_CImaging_CCompositing_CIInteractiveForegroundSegmenter * This,
            /* [in] */ DOUBLE quality);
        
        HRESULT ( STDMETHODCALLTYPE *GetInteractiveSegmentationMaskRectifier )( 
            __RPC__in __x_ABI_CLumia_CImaging_CCompositing_CIInteractiveForegroundSegmenter * This,
            /* [out][retval] */ __RPC__deref_out_opt __x_ABI_CLumia_CImaging_CCompositing_CIInteractiveSegmentationMaskRectifier **__returnValue);
        
        END_INTERFACE
    } __x_ABI_CLumia_CImaging_CCompositing_CIInteractiveForegroundSegmenterVtbl;

    interface __x_ABI_CLumia_CImaging_CCompositing_CIInteractiveForegroundSegmenter
    {
        CONST_VTBL struct __x_ABI_CLumia_CImaging_CCompositing_CIInteractiveForegroundSegmenterVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define __x_ABI_CLumia_CImaging_CCompositing_CIInteractiveForegroundSegmenter_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __x_ABI_CLumia_CImaging_CCompositing_CIInteractiveForegroundSegmenter_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __x_ABI_CLumia_CImaging_CCompositing_CIInteractiveForegroundSegmenter_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __x_ABI_CLumia_CImaging_CCompositing_CIInteractiveForegroundSegmenter_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 

#define __x_ABI_CLumia_CImaging_CCompositing_CIInteractiveForegroundSegmenter_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 

#define __x_ABI_CLumia_CImaging_CCompositing_CIInteractiveForegroundSegmenter_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 


#define __x_ABI_CLumia_CImaging_CCompositing_CIInteractiveForegroundSegmenter_get_ForegroundColor(This,__returnValue)	\
    ( (This)->lpVtbl -> get_ForegroundColor(This,__returnValue) ) 

#define __x_ABI_CLumia_CImaging_CCompositing_CIInteractiveForegroundSegmenter_put_ForegroundColor(This,color)	\
    ( (This)->lpVtbl -> put_ForegroundColor(This,color) ) 

#define __x_ABI_CLumia_CImaging_CCompositing_CIInteractiveForegroundSegmenter_get_BackgroundColor(This,__returnValue)	\
    ( (This)->lpVtbl -> get_BackgroundColor(This,__returnValue) ) 

#define __x_ABI_CLumia_CImaging_CCompositing_CIInteractiveForegroundSegmenter_put_BackgroundColor(This,color)	\
    ( (This)->lpVtbl -> put_BackgroundColor(This,color) ) 

#define __x_ABI_CLumia_CImaging_CCompositing_CIInteractiveForegroundSegmenter_get_AnnotationsSource(This,__returnValue)	\
    ( (This)->lpVtbl -> get_AnnotationsSource(This,__returnValue) ) 

#define __x_ABI_CLumia_CImaging_CCompositing_CIInteractiveForegroundSegmenter_put_AnnotationsSource(This,value)	\
    ( (This)->lpVtbl -> put_AnnotationsSource(This,value) ) 

#define __x_ABI_CLumia_CImaging_CCompositing_CIInteractiveForegroundSegmenter_get_Quality(This,__returnValue)	\
    ( (This)->lpVtbl -> get_Quality(This,__returnValue) ) 

#define __x_ABI_CLumia_CImaging_CCompositing_CIInteractiveForegroundSegmenter_put_Quality(This,quality)	\
    ( (This)->lpVtbl -> put_Quality(This,quality) ) 

#define __x_ABI_CLumia_CImaging_CCompositing_CIInteractiveForegroundSegmenter_GetInteractiveSegmentationMaskRectifier(This,__returnValue)	\
    ( (This)->lpVtbl -> GetInteractiveSegmentationMaskRectifier(This,__returnValue) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* ____x_ABI_CLumia_CImaging_CCompositing_CIInteractiveForegroundSegmenter_INTERFACE_DEFINED__ */


/* interface __MIDL_itf_Lumia2EImaging2ECompositing_0000_0027 */
/* [local] */ 

#if !defined(____x_ABI_CLumia_CImaging_CCompositing_CIInteractiveForegroundSegmenterFactory_INTERFACE_DEFINED__)
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Lumia_Imaging_Compositing_IInteractiveForegroundSegmenterFactory[] = L"Lumia.Imaging.Compositing.IInteractiveForegroundSegmenterFactory";
#endif /* !defined(____x_ABI_CLumia_CImaging_CCompositing_CIInteractiveForegroundSegmenterFactory_INTERFACE_DEFINED__) */


/* interface __MIDL_itf_Lumia2EImaging2ECompositing_0000_0027 */
/* [local] */ 



extern RPC_IF_HANDLE __MIDL_itf_Lumia2EImaging2ECompositing_0000_0027_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_Lumia2EImaging2ECompositing_0000_0027_v0_0_s_ifspec;

#ifndef ____x_ABI_CLumia_CImaging_CCompositing_CIInteractiveForegroundSegmenterFactory_INTERFACE_DEFINED__
#define ____x_ABI_CLumia_CImaging_CCompositing_CIInteractiveForegroundSegmenterFactory_INTERFACE_DEFINED__

/* interface __x_ABI_CLumia_CImaging_CCompositing_CIInteractiveForegroundSegmenterFactory */
/* [uuid][object] */ 



/* interface ABI::Lumia::Imaging::Compositing::IInteractiveForegroundSegmenterFactory */
/* [uuid][object] */ 


EXTERN_C const IID IID___x_ABI_CLumia_CImaging_CCompositing_CIInteractiveForegroundSegmenterFactory;

#if defined(__cplusplus) && !defined(CINTERFACE)
    } /* end extern "C" */
    namespace ABI {
        namespace Lumia {
            namespace Imaging {
                namespace Compositing {
                    
                    MIDL_INTERFACE("93106985-59CC-337A-894C-B60F3239A388")
                    IInteractiveForegroundSegmenterFactory : public IInspectable
                    {
                    public:
                        virtual HRESULT STDMETHODCALLTYPE Create( 
                            /* [in] */ __RPC__in_opt ABI::Lumia::Imaging::IImageProvider *imageSource,
                            /* [out][retval] */ __RPC__deref_out_opt ABI::Lumia::Imaging::Compositing::IInteractiveForegroundSegmenter **__returnValue) = 0;
                        
                        virtual HRESULT STDMETHODCALLTYPE CreateWithAnnotationColors( 
                            /* [in] */ __RPC__in_opt ABI::Lumia::Imaging::IImageProvider *imageSource,
                            /* [in] */ ABI::Windows::UI::Color foregroundColor,
                            /* [in] */ ABI::Windows::UI::Color backgroundColor,
                            /* [out][retval] */ __RPC__deref_out_opt ABI::Lumia::Imaging::Compositing::IInteractiveForegroundSegmenter **__returnValue) = 0;
                        
                        virtual HRESULT STDMETHODCALLTYPE CreateWithAnnotations( 
                            /* [in] */ __RPC__in_opt ABI::Lumia::Imaging::IImageProvider *imageSource,
                            /* [in] */ ABI::Windows::UI::Color foregroundColor,
                            /* [in] */ ABI::Windows::UI::Color backgroundColor,
                            /* [in] */ __RPC__in_opt ABI::Lumia::Imaging::IImageProvider *annotationsSource,
                            /* [out][retval] */ __RPC__deref_out_opt ABI::Lumia::Imaging::Compositing::IInteractiveForegroundSegmenter **__returnValue) = 0;
                        
                    };

                    extern const __declspec(selectany) IID & IID_IInteractiveForegroundSegmenterFactory = __uuidof(IInteractiveForegroundSegmenterFactory);

                    
                }  /* end namespace */
            }  /* end namespace */
        }  /* end namespace */
    }  /* end namespace */
    extern "C" { 
    
#else 	/* C style interface */

    typedef struct __x_ABI_CLumia_CImaging_CCompositing_CIInteractiveForegroundSegmenterFactoryVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            __RPC__in __x_ABI_CLumia_CImaging_CCompositing_CIInteractiveForegroundSegmenterFactory * This,
            /* [in] */ __RPC__in REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            __RPC__in __x_ABI_CLumia_CImaging_CCompositing_CIInteractiveForegroundSegmenterFactory * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            __RPC__in __x_ABI_CLumia_CImaging_CCompositing_CIInteractiveForegroundSegmenterFactory * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetIids )( 
            __RPC__in __x_ABI_CLumia_CImaging_CCompositing_CIInteractiveForegroundSegmenterFactory * This,
            /* [out] */ __RPC__out ULONG *iidCount,
            /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
        
        HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )( 
            __RPC__in __x_ABI_CLumia_CImaging_CCompositing_CIInteractiveForegroundSegmenterFactory * This,
            /* [out] */ __RPC__deref_out_opt HSTRING *className);
        
        HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )( 
            __RPC__in __x_ABI_CLumia_CImaging_CCompositing_CIInteractiveForegroundSegmenterFactory * This,
            /* [out] */ __RPC__out TrustLevel *trustLevel);
        
        HRESULT ( STDMETHODCALLTYPE *Create )( 
            __RPC__in __x_ABI_CLumia_CImaging_CCompositing_CIInteractiveForegroundSegmenterFactory * This,
            /* [in] */ __RPC__in_opt __x_ABI_CLumia_CImaging_CIImageProvider *imageSource,
            /* [out][retval] */ __RPC__deref_out_opt __x_ABI_CLumia_CImaging_CCompositing_CIInteractiveForegroundSegmenter **__returnValue);
        
        HRESULT ( STDMETHODCALLTYPE *CreateWithAnnotationColors )( 
            __RPC__in __x_ABI_CLumia_CImaging_CCompositing_CIInteractiveForegroundSegmenterFactory * This,
            /* [in] */ __RPC__in_opt __x_ABI_CLumia_CImaging_CIImageProvider *imageSource,
            /* [in] */ __x_ABI_CWindows_CUI_CColor foregroundColor,
            /* [in] */ __x_ABI_CWindows_CUI_CColor backgroundColor,
            /* [out][retval] */ __RPC__deref_out_opt __x_ABI_CLumia_CImaging_CCompositing_CIInteractiveForegroundSegmenter **__returnValue);
        
        HRESULT ( STDMETHODCALLTYPE *CreateWithAnnotations )( 
            __RPC__in __x_ABI_CLumia_CImaging_CCompositing_CIInteractiveForegroundSegmenterFactory * This,
            /* [in] */ __RPC__in_opt __x_ABI_CLumia_CImaging_CIImageProvider *imageSource,
            /* [in] */ __x_ABI_CWindows_CUI_CColor foregroundColor,
            /* [in] */ __x_ABI_CWindows_CUI_CColor backgroundColor,
            /* [in] */ __RPC__in_opt __x_ABI_CLumia_CImaging_CIImageProvider *annotationsSource,
            /* [out][retval] */ __RPC__deref_out_opt __x_ABI_CLumia_CImaging_CCompositing_CIInteractiveForegroundSegmenter **__returnValue);
        
        END_INTERFACE
    } __x_ABI_CLumia_CImaging_CCompositing_CIInteractiveForegroundSegmenterFactoryVtbl;

    interface __x_ABI_CLumia_CImaging_CCompositing_CIInteractiveForegroundSegmenterFactory
    {
        CONST_VTBL struct __x_ABI_CLumia_CImaging_CCompositing_CIInteractiveForegroundSegmenterFactoryVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define __x_ABI_CLumia_CImaging_CCompositing_CIInteractiveForegroundSegmenterFactory_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __x_ABI_CLumia_CImaging_CCompositing_CIInteractiveForegroundSegmenterFactory_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __x_ABI_CLumia_CImaging_CCompositing_CIInteractiveForegroundSegmenterFactory_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __x_ABI_CLumia_CImaging_CCompositing_CIInteractiveForegroundSegmenterFactory_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 

#define __x_ABI_CLumia_CImaging_CCompositing_CIInteractiveForegroundSegmenterFactory_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 

#define __x_ABI_CLumia_CImaging_CCompositing_CIInteractiveForegroundSegmenterFactory_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 


#define __x_ABI_CLumia_CImaging_CCompositing_CIInteractiveForegroundSegmenterFactory_Create(This,imageSource,__returnValue)	\
    ( (This)->lpVtbl -> Create(This,imageSource,__returnValue) ) 

#define __x_ABI_CLumia_CImaging_CCompositing_CIInteractiveForegroundSegmenterFactory_CreateWithAnnotationColors(This,imageSource,foregroundColor,backgroundColor,__returnValue)	\
    ( (This)->lpVtbl -> CreateWithAnnotationColors(This,imageSource,foregroundColor,backgroundColor,__returnValue) ) 

#define __x_ABI_CLumia_CImaging_CCompositing_CIInteractiveForegroundSegmenterFactory_CreateWithAnnotations(This,imageSource,foregroundColor,backgroundColor,annotationsSource,__returnValue)	\
    ( (This)->lpVtbl -> CreateWithAnnotations(This,imageSource,foregroundColor,backgroundColor,annotationsSource,__returnValue) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* ____x_ABI_CLumia_CImaging_CCompositing_CIInteractiveForegroundSegmenterFactory_INTERFACE_DEFINED__ */


/* interface __MIDL_itf_Lumia2EImaging2ECompositing_0000_0028 */
/* [local] */ 

#if !defined(____x_ABI_CLumia_CImaging_CCompositing_CIObjectExtractor_INTERFACE_DEFINED__)
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Lumia_Imaging_Compositing_IObjectExtractor[] = L"Lumia.Imaging.Compositing.IObjectExtractor";
#endif /* !defined(____x_ABI_CLumia_CImaging_CCompositing_CIObjectExtractor_INTERFACE_DEFINED__) */


/* interface __MIDL_itf_Lumia2EImaging2ECompositing_0000_0028 */
/* [local] */ 



extern RPC_IF_HANDLE __MIDL_itf_Lumia2EImaging2ECompositing_0000_0028_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_Lumia2EImaging2ECompositing_0000_0028_v0_0_s_ifspec;

#ifndef ____x_ABI_CLumia_CImaging_CCompositing_CIObjectExtractor_INTERFACE_DEFINED__
#define ____x_ABI_CLumia_CImaging_CCompositing_CIObjectExtractor_INTERFACE_DEFINED__

/* interface __x_ABI_CLumia_CImaging_CCompositing_CIObjectExtractor */
/* [uuid][object] */ 



/* interface ABI::Lumia::Imaging::Compositing::IObjectExtractor */
/* [uuid][object] */ 


EXTERN_C const IID IID___x_ABI_CLumia_CImaging_CCompositing_CIObjectExtractor;

#if defined(__cplusplus) && !defined(CINTERFACE)
    } /* end extern "C" */
    namespace ABI {
        namespace Lumia {
            namespace Imaging {
                namespace Compositing {
                    
                    MIDL_INTERFACE("CE349739-6883-3023-ADE8-2CFFC07E0195")
                    IObjectExtractor : public IInspectable
                    {
                    public:
                        virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_MaskSource( 
                            /* [out][retval] */ __RPC__deref_out_opt ABI::Lumia::Imaging::IImageProvider **__returnValue) = 0;
                        
                        virtual /* [propput] */ HRESULT STDMETHODCALLTYPE put_MaskSource( 
                            /* [in] */ __RPC__in_opt ABI::Lumia::Imaging::IImageProvider *value) = 0;
                        
                        virtual HRESULT STDMETHODCALLTYPE ExtractObjectsAsync( 
                            /* [out][retval] */ __RPC__deref_out_opt __FIAsyncOperation_1___FIVectorView_1_Lumia__CImaging__CCompositing__CExtractedObjectImageSource **__returnValue) = 0;
                        
                    };

                    extern const __declspec(selectany) IID & IID_IObjectExtractor = __uuidof(IObjectExtractor);

                    
                }  /* end namespace */
            }  /* end namespace */
        }  /* end namespace */
    }  /* end namespace */
    extern "C" { 
    
#else 	/* C style interface */

    typedef struct __x_ABI_CLumia_CImaging_CCompositing_CIObjectExtractorVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            __RPC__in __x_ABI_CLumia_CImaging_CCompositing_CIObjectExtractor * This,
            /* [in] */ __RPC__in REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            __RPC__in __x_ABI_CLumia_CImaging_CCompositing_CIObjectExtractor * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            __RPC__in __x_ABI_CLumia_CImaging_CCompositing_CIObjectExtractor * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetIids )( 
            __RPC__in __x_ABI_CLumia_CImaging_CCompositing_CIObjectExtractor * This,
            /* [out] */ __RPC__out ULONG *iidCount,
            /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
        
        HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )( 
            __RPC__in __x_ABI_CLumia_CImaging_CCompositing_CIObjectExtractor * This,
            /* [out] */ __RPC__deref_out_opt HSTRING *className);
        
        HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )( 
            __RPC__in __x_ABI_CLumia_CImaging_CCompositing_CIObjectExtractor * This,
            /* [out] */ __RPC__out TrustLevel *trustLevel);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_MaskSource )( 
            __RPC__in __x_ABI_CLumia_CImaging_CCompositing_CIObjectExtractor * This,
            /* [out][retval] */ __RPC__deref_out_opt __x_ABI_CLumia_CImaging_CIImageProvider **__returnValue);
        
        /* [propput] */ HRESULT ( STDMETHODCALLTYPE *put_MaskSource )( 
            __RPC__in __x_ABI_CLumia_CImaging_CCompositing_CIObjectExtractor * This,
            /* [in] */ __RPC__in_opt __x_ABI_CLumia_CImaging_CIImageProvider *value);
        
        HRESULT ( STDMETHODCALLTYPE *ExtractObjectsAsync )( 
            __RPC__in __x_ABI_CLumia_CImaging_CCompositing_CIObjectExtractor * This,
            /* [out][retval] */ __RPC__deref_out_opt __FIAsyncOperation_1___FIVectorView_1_Lumia__CImaging__CCompositing__CExtractedObjectImageSource **__returnValue);
        
        END_INTERFACE
    } __x_ABI_CLumia_CImaging_CCompositing_CIObjectExtractorVtbl;

    interface __x_ABI_CLumia_CImaging_CCompositing_CIObjectExtractor
    {
        CONST_VTBL struct __x_ABI_CLumia_CImaging_CCompositing_CIObjectExtractorVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define __x_ABI_CLumia_CImaging_CCompositing_CIObjectExtractor_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __x_ABI_CLumia_CImaging_CCompositing_CIObjectExtractor_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __x_ABI_CLumia_CImaging_CCompositing_CIObjectExtractor_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __x_ABI_CLumia_CImaging_CCompositing_CIObjectExtractor_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 

#define __x_ABI_CLumia_CImaging_CCompositing_CIObjectExtractor_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 

#define __x_ABI_CLumia_CImaging_CCompositing_CIObjectExtractor_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 


#define __x_ABI_CLumia_CImaging_CCompositing_CIObjectExtractor_get_MaskSource(This,__returnValue)	\
    ( (This)->lpVtbl -> get_MaskSource(This,__returnValue) ) 

#define __x_ABI_CLumia_CImaging_CCompositing_CIObjectExtractor_put_MaskSource(This,value)	\
    ( (This)->lpVtbl -> put_MaskSource(This,value) ) 

#define __x_ABI_CLumia_CImaging_CCompositing_CIObjectExtractor_ExtractObjectsAsync(This,__returnValue)	\
    ( (This)->lpVtbl -> ExtractObjectsAsync(This,__returnValue) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* ____x_ABI_CLumia_CImaging_CCompositing_CIObjectExtractor_INTERFACE_DEFINED__ */


/* interface __MIDL_itf_Lumia2EImaging2ECompositing_0000_0029 */
/* [local] */ 

#if !defined(____x_ABI_CLumia_CImaging_CCompositing_CIObjectExtractorFactory_INTERFACE_DEFINED__)
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Lumia_Imaging_Compositing_IObjectExtractorFactory[] = L"Lumia.Imaging.Compositing.IObjectExtractorFactory";
#endif /* !defined(____x_ABI_CLumia_CImaging_CCompositing_CIObjectExtractorFactory_INTERFACE_DEFINED__) */


/* interface __MIDL_itf_Lumia2EImaging2ECompositing_0000_0029 */
/* [local] */ 



extern RPC_IF_HANDLE __MIDL_itf_Lumia2EImaging2ECompositing_0000_0029_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_Lumia2EImaging2ECompositing_0000_0029_v0_0_s_ifspec;

#ifndef ____x_ABI_CLumia_CImaging_CCompositing_CIObjectExtractorFactory_INTERFACE_DEFINED__
#define ____x_ABI_CLumia_CImaging_CCompositing_CIObjectExtractorFactory_INTERFACE_DEFINED__

/* interface __x_ABI_CLumia_CImaging_CCompositing_CIObjectExtractorFactory */
/* [uuid][object] */ 



/* interface ABI::Lumia::Imaging::Compositing::IObjectExtractorFactory */
/* [uuid][object] */ 


EXTERN_C const IID IID___x_ABI_CLumia_CImaging_CCompositing_CIObjectExtractorFactory;

#if defined(__cplusplus) && !defined(CINTERFACE)
    } /* end extern "C" */
    namespace ABI {
        namespace Lumia {
            namespace Imaging {
                namespace Compositing {
                    
                    MIDL_INTERFACE("174B3C6B-6313-3756-913E-2BC99AAD5232")
                    IObjectExtractorFactory : public IInspectable
                    {
                    public:
                        virtual HRESULT STDMETHODCALLTYPE Create( 
                            /* [in] */ __RPC__in_opt ABI::Lumia::Imaging::IImageProvider *imageSource,
                            /* [in] */ __RPC__in_opt ABI::Lumia::Imaging::IImageProvider *maskSource,
                            /* [out][retval] */ __RPC__deref_out_opt ABI::Lumia::Imaging::Compositing::IObjectExtractor **__returnValue) = 0;
                        
                    };

                    extern const __declspec(selectany) IID & IID_IObjectExtractorFactory = __uuidof(IObjectExtractorFactory);

                    
                }  /* end namespace */
            }  /* end namespace */
        }  /* end namespace */
    }  /* end namespace */
    extern "C" { 
    
#else 	/* C style interface */

    typedef struct __x_ABI_CLumia_CImaging_CCompositing_CIObjectExtractorFactoryVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            __RPC__in __x_ABI_CLumia_CImaging_CCompositing_CIObjectExtractorFactory * This,
            /* [in] */ __RPC__in REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            __RPC__in __x_ABI_CLumia_CImaging_CCompositing_CIObjectExtractorFactory * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            __RPC__in __x_ABI_CLumia_CImaging_CCompositing_CIObjectExtractorFactory * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetIids )( 
            __RPC__in __x_ABI_CLumia_CImaging_CCompositing_CIObjectExtractorFactory * This,
            /* [out] */ __RPC__out ULONG *iidCount,
            /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
        
        HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )( 
            __RPC__in __x_ABI_CLumia_CImaging_CCompositing_CIObjectExtractorFactory * This,
            /* [out] */ __RPC__deref_out_opt HSTRING *className);
        
        HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )( 
            __RPC__in __x_ABI_CLumia_CImaging_CCompositing_CIObjectExtractorFactory * This,
            /* [out] */ __RPC__out TrustLevel *trustLevel);
        
        HRESULT ( STDMETHODCALLTYPE *Create )( 
            __RPC__in __x_ABI_CLumia_CImaging_CCompositing_CIObjectExtractorFactory * This,
            /* [in] */ __RPC__in_opt __x_ABI_CLumia_CImaging_CIImageProvider *imageSource,
            /* [in] */ __RPC__in_opt __x_ABI_CLumia_CImaging_CIImageProvider *maskSource,
            /* [out][retval] */ __RPC__deref_out_opt __x_ABI_CLumia_CImaging_CCompositing_CIObjectExtractor **__returnValue);
        
        END_INTERFACE
    } __x_ABI_CLumia_CImaging_CCompositing_CIObjectExtractorFactoryVtbl;

    interface __x_ABI_CLumia_CImaging_CCompositing_CIObjectExtractorFactory
    {
        CONST_VTBL struct __x_ABI_CLumia_CImaging_CCompositing_CIObjectExtractorFactoryVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define __x_ABI_CLumia_CImaging_CCompositing_CIObjectExtractorFactory_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __x_ABI_CLumia_CImaging_CCompositing_CIObjectExtractorFactory_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __x_ABI_CLumia_CImaging_CCompositing_CIObjectExtractorFactory_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __x_ABI_CLumia_CImaging_CCompositing_CIObjectExtractorFactory_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 

#define __x_ABI_CLumia_CImaging_CCompositing_CIObjectExtractorFactory_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 

#define __x_ABI_CLumia_CImaging_CCompositing_CIObjectExtractorFactory_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 


#define __x_ABI_CLumia_CImaging_CCompositing_CIObjectExtractorFactory_Create(This,imageSource,maskSource,__returnValue)	\
    ( (This)->lpVtbl -> Create(This,imageSource,maskSource,__returnValue) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* ____x_ABI_CLumia_CImaging_CCompositing_CIObjectExtractorFactory_INTERFACE_DEFINED__ */


/* interface __MIDL_itf_Lumia2EImaging2ECompositing_0000_0030 */
/* [local] */ 

#ifndef RUNTIMECLASS_Lumia_Imaging_Compositing_AlphaToGrayscaleFilter_DEFINED
#define RUNTIMECLASS_Lumia_Imaging_Compositing_AlphaToGrayscaleFilter_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Lumia_Imaging_Compositing_AlphaToGrayscaleFilter[] = L"Lumia.Imaging.Compositing.AlphaToGrayscaleFilter";
#endif
#ifndef RUNTIMECLASS_Lumia_Imaging_Compositing_BlendEffect_DEFINED
#define RUNTIMECLASS_Lumia_Imaging_Compositing_BlendEffect_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Lumia_Imaging_Compositing_BlendEffect[] = L"Lumia.Imaging.Compositing.BlendEffect";
#endif
#ifndef RUNTIMECLASS_Lumia_Imaging_Compositing_BlendFilter_DEFINED
#define RUNTIMECLASS_Lumia_Imaging_Compositing_BlendFilter_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Lumia_Imaging_Compositing_BlendFilter[] = L"Lumia.Imaging.Compositing.BlendFilter";
#endif
#ifndef RUNTIMECLASS_Lumia_Imaging_Compositing_ExtractedObjectImageSource_DEFINED
#define RUNTIMECLASS_Lumia_Imaging_Compositing_ExtractedObjectImageSource_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Lumia_Imaging_Compositing_ExtractedObjectImageSource[] = L"Lumia.Imaging.Compositing.ExtractedObjectImageSource";
#endif
#ifndef RUNTIMECLASS_Lumia_Imaging_Compositing_ChromaKeyFilter_DEFINED
#define RUNTIMECLASS_Lumia_Imaging_Compositing_ChromaKeyFilter_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Lumia_Imaging_Compositing_ChromaKeyFilter[] = L"Lumia.Imaging.Compositing.ChromaKeyFilter";
#endif
#ifndef RUNTIMECLASS_Lumia_Imaging_Compositing_ImageFusionFilter_DEFINED
#define RUNTIMECLASS_Lumia_Imaging_Compositing_ImageFusionFilter_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Lumia_Imaging_Compositing_ImageFusionFilter[] = L"Lumia.Imaging.Compositing.ImageFusionFilter";
#endif
#ifndef RUNTIMECLASS_Lumia_Imaging_Compositing_InteractiveSegmentationMaskRectifier_DEFINED
#define RUNTIMECLASS_Lumia_Imaging_Compositing_InteractiveSegmentationMaskRectifier_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Lumia_Imaging_Compositing_InteractiveSegmentationMaskRectifier[] = L"Lumia.Imaging.Compositing.InteractiveSegmentationMaskRectifier";
#endif
#ifndef RUNTIMECLASS_Lumia_Imaging_Compositing_InteractiveForegroundSegmenter_DEFINED
#define RUNTIMECLASS_Lumia_Imaging_Compositing_InteractiveForegroundSegmenter_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Lumia_Imaging_Compositing_InteractiveForegroundSegmenter[] = L"Lumia.Imaging.Compositing.InteractiveForegroundSegmenter";
#endif
#ifndef RUNTIMECLASS_Lumia_Imaging_Compositing_ObjectExtractor_DEFINED
#define RUNTIMECLASS_Lumia_Imaging_Compositing_ObjectExtractor_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Lumia_Imaging_Compositing_ObjectExtractor[] = L"Lumia.Imaging.Compositing.ObjectExtractor";
#endif


/* interface __MIDL_itf_Lumia2EImaging2ECompositing_0000_0030 */
/* [local] */ 



extern RPC_IF_HANDLE __MIDL_itf_Lumia2EImaging2ECompositing_0000_0030_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_Lumia2EImaging2ECompositing_0000_0030_v0_0_s_ifspec;

/* Additional Prototypes for ALL interfaces */

/* end of Additional Prototypes */

#ifdef __cplusplus
}
#endif

#endif


