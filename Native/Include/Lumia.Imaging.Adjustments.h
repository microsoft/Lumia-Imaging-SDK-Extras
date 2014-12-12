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
/* at Tue Dec 09 14:28:07 2014
 */
/* Compiler settings for C:\Users\cadahl\AppData\Local\Temp\Lumia.Imaging.Adjustments.idl-91948b37:
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

#ifndef __Lumia2EImaging2EAdjustments_h__
#define __Lumia2EImaging2EAdjustments_h__

#if defined(_MSC_VER) && (_MSC_VER >= 1020)
#pragma once
#endif

/* Forward Declarations */ 

#ifndef ____FIIterator_1_Lumia__CImaging__CAdjustments__CCurve_FWD_DEFINED__
#define ____FIIterator_1_Lumia__CImaging__CAdjustments__CCurve_FWD_DEFINED__
typedef interface __FIIterator_1_Lumia__CImaging__CAdjustments__CCurve __FIIterator_1_Lumia__CImaging__CAdjustments__CCurve;

#endif 	/* ____FIIterator_1_Lumia__CImaging__CAdjustments__CCurve_FWD_DEFINED__ */


#ifndef ____FIIterable_1_Lumia__CImaging__CAdjustments__CCurve_FWD_DEFINED__
#define ____FIIterable_1_Lumia__CImaging__CAdjustments__CCurve_FWD_DEFINED__
typedef interface __FIIterable_1_Lumia__CImaging__CAdjustments__CCurve __FIIterable_1_Lumia__CImaging__CAdjustments__CCurve;

#endif 	/* ____FIIterable_1_Lumia__CImaging__CAdjustments__CCurve_FWD_DEFINED__ */


#ifndef ____FIIterator_1_Lumia__CImaging__CAdjustments__CCurveMinMaxPair_FWD_DEFINED__
#define ____FIIterator_1_Lumia__CImaging__CAdjustments__CCurveMinMaxPair_FWD_DEFINED__
typedef interface __FIIterator_1_Lumia__CImaging__CAdjustments__CCurveMinMaxPair __FIIterator_1_Lumia__CImaging__CAdjustments__CCurveMinMaxPair;

#endif 	/* ____FIIterator_1_Lumia__CImaging__CAdjustments__CCurveMinMaxPair_FWD_DEFINED__ */


#ifndef ____FIIterable_1_Lumia__CImaging__CAdjustments__CCurveMinMaxPair_FWD_DEFINED__
#define ____FIIterable_1_Lumia__CImaging__CAdjustments__CCurveMinMaxPair_FWD_DEFINED__
typedef interface __FIIterable_1_Lumia__CImaging__CAdjustments__CCurveMinMaxPair __FIIterable_1_Lumia__CImaging__CAdjustments__CCurveMinMaxPair;

#endif 	/* ____FIIterable_1_Lumia__CImaging__CAdjustments__CCurveMinMaxPair_FWD_DEFINED__ */


#ifndef ____FIIterator_1_Lumia__CImaging__CAdjustments__CILensBlurKernel_FWD_DEFINED__
#define ____FIIterator_1_Lumia__CImaging__CAdjustments__CILensBlurKernel_FWD_DEFINED__
typedef interface __FIIterator_1_Lumia__CImaging__CAdjustments__CILensBlurKernel __FIIterator_1_Lumia__CImaging__CAdjustments__CILensBlurKernel;

#endif 	/* ____FIIterator_1_Lumia__CImaging__CAdjustments__CILensBlurKernel_FWD_DEFINED__ */


#ifndef ____FIIterable_1_Lumia__CImaging__CAdjustments__CILensBlurKernel_FWD_DEFINED__
#define ____FIIterable_1_Lumia__CImaging__CAdjustments__CILensBlurKernel_FWD_DEFINED__
typedef interface __FIIterable_1_Lumia__CImaging__CAdjustments__CILensBlurKernel __FIIterable_1_Lumia__CImaging__CAdjustments__CILensBlurKernel;

#endif 	/* ____FIIterable_1_Lumia__CImaging__CAdjustments__CILensBlurKernel_FWD_DEFINED__ */


#ifndef ____FIVectorView_1_Lumia__CImaging__CAdjustments__CILensBlurKernel_FWD_DEFINED__
#define ____FIVectorView_1_Lumia__CImaging__CAdjustments__CILensBlurKernel_FWD_DEFINED__
typedef interface __FIVectorView_1_Lumia__CImaging__CAdjustments__CILensBlurKernel __FIVectorView_1_Lumia__CImaging__CAdjustments__CILensBlurKernel;

#endif 	/* ____FIVectorView_1_Lumia__CImaging__CAdjustments__CILensBlurKernel_FWD_DEFINED__ */


#ifndef ____FIAsyncOperationCompletedHandler_1_Lumia__CImaging__CAdjustments__CAutoFixAnalyzerResult_FWD_DEFINED__
#define ____FIAsyncOperationCompletedHandler_1_Lumia__CImaging__CAdjustments__CAutoFixAnalyzerResult_FWD_DEFINED__
typedef interface __FIAsyncOperationCompletedHandler_1_Lumia__CImaging__CAdjustments__CAutoFixAnalyzerResult __FIAsyncOperationCompletedHandler_1_Lumia__CImaging__CAdjustments__CAutoFixAnalyzerResult;

#endif 	/* ____FIAsyncOperationCompletedHandler_1_Lumia__CImaging__CAdjustments__CAutoFixAnalyzerResult_FWD_DEFINED__ */


#ifndef ____FIAsyncOperation_1_Lumia__CImaging__CAdjustments__CAutoFixAnalyzerResult_FWD_DEFINED__
#define ____FIAsyncOperation_1_Lumia__CImaging__CAdjustments__CAutoFixAnalyzerResult_FWD_DEFINED__
typedef interface __FIAsyncOperation_1_Lumia__CImaging__CAdjustments__CAutoFixAnalyzerResult __FIAsyncOperation_1_Lumia__CImaging__CAdjustments__CAutoFixAnalyzerResult;

#endif 	/* ____FIAsyncOperation_1_Lumia__CImaging__CAdjustments__CAutoFixAnalyzerResult_FWD_DEFINED__ */


#ifndef ____x_ABI_CLumia_CImaging_CAdjustments_CICurveMinMaxPair_FWD_DEFINED__
#define ____x_ABI_CLumia_CImaging_CAdjustments_CICurveMinMaxPair_FWD_DEFINED__
typedef interface __x_ABI_CLumia_CImaging_CAdjustments_CICurveMinMaxPair __x_ABI_CLumia_CImaging_CAdjustments_CICurveMinMaxPair;

#ifdef __cplusplus
namespace ABI {
    namespace Lumia {
        namespace Imaging {
            namespace Adjustments {
                interface ICurveMinMaxPair;
            } /* end namespace */
        } /* end namespace */
    } /* end namespace */
} /* end namespace */

#endif /* __cplusplus */

#endif 	/* ____x_ABI_CLumia_CImaging_CAdjustments_CICurveMinMaxPair_FWD_DEFINED__ */


#ifndef ____x_ABI_CLumia_CImaging_CAdjustments_CICurveMinMaxPairFactory_FWD_DEFINED__
#define ____x_ABI_CLumia_CImaging_CAdjustments_CICurveMinMaxPairFactory_FWD_DEFINED__
typedef interface __x_ABI_CLumia_CImaging_CAdjustments_CICurveMinMaxPairFactory __x_ABI_CLumia_CImaging_CAdjustments_CICurveMinMaxPairFactory;

#ifdef __cplusplus
namespace ABI {
    namespace Lumia {
        namespace Imaging {
            namespace Adjustments {
                interface ICurveMinMaxPairFactory;
            } /* end namespace */
        } /* end namespace */
    } /* end namespace */
} /* end namespace */

#endif /* __cplusplus */

#endif 	/* ____x_ABI_CLumia_CImaging_CAdjustments_CICurveMinMaxPairFactory_FWD_DEFINED__ */


#ifndef ____x_ABI_CLumia_CImaging_CAdjustments_CICurve_FWD_DEFINED__
#define ____x_ABI_CLumia_CImaging_CAdjustments_CICurve_FWD_DEFINED__
typedef interface __x_ABI_CLumia_CImaging_CAdjustments_CICurve __x_ABI_CLumia_CImaging_CAdjustments_CICurve;

#ifdef __cplusplus
namespace ABI {
    namespace Lumia {
        namespace Imaging {
            namespace Adjustments {
                interface ICurve;
            } /* end namespace */
        } /* end namespace */
    } /* end namespace */
} /* end namespace */

#endif /* __cplusplus */

#endif 	/* ____x_ABI_CLumia_CImaging_CAdjustments_CICurve_FWD_DEFINED__ */


#ifndef ____x_ABI_CLumia_CImaging_CAdjustments_CICurveFactory_FWD_DEFINED__
#define ____x_ABI_CLumia_CImaging_CAdjustments_CICurveFactory_FWD_DEFINED__
typedef interface __x_ABI_CLumia_CImaging_CAdjustments_CICurveFactory __x_ABI_CLumia_CImaging_CAdjustments_CICurveFactory;

#ifdef __cplusplus
namespace ABI {
    namespace Lumia {
        namespace Imaging {
            namespace Adjustments {
                interface ICurveFactory;
            } /* end namespace */
        } /* end namespace */
    } /* end namespace */
} /* end namespace */

#endif /* __cplusplus */

#endif 	/* ____x_ABI_CLumia_CImaging_CAdjustments_CICurveFactory_FWD_DEFINED__ */


#ifndef ____x_ABI_CLumia_CImaging_CAdjustments_CICurveStatics_FWD_DEFINED__
#define ____x_ABI_CLumia_CImaging_CAdjustments_CICurveStatics_FWD_DEFINED__
typedef interface __x_ABI_CLumia_CImaging_CAdjustments_CICurveStatics __x_ABI_CLumia_CImaging_CAdjustments_CICurveStatics;

#ifdef __cplusplus
namespace ABI {
    namespace Lumia {
        namespace Imaging {
            namespace Adjustments {
                interface ICurveStatics;
            } /* end namespace */
        } /* end namespace */
    } /* end namespace */
} /* end namespace */

#endif /* __cplusplus */

#endif 	/* ____x_ABI_CLumia_CImaging_CAdjustments_CICurveStatics_FWD_DEFINED__ */


#ifndef ____x_ABI_CLumia_CImaging_CAdjustments_CIArgbColorCurves_FWD_DEFINED__
#define ____x_ABI_CLumia_CImaging_CAdjustments_CIArgbColorCurves_FWD_DEFINED__
typedef interface __x_ABI_CLumia_CImaging_CAdjustments_CIArgbColorCurves __x_ABI_CLumia_CImaging_CAdjustments_CIArgbColorCurves;

#ifdef __cplusplus
namespace ABI {
    namespace Lumia {
        namespace Imaging {
            namespace Adjustments {
                interface IArgbColorCurves;
            } /* end namespace */
        } /* end namespace */
    } /* end namespace */
} /* end namespace */

#endif /* __cplusplus */

#endif 	/* ____x_ABI_CLumia_CImaging_CAdjustments_CIArgbColorCurves_FWD_DEFINED__ */


#ifndef ____x_ABI_CLumia_CImaging_CAdjustments_CIAutoEnhanceFilter_FWD_DEFINED__
#define ____x_ABI_CLumia_CImaging_CAdjustments_CIAutoEnhanceFilter_FWD_DEFINED__
typedef interface __x_ABI_CLumia_CImaging_CAdjustments_CIAutoEnhanceFilter __x_ABI_CLumia_CImaging_CAdjustments_CIAutoEnhanceFilter;

#ifdef __cplusplus
namespace ABI {
    namespace Lumia {
        namespace Imaging {
            namespace Adjustments {
                interface IAutoEnhanceFilter;
            } /* end namespace */
        } /* end namespace */
    } /* end namespace */
} /* end namespace */

#endif /* __cplusplus */

#endif 	/* ____x_ABI_CLumia_CImaging_CAdjustments_CIAutoEnhanceFilter_FWD_DEFINED__ */


#ifndef ____x_ABI_CLumia_CImaging_CAdjustments_CIAutoEnhanceFilterFactory_FWD_DEFINED__
#define ____x_ABI_CLumia_CImaging_CAdjustments_CIAutoEnhanceFilterFactory_FWD_DEFINED__
typedef interface __x_ABI_CLumia_CImaging_CAdjustments_CIAutoEnhanceFilterFactory __x_ABI_CLumia_CImaging_CAdjustments_CIAutoEnhanceFilterFactory;

#ifdef __cplusplus
namespace ABI {
    namespace Lumia {
        namespace Imaging {
            namespace Adjustments {
                interface IAutoEnhanceFilterFactory;
            } /* end namespace */
        } /* end namespace */
    } /* end namespace */
} /* end namespace */

#endif /* __cplusplus */

#endif 	/* ____x_ABI_CLumia_CImaging_CAdjustments_CIAutoEnhanceFilterFactory_FWD_DEFINED__ */


#ifndef ____x_ABI_CLumia_CImaging_CAdjustments_CIAutoFixAnalyzerResult_FWD_DEFINED__
#define ____x_ABI_CLumia_CImaging_CAdjustments_CIAutoFixAnalyzerResult_FWD_DEFINED__
typedef interface __x_ABI_CLumia_CImaging_CAdjustments_CIAutoFixAnalyzerResult __x_ABI_CLumia_CImaging_CAdjustments_CIAutoFixAnalyzerResult;

#ifdef __cplusplus
namespace ABI {
    namespace Lumia {
        namespace Imaging {
            namespace Adjustments {
                interface IAutoFixAnalyzerResult;
            } /* end namespace */
        } /* end namespace */
    } /* end namespace */
} /* end namespace */

#endif /* __cplusplus */

#endif 	/* ____x_ABI_CLumia_CImaging_CAdjustments_CIAutoFixAnalyzerResult_FWD_DEFINED__ */


#ifndef ____x_ABI_CLumia_CImaging_CAdjustments_CIAutoFixAnalyzer_FWD_DEFINED__
#define ____x_ABI_CLumia_CImaging_CAdjustments_CIAutoFixAnalyzer_FWD_DEFINED__
typedef interface __x_ABI_CLumia_CImaging_CAdjustments_CIAutoFixAnalyzer __x_ABI_CLumia_CImaging_CAdjustments_CIAutoFixAnalyzer;

#ifdef __cplusplus
namespace ABI {
    namespace Lumia {
        namespace Imaging {
            namespace Adjustments {
                interface IAutoFixAnalyzer;
            } /* end namespace */
        } /* end namespace */
    } /* end namespace */
} /* end namespace */

#endif /* __cplusplus */

#endif 	/* ____x_ABI_CLumia_CImaging_CAdjustments_CIAutoFixAnalyzer_FWD_DEFINED__ */


#ifndef ____x_ABI_CLumia_CImaging_CAdjustments_CIAutoFixAnalyzerFactory_FWD_DEFINED__
#define ____x_ABI_CLumia_CImaging_CAdjustments_CIAutoFixAnalyzerFactory_FWD_DEFINED__
typedef interface __x_ABI_CLumia_CImaging_CAdjustments_CIAutoFixAnalyzerFactory __x_ABI_CLumia_CImaging_CAdjustments_CIAutoFixAnalyzerFactory;

#ifdef __cplusplus
namespace ABI {
    namespace Lumia {
        namespace Imaging {
            namespace Adjustments {
                interface IAutoFixAnalyzerFactory;
            } /* end namespace */
        } /* end namespace */
    } /* end namespace */
} /* end namespace */

#endif /* __cplusplus */

#endif 	/* ____x_ABI_CLumia_CImaging_CAdjustments_CIAutoFixAnalyzerFactory_FWD_DEFINED__ */


#ifndef ____x_ABI_CLumia_CImaging_CAdjustments_CIAutoLevelsFilter_FWD_DEFINED__
#define ____x_ABI_CLumia_CImaging_CAdjustments_CIAutoLevelsFilter_FWD_DEFINED__
typedef interface __x_ABI_CLumia_CImaging_CAdjustments_CIAutoLevelsFilter __x_ABI_CLumia_CImaging_CAdjustments_CIAutoLevelsFilter;

#ifdef __cplusplus
namespace ABI {
    namespace Lumia {
        namespace Imaging {
            namespace Adjustments {
                interface IAutoLevelsFilter;
            } /* end namespace */
        } /* end namespace */
    } /* end namespace */
} /* end namespace */

#endif /* __cplusplus */

#endif 	/* ____x_ABI_CLumia_CImaging_CAdjustments_CIAutoLevelsFilter_FWD_DEFINED__ */


#ifndef ____x_ABI_CLumia_CImaging_CAdjustments_CIBlurFilter_FWD_DEFINED__
#define ____x_ABI_CLumia_CImaging_CAdjustments_CIBlurFilter_FWD_DEFINED__
typedef interface __x_ABI_CLumia_CImaging_CAdjustments_CIBlurFilter __x_ABI_CLumia_CImaging_CAdjustments_CIBlurFilter;

#ifdef __cplusplus
namespace ABI {
    namespace Lumia {
        namespace Imaging {
            namespace Adjustments {
                interface IBlurFilter;
            } /* end namespace */
        } /* end namespace */
    } /* end namespace */
} /* end namespace */

#endif /* __cplusplus */

#endif 	/* ____x_ABI_CLumia_CImaging_CAdjustments_CIBlurFilter_FWD_DEFINED__ */


#ifndef ____x_ABI_CLumia_CImaging_CAdjustments_CIBlurFilterFactory_FWD_DEFINED__
#define ____x_ABI_CLumia_CImaging_CAdjustments_CIBlurFilterFactory_FWD_DEFINED__
typedef interface __x_ABI_CLumia_CImaging_CAdjustments_CIBlurFilterFactory __x_ABI_CLumia_CImaging_CAdjustments_CIBlurFilterFactory;

#ifdef __cplusplus
namespace ABI {
    namespace Lumia {
        namespace Imaging {
            namespace Adjustments {
                interface IBlurFilterFactory;
            } /* end namespace */
        } /* end namespace */
    } /* end namespace */
} /* end namespace */

#endif /* __cplusplus */

#endif 	/* ____x_ABI_CLumia_CImaging_CAdjustments_CIBlurFilterFactory_FWD_DEFINED__ */


#ifndef ____x_ABI_CLumia_CImaging_CAdjustments_CIBrightnessFilter_FWD_DEFINED__
#define ____x_ABI_CLumia_CImaging_CAdjustments_CIBrightnessFilter_FWD_DEFINED__
typedef interface __x_ABI_CLumia_CImaging_CAdjustments_CIBrightnessFilter __x_ABI_CLumia_CImaging_CAdjustments_CIBrightnessFilter;

#ifdef __cplusplus
namespace ABI {
    namespace Lumia {
        namespace Imaging {
            namespace Adjustments {
                interface IBrightnessFilter;
            } /* end namespace */
        } /* end namespace */
    } /* end namespace */
} /* end namespace */

#endif /* __cplusplus */

#endif 	/* ____x_ABI_CLumia_CImaging_CAdjustments_CIBrightnessFilter_FWD_DEFINED__ */


#ifndef ____x_ABI_CLumia_CImaging_CAdjustments_CIBrightnessFilterFactory_FWD_DEFINED__
#define ____x_ABI_CLumia_CImaging_CAdjustments_CIBrightnessFilterFactory_FWD_DEFINED__
typedef interface __x_ABI_CLumia_CImaging_CAdjustments_CIBrightnessFilterFactory __x_ABI_CLumia_CImaging_CAdjustments_CIBrightnessFilterFactory;

#ifdef __cplusplus
namespace ABI {
    namespace Lumia {
        namespace Imaging {
            namespace Adjustments {
                interface IBrightnessFilterFactory;
            } /* end namespace */
        } /* end namespace */
    } /* end namespace */
} /* end namespace */

#endif /* __cplusplus */

#endif 	/* ____x_ABI_CLumia_CImaging_CAdjustments_CIBrightnessFilterFactory_FWD_DEFINED__ */


#ifndef ____x_ABI_CLumia_CImaging_CAdjustments_CIColorAdjustFilter_FWD_DEFINED__
#define ____x_ABI_CLumia_CImaging_CAdjustments_CIColorAdjustFilter_FWD_DEFINED__
typedef interface __x_ABI_CLumia_CImaging_CAdjustments_CIColorAdjustFilter __x_ABI_CLumia_CImaging_CAdjustments_CIColorAdjustFilter;

#ifdef __cplusplus
namespace ABI {
    namespace Lumia {
        namespace Imaging {
            namespace Adjustments {
                interface IColorAdjustFilter;
            } /* end namespace */
        } /* end namespace */
    } /* end namespace */
} /* end namespace */

#endif /* __cplusplus */

#endif 	/* ____x_ABI_CLumia_CImaging_CAdjustments_CIColorAdjustFilter_FWD_DEFINED__ */


#ifndef ____x_ABI_CLumia_CImaging_CAdjustments_CIColorAdjustFilterFactory_FWD_DEFINED__
#define ____x_ABI_CLumia_CImaging_CAdjustments_CIColorAdjustFilterFactory_FWD_DEFINED__
typedef interface __x_ABI_CLumia_CImaging_CAdjustments_CIColorAdjustFilterFactory __x_ABI_CLumia_CImaging_CAdjustments_CIColorAdjustFilterFactory;

#ifdef __cplusplus
namespace ABI {
    namespace Lumia {
        namespace Imaging {
            namespace Adjustments {
                interface IColorAdjustFilterFactory;
            } /* end namespace */
        } /* end namespace */
    } /* end namespace */
} /* end namespace */

#endif /* __cplusplus */

#endif 	/* ____x_ABI_CLumia_CImaging_CAdjustments_CIColorAdjustFilterFactory_FWD_DEFINED__ */


#ifndef ____x_ABI_CLumia_CImaging_CAdjustments_CIColorBoostFilter_FWD_DEFINED__
#define ____x_ABI_CLumia_CImaging_CAdjustments_CIColorBoostFilter_FWD_DEFINED__
typedef interface __x_ABI_CLumia_CImaging_CAdjustments_CIColorBoostFilter __x_ABI_CLumia_CImaging_CAdjustments_CIColorBoostFilter;

#ifdef __cplusplus
namespace ABI {
    namespace Lumia {
        namespace Imaging {
            namespace Adjustments {
                interface IColorBoostFilter;
            } /* end namespace */
        } /* end namespace */
    } /* end namespace */
} /* end namespace */

#endif /* __cplusplus */

#endif 	/* ____x_ABI_CLumia_CImaging_CAdjustments_CIColorBoostFilter_FWD_DEFINED__ */


#ifndef ____x_ABI_CLumia_CImaging_CAdjustments_CIColorBoostFilterFactory_FWD_DEFINED__
#define ____x_ABI_CLumia_CImaging_CAdjustments_CIColorBoostFilterFactory_FWD_DEFINED__
typedef interface __x_ABI_CLumia_CImaging_CAdjustments_CIColorBoostFilterFactory __x_ABI_CLumia_CImaging_CAdjustments_CIColorBoostFilterFactory;

#ifdef __cplusplus
namespace ABI {
    namespace Lumia {
        namespace Imaging {
            namespace Adjustments {
                interface IColorBoostFilterFactory;
            } /* end namespace */
        } /* end namespace */
    } /* end namespace */
} /* end namespace */

#endif /* __cplusplus */

#endif 	/* ____x_ABI_CLumia_CImaging_CAdjustments_CIColorBoostFilterFactory_FWD_DEFINED__ */


#ifndef ____x_ABI_CLumia_CImaging_CAdjustments_CIColorizationFilter_FWD_DEFINED__
#define ____x_ABI_CLumia_CImaging_CAdjustments_CIColorizationFilter_FWD_DEFINED__
typedef interface __x_ABI_CLumia_CImaging_CAdjustments_CIColorizationFilter __x_ABI_CLumia_CImaging_CAdjustments_CIColorizationFilter;

#ifdef __cplusplus
namespace ABI {
    namespace Lumia {
        namespace Imaging {
            namespace Adjustments {
                interface IColorizationFilter;
            } /* end namespace */
        } /* end namespace */
    } /* end namespace */
} /* end namespace */

#endif /* __cplusplus */

#endif 	/* ____x_ABI_CLumia_CImaging_CAdjustments_CIColorizationFilter_FWD_DEFINED__ */


#ifndef ____x_ABI_CLumia_CImaging_CAdjustments_CIColorizationFilterFactory_FWD_DEFINED__
#define ____x_ABI_CLumia_CImaging_CAdjustments_CIColorizationFilterFactory_FWD_DEFINED__
typedef interface __x_ABI_CLumia_CImaging_CAdjustments_CIColorizationFilterFactory __x_ABI_CLumia_CImaging_CAdjustments_CIColorizationFilterFactory;

#ifdef __cplusplus
namespace ABI {
    namespace Lumia {
        namespace Imaging {
            namespace Adjustments {
                interface IColorizationFilterFactory;
            } /* end namespace */
        } /* end namespace */
    } /* end namespace */
} /* end namespace */

#endif /* __cplusplus */

#endif 	/* ____x_ABI_CLumia_CImaging_CAdjustments_CIColorizationFilterFactory_FWD_DEFINED__ */


#ifndef ____x_ABI_CLumia_CImaging_CAdjustments_CIContrastFilter_FWD_DEFINED__
#define ____x_ABI_CLumia_CImaging_CAdjustments_CIContrastFilter_FWD_DEFINED__
typedef interface __x_ABI_CLumia_CImaging_CAdjustments_CIContrastFilter __x_ABI_CLumia_CImaging_CAdjustments_CIContrastFilter;

#ifdef __cplusplus
namespace ABI {
    namespace Lumia {
        namespace Imaging {
            namespace Adjustments {
                interface IContrastFilter;
            } /* end namespace */
        } /* end namespace */
    } /* end namespace */
} /* end namespace */

#endif /* __cplusplus */

#endif 	/* ____x_ABI_CLumia_CImaging_CAdjustments_CIContrastFilter_FWD_DEFINED__ */


#ifndef ____x_ABI_CLumia_CImaging_CAdjustments_CIContrastFilterFactory_FWD_DEFINED__
#define ____x_ABI_CLumia_CImaging_CAdjustments_CIContrastFilterFactory_FWD_DEFINED__
typedef interface __x_ABI_CLumia_CImaging_CAdjustments_CIContrastFilterFactory __x_ABI_CLumia_CImaging_CAdjustments_CIContrastFilterFactory;

#ifdef __cplusplus
namespace ABI {
    namespace Lumia {
        namespace Imaging {
            namespace Adjustments {
                interface IContrastFilterFactory;
            } /* end namespace */
        } /* end namespace */
    } /* end namespace */
} /* end namespace */

#endif /* __cplusplus */

#endif 	/* ____x_ABI_CLumia_CImaging_CAdjustments_CIContrastFilterFactory_FWD_DEFINED__ */


#ifndef ____x_ABI_CLumia_CImaging_CAdjustments_CILensBlurFocusEdgeSofteningFactory_FWD_DEFINED__
#define ____x_ABI_CLumia_CImaging_CAdjustments_CILensBlurFocusEdgeSofteningFactory_FWD_DEFINED__
typedef interface __x_ABI_CLumia_CImaging_CAdjustments_CILensBlurFocusEdgeSofteningFactory __x_ABI_CLumia_CImaging_CAdjustments_CILensBlurFocusEdgeSofteningFactory;

#ifdef __cplusplus
namespace ABI {
    namespace Lumia {
        namespace Imaging {
            namespace Adjustments {
                interface ILensBlurFocusEdgeSofteningFactory;
            } /* end namespace */
        } /* end namespace */
    } /* end namespace */
} /* end namespace */

#endif /* __cplusplus */

#endif 	/* ____x_ABI_CLumia_CImaging_CAdjustments_CILensBlurFocusEdgeSofteningFactory_FWD_DEFINED__ */


#ifndef ____x_ABI_CLumia_CImaging_CAdjustments_CICurvesFilter_FWD_DEFINED__
#define ____x_ABI_CLumia_CImaging_CAdjustments_CICurvesFilter_FWD_DEFINED__
typedef interface __x_ABI_CLumia_CImaging_CAdjustments_CICurvesFilter __x_ABI_CLumia_CImaging_CAdjustments_CICurvesFilter;

#ifdef __cplusplus
namespace ABI {
    namespace Lumia {
        namespace Imaging {
            namespace Adjustments {
                interface ICurvesFilter;
            } /* end namespace */
        } /* end namespace */
    } /* end namespace */
} /* end namespace */

#endif /* __cplusplus */

#endif 	/* ____x_ABI_CLumia_CImaging_CAdjustments_CICurvesFilter_FWD_DEFINED__ */


#ifndef ____x_ABI_CLumia_CImaging_CAdjustments_CICurvesFilterFactory_FWD_DEFINED__
#define ____x_ABI_CLumia_CImaging_CAdjustments_CICurvesFilterFactory_FWD_DEFINED__
typedef interface __x_ABI_CLumia_CImaging_CAdjustments_CICurvesFilterFactory __x_ABI_CLumia_CImaging_CAdjustments_CICurvesFilterFactory;

#ifdef __cplusplus
namespace ABI {
    namespace Lumia {
        namespace Imaging {
            namespace Adjustments {
                interface ICurvesFilterFactory;
            } /* end namespace */
        } /* end namespace */
    } /* end namespace */
} /* end namespace */

#endif /* __cplusplus */

#endif 	/* ____x_ABI_CLumia_CImaging_CAdjustments_CICurvesFilterFactory_FWD_DEFINED__ */


#ifndef ____x_ABI_CLumia_CImaging_CAdjustments_CIDespeckleFilter_FWD_DEFINED__
#define ____x_ABI_CLumia_CImaging_CAdjustments_CIDespeckleFilter_FWD_DEFINED__
typedef interface __x_ABI_CLumia_CImaging_CAdjustments_CIDespeckleFilter __x_ABI_CLumia_CImaging_CAdjustments_CIDespeckleFilter;

#ifdef __cplusplus
namespace ABI {
    namespace Lumia {
        namespace Imaging {
            namespace Adjustments {
                interface IDespeckleFilter;
            } /* end namespace */
        } /* end namespace */
    } /* end namespace */
} /* end namespace */

#endif /* __cplusplus */

#endif 	/* ____x_ABI_CLumia_CImaging_CAdjustments_CIDespeckleFilter_FWD_DEFINED__ */


#ifndef ____x_ABI_CLumia_CImaging_CAdjustments_CIDespeckleFilterFactory_FWD_DEFINED__
#define ____x_ABI_CLumia_CImaging_CAdjustments_CIDespeckleFilterFactory_FWD_DEFINED__
typedef interface __x_ABI_CLumia_CImaging_CAdjustments_CIDespeckleFilterFactory __x_ABI_CLumia_CImaging_CAdjustments_CIDespeckleFilterFactory;

#ifdef __cplusplus
namespace ABI {
    namespace Lumia {
        namespace Imaging {
            namespace Adjustments {
                interface IDespeckleFilterFactory;
            } /* end namespace */
        } /* end namespace */
    } /* end namespace */
} /* end namespace */

#endif /* __cplusplus */

#endif 	/* ____x_ABI_CLumia_CImaging_CAdjustments_CIDespeckleFilterFactory_FWD_DEFINED__ */


#ifndef ____x_ABI_CLumia_CImaging_CAdjustments_CIExposureFilter_FWD_DEFINED__
#define ____x_ABI_CLumia_CImaging_CAdjustments_CIExposureFilter_FWD_DEFINED__
typedef interface __x_ABI_CLumia_CImaging_CAdjustments_CIExposureFilter __x_ABI_CLumia_CImaging_CAdjustments_CIExposureFilter;

#ifdef __cplusplus
namespace ABI {
    namespace Lumia {
        namespace Imaging {
            namespace Adjustments {
                interface IExposureFilter;
            } /* end namespace */
        } /* end namespace */
    } /* end namespace */
} /* end namespace */

#endif /* __cplusplus */

#endif 	/* ____x_ABI_CLumia_CImaging_CAdjustments_CIExposureFilter_FWD_DEFINED__ */


#ifndef ____x_ABI_CLumia_CImaging_CAdjustments_CIExposureFilterFactory_FWD_DEFINED__
#define ____x_ABI_CLumia_CImaging_CAdjustments_CIExposureFilterFactory_FWD_DEFINED__
typedef interface __x_ABI_CLumia_CImaging_CAdjustments_CIExposureFilterFactory __x_ABI_CLumia_CImaging_CAdjustments_CIExposureFilterFactory;

#ifdef __cplusplus
namespace ABI {
    namespace Lumia {
        namespace Imaging {
            namespace Adjustments {
                interface IExposureFilterFactory;
            } /* end namespace */
        } /* end namespace */
    } /* end namespace */
} /* end namespace */

#endif /* __cplusplus */

#endif 	/* ____x_ABI_CLumia_CImaging_CAdjustments_CIExposureFilterFactory_FWD_DEFINED__ */


#ifndef ____x_ABI_CLumia_CImaging_CAdjustments_CIGaussianNoiseFilter_FWD_DEFINED__
#define ____x_ABI_CLumia_CImaging_CAdjustments_CIGaussianNoiseFilter_FWD_DEFINED__
typedef interface __x_ABI_CLumia_CImaging_CAdjustments_CIGaussianNoiseFilter __x_ABI_CLumia_CImaging_CAdjustments_CIGaussianNoiseFilter;

#ifdef __cplusplus
namespace ABI {
    namespace Lumia {
        namespace Imaging {
            namespace Adjustments {
                interface IGaussianNoiseFilter;
            } /* end namespace */
        } /* end namespace */
    } /* end namespace */
} /* end namespace */

#endif /* __cplusplus */

#endif 	/* ____x_ABI_CLumia_CImaging_CAdjustments_CIGaussianNoiseFilter_FWD_DEFINED__ */


#ifndef ____x_ABI_CLumia_CImaging_CAdjustments_CIGaussianNoiseFilterFactory_FWD_DEFINED__
#define ____x_ABI_CLumia_CImaging_CAdjustments_CIGaussianNoiseFilterFactory_FWD_DEFINED__
typedef interface __x_ABI_CLumia_CImaging_CAdjustments_CIGaussianNoiseFilterFactory __x_ABI_CLumia_CImaging_CAdjustments_CIGaussianNoiseFilterFactory;

#ifdef __cplusplus
namespace ABI {
    namespace Lumia {
        namespace Imaging {
            namespace Adjustments {
                interface IGaussianNoiseFilterFactory;
            } /* end namespace */
        } /* end namespace */
    } /* end namespace */
} /* end namespace */

#endif /* __cplusplus */

#endif 	/* ____x_ABI_CLumia_CImaging_CAdjustments_CIGaussianNoiseFilterFactory_FWD_DEFINED__ */


#ifndef ____x_ABI_CLumia_CImaging_CAdjustments_CIGrayscaleFilter_FWD_DEFINED__
#define ____x_ABI_CLumia_CImaging_CAdjustments_CIGrayscaleFilter_FWD_DEFINED__
typedef interface __x_ABI_CLumia_CImaging_CAdjustments_CIGrayscaleFilter __x_ABI_CLumia_CImaging_CAdjustments_CIGrayscaleFilter;

#ifdef __cplusplus
namespace ABI {
    namespace Lumia {
        namespace Imaging {
            namespace Adjustments {
                interface IGrayscaleFilter;
            } /* end namespace */
        } /* end namespace */
    } /* end namespace */
} /* end namespace */

#endif /* __cplusplus */

#endif 	/* ____x_ABI_CLumia_CImaging_CAdjustments_CIGrayscaleFilter_FWD_DEFINED__ */


#ifndef ____x_ABI_CLumia_CImaging_CAdjustments_CIGrayscaleFilterFactory_FWD_DEFINED__
#define ____x_ABI_CLumia_CImaging_CAdjustments_CIGrayscaleFilterFactory_FWD_DEFINED__
typedef interface __x_ABI_CLumia_CImaging_CAdjustments_CIGrayscaleFilterFactory __x_ABI_CLumia_CImaging_CAdjustments_CIGrayscaleFilterFactory;

#ifdef __cplusplus
namespace ABI {
    namespace Lumia {
        namespace Imaging {
            namespace Adjustments {
                interface IGrayscaleFilterFactory;
            } /* end namespace */
        } /* end namespace */
    } /* end namespace */
} /* end namespace */

#endif /* __cplusplus */

#endif 	/* ____x_ABI_CLumia_CImaging_CAdjustments_CIGrayscaleFilterFactory_FWD_DEFINED__ */


#ifndef ____x_ABI_CLumia_CImaging_CAdjustments_CIHdrEffect_FWD_DEFINED__
#define ____x_ABI_CLumia_CImaging_CAdjustments_CIHdrEffect_FWD_DEFINED__
typedef interface __x_ABI_CLumia_CImaging_CAdjustments_CIHdrEffect __x_ABI_CLumia_CImaging_CAdjustments_CIHdrEffect;

#ifdef __cplusplus
namespace ABI {
    namespace Lumia {
        namespace Imaging {
            namespace Adjustments {
                interface IHdrEffect;
            } /* end namespace */
        } /* end namespace */
    } /* end namespace */
} /* end namespace */

#endif /* __cplusplus */

#endif 	/* ____x_ABI_CLumia_CImaging_CAdjustments_CIHdrEffect_FWD_DEFINED__ */


#ifndef ____x_ABI_CLumia_CImaging_CAdjustments_CIHdrEffectFactory_FWD_DEFINED__
#define ____x_ABI_CLumia_CImaging_CAdjustments_CIHdrEffectFactory_FWD_DEFINED__
typedef interface __x_ABI_CLumia_CImaging_CAdjustments_CIHdrEffectFactory __x_ABI_CLumia_CImaging_CAdjustments_CIHdrEffectFactory;

#ifdef __cplusplus
namespace ABI {
    namespace Lumia {
        namespace Imaging {
            namespace Adjustments {
                interface IHdrEffectFactory;
            } /* end namespace */
        } /* end namespace */
    } /* end namespace */
} /* end namespace */

#endif /* __cplusplus */

#endif 	/* ____x_ABI_CLumia_CImaging_CAdjustments_CIHdrEffectFactory_FWD_DEFINED__ */


#ifndef ____x_ABI_CLumia_CImaging_CAdjustments_CIHueSaturationFilter_FWD_DEFINED__
#define ____x_ABI_CLumia_CImaging_CAdjustments_CIHueSaturationFilter_FWD_DEFINED__
typedef interface __x_ABI_CLumia_CImaging_CAdjustments_CIHueSaturationFilter __x_ABI_CLumia_CImaging_CAdjustments_CIHueSaturationFilter;

#ifdef __cplusplus
namespace ABI {
    namespace Lumia {
        namespace Imaging {
            namespace Adjustments {
                interface IHueSaturationFilter;
            } /* end namespace */
        } /* end namespace */
    } /* end namespace */
} /* end namespace */

#endif /* __cplusplus */

#endif 	/* ____x_ABI_CLumia_CImaging_CAdjustments_CIHueSaturationFilter_FWD_DEFINED__ */


#ifndef ____x_ABI_CLumia_CImaging_CAdjustments_CIHueSaturationFilterFactory_FWD_DEFINED__
#define ____x_ABI_CLumia_CImaging_CAdjustments_CIHueSaturationFilterFactory_FWD_DEFINED__
typedef interface __x_ABI_CLumia_CImaging_CAdjustments_CIHueSaturationFilterFactory __x_ABI_CLumia_CImaging_CAdjustments_CIHueSaturationFilterFactory;

#ifdef __cplusplus
namespace ABI {
    namespace Lumia {
        namespace Imaging {
            namespace Adjustments {
                interface IHueSaturationFilterFactory;
            } /* end namespace */
        } /* end namespace */
    } /* end namespace */
} /* end namespace */

#endif /* __cplusplus */

#endif 	/* ____x_ABI_CLumia_CImaging_CAdjustments_CIHueSaturationFilterFactory_FWD_DEFINED__ */


#ifndef ____x_ABI_CLumia_CImaging_CAdjustments_CIHueSaturationLightnessFilter_FWD_DEFINED__
#define ____x_ABI_CLumia_CImaging_CAdjustments_CIHueSaturationLightnessFilter_FWD_DEFINED__
typedef interface __x_ABI_CLumia_CImaging_CAdjustments_CIHueSaturationLightnessFilter __x_ABI_CLumia_CImaging_CAdjustments_CIHueSaturationLightnessFilter;

#ifdef __cplusplus
namespace ABI {
    namespace Lumia {
        namespace Imaging {
            namespace Adjustments {
                interface IHueSaturationLightnessFilter;
            } /* end namespace */
        } /* end namespace */
    } /* end namespace */
} /* end namespace */

#endif /* __cplusplus */

#endif 	/* ____x_ABI_CLumia_CImaging_CAdjustments_CIHueSaturationLightnessFilter_FWD_DEFINED__ */


#ifndef ____x_ABI_CLumia_CImaging_CAdjustments_CILensBlurKernel_FWD_DEFINED__
#define ____x_ABI_CLumia_CImaging_CAdjustments_CILensBlurKernel_FWD_DEFINED__
typedef interface __x_ABI_CLumia_CImaging_CAdjustments_CILensBlurKernel __x_ABI_CLumia_CImaging_CAdjustments_CILensBlurKernel;

#ifdef __cplusplus
namespace ABI {
    namespace Lumia {
        namespace Imaging {
            namespace Adjustments {
                interface ILensBlurKernel;
            } /* end namespace */
        } /* end namespace */
    } /* end namespace */
} /* end namespace */

#endif /* __cplusplus */

#endif 	/* ____x_ABI_CLumia_CImaging_CAdjustments_CILensBlurKernel_FWD_DEFINED__ */


#ifndef ____x_ABI_CLumia_CImaging_CAdjustments_CILensBlurCustomKernel_FWD_DEFINED__
#define ____x_ABI_CLumia_CImaging_CAdjustments_CILensBlurCustomKernel_FWD_DEFINED__
typedef interface __x_ABI_CLumia_CImaging_CAdjustments_CILensBlurCustomKernel __x_ABI_CLumia_CImaging_CAdjustments_CILensBlurCustomKernel;

#ifdef __cplusplus
namespace ABI {
    namespace Lumia {
        namespace Imaging {
            namespace Adjustments {
                interface ILensBlurCustomKernel;
            } /* end namespace */
        } /* end namespace */
    } /* end namespace */
} /* end namespace */

#endif /* __cplusplus */

#endif 	/* ____x_ABI_CLumia_CImaging_CAdjustments_CILensBlurCustomKernel_FWD_DEFINED__ */


#ifndef ____x_ABI_CLumia_CImaging_CAdjustments_CILensBlurCustomKernelFactory_FWD_DEFINED__
#define ____x_ABI_CLumia_CImaging_CAdjustments_CILensBlurCustomKernelFactory_FWD_DEFINED__
typedef interface __x_ABI_CLumia_CImaging_CAdjustments_CILensBlurCustomKernelFactory __x_ABI_CLumia_CImaging_CAdjustments_CILensBlurCustomKernelFactory;

#ifdef __cplusplus
namespace ABI {
    namespace Lumia {
        namespace Imaging {
            namespace Adjustments {
                interface ILensBlurCustomKernelFactory;
            } /* end namespace */
        } /* end namespace */
    } /* end namespace */
} /* end namespace */

#endif /* __cplusplus */

#endif 	/* ____x_ABI_CLumia_CImaging_CAdjustments_CILensBlurCustomKernelFactory_FWD_DEFINED__ */


#ifndef ____x_ABI_CLumia_CImaging_CAdjustments_CILensBlurPredefinedKernel_FWD_DEFINED__
#define ____x_ABI_CLumia_CImaging_CAdjustments_CILensBlurPredefinedKernel_FWD_DEFINED__
typedef interface __x_ABI_CLumia_CImaging_CAdjustments_CILensBlurPredefinedKernel __x_ABI_CLumia_CImaging_CAdjustments_CILensBlurPredefinedKernel;

#ifdef __cplusplus
namespace ABI {
    namespace Lumia {
        namespace Imaging {
            namespace Adjustments {
                interface ILensBlurPredefinedKernel;
            } /* end namespace */
        } /* end namespace */
    } /* end namespace */
} /* end namespace */

#endif /* __cplusplus */

#endif 	/* ____x_ABI_CLumia_CImaging_CAdjustments_CILensBlurPredefinedKernel_FWD_DEFINED__ */


#ifndef ____x_ABI_CLumia_CImaging_CAdjustments_CILensBlurPredefinedKernelFactory_FWD_DEFINED__
#define ____x_ABI_CLumia_CImaging_CAdjustments_CILensBlurPredefinedKernelFactory_FWD_DEFINED__
typedef interface __x_ABI_CLumia_CImaging_CAdjustments_CILensBlurPredefinedKernelFactory __x_ABI_CLumia_CImaging_CAdjustments_CILensBlurPredefinedKernelFactory;

#ifdef __cplusplus
namespace ABI {
    namespace Lumia {
        namespace Imaging {
            namespace Adjustments {
                interface ILensBlurPredefinedKernelFactory;
            } /* end namespace */
        } /* end namespace */
    } /* end namespace */
} /* end namespace */

#endif /* __cplusplus */

#endif 	/* ____x_ABI_CLumia_CImaging_CAdjustments_CILensBlurPredefinedKernelFactory_FWD_DEFINED__ */


#ifndef ____x_ABI_CLumia_CImaging_CAdjustments_CILensBlurEffect_FWD_DEFINED__
#define ____x_ABI_CLumia_CImaging_CAdjustments_CILensBlurEffect_FWD_DEFINED__
typedef interface __x_ABI_CLumia_CImaging_CAdjustments_CILensBlurEffect __x_ABI_CLumia_CImaging_CAdjustments_CILensBlurEffect;

#ifdef __cplusplus
namespace ABI {
    namespace Lumia {
        namespace Imaging {
            namespace Adjustments {
                interface ILensBlurEffect;
            } /* end namespace */
        } /* end namespace */
    } /* end namespace */
} /* end namespace */

#endif /* __cplusplus */

#endif 	/* ____x_ABI_CLumia_CImaging_CAdjustments_CILensBlurEffect_FWD_DEFINED__ */


#ifndef ____x_ABI_CLumia_CImaging_CAdjustments_CILensBlurEffectFactory_FWD_DEFINED__
#define ____x_ABI_CLumia_CImaging_CAdjustments_CILensBlurEffectFactory_FWD_DEFINED__
typedef interface __x_ABI_CLumia_CImaging_CAdjustments_CILensBlurEffectFactory __x_ABI_CLumia_CImaging_CAdjustments_CILensBlurEffectFactory;

#ifdef __cplusplus
namespace ABI {
    namespace Lumia {
        namespace Imaging {
            namespace Adjustments {
                interface ILensBlurEffectFactory;
            } /* end namespace */
        } /* end namespace */
    } /* end namespace */
} /* end namespace */

#endif /* __cplusplus */

#endif 	/* ____x_ABI_CLumia_CImaging_CAdjustments_CILensBlurEffectFactory_FWD_DEFINED__ */


#ifndef ____x_ABI_CLumia_CImaging_CAdjustments_CIRgbLevelsFilter_FWD_DEFINED__
#define ____x_ABI_CLumia_CImaging_CAdjustments_CIRgbLevelsFilter_FWD_DEFINED__
typedef interface __x_ABI_CLumia_CImaging_CAdjustments_CIRgbLevelsFilter __x_ABI_CLumia_CImaging_CAdjustments_CIRgbLevelsFilter;

#ifdef __cplusplus
namespace ABI {
    namespace Lumia {
        namespace Imaging {
            namespace Adjustments {
                interface IRgbLevelsFilter;
            } /* end namespace */
        } /* end namespace */
    } /* end namespace */
} /* end namespace */

#endif /* __cplusplus */

#endif 	/* ____x_ABI_CLumia_CImaging_CAdjustments_CIRgbLevelsFilter_FWD_DEFINED__ */


#ifndef ____x_ABI_CLumia_CImaging_CAdjustments_CIRgbLevelsFilterFactory_FWD_DEFINED__
#define ____x_ABI_CLumia_CImaging_CAdjustments_CIRgbLevelsFilterFactory_FWD_DEFINED__
typedef interface __x_ABI_CLumia_CImaging_CAdjustments_CIRgbLevelsFilterFactory __x_ABI_CLumia_CImaging_CAdjustments_CIRgbLevelsFilterFactory;

#ifdef __cplusplus
namespace ABI {
    namespace Lumia {
        namespace Imaging {
            namespace Adjustments {
                interface IRgbLevelsFilterFactory;
            } /* end namespace */
        } /* end namespace */
    } /* end namespace */
} /* end namespace */

#endif /* __cplusplus */

#endif 	/* ____x_ABI_CLumia_CImaging_CAdjustments_CIRgbLevelsFilterFactory_FWD_DEFINED__ */


#ifndef ____x_ABI_CLumia_CImaging_CAdjustments_CILevelsFilter_FWD_DEFINED__
#define ____x_ABI_CLumia_CImaging_CAdjustments_CILevelsFilter_FWD_DEFINED__
typedef interface __x_ABI_CLumia_CImaging_CAdjustments_CILevelsFilter __x_ABI_CLumia_CImaging_CAdjustments_CILevelsFilter;

#ifdef __cplusplus
namespace ABI {
    namespace Lumia {
        namespace Imaging {
            namespace Adjustments {
                interface ILevelsFilter;
            } /* end namespace */
        } /* end namespace */
    } /* end namespace */
} /* end namespace */

#endif /* __cplusplus */

#endif 	/* ____x_ABI_CLumia_CImaging_CAdjustments_CILevelsFilter_FWD_DEFINED__ */


#ifndef ____x_ABI_CLumia_CImaging_CAdjustments_CILevelsFilterFactory_FWD_DEFINED__
#define ____x_ABI_CLumia_CImaging_CAdjustments_CILevelsFilterFactory_FWD_DEFINED__
typedef interface __x_ABI_CLumia_CImaging_CAdjustments_CILevelsFilterFactory __x_ABI_CLumia_CImaging_CAdjustments_CILevelsFilterFactory;

#ifdef __cplusplus
namespace ABI {
    namespace Lumia {
        namespace Imaging {
            namespace Adjustments {
                interface ILevelsFilterFactory;
            } /* end namespace */
        } /* end namespace */
    } /* end namespace */
} /* end namespace */

#endif /* __cplusplus */

#endif 	/* ____x_ABI_CLumia_CImaging_CAdjustments_CILevelsFilterFactory_FWD_DEFINED__ */


#ifndef ____x_ABI_CLumia_CImaging_CAdjustments_CILocalBoostAutomaticFilter_FWD_DEFINED__
#define ____x_ABI_CLumia_CImaging_CAdjustments_CILocalBoostAutomaticFilter_FWD_DEFINED__
typedef interface __x_ABI_CLumia_CImaging_CAdjustments_CILocalBoostAutomaticFilter __x_ABI_CLumia_CImaging_CAdjustments_CILocalBoostAutomaticFilter;

#ifdef __cplusplus
namespace ABI {
    namespace Lumia {
        namespace Imaging {
            namespace Adjustments {
                interface ILocalBoostAutomaticFilter;
            } /* end namespace */
        } /* end namespace */
    } /* end namespace */
} /* end namespace */

#endif /* __cplusplus */

#endif 	/* ____x_ABI_CLumia_CImaging_CAdjustments_CILocalBoostAutomaticFilter_FWD_DEFINED__ */


#ifndef ____x_ABI_CLumia_CImaging_CAdjustments_CILocalBoostAutomaticFilterFactory_FWD_DEFINED__
#define ____x_ABI_CLumia_CImaging_CAdjustments_CILocalBoostAutomaticFilterFactory_FWD_DEFINED__
typedef interface __x_ABI_CLumia_CImaging_CAdjustments_CILocalBoostAutomaticFilterFactory __x_ABI_CLumia_CImaging_CAdjustments_CILocalBoostAutomaticFilterFactory;

#ifdef __cplusplus
namespace ABI {
    namespace Lumia {
        namespace Imaging {
            namespace Adjustments {
                interface ILocalBoostAutomaticFilterFactory;
            } /* end namespace */
        } /* end namespace */
    } /* end namespace */
} /* end namespace */

#endif /* __cplusplus */

#endif 	/* ____x_ABI_CLumia_CImaging_CAdjustments_CILocalBoostAutomaticFilterFactory_FWD_DEFINED__ */


#ifndef ____x_ABI_CLumia_CImaging_CAdjustments_CILocalBoostFilter_FWD_DEFINED__
#define ____x_ABI_CLumia_CImaging_CAdjustments_CILocalBoostFilter_FWD_DEFINED__
typedef interface __x_ABI_CLumia_CImaging_CAdjustments_CILocalBoostFilter __x_ABI_CLumia_CImaging_CAdjustments_CILocalBoostFilter;

#ifdef __cplusplus
namespace ABI {
    namespace Lumia {
        namespace Imaging {
            namespace Adjustments {
                interface ILocalBoostFilter;
            } /* end namespace */
        } /* end namespace */
    } /* end namespace */
} /* end namespace */

#endif /* __cplusplus */

#endif 	/* ____x_ABI_CLumia_CImaging_CAdjustments_CILocalBoostFilter_FWD_DEFINED__ */


#ifndef ____x_ABI_CLumia_CImaging_CAdjustments_CILocalBoostFilterFactory_FWD_DEFINED__
#define ____x_ABI_CLumia_CImaging_CAdjustments_CILocalBoostFilterFactory_FWD_DEFINED__
typedef interface __x_ABI_CLumia_CImaging_CAdjustments_CILocalBoostFilterFactory __x_ABI_CLumia_CImaging_CAdjustments_CILocalBoostFilterFactory;

#ifdef __cplusplus
namespace ABI {
    namespace Lumia {
        namespace Imaging {
            namespace Adjustments {
                interface ILocalBoostFilterFactory;
            } /* end namespace */
        } /* end namespace */
    } /* end namespace */
} /* end namespace */

#endif /* __cplusplus */

#endif 	/* ____x_ABI_CLumia_CImaging_CAdjustments_CILocalBoostFilterFactory_FWD_DEFINED__ */


#ifndef ____x_ABI_CLumia_CImaging_CAdjustments_CINoiseFilter_FWD_DEFINED__
#define ____x_ABI_CLumia_CImaging_CAdjustments_CINoiseFilter_FWD_DEFINED__
typedef interface __x_ABI_CLumia_CImaging_CAdjustments_CINoiseFilter __x_ABI_CLumia_CImaging_CAdjustments_CINoiseFilter;

#ifdef __cplusplus
namespace ABI {
    namespace Lumia {
        namespace Imaging {
            namespace Adjustments {
                interface INoiseFilter;
            } /* end namespace */
        } /* end namespace */
    } /* end namespace */
} /* end namespace */

#endif /* __cplusplus */

#endif 	/* ____x_ABI_CLumia_CImaging_CAdjustments_CINoiseFilter_FWD_DEFINED__ */


#ifndef ____x_ABI_CLumia_CImaging_CAdjustments_CINoiseFilterFactory_FWD_DEFINED__
#define ____x_ABI_CLumia_CImaging_CAdjustments_CINoiseFilterFactory_FWD_DEFINED__
typedef interface __x_ABI_CLumia_CImaging_CAdjustments_CINoiseFilterFactory __x_ABI_CLumia_CImaging_CAdjustments_CINoiseFilterFactory;

#ifdef __cplusplus
namespace ABI {
    namespace Lumia {
        namespace Imaging {
            namespace Adjustments {
                interface INoiseFilterFactory;
            } /* end namespace */
        } /* end namespace */
    } /* end namespace */
} /* end namespace */

#endif /* __cplusplus */

#endif 	/* ____x_ABI_CLumia_CImaging_CAdjustments_CINoiseFilterFactory_FWD_DEFINED__ */


#ifndef ____FIIterator_1_Windows__CFoundation__CRect_FWD_DEFINED__
#define ____FIIterator_1_Windows__CFoundation__CRect_FWD_DEFINED__
typedef interface __FIIterator_1_Windows__CFoundation__CRect __FIIterator_1_Windows__CFoundation__CRect;

#endif 	/* ____FIIterator_1_Windows__CFoundation__CRect_FWD_DEFINED__ */


#ifndef ____FIIterable_1_Windows__CFoundation__CRect_FWD_DEFINED__
#define ____FIIterable_1_Windows__CFoundation__CRect_FWD_DEFINED__
typedef interface __FIIterable_1_Windows__CFoundation__CRect __FIIterable_1_Windows__CFoundation__CRect;

#endif 	/* ____FIIterable_1_Windows__CFoundation__CRect_FWD_DEFINED__ */


#ifndef ____FIVectorView_1_Windows__CFoundation__CRect_FWD_DEFINED__
#define ____FIVectorView_1_Windows__CFoundation__CRect_FWD_DEFINED__
typedef interface __FIVectorView_1_Windows__CFoundation__CRect __FIVectorView_1_Windows__CFoundation__CRect;

#endif 	/* ____FIVectorView_1_Windows__CFoundation__CRect_FWD_DEFINED__ */


#ifndef ____x_ABI_CLumia_CImaging_CAdjustments_CIRedEyeRemovalFilter_FWD_DEFINED__
#define ____x_ABI_CLumia_CImaging_CAdjustments_CIRedEyeRemovalFilter_FWD_DEFINED__
typedef interface __x_ABI_CLumia_CImaging_CAdjustments_CIRedEyeRemovalFilter __x_ABI_CLumia_CImaging_CAdjustments_CIRedEyeRemovalFilter;

#ifdef __cplusplus
namespace ABI {
    namespace Lumia {
        namespace Imaging {
            namespace Adjustments {
                interface IRedEyeRemovalFilter;
            } /* end namespace */
        } /* end namespace */
    } /* end namespace */
} /* end namespace */

#endif /* __cplusplus */

#endif 	/* ____x_ABI_CLumia_CImaging_CAdjustments_CIRedEyeRemovalFilter_FWD_DEFINED__ */


#ifndef ____x_ABI_CLumia_CImaging_CAdjustments_CIRedEyeRemovalFilterFactory_FWD_DEFINED__
#define ____x_ABI_CLumia_CImaging_CAdjustments_CIRedEyeRemovalFilterFactory_FWD_DEFINED__
typedef interface __x_ABI_CLumia_CImaging_CAdjustments_CIRedEyeRemovalFilterFactory __x_ABI_CLumia_CImaging_CAdjustments_CIRedEyeRemovalFilterFactory;

#ifdef __cplusplus
namespace ABI {
    namespace Lumia {
        namespace Imaging {
            namespace Adjustments {
                interface IRedEyeRemovalFilterFactory;
            } /* end namespace */
        } /* end namespace */
    } /* end namespace */
} /* end namespace */

#endif /* __cplusplus */

#endif 	/* ____x_ABI_CLumia_CImaging_CAdjustments_CIRedEyeRemovalFilterFactory_FWD_DEFINED__ */


#ifndef ____x_ABI_CLumia_CImaging_CAdjustments_CISaturationLightnessFilter_FWD_DEFINED__
#define ____x_ABI_CLumia_CImaging_CAdjustments_CISaturationLightnessFilter_FWD_DEFINED__
typedef interface __x_ABI_CLumia_CImaging_CAdjustments_CISaturationLightnessFilter __x_ABI_CLumia_CImaging_CAdjustments_CISaturationLightnessFilter;

#ifdef __cplusplus
namespace ABI {
    namespace Lumia {
        namespace Imaging {
            namespace Adjustments {
                interface ISaturationLightnessFilter;
            } /* end namespace */
        } /* end namespace */
    } /* end namespace */
} /* end namespace */

#endif /* __cplusplus */

#endif 	/* ____x_ABI_CLumia_CImaging_CAdjustments_CISaturationLightnessFilter_FWD_DEFINED__ */


#ifndef ____x_ABI_CLumia_CImaging_CAdjustments_CISaturationLightnessFilterFactory_FWD_DEFINED__
#define ____x_ABI_CLumia_CImaging_CAdjustments_CISaturationLightnessFilterFactory_FWD_DEFINED__
typedef interface __x_ABI_CLumia_CImaging_CAdjustments_CISaturationLightnessFilterFactory __x_ABI_CLumia_CImaging_CAdjustments_CISaturationLightnessFilterFactory;

#ifdef __cplusplus
namespace ABI {
    namespace Lumia {
        namespace Imaging {
            namespace Adjustments {
                interface ISaturationLightnessFilterFactory;
            } /* end namespace */
        } /* end namespace */
    } /* end namespace */
} /* end namespace */

#endif /* __cplusplus */

#endif 	/* ____x_ABI_CLumia_CImaging_CAdjustments_CISaturationLightnessFilterFactory_FWD_DEFINED__ */


#ifndef ____x_ABI_CLumia_CImaging_CAdjustments_CISharpnessFilter_FWD_DEFINED__
#define ____x_ABI_CLumia_CImaging_CAdjustments_CISharpnessFilter_FWD_DEFINED__
typedef interface __x_ABI_CLumia_CImaging_CAdjustments_CISharpnessFilter __x_ABI_CLumia_CImaging_CAdjustments_CISharpnessFilter;

#ifdef __cplusplus
namespace ABI {
    namespace Lumia {
        namespace Imaging {
            namespace Adjustments {
                interface ISharpnessFilter;
            } /* end namespace */
        } /* end namespace */
    } /* end namespace */
} /* end namespace */

#endif /* __cplusplus */

#endif 	/* ____x_ABI_CLumia_CImaging_CAdjustments_CISharpnessFilter_FWD_DEFINED__ */


#ifndef ____x_ABI_CLumia_CImaging_CAdjustments_CISharpnessFilterFactory_FWD_DEFINED__
#define ____x_ABI_CLumia_CImaging_CAdjustments_CISharpnessFilterFactory_FWD_DEFINED__
typedef interface __x_ABI_CLumia_CImaging_CAdjustments_CISharpnessFilterFactory __x_ABI_CLumia_CImaging_CAdjustments_CISharpnessFilterFactory;

#ifdef __cplusplus
namespace ABI {
    namespace Lumia {
        namespace Imaging {
            namespace Adjustments {
                interface ISharpnessFilterFactory;
            } /* end namespace */
        } /* end namespace */
    } /* end namespace */
} /* end namespace */

#endif /* __cplusplus */

#endif 	/* ____x_ABI_CLumia_CImaging_CAdjustments_CISharpnessFilterFactory_FWD_DEFINED__ */


#ifndef ____x_ABI_CLumia_CImaging_CAdjustments_CIRgbMixerFilter_FWD_DEFINED__
#define ____x_ABI_CLumia_CImaging_CAdjustments_CIRgbMixerFilter_FWD_DEFINED__
typedef interface __x_ABI_CLumia_CImaging_CAdjustments_CIRgbMixerFilter __x_ABI_CLumia_CImaging_CAdjustments_CIRgbMixerFilter;

#ifdef __cplusplus
namespace ABI {
    namespace Lumia {
        namespace Imaging {
            namespace Adjustments {
                interface IRgbMixerFilter;
            } /* end namespace */
        } /* end namespace */
    } /* end namespace */
} /* end namespace */

#endif /* __cplusplus */

#endif 	/* ____x_ABI_CLumia_CImaging_CAdjustments_CIRgbMixerFilter_FWD_DEFINED__ */


#ifndef ____x_ABI_CLumia_CImaging_CAdjustments_CITemperatureAndTintFilter_FWD_DEFINED__
#define ____x_ABI_CLumia_CImaging_CAdjustments_CITemperatureAndTintFilter_FWD_DEFINED__
typedef interface __x_ABI_CLumia_CImaging_CAdjustments_CITemperatureAndTintFilter __x_ABI_CLumia_CImaging_CAdjustments_CITemperatureAndTintFilter;

#ifdef __cplusplus
namespace ABI {
    namespace Lumia {
        namespace Imaging {
            namespace Adjustments {
                interface ITemperatureAndTintFilter;
            } /* end namespace */
        } /* end namespace */
    } /* end namespace */
} /* end namespace */

#endif /* __cplusplus */

#endif 	/* ____x_ABI_CLumia_CImaging_CAdjustments_CITemperatureAndTintFilter_FWD_DEFINED__ */


#ifndef ____x_ABI_CLumia_CImaging_CAdjustments_CITemperatureAndTintFilterFactory_FWD_DEFINED__
#define ____x_ABI_CLumia_CImaging_CAdjustments_CITemperatureAndTintFilterFactory_FWD_DEFINED__
typedef interface __x_ABI_CLumia_CImaging_CAdjustments_CITemperatureAndTintFilterFactory __x_ABI_CLumia_CImaging_CAdjustments_CITemperatureAndTintFilterFactory;

#ifdef __cplusplus
namespace ABI {
    namespace Lumia {
        namespace Imaging {
            namespace Adjustments {
                interface ITemperatureAndTintFilterFactory;
            } /* end namespace */
        } /* end namespace */
    } /* end namespace */
} /* end namespace */

#endif /* __cplusplus */

#endif 	/* ____x_ABI_CLumia_CImaging_CAdjustments_CITemperatureAndTintFilterFactory_FWD_DEFINED__ */


#ifndef ____x_ABI_CLumia_CImaging_CAdjustments_CIVibranceFilter_FWD_DEFINED__
#define ____x_ABI_CLumia_CImaging_CAdjustments_CIVibranceFilter_FWD_DEFINED__
typedef interface __x_ABI_CLumia_CImaging_CAdjustments_CIVibranceFilter __x_ABI_CLumia_CImaging_CAdjustments_CIVibranceFilter;

#ifdef __cplusplus
namespace ABI {
    namespace Lumia {
        namespace Imaging {
            namespace Adjustments {
                interface IVibranceFilter;
            } /* end namespace */
        } /* end namespace */
    } /* end namespace */
} /* end namespace */

#endif /* __cplusplus */

#endif 	/* ____x_ABI_CLumia_CImaging_CAdjustments_CIVibranceFilter_FWD_DEFINED__ */


#ifndef ____x_ABI_CLumia_CImaging_CAdjustments_CIWhiteBalanceFilter_FWD_DEFINED__
#define ____x_ABI_CLumia_CImaging_CAdjustments_CIWhiteBalanceFilter_FWD_DEFINED__
typedef interface __x_ABI_CLumia_CImaging_CAdjustments_CIWhiteBalanceFilter __x_ABI_CLumia_CImaging_CAdjustments_CIWhiteBalanceFilter;

#ifdef __cplusplus
namespace ABI {
    namespace Lumia {
        namespace Imaging {
            namespace Adjustments {
                interface IWhiteBalanceFilter;
            } /* end namespace */
        } /* end namespace */
    } /* end namespace */
} /* end namespace */

#endif /* __cplusplus */

#endif 	/* ____x_ABI_CLumia_CImaging_CAdjustments_CIWhiteBalanceFilter_FWD_DEFINED__ */


#ifndef ____x_ABI_CLumia_CImaging_CAdjustments_CIWhiteBalanceFilterFactory_FWD_DEFINED__
#define ____x_ABI_CLumia_CImaging_CAdjustments_CIWhiteBalanceFilterFactory_FWD_DEFINED__
typedef interface __x_ABI_CLumia_CImaging_CAdjustments_CIWhiteBalanceFilterFactory __x_ABI_CLumia_CImaging_CAdjustments_CIWhiteBalanceFilterFactory;

#ifdef __cplusplus
namespace ABI {
    namespace Lumia {
        namespace Imaging {
            namespace Adjustments {
                interface IWhiteBalanceFilterFactory;
            } /* end namespace */
        } /* end namespace */
    } /* end namespace */
} /* end namespace */

#endif /* __cplusplus */

#endif 	/* ____x_ABI_CLumia_CImaging_CAdjustments_CIWhiteBalanceFilterFactory_FWD_DEFINED__ */


#ifndef ____x_ABI_CLumia_CImaging_CAdjustments_CIWhiteboardEnhancementFilter_FWD_DEFINED__
#define ____x_ABI_CLumia_CImaging_CAdjustments_CIWhiteboardEnhancementFilter_FWD_DEFINED__
typedef interface __x_ABI_CLumia_CImaging_CAdjustments_CIWhiteboardEnhancementFilter __x_ABI_CLumia_CImaging_CAdjustments_CIWhiteboardEnhancementFilter;

#ifdef __cplusplus
namespace ABI {
    namespace Lumia {
        namespace Imaging {
            namespace Adjustments {
                interface IWhiteboardEnhancementFilter;
            } /* end namespace */
        } /* end namespace */
    } /* end namespace */
} /* end namespace */

#endif /* __cplusplus */

#endif 	/* ____x_ABI_CLumia_CImaging_CAdjustments_CIWhiteboardEnhancementFilter_FWD_DEFINED__ */


#ifndef ____x_ABI_CLumia_CImaging_CAdjustments_CIWhiteboardEnhancementFilterFactory_FWD_DEFINED__
#define ____x_ABI_CLumia_CImaging_CAdjustments_CIWhiteboardEnhancementFilterFactory_FWD_DEFINED__
typedef interface __x_ABI_CLumia_CImaging_CAdjustments_CIWhiteboardEnhancementFilterFactory __x_ABI_CLumia_CImaging_CAdjustments_CIWhiteboardEnhancementFilterFactory;

#ifdef __cplusplus
namespace ABI {
    namespace Lumia {
        namespace Imaging {
            namespace Adjustments {
                interface IWhiteboardEnhancementFilterFactory;
            } /* end namespace */
        } /* end namespace */
    } /* end namespace */
} /* end namespace */

#endif /* __cplusplus */

#endif 	/* ____x_ABI_CLumia_CImaging_CAdjustments_CIWhiteboardEnhancementFilterFactory_FWD_DEFINED__ */


/* header files for imported files */
#include "inspectable.h"
#include "AsyncInfo.h"
#include "EventToken.h"
#include "Windows.Foundation.h"
#include "Lumia.Imaging.h"

#ifdef __cplusplus
extern "C"{
#endif 


/* interface __MIDL_itf_Lumia2EImaging2EAdjustments_0000_0000 */
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
namespace Adjustments {
class Curve;
} /*Adjustments*/
} /*Imaging*/
} /*Lumia*/
}
#endif

#ifdef __cplusplus
namespace ABI {
namespace Lumia {
namespace Imaging {
namespace Adjustments {
interface ICurve;
} /*Adjustments*/
} /*Imaging*/
} /*Lumia*/
}
#endif


/* interface __MIDL_itf_Lumia2EImaging2EAdjustments_0000_0000 */
/* [local] */ 




extern RPC_IF_HANDLE __MIDL_itf_Lumia2EImaging2EAdjustments_0000_0000_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_Lumia2EImaging2EAdjustments_0000_0000_v0_0_s_ifspec;

/* interface __MIDL_itf_Lumia2EImaging2EAdjustments_0000_2003 */




/* interface __MIDL_itf_Lumia2EImaging2EAdjustments_0000_2003 */




extern RPC_IF_HANDLE __MIDL_itf_Lumia2EImaging2EAdjustments_0000_2003_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_Lumia2EImaging2EAdjustments_0000_2003_v0_0_s_ifspec;

/* interface __MIDL_itf_Lumia2EImaging2EAdjustments_0000_0001 */
/* [local] */ 

#ifndef DEF___FIIterator_1_Lumia__CImaging__CAdjustments__CCurve_USE
#define DEF___FIIterator_1_Lumia__CImaging__CAdjustments__CCurve_USE
#if defined(__cplusplus) && !defined(RO_NO_TEMPLATE_NAME)
} /*extern "C"*/ 
namespace ABI { namespace Windows { namespace Foundation { namespace Collections {
template <>
struct __declspec(uuid("183cb1ea-d9dd-533a-91a6-5b1bb1ab46c0"))
IIterator<ABI::Lumia::Imaging::Adjustments::Curve*> : IIterator_impl<ABI::Windows::Foundation::Internal::AggregateType<ABI::Lumia::Imaging::Adjustments::Curve*, ABI::Lumia::Imaging::Adjustments::ICurve*>> {
static const wchar_t* z_get_rc_name_impl() {
return L"Windows.Foundation.Collections.IIterator`1<Lumia.Imaging.Adjustments.Curve>"; }
};
typedef IIterator<ABI::Lumia::Imaging::Adjustments::Curve*> __FIIterator_1_Lumia__CImaging__CAdjustments__CCurve_t;
#define ____FIIterator_1_Lumia__CImaging__CAdjustments__CCurve_FWD_DEFINED__
#define __FIIterator_1_Lumia__CImaging__CAdjustments__CCurve ABI::Windows::Foundation::Collections::__FIIterator_1_Lumia__CImaging__CAdjustments__CCurve_t

/* ABI */ } /* Windows */ } /* Foundation */ } /* Collections */ }
extern "C" {
#endif //__cplusplus
#endif /* DEF___FIIterator_1_Lumia__CImaging__CAdjustments__CCurve_USE */


/* interface __MIDL_itf_Lumia2EImaging2EAdjustments_0000_0001 */
/* [local] */ 




extern RPC_IF_HANDLE __MIDL_itf_Lumia2EImaging2EAdjustments_0000_0001_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_Lumia2EImaging2EAdjustments_0000_0001_v0_0_s_ifspec;

/* interface __MIDL_itf_Lumia2EImaging2EAdjustments_0000_2004 */




/* interface __MIDL_itf_Lumia2EImaging2EAdjustments_0000_2004 */




extern RPC_IF_HANDLE __MIDL_itf_Lumia2EImaging2EAdjustments_0000_2004_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_Lumia2EImaging2EAdjustments_0000_2004_v0_0_s_ifspec;

/* interface __MIDL_itf_Lumia2EImaging2EAdjustments_0000_0002 */
/* [local] */ 

#ifndef DEF___FIIterable_1_Lumia__CImaging__CAdjustments__CCurve_USE
#define DEF___FIIterable_1_Lumia__CImaging__CAdjustments__CCurve_USE
#if defined(__cplusplus) && !defined(RO_NO_TEMPLATE_NAME)
} /*extern "C"*/ 
namespace ABI { namespace Windows { namespace Foundation { namespace Collections {
template <>
struct __declspec(uuid("e853ad78-aa1f-56b5-a892-3f7d69069622"))
IIterable<ABI::Lumia::Imaging::Adjustments::Curve*> : IIterable_impl<ABI::Windows::Foundation::Internal::AggregateType<ABI::Lumia::Imaging::Adjustments::Curve*, ABI::Lumia::Imaging::Adjustments::ICurve*>> {
static const wchar_t* z_get_rc_name_impl() {
return L"Windows.Foundation.Collections.IIterable`1<Lumia.Imaging.Adjustments.Curve>"; }
};
typedef IIterable<ABI::Lumia::Imaging::Adjustments::Curve*> __FIIterable_1_Lumia__CImaging__CAdjustments__CCurve_t;
#define ____FIIterable_1_Lumia__CImaging__CAdjustments__CCurve_FWD_DEFINED__
#define __FIIterable_1_Lumia__CImaging__CAdjustments__CCurve ABI::Windows::Foundation::Collections::__FIIterable_1_Lumia__CImaging__CAdjustments__CCurve_t

/* ABI */ } /* Windows */ } /* Foundation */ } /* Collections */ }
extern "C" {
#endif //__cplusplus
#endif /* DEF___FIIterable_1_Lumia__CImaging__CAdjustments__CCurve_USE */
#ifdef __cplusplus
namespace ABI {
namespace Lumia {
namespace Imaging {
namespace Adjustments {
class CurveMinMaxPair;
} /*Adjustments*/
} /*Imaging*/
} /*Lumia*/
}
#endif

#ifdef __cplusplus
namespace ABI {
namespace Lumia {
namespace Imaging {
namespace Adjustments {
interface ICurveMinMaxPair;
} /*Adjustments*/
} /*Imaging*/
} /*Lumia*/
}
#endif


/* interface __MIDL_itf_Lumia2EImaging2EAdjustments_0000_0002 */
/* [local] */ 





extern RPC_IF_HANDLE __MIDL_itf_Lumia2EImaging2EAdjustments_0000_0002_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_Lumia2EImaging2EAdjustments_0000_0002_v0_0_s_ifspec;

/* interface __MIDL_itf_Lumia2EImaging2EAdjustments_0000_2005 */




/* interface __MIDL_itf_Lumia2EImaging2EAdjustments_0000_2005 */




extern RPC_IF_HANDLE __MIDL_itf_Lumia2EImaging2EAdjustments_0000_2005_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_Lumia2EImaging2EAdjustments_0000_2005_v0_0_s_ifspec;

/* interface __MIDL_itf_Lumia2EImaging2EAdjustments_0000_0003 */
/* [local] */ 

#ifndef DEF___FIIterator_1_Lumia__CImaging__CAdjustments__CCurveMinMaxPair_USE
#define DEF___FIIterator_1_Lumia__CImaging__CAdjustments__CCurveMinMaxPair_USE
#if defined(__cplusplus) && !defined(RO_NO_TEMPLATE_NAME)
} /*extern "C"*/ 
namespace ABI { namespace Windows { namespace Foundation { namespace Collections {
template <>
struct __declspec(uuid("ccb3f9c8-70e8-5202-a9c2-810f9ab347ea"))
IIterator<ABI::Lumia::Imaging::Adjustments::CurveMinMaxPair*> : IIterator_impl<ABI::Windows::Foundation::Internal::AggregateType<ABI::Lumia::Imaging::Adjustments::CurveMinMaxPair*, ABI::Lumia::Imaging::Adjustments::ICurveMinMaxPair*>> {
static const wchar_t* z_get_rc_name_impl() {
return L"Windows.Foundation.Collections.IIterator`1<Lumia.Imaging.Adjustments.CurveMinMaxPair>"; }
};
typedef IIterator<ABI::Lumia::Imaging::Adjustments::CurveMinMaxPair*> __FIIterator_1_Lumia__CImaging__CAdjustments__CCurveMinMaxPair_t;
#define ____FIIterator_1_Lumia__CImaging__CAdjustments__CCurveMinMaxPair_FWD_DEFINED__
#define __FIIterator_1_Lumia__CImaging__CAdjustments__CCurveMinMaxPair ABI::Windows::Foundation::Collections::__FIIterator_1_Lumia__CImaging__CAdjustments__CCurveMinMaxPair_t

/* ABI */ } /* Windows */ } /* Foundation */ } /* Collections */ }
extern "C" {
#endif //__cplusplus
#endif /* DEF___FIIterator_1_Lumia__CImaging__CAdjustments__CCurveMinMaxPair_USE */


/* interface __MIDL_itf_Lumia2EImaging2EAdjustments_0000_0003 */
/* [local] */ 




extern RPC_IF_HANDLE __MIDL_itf_Lumia2EImaging2EAdjustments_0000_0003_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_Lumia2EImaging2EAdjustments_0000_0003_v0_0_s_ifspec;

/* interface __MIDL_itf_Lumia2EImaging2EAdjustments_0000_2006 */




/* interface __MIDL_itf_Lumia2EImaging2EAdjustments_0000_2006 */




extern RPC_IF_HANDLE __MIDL_itf_Lumia2EImaging2EAdjustments_0000_2006_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_Lumia2EImaging2EAdjustments_0000_2006_v0_0_s_ifspec;

/* interface __MIDL_itf_Lumia2EImaging2EAdjustments_0000_0004 */
/* [local] */ 

#ifndef DEF___FIIterable_1_Lumia__CImaging__CAdjustments__CCurveMinMaxPair_USE
#define DEF___FIIterable_1_Lumia__CImaging__CAdjustments__CCurveMinMaxPair_USE
#if defined(__cplusplus) && !defined(RO_NO_TEMPLATE_NAME)
} /*extern "C"*/ 
namespace ABI { namespace Windows { namespace Foundation { namespace Collections {
template <>
struct __declspec(uuid("840b61d5-0ee8-584f-8ce8-f946bac73d35"))
IIterable<ABI::Lumia::Imaging::Adjustments::CurveMinMaxPair*> : IIterable_impl<ABI::Windows::Foundation::Internal::AggregateType<ABI::Lumia::Imaging::Adjustments::CurveMinMaxPair*, ABI::Lumia::Imaging::Adjustments::ICurveMinMaxPair*>> {
static const wchar_t* z_get_rc_name_impl() {
return L"Windows.Foundation.Collections.IIterable`1<Lumia.Imaging.Adjustments.CurveMinMaxPair>"; }
};
typedef IIterable<ABI::Lumia::Imaging::Adjustments::CurveMinMaxPair*> __FIIterable_1_Lumia__CImaging__CAdjustments__CCurveMinMaxPair_t;
#define ____FIIterable_1_Lumia__CImaging__CAdjustments__CCurveMinMaxPair_FWD_DEFINED__
#define __FIIterable_1_Lumia__CImaging__CAdjustments__CCurveMinMaxPair ABI::Windows::Foundation::Collections::__FIIterable_1_Lumia__CImaging__CAdjustments__CCurveMinMaxPair_t

/* ABI */ } /* Windows */ } /* Foundation */ } /* Collections */ }
extern "C" {
#endif //__cplusplus
#endif /* DEF___FIIterable_1_Lumia__CImaging__CAdjustments__CCurveMinMaxPair_USE */

#ifdef __cplusplus
namespace ABI {
namespace Lumia {
namespace Imaging {
namespace Adjustments {
interface ILensBlurKernel;
} /*Adjustments*/
} /*Imaging*/
} /*Lumia*/
}
#endif


/* interface __MIDL_itf_Lumia2EImaging2EAdjustments_0000_0004 */
/* [local] */ 





extern RPC_IF_HANDLE __MIDL_itf_Lumia2EImaging2EAdjustments_0000_0004_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_Lumia2EImaging2EAdjustments_0000_0004_v0_0_s_ifspec;

/* interface __MIDL_itf_Lumia2EImaging2EAdjustments_0000_2007 */




/* interface __MIDL_itf_Lumia2EImaging2EAdjustments_0000_2007 */




extern RPC_IF_HANDLE __MIDL_itf_Lumia2EImaging2EAdjustments_0000_2007_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_Lumia2EImaging2EAdjustments_0000_2007_v0_0_s_ifspec;

/* interface __MIDL_itf_Lumia2EImaging2EAdjustments_0000_0005 */
/* [local] */ 

#ifndef DEF___FIIterator_1_Lumia__CImaging__CAdjustments__CILensBlurKernel_USE
#define DEF___FIIterator_1_Lumia__CImaging__CAdjustments__CILensBlurKernel_USE
#if defined(__cplusplus) && !defined(RO_NO_TEMPLATE_NAME)
} /*extern "C"*/ 
namespace ABI { namespace Windows { namespace Foundation { namespace Collections {
template <>
struct __declspec(uuid("40c84b28-6bb1-535e-baba-b7e9c00bd290"))
IIterator<ABI::Lumia::Imaging::Adjustments::ILensBlurKernel*> : IIterator_impl<ABI::Lumia::Imaging::Adjustments::ILensBlurKernel*> {
static const wchar_t* z_get_rc_name_impl() {
return L"Windows.Foundation.Collections.IIterator`1<Lumia.Imaging.Adjustments.ILensBlurKernel>"; }
};
typedef IIterator<ABI::Lumia::Imaging::Adjustments::ILensBlurKernel*> __FIIterator_1_Lumia__CImaging__CAdjustments__CILensBlurKernel_t;
#define ____FIIterator_1_Lumia__CImaging__CAdjustments__CILensBlurKernel_FWD_DEFINED__
#define __FIIterator_1_Lumia__CImaging__CAdjustments__CILensBlurKernel ABI::Windows::Foundation::Collections::__FIIterator_1_Lumia__CImaging__CAdjustments__CILensBlurKernel_t

/* ABI */ } /* Windows */ } /* Foundation */ } /* Collections */ }
extern "C" {
#endif //__cplusplus
#endif /* DEF___FIIterator_1_Lumia__CImaging__CAdjustments__CILensBlurKernel_USE */


/* interface __MIDL_itf_Lumia2EImaging2EAdjustments_0000_0005 */
/* [local] */ 




extern RPC_IF_HANDLE __MIDL_itf_Lumia2EImaging2EAdjustments_0000_0005_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_Lumia2EImaging2EAdjustments_0000_0005_v0_0_s_ifspec;

/* interface __MIDL_itf_Lumia2EImaging2EAdjustments_0000_2008 */




/* interface __MIDL_itf_Lumia2EImaging2EAdjustments_0000_2008 */




extern RPC_IF_HANDLE __MIDL_itf_Lumia2EImaging2EAdjustments_0000_2008_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_Lumia2EImaging2EAdjustments_0000_2008_v0_0_s_ifspec;

/* interface __MIDL_itf_Lumia2EImaging2EAdjustments_0000_0006 */
/* [local] */ 

#ifndef DEF___FIIterable_1_Lumia__CImaging__CAdjustments__CILensBlurKernel_USE
#define DEF___FIIterable_1_Lumia__CImaging__CAdjustments__CILensBlurKernel_USE
#if defined(__cplusplus) && !defined(RO_NO_TEMPLATE_NAME)
} /*extern "C"*/ 
namespace ABI { namespace Windows { namespace Foundation { namespace Collections {
template <>
struct __declspec(uuid("99ffbe6e-4fbc-5280-bf1b-e2c459fc6103"))
IIterable<ABI::Lumia::Imaging::Adjustments::ILensBlurKernel*> : IIterable_impl<ABI::Lumia::Imaging::Adjustments::ILensBlurKernel*> {
static const wchar_t* z_get_rc_name_impl() {
return L"Windows.Foundation.Collections.IIterable`1<Lumia.Imaging.Adjustments.ILensBlurKernel>"; }
};
typedef IIterable<ABI::Lumia::Imaging::Adjustments::ILensBlurKernel*> __FIIterable_1_Lumia__CImaging__CAdjustments__CILensBlurKernel_t;
#define ____FIIterable_1_Lumia__CImaging__CAdjustments__CILensBlurKernel_FWD_DEFINED__
#define __FIIterable_1_Lumia__CImaging__CAdjustments__CILensBlurKernel ABI::Windows::Foundation::Collections::__FIIterable_1_Lumia__CImaging__CAdjustments__CILensBlurKernel_t

/* ABI */ } /* Windows */ } /* Foundation */ } /* Collections */ }
extern "C" {
#endif //__cplusplus
#endif /* DEF___FIIterable_1_Lumia__CImaging__CAdjustments__CILensBlurKernel_USE */


/* interface __MIDL_itf_Lumia2EImaging2EAdjustments_0000_0006 */
/* [local] */ 




extern RPC_IF_HANDLE __MIDL_itf_Lumia2EImaging2EAdjustments_0000_0006_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_Lumia2EImaging2EAdjustments_0000_0006_v0_0_s_ifspec;

/* interface __MIDL_itf_Lumia2EImaging2EAdjustments_0000_2009 */




/* interface __MIDL_itf_Lumia2EImaging2EAdjustments_0000_2009 */




extern RPC_IF_HANDLE __MIDL_itf_Lumia2EImaging2EAdjustments_0000_2009_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_Lumia2EImaging2EAdjustments_0000_2009_v0_0_s_ifspec;

/* interface __MIDL_itf_Lumia2EImaging2EAdjustments_0000_0007 */
/* [local] */ 

#ifndef DEF___FIVectorView_1_Lumia__CImaging__CAdjustments__CILensBlurKernel_USE
#define DEF___FIVectorView_1_Lumia__CImaging__CAdjustments__CILensBlurKernel_USE
#if defined(__cplusplus) && !defined(RO_NO_TEMPLATE_NAME)
} /*extern "C"*/ 
namespace ABI { namespace Windows { namespace Foundation { namespace Collections {
template <>
struct __declspec(uuid("498b97aa-416c-57be-87fd-5e697d59b801"))
IVectorView<ABI::Lumia::Imaging::Adjustments::ILensBlurKernel*> : IVectorView_impl<ABI::Lumia::Imaging::Adjustments::ILensBlurKernel*> {
static const wchar_t* z_get_rc_name_impl() {
return L"Windows.Foundation.Collections.IVectorView`1<Lumia.Imaging.Adjustments.ILensBlurKernel>"; }
};
typedef IVectorView<ABI::Lumia::Imaging::Adjustments::ILensBlurKernel*> __FIVectorView_1_Lumia__CImaging__CAdjustments__CILensBlurKernel_t;
#define ____FIVectorView_1_Lumia__CImaging__CAdjustments__CILensBlurKernel_FWD_DEFINED__
#define __FIVectorView_1_Lumia__CImaging__CAdjustments__CILensBlurKernel ABI::Windows::Foundation::Collections::__FIVectorView_1_Lumia__CImaging__CAdjustments__CILensBlurKernel_t

/* ABI */ } /* Windows */ } /* Foundation */ } /* Collections */ }
extern "C" {
#endif //__cplusplus
#endif /* DEF___FIVectorView_1_Lumia__CImaging__CAdjustments__CILensBlurKernel_USE */
#ifdef __cplusplus
namespace ABI {
namespace Lumia {
namespace Imaging {
namespace Adjustments {
class AutoFixAnalyzerResult;
} /*Adjustments*/
} /*Imaging*/
} /*Lumia*/
}
#endif

#ifdef __cplusplus
namespace ABI {
namespace Lumia {
namespace Imaging {
namespace Adjustments {
interface IAutoFixAnalyzerResult;
} /*Adjustments*/
} /*Imaging*/
} /*Lumia*/
}
#endif


/* interface __MIDL_itf_Lumia2EImaging2EAdjustments_0000_0007 */
/* [local] */ 





extern RPC_IF_HANDLE __MIDL_itf_Lumia2EImaging2EAdjustments_0000_0007_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_Lumia2EImaging2EAdjustments_0000_0007_v0_0_s_ifspec;

/* interface __MIDL_itf_Lumia2EImaging2EAdjustments_0000_2010 */




/* interface __MIDL_itf_Lumia2EImaging2EAdjustments_0000_2010 */




extern RPC_IF_HANDLE __MIDL_itf_Lumia2EImaging2EAdjustments_0000_2010_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_Lumia2EImaging2EAdjustments_0000_2010_v0_0_s_ifspec;

/* interface __MIDL_itf_Lumia2EImaging2EAdjustments_0000_0008 */
/* [local] */ 

#ifndef DEF___FIAsyncOperationCompletedHandler_1_Lumia__CImaging__CAdjustments__CAutoFixAnalyzerResult_USE
#define DEF___FIAsyncOperationCompletedHandler_1_Lumia__CImaging__CAdjustments__CAutoFixAnalyzerResult_USE
#if defined(__cplusplus) && !defined(RO_NO_TEMPLATE_NAME)
} /*extern "C"*/ 
namespace ABI { namespace Windows { namespace Foundation {
template <>
struct __declspec(uuid("ca0681fb-2141-5c0f-ae4c-b6abff7d1e3b"))
IAsyncOperationCompletedHandler<ABI::Lumia::Imaging::Adjustments::AutoFixAnalyzerResult*> : IAsyncOperationCompletedHandler_impl<ABI::Windows::Foundation::Internal::AggregateType<ABI::Lumia::Imaging::Adjustments::AutoFixAnalyzerResult*, ABI::Lumia::Imaging::Adjustments::IAutoFixAnalyzerResult*>> {
static const wchar_t* z_get_rc_name_impl() {
return L"Windows.Foundation.AsyncOperationCompletedHandler`1<Lumia.Imaging.Adjustments.AutoFixAnalyzerResult>"; }
};
typedef IAsyncOperationCompletedHandler<ABI::Lumia::Imaging::Adjustments::AutoFixAnalyzerResult*> __FIAsyncOperationCompletedHandler_1_Lumia__CImaging__CAdjustments__CAutoFixAnalyzerResult_t;
#define ____FIAsyncOperationCompletedHandler_1_Lumia__CImaging__CAdjustments__CAutoFixAnalyzerResult_FWD_DEFINED__
#define __FIAsyncOperationCompletedHandler_1_Lumia__CImaging__CAdjustments__CAutoFixAnalyzerResult ABI::Windows::Foundation::__FIAsyncOperationCompletedHandler_1_Lumia__CImaging__CAdjustments__CAutoFixAnalyzerResult_t

/* ABI */ } /* Windows */ } /* Foundation */ }
extern "C" {
#endif //__cplusplus
#endif /* DEF___FIAsyncOperationCompletedHandler_1_Lumia__CImaging__CAdjustments__CAutoFixAnalyzerResult_USE */


/* interface __MIDL_itf_Lumia2EImaging2EAdjustments_0000_0008 */
/* [local] */ 




extern RPC_IF_HANDLE __MIDL_itf_Lumia2EImaging2EAdjustments_0000_0008_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_Lumia2EImaging2EAdjustments_0000_0008_v0_0_s_ifspec;

/* interface __MIDL_itf_Lumia2EImaging2EAdjustments_0000_2011 */




/* interface __MIDL_itf_Lumia2EImaging2EAdjustments_0000_2011 */




extern RPC_IF_HANDLE __MIDL_itf_Lumia2EImaging2EAdjustments_0000_2011_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_Lumia2EImaging2EAdjustments_0000_2011_v0_0_s_ifspec;

/* interface __MIDL_itf_Lumia2EImaging2EAdjustments_0000_0009 */
/* [local] */ 

#ifndef DEF___FIAsyncOperation_1_Lumia__CImaging__CAdjustments__CAutoFixAnalyzerResult_USE
#define DEF___FIAsyncOperation_1_Lumia__CImaging__CAdjustments__CAutoFixAnalyzerResult_USE
#if defined(__cplusplus) && !defined(RO_NO_TEMPLATE_NAME)
} /*extern "C"*/ 
namespace ABI { namespace Windows { namespace Foundation {
template <>
struct __declspec(uuid("136a2931-3934-57fe-84fb-44df8886b65b"))
IAsyncOperation<ABI::Lumia::Imaging::Adjustments::AutoFixAnalyzerResult*> : IAsyncOperation_impl<ABI::Windows::Foundation::Internal::AggregateType<ABI::Lumia::Imaging::Adjustments::AutoFixAnalyzerResult*, ABI::Lumia::Imaging::Adjustments::IAutoFixAnalyzerResult*>> {
static const wchar_t* z_get_rc_name_impl() {
return L"Windows.Foundation.IAsyncOperation`1<Lumia.Imaging.Adjustments.AutoFixAnalyzerResult>"; }
};
typedef IAsyncOperation<ABI::Lumia::Imaging::Adjustments::AutoFixAnalyzerResult*> __FIAsyncOperation_1_Lumia__CImaging__CAdjustments__CAutoFixAnalyzerResult_t;
#define ____FIAsyncOperation_1_Lumia__CImaging__CAdjustments__CAutoFixAnalyzerResult_FWD_DEFINED__
#define __FIAsyncOperation_1_Lumia__CImaging__CAdjustments__CAutoFixAnalyzerResult ABI::Windows::Foundation::__FIAsyncOperation_1_Lumia__CImaging__CAdjustments__CAutoFixAnalyzerResult_t

/* ABI */ } /* Windows */ } /* Foundation */ }
extern "C" {
#endif //__cplusplus
#endif /* DEF___FIAsyncOperation_1_Lumia__CImaging__CAdjustments__CAutoFixAnalyzerResult_USE */


/* interface __MIDL_itf_Lumia2EImaging2EAdjustments_0000_0009 */
/* [local] */ 




extern RPC_IF_HANDLE __MIDL_itf_Lumia2EImaging2EAdjustments_0000_0009_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_Lumia2EImaging2EAdjustments_0000_0009_v0_0_s_ifspec;

/* interface __MIDL_itf_Lumia2EImaging2EAdjustments_0000_2012 */




/* interface __MIDL_itf_Lumia2EImaging2EAdjustments_0000_2012 */




extern RPC_IF_HANDLE __MIDL_itf_Lumia2EImaging2EAdjustments_0000_2012_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_Lumia2EImaging2EAdjustments_0000_2012_v0_0_s_ifspec;

/* interface __MIDL_itf_Lumia2EImaging2EAdjustments_0000_0010 */
/* [local] */ 

#ifndef DEF___FIIterator_1_double_USE
#define DEF___FIIterator_1_double_USE
#if defined(__cplusplus) && !defined(RO_NO_TEMPLATE_NAME)
} /*extern "C"*/ 
namespace ABI { namespace Windows { namespace Foundation { namespace Collections {
template <>
struct __declspec(uuid("638a2cf4-f474-5318-9055-141cb909ac4b"))
IIterator<double> : IIterator_impl<double> {
static const wchar_t* z_get_rc_name_impl() {
return L"Windows.Foundation.Collections.IIterator`1<Double>"; }
};
typedef IIterator<double> __FIIterator_1_double_t;
#define ____FIIterator_1_double_FWD_DEFINED__
#define __FIIterator_1_double ABI::Windows::Foundation::Collections::__FIIterator_1_double_t

/* ABI */ } /* Windows */ } /* Foundation */ } /* Collections */ }
extern "C" {
#endif //__cplusplus
#endif /* DEF___FIIterator_1_double_USE */


/* interface __MIDL_itf_Lumia2EImaging2EAdjustments_0000_0010 */
/* [local] */ 




extern RPC_IF_HANDLE __MIDL_itf_Lumia2EImaging2EAdjustments_0000_0010_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_Lumia2EImaging2EAdjustments_0000_0010_v0_0_s_ifspec;

/* interface __MIDL_itf_Lumia2EImaging2EAdjustments_0000_2013 */




/* interface __MIDL_itf_Lumia2EImaging2EAdjustments_0000_2013 */




extern RPC_IF_HANDLE __MIDL_itf_Lumia2EImaging2EAdjustments_0000_2013_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_Lumia2EImaging2EAdjustments_0000_2013_v0_0_s_ifspec;

/* interface __MIDL_itf_Lumia2EImaging2EAdjustments_0000_0011 */
/* [local] */ 

#ifndef DEF___FIIterable_1_double_USE
#define DEF___FIIterable_1_double_USE
#if defined(__cplusplus) && !defined(RO_NO_TEMPLATE_NAME)
} /*extern "C"*/ 
namespace ABI { namespace Windows { namespace Foundation { namespace Collections {
template <>
struct __declspec(uuid("c738964e-9c64-5bce-b5ce-61e9a282ec4a"))
IIterable<double> : IIterable_impl<double> {
static const wchar_t* z_get_rc_name_impl() {
return L"Windows.Foundation.Collections.IIterable`1<Double>"; }
};
typedef IIterable<double> __FIIterable_1_double_t;
#define ____FIIterable_1_double_FWD_DEFINED__
#define __FIIterable_1_double ABI::Windows::Foundation::Collections::__FIIterable_1_double_t

/* ABI */ } /* Windows */ } /* Foundation */ } /* Collections */ }
extern "C" {
#endif //__cplusplus
#endif /* DEF___FIIterable_1_double_USE */


/* interface __MIDL_itf_Lumia2EImaging2EAdjustments_0000_0011 */
/* [local] */ 




extern RPC_IF_HANDLE __MIDL_itf_Lumia2EImaging2EAdjustments_0000_0011_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_Lumia2EImaging2EAdjustments_0000_0011_v0_0_s_ifspec;

/* interface __MIDL_itf_Lumia2EImaging2EAdjustments_0000_2014 */




/* interface __MIDL_itf_Lumia2EImaging2EAdjustments_0000_2014 */




extern RPC_IF_HANDLE __MIDL_itf_Lumia2EImaging2EAdjustments_0000_2014_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_Lumia2EImaging2EAdjustments_0000_2014_v0_0_s_ifspec;

/* interface __MIDL_itf_Lumia2EImaging2EAdjustments_0000_0012 */
/* [local] */ 

#ifndef DEF___FIVectorView_1_double_USE
#define DEF___FIVectorView_1_double_USE
#if defined(__cplusplus) && !defined(RO_NO_TEMPLATE_NAME)
} /*extern "C"*/ 
namespace ABI { namespace Windows { namespace Foundation { namespace Collections {
template <>
struct __declspec(uuid("af7586a8-6b21-5f61-bff1-1b682293ad96"))
IVectorView<double> : IVectorView_impl<double> {
static const wchar_t* z_get_rc_name_impl() {
return L"Windows.Foundation.Collections.IVectorView`1<Double>"; }
};
typedef IVectorView<double> __FIVectorView_1_double_t;
#define ____FIVectorView_1_double_FWD_DEFINED__
#define __FIVectorView_1_double ABI::Windows::Foundation::Collections::__FIVectorView_1_double_t

/* ABI */ } /* Windows */ } /* Foundation */ } /* Collections */ }
extern "C" {
#endif //__cplusplus
#endif /* DEF___FIVectorView_1_double_USE */


/* interface __MIDL_itf_Lumia2EImaging2EAdjustments_0000_0012 */
/* [local] */ 




extern RPC_IF_HANDLE __MIDL_itf_Lumia2EImaging2EAdjustments_0000_0012_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_Lumia2EImaging2EAdjustments_0000_0012_v0_0_s_ifspec;

/* interface __MIDL_itf_Lumia2EImaging2EAdjustments_0000_2015 */




/* interface __MIDL_itf_Lumia2EImaging2EAdjustments_0000_2015 */




extern RPC_IF_HANDLE __MIDL_itf_Lumia2EImaging2EAdjustments_0000_2015_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_Lumia2EImaging2EAdjustments_0000_2015_v0_0_s_ifspec;

/* interface __MIDL_itf_Lumia2EImaging2EAdjustments_0000_0013 */
/* [local] */ 

#ifndef DEF___FIVector_1_double_USE
#define DEF___FIVector_1_double_USE
#if defined(__cplusplus) && !defined(RO_NO_TEMPLATE_NAME)
} /*extern "C"*/ 
namespace ABI { namespace Windows { namespace Foundation { namespace Collections {
template <>
struct __declspec(uuid("f452d23c-bf05-5f3e-88e7-d17a6716b911"))
IVector<double> : IVector_impl<double> {
static const wchar_t* z_get_rc_name_impl() {
return L"Windows.Foundation.Collections.IVector`1<Double>"; }
};
typedef IVector<double> __FIVector_1_double_t;
#define ____FIVector_1_double_FWD_DEFINED__
#define __FIVector_1_double ABI::Windows::Foundation::Collections::__FIVector_1_double_t

/* ABI */ } /* Windows */ } /* Foundation */ } /* Collections */ }
extern "C" {
#endif //__cplusplus
#endif /* DEF___FIVector_1_double_USE */

#ifdef __cplusplus
namespace ABI {
namespace Windows {
namespace Foundation {
struct Rect;
} /*Foundation*/
} /*Windows*/
}
#endif


/* interface __MIDL_itf_Lumia2EImaging2EAdjustments_0000_0013 */
/* [local] */ 





extern RPC_IF_HANDLE __MIDL_itf_Lumia2EImaging2EAdjustments_0000_0013_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_Lumia2EImaging2EAdjustments_0000_0013_v0_0_s_ifspec;

/* interface __MIDL_itf_Lumia2EImaging2EAdjustments_0000_2016 */




/* interface __MIDL_itf_Lumia2EImaging2EAdjustments_0000_2016 */




extern RPC_IF_HANDLE __MIDL_itf_Lumia2EImaging2EAdjustments_0000_2016_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_Lumia2EImaging2EAdjustments_0000_2016_v0_0_s_ifspec;

/* interface __MIDL_itf_Lumia2EImaging2EAdjustments_0000_0014 */
/* [local] */ 

#ifndef DEF___FIIterator_1_Windows__CFoundation__CRect_USE
#define DEF___FIIterator_1_Windows__CFoundation__CRect_USE
#if defined(__cplusplus) && !defined(RO_NO_TEMPLATE_NAME)
} /*extern "C"*/ 
namespace ABI { namespace Windows { namespace Foundation { namespace Collections {
template <>
struct __declspec(uuid("3487aa9d-505f-550e-874e-5b6194c618eb"))
IIterator<struct ABI::Windows::Foundation::Rect> : IIterator_impl<struct ABI::Windows::Foundation::Rect> {
static const wchar_t* z_get_rc_name_impl() {
return L"Windows.Foundation.Collections.IIterator`1<Windows.Foundation.Rect>"; }
};
typedef IIterator<struct ABI::Windows::Foundation::Rect> __FIIterator_1_Windows__CFoundation__CRect_t;
#define ____FIIterator_1_Windows__CFoundation__CRect_FWD_DEFINED__
#define __FIIterator_1_Windows__CFoundation__CRect ABI::Windows::Foundation::Collections::__FIIterator_1_Windows__CFoundation__CRect_t

/* ABI */ } /* Windows */ } /* Foundation */ } /* Collections */ }
extern "C" {
#endif //__cplusplus
#endif /* DEF___FIIterator_1_Windows__CFoundation__CRect_USE */


/* interface __MIDL_itf_Lumia2EImaging2EAdjustments_0000_0014 */
/* [local] */ 




extern RPC_IF_HANDLE __MIDL_itf_Lumia2EImaging2EAdjustments_0000_0014_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_Lumia2EImaging2EAdjustments_0000_0014_v0_0_s_ifspec;

/* interface __MIDL_itf_Lumia2EImaging2EAdjustments_0000_2017 */




/* interface __MIDL_itf_Lumia2EImaging2EAdjustments_0000_2017 */




extern RPC_IF_HANDLE __MIDL_itf_Lumia2EImaging2EAdjustments_0000_2017_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_Lumia2EImaging2EAdjustments_0000_2017_v0_0_s_ifspec;

/* interface __MIDL_itf_Lumia2EImaging2EAdjustments_0000_0015 */
/* [local] */ 

#ifndef DEF___FIIterable_1_Windows__CFoundation__CRect_USE
#define DEF___FIIterable_1_Windows__CFoundation__CRect_USE
#if defined(__cplusplus) && !defined(RO_NO_TEMPLATE_NAME)
} /*extern "C"*/ 
namespace ABI { namespace Windows { namespace Foundation { namespace Collections {
template <>
struct __declspec(uuid("f7a49934-2bcd-50b0-a10a-750045d95578"))
IIterable<struct ABI::Windows::Foundation::Rect> : IIterable_impl<struct ABI::Windows::Foundation::Rect> {
static const wchar_t* z_get_rc_name_impl() {
return L"Windows.Foundation.Collections.IIterable`1<Windows.Foundation.Rect>"; }
};
typedef IIterable<struct ABI::Windows::Foundation::Rect> __FIIterable_1_Windows__CFoundation__CRect_t;
#define ____FIIterable_1_Windows__CFoundation__CRect_FWD_DEFINED__
#define __FIIterable_1_Windows__CFoundation__CRect ABI::Windows::Foundation::Collections::__FIIterable_1_Windows__CFoundation__CRect_t

/* ABI */ } /* Windows */ } /* Foundation */ } /* Collections */ }
extern "C" {
#endif //__cplusplus
#endif /* DEF___FIIterable_1_Windows__CFoundation__CRect_USE */


/* interface __MIDL_itf_Lumia2EImaging2EAdjustments_0000_0015 */
/* [local] */ 




extern RPC_IF_HANDLE __MIDL_itf_Lumia2EImaging2EAdjustments_0000_0015_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_Lumia2EImaging2EAdjustments_0000_0015_v0_0_s_ifspec;

/* interface __MIDL_itf_Lumia2EImaging2EAdjustments_0000_2018 */




/* interface __MIDL_itf_Lumia2EImaging2EAdjustments_0000_2018 */




extern RPC_IF_HANDLE __MIDL_itf_Lumia2EImaging2EAdjustments_0000_2018_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_Lumia2EImaging2EAdjustments_0000_2018_v0_0_s_ifspec;

/* interface __MIDL_itf_Lumia2EImaging2EAdjustments_0000_0016 */
/* [local] */ 

#ifndef DEF___FIVectorView_1_Windows__CFoundation__CRect_USE
#define DEF___FIVectorView_1_Windows__CFoundation__CRect_USE
#if defined(__cplusplus) && !defined(RO_NO_TEMPLATE_NAME)
} /*extern "C"*/ 
namespace ABI { namespace Windows { namespace Foundation { namespace Collections {
template <>
struct __declspec(uuid("0b651ad6-9755-5be5-8918-6bd61eed3795"))
IVectorView<struct ABI::Windows::Foundation::Rect> : IVectorView_impl<struct ABI::Windows::Foundation::Rect> {
static const wchar_t* z_get_rc_name_impl() {
return L"Windows.Foundation.Collections.IVectorView`1<Windows.Foundation.Rect>"; }
};
typedef IVectorView<struct ABI::Windows::Foundation::Rect> __FIVectorView_1_Windows__CFoundation__CRect_t;
#define ____FIVectorView_1_Windows__CFoundation__CRect_FWD_DEFINED__
#define __FIVectorView_1_Windows__CFoundation__CRect ABI::Windows::Foundation::Collections::__FIVectorView_1_Windows__CFoundation__CRect_t

/* ABI */ } /* Windows */ } /* Foundation */ } /* Collections */ }
extern "C" {
#endif //__cplusplus
#endif /* DEF___FIVectorView_1_Windows__CFoundation__CRect_USE */
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
typedef struct __x_ABI_CLumia_CImaging_CRampedRange __x_ABI_CLumia_CImaging_CRampedRange;

#endif


#if !defined(__cplusplus)
typedef struct __x_ABI_CWindows_CFoundation_CPoint __x_ABI_CWindows_CFoundation_CPoint;

#endif
#if !defined(__cplusplus)
typedef struct __x_ABI_CWindows_CFoundation_CRect __x_ABI_CWindows_CFoundation_CRect;

#endif
#if !defined(__cplusplus)
typedef struct __x_ABI_CWindows_CUI_CColor __x_ABI_CWindows_CUI_CColor;

#endif
#if !defined(__cplusplus)
#if !defined(__cplusplus)

typedef enum __x_ABI_CLumia_CImaging_CAdjustments_CCurveInterpolation __x_ABI_CLumia_CImaging_CAdjustments_CCurveInterpolation;


#endif /* end if !defined(__cplusplus) */


#endif
#if !defined(__cplusplus)
#if !defined(__cplusplus)

typedef enum __x_ABI_CLumia_CImaging_CAdjustments_CWhiteBalanceMode __x_ABI_CLumia_CImaging_CAdjustments_CWhiteBalanceMode;


#endif /* end if !defined(__cplusplus) */


#endif
#if !defined(__cplusplus)
#if !defined(__cplusplus)

typedef enum __x_ABI_CLumia_CImaging_CAdjustments_CBlurRegionShape __x_ABI_CLumia_CImaging_CAdjustments_CBlurRegionShape;


#endif /* end if !defined(__cplusplus) */


#endif
#if !defined(__cplusplus)
#if !defined(__cplusplus)

typedef enum __x_ABI_CLumia_CImaging_CAdjustments_CLensBlurFocusEdgeSofteningMode __x_ABI_CLumia_CImaging_CAdjustments_CLensBlurFocusEdgeSofteningMode;


#endif /* end if !defined(__cplusplus) */


#endif
#if !defined(__cplusplus)
#if !defined(__cplusplus)

typedef enum __x_ABI_CLumia_CImaging_CAdjustments_CDespeckleLevel __x_ABI_CLumia_CImaging_CAdjustments_CDespeckleLevel;


#endif /* end if !defined(__cplusplus) */


#endif
#if !defined(__cplusplus)
#if !defined(__cplusplus)

typedef enum __x_ABI_CLumia_CImaging_CAdjustments_CExposureMode __x_ABI_CLumia_CImaging_CAdjustments_CExposureMode;


#endif /* end if !defined(__cplusplus) */


#endif
#if !defined(__cplusplus)
#if !defined(__cplusplus)

typedef enum __x_ABI_CLumia_CImaging_CAdjustments_CLensBlurPredefinedKernelShape __x_ABI_CLumia_CImaging_CAdjustments_CLensBlurPredefinedKernelShape;


#endif /* end if !defined(__cplusplus) */


#endif
#if !defined(__cplusplus)
#if !defined(__cplusplus)

typedef enum __x_ABI_CLumia_CImaging_CAdjustments_CLensBlurFocusAreaEdgeMirroring __x_ABI_CLumia_CImaging_CAdjustments_CLensBlurFocusAreaEdgeMirroring;


#endif /* end if !defined(__cplusplus) */


#endif
#if !defined(__cplusplus)
#if !defined(__cplusplus)

typedef enum __x_ABI_CLumia_CImaging_CAdjustments_CLensBlurKernelMapType __x_ABI_CLumia_CImaging_CAdjustments_CLensBlurKernelMapType;


#endif /* end if !defined(__cplusplus) */


#endif
#if !defined(__cplusplus)
#if !defined(__cplusplus)

typedef enum __x_ABI_CLumia_CImaging_CAdjustments_CNoiseLevel __x_ABI_CLumia_CImaging_CAdjustments_CNoiseLevel;


#endif /* end if !defined(__cplusplus) */


#endif
#if !defined(__cplusplus)
#if !defined(__cplusplus)

typedef enum __x_ABI_CLumia_CImaging_CAdjustments_CRedEyeRemovalMode __x_ABI_CLumia_CImaging_CAdjustments_CRedEyeRemovalMode;


#endif /* end if !defined(__cplusplus) */


#endif
#if !defined(__cplusplus)
#if !defined(__cplusplus)

typedef enum __x_ABI_CLumia_CImaging_CAdjustments_CWhitePointCalculationMode __x_ABI_CLumia_CImaging_CAdjustments_CWhitePointCalculationMode;


#endif /* end if !defined(__cplusplus) */


#endif
#if !defined(__cplusplus)
#if !defined(__cplusplus)

typedef enum __x_ABI_CLumia_CImaging_CAdjustments_CWhiteboardEnhancementMode __x_ABI_CLumia_CImaging_CAdjustments_CWhiteboardEnhancementMode;


#endif /* end if !defined(__cplusplus) */


#endif
#if !defined(__cplusplus)
typedef struct __x_ABI_CLumia_CImaging_CAdjustments_CLevels __x_ABI_CLumia_CImaging_CAdjustments_CLevels;

#endif



































































#ifdef __cplusplus
namespace ABI {
namespace Lumia {
namespace Imaging {
namespace Adjustments {
class ArgbColorCurves;
} /*Adjustments*/
} /*Imaging*/
} /*Lumia*/
}
#endif
#ifdef __cplusplus
namespace ABI {
namespace Lumia {
namespace Imaging {
namespace Adjustments {
class AutoEnhanceFilter;
} /*Adjustments*/
} /*Imaging*/
} /*Lumia*/
}
#endif
#ifdef __cplusplus
namespace ABI {
namespace Lumia {
namespace Imaging {
namespace Adjustments {
class AutoFixAnalyzer;
} /*Adjustments*/
} /*Imaging*/
} /*Lumia*/
}
#endif
#ifdef __cplusplus
namespace ABI {
namespace Lumia {
namespace Imaging {
namespace Adjustments {
class AutoLevelsFilter;
} /*Adjustments*/
} /*Imaging*/
} /*Lumia*/
}
#endif
#ifdef __cplusplus
namespace ABI {
namespace Lumia {
namespace Imaging {
namespace Adjustments {
class BlurFilter;
} /*Adjustments*/
} /*Imaging*/
} /*Lumia*/
}
#endif
#ifdef __cplusplus
namespace ABI {
namespace Lumia {
namespace Imaging {
namespace Adjustments {
class BrightnessFilter;
} /*Adjustments*/
} /*Imaging*/
} /*Lumia*/
}
#endif
#ifdef __cplusplus
namespace ABI {
namespace Lumia {
namespace Imaging {
namespace Adjustments {
class ColorAdjustFilter;
} /*Adjustments*/
} /*Imaging*/
} /*Lumia*/
}
#endif
#ifdef __cplusplus
namespace ABI {
namespace Lumia {
namespace Imaging {
namespace Adjustments {
class ColorBoostFilter;
} /*Adjustments*/
} /*Imaging*/
} /*Lumia*/
}
#endif
#ifdef __cplusplus
namespace ABI {
namespace Lumia {
namespace Imaging {
namespace Adjustments {
class ColorizationFilter;
} /*Adjustments*/
} /*Imaging*/
} /*Lumia*/
}
#endif
#ifdef __cplusplus
namespace ABI {
namespace Lumia {
namespace Imaging {
namespace Adjustments {
class ContrastFilter;
} /*Adjustments*/
} /*Imaging*/
} /*Lumia*/
}
#endif
#ifdef __cplusplus
namespace ABI {
namespace Lumia {
namespace Imaging {
namespace Adjustments {
class LensBlurFocusEdgeSoftening;
} /*Adjustments*/
} /*Imaging*/
} /*Lumia*/
}
#endif
#ifdef __cplusplus
namespace ABI {
namespace Lumia {
namespace Imaging {
namespace Adjustments {
class CurvesFilter;
} /*Adjustments*/
} /*Imaging*/
} /*Lumia*/
}
#endif
#ifdef __cplusplus
namespace ABI {
namespace Lumia {
namespace Imaging {
namespace Adjustments {
class DespeckleFilter;
} /*Adjustments*/
} /*Imaging*/
} /*Lumia*/
}
#endif
#ifdef __cplusplus
namespace ABI {
namespace Lumia {
namespace Imaging {
namespace Adjustments {
class ExposureFilter;
} /*Adjustments*/
} /*Imaging*/
} /*Lumia*/
}
#endif
#ifdef __cplusplus
namespace ABI {
namespace Lumia {
namespace Imaging {
namespace Adjustments {
class GaussianNoiseFilter;
} /*Adjustments*/
} /*Imaging*/
} /*Lumia*/
}
#endif
#ifdef __cplusplus
namespace ABI {
namespace Lumia {
namespace Imaging {
namespace Adjustments {
class GrayscaleFilter;
} /*Adjustments*/
} /*Imaging*/
} /*Lumia*/
}
#endif
#ifdef __cplusplus
namespace ABI {
namespace Lumia {
namespace Imaging {
namespace Adjustments {
class HdrEffect;
} /*Adjustments*/
} /*Imaging*/
} /*Lumia*/
}
#endif
#ifdef __cplusplus
namespace ABI {
namespace Lumia {
namespace Imaging {
namespace Adjustments {
class HueSaturationFilter;
} /*Adjustments*/
} /*Imaging*/
} /*Lumia*/
}
#endif
#ifdef __cplusplus
namespace ABI {
namespace Lumia {
namespace Imaging {
namespace Adjustments {
class HueSaturationLightnessFilter;
} /*Adjustments*/
} /*Imaging*/
} /*Lumia*/
}
#endif
#ifdef __cplusplus
namespace ABI {
namespace Lumia {
namespace Imaging {
namespace Adjustments {
class LensBlurCustomKernel;
} /*Adjustments*/
} /*Imaging*/
} /*Lumia*/
}
#endif
#ifdef __cplusplus
namespace ABI {
namespace Lumia {
namespace Imaging {
namespace Adjustments {
class LensBlurPredefinedKernel;
} /*Adjustments*/
} /*Imaging*/
} /*Lumia*/
}
#endif
#ifdef __cplusplus
namespace ABI {
namespace Lumia {
namespace Imaging {
namespace Adjustments {
class LensBlurEffect;
} /*Adjustments*/
} /*Imaging*/
} /*Lumia*/
}
#endif
#ifdef __cplusplus
namespace ABI {
namespace Lumia {
namespace Imaging {
namespace Adjustments {
class RgbLevelsFilter;
} /*Adjustments*/
} /*Imaging*/
} /*Lumia*/
}
#endif
#ifdef __cplusplus
namespace ABI {
namespace Lumia {
namespace Imaging {
namespace Adjustments {
class LevelsFilter;
} /*Adjustments*/
} /*Imaging*/
} /*Lumia*/
}
#endif
#ifdef __cplusplus
namespace ABI {
namespace Lumia {
namespace Imaging {
namespace Adjustments {
class LocalBoostAutomaticFilter;
} /*Adjustments*/
} /*Imaging*/
} /*Lumia*/
}
#endif
#ifdef __cplusplus
namespace ABI {
namespace Lumia {
namespace Imaging {
namespace Adjustments {
class LocalBoostFilter;
} /*Adjustments*/
} /*Imaging*/
} /*Lumia*/
}
#endif
#ifdef __cplusplus
namespace ABI {
namespace Lumia {
namespace Imaging {
namespace Adjustments {
class NoiseFilter;
} /*Adjustments*/
} /*Imaging*/
} /*Lumia*/
}
#endif
#ifdef __cplusplus
namespace ABI {
namespace Lumia {
namespace Imaging {
namespace Adjustments {
class RedEyeRemovalFilter;
} /*Adjustments*/
} /*Imaging*/
} /*Lumia*/
}
#endif
#ifdef __cplusplus
namespace ABI {
namespace Lumia {
namespace Imaging {
namespace Adjustments {
class SaturationLightnessFilter;
} /*Adjustments*/
} /*Imaging*/
} /*Lumia*/
}
#endif
#ifdef __cplusplus
namespace ABI {
namespace Lumia {
namespace Imaging {
namespace Adjustments {
class SharpnessFilter;
} /*Adjustments*/
} /*Imaging*/
} /*Lumia*/
}
#endif
#ifdef __cplusplus
namespace ABI {
namespace Lumia {
namespace Imaging {
namespace Adjustments {
class RgbMixerFilter;
} /*Adjustments*/
} /*Imaging*/
} /*Lumia*/
}
#endif
#ifdef __cplusplus
namespace ABI {
namespace Lumia {
namespace Imaging {
namespace Adjustments {
class TemperatureAndTintFilter;
} /*Adjustments*/
} /*Imaging*/
} /*Lumia*/
}
#endif
#ifdef __cplusplus
namespace ABI {
namespace Lumia {
namespace Imaging {
namespace Adjustments {
class VibranceFilter;
} /*Adjustments*/
} /*Imaging*/
} /*Lumia*/
}
#endif
#ifdef __cplusplus
namespace ABI {
namespace Lumia {
namespace Imaging {
namespace Adjustments {
class WhiteBalanceFilter;
} /*Adjustments*/
} /*Imaging*/
} /*Lumia*/
}
#endif
#ifdef __cplusplus
namespace ABI {
namespace Lumia {
namespace Imaging {
namespace Adjustments {
class WhiteboardEnhancementFilter;
} /*Adjustments*/
} /*Imaging*/
} /*Lumia*/
}
#endif


/* interface __MIDL_itf_Lumia2EImaging2EAdjustments_0000_0016 */
/* [local] */ 





#ifdef __cplusplus

} /* end extern "C" */
namespace ABI {
    namespace Lumia {
        namespace Imaging {
            
            typedef struct RampedRange RampedRange;
            
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
            
            typedef struct Point Point;
            
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
            namespace Adjustments {
                
                typedef enum CurveInterpolation CurveInterpolation;
                
            } /* end namespace */
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
            namespace Adjustments {
                
                typedef enum WhiteBalanceMode WhiteBalanceMode;
                
            } /* end namespace */
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
            namespace Adjustments {
                
                typedef enum BlurRegionShape BlurRegionShape;
                
            } /* end namespace */
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
            namespace Adjustments {
                
                typedef enum LensBlurFocusEdgeSofteningMode LensBlurFocusEdgeSofteningMode;
                
            } /* end namespace */
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
            namespace Adjustments {
                
                typedef enum DespeckleLevel DespeckleLevel;
                
            } /* end namespace */
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
            namespace Adjustments {
                
                typedef enum ExposureMode ExposureMode;
                
            } /* end namespace */
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
            namespace Adjustments {
                
                typedef enum LensBlurPredefinedKernelShape LensBlurPredefinedKernelShape;
                
            } /* end namespace */
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
            namespace Adjustments {
                
                typedef enum LensBlurFocusAreaEdgeMirroring LensBlurFocusAreaEdgeMirroring;
                
            } /* end namespace */
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
            namespace Adjustments {
                
                typedef enum LensBlurKernelMapType LensBlurKernelMapType;
                
            } /* end namespace */
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
            namespace Adjustments {
                
                typedef enum NoiseLevel NoiseLevel;
                
            } /* end namespace */
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
            namespace Adjustments {
                
                typedef enum RedEyeRemovalMode RedEyeRemovalMode;
                
            } /* end namespace */
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
            namespace Adjustments {
                
                typedef enum WhitePointCalculationMode WhitePointCalculationMode;
                
            } /* end namespace */
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
            namespace Adjustments {
                
                typedef enum WhiteboardEnhancementMode WhiteboardEnhancementMode;
                
            } /* end namespace */
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
            namespace Adjustments {
                
                typedef struct Levels Levels;
                
            } /* end namespace */
        } /* end namespace */
    } /* end namespace */
} /* end namespace */

extern "C" { 
#endif






































































extern RPC_IF_HANDLE __MIDL_itf_Lumia2EImaging2EAdjustments_0000_0016_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_Lumia2EImaging2EAdjustments_0000_0016_v0_0_s_ifspec;

/* interface __MIDL_itf_Lumia2EImaging2EAdjustments_0000_2019 */




/* interface __MIDL_itf_Lumia2EImaging2EAdjustments_0000_2019 */




extern RPC_IF_HANDLE __MIDL_itf_Lumia2EImaging2EAdjustments_0000_2019_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_Lumia2EImaging2EAdjustments_0000_2019_v0_0_s_ifspec;

/* interface __MIDL_itf_Lumia2EImaging2EAdjustments_0000_0017 */
/* [local] */ 

#ifndef DEF___FIIterator_1_Lumia__CImaging__CAdjustments__CCurve
#define DEF___FIIterator_1_Lumia__CImaging__CAdjustments__CCurve
#if !defined(__cplusplus) || defined(RO_NO_TEMPLATE_NAME)


/* interface __MIDL_itf_Lumia2EImaging2EAdjustments_0000_0017 */
/* [local] */ 



extern RPC_IF_HANDLE __MIDL_itf_Lumia2EImaging2EAdjustments_0000_0017_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_Lumia2EImaging2EAdjustments_0000_0017_v0_0_s_ifspec;

#ifndef ____FIIterator_1_Lumia__CImaging__CAdjustments__CCurve_INTERFACE_DEFINED__
#define ____FIIterator_1_Lumia__CImaging__CAdjustments__CCurve_INTERFACE_DEFINED__

/* interface __FIIterator_1_Lumia__CImaging__CAdjustments__CCurve */
/* [unique][uuid][object] */ 



/* interface __FIIterator_1_Lumia__CImaging__CAdjustments__CCurve */
/* [unique][uuid][object] */ 


EXTERN_C const IID IID___FIIterator_1_Lumia__CImaging__CAdjustments__CCurve;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("183cb1ea-d9dd-533a-91a6-5b1bb1ab46c0")
    __FIIterator_1_Lumia__CImaging__CAdjustments__CCurve : public IInspectable
    {
    public:
        virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_Current( 
            /* [retval][out] */ __RPC__deref_out_opt ABI::Lumia::Imaging::Adjustments::ICurve **current) = 0;
        
        virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_HasCurrent( 
            /* [retval][out] */ __RPC__out boolean *hasCurrent) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE MoveNext( 
            /* [retval][out] */ __RPC__out boolean *hasCurrent) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetMany( 
            /* [in] */ unsigned int capacity,
            /* [size_is][length_is][out] */ __RPC__out_ecount_part(capacity, *actual) ABI::Lumia::Imaging::Adjustments::ICurve **items,
            /* [retval][out] */ __RPC__out unsigned int *actual) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct __FIIterator_1_Lumia__CImaging__CAdjustments__CCurveVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            __RPC__in __FIIterator_1_Lumia__CImaging__CAdjustments__CCurve * This,
            /* [in] */ __RPC__in REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            __RPC__in __FIIterator_1_Lumia__CImaging__CAdjustments__CCurve * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            __RPC__in __FIIterator_1_Lumia__CImaging__CAdjustments__CCurve * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetIids )( 
            __RPC__in __FIIterator_1_Lumia__CImaging__CAdjustments__CCurve * This,
            /* [out] */ __RPC__out ULONG *iidCount,
            /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
        
        HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )( 
            __RPC__in __FIIterator_1_Lumia__CImaging__CAdjustments__CCurve * This,
            /* [out] */ __RPC__deref_out_opt HSTRING *className);
        
        HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )( 
            __RPC__in __FIIterator_1_Lumia__CImaging__CAdjustments__CCurve * This,
            /* [out] */ __RPC__out TrustLevel *trustLevel);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_Current )( 
            __RPC__in __FIIterator_1_Lumia__CImaging__CAdjustments__CCurve * This,
            /* [retval][out] */ __RPC__deref_out_opt __x_ABI_CLumia_CImaging_CAdjustments_CICurve **current);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_HasCurrent )( 
            __RPC__in __FIIterator_1_Lumia__CImaging__CAdjustments__CCurve * This,
            /* [retval][out] */ __RPC__out boolean *hasCurrent);
        
        HRESULT ( STDMETHODCALLTYPE *MoveNext )( 
            __RPC__in __FIIterator_1_Lumia__CImaging__CAdjustments__CCurve * This,
            /* [retval][out] */ __RPC__out boolean *hasCurrent);
        
        HRESULT ( STDMETHODCALLTYPE *GetMany )( 
            __RPC__in __FIIterator_1_Lumia__CImaging__CAdjustments__CCurve * This,
            /* [in] */ unsigned int capacity,
            /* [size_is][length_is][out] */ __RPC__out_ecount_part(capacity, *actual) __x_ABI_CLumia_CImaging_CAdjustments_CICurve **items,
            /* [retval][out] */ __RPC__out unsigned int *actual);
        
        END_INTERFACE
    } __FIIterator_1_Lumia__CImaging__CAdjustments__CCurveVtbl;

    interface __FIIterator_1_Lumia__CImaging__CAdjustments__CCurve
    {
        CONST_VTBL struct __FIIterator_1_Lumia__CImaging__CAdjustments__CCurveVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define __FIIterator_1_Lumia__CImaging__CAdjustments__CCurve_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __FIIterator_1_Lumia__CImaging__CAdjustments__CCurve_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __FIIterator_1_Lumia__CImaging__CAdjustments__CCurve_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __FIIterator_1_Lumia__CImaging__CAdjustments__CCurve_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 

#define __FIIterator_1_Lumia__CImaging__CAdjustments__CCurve_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 

#define __FIIterator_1_Lumia__CImaging__CAdjustments__CCurve_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 


#define __FIIterator_1_Lumia__CImaging__CAdjustments__CCurve_get_Current(This,current)	\
    ( (This)->lpVtbl -> get_Current(This,current) ) 

#define __FIIterator_1_Lumia__CImaging__CAdjustments__CCurve_get_HasCurrent(This,hasCurrent)	\
    ( (This)->lpVtbl -> get_HasCurrent(This,hasCurrent) ) 

#define __FIIterator_1_Lumia__CImaging__CAdjustments__CCurve_MoveNext(This,hasCurrent)	\
    ( (This)->lpVtbl -> MoveNext(This,hasCurrent) ) 

#define __FIIterator_1_Lumia__CImaging__CAdjustments__CCurve_GetMany(This,capacity,items,actual)	\
    ( (This)->lpVtbl -> GetMany(This,capacity,items,actual) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* ____FIIterator_1_Lumia__CImaging__CAdjustments__CCurve_INTERFACE_DEFINED__ */


/* interface __MIDL_itf_Lumia2EImaging2EAdjustments_0000_0018 */
/* [local] */ 

#endif /* pinterface */
#endif /* DEF___FIIterator_1_Lumia__CImaging__CAdjustments__CCurve */


/* interface __MIDL_itf_Lumia2EImaging2EAdjustments_0000_0018 */
/* [local] */ 



extern RPC_IF_HANDLE __MIDL_itf_Lumia2EImaging2EAdjustments_0000_0018_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_Lumia2EImaging2EAdjustments_0000_0018_v0_0_s_ifspec;

/* interface __MIDL_itf_Lumia2EImaging2EAdjustments_0000_2020 */




/* interface __MIDL_itf_Lumia2EImaging2EAdjustments_0000_2020 */




extern RPC_IF_HANDLE __MIDL_itf_Lumia2EImaging2EAdjustments_0000_2020_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_Lumia2EImaging2EAdjustments_0000_2020_v0_0_s_ifspec;

/* interface __MIDL_itf_Lumia2EImaging2EAdjustments_0000_0019 */
/* [local] */ 

#ifndef DEF___FIIterable_1_Lumia__CImaging__CAdjustments__CCurve
#define DEF___FIIterable_1_Lumia__CImaging__CAdjustments__CCurve
#if !defined(__cplusplus) || defined(RO_NO_TEMPLATE_NAME)


/* interface __MIDL_itf_Lumia2EImaging2EAdjustments_0000_0019 */
/* [local] */ 



extern RPC_IF_HANDLE __MIDL_itf_Lumia2EImaging2EAdjustments_0000_0019_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_Lumia2EImaging2EAdjustments_0000_0019_v0_0_s_ifspec;

#ifndef ____FIIterable_1_Lumia__CImaging__CAdjustments__CCurve_INTERFACE_DEFINED__
#define ____FIIterable_1_Lumia__CImaging__CAdjustments__CCurve_INTERFACE_DEFINED__

/* interface __FIIterable_1_Lumia__CImaging__CAdjustments__CCurve */
/* [unique][uuid][object] */ 



/* interface __FIIterable_1_Lumia__CImaging__CAdjustments__CCurve */
/* [unique][uuid][object] */ 


EXTERN_C const IID IID___FIIterable_1_Lumia__CImaging__CAdjustments__CCurve;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("e853ad78-aa1f-56b5-a892-3f7d69069622")
    __FIIterable_1_Lumia__CImaging__CAdjustments__CCurve : public IInspectable
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE First( 
            /* [retval][out] */ __RPC__deref_out_opt __FIIterator_1_Lumia__CImaging__CAdjustments__CCurve **first) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct __FIIterable_1_Lumia__CImaging__CAdjustments__CCurveVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            __RPC__in __FIIterable_1_Lumia__CImaging__CAdjustments__CCurve * This,
            /* [in] */ __RPC__in REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            __RPC__in __FIIterable_1_Lumia__CImaging__CAdjustments__CCurve * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            __RPC__in __FIIterable_1_Lumia__CImaging__CAdjustments__CCurve * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetIids )( 
            __RPC__in __FIIterable_1_Lumia__CImaging__CAdjustments__CCurve * This,
            /* [out] */ __RPC__out ULONG *iidCount,
            /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
        
        HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )( 
            __RPC__in __FIIterable_1_Lumia__CImaging__CAdjustments__CCurve * This,
            /* [out] */ __RPC__deref_out_opt HSTRING *className);
        
        HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )( 
            __RPC__in __FIIterable_1_Lumia__CImaging__CAdjustments__CCurve * This,
            /* [out] */ __RPC__out TrustLevel *trustLevel);
        
        HRESULT ( STDMETHODCALLTYPE *First )( 
            __RPC__in __FIIterable_1_Lumia__CImaging__CAdjustments__CCurve * This,
            /* [retval][out] */ __RPC__deref_out_opt __FIIterator_1_Lumia__CImaging__CAdjustments__CCurve **first);
        
        END_INTERFACE
    } __FIIterable_1_Lumia__CImaging__CAdjustments__CCurveVtbl;

    interface __FIIterable_1_Lumia__CImaging__CAdjustments__CCurve
    {
        CONST_VTBL struct __FIIterable_1_Lumia__CImaging__CAdjustments__CCurveVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define __FIIterable_1_Lumia__CImaging__CAdjustments__CCurve_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __FIIterable_1_Lumia__CImaging__CAdjustments__CCurve_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __FIIterable_1_Lumia__CImaging__CAdjustments__CCurve_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __FIIterable_1_Lumia__CImaging__CAdjustments__CCurve_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 

#define __FIIterable_1_Lumia__CImaging__CAdjustments__CCurve_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 

#define __FIIterable_1_Lumia__CImaging__CAdjustments__CCurve_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 


#define __FIIterable_1_Lumia__CImaging__CAdjustments__CCurve_First(This,first)	\
    ( (This)->lpVtbl -> First(This,first) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* ____FIIterable_1_Lumia__CImaging__CAdjustments__CCurve_INTERFACE_DEFINED__ */


/* interface __MIDL_itf_Lumia2EImaging2EAdjustments_0000_0020 */
/* [local] */ 

#endif /* pinterface */
#endif /* DEF___FIIterable_1_Lumia__CImaging__CAdjustments__CCurve */


/* interface __MIDL_itf_Lumia2EImaging2EAdjustments_0000_0020 */
/* [local] */ 



extern RPC_IF_HANDLE __MIDL_itf_Lumia2EImaging2EAdjustments_0000_0020_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_Lumia2EImaging2EAdjustments_0000_0020_v0_0_s_ifspec;

/* interface __MIDL_itf_Lumia2EImaging2EAdjustments_0000_2021 */




/* interface __MIDL_itf_Lumia2EImaging2EAdjustments_0000_2021 */




extern RPC_IF_HANDLE __MIDL_itf_Lumia2EImaging2EAdjustments_0000_2021_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_Lumia2EImaging2EAdjustments_0000_2021_v0_0_s_ifspec;

/* interface __MIDL_itf_Lumia2EImaging2EAdjustments_0000_0021 */
/* [local] */ 

#ifndef DEF___FIIterator_1_Lumia__CImaging__CAdjustments__CCurveMinMaxPair
#define DEF___FIIterator_1_Lumia__CImaging__CAdjustments__CCurveMinMaxPair
#if !defined(__cplusplus) || defined(RO_NO_TEMPLATE_NAME)


/* interface __MIDL_itf_Lumia2EImaging2EAdjustments_0000_0021 */
/* [local] */ 



extern RPC_IF_HANDLE __MIDL_itf_Lumia2EImaging2EAdjustments_0000_0021_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_Lumia2EImaging2EAdjustments_0000_0021_v0_0_s_ifspec;

#ifndef ____FIIterator_1_Lumia__CImaging__CAdjustments__CCurveMinMaxPair_INTERFACE_DEFINED__
#define ____FIIterator_1_Lumia__CImaging__CAdjustments__CCurveMinMaxPair_INTERFACE_DEFINED__

/* interface __FIIterator_1_Lumia__CImaging__CAdjustments__CCurveMinMaxPair */
/* [unique][uuid][object] */ 



/* interface __FIIterator_1_Lumia__CImaging__CAdjustments__CCurveMinMaxPair */
/* [unique][uuid][object] */ 


EXTERN_C const IID IID___FIIterator_1_Lumia__CImaging__CAdjustments__CCurveMinMaxPair;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("ccb3f9c8-70e8-5202-a9c2-810f9ab347ea")
    __FIIterator_1_Lumia__CImaging__CAdjustments__CCurveMinMaxPair : public IInspectable
    {
    public:
        virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_Current( 
            /* [retval][out] */ __RPC__deref_out_opt ABI::Lumia::Imaging::Adjustments::ICurveMinMaxPair **current) = 0;
        
        virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_HasCurrent( 
            /* [retval][out] */ __RPC__out boolean *hasCurrent) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE MoveNext( 
            /* [retval][out] */ __RPC__out boolean *hasCurrent) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetMany( 
            /* [in] */ unsigned int capacity,
            /* [size_is][length_is][out] */ __RPC__out_ecount_part(capacity, *actual) ABI::Lumia::Imaging::Adjustments::ICurveMinMaxPair **items,
            /* [retval][out] */ __RPC__out unsigned int *actual) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct __FIIterator_1_Lumia__CImaging__CAdjustments__CCurveMinMaxPairVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            __RPC__in __FIIterator_1_Lumia__CImaging__CAdjustments__CCurveMinMaxPair * This,
            /* [in] */ __RPC__in REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            __RPC__in __FIIterator_1_Lumia__CImaging__CAdjustments__CCurveMinMaxPair * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            __RPC__in __FIIterator_1_Lumia__CImaging__CAdjustments__CCurveMinMaxPair * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetIids )( 
            __RPC__in __FIIterator_1_Lumia__CImaging__CAdjustments__CCurveMinMaxPair * This,
            /* [out] */ __RPC__out ULONG *iidCount,
            /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
        
        HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )( 
            __RPC__in __FIIterator_1_Lumia__CImaging__CAdjustments__CCurveMinMaxPair * This,
            /* [out] */ __RPC__deref_out_opt HSTRING *className);
        
        HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )( 
            __RPC__in __FIIterator_1_Lumia__CImaging__CAdjustments__CCurveMinMaxPair * This,
            /* [out] */ __RPC__out TrustLevel *trustLevel);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_Current )( 
            __RPC__in __FIIterator_1_Lumia__CImaging__CAdjustments__CCurveMinMaxPair * This,
            /* [retval][out] */ __RPC__deref_out_opt __x_ABI_CLumia_CImaging_CAdjustments_CICurveMinMaxPair **current);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_HasCurrent )( 
            __RPC__in __FIIterator_1_Lumia__CImaging__CAdjustments__CCurveMinMaxPair * This,
            /* [retval][out] */ __RPC__out boolean *hasCurrent);
        
        HRESULT ( STDMETHODCALLTYPE *MoveNext )( 
            __RPC__in __FIIterator_1_Lumia__CImaging__CAdjustments__CCurveMinMaxPair * This,
            /* [retval][out] */ __RPC__out boolean *hasCurrent);
        
        HRESULT ( STDMETHODCALLTYPE *GetMany )( 
            __RPC__in __FIIterator_1_Lumia__CImaging__CAdjustments__CCurveMinMaxPair * This,
            /* [in] */ unsigned int capacity,
            /* [size_is][length_is][out] */ __RPC__out_ecount_part(capacity, *actual) __x_ABI_CLumia_CImaging_CAdjustments_CICurveMinMaxPair **items,
            /* [retval][out] */ __RPC__out unsigned int *actual);
        
        END_INTERFACE
    } __FIIterator_1_Lumia__CImaging__CAdjustments__CCurveMinMaxPairVtbl;

    interface __FIIterator_1_Lumia__CImaging__CAdjustments__CCurveMinMaxPair
    {
        CONST_VTBL struct __FIIterator_1_Lumia__CImaging__CAdjustments__CCurveMinMaxPairVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define __FIIterator_1_Lumia__CImaging__CAdjustments__CCurveMinMaxPair_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __FIIterator_1_Lumia__CImaging__CAdjustments__CCurveMinMaxPair_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __FIIterator_1_Lumia__CImaging__CAdjustments__CCurveMinMaxPair_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __FIIterator_1_Lumia__CImaging__CAdjustments__CCurveMinMaxPair_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 

#define __FIIterator_1_Lumia__CImaging__CAdjustments__CCurveMinMaxPair_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 

#define __FIIterator_1_Lumia__CImaging__CAdjustments__CCurveMinMaxPair_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 


#define __FIIterator_1_Lumia__CImaging__CAdjustments__CCurveMinMaxPair_get_Current(This,current)	\
    ( (This)->lpVtbl -> get_Current(This,current) ) 

#define __FIIterator_1_Lumia__CImaging__CAdjustments__CCurveMinMaxPair_get_HasCurrent(This,hasCurrent)	\
    ( (This)->lpVtbl -> get_HasCurrent(This,hasCurrent) ) 

#define __FIIterator_1_Lumia__CImaging__CAdjustments__CCurveMinMaxPair_MoveNext(This,hasCurrent)	\
    ( (This)->lpVtbl -> MoveNext(This,hasCurrent) ) 

#define __FIIterator_1_Lumia__CImaging__CAdjustments__CCurveMinMaxPair_GetMany(This,capacity,items,actual)	\
    ( (This)->lpVtbl -> GetMany(This,capacity,items,actual) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* ____FIIterator_1_Lumia__CImaging__CAdjustments__CCurveMinMaxPair_INTERFACE_DEFINED__ */


/* interface __MIDL_itf_Lumia2EImaging2EAdjustments_0000_0022 */
/* [local] */ 

#endif /* pinterface */
#endif /* DEF___FIIterator_1_Lumia__CImaging__CAdjustments__CCurveMinMaxPair */


/* interface __MIDL_itf_Lumia2EImaging2EAdjustments_0000_0022 */
/* [local] */ 



extern RPC_IF_HANDLE __MIDL_itf_Lumia2EImaging2EAdjustments_0000_0022_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_Lumia2EImaging2EAdjustments_0000_0022_v0_0_s_ifspec;

/* interface __MIDL_itf_Lumia2EImaging2EAdjustments_0000_2022 */




/* interface __MIDL_itf_Lumia2EImaging2EAdjustments_0000_2022 */




extern RPC_IF_HANDLE __MIDL_itf_Lumia2EImaging2EAdjustments_0000_2022_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_Lumia2EImaging2EAdjustments_0000_2022_v0_0_s_ifspec;

/* interface __MIDL_itf_Lumia2EImaging2EAdjustments_0000_0023 */
/* [local] */ 

#ifndef DEF___FIIterable_1_Lumia__CImaging__CAdjustments__CCurveMinMaxPair
#define DEF___FIIterable_1_Lumia__CImaging__CAdjustments__CCurveMinMaxPair
#if !defined(__cplusplus) || defined(RO_NO_TEMPLATE_NAME)


/* interface __MIDL_itf_Lumia2EImaging2EAdjustments_0000_0023 */
/* [local] */ 



extern RPC_IF_HANDLE __MIDL_itf_Lumia2EImaging2EAdjustments_0000_0023_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_Lumia2EImaging2EAdjustments_0000_0023_v0_0_s_ifspec;

#ifndef ____FIIterable_1_Lumia__CImaging__CAdjustments__CCurveMinMaxPair_INTERFACE_DEFINED__
#define ____FIIterable_1_Lumia__CImaging__CAdjustments__CCurveMinMaxPair_INTERFACE_DEFINED__

/* interface __FIIterable_1_Lumia__CImaging__CAdjustments__CCurveMinMaxPair */
/* [unique][uuid][object] */ 



/* interface __FIIterable_1_Lumia__CImaging__CAdjustments__CCurveMinMaxPair */
/* [unique][uuid][object] */ 


EXTERN_C const IID IID___FIIterable_1_Lumia__CImaging__CAdjustments__CCurveMinMaxPair;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("840b61d5-0ee8-584f-8ce8-f946bac73d35")
    __FIIterable_1_Lumia__CImaging__CAdjustments__CCurveMinMaxPair : public IInspectable
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE First( 
            /* [retval][out] */ __RPC__deref_out_opt __FIIterator_1_Lumia__CImaging__CAdjustments__CCurveMinMaxPair **first) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct __FIIterable_1_Lumia__CImaging__CAdjustments__CCurveMinMaxPairVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            __RPC__in __FIIterable_1_Lumia__CImaging__CAdjustments__CCurveMinMaxPair * This,
            /* [in] */ __RPC__in REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            __RPC__in __FIIterable_1_Lumia__CImaging__CAdjustments__CCurveMinMaxPair * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            __RPC__in __FIIterable_1_Lumia__CImaging__CAdjustments__CCurveMinMaxPair * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetIids )( 
            __RPC__in __FIIterable_1_Lumia__CImaging__CAdjustments__CCurveMinMaxPair * This,
            /* [out] */ __RPC__out ULONG *iidCount,
            /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
        
        HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )( 
            __RPC__in __FIIterable_1_Lumia__CImaging__CAdjustments__CCurveMinMaxPair * This,
            /* [out] */ __RPC__deref_out_opt HSTRING *className);
        
        HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )( 
            __RPC__in __FIIterable_1_Lumia__CImaging__CAdjustments__CCurveMinMaxPair * This,
            /* [out] */ __RPC__out TrustLevel *trustLevel);
        
        HRESULT ( STDMETHODCALLTYPE *First )( 
            __RPC__in __FIIterable_1_Lumia__CImaging__CAdjustments__CCurveMinMaxPair * This,
            /* [retval][out] */ __RPC__deref_out_opt __FIIterator_1_Lumia__CImaging__CAdjustments__CCurveMinMaxPair **first);
        
        END_INTERFACE
    } __FIIterable_1_Lumia__CImaging__CAdjustments__CCurveMinMaxPairVtbl;

    interface __FIIterable_1_Lumia__CImaging__CAdjustments__CCurveMinMaxPair
    {
        CONST_VTBL struct __FIIterable_1_Lumia__CImaging__CAdjustments__CCurveMinMaxPairVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define __FIIterable_1_Lumia__CImaging__CAdjustments__CCurveMinMaxPair_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __FIIterable_1_Lumia__CImaging__CAdjustments__CCurveMinMaxPair_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __FIIterable_1_Lumia__CImaging__CAdjustments__CCurveMinMaxPair_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __FIIterable_1_Lumia__CImaging__CAdjustments__CCurveMinMaxPair_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 

#define __FIIterable_1_Lumia__CImaging__CAdjustments__CCurveMinMaxPair_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 

#define __FIIterable_1_Lumia__CImaging__CAdjustments__CCurveMinMaxPair_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 


#define __FIIterable_1_Lumia__CImaging__CAdjustments__CCurveMinMaxPair_First(This,first)	\
    ( (This)->lpVtbl -> First(This,first) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* ____FIIterable_1_Lumia__CImaging__CAdjustments__CCurveMinMaxPair_INTERFACE_DEFINED__ */


/* interface __MIDL_itf_Lumia2EImaging2EAdjustments_0000_0024 */
/* [local] */ 

#endif /* pinterface */
#endif /* DEF___FIIterable_1_Lumia__CImaging__CAdjustments__CCurveMinMaxPair */


/* interface __MIDL_itf_Lumia2EImaging2EAdjustments_0000_0024 */
/* [local] */ 



extern RPC_IF_HANDLE __MIDL_itf_Lumia2EImaging2EAdjustments_0000_0024_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_Lumia2EImaging2EAdjustments_0000_0024_v0_0_s_ifspec;

/* interface __MIDL_itf_Lumia2EImaging2EAdjustments_0000_2023 */




/* interface __MIDL_itf_Lumia2EImaging2EAdjustments_0000_2023 */




extern RPC_IF_HANDLE __MIDL_itf_Lumia2EImaging2EAdjustments_0000_2023_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_Lumia2EImaging2EAdjustments_0000_2023_v0_0_s_ifspec;

/* interface __MIDL_itf_Lumia2EImaging2EAdjustments_0000_0025 */
/* [local] */ 

#ifndef DEF___FIIterator_1_Lumia__CImaging__CAdjustments__CILensBlurKernel
#define DEF___FIIterator_1_Lumia__CImaging__CAdjustments__CILensBlurKernel
#if !defined(__cplusplus) || defined(RO_NO_TEMPLATE_NAME)


/* interface __MIDL_itf_Lumia2EImaging2EAdjustments_0000_0025 */
/* [local] */ 



extern RPC_IF_HANDLE __MIDL_itf_Lumia2EImaging2EAdjustments_0000_0025_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_Lumia2EImaging2EAdjustments_0000_0025_v0_0_s_ifspec;

#ifndef ____FIIterator_1_Lumia__CImaging__CAdjustments__CILensBlurKernel_INTERFACE_DEFINED__
#define ____FIIterator_1_Lumia__CImaging__CAdjustments__CILensBlurKernel_INTERFACE_DEFINED__

/* interface __FIIterator_1_Lumia__CImaging__CAdjustments__CILensBlurKernel */
/* [unique][uuid][object] */ 



/* interface __FIIterator_1_Lumia__CImaging__CAdjustments__CILensBlurKernel */
/* [unique][uuid][object] */ 


EXTERN_C const IID IID___FIIterator_1_Lumia__CImaging__CAdjustments__CILensBlurKernel;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("40c84b28-6bb1-535e-baba-b7e9c00bd290")
    __FIIterator_1_Lumia__CImaging__CAdjustments__CILensBlurKernel : public IInspectable
    {
    public:
        virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_Current( 
            /* [retval][out] */ __RPC__deref_out_opt ABI::Lumia::Imaging::Adjustments::ILensBlurKernel **current) = 0;
        
        virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_HasCurrent( 
            /* [retval][out] */ __RPC__out boolean *hasCurrent) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE MoveNext( 
            /* [retval][out] */ __RPC__out boolean *hasCurrent) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetMany( 
            /* [in] */ unsigned int capacity,
            /* [size_is][length_is][out] */ __RPC__out_ecount_part(capacity, *actual) ABI::Lumia::Imaging::Adjustments::ILensBlurKernel **items,
            /* [retval][out] */ __RPC__out unsigned int *actual) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct __FIIterator_1_Lumia__CImaging__CAdjustments__CILensBlurKernelVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            __RPC__in __FIIterator_1_Lumia__CImaging__CAdjustments__CILensBlurKernel * This,
            /* [in] */ __RPC__in REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            __RPC__in __FIIterator_1_Lumia__CImaging__CAdjustments__CILensBlurKernel * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            __RPC__in __FIIterator_1_Lumia__CImaging__CAdjustments__CILensBlurKernel * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetIids )( 
            __RPC__in __FIIterator_1_Lumia__CImaging__CAdjustments__CILensBlurKernel * This,
            /* [out] */ __RPC__out ULONG *iidCount,
            /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
        
        HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )( 
            __RPC__in __FIIterator_1_Lumia__CImaging__CAdjustments__CILensBlurKernel * This,
            /* [out] */ __RPC__deref_out_opt HSTRING *className);
        
        HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )( 
            __RPC__in __FIIterator_1_Lumia__CImaging__CAdjustments__CILensBlurKernel * This,
            /* [out] */ __RPC__out TrustLevel *trustLevel);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_Current )( 
            __RPC__in __FIIterator_1_Lumia__CImaging__CAdjustments__CILensBlurKernel * This,
            /* [retval][out] */ __RPC__deref_out_opt __x_ABI_CLumia_CImaging_CAdjustments_CILensBlurKernel **current);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_HasCurrent )( 
            __RPC__in __FIIterator_1_Lumia__CImaging__CAdjustments__CILensBlurKernel * This,
            /* [retval][out] */ __RPC__out boolean *hasCurrent);
        
        HRESULT ( STDMETHODCALLTYPE *MoveNext )( 
            __RPC__in __FIIterator_1_Lumia__CImaging__CAdjustments__CILensBlurKernel * This,
            /* [retval][out] */ __RPC__out boolean *hasCurrent);
        
        HRESULT ( STDMETHODCALLTYPE *GetMany )( 
            __RPC__in __FIIterator_1_Lumia__CImaging__CAdjustments__CILensBlurKernel * This,
            /* [in] */ unsigned int capacity,
            /* [size_is][length_is][out] */ __RPC__out_ecount_part(capacity, *actual) __x_ABI_CLumia_CImaging_CAdjustments_CILensBlurKernel **items,
            /* [retval][out] */ __RPC__out unsigned int *actual);
        
        END_INTERFACE
    } __FIIterator_1_Lumia__CImaging__CAdjustments__CILensBlurKernelVtbl;

    interface __FIIterator_1_Lumia__CImaging__CAdjustments__CILensBlurKernel
    {
        CONST_VTBL struct __FIIterator_1_Lumia__CImaging__CAdjustments__CILensBlurKernelVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define __FIIterator_1_Lumia__CImaging__CAdjustments__CILensBlurKernel_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __FIIterator_1_Lumia__CImaging__CAdjustments__CILensBlurKernel_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __FIIterator_1_Lumia__CImaging__CAdjustments__CILensBlurKernel_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __FIIterator_1_Lumia__CImaging__CAdjustments__CILensBlurKernel_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 

#define __FIIterator_1_Lumia__CImaging__CAdjustments__CILensBlurKernel_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 

#define __FIIterator_1_Lumia__CImaging__CAdjustments__CILensBlurKernel_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 


#define __FIIterator_1_Lumia__CImaging__CAdjustments__CILensBlurKernel_get_Current(This,current)	\
    ( (This)->lpVtbl -> get_Current(This,current) ) 

#define __FIIterator_1_Lumia__CImaging__CAdjustments__CILensBlurKernel_get_HasCurrent(This,hasCurrent)	\
    ( (This)->lpVtbl -> get_HasCurrent(This,hasCurrent) ) 

#define __FIIterator_1_Lumia__CImaging__CAdjustments__CILensBlurKernel_MoveNext(This,hasCurrent)	\
    ( (This)->lpVtbl -> MoveNext(This,hasCurrent) ) 

#define __FIIterator_1_Lumia__CImaging__CAdjustments__CILensBlurKernel_GetMany(This,capacity,items,actual)	\
    ( (This)->lpVtbl -> GetMany(This,capacity,items,actual) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* ____FIIterator_1_Lumia__CImaging__CAdjustments__CILensBlurKernel_INTERFACE_DEFINED__ */


/* interface __MIDL_itf_Lumia2EImaging2EAdjustments_0000_0026 */
/* [local] */ 

#endif /* pinterface */
#endif /* DEF___FIIterator_1_Lumia__CImaging__CAdjustments__CILensBlurKernel */


/* interface __MIDL_itf_Lumia2EImaging2EAdjustments_0000_0026 */
/* [local] */ 



extern RPC_IF_HANDLE __MIDL_itf_Lumia2EImaging2EAdjustments_0000_0026_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_Lumia2EImaging2EAdjustments_0000_0026_v0_0_s_ifspec;

/* interface __MIDL_itf_Lumia2EImaging2EAdjustments_0000_2024 */




/* interface __MIDL_itf_Lumia2EImaging2EAdjustments_0000_2024 */




extern RPC_IF_HANDLE __MIDL_itf_Lumia2EImaging2EAdjustments_0000_2024_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_Lumia2EImaging2EAdjustments_0000_2024_v0_0_s_ifspec;

/* interface __MIDL_itf_Lumia2EImaging2EAdjustments_0000_0027 */
/* [local] */ 

#ifndef DEF___FIIterable_1_Lumia__CImaging__CAdjustments__CILensBlurKernel
#define DEF___FIIterable_1_Lumia__CImaging__CAdjustments__CILensBlurKernel
#if !defined(__cplusplus) || defined(RO_NO_TEMPLATE_NAME)


/* interface __MIDL_itf_Lumia2EImaging2EAdjustments_0000_0027 */
/* [local] */ 



extern RPC_IF_HANDLE __MIDL_itf_Lumia2EImaging2EAdjustments_0000_0027_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_Lumia2EImaging2EAdjustments_0000_0027_v0_0_s_ifspec;

#ifndef ____FIIterable_1_Lumia__CImaging__CAdjustments__CILensBlurKernel_INTERFACE_DEFINED__
#define ____FIIterable_1_Lumia__CImaging__CAdjustments__CILensBlurKernel_INTERFACE_DEFINED__

/* interface __FIIterable_1_Lumia__CImaging__CAdjustments__CILensBlurKernel */
/* [unique][uuid][object] */ 



/* interface __FIIterable_1_Lumia__CImaging__CAdjustments__CILensBlurKernel */
/* [unique][uuid][object] */ 


EXTERN_C const IID IID___FIIterable_1_Lumia__CImaging__CAdjustments__CILensBlurKernel;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("99ffbe6e-4fbc-5280-bf1b-e2c459fc6103")
    __FIIterable_1_Lumia__CImaging__CAdjustments__CILensBlurKernel : public IInspectable
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE First( 
            /* [retval][out] */ __RPC__deref_out_opt __FIIterator_1_Lumia__CImaging__CAdjustments__CILensBlurKernel **first) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct __FIIterable_1_Lumia__CImaging__CAdjustments__CILensBlurKernelVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            __RPC__in __FIIterable_1_Lumia__CImaging__CAdjustments__CILensBlurKernel * This,
            /* [in] */ __RPC__in REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            __RPC__in __FIIterable_1_Lumia__CImaging__CAdjustments__CILensBlurKernel * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            __RPC__in __FIIterable_1_Lumia__CImaging__CAdjustments__CILensBlurKernel * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetIids )( 
            __RPC__in __FIIterable_1_Lumia__CImaging__CAdjustments__CILensBlurKernel * This,
            /* [out] */ __RPC__out ULONG *iidCount,
            /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
        
        HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )( 
            __RPC__in __FIIterable_1_Lumia__CImaging__CAdjustments__CILensBlurKernel * This,
            /* [out] */ __RPC__deref_out_opt HSTRING *className);
        
        HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )( 
            __RPC__in __FIIterable_1_Lumia__CImaging__CAdjustments__CILensBlurKernel * This,
            /* [out] */ __RPC__out TrustLevel *trustLevel);
        
        HRESULT ( STDMETHODCALLTYPE *First )( 
            __RPC__in __FIIterable_1_Lumia__CImaging__CAdjustments__CILensBlurKernel * This,
            /* [retval][out] */ __RPC__deref_out_opt __FIIterator_1_Lumia__CImaging__CAdjustments__CILensBlurKernel **first);
        
        END_INTERFACE
    } __FIIterable_1_Lumia__CImaging__CAdjustments__CILensBlurKernelVtbl;

    interface __FIIterable_1_Lumia__CImaging__CAdjustments__CILensBlurKernel
    {
        CONST_VTBL struct __FIIterable_1_Lumia__CImaging__CAdjustments__CILensBlurKernelVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define __FIIterable_1_Lumia__CImaging__CAdjustments__CILensBlurKernel_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __FIIterable_1_Lumia__CImaging__CAdjustments__CILensBlurKernel_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __FIIterable_1_Lumia__CImaging__CAdjustments__CILensBlurKernel_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __FIIterable_1_Lumia__CImaging__CAdjustments__CILensBlurKernel_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 

#define __FIIterable_1_Lumia__CImaging__CAdjustments__CILensBlurKernel_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 

#define __FIIterable_1_Lumia__CImaging__CAdjustments__CILensBlurKernel_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 


#define __FIIterable_1_Lumia__CImaging__CAdjustments__CILensBlurKernel_First(This,first)	\
    ( (This)->lpVtbl -> First(This,first) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* ____FIIterable_1_Lumia__CImaging__CAdjustments__CILensBlurKernel_INTERFACE_DEFINED__ */


/* interface __MIDL_itf_Lumia2EImaging2EAdjustments_0000_0028 */
/* [local] */ 

#endif /* pinterface */
#endif /* DEF___FIIterable_1_Lumia__CImaging__CAdjustments__CILensBlurKernel */


/* interface __MIDL_itf_Lumia2EImaging2EAdjustments_0000_0028 */
/* [local] */ 



extern RPC_IF_HANDLE __MIDL_itf_Lumia2EImaging2EAdjustments_0000_0028_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_Lumia2EImaging2EAdjustments_0000_0028_v0_0_s_ifspec;

/* interface __MIDL_itf_Lumia2EImaging2EAdjustments_0000_2025 */




/* interface __MIDL_itf_Lumia2EImaging2EAdjustments_0000_2025 */




extern RPC_IF_HANDLE __MIDL_itf_Lumia2EImaging2EAdjustments_0000_2025_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_Lumia2EImaging2EAdjustments_0000_2025_v0_0_s_ifspec;

/* interface __MIDL_itf_Lumia2EImaging2EAdjustments_0000_0029 */
/* [local] */ 

#ifndef DEF___FIVectorView_1_Lumia__CImaging__CAdjustments__CILensBlurKernel
#define DEF___FIVectorView_1_Lumia__CImaging__CAdjustments__CILensBlurKernel
#if !defined(__cplusplus) || defined(RO_NO_TEMPLATE_NAME)


/* interface __MIDL_itf_Lumia2EImaging2EAdjustments_0000_0029 */
/* [local] */ 



extern RPC_IF_HANDLE __MIDL_itf_Lumia2EImaging2EAdjustments_0000_0029_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_Lumia2EImaging2EAdjustments_0000_0029_v0_0_s_ifspec;

#ifndef ____FIVectorView_1_Lumia__CImaging__CAdjustments__CILensBlurKernel_INTERFACE_DEFINED__
#define ____FIVectorView_1_Lumia__CImaging__CAdjustments__CILensBlurKernel_INTERFACE_DEFINED__

/* interface __FIVectorView_1_Lumia__CImaging__CAdjustments__CILensBlurKernel */
/* [unique][uuid][object] */ 



/* interface __FIVectorView_1_Lumia__CImaging__CAdjustments__CILensBlurKernel */
/* [unique][uuid][object] */ 


EXTERN_C const IID IID___FIVectorView_1_Lumia__CImaging__CAdjustments__CILensBlurKernel;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("498b97aa-416c-57be-87fd-5e697d59b801")
    __FIVectorView_1_Lumia__CImaging__CAdjustments__CILensBlurKernel : public IInspectable
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE GetAt( 
            /* [in] */ unsigned int index,
            /* [retval][out] */ __RPC__deref_out_opt ABI::Lumia::Imaging::Adjustments::ILensBlurKernel **item) = 0;
        
        virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_Size( 
            /* [retval][out] */ __RPC__out unsigned int *size) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE IndexOf( 
            /* [in] */ __RPC__in_opt ABI::Lumia::Imaging::Adjustments::ILensBlurKernel *item,
            /* [out] */ __RPC__out unsigned int *index,
            /* [retval][out] */ __RPC__out boolean *found) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetMany( 
            /* [in] */ unsigned int startIndex,
            /* [in] */ unsigned int capacity,
            /* [size_is][length_is][out] */ __RPC__out_ecount_part(capacity, *actual) ABI::Lumia::Imaging::Adjustments::ILensBlurKernel **items,
            /* [retval][out] */ __RPC__out unsigned int *actual) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct __FIVectorView_1_Lumia__CImaging__CAdjustments__CILensBlurKernelVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            __RPC__in __FIVectorView_1_Lumia__CImaging__CAdjustments__CILensBlurKernel * This,
            /* [in] */ __RPC__in REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            __RPC__in __FIVectorView_1_Lumia__CImaging__CAdjustments__CILensBlurKernel * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            __RPC__in __FIVectorView_1_Lumia__CImaging__CAdjustments__CILensBlurKernel * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetIids )( 
            __RPC__in __FIVectorView_1_Lumia__CImaging__CAdjustments__CILensBlurKernel * This,
            /* [out] */ __RPC__out ULONG *iidCount,
            /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
        
        HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )( 
            __RPC__in __FIVectorView_1_Lumia__CImaging__CAdjustments__CILensBlurKernel * This,
            /* [out] */ __RPC__deref_out_opt HSTRING *className);
        
        HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )( 
            __RPC__in __FIVectorView_1_Lumia__CImaging__CAdjustments__CILensBlurKernel * This,
            /* [out] */ __RPC__out TrustLevel *trustLevel);
        
        HRESULT ( STDMETHODCALLTYPE *GetAt )( 
            __RPC__in __FIVectorView_1_Lumia__CImaging__CAdjustments__CILensBlurKernel * This,
            /* [in] */ unsigned int index,
            /* [retval][out] */ __RPC__deref_out_opt __x_ABI_CLumia_CImaging_CAdjustments_CILensBlurKernel **item);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_Size )( 
            __RPC__in __FIVectorView_1_Lumia__CImaging__CAdjustments__CILensBlurKernel * This,
            /* [retval][out] */ __RPC__out unsigned int *size);
        
        HRESULT ( STDMETHODCALLTYPE *IndexOf )( 
            __RPC__in __FIVectorView_1_Lumia__CImaging__CAdjustments__CILensBlurKernel * This,
            /* [in] */ __RPC__in_opt __x_ABI_CLumia_CImaging_CAdjustments_CILensBlurKernel *item,
            /* [out] */ __RPC__out unsigned int *index,
            /* [retval][out] */ __RPC__out boolean *found);
        
        HRESULT ( STDMETHODCALLTYPE *GetMany )( 
            __RPC__in __FIVectorView_1_Lumia__CImaging__CAdjustments__CILensBlurKernel * This,
            /* [in] */ unsigned int startIndex,
            /* [in] */ unsigned int capacity,
            /* [size_is][length_is][out] */ __RPC__out_ecount_part(capacity, *actual) __x_ABI_CLumia_CImaging_CAdjustments_CILensBlurKernel **items,
            /* [retval][out] */ __RPC__out unsigned int *actual);
        
        END_INTERFACE
    } __FIVectorView_1_Lumia__CImaging__CAdjustments__CILensBlurKernelVtbl;

    interface __FIVectorView_1_Lumia__CImaging__CAdjustments__CILensBlurKernel
    {
        CONST_VTBL struct __FIVectorView_1_Lumia__CImaging__CAdjustments__CILensBlurKernelVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define __FIVectorView_1_Lumia__CImaging__CAdjustments__CILensBlurKernel_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __FIVectorView_1_Lumia__CImaging__CAdjustments__CILensBlurKernel_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __FIVectorView_1_Lumia__CImaging__CAdjustments__CILensBlurKernel_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __FIVectorView_1_Lumia__CImaging__CAdjustments__CILensBlurKernel_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 

#define __FIVectorView_1_Lumia__CImaging__CAdjustments__CILensBlurKernel_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 

#define __FIVectorView_1_Lumia__CImaging__CAdjustments__CILensBlurKernel_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 


#define __FIVectorView_1_Lumia__CImaging__CAdjustments__CILensBlurKernel_GetAt(This,index,item)	\
    ( (This)->lpVtbl -> GetAt(This,index,item) ) 

#define __FIVectorView_1_Lumia__CImaging__CAdjustments__CILensBlurKernel_get_Size(This,size)	\
    ( (This)->lpVtbl -> get_Size(This,size) ) 

#define __FIVectorView_1_Lumia__CImaging__CAdjustments__CILensBlurKernel_IndexOf(This,item,index,found)	\
    ( (This)->lpVtbl -> IndexOf(This,item,index,found) ) 

#define __FIVectorView_1_Lumia__CImaging__CAdjustments__CILensBlurKernel_GetMany(This,startIndex,capacity,items,actual)	\
    ( (This)->lpVtbl -> GetMany(This,startIndex,capacity,items,actual) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* ____FIVectorView_1_Lumia__CImaging__CAdjustments__CILensBlurKernel_INTERFACE_DEFINED__ */


/* interface __MIDL_itf_Lumia2EImaging2EAdjustments_0000_0030 */
/* [local] */ 

#endif /* pinterface */
#endif /* DEF___FIVectorView_1_Lumia__CImaging__CAdjustments__CILensBlurKernel */


/* interface __MIDL_itf_Lumia2EImaging2EAdjustments_0000_0030 */
/* [local] */ 



extern RPC_IF_HANDLE __MIDL_itf_Lumia2EImaging2EAdjustments_0000_0030_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_Lumia2EImaging2EAdjustments_0000_0030_v0_0_s_ifspec;

/* interface __MIDL_itf_Lumia2EImaging2EAdjustments_0000_2026 */




/* interface __MIDL_itf_Lumia2EImaging2EAdjustments_0000_2026 */




extern RPC_IF_HANDLE __MIDL_itf_Lumia2EImaging2EAdjustments_0000_2026_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_Lumia2EImaging2EAdjustments_0000_2026_v0_0_s_ifspec;

/* interface __MIDL_itf_Lumia2EImaging2EAdjustments_0000_0031 */
/* [local] */ 

#ifndef DEF___FIAsyncOperationCompletedHandler_1_Lumia__CImaging__CAdjustments__CAutoFixAnalyzerResult
#define DEF___FIAsyncOperationCompletedHandler_1_Lumia__CImaging__CAdjustments__CAutoFixAnalyzerResult
#if !defined(__cplusplus) || defined(RO_NO_TEMPLATE_NAME)



/* interface __MIDL_itf_Lumia2EImaging2EAdjustments_0000_0031 */
/* [local] */ 




extern RPC_IF_HANDLE __MIDL_itf_Lumia2EImaging2EAdjustments_0000_0031_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_Lumia2EImaging2EAdjustments_0000_0031_v0_0_s_ifspec;

#ifndef ____FIAsyncOperationCompletedHandler_1_Lumia__CImaging__CAdjustments__CAutoFixAnalyzerResult_INTERFACE_DEFINED__
#define ____FIAsyncOperationCompletedHandler_1_Lumia__CImaging__CAdjustments__CAutoFixAnalyzerResult_INTERFACE_DEFINED__

/* interface __FIAsyncOperationCompletedHandler_1_Lumia__CImaging__CAdjustments__CAutoFixAnalyzerResult */
/* [unique][uuid][object] */ 



/* interface __FIAsyncOperationCompletedHandler_1_Lumia__CImaging__CAdjustments__CAutoFixAnalyzerResult */
/* [unique][uuid][object] */ 


EXTERN_C const IID IID___FIAsyncOperationCompletedHandler_1_Lumia__CImaging__CAdjustments__CAutoFixAnalyzerResult;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("ca0681fb-2141-5c0f-ae4c-b6abff7d1e3b")
    __FIAsyncOperationCompletedHandler_1_Lumia__CImaging__CAdjustments__CAutoFixAnalyzerResult : public IUnknown
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE Invoke( 
            /* [in] */ __RPC__in_opt __FIAsyncOperation_1_Lumia__CImaging__CAdjustments__CAutoFixAnalyzerResult *asyncInfo,
            /* [in] */ AsyncStatus status) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct __FIAsyncOperationCompletedHandler_1_Lumia__CImaging__CAdjustments__CAutoFixAnalyzerResultVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            __RPC__in __FIAsyncOperationCompletedHandler_1_Lumia__CImaging__CAdjustments__CAutoFixAnalyzerResult * This,
            /* [in] */ __RPC__in REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            __RPC__in __FIAsyncOperationCompletedHandler_1_Lumia__CImaging__CAdjustments__CAutoFixAnalyzerResult * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            __RPC__in __FIAsyncOperationCompletedHandler_1_Lumia__CImaging__CAdjustments__CAutoFixAnalyzerResult * This);
        
        HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            __RPC__in __FIAsyncOperationCompletedHandler_1_Lumia__CImaging__CAdjustments__CAutoFixAnalyzerResult * This,
            /* [in] */ __RPC__in_opt __FIAsyncOperation_1_Lumia__CImaging__CAdjustments__CAutoFixAnalyzerResult *asyncInfo,
            /* [in] */ AsyncStatus status);
        
        END_INTERFACE
    } __FIAsyncOperationCompletedHandler_1_Lumia__CImaging__CAdjustments__CAutoFixAnalyzerResultVtbl;

    interface __FIAsyncOperationCompletedHandler_1_Lumia__CImaging__CAdjustments__CAutoFixAnalyzerResult
    {
        CONST_VTBL struct __FIAsyncOperationCompletedHandler_1_Lumia__CImaging__CAdjustments__CAutoFixAnalyzerResultVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define __FIAsyncOperationCompletedHandler_1_Lumia__CImaging__CAdjustments__CAutoFixAnalyzerResult_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __FIAsyncOperationCompletedHandler_1_Lumia__CImaging__CAdjustments__CAutoFixAnalyzerResult_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __FIAsyncOperationCompletedHandler_1_Lumia__CImaging__CAdjustments__CAutoFixAnalyzerResult_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __FIAsyncOperationCompletedHandler_1_Lumia__CImaging__CAdjustments__CAutoFixAnalyzerResult_Invoke(This,asyncInfo,status)	\
    ( (This)->lpVtbl -> Invoke(This,asyncInfo,status) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* ____FIAsyncOperationCompletedHandler_1_Lumia__CImaging__CAdjustments__CAutoFixAnalyzerResult_INTERFACE_DEFINED__ */


/* interface __MIDL_itf_Lumia2EImaging2EAdjustments_0000_0032 */
/* [local] */ 

#endif /* pinterface */
#endif /* DEF___FIAsyncOperationCompletedHandler_1_Lumia__CImaging__CAdjustments__CAutoFixAnalyzerResult */


/* interface __MIDL_itf_Lumia2EImaging2EAdjustments_0000_0032 */
/* [local] */ 



extern RPC_IF_HANDLE __MIDL_itf_Lumia2EImaging2EAdjustments_0000_0032_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_Lumia2EImaging2EAdjustments_0000_0032_v0_0_s_ifspec;

/* interface __MIDL_itf_Lumia2EImaging2EAdjustments_0000_2027 */




/* interface __MIDL_itf_Lumia2EImaging2EAdjustments_0000_2027 */




extern RPC_IF_HANDLE __MIDL_itf_Lumia2EImaging2EAdjustments_0000_2027_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_Lumia2EImaging2EAdjustments_0000_2027_v0_0_s_ifspec;

/* interface __MIDL_itf_Lumia2EImaging2EAdjustments_0000_0033 */
/* [local] */ 

#ifndef DEF___FIAsyncOperation_1_Lumia__CImaging__CAdjustments__CAutoFixAnalyzerResult
#define DEF___FIAsyncOperation_1_Lumia__CImaging__CAdjustments__CAutoFixAnalyzerResult
#if !defined(__cplusplus) || defined(RO_NO_TEMPLATE_NAME)


/* interface __MIDL_itf_Lumia2EImaging2EAdjustments_0000_0033 */
/* [local] */ 



extern RPC_IF_HANDLE __MIDL_itf_Lumia2EImaging2EAdjustments_0000_0033_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_Lumia2EImaging2EAdjustments_0000_0033_v0_0_s_ifspec;

#ifndef ____FIAsyncOperation_1_Lumia__CImaging__CAdjustments__CAutoFixAnalyzerResult_INTERFACE_DEFINED__
#define ____FIAsyncOperation_1_Lumia__CImaging__CAdjustments__CAutoFixAnalyzerResult_INTERFACE_DEFINED__

/* interface __FIAsyncOperation_1_Lumia__CImaging__CAdjustments__CAutoFixAnalyzerResult */
/* [unique][uuid][object] */ 



/* interface __FIAsyncOperation_1_Lumia__CImaging__CAdjustments__CAutoFixAnalyzerResult */
/* [unique][uuid][object] */ 


EXTERN_C const IID IID___FIAsyncOperation_1_Lumia__CImaging__CAdjustments__CAutoFixAnalyzerResult;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("136a2931-3934-57fe-84fb-44df8886b65b")
    __FIAsyncOperation_1_Lumia__CImaging__CAdjustments__CAutoFixAnalyzerResult : public IInspectable
    {
    public:
        virtual /* [propput] */ HRESULT STDMETHODCALLTYPE put_Completed( 
            /* [in] */ __RPC__in_opt __FIAsyncOperationCompletedHandler_1_Lumia__CImaging__CAdjustments__CAutoFixAnalyzerResult *handler) = 0;
        
        virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_Completed( 
            /* [retval][out] */ __RPC__deref_out_opt __FIAsyncOperationCompletedHandler_1_Lumia__CImaging__CAdjustments__CAutoFixAnalyzerResult **handler) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetResults( 
            /* [retval][out] */ __RPC__deref_out_opt ABI::Lumia::Imaging::Adjustments::IAutoFixAnalyzerResult **results) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct __FIAsyncOperation_1_Lumia__CImaging__CAdjustments__CAutoFixAnalyzerResultVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            __RPC__in __FIAsyncOperation_1_Lumia__CImaging__CAdjustments__CAutoFixAnalyzerResult * This,
            /* [in] */ __RPC__in REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            __RPC__in __FIAsyncOperation_1_Lumia__CImaging__CAdjustments__CAutoFixAnalyzerResult * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            __RPC__in __FIAsyncOperation_1_Lumia__CImaging__CAdjustments__CAutoFixAnalyzerResult * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetIids )( 
            __RPC__in __FIAsyncOperation_1_Lumia__CImaging__CAdjustments__CAutoFixAnalyzerResult * This,
            /* [out] */ __RPC__out ULONG *iidCount,
            /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
        
        HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )( 
            __RPC__in __FIAsyncOperation_1_Lumia__CImaging__CAdjustments__CAutoFixAnalyzerResult * This,
            /* [out] */ __RPC__deref_out_opt HSTRING *className);
        
        HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )( 
            __RPC__in __FIAsyncOperation_1_Lumia__CImaging__CAdjustments__CAutoFixAnalyzerResult * This,
            /* [out] */ __RPC__out TrustLevel *trustLevel);
        
        /* [propput] */ HRESULT ( STDMETHODCALLTYPE *put_Completed )( 
            __RPC__in __FIAsyncOperation_1_Lumia__CImaging__CAdjustments__CAutoFixAnalyzerResult * This,
            /* [in] */ __RPC__in_opt __FIAsyncOperationCompletedHandler_1_Lumia__CImaging__CAdjustments__CAutoFixAnalyzerResult *handler);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_Completed )( 
            __RPC__in __FIAsyncOperation_1_Lumia__CImaging__CAdjustments__CAutoFixAnalyzerResult * This,
            /* [retval][out] */ __RPC__deref_out_opt __FIAsyncOperationCompletedHandler_1_Lumia__CImaging__CAdjustments__CAutoFixAnalyzerResult **handler);
        
        HRESULT ( STDMETHODCALLTYPE *GetResults )( 
            __RPC__in __FIAsyncOperation_1_Lumia__CImaging__CAdjustments__CAutoFixAnalyzerResult * This,
            /* [retval][out] */ __RPC__deref_out_opt __x_ABI_CLumia_CImaging_CAdjustments_CIAutoFixAnalyzerResult **results);
        
        END_INTERFACE
    } __FIAsyncOperation_1_Lumia__CImaging__CAdjustments__CAutoFixAnalyzerResultVtbl;

    interface __FIAsyncOperation_1_Lumia__CImaging__CAdjustments__CAutoFixAnalyzerResult
    {
        CONST_VTBL struct __FIAsyncOperation_1_Lumia__CImaging__CAdjustments__CAutoFixAnalyzerResultVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define __FIAsyncOperation_1_Lumia__CImaging__CAdjustments__CAutoFixAnalyzerResult_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __FIAsyncOperation_1_Lumia__CImaging__CAdjustments__CAutoFixAnalyzerResult_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __FIAsyncOperation_1_Lumia__CImaging__CAdjustments__CAutoFixAnalyzerResult_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __FIAsyncOperation_1_Lumia__CImaging__CAdjustments__CAutoFixAnalyzerResult_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 

#define __FIAsyncOperation_1_Lumia__CImaging__CAdjustments__CAutoFixAnalyzerResult_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 

#define __FIAsyncOperation_1_Lumia__CImaging__CAdjustments__CAutoFixAnalyzerResult_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 


#define __FIAsyncOperation_1_Lumia__CImaging__CAdjustments__CAutoFixAnalyzerResult_put_Completed(This,handler)	\
    ( (This)->lpVtbl -> put_Completed(This,handler) ) 

#define __FIAsyncOperation_1_Lumia__CImaging__CAdjustments__CAutoFixAnalyzerResult_get_Completed(This,handler)	\
    ( (This)->lpVtbl -> get_Completed(This,handler) ) 

#define __FIAsyncOperation_1_Lumia__CImaging__CAdjustments__CAutoFixAnalyzerResult_GetResults(This,results)	\
    ( (This)->lpVtbl -> GetResults(This,results) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* ____FIAsyncOperation_1_Lumia__CImaging__CAdjustments__CAutoFixAnalyzerResult_INTERFACE_DEFINED__ */


/* interface __MIDL_itf_Lumia2EImaging2EAdjustments_0000_0034 */
/* [local] */ 

#endif /* pinterface */
#endif /* DEF___FIAsyncOperation_1_Lumia__CImaging__CAdjustments__CAutoFixAnalyzerResult */
#if !defined(__cplusplus)

#if !defined(__cplusplus)
/* [v1_enum] */ 
enum __x_ABI_CLumia_CImaging_CAdjustments_CCurveInterpolation
    {
        CurveInterpolation_Linear	= 0,
        CurveInterpolation_NaturalCubicSpline	= 1
    } ;
#endif /* end if !defined(__cplusplus) */

#endif
#if !defined(__cplusplus)

#if !defined(__cplusplus)
/* [v1_enum] */ 
enum __x_ABI_CLumia_CImaging_CAdjustments_CWhiteBalanceMode
    {
        WhiteBalanceMode_Off	= 0,
        WhiteBalanceMode_Automatic	= 1,
        WhiteBalanceMode_Manual	= 2
    } ;
#endif /* end if !defined(__cplusplus) */

#endif
#if !defined(__cplusplus)

#if !defined(__cplusplus)
/* [v1_enum] */ 
enum __x_ABI_CLumia_CImaging_CAdjustments_CBlurRegionShape
    {
        BlurRegionShape_Rectangular	= 0,
        BlurRegionShape_Elliptical	= 1
    } ;
#endif /* end if !defined(__cplusplus) */

#endif
#if !defined(__cplusplus)

#if !defined(__cplusplus)
/* [v1_enum] */ 
enum __x_ABI_CLumia_CImaging_CAdjustments_CLensBlurFocusEdgeSofteningMode
    {
        LensBlurFocusEdgeSofteningMode_Medium	= 0,
        LensBlurFocusEdgeSofteningMode_Low	= 1,
        LensBlurFocusEdgeSofteningMode_High	= 2,
        LensBlurFocusEdgeSofteningMode_None	= 3
    } ;
#endif /* end if !defined(__cplusplus) */

#endif
#if !defined(__cplusplus)

#if !defined(__cplusplus)
/* [v1_enum] */ 
enum __x_ABI_CLumia_CImaging_CAdjustments_CDespeckleLevel
    {
        DespeckleLevel_Minimum	= 0,
        DespeckleLevel_Low	= 1,
        DespeckleLevel_High	= 2,
        DespeckleLevel_Maximum	= 3
    } ;
#endif /* end if !defined(__cplusplus) */

#endif
#if !defined(__cplusplus)

#if !defined(__cplusplus)
/* [v1_enum] */ 
enum __x_ABI_CLumia_CImaging_CAdjustments_CExposureMode
    {
        ExposureMode_Natural	= 0,
        ExposureMode_Gamma	= 1
    } ;
#endif /* end if !defined(__cplusplus) */

#endif
#if !defined(__cplusplus)

#if !defined(__cplusplus)
/* [v1_enum] */ 
enum __x_ABI_CLumia_CImaging_CAdjustments_CLensBlurPredefinedKernelShape
    {
        LensBlurPredefinedKernelShape_Circle	= 0,
        LensBlurPredefinedKernelShape_Hexagon	= 1,
        LensBlurPredefinedKernelShape_Flower	= 2,
        LensBlurPredefinedKernelShape_Star	= 3,
        LensBlurPredefinedKernelShape_Heart	= 4
    } ;
#endif /* end if !defined(__cplusplus) */

#endif
#if !defined(__cplusplus)

#if !defined(__cplusplus)
/* [v1_enum] */ 
enum __x_ABI_CLumia_CImaging_CAdjustments_CLensBlurFocusAreaEdgeMirroring
    {
        LensBlurFocusAreaEdgeMirroring_On	= 0,
        LensBlurFocusAreaEdgeMirroring_Off	= 1
    } ;
#endif /* end if !defined(__cplusplus) */

#endif
#if !defined(__cplusplus)

#if !defined(__cplusplus)
/* [v1_enum] */ 
enum __x_ABI_CLumia_CImaging_CAdjustments_CLensBlurKernelMapType
    {
        LensBlurKernelMapType_ForegroundMask	= 0,
        LensBlurKernelMapType_Continuous	= 1
    } ;
#endif /* end if !defined(__cplusplus) */

#endif
#if !defined(__cplusplus)

#if !defined(__cplusplus)
/* [v1_enum] */ 
enum __x_ABI_CLumia_CImaging_CAdjustments_CNoiseLevel
    {
        NoiseLevel_Minimum	= 0,
        NoiseLevel_Medium	= 1,
        NoiseLevel_Maximum	= 2
    } ;
#endif /* end if !defined(__cplusplus) */

#endif
#if !defined(__cplusplus)

#if !defined(__cplusplus)
/* [v1_enum] */ 
enum __x_ABI_CLumia_CImaging_CAdjustments_CRedEyeRemovalMode
    {
        RedEyeRemovalMode_Normal	= 0,
        RedEyeRemovalMode_Highlight	= 1,
        RedEyeRemovalMode_ReplaceRedWithGreenBlueDark	= 2,
        RedEyeRemovalMode_RestrictRedWithGreenBlueDark	= 3,
        RedEyeRemovalMode_ReplaceRedWithGreenBlue	= 4,
        RedEyeRemovalMode_RestrictRedWithGreenBlue	= 5
    } ;
#endif /* end if !defined(__cplusplus) */

#endif
#if !defined(__cplusplus)

#if !defined(__cplusplus)
/* [v1_enum] */ 
enum __x_ABI_CLumia_CImaging_CAdjustments_CWhitePointCalculationMode
    {
        WhitePointCalculationMode_Cluster	= 0,
        WhitePointCalculationMode_Mean	= 1,
        WhitePointCalculationMode_Maximum	= 2,
        WhitePointCalculationMode_Manual	= 3
    } ;
#endif /* end if !defined(__cplusplus) */

#endif
#if !defined(__cplusplus)

#if !defined(__cplusplus)
/* [v1_enum] */ 
enum __x_ABI_CLumia_CImaging_CAdjustments_CWhiteboardEnhancementMode
    {
        WhiteboardEnhancementMode_Hard	= 0,
        WhiteboardEnhancementMode_Soft	= 1
    } ;
#endif /* end if !defined(__cplusplus) */

#endif
#if !defined(__cplusplus)
struct __x_ABI_CLumia_CImaging_CAdjustments_CLevels
    {
    INT32 Min;
    INT32 Max;
    DOUBLE MidTone;
    } ;
#endif
#if !defined(____x_ABI_CLumia_CImaging_CAdjustments_CICurveMinMaxPair_INTERFACE_DEFINED__)
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Lumia_Imaging_Adjustments_ICurveMinMaxPair[] = L"Lumia.Imaging.Adjustments.ICurveMinMaxPair";
#endif /* !defined(____x_ABI_CLumia_CImaging_CAdjustments_CICurveMinMaxPair_INTERFACE_DEFINED__) */


/* interface __MIDL_itf_Lumia2EImaging2EAdjustments_0000_0034 */
/* [local] */ 

#ifdef __cplusplus
} /* end extern "C" */
namespace ABI {
    namespace Lumia {
        namespace Imaging {
            namespace Adjustments {
                
                /* [v1_enum] */ 
                enum CurveInterpolation
                    {
                        CurveInterpolation_Linear	= 0,
                        CurveInterpolation_NaturalCubicSpline	= 1
                    } ;
            } /* end namespace */
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
            namespace Adjustments {
                
                /* [v1_enum] */ 
                enum WhiteBalanceMode
                    {
                        WhiteBalanceMode_Off	= 0,
                        WhiteBalanceMode_Automatic	= 1,
                        WhiteBalanceMode_Manual	= 2
                    } ;
            } /* end namespace */
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
            namespace Adjustments {
                
                /* [v1_enum] */ 
                enum BlurRegionShape
                    {
                        BlurRegionShape_Rectangular	= 0,
                        BlurRegionShape_Elliptical	= 1
                    } ;
            } /* end namespace */
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
            namespace Adjustments {
                
                /* [v1_enum] */ 
                enum LensBlurFocusEdgeSofteningMode
                    {
                        LensBlurFocusEdgeSofteningMode_Medium	= 0,
                        LensBlurFocusEdgeSofteningMode_Low	= 1,
                        LensBlurFocusEdgeSofteningMode_High	= 2,
                        LensBlurFocusEdgeSofteningMode_None	= 3
                    } ;
            } /* end namespace */
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
            namespace Adjustments {
                
                /* [v1_enum] */ 
                enum DespeckleLevel
                    {
                        DespeckleLevel_Minimum	= 0,
                        DespeckleLevel_Low	= 1,
                        DespeckleLevel_High	= 2,
                        DespeckleLevel_Maximum	= 3
                    } ;
            } /* end namespace */
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
            namespace Adjustments {
                
                /* [v1_enum] */ 
                enum ExposureMode
                    {
                        ExposureMode_Natural	= 0,
                        ExposureMode_Gamma	= 1
                    } ;
            } /* end namespace */
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
            namespace Adjustments {
                
                /* [v1_enum] */ 
                enum LensBlurPredefinedKernelShape
                    {
                        LensBlurPredefinedKernelShape_Circle	= 0,
                        LensBlurPredefinedKernelShape_Hexagon	= 1,
                        LensBlurPredefinedKernelShape_Flower	= 2,
                        LensBlurPredefinedKernelShape_Star	= 3,
                        LensBlurPredefinedKernelShape_Heart	= 4
                    } ;
            } /* end namespace */
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
            namespace Adjustments {
                
                /* [v1_enum] */ 
                enum LensBlurFocusAreaEdgeMirroring
                    {
                        LensBlurFocusAreaEdgeMirroring_On	= 0,
                        LensBlurFocusAreaEdgeMirroring_Off	= 1
                    } ;
            } /* end namespace */
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
            namespace Adjustments {
                
                /* [v1_enum] */ 
                enum LensBlurKernelMapType
                    {
                        LensBlurKernelMapType_ForegroundMask	= 0,
                        LensBlurKernelMapType_Continuous	= 1
                    } ;
            } /* end namespace */
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
            namespace Adjustments {
                
                /* [v1_enum] */ 
                enum NoiseLevel
                    {
                        NoiseLevel_Minimum	= 0,
                        NoiseLevel_Medium	= 1,
                        NoiseLevel_Maximum	= 2
                    } ;
            } /* end namespace */
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
            namespace Adjustments {
                
                /* [v1_enum] */ 
                enum RedEyeRemovalMode
                    {
                        RedEyeRemovalMode_Normal	= 0,
                        RedEyeRemovalMode_Highlight	= 1,
                        RedEyeRemovalMode_ReplaceRedWithGreenBlueDark	= 2,
                        RedEyeRemovalMode_RestrictRedWithGreenBlueDark	= 3,
                        RedEyeRemovalMode_ReplaceRedWithGreenBlue	= 4,
                        RedEyeRemovalMode_RestrictRedWithGreenBlue	= 5
                    } ;
            } /* end namespace */
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
            namespace Adjustments {
                
                /* [v1_enum] */ 
                enum WhitePointCalculationMode
                    {
                        WhitePointCalculationMode_Cluster	= 0,
                        WhitePointCalculationMode_Mean	= 1,
                        WhitePointCalculationMode_Maximum	= 2,
                        WhitePointCalculationMode_Manual	= 3
                    } ;
            } /* end namespace */
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
            namespace Adjustments {
                
                /* [v1_enum] */ 
                enum WhiteboardEnhancementMode
                    {
                        WhiteboardEnhancementMode_Hard	= 0,
                        WhiteboardEnhancementMode_Soft	= 1
                    } ;
            } /* end namespace */
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
            namespace Adjustments {
                
                struct Levels
                    {
                    INT32 Min;
                    INT32 Max;
                    DOUBLE MidTone;
                    } ;
            } /* end namespace */
        } /* end namespace */
    } /* end namespace */
} /* end namespace */

extern "C" { 
#endif



extern RPC_IF_HANDLE __MIDL_itf_Lumia2EImaging2EAdjustments_0000_0034_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_Lumia2EImaging2EAdjustments_0000_0034_v0_0_s_ifspec;

#ifndef ____x_ABI_CLumia_CImaging_CAdjustments_CICurveMinMaxPair_INTERFACE_DEFINED__
#define ____x_ABI_CLumia_CImaging_CAdjustments_CICurveMinMaxPair_INTERFACE_DEFINED__

/* interface __x_ABI_CLumia_CImaging_CAdjustments_CICurveMinMaxPair */
/* [uuid][object] */ 



/* interface ABI::Lumia::Imaging::Adjustments::ICurveMinMaxPair */
/* [uuid][object] */ 


EXTERN_C const IID IID___x_ABI_CLumia_CImaging_CAdjustments_CICurveMinMaxPair;

#if defined(__cplusplus) && !defined(CINTERFACE)
    } /* end extern "C" */
    namespace ABI {
        namespace Lumia {
            namespace Imaging {
                namespace Adjustments {
                    
                    MIDL_INTERFACE("C5D4BC98-7A85-3D39-9065-BDEA26E24F7F")
                    ICurveMinMaxPair : public IInspectable
                    {
                    public:
                        virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_MinCurve( 
                            /* [out][retval] */ __RPC__deref_out_opt ABI::Lumia::Imaging::Adjustments::ICurve **__returnValue) = 0;
                        
                        virtual /* [propput] */ HRESULT STDMETHODCALLTYPE put_MinCurve( 
                            /* [in] */ __RPC__in_opt ABI::Lumia::Imaging::Adjustments::ICurve *__set_formal) = 0;
                        
                        virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_MaxCurve( 
                            /* [out][retval] */ __RPC__deref_out_opt ABI::Lumia::Imaging::Adjustments::ICurve **__returnValue) = 0;
                        
                        virtual /* [propput] */ HRESULT STDMETHODCALLTYPE put_MaxCurve( 
                            /* [in] */ __RPC__in_opt ABI::Lumia::Imaging::Adjustments::ICurve *__set_formal) = 0;
                        
                    };

                    extern const __declspec(selectany) IID & IID_ICurveMinMaxPair = __uuidof(ICurveMinMaxPair);

                    
                }  /* end namespace */
            }  /* end namespace */
        }  /* end namespace */
    }  /* end namespace */
    extern "C" { 
    
#else 	/* C style interface */

    typedef struct __x_ABI_CLumia_CImaging_CAdjustments_CICurveMinMaxPairVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            __RPC__in __x_ABI_CLumia_CImaging_CAdjustments_CICurveMinMaxPair * This,
            /* [in] */ __RPC__in REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            __RPC__in __x_ABI_CLumia_CImaging_CAdjustments_CICurveMinMaxPair * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            __RPC__in __x_ABI_CLumia_CImaging_CAdjustments_CICurveMinMaxPair * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetIids )( 
            __RPC__in __x_ABI_CLumia_CImaging_CAdjustments_CICurveMinMaxPair * This,
            /* [out] */ __RPC__out ULONG *iidCount,
            /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
        
        HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )( 
            __RPC__in __x_ABI_CLumia_CImaging_CAdjustments_CICurveMinMaxPair * This,
            /* [out] */ __RPC__deref_out_opt HSTRING *className);
        
        HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )( 
            __RPC__in __x_ABI_CLumia_CImaging_CAdjustments_CICurveMinMaxPair * This,
            /* [out] */ __RPC__out TrustLevel *trustLevel);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_MinCurve )( 
            __RPC__in __x_ABI_CLumia_CImaging_CAdjustments_CICurveMinMaxPair * This,
            /* [out][retval] */ __RPC__deref_out_opt __x_ABI_CLumia_CImaging_CAdjustments_CICurve **__returnValue);
        
        /* [propput] */ HRESULT ( STDMETHODCALLTYPE *put_MinCurve )( 
            __RPC__in __x_ABI_CLumia_CImaging_CAdjustments_CICurveMinMaxPair * This,
            /* [in] */ __RPC__in_opt __x_ABI_CLumia_CImaging_CAdjustments_CICurve *__set_formal);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_MaxCurve )( 
            __RPC__in __x_ABI_CLumia_CImaging_CAdjustments_CICurveMinMaxPair * This,
            /* [out][retval] */ __RPC__deref_out_opt __x_ABI_CLumia_CImaging_CAdjustments_CICurve **__returnValue);
        
        /* [propput] */ HRESULT ( STDMETHODCALLTYPE *put_MaxCurve )( 
            __RPC__in __x_ABI_CLumia_CImaging_CAdjustments_CICurveMinMaxPair * This,
            /* [in] */ __RPC__in_opt __x_ABI_CLumia_CImaging_CAdjustments_CICurve *__set_formal);
        
        END_INTERFACE
    } __x_ABI_CLumia_CImaging_CAdjustments_CICurveMinMaxPairVtbl;

    interface __x_ABI_CLumia_CImaging_CAdjustments_CICurveMinMaxPair
    {
        CONST_VTBL struct __x_ABI_CLumia_CImaging_CAdjustments_CICurveMinMaxPairVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define __x_ABI_CLumia_CImaging_CAdjustments_CICurveMinMaxPair_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __x_ABI_CLumia_CImaging_CAdjustments_CICurveMinMaxPair_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __x_ABI_CLumia_CImaging_CAdjustments_CICurveMinMaxPair_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __x_ABI_CLumia_CImaging_CAdjustments_CICurveMinMaxPair_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 

#define __x_ABI_CLumia_CImaging_CAdjustments_CICurveMinMaxPair_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 

#define __x_ABI_CLumia_CImaging_CAdjustments_CICurveMinMaxPair_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 


#define __x_ABI_CLumia_CImaging_CAdjustments_CICurveMinMaxPair_get_MinCurve(This,__returnValue)	\
    ( (This)->lpVtbl -> get_MinCurve(This,__returnValue) ) 

#define __x_ABI_CLumia_CImaging_CAdjustments_CICurveMinMaxPair_put_MinCurve(This,__set_formal)	\
    ( (This)->lpVtbl -> put_MinCurve(This,__set_formal) ) 

#define __x_ABI_CLumia_CImaging_CAdjustments_CICurveMinMaxPair_get_MaxCurve(This,__returnValue)	\
    ( (This)->lpVtbl -> get_MaxCurve(This,__returnValue) ) 

#define __x_ABI_CLumia_CImaging_CAdjustments_CICurveMinMaxPair_put_MaxCurve(This,__set_formal)	\
    ( (This)->lpVtbl -> put_MaxCurve(This,__set_formal) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* ____x_ABI_CLumia_CImaging_CAdjustments_CICurveMinMaxPair_INTERFACE_DEFINED__ */


/* interface __MIDL_itf_Lumia2EImaging2EAdjustments_0000_0035 */
/* [local] */ 

#if !defined(____x_ABI_CLumia_CImaging_CAdjustments_CICurveMinMaxPairFactory_INTERFACE_DEFINED__)
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Lumia_Imaging_Adjustments_ICurveMinMaxPairFactory[] = L"Lumia.Imaging.Adjustments.ICurveMinMaxPairFactory";
#endif /* !defined(____x_ABI_CLumia_CImaging_CAdjustments_CICurveMinMaxPairFactory_INTERFACE_DEFINED__) */


/* interface __MIDL_itf_Lumia2EImaging2EAdjustments_0000_0035 */
/* [local] */ 



extern RPC_IF_HANDLE __MIDL_itf_Lumia2EImaging2EAdjustments_0000_0035_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_Lumia2EImaging2EAdjustments_0000_0035_v0_0_s_ifspec;

#ifndef ____x_ABI_CLumia_CImaging_CAdjustments_CICurveMinMaxPairFactory_INTERFACE_DEFINED__
#define ____x_ABI_CLumia_CImaging_CAdjustments_CICurveMinMaxPairFactory_INTERFACE_DEFINED__

/* interface __x_ABI_CLumia_CImaging_CAdjustments_CICurveMinMaxPairFactory */
/* [uuid][object] */ 



/* interface ABI::Lumia::Imaging::Adjustments::ICurveMinMaxPairFactory */
/* [uuid][object] */ 


EXTERN_C const IID IID___x_ABI_CLumia_CImaging_CAdjustments_CICurveMinMaxPairFactory;

#if defined(__cplusplus) && !defined(CINTERFACE)
    } /* end extern "C" */
    namespace ABI {
        namespace Lumia {
            namespace Imaging {
                namespace Adjustments {
                    
                    MIDL_INTERFACE("53D31D73-93C7-306A-9728-2469A0191D59")
                    ICurveMinMaxPairFactory : public IInspectable
                    {
                    public:
                        virtual HRESULT STDMETHODCALLTYPE CreateWithCurves( 
                            /* [in] */ __RPC__in_opt ABI::Lumia::Imaging::Adjustments::ICurve *minCurve,
                            /* [in] */ __RPC__in_opt ABI::Lumia::Imaging::Adjustments::ICurve *maxCurve,
                            /* [out][retval] */ __RPC__deref_out_opt ABI::Lumia::Imaging::Adjustments::ICurveMinMaxPair **__returnValue) = 0;
                        
                    };

                    extern const __declspec(selectany) IID & IID_ICurveMinMaxPairFactory = __uuidof(ICurveMinMaxPairFactory);

                    
                }  /* end namespace */
            }  /* end namespace */
        }  /* end namespace */
    }  /* end namespace */
    extern "C" { 
    
#else 	/* C style interface */

    typedef struct __x_ABI_CLumia_CImaging_CAdjustments_CICurveMinMaxPairFactoryVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            __RPC__in __x_ABI_CLumia_CImaging_CAdjustments_CICurveMinMaxPairFactory * This,
            /* [in] */ __RPC__in REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            __RPC__in __x_ABI_CLumia_CImaging_CAdjustments_CICurveMinMaxPairFactory * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            __RPC__in __x_ABI_CLumia_CImaging_CAdjustments_CICurveMinMaxPairFactory * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetIids )( 
            __RPC__in __x_ABI_CLumia_CImaging_CAdjustments_CICurveMinMaxPairFactory * This,
            /* [out] */ __RPC__out ULONG *iidCount,
            /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
        
        HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )( 
            __RPC__in __x_ABI_CLumia_CImaging_CAdjustments_CICurveMinMaxPairFactory * This,
            /* [out] */ __RPC__deref_out_opt HSTRING *className);
        
        HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )( 
            __RPC__in __x_ABI_CLumia_CImaging_CAdjustments_CICurveMinMaxPairFactory * This,
            /* [out] */ __RPC__out TrustLevel *trustLevel);
        
        HRESULT ( STDMETHODCALLTYPE *CreateWithCurves )( 
            __RPC__in __x_ABI_CLumia_CImaging_CAdjustments_CICurveMinMaxPairFactory * This,
            /* [in] */ __RPC__in_opt __x_ABI_CLumia_CImaging_CAdjustments_CICurve *minCurve,
            /* [in] */ __RPC__in_opt __x_ABI_CLumia_CImaging_CAdjustments_CICurve *maxCurve,
            /* [out][retval] */ __RPC__deref_out_opt __x_ABI_CLumia_CImaging_CAdjustments_CICurveMinMaxPair **__returnValue);
        
        END_INTERFACE
    } __x_ABI_CLumia_CImaging_CAdjustments_CICurveMinMaxPairFactoryVtbl;

    interface __x_ABI_CLumia_CImaging_CAdjustments_CICurveMinMaxPairFactory
    {
        CONST_VTBL struct __x_ABI_CLumia_CImaging_CAdjustments_CICurveMinMaxPairFactoryVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define __x_ABI_CLumia_CImaging_CAdjustments_CICurveMinMaxPairFactory_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __x_ABI_CLumia_CImaging_CAdjustments_CICurveMinMaxPairFactory_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __x_ABI_CLumia_CImaging_CAdjustments_CICurveMinMaxPairFactory_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __x_ABI_CLumia_CImaging_CAdjustments_CICurveMinMaxPairFactory_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 

#define __x_ABI_CLumia_CImaging_CAdjustments_CICurveMinMaxPairFactory_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 

#define __x_ABI_CLumia_CImaging_CAdjustments_CICurveMinMaxPairFactory_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 


#define __x_ABI_CLumia_CImaging_CAdjustments_CICurveMinMaxPairFactory_CreateWithCurves(This,minCurve,maxCurve,__returnValue)	\
    ( (This)->lpVtbl -> CreateWithCurves(This,minCurve,maxCurve,__returnValue) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* ____x_ABI_CLumia_CImaging_CAdjustments_CICurveMinMaxPairFactory_INTERFACE_DEFINED__ */


/* interface __MIDL_itf_Lumia2EImaging2EAdjustments_0000_0036 */
/* [local] */ 

#if !defined(____x_ABI_CLumia_CImaging_CAdjustments_CICurve_INTERFACE_DEFINED__)
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Lumia_Imaging_Adjustments_ICurve[] = L"Lumia.Imaging.Adjustments.ICurve";
#endif /* !defined(____x_ABI_CLumia_CImaging_CAdjustments_CICurve_INTERFACE_DEFINED__) */


/* interface __MIDL_itf_Lumia2EImaging2EAdjustments_0000_0036 */
/* [local] */ 



extern RPC_IF_HANDLE __MIDL_itf_Lumia2EImaging2EAdjustments_0000_0036_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_Lumia2EImaging2EAdjustments_0000_0036_v0_0_s_ifspec;

#ifndef ____x_ABI_CLumia_CImaging_CAdjustments_CICurve_INTERFACE_DEFINED__
#define ____x_ABI_CLumia_CImaging_CAdjustments_CICurve_INTERFACE_DEFINED__

/* interface __x_ABI_CLumia_CImaging_CAdjustments_CICurve */
/* [uuid][object] */ 



/* interface ABI::Lumia::Imaging::Adjustments::ICurve */
/* [uuid][object] */ 


EXTERN_C const IID IID___x_ABI_CLumia_CImaging_CAdjustments_CICurve;

#if defined(__cplusplus) && !defined(CINTERFACE)
    } /* end extern "C" */
    namespace ABI {
        namespace Lumia {
            namespace Imaging {
                namespace Adjustments {
                    
                    MIDL_INTERFACE("7DA5EF09-171D-365F-A85B-281D23CB2CF7")
                    ICurve : public IInspectable
                    {
                    public:
                        virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_CurveInterpolation( 
                            /* [out][retval] */ __RPC__out ABI::Lumia::Imaging::Adjustments::CurveInterpolation *__returnValue) = 0;
                        
                        virtual /* [propput] */ HRESULT STDMETHODCALLTYPE put_CurveInterpolation( 
                            /* [in] */ ABI::Lumia::Imaging::Adjustments::CurveInterpolation value) = 0;
                        
                        virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_Points( 
                            /* [out] */ __RPC__out UINT32 *____returnValueSize,
                            /* [out][retval][size_is][size_is] */ __RPC__deref_out_ecount_full_opt(*____returnValueSize) ABI::Windows::Foundation::Point **__returnValue) = 0;
                        
                        virtual /* [propput] */ HRESULT STDMETHODCALLTYPE put_Points( 
                            /* [in] */ UINT32 __pointsSize,
                            /* [in][size_is] */ __RPC__in_ecount_full(__pointsSize) ABI::Windows::Foundation::Point *points) = 0;
                        
                        virtual HRESULT STDMETHODCALLTYPE Clear( void) = 0;
                        
                        virtual HRESULT STDMETHODCALLTYPE SetPoint2( 
                            /* [in] */ INT32 x,
                            /* [in] */ INT32 y) = 0;
                        
                        virtual HRESULT STDMETHODCALLTYPE SetPoint1( 
                            /* [in] */ ABI::Windows::Foundation::Point point) = 0;
                        
                        virtual HRESULT STDMETHODCALLTYPE RemovePoint( 
                            /* [in] */ INT32 x) = 0;
                        
                        virtual HRESULT STDMETHODCALLTYPE GetInterpolatedValues( 
                            /* [out] */ __RPC__out UINT32 *____returnValueSize,
                            /* [out][retval][size_is][size_is] */ __RPC__deref_out_ecount_full_opt(*____returnValueSize) BYTE **__returnValue) = 0;
                        
                        virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_Values( 
                            /* [out] */ __RPC__out UINT32 *____returnValueSize,
                            /* [out][retval][size_is][size_is] */ __RPC__deref_out_ecount_full_opt(*____returnValueSize) INT32 **__returnValue) = 0;
                        
                    };

                    extern const __declspec(selectany) IID & IID_ICurve = __uuidof(ICurve);

                    
                }  /* end namespace */
            }  /* end namespace */
        }  /* end namespace */
    }  /* end namespace */
    extern "C" { 
    
#else 	/* C style interface */

    typedef struct __x_ABI_CLumia_CImaging_CAdjustments_CICurveVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            __RPC__in __x_ABI_CLumia_CImaging_CAdjustments_CICurve * This,
            /* [in] */ __RPC__in REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            __RPC__in __x_ABI_CLumia_CImaging_CAdjustments_CICurve * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            __RPC__in __x_ABI_CLumia_CImaging_CAdjustments_CICurve * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetIids )( 
            __RPC__in __x_ABI_CLumia_CImaging_CAdjustments_CICurve * This,
            /* [out] */ __RPC__out ULONG *iidCount,
            /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
        
        HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )( 
            __RPC__in __x_ABI_CLumia_CImaging_CAdjustments_CICurve * This,
            /* [out] */ __RPC__deref_out_opt HSTRING *className);
        
        HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )( 
            __RPC__in __x_ABI_CLumia_CImaging_CAdjustments_CICurve * This,
            /* [out] */ __RPC__out TrustLevel *trustLevel);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_CurveInterpolation )( 
            __RPC__in __x_ABI_CLumia_CImaging_CAdjustments_CICurve * This,
            /* [out][retval] */ __RPC__out __x_ABI_CLumia_CImaging_CAdjustments_CCurveInterpolation *__returnValue);
        
        /* [propput] */ HRESULT ( STDMETHODCALLTYPE *put_CurveInterpolation )( 
            __RPC__in __x_ABI_CLumia_CImaging_CAdjustments_CICurve * This,
            /* [in] */ __x_ABI_CLumia_CImaging_CAdjustments_CCurveInterpolation value);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_Points )( 
            __RPC__in __x_ABI_CLumia_CImaging_CAdjustments_CICurve * This,
            /* [out] */ __RPC__out UINT32 *____returnValueSize,
            /* [out][retval][size_is][size_is] */ __RPC__deref_out_ecount_full_opt(*____returnValueSize) __x_ABI_CWindows_CFoundation_CPoint **__returnValue);
        
        /* [propput] */ HRESULT ( STDMETHODCALLTYPE *put_Points )( 
            __RPC__in __x_ABI_CLumia_CImaging_CAdjustments_CICurve * This,
            /* [in] */ UINT32 __pointsSize,
            /* [in][size_is] */ __RPC__in_ecount_full(__pointsSize) __x_ABI_CWindows_CFoundation_CPoint *points);
        
        HRESULT ( STDMETHODCALLTYPE *Clear )( 
            __RPC__in __x_ABI_CLumia_CImaging_CAdjustments_CICurve * This);
        
        HRESULT ( STDMETHODCALLTYPE *SetPoint2 )( 
            __RPC__in __x_ABI_CLumia_CImaging_CAdjustments_CICurve * This,
            /* [in] */ INT32 x,
            /* [in] */ INT32 y);
        
        HRESULT ( STDMETHODCALLTYPE *SetPoint1 )( 
            __RPC__in __x_ABI_CLumia_CImaging_CAdjustments_CICurve * This,
            /* [in] */ __x_ABI_CWindows_CFoundation_CPoint point);
        
        HRESULT ( STDMETHODCALLTYPE *RemovePoint )( 
            __RPC__in __x_ABI_CLumia_CImaging_CAdjustments_CICurve * This,
            /* [in] */ INT32 x);
        
        HRESULT ( STDMETHODCALLTYPE *GetInterpolatedValues )( 
            __RPC__in __x_ABI_CLumia_CImaging_CAdjustments_CICurve * This,
            /* [out] */ __RPC__out UINT32 *____returnValueSize,
            /* [out][retval][size_is][size_is] */ __RPC__deref_out_ecount_full_opt(*____returnValueSize) BYTE **__returnValue);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_Values )( 
            __RPC__in __x_ABI_CLumia_CImaging_CAdjustments_CICurve * This,
            /* [out] */ __RPC__out UINT32 *____returnValueSize,
            /* [out][retval][size_is][size_is] */ __RPC__deref_out_ecount_full_opt(*____returnValueSize) INT32 **__returnValue);
        
        END_INTERFACE
    } __x_ABI_CLumia_CImaging_CAdjustments_CICurveVtbl;

    interface __x_ABI_CLumia_CImaging_CAdjustments_CICurve
    {
        CONST_VTBL struct __x_ABI_CLumia_CImaging_CAdjustments_CICurveVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define __x_ABI_CLumia_CImaging_CAdjustments_CICurve_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __x_ABI_CLumia_CImaging_CAdjustments_CICurve_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __x_ABI_CLumia_CImaging_CAdjustments_CICurve_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __x_ABI_CLumia_CImaging_CAdjustments_CICurve_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 

#define __x_ABI_CLumia_CImaging_CAdjustments_CICurve_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 

#define __x_ABI_CLumia_CImaging_CAdjustments_CICurve_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 


#define __x_ABI_CLumia_CImaging_CAdjustments_CICurve_get_CurveInterpolation(This,__returnValue)	\
    ( (This)->lpVtbl -> get_CurveInterpolation(This,__returnValue) ) 

#define __x_ABI_CLumia_CImaging_CAdjustments_CICurve_put_CurveInterpolation(This,value)	\
    ( (This)->lpVtbl -> put_CurveInterpolation(This,value) ) 

#define __x_ABI_CLumia_CImaging_CAdjustments_CICurve_get_Points(This,____returnValueSize,__returnValue)	\
    ( (This)->lpVtbl -> get_Points(This,____returnValueSize,__returnValue) ) 

#define __x_ABI_CLumia_CImaging_CAdjustments_CICurve_put_Points(This,__pointsSize,points)	\
    ( (This)->lpVtbl -> put_Points(This,__pointsSize,points) ) 

#define __x_ABI_CLumia_CImaging_CAdjustments_CICurve_Clear(This)	\
    ( (This)->lpVtbl -> Clear(This) ) 

#define __x_ABI_CLumia_CImaging_CAdjustments_CICurve_SetPoint2(This,x,y)	\
    ( (This)->lpVtbl -> SetPoint2(This,x,y) ) 

#define __x_ABI_CLumia_CImaging_CAdjustments_CICurve_SetPoint1(This,point)	\
    ( (This)->lpVtbl -> SetPoint1(This,point) ) 

#define __x_ABI_CLumia_CImaging_CAdjustments_CICurve_RemovePoint(This,x)	\
    ( (This)->lpVtbl -> RemovePoint(This,x) ) 

#define __x_ABI_CLumia_CImaging_CAdjustments_CICurve_GetInterpolatedValues(This,____returnValueSize,__returnValue)	\
    ( (This)->lpVtbl -> GetInterpolatedValues(This,____returnValueSize,__returnValue) ) 

#define __x_ABI_CLumia_CImaging_CAdjustments_CICurve_get_Values(This,____returnValueSize,__returnValue)	\
    ( (This)->lpVtbl -> get_Values(This,____returnValueSize,__returnValue) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* ____x_ABI_CLumia_CImaging_CAdjustments_CICurve_INTERFACE_DEFINED__ */


/* interface __MIDL_itf_Lumia2EImaging2EAdjustments_0000_0037 */
/* [local] */ 

#if !defined(____x_ABI_CLumia_CImaging_CAdjustments_CICurveFactory_INTERFACE_DEFINED__)
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Lumia_Imaging_Adjustments_ICurveFactory[] = L"Lumia.Imaging.Adjustments.ICurveFactory";
#endif /* !defined(____x_ABI_CLumia_CImaging_CAdjustments_CICurveFactory_INTERFACE_DEFINED__) */


/* interface __MIDL_itf_Lumia2EImaging2EAdjustments_0000_0037 */
/* [local] */ 



extern RPC_IF_HANDLE __MIDL_itf_Lumia2EImaging2EAdjustments_0000_0037_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_Lumia2EImaging2EAdjustments_0000_0037_v0_0_s_ifspec;

#ifndef ____x_ABI_CLumia_CImaging_CAdjustments_CICurveFactory_INTERFACE_DEFINED__
#define ____x_ABI_CLumia_CImaging_CAdjustments_CICurveFactory_INTERFACE_DEFINED__

/* interface __x_ABI_CLumia_CImaging_CAdjustments_CICurveFactory */
/* [uuid][object] */ 



/* interface ABI::Lumia::Imaging::Adjustments::ICurveFactory */
/* [uuid][object] */ 


EXTERN_C const IID IID___x_ABI_CLumia_CImaging_CAdjustments_CICurveFactory;

#if defined(__cplusplus) && !defined(CINTERFACE)
    } /* end extern "C" */
    namespace ABI {
        namespace Lumia {
            namespace Imaging {
                namespace Adjustments {
                    
                    MIDL_INTERFACE("6CF73D80-96E9-3CDA-8F87-2E3CD8D83E9B")
                    ICurveFactory : public IInspectable
                    {
                    public:
                        virtual HRESULT STDMETHODCALLTYPE CreateWithInterpolationAndPoints( 
                            /* [in] */ ABI::Lumia::Imaging::Adjustments::CurveInterpolation curveInterpolation,
                            /* [in] */ UINT32 __pointsSize,
                            /* [in][size_is] */ __RPC__in_ecount_full(__pointsSize) ABI::Windows::Foundation::Point *points,
                            /* [out][retval] */ __RPC__deref_out_opt ABI::Lumia::Imaging::Adjustments::ICurve **__returnValue) = 0;
                        
                        virtual HRESULT STDMETHODCALLTYPE CreateWithInterpolation( 
                            /* [in] */ ABI::Lumia::Imaging::Adjustments::CurveInterpolation curveInterpolation,
                            /* [out][retval] */ __RPC__deref_out_opt ABI::Lumia::Imaging::Adjustments::ICurve **__returnValue) = 0;
                        
                    };

                    extern const __declspec(selectany) IID & IID_ICurveFactory = __uuidof(ICurveFactory);

                    
                }  /* end namespace */
            }  /* end namespace */
        }  /* end namespace */
    }  /* end namespace */
    extern "C" { 
    
#else 	/* C style interface */

    typedef struct __x_ABI_CLumia_CImaging_CAdjustments_CICurveFactoryVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            __RPC__in __x_ABI_CLumia_CImaging_CAdjustments_CICurveFactory * This,
            /* [in] */ __RPC__in REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            __RPC__in __x_ABI_CLumia_CImaging_CAdjustments_CICurveFactory * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            __RPC__in __x_ABI_CLumia_CImaging_CAdjustments_CICurveFactory * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetIids )( 
            __RPC__in __x_ABI_CLumia_CImaging_CAdjustments_CICurveFactory * This,
            /* [out] */ __RPC__out ULONG *iidCount,
            /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
        
        HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )( 
            __RPC__in __x_ABI_CLumia_CImaging_CAdjustments_CICurveFactory * This,
            /* [out] */ __RPC__deref_out_opt HSTRING *className);
        
        HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )( 
            __RPC__in __x_ABI_CLumia_CImaging_CAdjustments_CICurveFactory * This,
            /* [out] */ __RPC__out TrustLevel *trustLevel);
        
        HRESULT ( STDMETHODCALLTYPE *CreateWithInterpolationAndPoints )( 
            __RPC__in __x_ABI_CLumia_CImaging_CAdjustments_CICurveFactory * This,
            /* [in] */ __x_ABI_CLumia_CImaging_CAdjustments_CCurveInterpolation curveInterpolation,
            /* [in] */ UINT32 __pointsSize,
            /* [in][size_is] */ __RPC__in_ecount_full(__pointsSize) __x_ABI_CWindows_CFoundation_CPoint *points,
            /* [out][retval] */ __RPC__deref_out_opt __x_ABI_CLumia_CImaging_CAdjustments_CICurve **__returnValue);
        
        HRESULT ( STDMETHODCALLTYPE *CreateWithInterpolation )( 
            __RPC__in __x_ABI_CLumia_CImaging_CAdjustments_CICurveFactory * This,
            /* [in] */ __x_ABI_CLumia_CImaging_CAdjustments_CCurveInterpolation curveInterpolation,
            /* [out][retval] */ __RPC__deref_out_opt __x_ABI_CLumia_CImaging_CAdjustments_CICurve **__returnValue);
        
        END_INTERFACE
    } __x_ABI_CLumia_CImaging_CAdjustments_CICurveFactoryVtbl;

    interface __x_ABI_CLumia_CImaging_CAdjustments_CICurveFactory
    {
        CONST_VTBL struct __x_ABI_CLumia_CImaging_CAdjustments_CICurveFactoryVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define __x_ABI_CLumia_CImaging_CAdjustments_CICurveFactory_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __x_ABI_CLumia_CImaging_CAdjustments_CICurveFactory_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __x_ABI_CLumia_CImaging_CAdjustments_CICurveFactory_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __x_ABI_CLumia_CImaging_CAdjustments_CICurveFactory_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 

#define __x_ABI_CLumia_CImaging_CAdjustments_CICurveFactory_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 

#define __x_ABI_CLumia_CImaging_CAdjustments_CICurveFactory_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 


#define __x_ABI_CLumia_CImaging_CAdjustments_CICurveFactory_CreateWithInterpolationAndPoints(This,curveInterpolation,__pointsSize,points,__returnValue)	\
    ( (This)->lpVtbl -> CreateWithInterpolationAndPoints(This,curveInterpolation,__pointsSize,points,__returnValue) ) 

#define __x_ABI_CLumia_CImaging_CAdjustments_CICurveFactory_CreateWithInterpolation(This,curveInterpolation,__returnValue)	\
    ( (This)->lpVtbl -> CreateWithInterpolation(This,curveInterpolation,__returnValue) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* ____x_ABI_CLumia_CImaging_CAdjustments_CICurveFactory_INTERFACE_DEFINED__ */


/* interface __MIDL_itf_Lumia2EImaging2EAdjustments_0000_0038 */
/* [local] */ 

#if !defined(____x_ABI_CLumia_CImaging_CAdjustments_CICurveStatics_INTERFACE_DEFINED__)
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Lumia_Imaging_Adjustments_ICurveStatics[] = L"Lumia.Imaging.Adjustments.ICurveStatics";
#endif /* !defined(____x_ABI_CLumia_CImaging_CAdjustments_CICurveStatics_INTERFACE_DEFINED__) */


/* interface __MIDL_itf_Lumia2EImaging2EAdjustments_0000_0038 */
/* [local] */ 



extern RPC_IF_HANDLE __MIDL_itf_Lumia2EImaging2EAdjustments_0000_0038_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_Lumia2EImaging2EAdjustments_0000_0038_v0_0_s_ifspec;

#ifndef ____x_ABI_CLumia_CImaging_CAdjustments_CICurveStatics_INTERFACE_DEFINED__
#define ____x_ABI_CLumia_CImaging_CAdjustments_CICurveStatics_INTERFACE_DEFINED__

/* interface __x_ABI_CLumia_CImaging_CAdjustments_CICurveStatics */
/* [uuid][object] */ 



/* interface ABI::Lumia::Imaging::Adjustments::ICurveStatics */
/* [uuid][object] */ 


EXTERN_C const IID IID___x_ABI_CLumia_CImaging_CAdjustments_CICurveStatics;

#if defined(__cplusplus) && !defined(CINTERFACE)
    } /* end extern "C" */
    namespace ABI {
        namespace Lumia {
            namespace Imaging {
                namespace Adjustments {
                    
                    MIDL_INTERFACE("089ECD54-6F8D-3A21-84B2-87B4D3C35C09")
                    ICurveStatics : public IInspectable
                    {
                    public:
                        virtual HRESULT STDMETHODCALLTYPE AddInto( 
                            /* [in] */ __RPC__in_opt ABI::Lumia::Imaging::Adjustments::ICurve *curve1,
                            /* [in] */ __RPC__in_opt ABI::Lumia::Imaging::Adjustments::ICurve *curve2,
                            /* [in] */ __RPC__in_opt ABI::Lumia::Imaging::Adjustments::ICurve *resultCurve,
                            /* [out][retval] */ __RPC__deref_out_opt ABI::Lumia::Imaging::Adjustments::ICurve **__returnValue) = 0;
                        
                        virtual HRESULT STDMETHODCALLTYPE AddScalarInto( 
                            /* [in] */ __RPC__in_opt ABI::Lumia::Imaging::Adjustments::ICurve *curve,
                            /* [in] */ INT32 scalar,
                            /* [in] */ __RPC__in_opt ABI::Lumia::Imaging::Adjustments::ICurve *resultCurve,
                            /* [out][retval] */ __RPC__deref_out_opt ABI::Lumia::Imaging::Adjustments::ICurve **__returnValue) = 0;
                        
                        virtual HRESULT STDMETHODCALLTYPE Add( 
                            /* [in] */ __RPC__in_opt ABI::Lumia::Imaging::Adjustments::ICurve *curve1,
                            /* [in] */ __RPC__in_opt ABI::Lumia::Imaging::Adjustments::ICurve *curve2,
                            /* [out][retval] */ __RPC__deref_out_opt ABI::Lumia::Imaging::Adjustments::ICurve **__returnValue) = 0;
                        
                        virtual HRESULT STDMETHODCALLTYPE AddScalar( 
                            /* [in] */ __RPC__in_opt ABI::Lumia::Imaging::Adjustments::ICurve *curve,
                            /* [in] */ INT32 scalar,
                            /* [out][retval] */ __RPC__deref_out_opt ABI::Lumia::Imaging::Adjustments::ICurve **__returnValue) = 0;
                        
                        virtual HRESULT STDMETHODCALLTYPE SubtractFromScalarInto( 
                            /* [in] */ INT32 scalar,
                            /* [in] */ __RPC__in_opt ABI::Lumia::Imaging::Adjustments::ICurve *curve,
                            /* [in] */ __RPC__in_opt ABI::Lumia::Imaging::Adjustments::ICurve *resultCurve,
                            /* [out][retval] */ __RPC__deref_out_opt ABI::Lumia::Imaging::Adjustments::ICurve **__returnValue) = 0;
                        
                        virtual HRESULT STDMETHODCALLTYPE SubtractInto( 
                            /* [in] */ __RPC__in_opt ABI::Lumia::Imaging::Adjustments::ICurve *curve1,
                            /* [in] */ __RPC__in_opt ABI::Lumia::Imaging::Adjustments::ICurve *curve2,
                            /* [in] */ __RPC__in_opt ABI::Lumia::Imaging::Adjustments::ICurve *resultCurve,
                            /* [out][retval] */ __RPC__deref_out_opt ABI::Lumia::Imaging::Adjustments::ICurve **__returnValue) = 0;
                        
                        virtual HRESULT STDMETHODCALLTYPE SubtractFromScalar( 
                            /* [in] */ INT32 scalar,
                            /* [in] */ __RPC__in_opt ABI::Lumia::Imaging::Adjustments::ICurve *curve,
                            /* [out][retval] */ __RPC__deref_out_opt ABI::Lumia::Imaging::Adjustments::ICurve **__returnValue) = 0;
                        
                        virtual HRESULT STDMETHODCALLTYPE Subtract( 
                            /* [in] */ __RPC__in_opt ABI::Lumia::Imaging::Adjustments::ICurve *curve1,
                            /* [in] */ __RPC__in_opt ABI::Lumia::Imaging::Adjustments::ICurve *curve2,
                            /* [out][retval] */ __RPC__deref_out_opt ABI::Lumia::Imaging::Adjustments::ICurve **__returnValue) = 0;
                        
                        virtual HRESULT STDMETHODCALLTYPE MultiplyScalarInto( 
                            /* [in] */ __RPC__in_opt ABI::Lumia::Imaging::Adjustments::ICurve *curve,
                            /* [in] */ DOUBLE factor,
                            /* [in] */ __RPC__in_opt ABI::Lumia::Imaging::Adjustments::ICurve *resultCurve,
                            /* [out][retval] */ __RPC__deref_out_opt ABI::Lumia::Imaging::Adjustments::ICurve **__returnValue) = 0;
                        
                        virtual HRESULT STDMETHODCALLTYPE MultiplyScalar( 
                            /* [in] */ __RPC__in_opt ABI::Lumia::Imaging::Adjustments::ICurve *curve,
                            /* [in] */ DOUBLE factor,
                            /* [out][retval] */ __RPC__deref_out_opt ABI::Lumia::Imaging::Adjustments::ICurve **__returnValue) = 0;
                        
                        virtual HRESULT STDMETHODCALLTYPE InterpolateInto( 
                            /* [in] */ __RPC__in_opt ABI::Lumia::Imaging::Adjustments::ICurve *curve1,
                            /* [in] */ __RPC__in_opt ABI::Lumia::Imaging::Adjustments::ICurve *curve2,
                            /* [in] */ DOUBLE alpha,
                            /* [in] */ __RPC__in_opt ABI::Lumia::Imaging::Adjustments::ICurve *resultCurve,
                            /* [out][retval] */ __RPC__deref_out_opt ABI::Lumia::Imaging::Adjustments::ICurve **__returnValue) = 0;
                        
                        virtual HRESULT STDMETHODCALLTYPE InterpolatePairInto( 
                            /* [in] */ __RPC__in_opt ABI::Lumia::Imaging::Adjustments::ICurveMinMaxPair *curveMinMaxPair,
                            /* [in] */ DOUBLE alpha,
                            /* [in] */ __RPC__in_opt ABI::Lumia::Imaging::Adjustments::ICurve *resultCurve,
                            /* [out][retval] */ __RPC__deref_out_opt ABI::Lumia::Imaging::Adjustments::ICurve **__returnValue) = 0;
                        
                        virtual HRESULT STDMETHODCALLTYPE InterpolatePair( 
                            /* [in] */ __RPC__in_opt ABI::Lumia::Imaging::Adjustments::ICurveMinMaxPair *curveMinMaxPair,
                            /* [in] */ DOUBLE alpha,
                            /* [out][retval] */ __RPC__deref_out_opt ABI::Lumia::Imaging::Adjustments::ICurve **__returnValue) = 0;
                        
                        virtual HRESULT STDMETHODCALLTYPE Interpolate( 
                            /* [in] */ __RPC__in_opt ABI::Lumia::Imaging::Adjustments::ICurve *curve1,
                            /* [in] */ __RPC__in_opt ABI::Lumia::Imaging::Adjustments::ICurve *curve2,
                            /* [in] */ DOUBLE alpha,
                            /* [out][retval] */ __RPC__deref_out_opt ABI::Lumia::Imaging::Adjustments::ICurve **__returnValue) = 0;
                        
                        virtual HRESULT STDMETHODCALLTYPE InterpolateThreeInto( 
                            /* [in] */ __RPC__in_opt ABI::Lumia::Imaging::Adjustments::ICurve *maxCurve,
                            /* [in] */ __RPC__in_opt ABI::Lumia::Imaging::Adjustments::ICurve *normCurve,
                            /* [in] */ __RPC__in_opt ABI::Lumia::Imaging::Adjustments::ICurve *minCurve,
                            /* [in] */ DOUBLE alpha,
                            /* [in] */ __RPC__in_opt ABI::Lumia::Imaging::Adjustments::ICurve *resultCurve,
                            /* [out][retval] */ __RPC__deref_out_opt ABI::Lumia::Imaging::Adjustments::ICurve **__returnValue) = 0;
                        
                        virtual HRESULT STDMETHODCALLTYPE InterpolateThree( 
                            /* [in] */ __RPC__in_opt ABI::Lumia::Imaging::Adjustments::ICurve *maxCurve,
                            /* [in] */ __RPC__in_opt ABI::Lumia::Imaging::Adjustments::ICurve *normCurve,
                            /* [in] */ __RPC__in_opt ABI::Lumia::Imaging::Adjustments::ICurve *minCurve,
                            /* [in] */ DOUBLE alpha,
                            /* [out][retval] */ __RPC__deref_out_opt ABI::Lumia::Imaging::Adjustments::ICurve **__returnValue) = 0;
                        
                        virtual HRESULT STDMETHODCALLTYPE EstimateInterpolationFactor( 
                            /* [in] */ __RPC__in_opt ABI::Lumia::Imaging::Adjustments::ICurve *targetCurve,
                            /* [in] */ __RPC__in_opt ABI::Lumia::Imaging::Adjustments::ICurve *maxCurve,
                            /* [out][retval] */ __RPC__out DOUBLE *__returnValue) = 0;
                        
                        virtual HRESULT STDMETHODCALLTYPE EstimateSignedInterpolationFactor( 
                            /* [in] */ __RPC__in_opt ABI::Lumia::Imaging::Adjustments::ICurve *targetCurve,
                            /* [in] */ __RPC__in_opt ABI::Lumia::Imaging::Adjustments::ICurveMinMaxPair *curvePair,
                            /* [out][retval] */ __RPC__out DOUBLE *__returnValue) = 0;
                        
                        virtual HRESULT STDMETHODCALLTYPE EstimateInterpolationFactors( 
                            /* [in] */ __RPC__in_opt ABI::Lumia::Imaging::Adjustments::ICurve *targetCurve,
                            /* [in] */ __RPC__in_opt __FIIterable_1_Lumia__CImaging__CAdjustments__CCurve *maxCurves,
                            /* [out][retval] */ __RPC__deref_out_opt __FIVector_1_double **__returnValue) = 0;
                        
                        virtual HRESULT STDMETHODCALLTYPE EstimateSignedInterpolationFactors( 
                            /* [in] */ __RPC__in_opt ABI::Lumia::Imaging::Adjustments::ICurve *targetCurve,
                            /* [in] */ __RPC__in_opt __FIIterable_1_Lumia__CImaging__CAdjustments__CCurveMinMaxPair *curvePairs,
                            /* [out][retval] */ __RPC__deref_out_opt __FIVector_1_double **__returnValue) = 0;
                        
                        virtual HRESULT STDMETHODCALLTYPE ComposeInto( 
                            /* [in] */ __RPC__in_opt ABI::Lumia::Imaging::Adjustments::ICurve *curve1,
                            /* [in] */ __RPC__in_opt ABI::Lumia::Imaging::Adjustments::ICurve *curve2,
                            /* [in] */ __RPC__in_opt ABI::Lumia::Imaging::Adjustments::ICurve *resultCurve,
                            /* [out][retval] */ __RPC__deref_out_opt ABI::Lumia::Imaging::Adjustments::ICurve **__returnValue) = 0;
                        
                        virtual HRESULT STDMETHODCALLTYPE Compose( 
                            /* [in] */ __RPC__in_opt ABI::Lumia::Imaging::Adjustments::ICurve *curve1,
                            /* [in] */ __RPC__in_opt ABI::Lumia::Imaging::Adjustments::ICurve *curve2,
                            /* [out][retval] */ __RPC__deref_out_opt ABI::Lumia::Imaging::Adjustments::ICurve **__returnValue) = 0;
                        
                        virtual HRESULT STDMETHODCALLTYPE ReflectInto( 
                            /* [in] */ __RPC__in_opt ABI::Lumia::Imaging::Adjustments::ICurve *curve,
                            /* [in] */ DOUBLE coefficient,
                            /* [in] */ __RPC__in_opt ABI::Lumia::Imaging::Adjustments::ICurve *resultCurve,
                            /* [out][retval] */ __RPC__deref_out_opt ABI::Lumia::Imaging::Adjustments::ICurve **__returnValue) = 0;
                        
                        virtual HRESULT STDMETHODCALLTYPE Reflect( 
                            /* [in] */ __RPC__in_opt ABI::Lumia::Imaging::Adjustments::ICurve *curve,
                            /* [in] */ DOUBLE coefficient,
                            /* [out][retval] */ __RPC__deref_out_opt ABI::Lumia::Imaging::Adjustments::ICurve **__returnValue) = 0;
                        
                        virtual HRESULT STDMETHODCALLTYPE ClampInto( 
                            /* [in] */ __RPC__in_opt ABI::Lumia::Imaging::Adjustments::ICurve *curve,
                            /* [in] */ INT32 min,
                            /* [in] */ INT32 max,
                            /* [in] */ __RPC__in_opt ABI::Lumia::Imaging::Adjustments::ICurve *resultCurve,
                            /* [out][retval] */ __RPC__deref_out_opt ABI::Lumia::Imaging::Adjustments::ICurve **__returnValue) = 0;
                        
                        virtual HRESULT STDMETHODCALLTYPE Clamp( 
                            /* [in] */ __RPC__in_opt ABI::Lumia::Imaging::Adjustments::ICurve *curve,
                            /* [in] */ INT32 min,
                            /* [in] */ INT32 max,
                            /* [out][retval] */ __RPC__deref_out_opt ABI::Lumia::Imaging::Adjustments::ICurve **__returnValue) = 0;
                        
                        virtual HRESULT STDMETHODCALLTYPE CombineIntervalsInto( 
                            /* [in] */ __RPC__in_opt ABI::Lumia::Imaging::Adjustments::ICurve *curve1,
                            /* [in] */ __RPC__in_opt ABI::Lumia::Imaging::Adjustments::ICurve *curve2,
                            /* [in] */ INT32 interval,
                            /* [in] */ __RPC__in_opt ABI::Lumia::Imaging::Adjustments::ICurve *resultCurve,
                            /* [out][retval] */ __RPC__deref_out_opt ABI::Lumia::Imaging::Adjustments::ICurve **__returnValue) = 0;
                        
                        virtual HRESULT STDMETHODCALLTYPE CombineIntervals( 
                            /* [in] */ __RPC__in_opt ABI::Lumia::Imaging::Adjustments::ICurve *curve1,
                            /* [in] */ __RPC__in_opt ABI::Lumia::Imaging::Adjustments::ICurve *curve2,
                            /* [in] */ INT32 interval,
                            /* [out][retval] */ __RPC__deref_out_opt ABI::Lumia::Imaging::Adjustments::ICurve **__returnValue) = 0;
                        
                    };

                    extern const __declspec(selectany) IID & IID_ICurveStatics = __uuidof(ICurveStatics);

                    
                }  /* end namespace */
            }  /* end namespace */
        }  /* end namespace */
    }  /* end namespace */
    extern "C" { 
    
#else 	/* C style interface */

    typedef struct __x_ABI_CLumia_CImaging_CAdjustments_CICurveStaticsVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            __RPC__in __x_ABI_CLumia_CImaging_CAdjustments_CICurveStatics * This,
            /* [in] */ __RPC__in REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            __RPC__in __x_ABI_CLumia_CImaging_CAdjustments_CICurveStatics * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            __RPC__in __x_ABI_CLumia_CImaging_CAdjustments_CICurveStatics * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetIids )( 
            __RPC__in __x_ABI_CLumia_CImaging_CAdjustments_CICurveStatics * This,
            /* [out] */ __RPC__out ULONG *iidCount,
            /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
        
        HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )( 
            __RPC__in __x_ABI_CLumia_CImaging_CAdjustments_CICurveStatics * This,
            /* [out] */ __RPC__deref_out_opt HSTRING *className);
        
        HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )( 
            __RPC__in __x_ABI_CLumia_CImaging_CAdjustments_CICurveStatics * This,
            /* [out] */ __RPC__out TrustLevel *trustLevel);
        
        HRESULT ( STDMETHODCALLTYPE *AddInto )( 
            __RPC__in __x_ABI_CLumia_CImaging_CAdjustments_CICurveStatics * This,
            /* [in] */ __RPC__in_opt __x_ABI_CLumia_CImaging_CAdjustments_CICurve *curve1,
            /* [in] */ __RPC__in_opt __x_ABI_CLumia_CImaging_CAdjustments_CICurve *curve2,
            /* [in] */ __RPC__in_opt __x_ABI_CLumia_CImaging_CAdjustments_CICurve *resultCurve,
            /* [out][retval] */ __RPC__deref_out_opt __x_ABI_CLumia_CImaging_CAdjustments_CICurve **__returnValue);
        
        HRESULT ( STDMETHODCALLTYPE *AddScalarInto )( 
            __RPC__in __x_ABI_CLumia_CImaging_CAdjustments_CICurveStatics * This,
            /* [in] */ __RPC__in_opt __x_ABI_CLumia_CImaging_CAdjustments_CICurve *curve,
            /* [in] */ INT32 scalar,
            /* [in] */ __RPC__in_opt __x_ABI_CLumia_CImaging_CAdjustments_CICurve *resultCurve,
            /* [out][retval] */ __RPC__deref_out_opt __x_ABI_CLumia_CImaging_CAdjustments_CICurve **__returnValue);
        
        HRESULT ( STDMETHODCALLTYPE *Add )( 
            __RPC__in __x_ABI_CLumia_CImaging_CAdjustments_CICurveStatics * This,
            /* [in] */ __RPC__in_opt __x_ABI_CLumia_CImaging_CAdjustments_CICurve *curve1,
            /* [in] */ __RPC__in_opt __x_ABI_CLumia_CImaging_CAdjustments_CICurve *curve2,
            /* [out][retval] */ __RPC__deref_out_opt __x_ABI_CLumia_CImaging_CAdjustments_CICurve **__returnValue);
        
        HRESULT ( STDMETHODCALLTYPE *AddScalar )( 
            __RPC__in __x_ABI_CLumia_CImaging_CAdjustments_CICurveStatics * This,
            /* [in] */ __RPC__in_opt __x_ABI_CLumia_CImaging_CAdjustments_CICurve *curve,
            /* [in] */ INT32 scalar,
            /* [out][retval] */ __RPC__deref_out_opt __x_ABI_CLumia_CImaging_CAdjustments_CICurve **__returnValue);
        
        HRESULT ( STDMETHODCALLTYPE *SubtractFromScalarInto )( 
            __RPC__in __x_ABI_CLumia_CImaging_CAdjustments_CICurveStatics * This,
            /* [in] */ INT32 scalar,
            /* [in] */ __RPC__in_opt __x_ABI_CLumia_CImaging_CAdjustments_CICurve *curve,
            /* [in] */ __RPC__in_opt __x_ABI_CLumia_CImaging_CAdjustments_CICurve *resultCurve,
            /* [out][retval] */ __RPC__deref_out_opt __x_ABI_CLumia_CImaging_CAdjustments_CICurve **__returnValue);
        
        HRESULT ( STDMETHODCALLTYPE *SubtractInto )( 
            __RPC__in __x_ABI_CLumia_CImaging_CAdjustments_CICurveStatics * This,
            /* [in] */ __RPC__in_opt __x_ABI_CLumia_CImaging_CAdjustments_CICurve *curve1,
            /* [in] */ __RPC__in_opt __x_ABI_CLumia_CImaging_CAdjustments_CICurve *curve2,
            /* [in] */ __RPC__in_opt __x_ABI_CLumia_CImaging_CAdjustments_CICurve *resultCurve,
            /* [out][retval] */ __RPC__deref_out_opt __x_ABI_CLumia_CImaging_CAdjustments_CICurve **__returnValue);
        
        HRESULT ( STDMETHODCALLTYPE *SubtractFromScalar )( 
            __RPC__in __x_ABI_CLumia_CImaging_CAdjustments_CICurveStatics * This,
            /* [in] */ INT32 scalar,
            /* [in] */ __RPC__in_opt __x_ABI_CLumia_CImaging_CAdjustments_CICurve *curve,
            /* [out][retval] */ __RPC__deref_out_opt __x_ABI_CLumia_CImaging_CAdjustments_CICurve **__returnValue);
        
        HRESULT ( STDMETHODCALLTYPE *Subtract )( 
            __RPC__in __x_ABI_CLumia_CImaging_CAdjustments_CICurveStatics * This,
            /* [in] */ __RPC__in_opt __x_ABI_CLumia_CImaging_CAdjustments_CICurve *curve1,
            /* [in] */ __RPC__in_opt __x_ABI_CLumia_CImaging_CAdjustments_CICurve *curve2,
            /* [out][retval] */ __RPC__deref_out_opt __x_ABI_CLumia_CImaging_CAdjustments_CICurve **__returnValue);
        
        HRESULT ( STDMETHODCALLTYPE *MultiplyScalarInto )( 
            __RPC__in __x_ABI_CLumia_CImaging_CAdjustments_CICurveStatics * This,
            /* [in] */ __RPC__in_opt __x_ABI_CLumia_CImaging_CAdjustments_CICurve *curve,
            /* [in] */ DOUBLE factor,
            /* [in] */ __RPC__in_opt __x_ABI_CLumia_CImaging_CAdjustments_CICurve *resultCurve,
            /* [out][retval] */ __RPC__deref_out_opt __x_ABI_CLumia_CImaging_CAdjustments_CICurve **__returnValue);
        
        HRESULT ( STDMETHODCALLTYPE *MultiplyScalar )( 
            __RPC__in __x_ABI_CLumia_CImaging_CAdjustments_CICurveStatics * This,
            /* [in] */ __RPC__in_opt __x_ABI_CLumia_CImaging_CAdjustments_CICurve *curve,
            /* [in] */ DOUBLE factor,
            /* [out][retval] */ __RPC__deref_out_opt __x_ABI_CLumia_CImaging_CAdjustments_CICurve **__returnValue);
        
        HRESULT ( STDMETHODCALLTYPE *InterpolateInto )( 
            __RPC__in __x_ABI_CLumia_CImaging_CAdjustments_CICurveStatics * This,
            /* [in] */ __RPC__in_opt __x_ABI_CLumia_CImaging_CAdjustments_CICurve *curve1,
            /* [in] */ __RPC__in_opt __x_ABI_CLumia_CImaging_CAdjustments_CICurve *curve2,
            /* [in] */ DOUBLE alpha,
            /* [in] */ __RPC__in_opt __x_ABI_CLumia_CImaging_CAdjustments_CICurve *resultCurve,
            /* [out][retval] */ __RPC__deref_out_opt __x_ABI_CLumia_CImaging_CAdjustments_CICurve **__returnValue);
        
        HRESULT ( STDMETHODCALLTYPE *InterpolatePairInto )( 
            __RPC__in __x_ABI_CLumia_CImaging_CAdjustments_CICurveStatics * This,
            /* [in] */ __RPC__in_opt __x_ABI_CLumia_CImaging_CAdjustments_CICurveMinMaxPair *curveMinMaxPair,
            /* [in] */ DOUBLE alpha,
            /* [in] */ __RPC__in_opt __x_ABI_CLumia_CImaging_CAdjustments_CICurve *resultCurve,
            /* [out][retval] */ __RPC__deref_out_opt __x_ABI_CLumia_CImaging_CAdjustments_CICurve **__returnValue);
        
        HRESULT ( STDMETHODCALLTYPE *InterpolatePair )( 
            __RPC__in __x_ABI_CLumia_CImaging_CAdjustments_CICurveStatics * This,
            /* [in] */ __RPC__in_opt __x_ABI_CLumia_CImaging_CAdjustments_CICurveMinMaxPair *curveMinMaxPair,
            /* [in] */ DOUBLE alpha,
            /* [out][retval] */ __RPC__deref_out_opt __x_ABI_CLumia_CImaging_CAdjustments_CICurve **__returnValue);
        
        HRESULT ( STDMETHODCALLTYPE *Interpolate )( 
            __RPC__in __x_ABI_CLumia_CImaging_CAdjustments_CICurveStatics * This,
            /* [in] */ __RPC__in_opt __x_ABI_CLumia_CImaging_CAdjustments_CICurve *curve1,
            /* [in] */ __RPC__in_opt __x_ABI_CLumia_CImaging_CAdjustments_CICurve *curve2,
            /* [in] */ DOUBLE alpha,
            /* [out][retval] */ __RPC__deref_out_opt __x_ABI_CLumia_CImaging_CAdjustments_CICurve **__returnValue);
        
        HRESULT ( STDMETHODCALLTYPE *InterpolateThreeInto )( 
            __RPC__in __x_ABI_CLumia_CImaging_CAdjustments_CICurveStatics * This,
            /* [in] */ __RPC__in_opt __x_ABI_CLumia_CImaging_CAdjustments_CICurve *maxCurve,
            /* [in] */ __RPC__in_opt __x_ABI_CLumia_CImaging_CAdjustments_CICurve *normCurve,
            /* [in] */ __RPC__in_opt __x_ABI_CLumia_CImaging_CAdjustments_CICurve *minCurve,
            /* [in] */ DOUBLE alpha,
            /* [in] */ __RPC__in_opt __x_ABI_CLumia_CImaging_CAdjustments_CICurve *resultCurve,
            /* [out][retval] */ __RPC__deref_out_opt __x_ABI_CLumia_CImaging_CAdjustments_CICurve **__returnValue);
        
        HRESULT ( STDMETHODCALLTYPE *InterpolateThree )( 
            __RPC__in __x_ABI_CLumia_CImaging_CAdjustments_CICurveStatics * This,
            /* [in] */ __RPC__in_opt __x_ABI_CLumia_CImaging_CAdjustments_CICurve *maxCurve,
            /* [in] */ __RPC__in_opt __x_ABI_CLumia_CImaging_CAdjustments_CICurve *normCurve,
            /* [in] */ __RPC__in_opt __x_ABI_CLumia_CImaging_CAdjustments_CICurve *minCurve,
            /* [in] */ DOUBLE alpha,
            /* [out][retval] */ __RPC__deref_out_opt __x_ABI_CLumia_CImaging_CAdjustments_CICurve **__returnValue);
        
        HRESULT ( STDMETHODCALLTYPE *EstimateInterpolationFactor )( 
            __RPC__in __x_ABI_CLumia_CImaging_CAdjustments_CICurveStatics * This,
            /* [in] */ __RPC__in_opt __x_ABI_CLumia_CImaging_CAdjustments_CICurve *targetCurve,
            /* [in] */ __RPC__in_opt __x_ABI_CLumia_CImaging_CAdjustments_CICurve *maxCurve,
            /* [out][retval] */ __RPC__out DOUBLE *__returnValue);
        
        HRESULT ( STDMETHODCALLTYPE *EstimateSignedInterpolationFactor )( 
            __RPC__in __x_ABI_CLumia_CImaging_CAdjustments_CICurveStatics * This,
            /* [in] */ __RPC__in_opt __x_ABI_CLumia_CImaging_CAdjustments_CICurve *targetCurve,
            /* [in] */ __RPC__in_opt __x_ABI_CLumia_CImaging_CAdjustments_CICurveMinMaxPair *curvePair,
            /* [out][retval] */ __RPC__out DOUBLE *__returnValue);
        
        HRESULT ( STDMETHODCALLTYPE *EstimateInterpolationFactors )( 
            __RPC__in __x_ABI_CLumia_CImaging_CAdjustments_CICurveStatics * This,
            /* [in] */ __RPC__in_opt __x_ABI_CLumia_CImaging_CAdjustments_CICurve *targetCurve,
            /* [in] */ __RPC__in_opt __FIIterable_1_Lumia__CImaging__CAdjustments__CCurve *maxCurves,
            /* [out][retval] */ __RPC__deref_out_opt __FIVector_1_double **__returnValue);
        
        HRESULT ( STDMETHODCALLTYPE *EstimateSignedInterpolationFactors )( 
            __RPC__in __x_ABI_CLumia_CImaging_CAdjustments_CICurveStatics * This,
            /* [in] */ __RPC__in_opt __x_ABI_CLumia_CImaging_CAdjustments_CICurve *targetCurve,
            /* [in] */ __RPC__in_opt __FIIterable_1_Lumia__CImaging__CAdjustments__CCurveMinMaxPair *curvePairs,
            /* [out][retval] */ __RPC__deref_out_opt __FIVector_1_double **__returnValue);
        
        HRESULT ( STDMETHODCALLTYPE *ComposeInto )( 
            __RPC__in __x_ABI_CLumia_CImaging_CAdjustments_CICurveStatics * This,
            /* [in] */ __RPC__in_opt __x_ABI_CLumia_CImaging_CAdjustments_CICurve *curve1,
            /* [in] */ __RPC__in_opt __x_ABI_CLumia_CImaging_CAdjustments_CICurve *curve2,
            /* [in] */ __RPC__in_opt __x_ABI_CLumia_CImaging_CAdjustments_CICurve *resultCurve,
            /* [out][retval] */ __RPC__deref_out_opt __x_ABI_CLumia_CImaging_CAdjustments_CICurve **__returnValue);
        
        HRESULT ( STDMETHODCALLTYPE *Compose )( 
            __RPC__in __x_ABI_CLumia_CImaging_CAdjustments_CICurveStatics * This,
            /* [in] */ __RPC__in_opt __x_ABI_CLumia_CImaging_CAdjustments_CICurve *curve1,
            /* [in] */ __RPC__in_opt __x_ABI_CLumia_CImaging_CAdjustments_CICurve *curve2,
            /* [out][retval] */ __RPC__deref_out_opt __x_ABI_CLumia_CImaging_CAdjustments_CICurve **__returnValue);
        
        HRESULT ( STDMETHODCALLTYPE *ReflectInto )( 
            __RPC__in __x_ABI_CLumia_CImaging_CAdjustments_CICurveStatics * This,
            /* [in] */ __RPC__in_opt __x_ABI_CLumia_CImaging_CAdjustments_CICurve *curve,
            /* [in] */ DOUBLE coefficient,
            /* [in] */ __RPC__in_opt __x_ABI_CLumia_CImaging_CAdjustments_CICurve *resultCurve,
            /* [out][retval] */ __RPC__deref_out_opt __x_ABI_CLumia_CImaging_CAdjustments_CICurve **__returnValue);
        
        HRESULT ( STDMETHODCALLTYPE *Reflect )( 
            __RPC__in __x_ABI_CLumia_CImaging_CAdjustments_CICurveStatics * This,
            /* [in] */ __RPC__in_opt __x_ABI_CLumia_CImaging_CAdjustments_CICurve *curve,
            /* [in] */ DOUBLE coefficient,
            /* [out][retval] */ __RPC__deref_out_opt __x_ABI_CLumia_CImaging_CAdjustments_CICurve **__returnValue);
        
        HRESULT ( STDMETHODCALLTYPE *ClampInto )( 
            __RPC__in __x_ABI_CLumia_CImaging_CAdjustments_CICurveStatics * This,
            /* [in] */ __RPC__in_opt __x_ABI_CLumia_CImaging_CAdjustments_CICurve *curve,
            /* [in] */ INT32 min,
            /* [in] */ INT32 max,
            /* [in] */ __RPC__in_opt __x_ABI_CLumia_CImaging_CAdjustments_CICurve *resultCurve,
            /* [out][retval] */ __RPC__deref_out_opt __x_ABI_CLumia_CImaging_CAdjustments_CICurve **__returnValue);
        
        HRESULT ( STDMETHODCALLTYPE *Clamp )( 
            __RPC__in __x_ABI_CLumia_CImaging_CAdjustments_CICurveStatics * This,
            /* [in] */ __RPC__in_opt __x_ABI_CLumia_CImaging_CAdjustments_CICurve *curve,
            /* [in] */ INT32 min,
            /* [in] */ INT32 max,
            /* [out][retval] */ __RPC__deref_out_opt __x_ABI_CLumia_CImaging_CAdjustments_CICurve **__returnValue);
        
        HRESULT ( STDMETHODCALLTYPE *CombineIntervalsInto )( 
            __RPC__in __x_ABI_CLumia_CImaging_CAdjustments_CICurveStatics * This,
            /* [in] */ __RPC__in_opt __x_ABI_CLumia_CImaging_CAdjustments_CICurve *curve1,
            /* [in] */ __RPC__in_opt __x_ABI_CLumia_CImaging_CAdjustments_CICurve *curve2,
            /* [in] */ INT32 interval,
            /* [in] */ __RPC__in_opt __x_ABI_CLumia_CImaging_CAdjustments_CICurve *resultCurve,
            /* [out][retval] */ __RPC__deref_out_opt __x_ABI_CLumia_CImaging_CAdjustments_CICurve **__returnValue);
        
        HRESULT ( STDMETHODCALLTYPE *CombineIntervals )( 
            __RPC__in __x_ABI_CLumia_CImaging_CAdjustments_CICurveStatics * This,
            /* [in] */ __RPC__in_opt __x_ABI_CLumia_CImaging_CAdjustments_CICurve *curve1,
            /* [in] */ __RPC__in_opt __x_ABI_CLumia_CImaging_CAdjustments_CICurve *curve2,
            /* [in] */ INT32 interval,
            /* [out][retval] */ __RPC__deref_out_opt __x_ABI_CLumia_CImaging_CAdjustments_CICurve **__returnValue);
        
        END_INTERFACE
    } __x_ABI_CLumia_CImaging_CAdjustments_CICurveStaticsVtbl;

    interface __x_ABI_CLumia_CImaging_CAdjustments_CICurveStatics
    {
        CONST_VTBL struct __x_ABI_CLumia_CImaging_CAdjustments_CICurveStaticsVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define __x_ABI_CLumia_CImaging_CAdjustments_CICurveStatics_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __x_ABI_CLumia_CImaging_CAdjustments_CICurveStatics_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __x_ABI_CLumia_CImaging_CAdjustments_CICurveStatics_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __x_ABI_CLumia_CImaging_CAdjustments_CICurveStatics_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 

#define __x_ABI_CLumia_CImaging_CAdjustments_CICurveStatics_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 

#define __x_ABI_CLumia_CImaging_CAdjustments_CICurveStatics_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 


#define __x_ABI_CLumia_CImaging_CAdjustments_CICurveStatics_AddInto(This,curve1,curve2,resultCurve,__returnValue)	\
    ( (This)->lpVtbl -> AddInto(This,curve1,curve2,resultCurve,__returnValue) ) 

#define __x_ABI_CLumia_CImaging_CAdjustments_CICurveStatics_AddScalarInto(This,curve,scalar,resultCurve,__returnValue)	\
    ( (This)->lpVtbl -> AddScalarInto(This,curve,scalar,resultCurve,__returnValue) ) 

#define __x_ABI_CLumia_CImaging_CAdjustments_CICurveStatics_Add(This,curve1,curve2,__returnValue)	\
    ( (This)->lpVtbl -> Add(This,curve1,curve2,__returnValue) ) 

#define __x_ABI_CLumia_CImaging_CAdjustments_CICurveStatics_AddScalar(This,curve,scalar,__returnValue)	\
    ( (This)->lpVtbl -> AddScalar(This,curve,scalar,__returnValue) ) 

#define __x_ABI_CLumia_CImaging_CAdjustments_CICurveStatics_SubtractFromScalarInto(This,scalar,curve,resultCurve,__returnValue)	\
    ( (This)->lpVtbl -> SubtractFromScalarInto(This,scalar,curve,resultCurve,__returnValue) ) 

#define __x_ABI_CLumia_CImaging_CAdjustments_CICurveStatics_SubtractInto(This,curve1,curve2,resultCurve,__returnValue)	\
    ( (This)->lpVtbl -> SubtractInto(This,curve1,curve2,resultCurve,__returnValue) ) 

#define __x_ABI_CLumia_CImaging_CAdjustments_CICurveStatics_SubtractFromScalar(This,scalar,curve,__returnValue)	\
    ( (This)->lpVtbl -> SubtractFromScalar(This,scalar,curve,__returnValue) ) 

#define __x_ABI_CLumia_CImaging_CAdjustments_CICurveStatics_Subtract(This,curve1,curve2,__returnValue)	\
    ( (This)->lpVtbl -> Subtract(This,curve1,curve2,__returnValue) ) 

#define __x_ABI_CLumia_CImaging_CAdjustments_CICurveStatics_MultiplyScalarInto(This,curve,factor,resultCurve,__returnValue)	\
    ( (This)->lpVtbl -> MultiplyScalarInto(This,curve,factor,resultCurve,__returnValue) ) 

#define __x_ABI_CLumia_CImaging_CAdjustments_CICurveStatics_MultiplyScalar(This,curve,factor,__returnValue)	\
    ( (This)->lpVtbl -> MultiplyScalar(This,curve,factor,__returnValue) ) 

#define __x_ABI_CLumia_CImaging_CAdjustments_CICurveStatics_InterpolateInto(This,curve1,curve2,alpha,resultCurve,__returnValue)	\
    ( (This)->lpVtbl -> InterpolateInto(This,curve1,curve2,alpha,resultCurve,__returnValue) ) 

#define __x_ABI_CLumia_CImaging_CAdjustments_CICurveStatics_InterpolatePairInto(This,curveMinMaxPair,alpha,resultCurve,__returnValue)	\
    ( (This)->lpVtbl -> InterpolatePairInto(This,curveMinMaxPair,alpha,resultCurve,__returnValue) ) 

#define __x_ABI_CLumia_CImaging_CAdjustments_CICurveStatics_InterpolatePair(This,curveMinMaxPair,alpha,__returnValue)	\
    ( (This)->lpVtbl -> InterpolatePair(This,curveMinMaxPair,alpha,__returnValue) ) 

#define __x_ABI_CLumia_CImaging_CAdjustments_CICurveStatics_Interpolate(This,curve1,curve2,alpha,__returnValue)	\
    ( (This)->lpVtbl -> Interpolate(This,curve1,curve2,alpha,__returnValue) ) 

#define __x_ABI_CLumia_CImaging_CAdjustments_CICurveStatics_InterpolateThreeInto(This,maxCurve,normCurve,minCurve,alpha,resultCurve,__returnValue)	\
    ( (This)->lpVtbl -> InterpolateThreeInto(This,maxCurve,normCurve,minCurve,alpha,resultCurve,__returnValue) ) 

#define __x_ABI_CLumia_CImaging_CAdjustments_CICurveStatics_InterpolateThree(This,maxCurve,normCurve,minCurve,alpha,__returnValue)	\
    ( (This)->lpVtbl -> InterpolateThree(This,maxCurve,normCurve,minCurve,alpha,__returnValue) ) 

#define __x_ABI_CLumia_CImaging_CAdjustments_CICurveStatics_EstimateInterpolationFactor(This,targetCurve,maxCurve,__returnValue)	\
    ( (This)->lpVtbl -> EstimateInterpolationFactor(This,targetCurve,maxCurve,__returnValue) ) 

#define __x_ABI_CLumia_CImaging_CAdjustments_CICurveStatics_EstimateSignedInterpolationFactor(This,targetCurve,curvePair,__returnValue)	\
    ( (This)->lpVtbl -> EstimateSignedInterpolationFactor(This,targetCurve,curvePair,__returnValue) ) 

#define __x_ABI_CLumia_CImaging_CAdjustments_CICurveStatics_EstimateInterpolationFactors(This,targetCurve,maxCurves,__returnValue)	\
    ( (This)->lpVtbl -> EstimateInterpolationFactors(This,targetCurve,maxCurves,__returnValue) ) 

#define __x_ABI_CLumia_CImaging_CAdjustments_CICurveStatics_EstimateSignedInterpolationFactors(This,targetCurve,curvePairs,__returnValue)	\
    ( (This)->lpVtbl -> EstimateSignedInterpolationFactors(This,targetCurve,curvePairs,__returnValue) ) 

#define __x_ABI_CLumia_CImaging_CAdjustments_CICurveStatics_ComposeInto(This,curve1,curve2,resultCurve,__returnValue)	\
    ( (This)->lpVtbl -> ComposeInto(This,curve1,curve2,resultCurve,__returnValue) ) 

#define __x_ABI_CLumia_CImaging_CAdjustments_CICurveStatics_Compose(This,curve1,curve2,__returnValue)	\
    ( (This)->lpVtbl -> Compose(This,curve1,curve2,__returnValue) ) 

#define __x_ABI_CLumia_CImaging_CAdjustments_CICurveStatics_ReflectInto(This,curve,coefficient,resultCurve,__returnValue)	\
    ( (This)->lpVtbl -> ReflectInto(This,curve,coefficient,resultCurve,__returnValue) ) 

#define __x_ABI_CLumia_CImaging_CAdjustments_CICurveStatics_Reflect(This,curve,coefficient,__returnValue)	\
    ( (This)->lpVtbl -> Reflect(This,curve,coefficient,__returnValue) ) 

#define __x_ABI_CLumia_CImaging_CAdjustments_CICurveStatics_ClampInto(This,curve,min,max,resultCurve,__returnValue)	\
    ( (This)->lpVtbl -> ClampInto(This,curve,min,max,resultCurve,__returnValue) ) 

#define __x_ABI_CLumia_CImaging_CAdjustments_CICurveStatics_Clamp(This,curve,min,max,__returnValue)	\
    ( (This)->lpVtbl -> Clamp(This,curve,min,max,__returnValue) ) 

#define __x_ABI_CLumia_CImaging_CAdjustments_CICurveStatics_CombineIntervalsInto(This,curve1,curve2,interval,resultCurve,__returnValue)	\
    ( (This)->lpVtbl -> CombineIntervalsInto(This,curve1,curve2,interval,resultCurve,__returnValue) ) 

#define __x_ABI_CLumia_CImaging_CAdjustments_CICurveStatics_CombineIntervals(This,curve1,curve2,interval,__returnValue)	\
    ( (This)->lpVtbl -> CombineIntervals(This,curve1,curve2,interval,__returnValue) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* ____x_ABI_CLumia_CImaging_CAdjustments_CICurveStatics_INTERFACE_DEFINED__ */


/* interface __MIDL_itf_Lumia2EImaging2EAdjustments_0000_0039 */
/* [local] */ 

#if !defined(____x_ABI_CLumia_CImaging_CAdjustments_CIArgbColorCurves_INTERFACE_DEFINED__)
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Lumia_Imaging_Adjustments_IArgbColorCurves[] = L"Lumia.Imaging.Adjustments.IArgbColorCurves";
#endif /* !defined(____x_ABI_CLumia_CImaging_CAdjustments_CIArgbColorCurves_INTERFACE_DEFINED__) */


/* interface __MIDL_itf_Lumia2EImaging2EAdjustments_0000_0039 */
/* [local] */ 



extern RPC_IF_HANDLE __MIDL_itf_Lumia2EImaging2EAdjustments_0000_0039_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_Lumia2EImaging2EAdjustments_0000_0039_v0_0_s_ifspec;

#ifndef ____x_ABI_CLumia_CImaging_CAdjustments_CIArgbColorCurves_INTERFACE_DEFINED__
#define ____x_ABI_CLumia_CImaging_CAdjustments_CIArgbColorCurves_INTERFACE_DEFINED__

/* interface __x_ABI_CLumia_CImaging_CAdjustments_CIArgbColorCurves */
/* [uuid][object] */ 



/* interface ABI::Lumia::Imaging::Adjustments::IArgbColorCurves */
/* [uuid][object] */ 


EXTERN_C const IID IID___x_ABI_CLumia_CImaging_CAdjustments_CIArgbColorCurves;

#if defined(__cplusplus) && !defined(CINTERFACE)
    } /* end extern "C" */
    namespace ABI {
        namespace Lumia {
            namespace Imaging {
                namespace Adjustments {
                    
                    MIDL_INTERFACE("CDB57704-3B0E-3FFC-B125-BB96BFE6E8CD")
                    IArgbColorCurves : public IInspectable
                    {
                    public:
                        virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_Alpha( 
                            /* [out][retval] */ __RPC__deref_out_opt ABI::Lumia::Imaging::Adjustments::ICurve **__returnValue) = 0;
                        
                        virtual /* [propput] */ HRESULT STDMETHODCALLTYPE put_Alpha( 
                            /* [in] */ __RPC__in_opt ABI::Lumia::Imaging::Adjustments::ICurve *value) = 0;
                        
                        virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_Red( 
                            /* [out][retval] */ __RPC__deref_out_opt ABI::Lumia::Imaging::Adjustments::ICurve **__returnValue) = 0;
                        
                        virtual /* [propput] */ HRESULT STDMETHODCALLTYPE put_Red( 
                            /* [in] */ __RPC__in_opt ABI::Lumia::Imaging::Adjustments::ICurve *value) = 0;
                        
                        virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_Green( 
                            /* [out][retval] */ __RPC__deref_out_opt ABI::Lumia::Imaging::Adjustments::ICurve **__returnValue) = 0;
                        
                        virtual /* [propput] */ HRESULT STDMETHODCALLTYPE put_Green( 
                            /* [in] */ __RPC__in_opt ABI::Lumia::Imaging::Adjustments::ICurve *value) = 0;
                        
                        virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_Blue( 
                            /* [out][retval] */ __RPC__deref_out_opt ABI::Lumia::Imaging::Adjustments::ICurve **__returnValue) = 0;
                        
                        virtual /* [propput] */ HRESULT STDMETHODCALLTYPE put_Blue( 
                            /* [in] */ __RPC__in_opt ABI::Lumia::Imaging::Adjustments::ICurve *value) = 0;
                        
                    };

                    extern const __declspec(selectany) IID & IID_IArgbColorCurves = __uuidof(IArgbColorCurves);

                    
                }  /* end namespace */
            }  /* end namespace */
        }  /* end namespace */
    }  /* end namespace */
    extern "C" { 
    
#else 	/* C style interface */

    typedef struct __x_ABI_CLumia_CImaging_CAdjustments_CIArgbColorCurvesVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            __RPC__in __x_ABI_CLumia_CImaging_CAdjustments_CIArgbColorCurves * This,
            /* [in] */ __RPC__in REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            __RPC__in __x_ABI_CLumia_CImaging_CAdjustments_CIArgbColorCurves * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            __RPC__in __x_ABI_CLumia_CImaging_CAdjustments_CIArgbColorCurves * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetIids )( 
            __RPC__in __x_ABI_CLumia_CImaging_CAdjustments_CIArgbColorCurves * This,
            /* [out] */ __RPC__out ULONG *iidCount,
            /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
        
        HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )( 
            __RPC__in __x_ABI_CLumia_CImaging_CAdjustments_CIArgbColorCurves * This,
            /* [out] */ __RPC__deref_out_opt HSTRING *className);
        
        HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )( 
            __RPC__in __x_ABI_CLumia_CImaging_CAdjustments_CIArgbColorCurves * This,
            /* [out] */ __RPC__out TrustLevel *trustLevel);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_Alpha )( 
            __RPC__in __x_ABI_CLumia_CImaging_CAdjustments_CIArgbColorCurves * This,
            /* [out][retval] */ __RPC__deref_out_opt __x_ABI_CLumia_CImaging_CAdjustments_CICurve **__returnValue);
        
        /* [propput] */ HRESULT ( STDMETHODCALLTYPE *put_Alpha )( 
            __RPC__in __x_ABI_CLumia_CImaging_CAdjustments_CIArgbColorCurves * This,
            /* [in] */ __RPC__in_opt __x_ABI_CLumia_CImaging_CAdjustments_CICurve *value);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_Red )( 
            __RPC__in __x_ABI_CLumia_CImaging_CAdjustments_CIArgbColorCurves * This,
            /* [out][retval] */ __RPC__deref_out_opt __x_ABI_CLumia_CImaging_CAdjustments_CICurve **__returnValue);
        
        /* [propput] */ HRESULT ( STDMETHODCALLTYPE *put_Red )( 
            __RPC__in __x_ABI_CLumia_CImaging_CAdjustments_CIArgbColorCurves * This,
            /* [in] */ __RPC__in_opt __x_ABI_CLumia_CImaging_CAdjustments_CICurve *value);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_Green )( 
            __RPC__in __x_ABI_CLumia_CImaging_CAdjustments_CIArgbColorCurves * This,
            /* [out][retval] */ __RPC__deref_out_opt __x_ABI_CLumia_CImaging_CAdjustments_CICurve **__returnValue);
        
        /* [propput] */ HRESULT ( STDMETHODCALLTYPE *put_Green )( 
            __RPC__in __x_ABI_CLumia_CImaging_CAdjustments_CIArgbColorCurves * This,
            /* [in] */ __RPC__in_opt __x_ABI_CLumia_CImaging_CAdjustments_CICurve *value);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_Blue )( 
            __RPC__in __x_ABI_CLumia_CImaging_CAdjustments_CIArgbColorCurves * This,
            /* [out][retval] */ __RPC__deref_out_opt __x_ABI_CLumia_CImaging_CAdjustments_CICurve **__returnValue);
        
        /* [propput] */ HRESULT ( STDMETHODCALLTYPE *put_Blue )( 
            __RPC__in __x_ABI_CLumia_CImaging_CAdjustments_CIArgbColorCurves * This,
            /* [in] */ __RPC__in_opt __x_ABI_CLumia_CImaging_CAdjustments_CICurve *value);
        
        END_INTERFACE
    } __x_ABI_CLumia_CImaging_CAdjustments_CIArgbColorCurvesVtbl;

    interface __x_ABI_CLumia_CImaging_CAdjustments_CIArgbColorCurves
    {
        CONST_VTBL struct __x_ABI_CLumia_CImaging_CAdjustments_CIArgbColorCurvesVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define __x_ABI_CLumia_CImaging_CAdjustments_CIArgbColorCurves_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __x_ABI_CLumia_CImaging_CAdjustments_CIArgbColorCurves_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __x_ABI_CLumia_CImaging_CAdjustments_CIArgbColorCurves_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __x_ABI_CLumia_CImaging_CAdjustments_CIArgbColorCurves_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 

#define __x_ABI_CLumia_CImaging_CAdjustments_CIArgbColorCurves_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 

#define __x_ABI_CLumia_CImaging_CAdjustments_CIArgbColorCurves_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 


#define __x_ABI_CLumia_CImaging_CAdjustments_CIArgbColorCurves_get_Alpha(This,__returnValue)	\
    ( (This)->lpVtbl -> get_Alpha(This,__returnValue) ) 

#define __x_ABI_CLumia_CImaging_CAdjustments_CIArgbColorCurves_put_Alpha(This,value)	\
    ( (This)->lpVtbl -> put_Alpha(This,value) ) 

#define __x_ABI_CLumia_CImaging_CAdjustments_CIArgbColorCurves_get_Red(This,__returnValue)	\
    ( (This)->lpVtbl -> get_Red(This,__returnValue) ) 

#define __x_ABI_CLumia_CImaging_CAdjustments_CIArgbColorCurves_put_Red(This,value)	\
    ( (This)->lpVtbl -> put_Red(This,value) ) 

#define __x_ABI_CLumia_CImaging_CAdjustments_CIArgbColorCurves_get_Green(This,__returnValue)	\
    ( (This)->lpVtbl -> get_Green(This,__returnValue) ) 

#define __x_ABI_CLumia_CImaging_CAdjustments_CIArgbColorCurves_put_Green(This,value)	\
    ( (This)->lpVtbl -> put_Green(This,value) ) 

#define __x_ABI_CLumia_CImaging_CAdjustments_CIArgbColorCurves_get_Blue(This,__returnValue)	\
    ( (This)->lpVtbl -> get_Blue(This,__returnValue) ) 

#define __x_ABI_CLumia_CImaging_CAdjustments_CIArgbColorCurves_put_Blue(This,value)	\
    ( (This)->lpVtbl -> put_Blue(This,value) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* ____x_ABI_CLumia_CImaging_CAdjustments_CIArgbColorCurves_INTERFACE_DEFINED__ */


/* interface __MIDL_itf_Lumia2EImaging2EAdjustments_0000_0040 */
/* [local] */ 

#if !defined(____x_ABI_CLumia_CImaging_CAdjustments_CIAutoEnhanceFilter_INTERFACE_DEFINED__)
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Lumia_Imaging_Adjustments_IAutoEnhanceFilter[] = L"Lumia.Imaging.Adjustments.IAutoEnhanceFilter";
#endif /* !defined(____x_ABI_CLumia_CImaging_CAdjustments_CIAutoEnhanceFilter_INTERFACE_DEFINED__) */


/* interface __MIDL_itf_Lumia2EImaging2EAdjustments_0000_0040 */
/* [local] */ 



extern RPC_IF_HANDLE __MIDL_itf_Lumia2EImaging2EAdjustments_0000_0040_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_Lumia2EImaging2EAdjustments_0000_0040_v0_0_s_ifspec;

#ifndef ____x_ABI_CLumia_CImaging_CAdjustments_CIAutoEnhanceFilter_INTERFACE_DEFINED__
#define ____x_ABI_CLumia_CImaging_CAdjustments_CIAutoEnhanceFilter_INTERFACE_DEFINED__

/* interface __x_ABI_CLumia_CImaging_CAdjustments_CIAutoEnhanceFilter */
/* [uuid][object] */ 



/* interface ABI::Lumia::Imaging::Adjustments::IAutoEnhanceFilter */
/* [uuid][object] */ 


EXTERN_C const IID IID___x_ABI_CLumia_CImaging_CAdjustments_CIAutoEnhanceFilter;

#if defined(__cplusplus) && !defined(CINTERFACE)
    } /* end extern "C" */
    namespace ABI {
        namespace Lumia {
            namespace Imaging {
                namespace Adjustments {
                    
                    MIDL_INTERFACE("CC22DB35-583C-3F04-953A-552D704B8772")
                    IAutoEnhanceFilter : public IInspectable
                    {
                    public:
                        virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_IsContrastAndBrightnessEnhancementEnabled( 
                            /* [out][retval] */ __RPC__out boolean *__returnValue) = 0;
                        
                        virtual /* [propput] */ HRESULT STDMETHODCALLTYPE put_IsContrastAndBrightnessEnhancementEnabled( 
                            /* [in] */ boolean value) = 0;
                        
                        virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_IsLocalBoostEnhancementEnabled( 
                            /* [out][retval] */ __RPC__out boolean *__returnValue) = 0;
                        
                        virtual /* [propput] */ HRESULT STDMETHODCALLTYPE put_IsLocalBoostEnhancementEnabled( 
                            /* [in] */ boolean value) = 0;
                        
                        virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_WhiteBalanceMode( 
                            /* [out][retval] */ __RPC__out ABI::Lumia::Imaging::Adjustments::WhiteBalanceMode *__returnValue) = 0;
                        
                        virtual /* [propput] */ HRESULT STDMETHODCALLTYPE put_WhiteBalanceMode( 
                            /* [in] */ ABI::Lumia::Imaging::Adjustments::WhiteBalanceMode value) = 0;
                        
                        virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_TargetWhitePoint( 
                            /* [out][retval] */ __RPC__out ABI::Windows::UI::Color *__returnValue) = 0;
                        
                        virtual /* [propput] */ HRESULT STDMETHODCALLTYPE put_TargetWhitePoint( 
                            /* [in] */ ABI::Windows::UI::Color value) = 0;
                        
                        virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_SourceWhitePoint( 
                            /* [out][retval] */ __RPC__out ABI::Windows::UI::Color *__returnValue) = 0;
                        
                        virtual /* [propput] */ HRESULT STDMETHODCALLTYPE put_SourceWhitePoint( 
                            /* [in] */ ABI::Windows::UI::Color value) = 0;
                        
                    };

                    extern const __declspec(selectany) IID & IID_IAutoEnhanceFilter = __uuidof(IAutoEnhanceFilter);

                    
                }  /* end namespace */
            }  /* end namespace */
        }  /* end namespace */
    }  /* end namespace */
    extern "C" { 
    
#else 	/* C style interface */

    typedef struct __x_ABI_CLumia_CImaging_CAdjustments_CIAutoEnhanceFilterVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            __RPC__in __x_ABI_CLumia_CImaging_CAdjustments_CIAutoEnhanceFilter * This,
            /* [in] */ __RPC__in REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            __RPC__in __x_ABI_CLumia_CImaging_CAdjustments_CIAutoEnhanceFilter * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            __RPC__in __x_ABI_CLumia_CImaging_CAdjustments_CIAutoEnhanceFilter * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetIids )( 
            __RPC__in __x_ABI_CLumia_CImaging_CAdjustments_CIAutoEnhanceFilter * This,
            /* [out] */ __RPC__out ULONG *iidCount,
            /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
        
        HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )( 
            __RPC__in __x_ABI_CLumia_CImaging_CAdjustments_CIAutoEnhanceFilter * This,
            /* [out] */ __RPC__deref_out_opt HSTRING *className);
        
        HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )( 
            __RPC__in __x_ABI_CLumia_CImaging_CAdjustments_CIAutoEnhanceFilter * This,
            /* [out] */ __RPC__out TrustLevel *trustLevel);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_IsContrastAndBrightnessEnhancementEnabled )( 
            __RPC__in __x_ABI_CLumia_CImaging_CAdjustments_CIAutoEnhanceFilter * This,
            /* [out][retval] */ __RPC__out boolean *__returnValue);
        
        /* [propput] */ HRESULT ( STDMETHODCALLTYPE *put_IsContrastAndBrightnessEnhancementEnabled )( 
            __RPC__in __x_ABI_CLumia_CImaging_CAdjustments_CIAutoEnhanceFilter * This,
            /* [in] */ boolean value);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_IsLocalBoostEnhancementEnabled )( 
            __RPC__in __x_ABI_CLumia_CImaging_CAdjustments_CIAutoEnhanceFilter * This,
            /* [out][retval] */ __RPC__out boolean *__returnValue);
        
        /* [propput] */ HRESULT ( STDMETHODCALLTYPE *put_IsLocalBoostEnhancementEnabled )( 
            __RPC__in __x_ABI_CLumia_CImaging_CAdjustments_CIAutoEnhanceFilter * This,
            /* [in] */ boolean value);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_WhiteBalanceMode )( 
            __RPC__in __x_ABI_CLumia_CImaging_CAdjustments_CIAutoEnhanceFilter * This,
            /* [out][retval] */ __RPC__out __x_ABI_CLumia_CImaging_CAdjustments_CWhiteBalanceMode *__returnValue);
        
        /* [propput] */ HRESULT ( STDMETHODCALLTYPE *put_WhiteBalanceMode )( 
            __RPC__in __x_ABI_CLumia_CImaging_CAdjustments_CIAutoEnhanceFilter * This,
            /* [in] */ __x_ABI_CLumia_CImaging_CAdjustments_CWhiteBalanceMode value);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_TargetWhitePoint )( 
            __RPC__in __x_ABI_CLumia_CImaging_CAdjustments_CIAutoEnhanceFilter * This,
            /* [out][retval] */ __RPC__out __x_ABI_CWindows_CUI_CColor *__returnValue);
        
        /* [propput] */ HRESULT ( STDMETHODCALLTYPE *put_TargetWhitePoint )( 
            __RPC__in __x_ABI_CLumia_CImaging_CAdjustments_CIAutoEnhanceFilter * This,
            /* [in] */ __x_ABI_CWindows_CUI_CColor value);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_SourceWhitePoint )( 
            __RPC__in __x_ABI_CLumia_CImaging_CAdjustments_CIAutoEnhanceFilter * This,
            /* [out][retval] */ __RPC__out __x_ABI_CWindows_CUI_CColor *__returnValue);
        
        /* [propput] */ HRESULT ( STDMETHODCALLTYPE *put_SourceWhitePoint )( 
            __RPC__in __x_ABI_CLumia_CImaging_CAdjustments_CIAutoEnhanceFilter * This,
            /* [in] */ __x_ABI_CWindows_CUI_CColor value);
        
        END_INTERFACE
    } __x_ABI_CLumia_CImaging_CAdjustments_CIAutoEnhanceFilterVtbl;

    interface __x_ABI_CLumia_CImaging_CAdjustments_CIAutoEnhanceFilter
    {
        CONST_VTBL struct __x_ABI_CLumia_CImaging_CAdjustments_CIAutoEnhanceFilterVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define __x_ABI_CLumia_CImaging_CAdjustments_CIAutoEnhanceFilter_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __x_ABI_CLumia_CImaging_CAdjustments_CIAutoEnhanceFilter_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __x_ABI_CLumia_CImaging_CAdjustments_CIAutoEnhanceFilter_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __x_ABI_CLumia_CImaging_CAdjustments_CIAutoEnhanceFilter_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 

#define __x_ABI_CLumia_CImaging_CAdjustments_CIAutoEnhanceFilter_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 

#define __x_ABI_CLumia_CImaging_CAdjustments_CIAutoEnhanceFilter_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 


#define __x_ABI_CLumia_CImaging_CAdjustments_CIAutoEnhanceFilter_get_IsContrastAndBrightnessEnhancementEnabled(This,__returnValue)	\
    ( (This)->lpVtbl -> get_IsContrastAndBrightnessEnhancementEnabled(This,__returnValue) ) 

#define __x_ABI_CLumia_CImaging_CAdjustments_CIAutoEnhanceFilter_put_IsContrastAndBrightnessEnhancementEnabled(This,value)	\
    ( (This)->lpVtbl -> put_IsContrastAndBrightnessEnhancementEnabled(This,value) ) 

#define __x_ABI_CLumia_CImaging_CAdjustments_CIAutoEnhanceFilter_get_IsLocalBoostEnhancementEnabled(This,__returnValue)	\
    ( (This)->lpVtbl -> get_IsLocalBoostEnhancementEnabled(This,__returnValue) ) 

#define __x_ABI_CLumia_CImaging_CAdjustments_CIAutoEnhanceFilter_put_IsLocalBoostEnhancementEnabled(This,value)	\
    ( (This)->lpVtbl -> put_IsLocalBoostEnhancementEnabled(This,value) ) 

#define __x_ABI_CLumia_CImaging_CAdjustments_CIAutoEnhanceFilter_get_WhiteBalanceMode(This,__returnValue)	\
    ( (This)->lpVtbl -> get_WhiteBalanceMode(This,__returnValue) ) 

#define __x_ABI_CLumia_CImaging_CAdjustments_CIAutoEnhanceFilter_put_WhiteBalanceMode(This,value)	\
    ( (This)->lpVtbl -> put_WhiteBalanceMode(This,value) ) 

#define __x_ABI_CLumia_CImaging_CAdjustments_CIAutoEnhanceFilter_get_TargetWhitePoint(This,__returnValue)	\
    ( (This)->lpVtbl -> get_TargetWhitePoint(This,__returnValue) ) 

#define __x_ABI_CLumia_CImaging_CAdjustments_CIAutoEnhanceFilter_put_TargetWhitePoint(This,value)	\
    ( (This)->lpVtbl -> put_TargetWhitePoint(This,value) ) 

#define __x_ABI_CLumia_CImaging_CAdjustments_CIAutoEnhanceFilter_get_SourceWhitePoint(This,__returnValue)	\
    ( (This)->lpVtbl -> get_SourceWhitePoint(This,__returnValue) ) 

#define __x_ABI_CLumia_CImaging_CAdjustments_CIAutoEnhanceFilter_put_SourceWhitePoint(This,value)	\
    ( (This)->lpVtbl -> put_SourceWhitePoint(This,value) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* ____x_ABI_CLumia_CImaging_CAdjustments_CIAutoEnhanceFilter_INTERFACE_DEFINED__ */


/* interface __MIDL_itf_Lumia2EImaging2EAdjustments_0000_0041 */
/* [local] */ 

#if !defined(____x_ABI_CLumia_CImaging_CAdjustments_CIAutoEnhanceFilterFactory_INTERFACE_DEFINED__)
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Lumia_Imaging_Adjustments_IAutoEnhanceFilterFactory[] = L"Lumia.Imaging.Adjustments.IAutoEnhanceFilterFactory";
#endif /* !defined(____x_ABI_CLumia_CImaging_CAdjustments_CIAutoEnhanceFilterFactory_INTERFACE_DEFINED__) */


/* interface __MIDL_itf_Lumia2EImaging2EAdjustments_0000_0041 */
/* [local] */ 



extern RPC_IF_HANDLE __MIDL_itf_Lumia2EImaging2EAdjustments_0000_0041_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_Lumia2EImaging2EAdjustments_0000_0041_v0_0_s_ifspec;

#ifndef ____x_ABI_CLumia_CImaging_CAdjustments_CIAutoEnhanceFilterFactory_INTERFACE_DEFINED__
#define ____x_ABI_CLumia_CImaging_CAdjustments_CIAutoEnhanceFilterFactory_INTERFACE_DEFINED__

/* interface __x_ABI_CLumia_CImaging_CAdjustments_CIAutoEnhanceFilterFactory */
/* [uuid][object] */ 



/* interface ABI::Lumia::Imaging::Adjustments::IAutoEnhanceFilterFactory */
/* [uuid][object] */ 


EXTERN_C const IID IID___x_ABI_CLumia_CImaging_CAdjustments_CIAutoEnhanceFilterFactory;

#if defined(__cplusplus) && !defined(CINTERFACE)
    } /* end extern "C" */
    namespace ABI {
        namespace Lumia {
            namespace Imaging {
                namespace Adjustments {
                    
                    MIDL_INTERFACE("CE60AFD8-3EBB-3361-BE03-4860A447C1C8")
                    IAutoEnhanceFilterFactory : public IInspectable
                    {
                    public:
                        virtual HRESULT STDMETHODCALLTYPE CreateWithoutWhiteBalance( 
                            /* [in] */ boolean isContrastAndBrightnessEnhancementEnabled,
                            /* [in] */ boolean isLocalBoostEnhancementEnabled,
                            /* [out][retval] */ __RPC__deref_out_opt ABI::Lumia::Imaging::Adjustments::IAutoEnhanceFilter **__returnValue) = 0;
                        
                        virtual HRESULT STDMETHODCALLTYPE CreateWithAutoWhiteBalance( 
                            /* [in] */ boolean isContrastAndBrightnessEnhancementEnabled,
                            /* [in] */ boolean isLocalBoostEnhancementEnabled,
                            /* [in] */ ABI::Windows::UI::Color targetWhitePoint,
                            /* [out][retval] */ __RPC__deref_out_opt ABI::Lumia::Imaging::Adjustments::IAutoEnhanceFilter **__returnValue) = 0;
                        
                        virtual HRESULT STDMETHODCALLTYPE CreateWithManualWhiteBalance( 
                            /* [in] */ boolean isContrastAndBrightnessEnhancementEnabled,
                            /* [in] */ boolean isLocalBoostEnhancementEnabled,
                            /* [in] */ ABI::Windows::UI::Color targetWhitePoint,
                            /* [in] */ ABI::Windows::UI::Color sourceWhitePoint,
                            /* [out][retval] */ __RPC__deref_out_opt ABI::Lumia::Imaging::Adjustments::IAutoEnhanceFilter **__returnValue) = 0;
                        
                    };

                    extern const __declspec(selectany) IID & IID_IAutoEnhanceFilterFactory = __uuidof(IAutoEnhanceFilterFactory);

                    
                }  /* end namespace */
            }  /* end namespace */
        }  /* end namespace */
    }  /* end namespace */
    extern "C" { 
    
#else 	/* C style interface */

    typedef struct __x_ABI_CLumia_CImaging_CAdjustments_CIAutoEnhanceFilterFactoryVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            __RPC__in __x_ABI_CLumia_CImaging_CAdjustments_CIAutoEnhanceFilterFactory * This,
            /* [in] */ __RPC__in REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            __RPC__in __x_ABI_CLumia_CImaging_CAdjustments_CIAutoEnhanceFilterFactory * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            __RPC__in __x_ABI_CLumia_CImaging_CAdjustments_CIAutoEnhanceFilterFactory * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetIids )( 
            __RPC__in __x_ABI_CLumia_CImaging_CAdjustments_CIAutoEnhanceFilterFactory * This,
            /* [out] */ __RPC__out ULONG *iidCount,
            /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
        
        HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )( 
            __RPC__in __x_ABI_CLumia_CImaging_CAdjustments_CIAutoEnhanceFilterFactory * This,
            /* [out] */ __RPC__deref_out_opt HSTRING *className);
        
        HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )( 
            __RPC__in __x_ABI_CLumia_CImaging_CAdjustments_CIAutoEnhanceFilterFactory * This,
            /* [out] */ __RPC__out TrustLevel *trustLevel);
        
        HRESULT ( STDMETHODCALLTYPE *CreateWithoutWhiteBalance )( 
            __RPC__in __x_ABI_CLumia_CImaging_CAdjustments_CIAutoEnhanceFilterFactory * This,
            /* [in] */ boolean isContrastAndBrightnessEnhancementEnabled,
            /* [in] */ boolean isLocalBoostEnhancementEnabled,
            /* [out][retval] */ __RPC__deref_out_opt __x_ABI_CLumia_CImaging_CAdjustments_CIAutoEnhanceFilter **__returnValue);
        
        HRESULT ( STDMETHODCALLTYPE *CreateWithAutoWhiteBalance )( 
            __RPC__in __x_ABI_CLumia_CImaging_CAdjustments_CIAutoEnhanceFilterFactory * This,
            /* [in] */ boolean isContrastAndBrightnessEnhancementEnabled,
            /* [in] */ boolean isLocalBoostEnhancementEnabled,
            /* [in] */ __x_ABI_CWindows_CUI_CColor targetWhitePoint,
            /* [out][retval] */ __RPC__deref_out_opt __x_ABI_CLumia_CImaging_CAdjustments_CIAutoEnhanceFilter **__returnValue);
        
        HRESULT ( STDMETHODCALLTYPE *CreateWithManualWhiteBalance )( 
            __RPC__in __x_ABI_CLumia_CImaging_CAdjustments_CIAutoEnhanceFilterFactory * This,
            /* [in] */ boolean isContrastAndBrightnessEnhancementEnabled,
            /* [in] */ boolean isLocalBoostEnhancementEnabled,
            /* [in] */ __x_ABI_CWindows_CUI_CColor targetWhitePoint,
            /* [in] */ __x_ABI_CWindows_CUI_CColor sourceWhitePoint,
            /* [out][retval] */ __RPC__deref_out_opt __x_ABI_CLumia_CImaging_CAdjustments_CIAutoEnhanceFilter **__returnValue);
        
        END_INTERFACE
    } __x_ABI_CLumia_CImaging_CAdjustments_CIAutoEnhanceFilterFactoryVtbl;

    interface __x_ABI_CLumia_CImaging_CAdjustments_CIAutoEnhanceFilterFactory
    {
        CONST_VTBL struct __x_ABI_CLumia_CImaging_CAdjustments_CIAutoEnhanceFilterFactoryVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define __x_ABI_CLumia_CImaging_CAdjustments_CIAutoEnhanceFilterFactory_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __x_ABI_CLumia_CImaging_CAdjustments_CIAutoEnhanceFilterFactory_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __x_ABI_CLumia_CImaging_CAdjustments_CIAutoEnhanceFilterFactory_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __x_ABI_CLumia_CImaging_CAdjustments_CIAutoEnhanceFilterFactory_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 

#define __x_ABI_CLumia_CImaging_CAdjustments_CIAutoEnhanceFilterFactory_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 

#define __x_ABI_CLumia_CImaging_CAdjustments_CIAutoEnhanceFilterFactory_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 


#define __x_ABI_CLumia_CImaging_CAdjustments_CIAutoEnhanceFilterFactory_CreateWithoutWhiteBalance(This,isContrastAndBrightnessEnhancementEnabled,isLocalBoostEnhancementEnabled,__returnValue)	\
    ( (This)->lpVtbl -> CreateWithoutWhiteBalance(This,isContrastAndBrightnessEnhancementEnabled,isLocalBoostEnhancementEnabled,__returnValue) ) 

#define __x_ABI_CLumia_CImaging_CAdjustments_CIAutoEnhanceFilterFactory_CreateWithAutoWhiteBalance(This,isContrastAndBrightnessEnhancementEnabled,isLocalBoostEnhancementEnabled,targetWhitePoint,__returnValue)	\
    ( (This)->lpVtbl -> CreateWithAutoWhiteBalance(This,isContrastAndBrightnessEnhancementEnabled,isLocalBoostEnhancementEnabled,targetWhitePoint,__returnValue) ) 

#define __x_ABI_CLumia_CImaging_CAdjustments_CIAutoEnhanceFilterFactory_CreateWithManualWhiteBalance(This,isContrastAndBrightnessEnhancementEnabled,isLocalBoostEnhancementEnabled,targetWhitePoint,sourceWhitePoint,__returnValue)	\
    ( (This)->lpVtbl -> CreateWithManualWhiteBalance(This,isContrastAndBrightnessEnhancementEnabled,isLocalBoostEnhancementEnabled,targetWhitePoint,sourceWhitePoint,__returnValue) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* ____x_ABI_CLumia_CImaging_CAdjustments_CIAutoEnhanceFilterFactory_INTERFACE_DEFINED__ */


/* interface __MIDL_itf_Lumia2EImaging2EAdjustments_0000_0042 */
/* [local] */ 

#if !defined(____x_ABI_CLumia_CImaging_CAdjustments_CIAutoFixAnalyzerResult_INTERFACE_DEFINED__)
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Lumia_Imaging_Adjustments_IAutoFixAnalyzerResult[] = L"Lumia.Imaging.Adjustments.IAutoFixAnalyzerResult";
#endif /* !defined(____x_ABI_CLumia_CImaging_CAdjustments_CIAutoFixAnalyzerResult_INTERFACE_DEFINED__) */


/* interface __MIDL_itf_Lumia2EImaging2EAdjustments_0000_0042 */
/* [local] */ 



extern RPC_IF_HANDLE __MIDL_itf_Lumia2EImaging2EAdjustments_0000_0042_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_Lumia2EImaging2EAdjustments_0000_0042_v0_0_s_ifspec;

#ifndef ____x_ABI_CLumia_CImaging_CAdjustments_CIAutoFixAnalyzerResult_INTERFACE_DEFINED__
#define ____x_ABI_CLumia_CImaging_CAdjustments_CIAutoFixAnalyzerResult_INTERFACE_DEFINED__

/* interface __x_ABI_CLumia_CImaging_CAdjustments_CIAutoFixAnalyzerResult */
/* [uuid][object] */ 



/* interface ABI::Lumia::Imaging::Adjustments::IAutoFixAnalyzerResult */
/* [uuid][object] */ 


EXTERN_C const IID IID___x_ABI_CLumia_CImaging_CAdjustments_CIAutoFixAnalyzerResult;

#if defined(__cplusplus) && !defined(CINTERFACE)
    } /* end extern "C" */
    namespace ABI {
        namespace Lumia {
            namespace Imaging {
                namespace Adjustments {
                    
                    MIDL_INTERFACE("9B1D6A29-3916-362C-96ED-142D818E839B")
                    IAutoFixAnalyzerResult : public IInspectable
                    {
                    public:
                        virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_LightnessCurve( 
                            /* [out][retval] */ __RPC__deref_out_opt ABI::Lumia::Imaging::Adjustments::ICurve **__returnValue) = 0;
                        
                        virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_SaturationCurve( 
                            /* [out][retval] */ __RPC__deref_out_opt ABI::Lumia::Imaging::Adjustments::ICurve **__returnValue) = 0;
                        
                        virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_TintParameter( 
                            /* [out][retval] */ __RPC__out DOUBLE *__returnValue) = 0;
                        
                        virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_TemperatureParameter( 
                            /* [out][retval] */ __RPC__out DOUBLE *__returnValue) = 0;
                        
                    };

                    extern const __declspec(selectany) IID & IID_IAutoFixAnalyzerResult = __uuidof(IAutoFixAnalyzerResult);

                    
                }  /* end namespace */
            }  /* end namespace */
        }  /* end namespace */
    }  /* end namespace */
    extern "C" { 
    
#else 	/* C style interface */

    typedef struct __x_ABI_CLumia_CImaging_CAdjustments_CIAutoFixAnalyzerResultVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            __RPC__in __x_ABI_CLumia_CImaging_CAdjustments_CIAutoFixAnalyzerResult * This,
            /* [in] */ __RPC__in REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            __RPC__in __x_ABI_CLumia_CImaging_CAdjustments_CIAutoFixAnalyzerResult * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            __RPC__in __x_ABI_CLumia_CImaging_CAdjustments_CIAutoFixAnalyzerResult * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetIids )( 
            __RPC__in __x_ABI_CLumia_CImaging_CAdjustments_CIAutoFixAnalyzerResult * This,
            /* [out] */ __RPC__out ULONG *iidCount,
            /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
        
        HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )( 
            __RPC__in __x_ABI_CLumia_CImaging_CAdjustments_CIAutoFixAnalyzerResult * This,
            /* [out] */ __RPC__deref_out_opt HSTRING *className);
        
        HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )( 
            __RPC__in __x_ABI_CLumia_CImaging_CAdjustments_CIAutoFixAnalyzerResult * This,
            /* [out] */ __RPC__out TrustLevel *trustLevel);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_LightnessCurve )( 
            __RPC__in __x_ABI_CLumia_CImaging_CAdjustments_CIAutoFixAnalyzerResult * This,
            /* [out][retval] */ __RPC__deref_out_opt __x_ABI_CLumia_CImaging_CAdjustments_CICurve **__returnValue);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_SaturationCurve )( 
            __RPC__in __x_ABI_CLumia_CImaging_CAdjustments_CIAutoFixAnalyzerResult * This,
            /* [out][retval] */ __RPC__deref_out_opt __x_ABI_CLumia_CImaging_CAdjustments_CICurve **__returnValue);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_TintParameter )( 
            __RPC__in __x_ABI_CLumia_CImaging_CAdjustments_CIAutoFixAnalyzerResult * This,
            /* [out][retval] */ __RPC__out DOUBLE *__returnValue);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_TemperatureParameter )( 
            __RPC__in __x_ABI_CLumia_CImaging_CAdjustments_CIAutoFixAnalyzerResult * This,
            /* [out][retval] */ __RPC__out DOUBLE *__returnValue);
        
        END_INTERFACE
    } __x_ABI_CLumia_CImaging_CAdjustments_CIAutoFixAnalyzerResultVtbl;

    interface __x_ABI_CLumia_CImaging_CAdjustments_CIAutoFixAnalyzerResult
    {
        CONST_VTBL struct __x_ABI_CLumia_CImaging_CAdjustments_CIAutoFixAnalyzerResultVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define __x_ABI_CLumia_CImaging_CAdjustments_CIAutoFixAnalyzerResult_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __x_ABI_CLumia_CImaging_CAdjustments_CIAutoFixAnalyzerResult_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __x_ABI_CLumia_CImaging_CAdjustments_CIAutoFixAnalyzerResult_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __x_ABI_CLumia_CImaging_CAdjustments_CIAutoFixAnalyzerResult_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 

#define __x_ABI_CLumia_CImaging_CAdjustments_CIAutoFixAnalyzerResult_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 

#define __x_ABI_CLumia_CImaging_CAdjustments_CIAutoFixAnalyzerResult_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 


#define __x_ABI_CLumia_CImaging_CAdjustments_CIAutoFixAnalyzerResult_get_LightnessCurve(This,__returnValue)	\
    ( (This)->lpVtbl -> get_LightnessCurve(This,__returnValue) ) 

#define __x_ABI_CLumia_CImaging_CAdjustments_CIAutoFixAnalyzerResult_get_SaturationCurve(This,__returnValue)	\
    ( (This)->lpVtbl -> get_SaturationCurve(This,__returnValue) ) 

#define __x_ABI_CLumia_CImaging_CAdjustments_CIAutoFixAnalyzerResult_get_TintParameter(This,__returnValue)	\
    ( (This)->lpVtbl -> get_TintParameter(This,__returnValue) ) 

#define __x_ABI_CLumia_CImaging_CAdjustments_CIAutoFixAnalyzerResult_get_TemperatureParameter(This,__returnValue)	\
    ( (This)->lpVtbl -> get_TemperatureParameter(This,__returnValue) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* ____x_ABI_CLumia_CImaging_CAdjustments_CIAutoFixAnalyzerResult_INTERFACE_DEFINED__ */


/* interface __MIDL_itf_Lumia2EImaging2EAdjustments_0000_0043 */
/* [local] */ 

#if !defined(____x_ABI_CLumia_CImaging_CAdjustments_CIAutoFixAnalyzer_INTERFACE_DEFINED__)
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Lumia_Imaging_Adjustments_IAutoFixAnalyzer[] = L"Lumia.Imaging.Adjustments.IAutoFixAnalyzer";
#endif /* !defined(____x_ABI_CLumia_CImaging_CAdjustments_CIAutoFixAnalyzer_INTERFACE_DEFINED__) */


/* interface __MIDL_itf_Lumia2EImaging2EAdjustments_0000_0043 */
/* [local] */ 



extern RPC_IF_HANDLE __MIDL_itf_Lumia2EImaging2EAdjustments_0000_0043_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_Lumia2EImaging2EAdjustments_0000_0043_v0_0_s_ifspec;

#ifndef ____x_ABI_CLumia_CImaging_CAdjustments_CIAutoFixAnalyzer_INTERFACE_DEFINED__
#define ____x_ABI_CLumia_CImaging_CAdjustments_CIAutoFixAnalyzer_INTERFACE_DEFINED__

/* interface __x_ABI_CLumia_CImaging_CAdjustments_CIAutoFixAnalyzer */
/* [uuid][object] */ 



/* interface ABI::Lumia::Imaging::Adjustments::IAutoFixAnalyzer */
/* [uuid][object] */ 


EXTERN_C const IID IID___x_ABI_CLumia_CImaging_CAdjustments_CIAutoFixAnalyzer;

#if defined(__cplusplus) && !defined(CINTERFACE)
    } /* end extern "C" */
    namespace ABI {
        namespace Lumia {
            namespace Imaging {
                namespace Adjustments {
                    
                    MIDL_INTERFACE("E51E88FE-C340-3A2D-8EAE-9A27EDCFFE8D")
                    IAutoFixAnalyzer : public IInspectable
                    {
                    public:
                        virtual HRESULT STDMETHODCALLTYPE AnalyzeAsync( 
                            /* [out][retval] */ __RPC__deref_out_opt __FIAsyncOperation_1_Lumia__CImaging__CAdjustments__CAutoFixAnalyzerResult **__returnValue) = 0;
                        
                        virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_Quality( 
                            /* [out][retval] */ __RPC__out DOUBLE *__returnValue) = 0;
                        
                        virtual /* [propput] */ HRESULT STDMETHODCALLTYPE put_Quality( 
                            /* [in] */ DOUBLE quality) = 0;
                        
                    };

                    extern const __declspec(selectany) IID & IID_IAutoFixAnalyzer = __uuidof(IAutoFixAnalyzer);

                    
                }  /* end namespace */
            }  /* end namespace */
        }  /* end namespace */
    }  /* end namespace */
    extern "C" { 
    
#else 	/* C style interface */

    typedef struct __x_ABI_CLumia_CImaging_CAdjustments_CIAutoFixAnalyzerVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            __RPC__in __x_ABI_CLumia_CImaging_CAdjustments_CIAutoFixAnalyzer * This,
            /* [in] */ __RPC__in REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            __RPC__in __x_ABI_CLumia_CImaging_CAdjustments_CIAutoFixAnalyzer * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            __RPC__in __x_ABI_CLumia_CImaging_CAdjustments_CIAutoFixAnalyzer * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetIids )( 
            __RPC__in __x_ABI_CLumia_CImaging_CAdjustments_CIAutoFixAnalyzer * This,
            /* [out] */ __RPC__out ULONG *iidCount,
            /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
        
        HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )( 
            __RPC__in __x_ABI_CLumia_CImaging_CAdjustments_CIAutoFixAnalyzer * This,
            /* [out] */ __RPC__deref_out_opt HSTRING *className);
        
        HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )( 
            __RPC__in __x_ABI_CLumia_CImaging_CAdjustments_CIAutoFixAnalyzer * This,
            /* [out] */ __RPC__out TrustLevel *trustLevel);
        
        HRESULT ( STDMETHODCALLTYPE *AnalyzeAsync )( 
            __RPC__in __x_ABI_CLumia_CImaging_CAdjustments_CIAutoFixAnalyzer * This,
            /* [out][retval] */ __RPC__deref_out_opt __FIAsyncOperation_1_Lumia__CImaging__CAdjustments__CAutoFixAnalyzerResult **__returnValue);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_Quality )( 
            __RPC__in __x_ABI_CLumia_CImaging_CAdjustments_CIAutoFixAnalyzer * This,
            /* [out][retval] */ __RPC__out DOUBLE *__returnValue);
        
        /* [propput] */ HRESULT ( STDMETHODCALLTYPE *put_Quality )( 
            __RPC__in __x_ABI_CLumia_CImaging_CAdjustments_CIAutoFixAnalyzer * This,
            /* [in] */ DOUBLE quality);
        
        END_INTERFACE
    } __x_ABI_CLumia_CImaging_CAdjustments_CIAutoFixAnalyzerVtbl;

    interface __x_ABI_CLumia_CImaging_CAdjustments_CIAutoFixAnalyzer
    {
        CONST_VTBL struct __x_ABI_CLumia_CImaging_CAdjustments_CIAutoFixAnalyzerVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define __x_ABI_CLumia_CImaging_CAdjustments_CIAutoFixAnalyzer_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __x_ABI_CLumia_CImaging_CAdjustments_CIAutoFixAnalyzer_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __x_ABI_CLumia_CImaging_CAdjustments_CIAutoFixAnalyzer_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __x_ABI_CLumia_CImaging_CAdjustments_CIAutoFixAnalyzer_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 

#define __x_ABI_CLumia_CImaging_CAdjustments_CIAutoFixAnalyzer_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 

#define __x_ABI_CLumia_CImaging_CAdjustments_CIAutoFixAnalyzer_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 


#define __x_ABI_CLumia_CImaging_CAdjustments_CIAutoFixAnalyzer_AnalyzeAsync(This,__returnValue)	\
    ( (This)->lpVtbl -> AnalyzeAsync(This,__returnValue) ) 

#define __x_ABI_CLumia_CImaging_CAdjustments_CIAutoFixAnalyzer_get_Quality(This,__returnValue)	\
    ( (This)->lpVtbl -> get_Quality(This,__returnValue) ) 

#define __x_ABI_CLumia_CImaging_CAdjustments_CIAutoFixAnalyzer_put_Quality(This,quality)	\
    ( (This)->lpVtbl -> put_Quality(This,quality) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* ____x_ABI_CLumia_CImaging_CAdjustments_CIAutoFixAnalyzer_INTERFACE_DEFINED__ */


/* interface __MIDL_itf_Lumia2EImaging2EAdjustments_0000_0044 */
/* [local] */ 

#if !defined(____x_ABI_CLumia_CImaging_CAdjustments_CIAutoFixAnalyzerFactory_INTERFACE_DEFINED__)
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Lumia_Imaging_Adjustments_IAutoFixAnalyzerFactory[] = L"Lumia.Imaging.Adjustments.IAutoFixAnalyzerFactory";
#endif /* !defined(____x_ABI_CLumia_CImaging_CAdjustments_CIAutoFixAnalyzerFactory_INTERFACE_DEFINED__) */


/* interface __MIDL_itf_Lumia2EImaging2EAdjustments_0000_0044 */
/* [local] */ 



extern RPC_IF_HANDLE __MIDL_itf_Lumia2EImaging2EAdjustments_0000_0044_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_Lumia2EImaging2EAdjustments_0000_0044_v0_0_s_ifspec;

#ifndef ____x_ABI_CLumia_CImaging_CAdjustments_CIAutoFixAnalyzerFactory_INTERFACE_DEFINED__
#define ____x_ABI_CLumia_CImaging_CAdjustments_CIAutoFixAnalyzerFactory_INTERFACE_DEFINED__

/* interface __x_ABI_CLumia_CImaging_CAdjustments_CIAutoFixAnalyzerFactory */
/* [uuid][object] */ 



/* interface ABI::Lumia::Imaging::Adjustments::IAutoFixAnalyzerFactory */
/* [uuid][object] */ 


EXTERN_C const IID IID___x_ABI_CLumia_CImaging_CAdjustments_CIAutoFixAnalyzerFactory;

#if defined(__cplusplus) && !defined(CINTERFACE)
    } /* end extern "C" */
    namespace ABI {
        namespace Lumia {
            namespace Imaging {
                namespace Adjustments {
                    
                    MIDL_INTERFACE("1887BB7D-8833-3E5C-BB84-75C003780982")
                    IAutoFixAnalyzerFactory : public IInspectable
                    {
                    public:
                        virtual HRESULT STDMETHODCALLTYPE Create( 
                            /* [in] */ __RPC__in_opt ABI::Lumia::Imaging::IImageProvider *source,
                            /* [out][retval] */ __RPC__deref_out_opt ABI::Lumia::Imaging::Adjustments::IAutoFixAnalyzer **__returnValue) = 0;
                        
                        virtual HRESULT STDMETHODCALLTYPE CreateWithQuality( 
                            /* [in] */ __RPC__in_opt ABI::Lumia::Imaging::IImageProvider *source,
                            /* [in] */ DOUBLE quality,
                            /* [out][retval] */ __RPC__deref_out_opt ABI::Lumia::Imaging::Adjustments::IAutoFixAnalyzer **__returnValue) = 0;
                        
                    };

                    extern const __declspec(selectany) IID & IID_IAutoFixAnalyzerFactory = __uuidof(IAutoFixAnalyzerFactory);

                    
                }  /* end namespace */
            }  /* end namespace */
        }  /* end namespace */
    }  /* end namespace */
    extern "C" { 
    
#else 	/* C style interface */

    typedef struct __x_ABI_CLumia_CImaging_CAdjustments_CIAutoFixAnalyzerFactoryVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            __RPC__in __x_ABI_CLumia_CImaging_CAdjustments_CIAutoFixAnalyzerFactory * This,
            /* [in] */ __RPC__in REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            __RPC__in __x_ABI_CLumia_CImaging_CAdjustments_CIAutoFixAnalyzerFactory * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            __RPC__in __x_ABI_CLumia_CImaging_CAdjustments_CIAutoFixAnalyzerFactory * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetIids )( 
            __RPC__in __x_ABI_CLumia_CImaging_CAdjustments_CIAutoFixAnalyzerFactory * This,
            /* [out] */ __RPC__out ULONG *iidCount,
            /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
        
        HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )( 
            __RPC__in __x_ABI_CLumia_CImaging_CAdjustments_CIAutoFixAnalyzerFactory * This,
            /* [out] */ __RPC__deref_out_opt HSTRING *className);
        
        HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )( 
            __RPC__in __x_ABI_CLumia_CImaging_CAdjustments_CIAutoFixAnalyzerFactory * This,
            /* [out] */ __RPC__out TrustLevel *trustLevel);
        
        HRESULT ( STDMETHODCALLTYPE *Create )( 
            __RPC__in __x_ABI_CLumia_CImaging_CAdjustments_CIAutoFixAnalyzerFactory * This,
            /* [in] */ __RPC__in_opt __x_ABI_CLumia_CImaging_CIImageProvider *source,
            /* [out][retval] */ __RPC__deref_out_opt __x_ABI_CLumia_CImaging_CAdjustments_CIAutoFixAnalyzer **__returnValue);
        
        HRESULT ( STDMETHODCALLTYPE *CreateWithQuality )( 
            __RPC__in __x_ABI_CLumia_CImaging_CAdjustments_CIAutoFixAnalyzerFactory * This,
            /* [in] */ __RPC__in_opt __x_ABI_CLumia_CImaging_CIImageProvider *source,
            /* [in] */ DOUBLE quality,
            /* [out][retval] */ __RPC__deref_out_opt __x_ABI_CLumia_CImaging_CAdjustments_CIAutoFixAnalyzer **__returnValue);
        
        END_INTERFACE
    } __x_ABI_CLumia_CImaging_CAdjustments_CIAutoFixAnalyzerFactoryVtbl;

    interface __x_ABI_CLumia_CImaging_CAdjustments_CIAutoFixAnalyzerFactory
    {
        CONST_VTBL struct __x_ABI_CLumia_CImaging_CAdjustments_CIAutoFixAnalyzerFactoryVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define __x_ABI_CLumia_CImaging_CAdjustments_CIAutoFixAnalyzerFactory_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __x_ABI_CLumia_CImaging_CAdjustments_CIAutoFixAnalyzerFactory_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __x_ABI_CLumia_CImaging_CAdjustments_CIAutoFixAnalyzerFactory_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __x_ABI_CLumia_CImaging_CAdjustments_CIAutoFixAnalyzerFactory_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 

#define __x_ABI_CLumia_CImaging_CAdjustments_CIAutoFixAnalyzerFactory_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 

#define __x_ABI_CLumia_CImaging_CAdjustments_CIAutoFixAnalyzerFactory_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 


#define __x_ABI_CLumia_CImaging_CAdjustments_CIAutoFixAnalyzerFactory_Create(This,source,__returnValue)	\
    ( (This)->lpVtbl -> Create(This,source,__returnValue) ) 

#define __x_ABI_CLumia_CImaging_CAdjustments_CIAutoFixAnalyzerFactory_CreateWithQuality(This,source,quality,__returnValue)	\
    ( (This)->lpVtbl -> CreateWithQuality(This,source,quality,__returnValue) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* ____x_ABI_CLumia_CImaging_CAdjustments_CIAutoFixAnalyzerFactory_INTERFACE_DEFINED__ */


/* interface __MIDL_itf_Lumia2EImaging2EAdjustments_0000_0045 */
/* [local] */ 

#if !defined(____x_ABI_CLumia_CImaging_CAdjustments_CIAutoLevelsFilter_INTERFACE_DEFINED__)
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Lumia_Imaging_Adjustments_IAutoLevelsFilter[] = L"Lumia.Imaging.Adjustments.IAutoLevelsFilter";
#endif /* !defined(____x_ABI_CLumia_CImaging_CAdjustments_CIAutoLevelsFilter_INTERFACE_DEFINED__) */


/* interface __MIDL_itf_Lumia2EImaging2EAdjustments_0000_0045 */
/* [local] */ 



extern RPC_IF_HANDLE __MIDL_itf_Lumia2EImaging2EAdjustments_0000_0045_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_Lumia2EImaging2EAdjustments_0000_0045_v0_0_s_ifspec;

#ifndef ____x_ABI_CLumia_CImaging_CAdjustments_CIAutoLevelsFilter_INTERFACE_DEFINED__
#define ____x_ABI_CLumia_CImaging_CAdjustments_CIAutoLevelsFilter_INTERFACE_DEFINED__

/* interface __x_ABI_CLumia_CImaging_CAdjustments_CIAutoLevelsFilter */
/* [uuid][object] */ 



/* interface ABI::Lumia::Imaging::Adjustments::IAutoLevelsFilter */
/* [uuid][object] */ 


EXTERN_C const IID IID___x_ABI_CLumia_CImaging_CAdjustments_CIAutoLevelsFilter;

#if defined(__cplusplus) && !defined(CINTERFACE)
    } /* end extern "C" */
    namespace ABI {
        namespace Lumia {
            namespace Imaging {
                namespace Adjustments {
                    
                    MIDL_INTERFACE("E5C04606-10F9-31FD-83F2-52B01F2E481B")
                    IAutoLevelsFilter : public IInspectable
                    {
                    public:
                    };

                    extern const __declspec(selectany) IID & IID_IAutoLevelsFilter = __uuidof(IAutoLevelsFilter);

                    
                }  /* end namespace */
            }  /* end namespace */
        }  /* end namespace */
    }  /* end namespace */
    extern "C" { 
    
#else 	/* C style interface */

    typedef struct __x_ABI_CLumia_CImaging_CAdjustments_CIAutoLevelsFilterVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            __RPC__in __x_ABI_CLumia_CImaging_CAdjustments_CIAutoLevelsFilter * This,
            /* [in] */ __RPC__in REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            __RPC__in __x_ABI_CLumia_CImaging_CAdjustments_CIAutoLevelsFilter * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            __RPC__in __x_ABI_CLumia_CImaging_CAdjustments_CIAutoLevelsFilter * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetIids )( 
            __RPC__in __x_ABI_CLumia_CImaging_CAdjustments_CIAutoLevelsFilter * This,
            /* [out] */ __RPC__out ULONG *iidCount,
            /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
        
        HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )( 
            __RPC__in __x_ABI_CLumia_CImaging_CAdjustments_CIAutoLevelsFilter * This,
            /* [out] */ __RPC__deref_out_opt HSTRING *className);
        
        HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )( 
            __RPC__in __x_ABI_CLumia_CImaging_CAdjustments_CIAutoLevelsFilter * This,
            /* [out] */ __RPC__out TrustLevel *trustLevel);
        
        END_INTERFACE
    } __x_ABI_CLumia_CImaging_CAdjustments_CIAutoLevelsFilterVtbl;

    interface __x_ABI_CLumia_CImaging_CAdjustments_CIAutoLevelsFilter
    {
        CONST_VTBL struct __x_ABI_CLumia_CImaging_CAdjustments_CIAutoLevelsFilterVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define __x_ABI_CLumia_CImaging_CAdjustments_CIAutoLevelsFilter_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __x_ABI_CLumia_CImaging_CAdjustments_CIAutoLevelsFilter_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __x_ABI_CLumia_CImaging_CAdjustments_CIAutoLevelsFilter_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __x_ABI_CLumia_CImaging_CAdjustments_CIAutoLevelsFilter_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 

#define __x_ABI_CLumia_CImaging_CAdjustments_CIAutoLevelsFilter_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 

#define __x_ABI_CLumia_CImaging_CAdjustments_CIAutoLevelsFilter_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 


#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* ____x_ABI_CLumia_CImaging_CAdjustments_CIAutoLevelsFilter_INTERFACE_DEFINED__ */


/* interface __MIDL_itf_Lumia2EImaging2EAdjustments_0000_0046 */
/* [local] */ 

#if !defined(____x_ABI_CLumia_CImaging_CAdjustments_CIBlurFilter_INTERFACE_DEFINED__)
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Lumia_Imaging_Adjustments_IBlurFilter[] = L"Lumia.Imaging.Adjustments.IBlurFilter";
#endif /* !defined(____x_ABI_CLumia_CImaging_CAdjustments_CIBlurFilter_INTERFACE_DEFINED__) */


/* interface __MIDL_itf_Lumia2EImaging2EAdjustments_0000_0046 */
/* [local] */ 



extern RPC_IF_HANDLE __MIDL_itf_Lumia2EImaging2EAdjustments_0000_0046_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_Lumia2EImaging2EAdjustments_0000_0046_v0_0_s_ifspec;

#ifndef ____x_ABI_CLumia_CImaging_CAdjustments_CIBlurFilter_INTERFACE_DEFINED__
#define ____x_ABI_CLumia_CImaging_CAdjustments_CIBlurFilter_INTERFACE_DEFINED__

/* interface __x_ABI_CLumia_CImaging_CAdjustments_CIBlurFilter */
/* [uuid][object] */ 



/* interface ABI::Lumia::Imaging::Adjustments::IBlurFilter */
/* [uuid][object] */ 


EXTERN_C const IID IID___x_ABI_CLumia_CImaging_CAdjustments_CIBlurFilter;

#if defined(__cplusplus) && !defined(CINTERFACE)
    } /* end extern "C" */
    namespace ABI {
        namespace Lumia {
            namespace Imaging {
                namespace Adjustments {
                    
                    MIDL_INTERFACE("EFA3196C-CBAF-3E99-BE2A-44762F8CF3AF")
                    IBlurFilter : public IInspectable
                    {
                    public:
                        virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_KernelSize( 
                            /* [out][retval] */ __RPC__out INT32 *__returnValue) = 0;
                        
                        virtual /* [propput] */ HRESULT STDMETHODCALLTYPE put_KernelSize( 
                            /* [in] */ INT32 value) = 0;
                        
                        virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_Region( 
                            /* [out][retval] */ __RPC__out ABI::Windows::Foundation::Rect *__returnValue) = 0;
                        
                        virtual /* [propput] */ HRESULT STDMETHODCALLTYPE put_Region( 
                            /* [in] */ ABI::Windows::Foundation::Rect value) = 0;
                        
                        virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_BlurRegionShape( 
                            /* [out][retval] */ __RPC__out ABI::Lumia::Imaging::Adjustments::BlurRegionShape *__returnValue) = 0;
                        
                        virtual /* [propput] */ HRESULT STDMETHODCALLTYPE put_BlurRegionShape( 
                            /* [in] */ ABI::Lumia::Imaging::Adjustments::BlurRegionShape value) = 0;
                        
                    };

                    extern const __declspec(selectany) IID & IID_IBlurFilter = __uuidof(IBlurFilter);

                    
                }  /* end namespace */
            }  /* end namespace */
        }  /* end namespace */
    }  /* end namespace */
    extern "C" { 
    
#else 	/* C style interface */

    typedef struct __x_ABI_CLumia_CImaging_CAdjustments_CIBlurFilterVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            __RPC__in __x_ABI_CLumia_CImaging_CAdjustments_CIBlurFilter * This,
            /* [in] */ __RPC__in REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            __RPC__in __x_ABI_CLumia_CImaging_CAdjustments_CIBlurFilter * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            __RPC__in __x_ABI_CLumia_CImaging_CAdjustments_CIBlurFilter * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetIids )( 
            __RPC__in __x_ABI_CLumia_CImaging_CAdjustments_CIBlurFilter * This,
            /* [out] */ __RPC__out ULONG *iidCount,
            /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
        
        HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )( 
            __RPC__in __x_ABI_CLumia_CImaging_CAdjustments_CIBlurFilter * This,
            /* [out] */ __RPC__deref_out_opt HSTRING *className);
        
        HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )( 
            __RPC__in __x_ABI_CLumia_CImaging_CAdjustments_CIBlurFilter * This,
            /* [out] */ __RPC__out TrustLevel *trustLevel);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_KernelSize )( 
            __RPC__in __x_ABI_CLumia_CImaging_CAdjustments_CIBlurFilter * This,
            /* [out][retval] */ __RPC__out INT32 *__returnValue);
        
        /* [propput] */ HRESULT ( STDMETHODCALLTYPE *put_KernelSize )( 
            __RPC__in __x_ABI_CLumia_CImaging_CAdjustments_CIBlurFilter * This,
            /* [in] */ INT32 value);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_Region )( 
            __RPC__in __x_ABI_CLumia_CImaging_CAdjustments_CIBlurFilter * This,
            /* [out][retval] */ __RPC__out __x_ABI_CWindows_CFoundation_CRect *__returnValue);
        
        /* [propput] */ HRESULT ( STDMETHODCALLTYPE *put_Region )( 
            __RPC__in __x_ABI_CLumia_CImaging_CAdjustments_CIBlurFilter * This,
            /* [in] */ __x_ABI_CWindows_CFoundation_CRect value);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_BlurRegionShape )( 
            __RPC__in __x_ABI_CLumia_CImaging_CAdjustments_CIBlurFilter * This,
            /* [out][retval] */ __RPC__out __x_ABI_CLumia_CImaging_CAdjustments_CBlurRegionShape *__returnValue);
        
        /* [propput] */ HRESULT ( STDMETHODCALLTYPE *put_BlurRegionShape )( 
            __RPC__in __x_ABI_CLumia_CImaging_CAdjustments_CIBlurFilter * This,
            /* [in] */ __x_ABI_CLumia_CImaging_CAdjustments_CBlurRegionShape value);
        
        END_INTERFACE
    } __x_ABI_CLumia_CImaging_CAdjustments_CIBlurFilterVtbl;

    interface __x_ABI_CLumia_CImaging_CAdjustments_CIBlurFilter
    {
        CONST_VTBL struct __x_ABI_CLumia_CImaging_CAdjustments_CIBlurFilterVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define __x_ABI_CLumia_CImaging_CAdjustments_CIBlurFilter_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __x_ABI_CLumia_CImaging_CAdjustments_CIBlurFilter_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __x_ABI_CLumia_CImaging_CAdjustments_CIBlurFilter_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __x_ABI_CLumia_CImaging_CAdjustments_CIBlurFilter_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 

#define __x_ABI_CLumia_CImaging_CAdjustments_CIBlurFilter_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 

#define __x_ABI_CLumia_CImaging_CAdjustments_CIBlurFilter_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 


#define __x_ABI_CLumia_CImaging_CAdjustments_CIBlurFilter_get_KernelSize(This,__returnValue)	\
    ( (This)->lpVtbl -> get_KernelSize(This,__returnValue) ) 

#define __x_ABI_CLumia_CImaging_CAdjustments_CIBlurFilter_put_KernelSize(This,value)	\
    ( (This)->lpVtbl -> put_KernelSize(This,value) ) 

#define __x_ABI_CLumia_CImaging_CAdjustments_CIBlurFilter_get_Region(This,__returnValue)	\
    ( (This)->lpVtbl -> get_Region(This,__returnValue) ) 

#define __x_ABI_CLumia_CImaging_CAdjustments_CIBlurFilter_put_Region(This,value)	\
    ( (This)->lpVtbl -> put_Region(This,value) ) 

#define __x_ABI_CLumia_CImaging_CAdjustments_CIBlurFilter_get_BlurRegionShape(This,__returnValue)	\
    ( (This)->lpVtbl -> get_BlurRegionShape(This,__returnValue) ) 

#define __x_ABI_CLumia_CImaging_CAdjustments_CIBlurFilter_put_BlurRegionShape(This,value)	\
    ( (This)->lpVtbl -> put_BlurRegionShape(This,value) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* ____x_ABI_CLumia_CImaging_CAdjustments_CIBlurFilter_INTERFACE_DEFINED__ */


/* interface __MIDL_itf_Lumia2EImaging2EAdjustments_0000_0047 */
/* [local] */ 

#if !defined(____x_ABI_CLumia_CImaging_CAdjustments_CIBlurFilterFactory_INTERFACE_DEFINED__)
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Lumia_Imaging_Adjustments_IBlurFilterFactory[] = L"Lumia.Imaging.Adjustments.IBlurFilterFactory";
#endif /* !defined(____x_ABI_CLumia_CImaging_CAdjustments_CIBlurFilterFactory_INTERFACE_DEFINED__) */


/* interface __MIDL_itf_Lumia2EImaging2EAdjustments_0000_0047 */
/* [local] */ 



extern RPC_IF_HANDLE __MIDL_itf_Lumia2EImaging2EAdjustments_0000_0047_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_Lumia2EImaging2EAdjustments_0000_0047_v0_0_s_ifspec;

#ifndef ____x_ABI_CLumia_CImaging_CAdjustments_CIBlurFilterFactory_INTERFACE_DEFINED__
#define ____x_ABI_CLumia_CImaging_CAdjustments_CIBlurFilterFactory_INTERFACE_DEFINED__

/* interface __x_ABI_CLumia_CImaging_CAdjustments_CIBlurFilterFactory */
/* [uuid][object] */ 



/* interface ABI::Lumia::Imaging::Adjustments::IBlurFilterFactory */
/* [uuid][object] */ 


EXTERN_C const IID IID___x_ABI_CLumia_CImaging_CAdjustments_CIBlurFilterFactory;

#if defined(__cplusplus) && !defined(CINTERFACE)
    } /* end extern "C" */
    namespace ABI {
        namespace Lumia {
            namespace Imaging {
                namespace Adjustments {
                    
                    MIDL_INTERFACE("7F98AB49-CB03-3E85-BC7A-236E365A6C04")
                    IBlurFilterFactory : public IInspectable
                    {
                    public:
                        virtual HRESULT STDMETHODCALLTYPE CreateWithKernelSize( 
                            /* [in] */ INT32 kernelSize,
                            /* [out][retval] */ __RPC__deref_out_opt ABI::Lumia::Imaging::Adjustments::IBlurFilter **__returnValue) = 0;
                        
                        virtual HRESULT STDMETHODCALLTYPE CreateWithKernelSizeAndRegion( 
                            /* [in] */ INT32 kernelSize,
                            /* [in] */ ABI::Windows::Foundation::Rect region,
                            /* [in] */ ABI::Lumia::Imaging::Adjustments::BlurRegionShape regionShape,
                            /* [out][retval] */ __RPC__deref_out_opt ABI::Lumia::Imaging::Adjustments::IBlurFilter **__returnValue) = 0;
                        
                    };

                    extern const __declspec(selectany) IID & IID_IBlurFilterFactory = __uuidof(IBlurFilterFactory);

                    
                }  /* end namespace */
            }  /* end namespace */
        }  /* end namespace */
    }  /* end namespace */
    extern "C" { 
    
#else 	/* C style interface */

    typedef struct __x_ABI_CLumia_CImaging_CAdjustments_CIBlurFilterFactoryVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            __RPC__in __x_ABI_CLumia_CImaging_CAdjustments_CIBlurFilterFactory * This,
            /* [in] */ __RPC__in REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            __RPC__in __x_ABI_CLumia_CImaging_CAdjustments_CIBlurFilterFactory * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            __RPC__in __x_ABI_CLumia_CImaging_CAdjustments_CIBlurFilterFactory * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetIids )( 
            __RPC__in __x_ABI_CLumia_CImaging_CAdjustments_CIBlurFilterFactory * This,
            /* [out] */ __RPC__out ULONG *iidCount,
            /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
        
        HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )( 
            __RPC__in __x_ABI_CLumia_CImaging_CAdjustments_CIBlurFilterFactory * This,
            /* [out] */ __RPC__deref_out_opt HSTRING *className);
        
        HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )( 
            __RPC__in __x_ABI_CLumia_CImaging_CAdjustments_CIBlurFilterFactory * This,
            /* [out] */ __RPC__out TrustLevel *trustLevel);
        
        HRESULT ( STDMETHODCALLTYPE *CreateWithKernelSize )( 
            __RPC__in __x_ABI_CLumia_CImaging_CAdjustments_CIBlurFilterFactory * This,
            /* [in] */ INT32 kernelSize,
            /* [out][retval] */ __RPC__deref_out_opt __x_ABI_CLumia_CImaging_CAdjustments_CIBlurFilter **__returnValue);
        
        HRESULT ( STDMETHODCALLTYPE *CreateWithKernelSizeAndRegion )( 
            __RPC__in __x_ABI_CLumia_CImaging_CAdjustments_CIBlurFilterFactory * This,
            /* [in] */ INT32 kernelSize,
            /* [in] */ __x_ABI_CWindows_CFoundation_CRect region,
            /* [in] */ __x_ABI_CLumia_CImaging_CAdjustments_CBlurRegionShape regionShape,
            /* [out][retval] */ __RPC__deref_out_opt __x_ABI_CLumia_CImaging_CAdjustments_CIBlurFilter **__returnValue);
        
        END_INTERFACE
    } __x_ABI_CLumia_CImaging_CAdjustments_CIBlurFilterFactoryVtbl;

    interface __x_ABI_CLumia_CImaging_CAdjustments_CIBlurFilterFactory
    {
        CONST_VTBL struct __x_ABI_CLumia_CImaging_CAdjustments_CIBlurFilterFactoryVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define __x_ABI_CLumia_CImaging_CAdjustments_CIBlurFilterFactory_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __x_ABI_CLumia_CImaging_CAdjustments_CIBlurFilterFactory_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __x_ABI_CLumia_CImaging_CAdjustments_CIBlurFilterFactory_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __x_ABI_CLumia_CImaging_CAdjustments_CIBlurFilterFactory_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 

#define __x_ABI_CLumia_CImaging_CAdjustments_CIBlurFilterFactory_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 

#define __x_ABI_CLumia_CImaging_CAdjustments_CIBlurFilterFactory_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 


#define __x_ABI_CLumia_CImaging_CAdjustments_CIBlurFilterFactory_CreateWithKernelSize(This,kernelSize,__returnValue)	\
    ( (This)->lpVtbl -> CreateWithKernelSize(This,kernelSize,__returnValue) ) 

#define __x_ABI_CLumia_CImaging_CAdjustments_CIBlurFilterFactory_CreateWithKernelSizeAndRegion(This,kernelSize,region,regionShape,__returnValue)	\
    ( (This)->lpVtbl -> CreateWithKernelSizeAndRegion(This,kernelSize,region,regionShape,__returnValue) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* ____x_ABI_CLumia_CImaging_CAdjustments_CIBlurFilterFactory_INTERFACE_DEFINED__ */


/* interface __MIDL_itf_Lumia2EImaging2EAdjustments_0000_0048 */
/* [local] */ 

#if !defined(____x_ABI_CLumia_CImaging_CAdjustments_CIBrightnessFilter_INTERFACE_DEFINED__)
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Lumia_Imaging_Adjustments_IBrightnessFilter[] = L"Lumia.Imaging.Adjustments.IBrightnessFilter";
#endif /* !defined(____x_ABI_CLumia_CImaging_CAdjustments_CIBrightnessFilter_INTERFACE_DEFINED__) */


/* interface __MIDL_itf_Lumia2EImaging2EAdjustments_0000_0048 */
/* [local] */ 



extern RPC_IF_HANDLE __MIDL_itf_Lumia2EImaging2EAdjustments_0000_0048_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_Lumia2EImaging2EAdjustments_0000_0048_v0_0_s_ifspec;

#ifndef ____x_ABI_CLumia_CImaging_CAdjustments_CIBrightnessFilter_INTERFACE_DEFINED__
#define ____x_ABI_CLumia_CImaging_CAdjustments_CIBrightnessFilter_INTERFACE_DEFINED__

/* interface __x_ABI_CLumia_CImaging_CAdjustments_CIBrightnessFilter */
/* [uuid][object] */ 



/* interface ABI::Lumia::Imaging::Adjustments::IBrightnessFilter */
/* [uuid][object] */ 


EXTERN_C const IID IID___x_ABI_CLumia_CImaging_CAdjustments_CIBrightnessFilter;

#if defined(__cplusplus) && !defined(CINTERFACE)
    } /* end extern "C" */
    namespace ABI {
        namespace Lumia {
            namespace Imaging {
                namespace Adjustments {
                    
                    MIDL_INTERFACE("5690B396-38FD-3354-8D21-A86ED0195877")
                    IBrightnessFilter : public IInspectable
                    {
                    public:
                        virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_Level( 
                            /* [out][retval] */ __RPC__out DOUBLE *__returnValue) = 0;
                        
                        virtual /* [propput] */ HRESULT STDMETHODCALLTYPE put_Level( 
                            /* [in] */ DOUBLE value) = 0;
                        
                    };

                    extern const __declspec(selectany) IID & IID_IBrightnessFilter = __uuidof(IBrightnessFilter);

                    
                }  /* end namespace */
            }  /* end namespace */
        }  /* end namespace */
    }  /* end namespace */
    extern "C" { 
    
#else 	/* C style interface */

    typedef struct __x_ABI_CLumia_CImaging_CAdjustments_CIBrightnessFilterVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            __RPC__in __x_ABI_CLumia_CImaging_CAdjustments_CIBrightnessFilter * This,
            /* [in] */ __RPC__in REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            __RPC__in __x_ABI_CLumia_CImaging_CAdjustments_CIBrightnessFilter * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            __RPC__in __x_ABI_CLumia_CImaging_CAdjustments_CIBrightnessFilter * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetIids )( 
            __RPC__in __x_ABI_CLumia_CImaging_CAdjustments_CIBrightnessFilter * This,
            /* [out] */ __RPC__out ULONG *iidCount,
            /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
        
        HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )( 
            __RPC__in __x_ABI_CLumia_CImaging_CAdjustments_CIBrightnessFilter * This,
            /* [out] */ __RPC__deref_out_opt HSTRING *className);
        
        HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )( 
            __RPC__in __x_ABI_CLumia_CImaging_CAdjustments_CIBrightnessFilter * This,
            /* [out] */ __RPC__out TrustLevel *trustLevel);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_Level )( 
            __RPC__in __x_ABI_CLumia_CImaging_CAdjustments_CIBrightnessFilter * This,
            /* [out][retval] */ __RPC__out DOUBLE *__returnValue);
        
        /* [propput] */ HRESULT ( STDMETHODCALLTYPE *put_Level )( 
            __RPC__in __x_ABI_CLumia_CImaging_CAdjustments_CIBrightnessFilter * This,
            /* [in] */ DOUBLE value);
        
        END_INTERFACE
    } __x_ABI_CLumia_CImaging_CAdjustments_CIBrightnessFilterVtbl;

    interface __x_ABI_CLumia_CImaging_CAdjustments_CIBrightnessFilter
    {
        CONST_VTBL struct __x_ABI_CLumia_CImaging_CAdjustments_CIBrightnessFilterVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define __x_ABI_CLumia_CImaging_CAdjustments_CIBrightnessFilter_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __x_ABI_CLumia_CImaging_CAdjustments_CIBrightnessFilter_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __x_ABI_CLumia_CImaging_CAdjustments_CIBrightnessFilter_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __x_ABI_CLumia_CImaging_CAdjustments_CIBrightnessFilter_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 

#define __x_ABI_CLumia_CImaging_CAdjustments_CIBrightnessFilter_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 

#define __x_ABI_CLumia_CImaging_CAdjustments_CIBrightnessFilter_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 


#define __x_ABI_CLumia_CImaging_CAdjustments_CIBrightnessFilter_get_Level(This,__returnValue)	\
    ( (This)->lpVtbl -> get_Level(This,__returnValue) ) 

#define __x_ABI_CLumia_CImaging_CAdjustments_CIBrightnessFilter_put_Level(This,value)	\
    ( (This)->lpVtbl -> put_Level(This,value) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* ____x_ABI_CLumia_CImaging_CAdjustments_CIBrightnessFilter_INTERFACE_DEFINED__ */


/* interface __MIDL_itf_Lumia2EImaging2EAdjustments_0000_0049 */
/* [local] */ 

#if !defined(____x_ABI_CLumia_CImaging_CAdjustments_CIBrightnessFilterFactory_INTERFACE_DEFINED__)
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Lumia_Imaging_Adjustments_IBrightnessFilterFactory[] = L"Lumia.Imaging.Adjustments.IBrightnessFilterFactory";
#endif /* !defined(____x_ABI_CLumia_CImaging_CAdjustments_CIBrightnessFilterFactory_INTERFACE_DEFINED__) */


/* interface __MIDL_itf_Lumia2EImaging2EAdjustments_0000_0049 */
/* [local] */ 



extern RPC_IF_HANDLE __MIDL_itf_Lumia2EImaging2EAdjustments_0000_0049_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_Lumia2EImaging2EAdjustments_0000_0049_v0_0_s_ifspec;

#ifndef ____x_ABI_CLumia_CImaging_CAdjustments_CIBrightnessFilterFactory_INTERFACE_DEFINED__
#define ____x_ABI_CLumia_CImaging_CAdjustments_CIBrightnessFilterFactory_INTERFACE_DEFINED__

/* interface __x_ABI_CLumia_CImaging_CAdjustments_CIBrightnessFilterFactory */
/* [uuid][object] */ 



/* interface ABI::Lumia::Imaging::Adjustments::IBrightnessFilterFactory */
/* [uuid][object] */ 


EXTERN_C const IID IID___x_ABI_CLumia_CImaging_CAdjustments_CIBrightnessFilterFactory;

#if defined(__cplusplus) && !defined(CINTERFACE)
    } /* end extern "C" */
    namespace ABI {
        namespace Lumia {
            namespace Imaging {
                namespace Adjustments {
                    
                    MIDL_INTERFACE("0B91C9CD-4A75-3E0A-A049-385AAC746D88")
                    IBrightnessFilterFactory : public IInspectable
                    {
                    public:
                        virtual HRESULT STDMETHODCALLTYPE CreateWithLevel( 
                            /* [in] */ DOUBLE level,
                            /* [out][retval] */ __RPC__deref_out_opt ABI::Lumia::Imaging::Adjustments::IBrightnessFilter **__returnValue) = 0;
                        
                    };

                    extern const __declspec(selectany) IID & IID_IBrightnessFilterFactory = __uuidof(IBrightnessFilterFactory);

                    
                }  /* end namespace */
            }  /* end namespace */
        }  /* end namespace */
    }  /* end namespace */
    extern "C" { 
    
#else 	/* C style interface */

    typedef struct __x_ABI_CLumia_CImaging_CAdjustments_CIBrightnessFilterFactoryVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            __RPC__in __x_ABI_CLumia_CImaging_CAdjustments_CIBrightnessFilterFactory * This,
            /* [in] */ __RPC__in REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            __RPC__in __x_ABI_CLumia_CImaging_CAdjustments_CIBrightnessFilterFactory * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            __RPC__in __x_ABI_CLumia_CImaging_CAdjustments_CIBrightnessFilterFactory * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetIids )( 
            __RPC__in __x_ABI_CLumia_CImaging_CAdjustments_CIBrightnessFilterFactory * This,
            /* [out] */ __RPC__out ULONG *iidCount,
            /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
        
        HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )( 
            __RPC__in __x_ABI_CLumia_CImaging_CAdjustments_CIBrightnessFilterFactory * This,
            /* [out] */ __RPC__deref_out_opt HSTRING *className);
        
        HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )( 
            __RPC__in __x_ABI_CLumia_CImaging_CAdjustments_CIBrightnessFilterFactory * This,
            /* [out] */ __RPC__out TrustLevel *trustLevel);
        
        HRESULT ( STDMETHODCALLTYPE *CreateWithLevel )( 
            __RPC__in __x_ABI_CLumia_CImaging_CAdjustments_CIBrightnessFilterFactory * This,
            /* [in] */ DOUBLE level,
            /* [out][retval] */ __RPC__deref_out_opt __x_ABI_CLumia_CImaging_CAdjustments_CIBrightnessFilter **__returnValue);
        
        END_INTERFACE
    } __x_ABI_CLumia_CImaging_CAdjustments_CIBrightnessFilterFactoryVtbl;

    interface __x_ABI_CLumia_CImaging_CAdjustments_CIBrightnessFilterFactory
    {
        CONST_VTBL struct __x_ABI_CLumia_CImaging_CAdjustments_CIBrightnessFilterFactoryVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define __x_ABI_CLumia_CImaging_CAdjustments_CIBrightnessFilterFactory_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __x_ABI_CLumia_CImaging_CAdjustments_CIBrightnessFilterFactory_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __x_ABI_CLumia_CImaging_CAdjustments_CIBrightnessFilterFactory_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __x_ABI_CLumia_CImaging_CAdjustments_CIBrightnessFilterFactory_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 

#define __x_ABI_CLumia_CImaging_CAdjustments_CIBrightnessFilterFactory_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 

#define __x_ABI_CLumia_CImaging_CAdjustments_CIBrightnessFilterFactory_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 


#define __x_ABI_CLumia_CImaging_CAdjustments_CIBrightnessFilterFactory_CreateWithLevel(This,level,__returnValue)	\
    ( (This)->lpVtbl -> CreateWithLevel(This,level,__returnValue) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* ____x_ABI_CLumia_CImaging_CAdjustments_CIBrightnessFilterFactory_INTERFACE_DEFINED__ */


/* interface __MIDL_itf_Lumia2EImaging2EAdjustments_0000_0050 */
/* [local] */ 

#if !defined(____x_ABI_CLumia_CImaging_CAdjustments_CIColorAdjustFilter_INTERFACE_DEFINED__)
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Lumia_Imaging_Adjustments_IColorAdjustFilter[] = L"Lumia.Imaging.Adjustments.IColorAdjustFilter";
#endif /* !defined(____x_ABI_CLumia_CImaging_CAdjustments_CIColorAdjustFilter_INTERFACE_DEFINED__) */


/* interface __MIDL_itf_Lumia2EImaging2EAdjustments_0000_0050 */
/* [local] */ 



extern RPC_IF_HANDLE __MIDL_itf_Lumia2EImaging2EAdjustments_0000_0050_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_Lumia2EImaging2EAdjustments_0000_0050_v0_0_s_ifspec;

#ifndef ____x_ABI_CLumia_CImaging_CAdjustments_CIColorAdjustFilter_INTERFACE_DEFINED__
#define ____x_ABI_CLumia_CImaging_CAdjustments_CIColorAdjustFilter_INTERFACE_DEFINED__

/* interface __x_ABI_CLumia_CImaging_CAdjustments_CIColorAdjustFilter */
/* [uuid][object] */ 



/* interface ABI::Lumia::Imaging::Adjustments::IColorAdjustFilter */
/* [uuid][object] */ 


EXTERN_C const IID IID___x_ABI_CLumia_CImaging_CAdjustments_CIColorAdjustFilter;

#if defined(__cplusplus) && !defined(CINTERFACE)
    } /* end extern "C" */
    namespace ABI {
        namespace Lumia {
            namespace Imaging {
                namespace Adjustments {
                    
                    MIDL_INTERFACE("BDBBA94F-580E-3B22-88FC-AA7F3E7F5774")
                    IColorAdjustFilter : public IInspectable
                    {
                    public:
                        virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_Red( 
                            /* [out][retval] */ __RPC__out DOUBLE *__returnValue) = 0;
                        
                        virtual /* [propput] */ HRESULT STDMETHODCALLTYPE put_Red( 
                            /* [in] */ DOUBLE value) = 0;
                        
                        virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_Green( 
                            /* [out][retval] */ __RPC__out DOUBLE *__returnValue) = 0;
                        
                        virtual /* [propput] */ HRESULT STDMETHODCALLTYPE put_Green( 
                            /* [in] */ DOUBLE value) = 0;
                        
                        virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_Blue( 
                            /* [out][retval] */ __RPC__out DOUBLE *__returnValue) = 0;
                        
                        virtual /* [propput] */ HRESULT STDMETHODCALLTYPE put_Blue( 
                            /* [in] */ DOUBLE value) = 0;
                        
                    };

                    extern const __declspec(selectany) IID & IID_IColorAdjustFilter = __uuidof(IColorAdjustFilter);

                    
                }  /* end namespace */
            }  /* end namespace */
        }  /* end namespace */
    }  /* end namespace */
    extern "C" { 
    
#else 	/* C style interface */

    typedef struct __x_ABI_CLumia_CImaging_CAdjustments_CIColorAdjustFilterVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            __RPC__in __x_ABI_CLumia_CImaging_CAdjustments_CIColorAdjustFilter * This,
            /* [in] */ __RPC__in REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            __RPC__in __x_ABI_CLumia_CImaging_CAdjustments_CIColorAdjustFilter * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            __RPC__in __x_ABI_CLumia_CImaging_CAdjustments_CIColorAdjustFilter * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetIids )( 
            __RPC__in __x_ABI_CLumia_CImaging_CAdjustments_CIColorAdjustFilter * This,
            /* [out] */ __RPC__out ULONG *iidCount,
            /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
        
        HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )( 
            __RPC__in __x_ABI_CLumia_CImaging_CAdjustments_CIColorAdjustFilter * This,
            /* [out] */ __RPC__deref_out_opt HSTRING *className);
        
        HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )( 
            __RPC__in __x_ABI_CLumia_CImaging_CAdjustments_CIColorAdjustFilter * This,
            /* [out] */ __RPC__out TrustLevel *trustLevel);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_Red )( 
            __RPC__in __x_ABI_CLumia_CImaging_CAdjustments_CIColorAdjustFilter * This,
            /* [out][retval] */ __RPC__out DOUBLE *__returnValue);
        
        /* [propput] */ HRESULT ( STDMETHODCALLTYPE *put_Red )( 
            __RPC__in __x_ABI_CLumia_CImaging_CAdjustments_CIColorAdjustFilter * This,
            /* [in] */ DOUBLE value);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_Green )( 
            __RPC__in __x_ABI_CLumia_CImaging_CAdjustments_CIColorAdjustFilter * This,
            /* [out][retval] */ __RPC__out DOUBLE *__returnValue);
        
        /* [propput] */ HRESULT ( STDMETHODCALLTYPE *put_Green )( 
            __RPC__in __x_ABI_CLumia_CImaging_CAdjustments_CIColorAdjustFilter * This,
            /* [in] */ DOUBLE value);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_Blue )( 
            __RPC__in __x_ABI_CLumia_CImaging_CAdjustments_CIColorAdjustFilter * This,
            /* [out][retval] */ __RPC__out DOUBLE *__returnValue);
        
        /* [propput] */ HRESULT ( STDMETHODCALLTYPE *put_Blue )( 
            __RPC__in __x_ABI_CLumia_CImaging_CAdjustments_CIColorAdjustFilter * This,
            /* [in] */ DOUBLE value);
        
        END_INTERFACE
    } __x_ABI_CLumia_CImaging_CAdjustments_CIColorAdjustFilterVtbl;

    interface __x_ABI_CLumia_CImaging_CAdjustments_CIColorAdjustFilter
    {
        CONST_VTBL struct __x_ABI_CLumia_CImaging_CAdjustments_CIColorAdjustFilterVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define __x_ABI_CLumia_CImaging_CAdjustments_CIColorAdjustFilter_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __x_ABI_CLumia_CImaging_CAdjustments_CIColorAdjustFilter_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __x_ABI_CLumia_CImaging_CAdjustments_CIColorAdjustFilter_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __x_ABI_CLumia_CImaging_CAdjustments_CIColorAdjustFilter_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 

#define __x_ABI_CLumia_CImaging_CAdjustments_CIColorAdjustFilter_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 

#define __x_ABI_CLumia_CImaging_CAdjustments_CIColorAdjustFilter_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 


#define __x_ABI_CLumia_CImaging_CAdjustments_CIColorAdjustFilter_get_Red(This,__returnValue)	\
    ( (This)->lpVtbl -> get_Red(This,__returnValue) ) 

#define __x_ABI_CLumia_CImaging_CAdjustments_CIColorAdjustFilter_put_Red(This,value)	\
    ( (This)->lpVtbl -> put_Red(This,value) ) 

#define __x_ABI_CLumia_CImaging_CAdjustments_CIColorAdjustFilter_get_Green(This,__returnValue)	\
    ( (This)->lpVtbl -> get_Green(This,__returnValue) ) 

#define __x_ABI_CLumia_CImaging_CAdjustments_CIColorAdjustFilter_put_Green(This,value)	\
    ( (This)->lpVtbl -> put_Green(This,value) ) 

#define __x_ABI_CLumia_CImaging_CAdjustments_CIColorAdjustFilter_get_Blue(This,__returnValue)	\
    ( (This)->lpVtbl -> get_Blue(This,__returnValue) ) 

#define __x_ABI_CLumia_CImaging_CAdjustments_CIColorAdjustFilter_put_Blue(This,value)	\
    ( (This)->lpVtbl -> put_Blue(This,value) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* ____x_ABI_CLumia_CImaging_CAdjustments_CIColorAdjustFilter_INTERFACE_DEFINED__ */


/* interface __MIDL_itf_Lumia2EImaging2EAdjustments_0000_0051 */
/* [local] */ 

#if !defined(____x_ABI_CLumia_CImaging_CAdjustments_CIColorAdjustFilterFactory_INTERFACE_DEFINED__)
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Lumia_Imaging_Adjustments_IColorAdjustFilterFactory[] = L"Lumia.Imaging.Adjustments.IColorAdjustFilterFactory";
#endif /* !defined(____x_ABI_CLumia_CImaging_CAdjustments_CIColorAdjustFilterFactory_INTERFACE_DEFINED__) */


/* interface __MIDL_itf_Lumia2EImaging2EAdjustments_0000_0051 */
/* [local] */ 



extern RPC_IF_HANDLE __MIDL_itf_Lumia2EImaging2EAdjustments_0000_0051_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_Lumia2EImaging2EAdjustments_0000_0051_v0_0_s_ifspec;

#ifndef ____x_ABI_CLumia_CImaging_CAdjustments_CIColorAdjustFilterFactory_INTERFACE_DEFINED__
#define ____x_ABI_CLumia_CImaging_CAdjustments_CIColorAdjustFilterFactory_INTERFACE_DEFINED__

/* interface __x_ABI_CLumia_CImaging_CAdjustments_CIColorAdjustFilterFactory */
/* [uuid][object] */ 



/* interface ABI::Lumia::Imaging::Adjustments::IColorAdjustFilterFactory */
/* [uuid][object] */ 


EXTERN_C const IID IID___x_ABI_CLumia_CImaging_CAdjustments_CIColorAdjustFilterFactory;

#if defined(__cplusplus) && !defined(CINTERFACE)
    } /* end extern "C" */
    namespace ABI {
        namespace Lumia {
            namespace Imaging {
                namespace Adjustments {
                    
                    MIDL_INTERFACE("BC050760-8045-3C43-AE04-5B44C5DABBFC")
                    IColorAdjustFilterFactory : public IInspectable
                    {
                    public:
                        virtual HRESULT STDMETHODCALLTYPE CreateWithAdjustments( 
                            /* [in] */ DOUBLE red,
                            /* [in] */ DOUBLE green,
                            /* [in] */ DOUBLE blue,
                            /* [out][retval] */ __RPC__deref_out_opt ABI::Lumia::Imaging::Adjustments::IColorAdjustFilter **__returnValue) = 0;
                        
                    };

                    extern const __declspec(selectany) IID & IID_IColorAdjustFilterFactory = __uuidof(IColorAdjustFilterFactory);

                    
                }  /* end namespace */
            }  /* end namespace */
        }  /* end namespace */
    }  /* end namespace */
    extern "C" { 
    
#else 	/* C style interface */

    typedef struct __x_ABI_CLumia_CImaging_CAdjustments_CIColorAdjustFilterFactoryVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            __RPC__in __x_ABI_CLumia_CImaging_CAdjustments_CIColorAdjustFilterFactory * This,
            /* [in] */ __RPC__in REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            __RPC__in __x_ABI_CLumia_CImaging_CAdjustments_CIColorAdjustFilterFactory * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            __RPC__in __x_ABI_CLumia_CImaging_CAdjustments_CIColorAdjustFilterFactory * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetIids )( 
            __RPC__in __x_ABI_CLumia_CImaging_CAdjustments_CIColorAdjustFilterFactory * This,
            /* [out] */ __RPC__out ULONG *iidCount,
            /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
        
        HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )( 
            __RPC__in __x_ABI_CLumia_CImaging_CAdjustments_CIColorAdjustFilterFactory * This,
            /* [out] */ __RPC__deref_out_opt HSTRING *className);
        
        HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )( 
            __RPC__in __x_ABI_CLumia_CImaging_CAdjustments_CIColorAdjustFilterFactory * This,
            /* [out] */ __RPC__out TrustLevel *trustLevel);
        
        HRESULT ( STDMETHODCALLTYPE *CreateWithAdjustments )( 
            __RPC__in __x_ABI_CLumia_CImaging_CAdjustments_CIColorAdjustFilterFactory * This,
            /* [in] */ DOUBLE red,
            /* [in] */ DOUBLE green,
            /* [in] */ DOUBLE blue,
            /* [out][retval] */ __RPC__deref_out_opt __x_ABI_CLumia_CImaging_CAdjustments_CIColorAdjustFilter **__returnValue);
        
        END_INTERFACE
    } __x_ABI_CLumia_CImaging_CAdjustments_CIColorAdjustFilterFactoryVtbl;

    interface __x_ABI_CLumia_CImaging_CAdjustments_CIColorAdjustFilterFactory
    {
        CONST_VTBL struct __x_ABI_CLumia_CImaging_CAdjustments_CIColorAdjustFilterFactoryVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define __x_ABI_CLumia_CImaging_CAdjustments_CIColorAdjustFilterFactory_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __x_ABI_CLumia_CImaging_CAdjustments_CIColorAdjustFilterFactory_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __x_ABI_CLumia_CImaging_CAdjustments_CIColorAdjustFilterFactory_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __x_ABI_CLumia_CImaging_CAdjustments_CIColorAdjustFilterFactory_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 

#define __x_ABI_CLumia_CImaging_CAdjustments_CIColorAdjustFilterFactory_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 

#define __x_ABI_CLumia_CImaging_CAdjustments_CIColorAdjustFilterFactory_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 


#define __x_ABI_CLumia_CImaging_CAdjustments_CIColorAdjustFilterFactory_CreateWithAdjustments(This,red,green,blue,__returnValue)	\
    ( (This)->lpVtbl -> CreateWithAdjustments(This,red,green,blue,__returnValue) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* ____x_ABI_CLumia_CImaging_CAdjustments_CIColorAdjustFilterFactory_INTERFACE_DEFINED__ */


/* interface __MIDL_itf_Lumia2EImaging2EAdjustments_0000_0052 */
/* [local] */ 

#if !defined(____x_ABI_CLumia_CImaging_CAdjustments_CIColorBoostFilter_INTERFACE_DEFINED__)
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Lumia_Imaging_Adjustments_IColorBoostFilter[] = L"Lumia.Imaging.Adjustments.IColorBoostFilter";
#endif /* !defined(____x_ABI_CLumia_CImaging_CAdjustments_CIColorBoostFilter_INTERFACE_DEFINED__) */


/* interface __MIDL_itf_Lumia2EImaging2EAdjustments_0000_0052 */
/* [local] */ 



extern RPC_IF_HANDLE __MIDL_itf_Lumia2EImaging2EAdjustments_0000_0052_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_Lumia2EImaging2EAdjustments_0000_0052_v0_0_s_ifspec;

#ifndef ____x_ABI_CLumia_CImaging_CAdjustments_CIColorBoostFilter_INTERFACE_DEFINED__
#define ____x_ABI_CLumia_CImaging_CAdjustments_CIColorBoostFilter_INTERFACE_DEFINED__

/* interface __x_ABI_CLumia_CImaging_CAdjustments_CIColorBoostFilter */
/* [uuid][object] */ 



/* interface ABI::Lumia::Imaging::Adjustments::IColorBoostFilter */
/* [uuid][object] */ 


EXTERN_C const IID IID___x_ABI_CLumia_CImaging_CAdjustments_CIColorBoostFilter;

#if defined(__cplusplus) && !defined(CINTERFACE)
    } /* end extern "C" */
    namespace ABI {
        namespace Lumia {
            namespace Imaging {
                namespace Adjustments {
                    
                    MIDL_INTERFACE("50F6E296-2EE9-3419-B8E2-7EBD5D5FEE23")
                    IColorBoostFilter : public IInspectable
                    {
                    public:
                        virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_Gain( 
                            /* [out][retval] */ __RPC__out DOUBLE *__returnValue) = 0;
                        
                        virtual /* [propput] */ HRESULT STDMETHODCALLTYPE put_Gain( 
                            /* [in] */ DOUBLE value) = 0;
                        
                    };

                    extern const __declspec(selectany) IID & IID_IColorBoostFilter = __uuidof(IColorBoostFilter);

                    
                }  /* end namespace */
            }  /* end namespace */
        }  /* end namespace */
    }  /* end namespace */
    extern "C" { 
    
#else 	/* C style interface */

    typedef struct __x_ABI_CLumia_CImaging_CAdjustments_CIColorBoostFilterVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            __RPC__in __x_ABI_CLumia_CImaging_CAdjustments_CIColorBoostFilter * This,
            /* [in] */ __RPC__in REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            __RPC__in __x_ABI_CLumia_CImaging_CAdjustments_CIColorBoostFilter * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            __RPC__in __x_ABI_CLumia_CImaging_CAdjustments_CIColorBoostFilter * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetIids )( 
            __RPC__in __x_ABI_CLumia_CImaging_CAdjustments_CIColorBoostFilter * This,
            /* [out] */ __RPC__out ULONG *iidCount,
            /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
        
        HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )( 
            __RPC__in __x_ABI_CLumia_CImaging_CAdjustments_CIColorBoostFilter * This,
            /* [out] */ __RPC__deref_out_opt HSTRING *className);
        
        HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )( 
            __RPC__in __x_ABI_CLumia_CImaging_CAdjustments_CIColorBoostFilter * This,
            /* [out] */ __RPC__out TrustLevel *trustLevel);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_Gain )( 
            __RPC__in __x_ABI_CLumia_CImaging_CAdjustments_CIColorBoostFilter * This,
            /* [out][retval] */ __RPC__out DOUBLE *__returnValue);
        
        /* [propput] */ HRESULT ( STDMETHODCALLTYPE *put_Gain )( 
            __RPC__in __x_ABI_CLumia_CImaging_CAdjustments_CIColorBoostFilter * This,
            /* [in] */ DOUBLE value);
        
        END_INTERFACE
    } __x_ABI_CLumia_CImaging_CAdjustments_CIColorBoostFilterVtbl;

    interface __x_ABI_CLumia_CImaging_CAdjustments_CIColorBoostFilter
    {
        CONST_VTBL struct __x_ABI_CLumia_CImaging_CAdjustments_CIColorBoostFilterVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define __x_ABI_CLumia_CImaging_CAdjustments_CIColorBoostFilter_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __x_ABI_CLumia_CImaging_CAdjustments_CIColorBoostFilter_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __x_ABI_CLumia_CImaging_CAdjustments_CIColorBoostFilter_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __x_ABI_CLumia_CImaging_CAdjustments_CIColorBoostFilter_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 

#define __x_ABI_CLumia_CImaging_CAdjustments_CIColorBoostFilter_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 

#define __x_ABI_CLumia_CImaging_CAdjustments_CIColorBoostFilter_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 


#define __x_ABI_CLumia_CImaging_CAdjustments_CIColorBoostFilter_get_Gain(This,__returnValue)	\
    ( (This)->lpVtbl -> get_Gain(This,__returnValue) ) 

#define __x_ABI_CLumia_CImaging_CAdjustments_CIColorBoostFilter_put_Gain(This,value)	\
    ( (This)->lpVtbl -> put_Gain(This,value) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* ____x_ABI_CLumia_CImaging_CAdjustments_CIColorBoostFilter_INTERFACE_DEFINED__ */


/* interface __MIDL_itf_Lumia2EImaging2EAdjustments_0000_0053 */
/* [local] */ 

#if !defined(____x_ABI_CLumia_CImaging_CAdjustments_CIColorBoostFilterFactory_INTERFACE_DEFINED__)
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Lumia_Imaging_Adjustments_IColorBoostFilterFactory[] = L"Lumia.Imaging.Adjustments.IColorBoostFilterFactory";
#endif /* !defined(____x_ABI_CLumia_CImaging_CAdjustments_CIColorBoostFilterFactory_INTERFACE_DEFINED__) */


/* interface __MIDL_itf_Lumia2EImaging2EAdjustments_0000_0053 */
/* [local] */ 



extern RPC_IF_HANDLE __MIDL_itf_Lumia2EImaging2EAdjustments_0000_0053_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_Lumia2EImaging2EAdjustments_0000_0053_v0_0_s_ifspec;

#ifndef ____x_ABI_CLumia_CImaging_CAdjustments_CIColorBoostFilterFactory_INTERFACE_DEFINED__
#define ____x_ABI_CLumia_CImaging_CAdjustments_CIColorBoostFilterFactory_INTERFACE_DEFINED__

/* interface __x_ABI_CLumia_CImaging_CAdjustments_CIColorBoostFilterFactory */
/* [uuid][object] */ 



/* interface ABI::Lumia::Imaging::Adjustments::IColorBoostFilterFactory */
/* [uuid][object] */ 


EXTERN_C const IID IID___x_ABI_CLumia_CImaging_CAdjustments_CIColorBoostFilterFactory;

#if defined(__cplusplus) && !defined(CINTERFACE)
    } /* end extern "C" */
    namespace ABI {
        namespace Lumia {
            namespace Imaging {
                namespace Adjustments {
                    
                    MIDL_INTERFACE("0468D14F-44BE-3FD9-AA94-08B8FFC1A968")
                    IColorBoostFilterFactory : public IInspectable
                    {
                    public:
                        virtual HRESULT STDMETHODCALLTYPE CreateWithGain( 
                            /* [in] */ DOUBLE gain,
                            /* [out][retval] */ __RPC__deref_out_opt ABI::Lumia::Imaging::Adjustments::IColorBoostFilter **__returnValue) = 0;
                        
                    };

                    extern const __declspec(selectany) IID & IID_IColorBoostFilterFactory = __uuidof(IColorBoostFilterFactory);

                    
                }  /* end namespace */
            }  /* end namespace */
        }  /* end namespace */
    }  /* end namespace */
    extern "C" { 
    
#else 	/* C style interface */

    typedef struct __x_ABI_CLumia_CImaging_CAdjustments_CIColorBoostFilterFactoryVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            __RPC__in __x_ABI_CLumia_CImaging_CAdjustments_CIColorBoostFilterFactory * This,
            /* [in] */ __RPC__in REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            __RPC__in __x_ABI_CLumia_CImaging_CAdjustments_CIColorBoostFilterFactory * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            __RPC__in __x_ABI_CLumia_CImaging_CAdjustments_CIColorBoostFilterFactory * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetIids )( 
            __RPC__in __x_ABI_CLumia_CImaging_CAdjustments_CIColorBoostFilterFactory * This,
            /* [out] */ __RPC__out ULONG *iidCount,
            /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
        
        HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )( 
            __RPC__in __x_ABI_CLumia_CImaging_CAdjustments_CIColorBoostFilterFactory * This,
            /* [out] */ __RPC__deref_out_opt HSTRING *className);
        
        HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )( 
            __RPC__in __x_ABI_CLumia_CImaging_CAdjustments_CIColorBoostFilterFactory * This,
            /* [out] */ __RPC__out TrustLevel *trustLevel);
        
        HRESULT ( STDMETHODCALLTYPE *CreateWithGain )( 
            __RPC__in __x_ABI_CLumia_CImaging_CAdjustments_CIColorBoostFilterFactory * This,
            /* [in] */ DOUBLE gain,
            /* [out][retval] */ __RPC__deref_out_opt __x_ABI_CLumia_CImaging_CAdjustments_CIColorBoostFilter **__returnValue);
        
        END_INTERFACE
    } __x_ABI_CLumia_CImaging_CAdjustments_CIColorBoostFilterFactoryVtbl;

    interface __x_ABI_CLumia_CImaging_CAdjustments_CIColorBoostFilterFactory
    {
        CONST_VTBL struct __x_ABI_CLumia_CImaging_CAdjustments_CIColorBoostFilterFactoryVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define __x_ABI_CLumia_CImaging_CAdjustments_CIColorBoostFilterFactory_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __x_ABI_CLumia_CImaging_CAdjustments_CIColorBoostFilterFactory_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __x_ABI_CLumia_CImaging_CAdjustments_CIColorBoostFilterFactory_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __x_ABI_CLumia_CImaging_CAdjustments_CIColorBoostFilterFactory_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 

#define __x_ABI_CLumia_CImaging_CAdjustments_CIColorBoostFilterFactory_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 

#define __x_ABI_CLumia_CImaging_CAdjustments_CIColorBoostFilterFactory_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 


#define __x_ABI_CLumia_CImaging_CAdjustments_CIColorBoostFilterFactory_CreateWithGain(This,gain,__returnValue)	\
    ( (This)->lpVtbl -> CreateWithGain(This,gain,__returnValue) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* ____x_ABI_CLumia_CImaging_CAdjustments_CIColorBoostFilterFactory_INTERFACE_DEFINED__ */


/* interface __MIDL_itf_Lumia2EImaging2EAdjustments_0000_0054 */
/* [local] */ 

#if !defined(____x_ABI_CLumia_CImaging_CAdjustments_CIColorizationFilter_INTERFACE_DEFINED__)
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Lumia_Imaging_Adjustments_IColorizationFilter[] = L"Lumia.Imaging.Adjustments.IColorizationFilter";
#endif /* !defined(____x_ABI_CLumia_CImaging_CAdjustments_CIColorizationFilter_INTERFACE_DEFINED__) */


/* interface __MIDL_itf_Lumia2EImaging2EAdjustments_0000_0054 */
/* [local] */ 



extern RPC_IF_HANDLE __MIDL_itf_Lumia2EImaging2EAdjustments_0000_0054_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_Lumia2EImaging2EAdjustments_0000_0054_v0_0_s_ifspec;

#ifndef ____x_ABI_CLumia_CImaging_CAdjustments_CIColorizationFilter_INTERFACE_DEFINED__
#define ____x_ABI_CLumia_CImaging_CAdjustments_CIColorizationFilter_INTERFACE_DEFINED__

/* interface __x_ABI_CLumia_CImaging_CAdjustments_CIColorizationFilter */
/* [uuid][object] */ 



/* interface ABI::Lumia::Imaging::Adjustments::IColorizationFilter */
/* [uuid][object] */ 


EXTERN_C const IID IID___x_ABI_CLumia_CImaging_CAdjustments_CIColorizationFilter;

#if defined(__cplusplus) && !defined(CINTERFACE)
    } /* end extern "C" */
    namespace ABI {
        namespace Lumia {
            namespace Imaging {
                namespace Adjustments {
                    
                    MIDL_INTERFACE("32E8BAC4-F343-3710-911F-DB34DED7E22E")
                    IColorizationFilter : public IInspectable
                    {
                    public:
                        virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_Color( 
                            /* [out][retval] */ __RPC__out ABI::Windows::UI::Color *__returnValue) = 0;
                        
                        virtual /* [propput] */ HRESULT STDMETHODCALLTYPE put_Color( 
                            /* [in] */ ABI::Windows::UI::Color value) = 0;
                        
                        virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_Luminance( 
                            /* [out][retval] */ __RPC__out DOUBLE *__returnValue) = 0;
                        
                        virtual /* [propput] */ HRESULT STDMETHODCALLTYPE put_Luminance( 
                            /* [in] */ DOUBLE value) = 0;
                        
                        virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_Chrominance( 
                            /* [out][retval] */ __RPC__out DOUBLE *__returnValue) = 0;
                        
                        virtual /* [propput] */ HRESULT STDMETHODCALLTYPE put_Chrominance( 
                            /* [in] */ DOUBLE value) = 0;
                        
                    };

                    extern const __declspec(selectany) IID & IID_IColorizationFilter = __uuidof(IColorizationFilter);

                    
                }  /* end namespace */
            }  /* end namespace */
        }  /* end namespace */
    }  /* end namespace */
    extern "C" { 
    
#else 	/* C style interface */

    typedef struct __x_ABI_CLumia_CImaging_CAdjustments_CIColorizationFilterVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            __RPC__in __x_ABI_CLumia_CImaging_CAdjustments_CIColorizationFilter * This,
            /* [in] */ __RPC__in REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            __RPC__in __x_ABI_CLumia_CImaging_CAdjustments_CIColorizationFilter * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            __RPC__in __x_ABI_CLumia_CImaging_CAdjustments_CIColorizationFilter * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetIids )( 
            __RPC__in __x_ABI_CLumia_CImaging_CAdjustments_CIColorizationFilter * This,
            /* [out] */ __RPC__out ULONG *iidCount,
            /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
        
        HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )( 
            __RPC__in __x_ABI_CLumia_CImaging_CAdjustments_CIColorizationFilter * This,
            /* [out] */ __RPC__deref_out_opt HSTRING *className);
        
        HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )( 
            __RPC__in __x_ABI_CLumia_CImaging_CAdjustments_CIColorizationFilter * This,
            /* [out] */ __RPC__out TrustLevel *trustLevel);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_Color )( 
            __RPC__in __x_ABI_CLumia_CImaging_CAdjustments_CIColorizationFilter * This,
            /* [out][retval] */ __RPC__out __x_ABI_CWindows_CUI_CColor *__returnValue);
        
        /* [propput] */ HRESULT ( STDMETHODCALLTYPE *put_Color )( 
            __RPC__in __x_ABI_CLumia_CImaging_CAdjustments_CIColorizationFilter * This,
            /* [in] */ __x_ABI_CWindows_CUI_CColor value);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_Luminance )( 
            __RPC__in __x_ABI_CLumia_CImaging_CAdjustments_CIColorizationFilter * This,
            /* [out][retval] */ __RPC__out DOUBLE *__returnValue);
        
        /* [propput] */ HRESULT ( STDMETHODCALLTYPE *put_Luminance )( 
            __RPC__in __x_ABI_CLumia_CImaging_CAdjustments_CIColorizationFilter * This,
            /* [in] */ DOUBLE value);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_Chrominance )( 
            __RPC__in __x_ABI_CLumia_CImaging_CAdjustments_CIColorizationFilter * This,
            /* [out][retval] */ __RPC__out DOUBLE *__returnValue);
        
        /* [propput] */ HRESULT ( STDMETHODCALLTYPE *put_Chrominance )( 
            __RPC__in __x_ABI_CLumia_CImaging_CAdjustments_CIColorizationFilter * This,
            /* [in] */ DOUBLE value);
        
        END_INTERFACE
    } __x_ABI_CLumia_CImaging_CAdjustments_CIColorizationFilterVtbl;

    interface __x_ABI_CLumia_CImaging_CAdjustments_CIColorizationFilter
    {
        CONST_VTBL struct __x_ABI_CLumia_CImaging_CAdjustments_CIColorizationFilterVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define __x_ABI_CLumia_CImaging_CAdjustments_CIColorizationFilter_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __x_ABI_CLumia_CImaging_CAdjustments_CIColorizationFilter_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __x_ABI_CLumia_CImaging_CAdjustments_CIColorizationFilter_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __x_ABI_CLumia_CImaging_CAdjustments_CIColorizationFilter_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 

#define __x_ABI_CLumia_CImaging_CAdjustments_CIColorizationFilter_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 

#define __x_ABI_CLumia_CImaging_CAdjustments_CIColorizationFilter_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 


#define __x_ABI_CLumia_CImaging_CAdjustments_CIColorizationFilter_get_Color(This,__returnValue)	\
    ( (This)->lpVtbl -> get_Color(This,__returnValue) ) 

#define __x_ABI_CLumia_CImaging_CAdjustments_CIColorizationFilter_put_Color(This,value)	\
    ( (This)->lpVtbl -> put_Color(This,value) ) 

#define __x_ABI_CLumia_CImaging_CAdjustments_CIColorizationFilter_get_Luminance(This,__returnValue)	\
    ( (This)->lpVtbl -> get_Luminance(This,__returnValue) ) 

#define __x_ABI_CLumia_CImaging_CAdjustments_CIColorizationFilter_put_Luminance(This,value)	\
    ( (This)->lpVtbl -> put_Luminance(This,value) ) 

#define __x_ABI_CLumia_CImaging_CAdjustments_CIColorizationFilter_get_Chrominance(This,__returnValue)	\
    ( (This)->lpVtbl -> get_Chrominance(This,__returnValue) ) 

#define __x_ABI_CLumia_CImaging_CAdjustments_CIColorizationFilter_put_Chrominance(This,value)	\
    ( (This)->lpVtbl -> put_Chrominance(This,value) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* ____x_ABI_CLumia_CImaging_CAdjustments_CIColorizationFilter_INTERFACE_DEFINED__ */


/* interface __MIDL_itf_Lumia2EImaging2EAdjustments_0000_0055 */
/* [local] */ 

#if !defined(____x_ABI_CLumia_CImaging_CAdjustments_CIColorizationFilterFactory_INTERFACE_DEFINED__)
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Lumia_Imaging_Adjustments_IColorizationFilterFactory[] = L"Lumia.Imaging.Adjustments.IColorizationFilterFactory";
#endif /* !defined(____x_ABI_CLumia_CImaging_CAdjustments_CIColorizationFilterFactory_INTERFACE_DEFINED__) */


/* interface __MIDL_itf_Lumia2EImaging2EAdjustments_0000_0055 */
/* [local] */ 



extern RPC_IF_HANDLE __MIDL_itf_Lumia2EImaging2EAdjustments_0000_0055_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_Lumia2EImaging2EAdjustments_0000_0055_v0_0_s_ifspec;

#ifndef ____x_ABI_CLumia_CImaging_CAdjustments_CIColorizationFilterFactory_INTERFACE_DEFINED__
#define ____x_ABI_CLumia_CImaging_CAdjustments_CIColorizationFilterFactory_INTERFACE_DEFINED__

/* interface __x_ABI_CLumia_CImaging_CAdjustments_CIColorizationFilterFactory */
/* [uuid][object] */ 



/* interface ABI::Lumia::Imaging::Adjustments::IColorizationFilterFactory */
/* [uuid][object] */ 


EXTERN_C const IID IID___x_ABI_CLumia_CImaging_CAdjustments_CIColorizationFilterFactory;

#if defined(__cplusplus) && !defined(CINTERFACE)
    } /* end extern "C" */
    namespace ABI {
        namespace Lumia {
            namespace Imaging {
                namespace Adjustments {
                    
                    MIDL_INTERFACE("0A5CD2B3-5DF9-3235-9C3A-F905187F9C53")
                    IColorizationFilterFactory : public IInspectable
                    {
                    public:
                        virtual HRESULT STDMETHODCALLTYPE CreateWithReferenceColorAndAdjustments( 
                            /* [in] */ ABI::Windows::UI::Color color,
                            /* [in] */ DOUBLE luminance,
                            /* [in] */ DOUBLE chrominance,
                            /* [out][retval] */ __RPC__deref_out_opt ABI::Lumia::Imaging::Adjustments::IColorizationFilter **__returnValue) = 0;
                        
                    };

                    extern const __declspec(selectany) IID & IID_IColorizationFilterFactory = __uuidof(IColorizationFilterFactory);

                    
                }  /* end namespace */
            }  /* end namespace */
        }  /* end namespace */
    }  /* end namespace */
    extern "C" { 
    
#else 	/* C style interface */

    typedef struct __x_ABI_CLumia_CImaging_CAdjustments_CIColorizationFilterFactoryVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            __RPC__in __x_ABI_CLumia_CImaging_CAdjustments_CIColorizationFilterFactory * This,
            /* [in] */ __RPC__in REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            __RPC__in __x_ABI_CLumia_CImaging_CAdjustments_CIColorizationFilterFactory * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            __RPC__in __x_ABI_CLumia_CImaging_CAdjustments_CIColorizationFilterFactory * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetIids )( 
            __RPC__in __x_ABI_CLumia_CImaging_CAdjustments_CIColorizationFilterFactory * This,
            /* [out] */ __RPC__out ULONG *iidCount,
            /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
        
        HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )( 
            __RPC__in __x_ABI_CLumia_CImaging_CAdjustments_CIColorizationFilterFactory * This,
            /* [out] */ __RPC__deref_out_opt HSTRING *className);
        
        HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )( 
            __RPC__in __x_ABI_CLumia_CImaging_CAdjustments_CIColorizationFilterFactory * This,
            /* [out] */ __RPC__out TrustLevel *trustLevel);
        
        HRESULT ( STDMETHODCALLTYPE *CreateWithReferenceColorAndAdjustments )( 
            __RPC__in __x_ABI_CLumia_CImaging_CAdjustments_CIColorizationFilterFactory * This,
            /* [in] */ __x_ABI_CWindows_CUI_CColor color,
            /* [in] */ DOUBLE luminance,
            /* [in] */ DOUBLE chrominance,
            /* [out][retval] */ __RPC__deref_out_opt __x_ABI_CLumia_CImaging_CAdjustments_CIColorizationFilter **__returnValue);
        
        END_INTERFACE
    } __x_ABI_CLumia_CImaging_CAdjustments_CIColorizationFilterFactoryVtbl;

    interface __x_ABI_CLumia_CImaging_CAdjustments_CIColorizationFilterFactory
    {
        CONST_VTBL struct __x_ABI_CLumia_CImaging_CAdjustments_CIColorizationFilterFactoryVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define __x_ABI_CLumia_CImaging_CAdjustments_CIColorizationFilterFactory_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __x_ABI_CLumia_CImaging_CAdjustments_CIColorizationFilterFactory_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __x_ABI_CLumia_CImaging_CAdjustments_CIColorizationFilterFactory_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __x_ABI_CLumia_CImaging_CAdjustments_CIColorizationFilterFactory_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 

#define __x_ABI_CLumia_CImaging_CAdjustments_CIColorizationFilterFactory_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 

#define __x_ABI_CLumia_CImaging_CAdjustments_CIColorizationFilterFactory_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 


#define __x_ABI_CLumia_CImaging_CAdjustments_CIColorizationFilterFactory_CreateWithReferenceColorAndAdjustments(This,color,luminance,chrominance,__returnValue)	\
    ( (This)->lpVtbl -> CreateWithReferenceColorAndAdjustments(This,color,luminance,chrominance,__returnValue) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* ____x_ABI_CLumia_CImaging_CAdjustments_CIColorizationFilterFactory_INTERFACE_DEFINED__ */


/* interface __MIDL_itf_Lumia2EImaging2EAdjustments_0000_0056 */
/* [local] */ 

#if !defined(____x_ABI_CLumia_CImaging_CAdjustments_CIContrastFilter_INTERFACE_DEFINED__)
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Lumia_Imaging_Adjustments_IContrastFilter[] = L"Lumia.Imaging.Adjustments.IContrastFilter";
#endif /* !defined(____x_ABI_CLumia_CImaging_CAdjustments_CIContrastFilter_INTERFACE_DEFINED__) */


/* interface __MIDL_itf_Lumia2EImaging2EAdjustments_0000_0056 */
/* [local] */ 



extern RPC_IF_HANDLE __MIDL_itf_Lumia2EImaging2EAdjustments_0000_0056_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_Lumia2EImaging2EAdjustments_0000_0056_v0_0_s_ifspec;

#ifndef ____x_ABI_CLumia_CImaging_CAdjustments_CIContrastFilter_INTERFACE_DEFINED__
#define ____x_ABI_CLumia_CImaging_CAdjustments_CIContrastFilter_INTERFACE_DEFINED__

/* interface __x_ABI_CLumia_CImaging_CAdjustments_CIContrastFilter */
/* [uuid][object] */ 



/* interface ABI::Lumia::Imaging::Adjustments::IContrastFilter */
/* [uuid][object] */ 


EXTERN_C const IID IID___x_ABI_CLumia_CImaging_CAdjustments_CIContrastFilter;

#if defined(__cplusplus) && !defined(CINTERFACE)
    } /* end extern "C" */
    namespace ABI {
        namespace Lumia {
            namespace Imaging {
                namespace Adjustments {
                    
                    MIDL_INTERFACE("C0D67795-0074-3401-B876-5D61CCC7C853")
                    IContrastFilter : public IInspectable
                    {
                    public:
                        virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_Level( 
                            /* [out][retval] */ __RPC__out DOUBLE *__returnValue) = 0;
                        
                        virtual /* [propput] */ HRESULT STDMETHODCALLTYPE put_Level( 
                            /* [in] */ DOUBLE value) = 0;
                        
                    };

                    extern const __declspec(selectany) IID & IID_IContrastFilter = __uuidof(IContrastFilter);

                    
                }  /* end namespace */
            }  /* end namespace */
        }  /* end namespace */
    }  /* end namespace */
    extern "C" { 
    
#else 	/* C style interface */

    typedef struct __x_ABI_CLumia_CImaging_CAdjustments_CIContrastFilterVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            __RPC__in __x_ABI_CLumia_CImaging_CAdjustments_CIContrastFilter * This,
            /* [in] */ __RPC__in REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            __RPC__in __x_ABI_CLumia_CImaging_CAdjustments_CIContrastFilter * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            __RPC__in __x_ABI_CLumia_CImaging_CAdjustments_CIContrastFilter * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetIids )( 
            __RPC__in __x_ABI_CLumia_CImaging_CAdjustments_CIContrastFilter * This,
            /* [out] */ __RPC__out ULONG *iidCount,
            /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
        
        HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )( 
            __RPC__in __x_ABI_CLumia_CImaging_CAdjustments_CIContrastFilter * This,
            /* [out] */ __RPC__deref_out_opt HSTRING *className);
        
        HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )( 
            __RPC__in __x_ABI_CLumia_CImaging_CAdjustments_CIContrastFilter * This,
            /* [out] */ __RPC__out TrustLevel *trustLevel);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_Level )( 
            __RPC__in __x_ABI_CLumia_CImaging_CAdjustments_CIContrastFilter * This,
            /* [out][retval] */ __RPC__out DOUBLE *__returnValue);
        
        /* [propput] */ HRESULT ( STDMETHODCALLTYPE *put_Level )( 
            __RPC__in __x_ABI_CLumia_CImaging_CAdjustments_CIContrastFilter * This,
            /* [in] */ DOUBLE value);
        
        END_INTERFACE
    } __x_ABI_CLumia_CImaging_CAdjustments_CIContrastFilterVtbl;

    interface __x_ABI_CLumia_CImaging_CAdjustments_CIContrastFilter
    {
        CONST_VTBL struct __x_ABI_CLumia_CImaging_CAdjustments_CIContrastFilterVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define __x_ABI_CLumia_CImaging_CAdjustments_CIContrastFilter_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __x_ABI_CLumia_CImaging_CAdjustments_CIContrastFilter_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __x_ABI_CLumia_CImaging_CAdjustments_CIContrastFilter_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __x_ABI_CLumia_CImaging_CAdjustments_CIContrastFilter_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 

#define __x_ABI_CLumia_CImaging_CAdjustments_CIContrastFilter_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 

#define __x_ABI_CLumia_CImaging_CAdjustments_CIContrastFilter_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 


#define __x_ABI_CLumia_CImaging_CAdjustments_CIContrastFilter_get_Level(This,__returnValue)	\
    ( (This)->lpVtbl -> get_Level(This,__returnValue) ) 

#define __x_ABI_CLumia_CImaging_CAdjustments_CIContrastFilter_put_Level(This,value)	\
    ( (This)->lpVtbl -> put_Level(This,value) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* ____x_ABI_CLumia_CImaging_CAdjustments_CIContrastFilter_INTERFACE_DEFINED__ */


/* interface __MIDL_itf_Lumia2EImaging2EAdjustments_0000_0057 */
/* [local] */ 

#if !defined(____x_ABI_CLumia_CImaging_CAdjustments_CIContrastFilterFactory_INTERFACE_DEFINED__)
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Lumia_Imaging_Adjustments_IContrastFilterFactory[] = L"Lumia.Imaging.Adjustments.IContrastFilterFactory";
#endif /* !defined(____x_ABI_CLumia_CImaging_CAdjustments_CIContrastFilterFactory_INTERFACE_DEFINED__) */


/* interface __MIDL_itf_Lumia2EImaging2EAdjustments_0000_0057 */
/* [local] */ 



extern RPC_IF_HANDLE __MIDL_itf_Lumia2EImaging2EAdjustments_0000_0057_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_Lumia2EImaging2EAdjustments_0000_0057_v0_0_s_ifspec;

#ifndef ____x_ABI_CLumia_CImaging_CAdjustments_CIContrastFilterFactory_INTERFACE_DEFINED__
#define ____x_ABI_CLumia_CImaging_CAdjustments_CIContrastFilterFactory_INTERFACE_DEFINED__

/* interface __x_ABI_CLumia_CImaging_CAdjustments_CIContrastFilterFactory */
/* [uuid][object] */ 



/* interface ABI::Lumia::Imaging::Adjustments::IContrastFilterFactory */
/* [uuid][object] */ 


EXTERN_C const IID IID___x_ABI_CLumia_CImaging_CAdjustments_CIContrastFilterFactory;

#if defined(__cplusplus) && !defined(CINTERFACE)
    } /* end extern "C" */
    namespace ABI {
        namespace Lumia {
            namespace Imaging {
                namespace Adjustments {
                    
                    MIDL_INTERFACE("262D4FD9-B743-39D1-AFBD-76215B98C238")
                    IContrastFilterFactory : public IInspectable
                    {
                    public:
                        virtual HRESULT STDMETHODCALLTYPE CreateWithContrastLevel( 
                            /* [in] */ DOUBLE contrastLevel,
                            /* [out][retval] */ __RPC__deref_out_opt ABI::Lumia::Imaging::Adjustments::IContrastFilter **__returnValue) = 0;
                        
                    };

                    extern const __declspec(selectany) IID & IID_IContrastFilterFactory = __uuidof(IContrastFilterFactory);

                    
                }  /* end namespace */
            }  /* end namespace */
        }  /* end namespace */
    }  /* end namespace */
    extern "C" { 
    
#else 	/* C style interface */

    typedef struct __x_ABI_CLumia_CImaging_CAdjustments_CIContrastFilterFactoryVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            __RPC__in __x_ABI_CLumia_CImaging_CAdjustments_CIContrastFilterFactory * This,
            /* [in] */ __RPC__in REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            __RPC__in __x_ABI_CLumia_CImaging_CAdjustments_CIContrastFilterFactory * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            __RPC__in __x_ABI_CLumia_CImaging_CAdjustments_CIContrastFilterFactory * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetIids )( 
            __RPC__in __x_ABI_CLumia_CImaging_CAdjustments_CIContrastFilterFactory * This,
            /* [out] */ __RPC__out ULONG *iidCount,
            /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
        
        HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )( 
            __RPC__in __x_ABI_CLumia_CImaging_CAdjustments_CIContrastFilterFactory * This,
            /* [out] */ __RPC__deref_out_opt HSTRING *className);
        
        HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )( 
            __RPC__in __x_ABI_CLumia_CImaging_CAdjustments_CIContrastFilterFactory * This,
            /* [out] */ __RPC__out TrustLevel *trustLevel);
        
        HRESULT ( STDMETHODCALLTYPE *CreateWithContrastLevel )( 
            __RPC__in __x_ABI_CLumia_CImaging_CAdjustments_CIContrastFilterFactory * This,
            /* [in] */ DOUBLE contrastLevel,
            /* [out][retval] */ __RPC__deref_out_opt __x_ABI_CLumia_CImaging_CAdjustments_CIContrastFilter **__returnValue);
        
        END_INTERFACE
    } __x_ABI_CLumia_CImaging_CAdjustments_CIContrastFilterFactoryVtbl;

    interface __x_ABI_CLumia_CImaging_CAdjustments_CIContrastFilterFactory
    {
        CONST_VTBL struct __x_ABI_CLumia_CImaging_CAdjustments_CIContrastFilterFactoryVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define __x_ABI_CLumia_CImaging_CAdjustments_CIContrastFilterFactory_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __x_ABI_CLumia_CImaging_CAdjustments_CIContrastFilterFactory_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __x_ABI_CLumia_CImaging_CAdjustments_CIContrastFilterFactory_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __x_ABI_CLumia_CImaging_CAdjustments_CIContrastFilterFactory_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 

#define __x_ABI_CLumia_CImaging_CAdjustments_CIContrastFilterFactory_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 

#define __x_ABI_CLumia_CImaging_CAdjustments_CIContrastFilterFactory_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 


#define __x_ABI_CLumia_CImaging_CAdjustments_CIContrastFilterFactory_CreateWithContrastLevel(This,contrastLevel,__returnValue)	\
    ( (This)->lpVtbl -> CreateWithContrastLevel(This,contrastLevel,__returnValue) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* ____x_ABI_CLumia_CImaging_CAdjustments_CIContrastFilterFactory_INTERFACE_DEFINED__ */


/* interface __MIDL_itf_Lumia2EImaging2EAdjustments_0000_0058 */
/* [local] */ 

#if !defined(____x_ABI_CLumia_CImaging_CAdjustments_CILensBlurFocusEdgeSofteningFactory_INTERFACE_DEFINED__)
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Lumia_Imaging_Adjustments_ILensBlurFocusEdgeSofteningFactory[] = L"Lumia.Imaging.Adjustments.ILensBlurFocusEdgeSofteningFactory";
#endif /* !defined(____x_ABI_CLumia_CImaging_CAdjustments_CILensBlurFocusEdgeSofteningFactory_INTERFACE_DEFINED__) */


/* interface __MIDL_itf_Lumia2EImaging2EAdjustments_0000_0058 */
/* [local] */ 



extern RPC_IF_HANDLE __MIDL_itf_Lumia2EImaging2EAdjustments_0000_0058_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_Lumia2EImaging2EAdjustments_0000_0058_v0_0_s_ifspec;

#ifndef ____x_ABI_CLumia_CImaging_CAdjustments_CILensBlurFocusEdgeSofteningFactory_INTERFACE_DEFINED__
#define ____x_ABI_CLumia_CImaging_CAdjustments_CILensBlurFocusEdgeSofteningFactory_INTERFACE_DEFINED__

/* interface __x_ABI_CLumia_CImaging_CAdjustments_CILensBlurFocusEdgeSofteningFactory */
/* [uuid][object] */ 



/* interface ABI::Lumia::Imaging::Adjustments::ILensBlurFocusEdgeSofteningFactory */
/* [uuid][object] */ 


EXTERN_C const IID IID___x_ABI_CLumia_CImaging_CAdjustments_CILensBlurFocusEdgeSofteningFactory;

#if defined(__cplusplus) && !defined(CINTERFACE)
    } /* end extern "C" */
    namespace ABI {
        namespace Lumia {
            namespace Imaging {
                namespace Adjustments {
                    
                    MIDL_INTERFACE("CDDA07D2-B901-3AD8-B7CC-EA90C2D34D21")
                    ILensBlurFocusEdgeSofteningFactory : public IInspectable
                    {
                    public:
                        virtual HRESULT STDMETHODCALLTYPE CreateAutomatic( 
                            /* [in] */ ABI::Lumia::Imaging::Adjustments::LensBlurFocusEdgeSofteningMode mode,
                            /* [out][retval] */ __RPC__deref_out_opt ABI::Windows::Foundation::IStringable **__returnValue) = 0;
                        
                        virtual HRESULT STDMETHODCALLTYPE CreateExactPixels( 
                            /* [in] */ INT32 exactPixels,
                            /* [out][retval] */ __RPC__deref_out_opt ABI::Windows::Foundation::IStringable **__returnValue) = 0;
                        
                    };

                    extern const __declspec(selectany) IID & IID_ILensBlurFocusEdgeSofteningFactory = __uuidof(ILensBlurFocusEdgeSofteningFactory);

                    
                }  /* end namespace */
            }  /* end namespace */
        }  /* end namespace */
    }  /* end namespace */
    extern "C" { 
    
#else 	/* C style interface */

    typedef struct __x_ABI_CLumia_CImaging_CAdjustments_CILensBlurFocusEdgeSofteningFactoryVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            __RPC__in __x_ABI_CLumia_CImaging_CAdjustments_CILensBlurFocusEdgeSofteningFactory * This,
            /* [in] */ __RPC__in REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            __RPC__in __x_ABI_CLumia_CImaging_CAdjustments_CILensBlurFocusEdgeSofteningFactory * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            __RPC__in __x_ABI_CLumia_CImaging_CAdjustments_CILensBlurFocusEdgeSofteningFactory * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetIids )( 
            __RPC__in __x_ABI_CLumia_CImaging_CAdjustments_CILensBlurFocusEdgeSofteningFactory * This,
            /* [out] */ __RPC__out ULONG *iidCount,
            /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
        
        HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )( 
            __RPC__in __x_ABI_CLumia_CImaging_CAdjustments_CILensBlurFocusEdgeSofteningFactory * This,
            /* [out] */ __RPC__deref_out_opt HSTRING *className);
        
        HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )( 
            __RPC__in __x_ABI_CLumia_CImaging_CAdjustments_CILensBlurFocusEdgeSofteningFactory * This,
            /* [out] */ __RPC__out TrustLevel *trustLevel);
        
        HRESULT ( STDMETHODCALLTYPE *CreateAutomatic )( 
            __RPC__in __x_ABI_CLumia_CImaging_CAdjustments_CILensBlurFocusEdgeSofteningFactory * This,
            /* [in] */ __x_ABI_CLumia_CImaging_CAdjustments_CLensBlurFocusEdgeSofteningMode mode,
            /* [out][retval] */ __RPC__deref_out_opt __x_ABI_CWindows_CFoundation_CIStringable **__returnValue);
        
        HRESULT ( STDMETHODCALLTYPE *CreateExactPixels )( 
            __RPC__in __x_ABI_CLumia_CImaging_CAdjustments_CILensBlurFocusEdgeSofteningFactory * This,
            /* [in] */ INT32 exactPixels,
            /* [out][retval] */ __RPC__deref_out_opt __x_ABI_CWindows_CFoundation_CIStringable **__returnValue);
        
        END_INTERFACE
    } __x_ABI_CLumia_CImaging_CAdjustments_CILensBlurFocusEdgeSofteningFactoryVtbl;

    interface __x_ABI_CLumia_CImaging_CAdjustments_CILensBlurFocusEdgeSofteningFactory
    {
        CONST_VTBL struct __x_ABI_CLumia_CImaging_CAdjustments_CILensBlurFocusEdgeSofteningFactoryVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define __x_ABI_CLumia_CImaging_CAdjustments_CILensBlurFocusEdgeSofteningFactory_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __x_ABI_CLumia_CImaging_CAdjustments_CILensBlurFocusEdgeSofteningFactory_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __x_ABI_CLumia_CImaging_CAdjustments_CILensBlurFocusEdgeSofteningFactory_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __x_ABI_CLumia_CImaging_CAdjustments_CILensBlurFocusEdgeSofteningFactory_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 

#define __x_ABI_CLumia_CImaging_CAdjustments_CILensBlurFocusEdgeSofteningFactory_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 

#define __x_ABI_CLumia_CImaging_CAdjustments_CILensBlurFocusEdgeSofteningFactory_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 


#define __x_ABI_CLumia_CImaging_CAdjustments_CILensBlurFocusEdgeSofteningFactory_CreateAutomatic(This,mode,__returnValue)	\
    ( (This)->lpVtbl -> CreateAutomatic(This,mode,__returnValue) ) 

#define __x_ABI_CLumia_CImaging_CAdjustments_CILensBlurFocusEdgeSofteningFactory_CreateExactPixels(This,exactPixels,__returnValue)	\
    ( (This)->lpVtbl -> CreateExactPixels(This,exactPixels,__returnValue) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* ____x_ABI_CLumia_CImaging_CAdjustments_CILensBlurFocusEdgeSofteningFactory_INTERFACE_DEFINED__ */


/* interface __MIDL_itf_Lumia2EImaging2EAdjustments_0000_0059 */
/* [local] */ 

#if !defined(____x_ABI_CLumia_CImaging_CAdjustments_CICurvesFilter_INTERFACE_DEFINED__)
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Lumia_Imaging_Adjustments_ICurvesFilter[] = L"Lumia.Imaging.Adjustments.ICurvesFilter";
#endif /* !defined(____x_ABI_CLumia_CImaging_CAdjustments_CICurvesFilter_INTERFACE_DEFINED__) */


/* interface __MIDL_itf_Lumia2EImaging2EAdjustments_0000_0059 */
/* [local] */ 



extern RPC_IF_HANDLE __MIDL_itf_Lumia2EImaging2EAdjustments_0000_0059_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_Lumia2EImaging2EAdjustments_0000_0059_v0_0_s_ifspec;

#ifndef ____x_ABI_CLumia_CImaging_CAdjustments_CICurvesFilter_INTERFACE_DEFINED__
#define ____x_ABI_CLumia_CImaging_CAdjustments_CICurvesFilter_INTERFACE_DEFINED__

/* interface __x_ABI_CLumia_CImaging_CAdjustments_CICurvesFilter */
/* [uuid][object] */ 



/* interface ABI::Lumia::Imaging::Adjustments::ICurvesFilter */
/* [uuid][object] */ 


EXTERN_C const IID IID___x_ABI_CLumia_CImaging_CAdjustments_CICurvesFilter;

#if defined(__cplusplus) && !defined(CINTERFACE)
    } /* end extern "C" */
    namespace ABI {
        namespace Lumia {
            namespace Imaging {
                namespace Adjustments {
                    
                    MIDL_INTERFACE("0069B4BD-C13E-3C2B-8378-BF3C31EFEDDA")
                    ICurvesFilter : public IInspectable
                    {
                    public:
                        virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_Red( 
                            /* [out][retval] */ __RPC__deref_out_opt ABI::Lumia::Imaging::Adjustments::ICurve **__returnValue) = 0;
                        
                        virtual /* [propput] */ HRESULT STDMETHODCALLTYPE put_Red( 
                            /* [in] */ __RPC__in_opt ABI::Lumia::Imaging::Adjustments::ICurve *value) = 0;
                        
                        virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_Green( 
                            /* [out][retval] */ __RPC__deref_out_opt ABI::Lumia::Imaging::Adjustments::ICurve **__returnValue) = 0;
                        
                        virtual /* [propput] */ HRESULT STDMETHODCALLTYPE put_Green( 
                            /* [in] */ __RPC__in_opt ABI::Lumia::Imaging::Adjustments::ICurve *value) = 0;
                        
                        virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_Blue( 
                            /* [out][retval] */ __RPC__deref_out_opt ABI::Lumia::Imaging::Adjustments::ICurve **__returnValue) = 0;
                        
                        virtual /* [propput] */ HRESULT STDMETHODCALLTYPE put_Blue( 
                            /* [in] */ __RPC__in_opt ABI::Lumia::Imaging::Adjustments::ICurve *value) = 0;
                        
                    };

                    extern const __declspec(selectany) IID & IID_ICurvesFilter = __uuidof(ICurvesFilter);

                    
                }  /* end namespace */
            }  /* end namespace */
        }  /* end namespace */
    }  /* end namespace */
    extern "C" { 
    
#else 	/* C style interface */

    typedef struct __x_ABI_CLumia_CImaging_CAdjustments_CICurvesFilterVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            __RPC__in __x_ABI_CLumia_CImaging_CAdjustments_CICurvesFilter * This,
            /* [in] */ __RPC__in REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            __RPC__in __x_ABI_CLumia_CImaging_CAdjustments_CICurvesFilter * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            __RPC__in __x_ABI_CLumia_CImaging_CAdjustments_CICurvesFilter * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetIids )( 
            __RPC__in __x_ABI_CLumia_CImaging_CAdjustments_CICurvesFilter * This,
            /* [out] */ __RPC__out ULONG *iidCount,
            /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
        
        HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )( 
            __RPC__in __x_ABI_CLumia_CImaging_CAdjustments_CICurvesFilter * This,
            /* [out] */ __RPC__deref_out_opt HSTRING *className);
        
        HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )( 
            __RPC__in __x_ABI_CLumia_CImaging_CAdjustments_CICurvesFilter * This,
            /* [out] */ __RPC__out TrustLevel *trustLevel);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_Red )( 
            __RPC__in __x_ABI_CLumia_CImaging_CAdjustments_CICurvesFilter * This,
            /* [out][retval] */ __RPC__deref_out_opt __x_ABI_CLumia_CImaging_CAdjustments_CICurve **__returnValue);
        
        /* [propput] */ HRESULT ( STDMETHODCALLTYPE *put_Red )( 
            __RPC__in __x_ABI_CLumia_CImaging_CAdjustments_CICurvesFilter * This,
            /* [in] */ __RPC__in_opt __x_ABI_CLumia_CImaging_CAdjustments_CICurve *value);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_Green )( 
            __RPC__in __x_ABI_CLumia_CImaging_CAdjustments_CICurvesFilter * This,
            /* [out][retval] */ __RPC__deref_out_opt __x_ABI_CLumia_CImaging_CAdjustments_CICurve **__returnValue);
        
        /* [propput] */ HRESULT ( STDMETHODCALLTYPE *put_Green )( 
            __RPC__in __x_ABI_CLumia_CImaging_CAdjustments_CICurvesFilter * This,
            /* [in] */ __RPC__in_opt __x_ABI_CLumia_CImaging_CAdjustments_CICurve *value);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_Blue )( 
            __RPC__in __x_ABI_CLumia_CImaging_CAdjustments_CICurvesFilter * This,
            /* [out][retval] */ __RPC__deref_out_opt __x_ABI_CLumia_CImaging_CAdjustments_CICurve **__returnValue);
        
        /* [propput] */ HRESULT ( STDMETHODCALLTYPE *put_Blue )( 
            __RPC__in __x_ABI_CLumia_CImaging_CAdjustments_CICurvesFilter * This,
            /* [in] */ __RPC__in_opt __x_ABI_CLumia_CImaging_CAdjustments_CICurve *value);
        
        END_INTERFACE
    } __x_ABI_CLumia_CImaging_CAdjustments_CICurvesFilterVtbl;

    interface __x_ABI_CLumia_CImaging_CAdjustments_CICurvesFilter
    {
        CONST_VTBL struct __x_ABI_CLumia_CImaging_CAdjustments_CICurvesFilterVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define __x_ABI_CLumia_CImaging_CAdjustments_CICurvesFilter_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __x_ABI_CLumia_CImaging_CAdjustments_CICurvesFilter_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __x_ABI_CLumia_CImaging_CAdjustments_CICurvesFilter_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __x_ABI_CLumia_CImaging_CAdjustments_CICurvesFilter_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 

#define __x_ABI_CLumia_CImaging_CAdjustments_CICurvesFilter_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 

#define __x_ABI_CLumia_CImaging_CAdjustments_CICurvesFilter_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 


#define __x_ABI_CLumia_CImaging_CAdjustments_CICurvesFilter_get_Red(This,__returnValue)	\
    ( (This)->lpVtbl -> get_Red(This,__returnValue) ) 

#define __x_ABI_CLumia_CImaging_CAdjustments_CICurvesFilter_put_Red(This,value)	\
    ( (This)->lpVtbl -> put_Red(This,value) ) 

#define __x_ABI_CLumia_CImaging_CAdjustments_CICurvesFilter_get_Green(This,__returnValue)	\
    ( (This)->lpVtbl -> get_Green(This,__returnValue) ) 

#define __x_ABI_CLumia_CImaging_CAdjustments_CICurvesFilter_put_Green(This,value)	\
    ( (This)->lpVtbl -> put_Green(This,value) ) 

#define __x_ABI_CLumia_CImaging_CAdjustments_CICurvesFilter_get_Blue(This,__returnValue)	\
    ( (This)->lpVtbl -> get_Blue(This,__returnValue) ) 

#define __x_ABI_CLumia_CImaging_CAdjustments_CICurvesFilter_put_Blue(This,value)	\
    ( (This)->lpVtbl -> put_Blue(This,value) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* ____x_ABI_CLumia_CImaging_CAdjustments_CICurvesFilter_INTERFACE_DEFINED__ */


/* interface __MIDL_itf_Lumia2EImaging2EAdjustments_0000_0060 */
/* [local] */ 

#if !defined(____x_ABI_CLumia_CImaging_CAdjustments_CICurvesFilterFactory_INTERFACE_DEFINED__)
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Lumia_Imaging_Adjustments_ICurvesFilterFactory[] = L"Lumia.Imaging.Adjustments.ICurvesFilterFactory";
#endif /* !defined(____x_ABI_CLumia_CImaging_CAdjustments_CICurvesFilterFactory_INTERFACE_DEFINED__) */


/* interface __MIDL_itf_Lumia2EImaging2EAdjustments_0000_0060 */
/* [local] */ 



extern RPC_IF_HANDLE __MIDL_itf_Lumia2EImaging2EAdjustments_0000_0060_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_Lumia2EImaging2EAdjustments_0000_0060_v0_0_s_ifspec;

#ifndef ____x_ABI_CLumia_CImaging_CAdjustments_CICurvesFilterFactory_INTERFACE_DEFINED__
#define ____x_ABI_CLumia_CImaging_CAdjustments_CICurvesFilterFactory_INTERFACE_DEFINED__

/* interface __x_ABI_CLumia_CImaging_CAdjustments_CICurvesFilterFactory */
/* [uuid][object] */ 



/* interface ABI::Lumia::Imaging::Adjustments::ICurvesFilterFactory */
/* [uuid][object] */ 


EXTERN_C const IID IID___x_ABI_CLumia_CImaging_CAdjustments_CICurvesFilterFactory;

#if defined(__cplusplus) && !defined(CINTERFACE)
    } /* end extern "C" */
    namespace ABI {
        namespace Lumia {
            namespace Imaging {
                namespace Adjustments {
                    
                    MIDL_INTERFACE("BEEDBA0A-6924-3FDD-A484-9C8049237187")
                    ICurvesFilterFactory : public IInspectable
                    {
                    public:
                        virtual HRESULT STDMETHODCALLTYPE CreateInstance2( 
                            /* [in] */ __RPC__in_opt ABI::Lumia::Imaging::Adjustments::ICurve *rgb,
                            /* [out][retval] */ __RPC__deref_out_opt ABI::Lumia::Imaging::Adjustments::ICurvesFilter **__returnValue) = 0;
                        
                        virtual HRESULT STDMETHODCALLTYPE CreateInstance1( 
                            /* [in] */ __RPC__in_opt ABI::Lumia::Imaging::Adjustments::ICurve *red,
                            /* [in] */ __RPC__in_opt ABI::Lumia::Imaging::Adjustments::ICurve *green,
                            /* [in] */ __RPC__in_opt ABI::Lumia::Imaging::Adjustments::ICurve *blue,
                            /* [out][retval] */ __RPC__deref_out_opt ABI::Lumia::Imaging::Adjustments::ICurvesFilter **__returnValue) = 0;
                        
                    };

                    extern const __declspec(selectany) IID & IID_ICurvesFilterFactory = __uuidof(ICurvesFilterFactory);

                    
                }  /* end namespace */
            }  /* end namespace */
        }  /* end namespace */
    }  /* end namespace */
    extern "C" { 
    
#else 	/* C style interface */

    typedef struct __x_ABI_CLumia_CImaging_CAdjustments_CICurvesFilterFactoryVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            __RPC__in __x_ABI_CLumia_CImaging_CAdjustments_CICurvesFilterFactory * This,
            /* [in] */ __RPC__in REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            __RPC__in __x_ABI_CLumia_CImaging_CAdjustments_CICurvesFilterFactory * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            __RPC__in __x_ABI_CLumia_CImaging_CAdjustments_CICurvesFilterFactory * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetIids )( 
            __RPC__in __x_ABI_CLumia_CImaging_CAdjustments_CICurvesFilterFactory * This,
            /* [out] */ __RPC__out ULONG *iidCount,
            /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
        
        HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )( 
            __RPC__in __x_ABI_CLumia_CImaging_CAdjustments_CICurvesFilterFactory * This,
            /* [out] */ __RPC__deref_out_opt HSTRING *className);
        
        HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )( 
            __RPC__in __x_ABI_CLumia_CImaging_CAdjustments_CICurvesFilterFactory * This,
            /* [out] */ __RPC__out TrustLevel *trustLevel);
        
        HRESULT ( STDMETHODCALLTYPE *CreateInstance2 )( 
            __RPC__in __x_ABI_CLumia_CImaging_CAdjustments_CICurvesFilterFactory * This,
            /* [in] */ __RPC__in_opt __x_ABI_CLumia_CImaging_CAdjustments_CICurve *rgb,
            /* [out][retval] */ __RPC__deref_out_opt __x_ABI_CLumia_CImaging_CAdjustments_CICurvesFilter **__returnValue);
        
        HRESULT ( STDMETHODCALLTYPE *CreateInstance1 )( 
            __RPC__in __x_ABI_CLumia_CImaging_CAdjustments_CICurvesFilterFactory * This,
            /* [in] */ __RPC__in_opt __x_ABI_CLumia_CImaging_CAdjustments_CICurve *red,
            /* [in] */ __RPC__in_opt __x_ABI_CLumia_CImaging_CAdjustments_CICurve *green,
            /* [in] */ __RPC__in_opt __x_ABI_CLumia_CImaging_CAdjustments_CICurve *blue,
            /* [out][retval] */ __RPC__deref_out_opt __x_ABI_CLumia_CImaging_CAdjustments_CICurvesFilter **__returnValue);
        
        END_INTERFACE
    } __x_ABI_CLumia_CImaging_CAdjustments_CICurvesFilterFactoryVtbl;

    interface __x_ABI_CLumia_CImaging_CAdjustments_CICurvesFilterFactory
    {
        CONST_VTBL struct __x_ABI_CLumia_CImaging_CAdjustments_CICurvesFilterFactoryVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define __x_ABI_CLumia_CImaging_CAdjustments_CICurvesFilterFactory_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __x_ABI_CLumia_CImaging_CAdjustments_CICurvesFilterFactory_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __x_ABI_CLumia_CImaging_CAdjustments_CICurvesFilterFactory_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __x_ABI_CLumia_CImaging_CAdjustments_CICurvesFilterFactory_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 

#define __x_ABI_CLumia_CImaging_CAdjustments_CICurvesFilterFactory_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 

#define __x_ABI_CLumia_CImaging_CAdjustments_CICurvesFilterFactory_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 


#define __x_ABI_CLumia_CImaging_CAdjustments_CICurvesFilterFactory_CreateInstance2(This,rgb,__returnValue)	\
    ( (This)->lpVtbl -> CreateInstance2(This,rgb,__returnValue) ) 

#define __x_ABI_CLumia_CImaging_CAdjustments_CICurvesFilterFactory_CreateInstance1(This,red,green,blue,__returnValue)	\
    ( (This)->lpVtbl -> CreateInstance1(This,red,green,blue,__returnValue) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* ____x_ABI_CLumia_CImaging_CAdjustments_CICurvesFilterFactory_INTERFACE_DEFINED__ */


/* interface __MIDL_itf_Lumia2EImaging2EAdjustments_0000_0061 */
/* [local] */ 

#if !defined(____x_ABI_CLumia_CImaging_CAdjustments_CIDespeckleFilter_INTERFACE_DEFINED__)
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Lumia_Imaging_Adjustments_IDespeckleFilter[] = L"Lumia.Imaging.Adjustments.IDespeckleFilter";
#endif /* !defined(____x_ABI_CLumia_CImaging_CAdjustments_CIDespeckleFilter_INTERFACE_DEFINED__) */


/* interface __MIDL_itf_Lumia2EImaging2EAdjustments_0000_0061 */
/* [local] */ 



extern RPC_IF_HANDLE __MIDL_itf_Lumia2EImaging2EAdjustments_0000_0061_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_Lumia2EImaging2EAdjustments_0000_0061_v0_0_s_ifspec;

#ifndef ____x_ABI_CLumia_CImaging_CAdjustments_CIDespeckleFilter_INTERFACE_DEFINED__
#define ____x_ABI_CLumia_CImaging_CAdjustments_CIDespeckleFilter_INTERFACE_DEFINED__

/* interface __x_ABI_CLumia_CImaging_CAdjustments_CIDespeckleFilter */
/* [uuid][object] */ 



/* interface ABI::Lumia::Imaging::Adjustments::IDespeckleFilter */
/* [uuid][object] */ 


EXTERN_C const IID IID___x_ABI_CLumia_CImaging_CAdjustments_CIDespeckleFilter;

#if defined(__cplusplus) && !defined(CINTERFACE)
    } /* end extern "C" */
    namespace ABI {
        namespace Lumia {
            namespace Imaging {
                namespace Adjustments {
                    
                    MIDL_INTERFACE("D22285EE-C543-3597-AADB-C12F23FF41ED")
                    IDespeckleFilter : public IInspectable
                    {
                    public:
                        virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_DespeckleLevel( 
                            /* [out][retval] */ __RPC__out ABI::Lumia::Imaging::Adjustments::DespeckleLevel *__returnValue) = 0;
                        
                        virtual /* [propput] */ HRESULT STDMETHODCALLTYPE put_DespeckleLevel( 
                            /* [in] */ ABI::Lumia::Imaging::Adjustments::DespeckleLevel value) = 0;
                        
                    };

                    extern const __declspec(selectany) IID & IID_IDespeckleFilter = __uuidof(IDespeckleFilter);

                    
                }  /* end namespace */
            }  /* end namespace */
        }  /* end namespace */
    }  /* end namespace */
    extern "C" { 
    
#else 	/* C style interface */

    typedef struct __x_ABI_CLumia_CImaging_CAdjustments_CIDespeckleFilterVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            __RPC__in __x_ABI_CLumia_CImaging_CAdjustments_CIDespeckleFilter * This,
            /* [in] */ __RPC__in REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            __RPC__in __x_ABI_CLumia_CImaging_CAdjustments_CIDespeckleFilter * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            __RPC__in __x_ABI_CLumia_CImaging_CAdjustments_CIDespeckleFilter * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetIids )( 
            __RPC__in __x_ABI_CLumia_CImaging_CAdjustments_CIDespeckleFilter * This,
            /* [out] */ __RPC__out ULONG *iidCount,
            /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
        
        HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )( 
            __RPC__in __x_ABI_CLumia_CImaging_CAdjustments_CIDespeckleFilter * This,
            /* [out] */ __RPC__deref_out_opt HSTRING *className);
        
        HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )( 
            __RPC__in __x_ABI_CLumia_CImaging_CAdjustments_CIDespeckleFilter * This,
            /* [out] */ __RPC__out TrustLevel *trustLevel);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_DespeckleLevel )( 
            __RPC__in __x_ABI_CLumia_CImaging_CAdjustments_CIDespeckleFilter * This,
            /* [out][retval] */ __RPC__out __x_ABI_CLumia_CImaging_CAdjustments_CDespeckleLevel *__returnValue);
        
        /* [propput] */ HRESULT ( STDMETHODCALLTYPE *put_DespeckleLevel )( 
            __RPC__in __x_ABI_CLumia_CImaging_CAdjustments_CIDespeckleFilter * This,
            /* [in] */ __x_ABI_CLumia_CImaging_CAdjustments_CDespeckleLevel value);
        
        END_INTERFACE
    } __x_ABI_CLumia_CImaging_CAdjustments_CIDespeckleFilterVtbl;

    interface __x_ABI_CLumia_CImaging_CAdjustments_CIDespeckleFilter
    {
        CONST_VTBL struct __x_ABI_CLumia_CImaging_CAdjustments_CIDespeckleFilterVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define __x_ABI_CLumia_CImaging_CAdjustments_CIDespeckleFilter_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __x_ABI_CLumia_CImaging_CAdjustments_CIDespeckleFilter_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __x_ABI_CLumia_CImaging_CAdjustments_CIDespeckleFilter_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __x_ABI_CLumia_CImaging_CAdjustments_CIDespeckleFilter_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 

#define __x_ABI_CLumia_CImaging_CAdjustments_CIDespeckleFilter_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 

#define __x_ABI_CLumia_CImaging_CAdjustments_CIDespeckleFilter_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 


#define __x_ABI_CLumia_CImaging_CAdjustments_CIDespeckleFilter_get_DespeckleLevel(This,__returnValue)	\
    ( (This)->lpVtbl -> get_DespeckleLevel(This,__returnValue) ) 

#define __x_ABI_CLumia_CImaging_CAdjustments_CIDespeckleFilter_put_DespeckleLevel(This,value)	\
    ( (This)->lpVtbl -> put_DespeckleLevel(This,value) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* ____x_ABI_CLumia_CImaging_CAdjustments_CIDespeckleFilter_INTERFACE_DEFINED__ */


/* interface __MIDL_itf_Lumia2EImaging2EAdjustments_0000_0062 */
/* [local] */ 

#if !defined(____x_ABI_CLumia_CImaging_CAdjustments_CIDespeckleFilterFactory_INTERFACE_DEFINED__)
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Lumia_Imaging_Adjustments_IDespeckleFilterFactory[] = L"Lumia.Imaging.Adjustments.IDespeckleFilterFactory";
#endif /* !defined(____x_ABI_CLumia_CImaging_CAdjustments_CIDespeckleFilterFactory_INTERFACE_DEFINED__) */


/* interface __MIDL_itf_Lumia2EImaging2EAdjustments_0000_0062 */
/* [local] */ 



extern RPC_IF_HANDLE __MIDL_itf_Lumia2EImaging2EAdjustments_0000_0062_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_Lumia2EImaging2EAdjustments_0000_0062_v0_0_s_ifspec;

#ifndef ____x_ABI_CLumia_CImaging_CAdjustments_CIDespeckleFilterFactory_INTERFACE_DEFINED__
#define ____x_ABI_CLumia_CImaging_CAdjustments_CIDespeckleFilterFactory_INTERFACE_DEFINED__

/* interface __x_ABI_CLumia_CImaging_CAdjustments_CIDespeckleFilterFactory */
/* [uuid][object] */ 



/* interface ABI::Lumia::Imaging::Adjustments::IDespeckleFilterFactory */
/* [uuid][object] */ 


EXTERN_C const IID IID___x_ABI_CLumia_CImaging_CAdjustments_CIDespeckleFilterFactory;

#if defined(__cplusplus) && !defined(CINTERFACE)
    } /* end extern "C" */
    namespace ABI {
        namespace Lumia {
            namespace Imaging {
                namespace Adjustments {
                    
                    MIDL_INTERFACE("2632F169-6FDE-3360-91EC-B3418E7CA403")
                    IDespeckleFilterFactory : public IInspectable
                    {
                    public:
                        virtual HRESULT STDMETHODCALLTYPE Create( 
                            /* [in] */ ABI::Lumia::Imaging::Adjustments::DespeckleLevel despeckleLevel,
                            /* [out][retval] */ __RPC__deref_out_opt ABI::Lumia::Imaging::Adjustments::IDespeckleFilter **__returnValue) = 0;
                        
                    };

                    extern const __declspec(selectany) IID & IID_IDespeckleFilterFactory = __uuidof(IDespeckleFilterFactory);

                    
                }  /* end namespace */
            }  /* end namespace */
        }  /* end namespace */
    }  /* end namespace */
    extern "C" { 
    
#else 	/* C style interface */

    typedef struct __x_ABI_CLumia_CImaging_CAdjustments_CIDespeckleFilterFactoryVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            __RPC__in __x_ABI_CLumia_CImaging_CAdjustments_CIDespeckleFilterFactory * This,
            /* [in] */ __RPC__in REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            __RPC__in __x_ABI_CLumia_CImaging_CAdjustments_CIDespeckleFilterFactory * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            __RPC__in __x_ABI_CLumia_CImaging_CAdjustments_CIDespeckleFilterFactory * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetIids )( 
            __RPC__in __x_ABI_CLumia_CImaging_CAdjustments_CIDespeckleFilterFactory * This,
            /* [out] */ __RPC__out ULONG *iidCount,
            /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
        
        HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )( 
            __RPC__in __x_ABI_CLumia_CImaging_CAdjustments_CIDespeckleFilterFactory * This,
            /* [out] */ __RPC__deref_out_opt HSTRING *className);
        
        HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )( 
            __RPC__in __x_ABI_CLumia_CImaging_CAdjustments_CIDespeckleFilterFactory * This,
            /* [out] */ __RPC__out TrustLevel *trustLevel);
        
        HRESULT ( STDMETHODCALLTYPE *Create )( 
            __RPC__in __x_ABI_CLumia_CImaging_CAdjustments_CIDespeckleFilterFactory * This,
            /* [in] */ __x_ABI_CLumia_CImaging_CAdjustments_CDespeckleLevel despeckleLevel,
            /* [out][retval] */ __RPC__deref_out_opt __x_ABI_CLumia_CImaging_CAdjustments_CIDespeckleFilter **__returnValue);
        
        END_INTERFACE
    } __x_ABI_CLumia_CImaging_CAdjustments_CIDespeckleFilterFactoryVtbl;

    interface __x_ABI_CLumia_CImaging_CAdjustments_CIDespeckleFilterFactory
    {
        CONST_VTBL struct __x_ABI_CLumia_CImaging_CAdjustments_CIDespeckleFilterFactoryVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define __x_ABI_CLumia_CImaging_CAdjustments_CIDespeckleFilterFactory_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __x_ABI_CLumia_CImaging_CAdjustments_CIDespeckleFilterFactory_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __x_ABI_CLumia_CImaging_CAdjustments_CIDespeckleFilterFactory_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __x_ABI_CLumia_CImaging_CAdjustments_CIDespeckleFilterFactory_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 

#define __x_ABI_CLumia_CImaging_CAdjustments_CIDespeckleFilterFactory_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 

#define __x_ABI_CLumia_CImaging_CAdjustments_CIDespeckleFilterFactory_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 


#define __x_ABI_CLumia_CImaging_CAdjustments_CIDespeckleFilterFactory_Create(This,despeckleLevel,__returnValue)	\
    ( (This)->lpVtbl -> Create(This,despeckleLevel,__returnValue) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* ____x_ABI_CLumia_CImaging_CAdjustments_CIDespeckleFilterFactory_INTERFACE_DEFINED__ */


/* interface __MIDL_itf_Lumia2EImaging2EAdjustments_0000_0063 */
/* [local] */ 

#if !defined(____x_ABI_CLumia_CImaging_CAdjustments_CIExposureFilter_INTERFACE_DEFINED__)
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Lumia_Imaging_Adjustments_IExposureFilter[] = L"Lumia.Imaging.Adjustments.IExposureFilter";
#endif /* !defined(____x_ABI_CLumia_CImaging_CAdjustments_CIExposureFilter_INTERFACE_DEFINED__) */


/* interface __MIDL_itf_Lumia2EImaging2EAdjustments_0000_0063 */
/* [local] */ 



extern RPC_IF_HANDLE __MIDL_itf_Lumia2EImaging2EAdjustments_0000_0063_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_Lumia2EImaging2EAdjustments_0000_0063_v0_0_s_ifspec;

#ifndef ____x_ABI_CLumia_CImaging_CAdjustments_CIExposureFilter_INTERFACE_DEFINED__
#define ____x_ABI_CLumia_CImaging_CAdjustments_CIExposureFilter_INTERFACE_DEFINED__

/* interface __x_ABI_CLumia_CImaging_CAdjustments_CIExposureFilter */
/* [uuid][object] */ 



/* interface ABI::Lumia::Imaging::Adjustments::IExposureFilter */
/* [uuid][object] */ 


EXTERN_C const IID IID___x_ABI_CLumia_CImaging_CAdjustments_CIExposureFilter;

#if defined(__cplusplus) && !defined(CINTERFACE)
    } /* end extern "C" */
    namespace ABI {
        namespace Lumia {
            namespace Imaging {
                namespace Adjustments {
                    
                    MIDL_INTERFACE("4DE11490-D9CB-36A4-8645-5E598295E452")
                    IExposureFilter : public IInspectable
                    {
                    public:
                        virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_ExposureMode( 
                            /* [out][retval] */ __RPC__out ABI::Lumia::Imaging::Adjustments::ExposureMode *__returnValue) = 0;
                        
                        virtual /* [propput] */ HRESULT STDMETHODCALLTYPE put_ExposureMode( 
                            /* [in] */ ABI::Lumia::Imaging::Adjustments::ExposureMode value) = 0;
                        
                        virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_Gain( 
                            /* [out][retval] */ __RPC__out DOUBLE *__returnValue) = 0;
                        
                        virtual /* [propput] */ HRESULT STDMETHODCALLTYPE put_Gain( 
                            /* [in] */ DOUBLE value) = 0;
                        
                    };

                    extern const __declspec(selectany) IID & IID_IExposureFilter = __uuidof(IExposureFilter);

                    
                }  /* end namespace */
            }  /* end namespace */
        }  /* end namespace */
    }  /* end namespace */
    extern "C" { 
    
#else 	/* C style interface */

    typedef struct __x_ABI_CLumia_CImaging_CAdjustments_CIExposureFilterVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            __RPC__in __x_ABI_CLumia_CImaging_CAdjustments_CIExposureFilter * This,
            /* [in] */ __RPC__in REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            __RPC__in __x_ABI_CLumia_CImaging_CAdjustments_CIExposureFilter * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            __RPC__in __x_ABI_CLumia_CImaging_CAdjustments_CIExposureFilter * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetIids )( 
            __RPC__in __x_ABI_CLumia_CImaging_CAdjustments_CIExposureFilter * This,
            /* [out] */ __RPC__out ULONG *iidCount,
            /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
        
        HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )( 
            __RPC__in __x_ABI_CLumia_CImaging_CAdjustments_CIExposureFilter * This,
            /* [out] */ __RPC__deref_out_opt HSTRING *className);
        
        HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )( 
            __RPC__in __x_ABI_CLumia_CImaging_CAdjustments_CIExposureFilter * This,
            /* [out] */ __RPC__out TrustLevel *trustLevel);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_ExposureMode )( 
            __RPC__in __x_ABI_CLumia_CImaging_CAdjustments_CIExposureFilter * This,
            /* [out][retval] */ __RPC__out __x_ABI_CLumia_CImaging_CAdjustments_CExposureMode *__returnValue);
        
        /* [propput] */ HRESULT ( STDMETHODCALLTYPE *put_ExposureMode )( 
            __RPC__in __x_ABI_CLumia_CImaging_CAdjustments_CIExposureFilter * This,
            /* [in] */ __x_ABI_CLumia_CImaging_CAdjustments_CExposureMode value);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_Gain )( 
            __RPC__in __x_ABI_CLumia_CImaging_CAdjustments_CIExposureFilter * This,
            /* [out][retval] */ __RPC__out DOUBLE *__returnValue);
        
        /* [propput] */ HRESULT ( STDMETHODCALLTYPE *put_Gain )( 
            __RPC__in __x_ABI_CLumia_CImaging_CAdjustments_CIExposureFilter * This,
            /* [in] */ DOUBLE value);
        
        END_INTERFACE
    } __x_ABI_CLumia_CImaging_CAdjustments_CIExposureFilterVtbl;

    interface __x_ABI_CLumia_CImaging_CAdjustments_CIExposureFilter
    {
        CONST_VTBL struct __x_ABI_CLumia_CImaging_CAdjustments_CIExposureFilterVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define __x_ABI_CLumia_CImaging_CAdjustments_CIExposureFilter_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __x_ABI_CLumia_CImaging_CAdjustments_CIExposureFilter_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __x_ABI_CLumia_CImaging_CAdjustments_CIExposureFilter_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __x_ABI_CLumia_CImaging_CAdjustments_CIExposureFilter_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 

#define __x_ABI_CLumia_CImaging_CAdjustments_CIExposureFilter_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 

#define __x_ABI_CLumia_CImaging_CAdjustments_CIExposureFilter_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 


#define __x_ABI_CLumia_CImaging_CAdjustments_CIExposureFilter_get_ExposureMode(This,__returnValue)	\
    ( (This)->lpVtbl -> get_ExposureMode(This,__returnValue) ) 

#define __x_ABI_CLumia_CImaging_CAdjustments_CIExposureFilter_put_ExposureMode(This,value)	\
    ( (This)->lpVtbl -> put_ExposureMode(This,value) ) 

#define __x_ABI_CLumia_CImaging_CAdjustments_CIExposureFilter_get_Gain(This,__returnValue)	\
    ( (This)->lpVtbl -> get_Gain(This,__returnValue) ) 

#define __x_ABI_CLumia_CImaging_CAdjustments_CIExposureFilter_put_Gain(This,value)	\
    ( (This)->lpVtbl -> put_Gain(This,value) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* ____x_ABI_CLumia_CImaging_CAdjustments_CIExposureFilter_INTERFACE_DEFINED__ */


/* interface __MIDL_itf_Lumia2EImaging2EAdjustments_0000_0064 */
/* [local] */ 

#if !defined(____x_ABI_CLumia_CImaging_CAdjustments_CIExposureFilterFactory_INTERFACE_DEFINED__)
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Lumia_Imaging_Adjustments_IExposureFilterFactory[] = L"Lumia.Imaging.Adjustments.IExposureFilterFactory";
#endif /* !defined(____x_ABI_CLumia_CImaging_CAdjustments_CIExposureFilterFactory_INTERFACE_DEFINED__) */


/* interface __MIDL_itf_Lumia2EImaging2EAdjustments_0000_0064 */
/* [local] */ 



extern RPC_IF_HANDLE __MIDL_itf_Lumia2EImaging2EAdjustments_0000_0064_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_Lumia2EImaging2EAdjustments_0000_0064_v0_0_s_ifspec;

#ifndef ____x_ABI_CLumia_CImaging_CAdjustments_CIExposureFilterFactory_INTERFACE_DEFINED__
#define ____x_ABI_CLumia_CImaging_CAdjustments_CIExposureFilterFactory_INTERFACE_DEFINED__

/* interface __x_ABI_CLumia_CImaging_CAdjustments_CIExposureFilterFactory */
/* [uuid][object] */ 



/* interface ABI::Lumia::Imaging::Adjustments::IExposureFilterFactory */
/* [uuid][object] */ 


EXTERN_C const IID IID___x_ABI_CLumia_CImaging_CAdjustments_CIExposureFilterFactory;

#if defined(__cplusplus) && !defined(CINTERFACE)
    } /* end extern "C" */
    namespace ABI {
        namespace Lumia {
            namespace Imaging {
                namespace Adjustments {
                    
                    MIDL_INTERFACE("E365E6E1-54A7-3427-AD14-0E0821C2EFA9")
                    IExposureFilterFactory : public IInspectable
                    {
                    public:
                        virtual HRESULT STDMETHODCALLTYPE CreateWithSettings( 
                            /* [in] */ ABI::Lumia::Imaging::Adjustments::ExposureMode exposureMode,
                            /* [in] */ DOUBLE gain,
                            /* [out][retval] */ __RPC__deref_out_opt ABI::Lumia::Imaging::Adjustments::IExposureFilter **__returnValue) = 0;
                        
                    };

                    extern const __declspec(selectany) IID & IID_IExposureFilterFactory = __uuidof(IExposureFilterFactory);

                    
                }  /* end namespace */
            }  /* end namespace */
        }  /* end namespace */
    }  /* end namespace */
    extern "C" { 
    
#else 	/* C style interface */

    typedef struct __x_ABI_CLumia_CImaging_CAdjustments_CIExposureFilterFactoryVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            __RPC__in __x_ABI_CLumia_CImaging_CAdjustments_CIExposureFilterFactory * This,
            /* [in] */ __RPC__in REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            __RPC__in __x_ABI_CLumia_CImaging_CAdjustments_CIExposureFilterFactory * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            __RPC__in __x_ABI_CLumia_CImaging_CAdjustments_CIExposureFilterFactory * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetIids )( 
            __RPC__in __x_ABI_CLumia_CImaging_CAdjustments_CIExposureFilterFactory * This,
            /* [out] */ __RPC__out ULONG *iidCount,
            /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
        
        HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )( 
            __RPC__in __x_ABI_CLumia_CImaging_CAdjustments_CIExposureFilterFactory * This,
            /* [out] */ __RPC__deref_out_opt HSTRING *className);
        
        HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )( 
            __RPC__in __x_ABI_CLumia_CImaging_CAdjustments_CIExposureFilterFactory * This,
            /* [out] */ __RPC__out TrustLevel *trustLevel);
        
        HRESULT ( STDMETHODCALLTYPE *CreateWithSettings )( 
            __RPC__in __x_ABI_CLumia_CImaging_CAdjustments_CIExposureFilterFactory * This,
            /* [in] */ __x_ABI_CLumia_CImaging_CAdjustments_CExposureMode exposureMode,
            /* [in] */ DOUBLE gain,
            /* [out][retval] */ __RPC__deref_out_opt __x_ABI_CLumia_CImaging_CAdjustments_CIExposureFilter **__returnValue);
        
        END_INTERFACE
    } __x_ABI_CLumia_CImaging_CAdjustments_CIExposureFilterFactoryVtbl;

    interface __x_ABI_CLumia_CImaging_CAdjustments_CIExposureFilterFactory
    {
        CONST_VTBL struct __x_ABI_CLumia_CImaging_CAdjustments_CIExposureFilterFactoryVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define __x_ABI_CLumia_CImaging_CAdjustments_CIExposureFilterFactory_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __x_ABI_CLumia_CImaging_CAdjustments_CIExposureFilterFactory_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __x_ABI_CLumia_CImaging_CAdjustments_CIExposureFilterFactory_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __x_ABI_CLumia_CImaging_CAdjustments_CIExposureFilterFactory_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 

#define __x_ABI_CLumia_CImaging_CAdjustments_CIExposureFilterFactory_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 

#define __x_ABI_CLumia_CImaging_CAdjustments_CIExposureFilterFactory_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 


#define __x_ABI_CLumia_CImaging_CAdjustments_CIExposureFilterFactory_CreateWithSettings(This,exposureMode,gain,__returnValue)	\
    ( (This)->lpVtbl -> CreateWithSettings(This,exposureMode,gain,__returnValue) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* ____x_ABI_CLumia_CImaging_CAdjustments_CIExposureFilterFactory_INTERFACE_DEFINED__ */


/* interface __MIDL_itf_Lumia2EImaging2EAdjustments_0000_0065 */
/* [local] */ 

#if !defined(____x_ABI_CLumia_CImaging_CAdjustments_CIGaussianNoiseFilter_INTERFACE_DEFINED__)
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Lumia_Imaging_Adjustments_IGaussianNoiseFilter[] = L"Lumia.Imaging.Adjustments.IGaussianNoiseFilter";
#endif /* !defined(____x_ABI_CLumia_CImaging_CAdjustments_CIGaussianNoiseFilter_INTERFACE_DEFINED__) */


/* interface __MIDL_itf_Lumia2EImaging2EAdjustments_0000_0065 */
/* [local] */ 



extern RPC_IF_HANDLE __MIDL_itf_Lumia2EImaging2EAdjustments_0000_0065_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_Lumia2EImaging2EAdjustments_0000_0065_v0_0_s_ifspec;

#ifndef ____x_ABI_CLumia_CImaging_CAdjustments_CIGaussianNoiseFilter_INTERFACE_DEFINED__
#define ____x_ABI_CLumia_CImaging_CAdjustments_CIGaussianNoiseFilter_INTERFACE_DEFINED__

/* interface __x_ABI_CLumia_CImaging_CAdjustments_CIGaussianNoiseFilter */
/* [uuid][object] */ 



/* interface ABI::Lumia::Imaging::Adjustments::IGaussianNoiseFilter */
/* [uuid][object] */ 


EXTERN_C const IID IID___x_ABI_CLumia_CImaging_CAdjustments_CIGaussianNoiseFilter;

#if defined(__cplusplus) && !defined(CINTERFACE)
    } /* end extern "C" */
    namespace ABI {
        namespace Lumia {
            namespace Imaging {
                namespace Adjustments {
                    
                    MIDL_INTERFACE("CD3AFC05-59D1-3D42-BB8B-0E18009FE2EA")
                    IGaussianNoiseFilter : public IInspectable
                    {
                    public:
                        virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_Level( 
                            /* [out][retval] */ __RPC__out DOUBLE *__returnValue) = 0;
                        
                        virtual /* [propput] */ HRESULT STDMETHODCALLTYPE put_Level( 
                            /* [in] */ DOUBLE value) = 0;
                        
                    };

                    extern const __declspec(selectany) IID & IID_IGaussianNoiseFilter = __uuidof(IGaussianNoiseFilter);

                    
                }  /* end namespace */
            }  /* end namespace */
        }  /* end namespace */
    }  /* end namespace */
    extern "C" { 
    
#else 	/* C style interface */

    typedef struct __x_ABI_CLumia_CImaging_CAdjustments_CIGaussianNoiseFilterVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            __RPC__in __x_ABI_CLumia_CImaging_CAdjustments_CIGaussianNoiseFilter * This,
            /* [in] */ __RPC__in REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            __RPC__in __x_ABI_CLumia_CImaging_CAdjustments_CIGaussianNoiseFilter * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            __RPC__in __x_ABI_CLumia_CImaging_CAdjustments_CIGaussianNoiseFilter * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetIids )( 
            __RPC__in __x_ABI_CLumia_CImaging_CAdjustments_CIGaussianNoiseFilter * This,
            /* [out] */ __RPC__out ULONG *iidCount,
            /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
        
        HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )( 
            __RPC__in __x_ABI_CLumia_CImaging_CAdjustments_CIGaussianNoiseFilter * This,
            /* [out] */ __RPC__deref_out_opt HSTRING *className);
        
        HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )( 
            __RPC__in __x_ABI_CLumia_CImaging_CAdjustments_CIGaussianNoiseFilter * This,
            /* [out] */ __RPC__out TrustLevel *trustLevel);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_Level )( 
            __RPC__in __x_ABI_CLumia_CImaging_CAdjustments_CIGaussianNoiseFilter * This,
            /* [out][retval] */ __RPC__out DOUBLE *__returnValue);
        
        /* [propput] */ HRESULT ( STDMETHODCALLTYPE *put_Level )( 
            __RPC__in __x_ABI_CLumia_CImaging_CAdjustments_CIGaussianNoiseFilter * This,
            /* [in] */ DOUBLE value);
        
        END_INTERFACE
    } __x_ABI_CLumia_CImaging_CAdjustments_CIGaussianNoiseFilterVtbl;

    interface __x_ABI_CLumia_CImaging_CAdjustments_CIGaussianNoiseFilter
    {
        CONST_VTBL struct __x_ABI_CLumia_CImaging_CAdjustments_CIGaussianNoiseFilterVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define __x_ABI_CLumia_CImaging_CAdjustments_CIGaussianNoiseFilter_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __x_ABI_CLumia_CImaging_CAdjustments_CIGaussianNoiseFilter_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __x_ABI_CLumia_CImaging_CAdjustments_CIGaussianNoiseFilter_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __x_ABI_CLumia_CImaging_CAdjustments_CIGaussianNoiseFilter_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 

#define __x_ABI_CLumia_CImaging_CAdjustments_CIGaussianNoiseFilter_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 

#define __x_ABI_CLumia_CImaging_CAdjustments_CIGaussianNoiseFilter_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 


#define __x_ABI_CLumia_CImaging_CAdjustments_CIGaussianNoiseFilter_get_Level(This,__returnValue)	\
    ( (This)->lpVtbl -> get_Level(This,__returnValue) ) 

#define __x_ABI_CLumia_CImaging_CAdjustments_CIGaussianNoiseFilter_put_Level(This,value)	\
    ( (This)->lpVtbl -> put_Level(This,value) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* ____x_ABI_CLumia_CImaging_CAdjustments_CIGaussianNoiseFilter_INTERFACE_DEFINED__ */


/* interface __MIDL_itf_Lumia2EImaging2EAdjustments_0000_0066 */
/* [local] */ 

#if !defined(____x_ABI_CLumia_CImaging_CAdjustments_CIGaussianNoiseFilterFactory_INTERFACE_DEFINED__)
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Lumia_Imaging_Adjustments_IGaussianNoiseFilterFactory[] = L"Lumia.Imaging.Adjustments.IGaussianNoiseFilterFactory";
#endif /* !defined(____x_ABI_CLumia_CImaging_CAdjustments_CIGaussianNoiseFilterFactory_INTERFACE_DEFINED__) */


/* interface __MIDL_itf_Lumia2EImaging2EAdjustments_0000_0066 */
/* [local] */ 



extern RPC_IF_HANDLE __MIDL_itf_Lumia2EImaging2EAdjustments_0000_0066_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_Lumia2EImaging2EAdjustments_0000_0066_v0_0_s_ifspec;

#ifndef ____x_ABI_CLumia_CImaging_CAdjustments_CIGaussianNoiseFilterFactory_INTERFACE_DEFINED__
#define ____x_ABI_CLumia_CImaging_CAdjustments_CIGaussianNoiseFilterFactory_INTERFACE_DEFINED__

/* interface __x_ABI_CLumia_CImaging_CAdjustments_CIGaussianNoiseFilterFactory */
/* [uuid][object] */ 



/* interface ABI::Lumia::Imaging::Adjustments::IGaussianNoiseFilterFactory */
/* [uuid][object] */ 


EXTERN_C const IID IID___x_ABI_CLumia_CImaging_CAdjustments_CIGaussianNoiseFilterFactory;

#if defined(__cplusplus) && !defined(CINTERFACE)
    } /* end extern "C" */
    namespace ABI {
        namespace Lumia {
            namespace Imaging {
                namespace Adjustments {
                    
                    MIDL_INTERFACE("89014334-85BF-395A-B543-CCBEE7512EB4")
                    IGaussianNoiseFilterFactory : public IInspectable
                    {
                    public:
                        virtual HRESULT STDMETHODCALLTYPE Create( 
                            /* [in] */ DOUBLE level,
                            /* [out][retval] */ __RPC__deref_out_opt ABI::Lumia::Imaging::Adjustments::IGaussianNoiseFilter **__returnValue) = 0;
                        
                    };

                    extern const __declspec(selectany) IID & IID_IGaussianNoiseFilterFactory = __uuidof(IGaussianNoiseFilterFactory);

                    
                }  /* end namespace */
            }  /* end namespace */
        }  /* end namespace */
    }  /* end namespace */
    extern "C" { 
    
#else 	/* C style interface */

    typedef struct __x_ABI_CLumia_CImaging_CAdjustments_CIGaussianNoiseFilterFactoryVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            __RPC__in __x_ABI_CLumia_CImaging_CAdjustments_CIGaussianNoiseFilterFactory * This,
            /* [in] */ __RPC__in REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            __RPC__in __x_ABI_CLumia_CImaging_CAdjustments_CIGaussianNoiseFilterFactory * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            __RPC__in __x_ABI_CLumia_CImaging_CAdjustments_CIGaussianNoiseFilterFactory * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetIids )( 
            __RPC__in __x_ABI_CLumia_CImaging_CAdjustments_CIGaussianNoiseFilterFactory * This,
            /* [out] */ __RPC__out ULONG *iidCount,
            /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
        
        HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )( 
            __RPC__in __x_ABI_CLumia_CImaging_CAdjustments_CIGaussianNoiseFilterFactory * This,
            /* [out] */ __RPC__deref_out_opt HSTRING *className);
        
        HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )( 
            __RPC__in __x_ABI_CLumia_CImaging_CAdjustments_CIGaussianNoiseFilterFactory * This,
            /* [out] */ __RPC__out TrustLevel *trustLevel);
        
        HRESULT ( STDMETHODCALLTYPE *Create )( 
            __RPC__in __x_ABI_CLumia_CImaging_CAdjustments_CIGaussianNoiseFilterFactory * This,
            /* [in] */ DOUBLE level,
            /* [out][retval] */ __RPC__deref_out_opt __x_ABI_CLumia_CImaging_CAdjustments_CIGaussianNoiseFilter **__returnValue);
        
        END_INTERFACE
    } __x_ABI_CLumia_CImaging_CAdjustments_CIGaussianNoiseFilterFactoryVtbl;

    interface __x_ABI_CLumia_CImaging_CAdjustments_CIGaussianNoiseFilterFactory
    {
        CONST_VTBL struct __x_ABI_CLumia_CImaging_CAdjustments_CIGaussianNoiseFilterFactoryVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define __x_ABI_CLumia_CImaging_CAdjustments_CIGaussianNoiseFilterFactory_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __x_ABI_CLumia_CImaging_CAdjustments_CIGaussianNoiseFilterFactory_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __x_ABI_CLumia_CImaging_CAdjustments_CIGaussianNoiseFilterFactory_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __x_ABI_CLumia_CImaging_CAdjustments_CIGaussianNoiseFilterFactory_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 

#define __x_ABI_CLumia_CImaging_CAdjustments_CIGaussianNoiseFilterFactory_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 

#define __x_ABI_CLumia_CImaging_CAdjustments_CIGaussianNoiseFilterFactory_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 


#define __x_ABI_CLumia_CImaging_CAdjustments_CIGaussianNoiseFilterFactory_Create(This,level,__returnValue)	\
    ( (This)->lpVtbl -> Create(This,level,__returnValue) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* ____x_ABI_CLumia_CImaging_CAdjustments_CIGaussianNoiseFilterFactory_INTERFACE_DEFINED__ */


/* interface __MIDL_itf_Lumia2EImaging2EAdjustments_0000_0067 */
/* [local] */ 

#if !defined(____x_ABI_CLumia_CImaging_CAdjustments_CIGrayscaleFilter_INTERFACE_DEFINED__)
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Lumia_Imaging_Adjustments_IGrayscaleFilter[] = L"Lumia.Imaging.Adjustments.IGrayscaleFilter";
#endif /* !defined(____x_ABI_CLumia_CImaging_CAdjustments_CIGrayscaleFilter_INTERFACE_DEFINED__) */


/* interface __MIDL_itf_Lumia2EImaging2EAdjustments_0000_0067 */
/* [local] */ 



extern RPC_IF_HANDLE __MIDL_itf_Lumia2EImaging2EAdjustments_0000_0067_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_Lumia2EImaging2EAdjustments_0000_0067_v0_0_s_ifspec;

#ifndef ____x_ABI_CLumia_CImaging_CAdjustments_CIGrayscaleFilter_INTERFACE_DEFINED__
#define ____x_ABI_CLumia_CImaging_CAdjustments_CIGrayscaleFilter_INTERFACE_DEFINED__

/* interface __x_ABI_CLumia_CImaging_CAdjustments_CIGrayscaleFilter */
/* [uuid][object] */ 



/* interface ABI::Lumia::Imaging::Adjustments::IGrayscaleFilter */
/* [uuid][object] */ 


EXTERN_C const IID IID___x_ABI_CLumia_CImaging_CAdjustments_CIGrayscaleFilter;

#if defined(__cplusplus) && !defined(CINTERFACE)
    } /* end extern "C" */
    namespace ABI {
        namespace Lumia {
            namespace Imaging {
                namespace Adjustments {
                    
                    MIDL_INTERFACE("C12416FD-61D4-3E8D-8202-1CEED82B454A")
                    IGrayscaleFilter : public IInspectable
                    {
                    public:
                        virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_RedWeight( 
                            /* [out][retval] */ __RPC__out DOUBLE *__returnValue) = 0;
                        
                        virtual /* [propput] */ HRESULT STDMETHODCALLTYPE put_RedWeight( 
                            /* [in] */ DOUBLE value) = 0;
                        
                        virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_GreenWeight( 
                            /* [out][retval] */ __RPC__out DOUBLE *__returnValue) = 0;
                        
                        virtual /* [propput] */ HRESULT STDMETHODCALLTYPE put_GreenWeight( 
                            /* [in] */ DOUBLE value) = 0;
                        
                        virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_BlueWeight( 
                            /* [out][retval] */ __RPC__out DOUBLE *__returnValue) = 0;
                        
                        virtual /* [propput] */ HRESULT STDMETHODCALLTYPE put_BlueWeight( 
                            /* [in] */ DOUBLE value) = 0;
                        
                        virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_Constant( 
                            /* [out][retval] */ __RPC__out DOUBLE *__returnValue) = 0;
                        
                        virtual /* [propput] */ HRESULT STDMETHODCALLTYPE put_Constant( 
                            /* [in] */ DOUBLE value) = 0;
                        
                    };

                    extern const __declspec(selectany) IID & IID_IGrayscaleFilter = __uuidof(IGrayscaleFilter);

                    
                }  /* end namespace */
            }  /* end namespace */
        }  /* end namespace */
    }  /* end namespace */
    extern "C" { 
    
#else 	/* C style interface */

    typedef struct __x_ABI_CLumia_CImaging_CAdjustments_CIGrayscaleFilterVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            __RPC__in __x_ABI_CLumia_CImaging_CAdjustments_CIGrayscaleFilter * This,
            /* [in] */ __RPC__in REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            __RPC__in __x_ABI_CLumia_CImaging_CAdjustments_CIGrayscaleFilter * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            __RPC__in __x_ABI_CLumia_CImaging_CAdjustments_CIGrayscaleFilter * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetIids )( 
            __RPC__in __x_ABI_CLumia_CImaging_CAdjustments_CIGrayscaleFilter * This,
            /* [out] */ __RPC__out ULONG *iidCount,
            /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
        
        HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )( 
            __RPC__in __x_ABI_CLumia_CImaging_CAdjustments_CIGrayscaleFilter * This,
            /* [out] */ __RPC__deref_out_opt HSTRING *className);
        
        HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )( 
            __RPC__in __x_ABI_CLumia_CImaging_CAdjustments_CIGrayscaleFilter * This,
            /* [out] */ __RPC__out TrustLevel *trustLevel);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_RedWeight )( 
            __RPC__in __x_ABI_CLumia_CImaging_CAdjustments_CIGrayscaleFilter * This,
            /* [out][retval] */ __RPC__out DOUBLE *__returnValue);
        
        /* [propput] */ HRESULT ( STDMETHODCALLTYPE *put_RedWeight )( 
            __RPC__in __x_ABI_CLumia_CImaging_CAdjustments_CIGrayscaleFilter * This,
            /* [in] */ DOUBLE value);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_GreenWeight )( 
            __RPC__in __x_ABI_CLumia_CImaging_CAdjustments_CIGrayscaleFilter * This,
            /* [out][retval] */ __RPC__out DOUBLE *__returnValue);
        
        /* [propput] */ HRESULT ( STDMETHODCALLTYPE *put_GreenWeight )( 
            __RPC__in __x_ABI_CLumia_CImaging_CAdjustments_CIGrayscaleFilter * This,
            /* [in] */ DOUBLE value);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_BlueWeight )( 
            __RPC__in __x_ABI_CLumia_CImaging_CAdjustments_CIGrayscaleFilter * This,
            /* [out][retval] */ __RPC__out DOUBLE *__returnValue);
        
        /* [propput] */ HRESULT ( STDMETHODCALLTYPE *put_BlueWeight )( 
            __RPC__in __x_ABI_CLumia_CImaging_CAdjustments_CIGrayscaleFilter * This,
            /* [in] */ DOUBLE value);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_Constant )( 
            __RPC__in __x_ABI_CLumia_CImaging_CAdjustments_CIGrayscaleFilter * This,
            /* [out][retval] */ __RPC__out DOUBLE *__returnValue);
        
        /* [propput] */ HRESULT ( STDMETHODCALLTYPE *put_Constant )( 
            __RPC__in __x_ABI_CLumia_CImaging_CAdjustments_CIGrayscaleFilter * This,
            /* [in] */ DOUBLE value);
        
        END_INTERFACE
    } __x_ABI_CLumia_CImaging_CAdjustments_CIGrayscaleFilterVtbl;

    interface __x_ABI_CLumia_CImaging_CAdjustments_CIGrayscaleFilter
    {
        CONST_VTBL struct __x_ABI_CLumia_CImaging_CAdjustments_CIGrayscaleFilterVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define __x_ABI_CLumia_CImaging_CAdjustments_CIGrayscaleFilter_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __x_ABI_CLumia_CImaging_CAdjustments_CIGrayscaleFilter_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __x_ABI_CLumia_CImaging_CAdjustments_CIGrayscaleFilter_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __x_ABI_CLumia_CImaging_CAdjustments_CIGrayscaleFilter_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 

#define __x_ABI_CLumia_CImaging_CAdjustments_CIGrayscaleFilter_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 

#define __x_ABI_CLumia_CImaging_CAdjustments_CIGrayscaleFilter_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 


#define __x_ABI_CLumia_CImaging_CAdjustments_CIGrayscaleFilter_get_RedWeight(This,__returnValue)	\
    ( (This)->lpVtbl -> get_RedWeight(This,__returnValue) ) 

#define __x_ABI_CLumia_CImaging_CAdjustments_CIGrayscaleFilter_put_RedWeight(This,value)	\
    ( (This)->lpVtbl -> put_RedWeight(This,value) ) 

#define __x_ABI_CLumia_CImaging_CAdjustments_CIGrayscaleFilter_get_GreenWeight(This,__returnValue)	\
    ( (This)->lpVtbl -> get_GreenWeight(This,__returnValue) ) 

#define __x_ABI_CLumia_CImaging_CAdjustments_CIGrayscaleFilter_put_GreenWeight(This,value)	\
    ( (This)->lpVtbl -> put_GreenWeight(This,value) ) 

#define __x_ABI_CLumia_CImaging_CAdjustments_CIGrayscaleFilter_get_BlueWeight(This,__returnValue)	\
    ( (This)->lpVtbl -> get_BlueWeight(This,__returnValue) ) 

#define __x_ABI_CLumia_CImaging_CAdjustments_CIGrayscaleFilter_put_BlueWeight(This,value)	\
    ( (This)->lpVtbl -> put_BlueWeight(This,value) ) 

#define __x_ABI_CLumia_CImaging_CAdjustments_CIGrayscaleFilter_get_Constant(This,__returnValue)	\
    ( (This)->lpVtbl -> get_Constant(This,__returnValue) ) 

#define __x_ABI_CLumia_CImaging_CAdjustments_CIGrayscaleFilter_put_Constant(This,value)	\
    ( (This)->lpVtbl -> put_Constant(This,value) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* ____x_ABI_CLumia_CImaging_CAdjustments_CIGrayscaleFilter_INTERFACE_DEFINED__ */


/* interface __MIDL_itf_Lumia2EImaging2EAdjustments_0000_0068 */
/* [local] */ 

#if !defined(____x_ABI_CLumia_CImaging_CAdjustments_CIGrayscaleFilterFactory_INTERFACE_DEFINED__)
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Lumia_Imaging_Adjustments_IGrayscaleFilterFactory[] = L"Lumia.Imaging.Adjustments.IGrayscaleFilterFactory";
#endif /* !defined(____x_ABI_CLumia_CImaging_CAdjustments_CIGrayscaleFilterFactory_INTERFACE_DEFINED__) */


/* interface __MIDL_itf_Lumia2EImaging2EAdjustments_0000_0068 */
/* [local] */ 



extern RPC_IF_HANDLE __MIDL_itf_Lumia2EImaging2EAdjustments_0000_0068_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_Lumia2EImaging2EAdjustments_0000_0068_v0_0_s_ifspec;

#ifndef ____x_ABI_CLumia_CImaging_CAdjustments_CIGrayscaleFilterFactory_INTERFACE_DEFINED__
#define ____x_ABI_CLumia_CImaging_CAdjustments_CIGrayscaleFilterFactory_INTERFACE_DEFINED__

/* interface __x_ABI_CLumia_CImaging_CAdjustments_CIGrayscaleFilterFactory */
/* [uuid][object] */ 



/* interface ABI::Lumia::Imaging::Adjustments::IGrayscaleFilterFactory */
/* [uuid][object] */ 


EXTERN_C const IID IID___x_ABI_CLumia_CImaging_CAdjustments_CIGrayscaleFilterFactory;

#if defined(__cplusplus) && !defined(CINTERFACE)
    } /* end extern "C" */
    namespace ABI {
        namespace Lumia {
            namespace Imaging {
                namespace Adjustments {
                    
                    MIDL_INTERFACE("9B7F7FD2-2D26-3F4F-870D-C5D5F8AFC1E5")
                    IGrayscaleFilterFactory : public IInspectable
                    {
                    public:
                        virtual HRESULT STDMETHODCALLTYPE CreateWithWeights( 
                            /* [in] */ DOUBLE redWeight,
                            /* [in] */ DOUBLE greenWeight,
                            /* [in] */ DOUBLE blueWeight,
                            /* [in] */ DOUBLE constant,
                            /* [out][retval] */ __RPC__deref_out_opt ABI::Lumia::Imaging::Adjustments::IGrayscaleFilter **__returnValue) = 0;
                        
                    };

                    extern const __declspec(selectany) IID & IID_IGrayscaleFilterFactory = __uuidof(IGrayscaleFilterFactory);

                    
                }  /* end namespace */
            }  /* end namespace */
        }  /* end namespace */
    }  /* end namespace */
    extern "C" { 
    
#else 	/* C style interface */

    typedef struct __x_ABI_CLumia_CImaging_CAdjustments_CIGrayscaleFilterFactoryVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            __RPC__in __x_ABI_CLumia_CImaging_CAdjustments_CIGrayscaleFilterFactory * This,
            /* [in] */ __RPC__in REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            __RPC__in __x_ABI_CLumia_CImaging_CAdjustments_CIGrayscaleFilterFactory * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            __RPC__in __x_ABI_CLumia_CImaging_CAdjustments_CIGrayscaleFilterFactory * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetIids )( 
            __RPC__in __x_ABI_CLumia_CImaging_CAdjustments_CIGrayscaleFilterFactory * This,
            /* [out] */ __RPC__out ULONG *iidCount,
            /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
        
        HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )( 
            __RPC__in __x_ABI_CLumia_CImaging_CAdjustments_CIGrayscaleFilterFactory * This,
            /* [out] */ __RPC__deref_out_opt HSTRING *className);
        
        HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )( 
            __RPC__in __x_ABI_CLumia_CImaging_CAdjustments_CIGrayscaleFilterFactory * This,
            /* [out] */ __RPC__out TrustLevel *trustLevel);
        
        HRESULT ( STDMETHODCALLTYPE *CreateWithWeights )( 
            __RPC__in __x_ABI_CLumia_CImaging_CAdjustments_CIGrayscaleFilterFactory * This,
            /* [in] */ DOUBLE redWeight,
            /* [in] */ DOUBLE greenWeight,
            /* [in] */ DOUBLE blueWeight,
            /* [in] */ DOUBLE constant,
            /* [out][retval] */ __RPC__deref_out_opt __x_ABI_CLumia_CImaging_CAdjustments_CIGrayscaleFilter **__returnValue);
        
        END_INTERFACE
    } __x_ABI_CLumia_CImaging_CAdjustments_CIGrayscaleFilterFactoryVtbl;

    interface __x_ABI_CLumia_CImaging_CAdjustments_CIGrayscaleFilterFactory
    {
        CONST_VTBL struct __x_ABI_CLumia_CImaging_CAdjustments_CIGrayscaleFilterFactoryVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define __x_ABI_CLumia_CImaging_CAdjustments_CIGrayscaleFilterFactory_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __x_ABI_CLumia_CImaging_CAdjustments_CIGrayscaleFilterFactory_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __x_ABI_CLumia_CImaging_CAdjustments_CIGrayscaleFilterFactory_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __x_ABI_CLumia_CImaging_CAdjustments_CIGrayscaleFilterFactory_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 

#define __x_ABI_CLumia_CImaging_CAdjustments_CIGrayscaleFilterFactory_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 

#define __x_ABI_CLumia_CImaging_CAdjustments_CIGrayscaleFilterFactory_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 


#define __x_ABI_CLumia_CImaging_CAdjustments_CIGrayscaleFilterFactory_CreateWithWeights(This,redWeight,greenWeight,blueWeight,constant,__returnValue)	\
    ( (This)->lpVtbl -> CreateWithWeights(This,redWeight,greenWeight,blueWeight,constant,__returnValue) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* ____x_ABI_CLumia_CImaging_CAdjustments_CIGrayscaleFilterFactory_INTERFACE_DEFINED__ */


/* interface __MIDL_itf_Lumia2EImaging2EAdjustments_0000_0069 */
/* [local] */ 

#if !defined(____x_ABI_CLumia_CImaging_CAdjustments_CIHdrEffect_INTERFACE_DEFINED__)
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Lumia_Imaging_Adjustments_IHdrEffect[] = L"Lumia.Imaging.Adjustments.IHdrEffect";
#endif /* !defined(____x_ABI_CLumia_CImaging_CAdjustments_CIHdrEffect_INTERFACE_DEFINED__) */


/* interface __MIDL_itf_Lumia2EImaging2EAdjustments_0000_0069 */
/* [local] */ 



extern RPC_IF_HANDLE __MIDL_itf_Lumia2EImaging2EAdjustments_0000_0069_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_Lumia2EImaging2EAdjustments_0000_0069_v0_0_s_ifspec;

#ifndef ____x_ABI_CLumia_CImaging_CAdjustments_CIHdrEffect_INTERFACE_DEFINED__
#define ____x_ABI_CLumia_CImaging_CAdjustments_CIHdrEffect_INTERFACE_DEFINED__

/* interface __x_ABI_CLumia_CImaging_CAdjustments_CIHdrEffect */
/* [uuid][object] */ 



/* interface ABI::Lumia::Imaging::Adjustments::IHdrEffect */
/* [uuid][object] */ 


EXTERN_C const IID IID___x_ABI_CLumia_CImaging_CAdjustments_CIHdrEffect;

#if defined(__cplusplus) && !defined(CINTERFACE)
    } /* end extern "C" */
    namespace ABI {
        namespace Lumia {
            namespace Imaging {
                namespace Adjustments {
                    
                    MIDL_INTERFACE("6EFDAFBD-D4F1-3AFD-9439-7972AAB2FE6C")
                    IHdrEffect : public IInspectable
                    {
                    public:
                        virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_Strength( 
                            /* [out][retval] */ __RPC__out DOUBLE *__returnValue) = 0;
                        
                        virtual /* [propput] */ HRESULT STDMETHODCALLTYPE put_Strength( 
                            /* [in] */ DOUBLE value) = 0;
                        
                        virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_Saturation( 
                            /* [out][retval] */ __RPC__out DOUBLE *__returnValue) = 0;
                        
                        virtual /* [propput] */ HRESULT STDMETHODCALLTYPE put_Saturation( 
                            /* [in] */ DOUBLE value) = 0;
                        
                        virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_Gamma( 
                            /* [out][retval] */ __RPC__out DOUBLE *__returnValue) = 0;
                        
                        virtual /* [propput] */ HRESULT STDMETHODCALLTYPE put_Gamma( 
                            /* [in] */ DOUBLE value) = 0;
                        
                        virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_NoiseSuppression( 
                            /* [out][retval] */ __RPC__out DOUBLE *__returnValue) = 0;
                        
                        virtual /* [propput] */ HRESULT STDMETHODCALLTYPE put_NoiseSuppression( 
                            /* [in] */ DOUBLE value) = 0;
                        
                    };

                    extern const __declspec(selectany) IID & IID_IHdrEffect = __uuidof(IHdrEffect);

                    
                }  /* end namespace */
            }  /* end namespace */
        }  /* end namespace */
    }  /* end namespace */
    extern "C" { 
    
#else 	/* C style interface */

    typedef struct __x_ABI_CLumia_CImaging_CAdjustments_CIHdrEffectVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            __RPC__in __x_ABI_CLumia_CImaging_CAdjustments_CIHdrEffect * This,
            /* [in] */ __RPC__in REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            __RPC__in __x_ABI_CLumia_CImaging_CAdjustments_CIHdrEffect * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            __RPC__in __x_ABI_CLumia_CImaging_CAdjustments_CIHdrEffect * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetIids )( 
            __RPC__in __x_ABI_CLumia_CImaging_CAdjustments_CIHdrEffect * This,
            /* [out] */ __RPC__out ULONG *iidCount,
            /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
        
        HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )( 
            __RPC__in __x_ABI_CLumia_CImaging_CAdjustments_CIHdrEffect * This,
            /* [out] */ __RPC__deref_out_opt HSTRING *className);
        
        HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )( 
            __RPC__in __x_ABI_CLumia_CImaging_CAdjustments_CIHdrEffect * This,
            /* [out] */ __RPC__out TrustLevel *trustLevel);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_Strength )( 
            __RPC__in __x_ABI_CLumia_CImaging_CAdjustments_CIHdrEffect * This,
            /* [out][retval] */ __RPC__out DOUBLE *__returnValue);
        
        /* [propput] */ HRESULT ( STDMETHODCALLTYPE *put_Strength )( 
            __RPC__in __x_ABI_CLumia_CImaging_CAdjustments_CIHdrEffect * This,
            /* [in] */ DOUBLE value);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_Saturation )( 
            __RPC__in __x_ABI_CLumia_CImaging_CAdjustments_CIHdrEffect * This,
            /* [out][retval] */ __RPC__out DOUBLE *__returnValue);
        
        /* [propput] */ HRESULT ( STDMETHODCALLTYPE *put_Saturation )( 
            __RPC__in __x_ABI_CLumia_CImaging_CAdjustments_CIHdrEffect * This,
            /* [in] */ DOUBLE value);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_Gamma )( 
            __RPC__in __x_ABI_CLumia_CImaging_CAdjustments_CIHdrEffect * This,
            /* [out][retval] */ __RPC__out DOUBLE *__returnValue);
        
        /* [propput] */ HRESULT ( STDMETHODCALLTYPE *put_Gamma )( 
            __RPC__in __x_ABI_CLumia_CImaging_CAdjustments_CIHdrEffect * This,
            /* [in] */ DOUBLE value);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_NoiseSuppression )( 
            __RPC__in __x_ABI_CLumia_CImaging_CAdjustments_CIHdrEffect * This,
            /* [out][retval] */ __RPC__out DOUBLE *__returnValue);
        
        /* [propput] */ HRESULT ( STDMETHODCALLTYPE *put_NoiseSuppression )( 
            __RPC__in __x_ABI_CLumia_CImaging_CAdjustments_CIHdrEffect * This,
            /* [in] */ DOUBLE value);
        
        END_INTERFACE
    } __x_ABI_CLumia_CImaging_CAdjustments_CIHdrEffectVtbl;

    interface __x_ABI_CLumia_CImaging_CAdjustments_CIHdrEffect
    {
        CONST_VTBL struct __x_ABI_CLumia_CImaging_CAdjustments_CIHdrEffectVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define __x_ABI_CLumia_CImaging_CAdjustments_CIHdrEffect_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __x_ABI_CLumia_CImaging_CAdjustments_CIHdrEffect_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __x_ABI_CLumia_CImaging_CAdjustments_CIHdrEffect_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __x_ABI_CLumia_CImaging_CAdjustments_CIHdrEffect_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 

#define __x_ABI_CLumia_CImaging_CAdjustments_CIHdrEffect_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 

#define __x_ABI_CLumia_CImaging_CAdjustments_CIHdrEffect_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 


#define __x_ABI_CLumia_CImaging_CAdjustments_CIHdrEffect_get_Strength(This,__returnValue)	\
    ( (This)->lpVtbl -> get_Strength(This,__returnValue) ) 

#define __x_ABI_CLumia_CImaging_CAdjustments_CIHdrEffect_put_Strength(This,value)	\
    ( (This)->lpVtbl -> put_Strength(This,value) ) 

#define __x_ABI_CLumia_CImaging_CAdjustments_CIHdrEffect_get_Saturation(This,__returnValue)	\
    ( (This)->lpVtbl -> get_Saturation(This,__returnValue) ) 

#define __x_ABI_CLumia_CImaging_CAdjustments_CIHdrEffect_put_Saturation(This,value)	\
    ( (This)->lpVtbl -> put_Saturation(This,value) ) 

#define __x_ABI_CLumia_CImaging_CAdjustments_CIHdrEffect_get_Gamma(This,__returnValue)	\
    ( (This)->lpVtbl -> get_Gamma(This,__returnValue) ) 

#define __x_ABI_CLumia_CImaging_CAdjustments_CIHdrEffect_put_Gamma(This,value)	\
    ( (This)->lpVtbl -> put_Gamma(This,value) ) 

#define __x_ABI_CLumia_CImaging_CAdjustments_CIHdrEffect_get_NoiseSuppression(This,__returnValue)	\
    ( (This)->lpVtbl -> get_NoiseSuppression(This,__returnValue) ) 

#define __x_ABI_CLumia_CImaging_CAdjustments_CIHdrEffect_put_NoiseSuppression(This,value)	\
    ( (This)->lpVtbl -> put_NoiseSuppression(This,value) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* ____x_ABI_CLumia_CImaging_CAdjustments_CIHdrEffect_INTERFACE_DEFINED__ */


/* interface __MIDL_itf_Lumia2EImaging2EAdjustments_0000_0070 */
/* [local] */ 

#if !defined(____x_ABI_CLumia_CImaging_CAdjustments_CIHdrEffectFactory_INTERFACE_DEFINED__)
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Lumia_Imaging_Adjustments_IHdrEffectFactory[] = L"Lumia.Imaging.Adjustments.IHdrEffectFactory";
#endif /* !defined(____x_ABI_CLumia_CImaging_CAdjustments_CIHdrEffectFactory_INTERFACE_DEFINED__) */


/* interface __MIDL_itf_Lumia2EImaging2EAdjustments_0000_0070 */
/* [local] */ 



extern RPC_IF_HANDLE __MIDL_itf_Lumia2EImaging2EAdjustments_0000_0070_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_Lumia2EImaging2EAdjustments_0000_0070_v0_0_s_ifspec;

#ifndef ____x_ABI_CLumia_CImaging_CAdjustments_CIHdrEffectFactory_INTERFACE_DEFINED__
#define ____x_ABI_CLumia_CImaging_CAdjustments_CIHdrEffectFactory_INTERFACE_DEFINED__

/* interface __x_ABI_CLumia_CImaging_CAdjustments_CIHdrEffectFactory */
/* [uuid][object] */ 



/* interface ABI::Lumia::Imaging::Adjustments::IHdrEffectFactory */
/* [uuid][object] */ 


EXTERN_C const IID IID___x_ABI_CLumia_CImaging_CAdjustments_CIHdrEffectFactory;

#if defined(__cplusplus) && !defined(CINTERFACE)
    } /* end extern "C" */
    namespace ABI {
        namespace Lumia {
            namespace Imaging {
                namespace Adjustments {
                    
                    MIDL_INTERFACE("963E7923-D4BA-3F0E-929F-84C7498FF087")
                    IHdrEffectFactory : public IInspectable
                    {
                    public:
                        virtual HRESULT STDMETHODCALLTYPE Create( 
                            /* [in] */ __RPC__in_opt ABI::Lumia::Imaging::IImageProvider *imageSource,
                            /* [out][retval] */ __RPC__deref_out_opt ABI::Lumia::Imaging::Adjustments::IHdrEffect **__returnValue) = 0;
                        
                    };

                    extern const __declspec(selectany) IID & IID_IHdrEffectFactory = __uuidof(IHdrEffectFactory);

                    
                }  /* end namespace */
            }  /* end namespace */
        }  /* end namespace */
    }  /* end namespace */
    extern "C" { 
    
#else 	/* C style interface */

    typedef struct __x_ABI_CLumia_CImaging_CAdjustments_CIHdrEffectFactoryVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            __RPC__in __x_ABI_CLumia_CImaging_CAdjustments_CIHdrEffectFactory * This,
            /* [in] */ __RPC__in REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            __RPC__in __x_ABI_CLumia_CImaging_CAdjustments_CIHdrEffectFactory * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            __RPC__in __x_ABI_CLumia_CImaging_CAdjustments_CIHdrEffectFactory * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetIids )( 
            __RPC__in __x_ABI_CLumia_CImaging_CAdjustments_CIHdrEffectFactory * This,
            /* [out] */ __RPC__out ULONG *iidCount,
            /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
        
        HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )( 
            __RPC__in __x_ABI_CLumia_CImaging_CAdjustments_CIHdrEffectFactory * This,
            /* [out] */ __RPC__deref_out_opt HSTRING *className);
        
        HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )( 
            __RPC__in __x_ABI_CLumia_CImaging_CAdjustments_CIHdrEffectFactory * This,
            /* [out] */ __RPC__out TrustLevel *trustLevel);
        
        HRESULT ( STDMETHODCALLTYPE *Create )( 
            __RPC__in __x_ABI_CLumia_CImaging_CAdjustments_CIHdrEffectFactory * This,
            /* [in] */ __RPC__in_opt __x_ABI_CLumia_CImaging_CIImageProvider *imageSource,
            /* [out][retval] */ __RPC__deref_out_opt __x_ABI_CLumia_CImaging_CAdjustments_CIHdrEffect **__returnValue);
        
        END_INTERFACE
    } __x_ABI_CLumia_CImaging_CAdjustments_CIHdrEffectFactoryVtbl;

    interface __x_ABI_CLumia_CImaging_CAdjustments_CIHdrEffectFactory
    {
        CONST_VTBL struct __x_ABI_CLumia_CImaging_CAdjustments_CIHdrEffectFactoryVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define __x_ABI_CLumia_CImaging_CAdjustments_CIHdrEffectFactory_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __x_ABI_CLumia_CImaging_CAdjustments_CIHdrEffectFactory_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __x_ABI_CLumia_CImaging_CAdjustments_CIHdrEffectFactory_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __x_ABI_CLumia_CImaging_CAdjustments_CIHdrEffectFactory_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 

#define __x_ABI_CLumia_CImaging_CAdjustments_CIHdrEffectFactory_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 

#define __x_ABI_CLumia_CImaging_CAdjustments_CIHdrEffectFactory_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 


#define __x_ABI_CLumia_CImaging_CAdjustments_CIHdrEffectFactory_Create(This,imageSource,__returnValue)	\
    ( (This)->lpVtbl -> Create(This,imageSource,__returnValue) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* ____x_ABI_CLumia_CImaging_CAdjustments_CIHdrEffectFactory_INTERFACE_DEFINED__ */


/* interface __MIDL_itf_Lumia2EImaging2EAdjustments_0000_0071 */
/* [local] */ 

#if !defined(____x_ABI_CLumia_CImaging_CAdjustments_CIHueSaturationFilter_INTERFACE_DEFINED__)
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Lumia_Imaging_Adjustments_IHueSaturationFilter[] = L"Lumia.Imaging.Adjustments.IHueSaturationFilter";
#endif /* !defined(____x_ABI_CLumia_CImaging_CAdjustments_CIHueSaturationFilter_INTERFACE_DEFINED__) */


/* interface __MIDL_itf_Lumia2EImaging2EAdjustments_0000_0071 */
/* [local] */ 



extern RPC_IF_HANDLE __MIDL_itf_Lumia2EImaging2EAdjustments_0000_0071_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_Lumia2EImaging2EAdjustments_0000_0071_v0_0_s_ifspec;

#ifndef ____x_ABI_CLumia_CImaging_CAdjustments_CIHueSaturationFilter_INTERFACE_DEFINED__
#define ____x_ABI_CLumia_CImaging_CAdjustments_CIHueSaturationFilter_INTERFACE_DEFINED__

/* interface __x_ABI_CLumia_CImaging_CAdjustments_CIHueSaturationFilter */
/* [uuid][object] */ 



/* interface ABI::Lumia::Imaging::Adjustments::IHueSaturationFilter */
/* [uuid][object] */ 


EXTERN_C const IID IID___x_ABI_CLumia_CImaging_CAdjustments_CIHueSaturationFilter;

#if defined(__cplusplus) && !defined(CINTERFACE)
    } /* end extern "C" */
    namespace ABI {
        namespace Lumia {
            namespace Imaging {
                namespace Adjustments {
                    
                    MIDL_INTERFACE("82AEBD12-ACEC-36C7-93B4-C3ED03C0A001")
                    IHueSaturationFilter : public IInspectable
                    {
                    public:
                        virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_Hue( 
                            /* [out][retval] */ __RPC__out DOUBLE *__returnValue) = 0;
                        
                        virtual /* [propput] */ HRESULT STDMETHODCALLTYPE put_Hue( 
                            /* [in] */ DOUBLE value) = 0;
                        
                        virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_Saturation( 
                            /* [out][retval] */ __RPC__out DOUBLE *__returnValue) = 0;
                        
                        virtual /* [propput] */ HRESULT STDMETHODCALLTYPE put_Saturation( 
                            /* [in] */ DOUBLE value) = 0;
                        
                    };

                    extern const __declspec(selectany) IID & IID_IHueSaturationFilter = __uuidof(IHueSaturationFilter);

                    
                }  /* end namespace */
            }  /* end namespace */
        }  /* end namespace */
    }  /* end namespace */
    extern "C" { 
    
#else 	/* C style interface */

    typedef struct __x_ABI_CLumia_CImaging_CAdjustments_CIHueSaturationFilterVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            __RPC__in __x_ABI_CLumia_CImaging_CAdjustments_CIHueSaturationFilter * This,
            /* [in] */ __RPC__in REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            __RPC__in __x_ABI_CLumia_CImaging_CAdjustments_CIHueSaturationFilter * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            __RPC__in __x_ABI_CLumia_CImaging_CAdjustments_CIHueSaturationFilter * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetIids )( 
            __RPC__in __x_ABI_CLumia_CImaging_CAdjustments_CIHueSaturationFilter * This,
            /* [out] */ __RPC__out ULONG *iidCount,
            /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
        
        HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )( 
            __RPC__in __x_ABI_CLumia_CImaging_CAdjustments_CIHueSaturationFilter * This,
            /* [out] */ __RPC__deref_out_opt HSTRING *className);
        
        HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )( 
            __RPC__in __x_ABI_CLumia_CImaging_CAdjustments_CIHueSaturationFilter * This,
            /* [out] */ __RPC__out TrustLevel *trustLevel);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_Hue )( 
            __RPC__in __x_ABI_CLumia_CImaging_CAdjustments_CIHueSaturationFilter * This,
            /* [out][retval] */ __RPC__out DOUBLE *__returnValue);
        
        /* [propput] */ HRESULT ( STDMETHODCALLTYPE *put_Hue )( 
            __RPC__in __x_ABI_CLumia_CImaging_CAdjustments_CIHueSaturationFilter * This,
            /* [in] */ DOUBLE value);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_Saturation )( 
            __RPC__in __x_ABI_CLumia_CImaging_CAdjustments_CIHueSaturationFilter * This,
            /* [out][retval] */ __RPC__out DOUBLE *__returnValue);
        
        /* [propput] */ HRESULT ( STDMETHODCALLTYPE *put_Saturation )( 
            __RPC__in __x_ABI_CLumia_CImaging_CAdjustments_CIHueSaturationFilter * This,
            /* [in] */ DOUBLE value);
        
        END_INTERFACE
    } __x_ABI_CLumia_CImaging_CAdjustments_CIHueSaturationFilterVtbl;

    interface __x_ABI_CLumia_CImaging_CAdjustments_CIHueSaturationFilter
    {
        CONST_VTBL struct __x_ABI_CLumia_CImaging_CAdjustments_CIHueSaturationFilterVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define __x_ABI_CLumia_CImaging_CAdjustments_CIHueSaturationFilter_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __x_ABI_CLumia_CImaging_CAdjustments_CIHueSaturationFilter_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __x_ABI_CLumia_CImaging_CAdjustments_CIHueSaturationFilter_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __x_ABI_CLumia_CImaging_CAdjustments_CIHueSaturationFilter_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 

#define __x_ABI_CLumia_CImaging_CAdjustments_CIHueSaturationFilter_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 

#define __x_ABI_CLumia_CImaging_CAdjustments_CIHueSaturationFilter_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 


#define __x_ABI_CLumia_CImaging_CAdjustments_CIHueSaturationFilter_get_Hue(This,__returnValue)	\
    ( (This)->lpVtbl -> get_Hue(This,__returnValue) ) 

#define __x_ABI_CLumia_CImaging_CAdjustments_CIHueSaturationFilter_put_Hue(This,value)	\
    ( (This)->lpVtbl -> put_Hue(This,value) ) 

#define __x_ABI_CLumia_CImaging_CAdjustments_CIHueSaturationFilter_get_Saturation(This,__returnValue)	\
    ( (This)->lpVtbl -> get_Saturation(This,__returnValue) ) 

#define __x_ABI_CLumia_CImaging_CAdjustments_CIHueSaturationFilter_put_Saturation(This,value)	\
    ( (This)->lpVtbl -> put_Saturation(This,value) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* ____x_ABI_CLumia_CImaging_CAdjustments_CIHueSaturationFilter_INTERFACE_DEFINED__ */


/* interface __MIDL_itf_Lumia2EImaging2EAdjustments_0000_0072 */
/* [local] */ 

#if !defined(____x_ABI_CLumia_CImaging_CAdjustments_CIHueSaturationFilterFactory_INTERFACE_DEFINED__)
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Lumia_Imaging_Adjustments_IHueSaturationFilterFactory[] = L"Lumia.Imaging.Adjustments.IHueSaturationFilterFactory";
#endif /* !defined(____x_ABI_CLumia_CImaging_CAdjustments_CIHueSaturationFilterFactory_INTERFACE_DEFINED__) */


/* interface __MIDL_itf_Lumia2EImaging2EAdjustments_0000_0072 */
/* [local] */ 



extern RPC_IF_HANDLE __MIDL_itf_Lumia2EImaging2EAdjustments_0000_0072_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_Lumia2EImaging2EAdjustments_0000_0072_v0_0_s_ifspec;

#ifndef ____x_ABI_CLumia_CImaging_CAdjustments_CIHueSaturationFilterFactory_INTERFACE_DEFINED__
#define ____x_ABI_CLumia_CImaging_CAdjustments_CIHueSaturationFilterFactory_INTERFACE_DEFINED__

/* interface __x_ABI_CLumia_CImaging_CAdjustments_CIHueSaturationFilterFactory */
/* [uuid][object] */ 



/* interface ABI::Lumia::Imaging::Adjustments::IHueSaturationFilterFactory */
/* [uuid][object] */ 


EXTERN_C const IID IID___x_ABI_CLumia_CImaging_CAdjustments_CIHueSaturationFilterFactory;

#if defined(__cplusplus) && !defined(CINTERFACE)
    } /* end extern "C" */
    namespace ABI {
        namespace Lumia {
            namespace Imaging {
                namespace Adjustments {
                    
                    MIDL_INTERFACE("B473ADA1-63BD-3AC7-9A6D-8D86A60999CD")
                    IHueSaturationFilterFactory : public IInspectable
                    {
                    public:
                        virtual HRESULT STDMETHODCALLTYPE CreateWithAdjustments( 
                            /* [in] */ DOUBLE hue,
                            /* [in] */ DOUBLE saturation,
                            /* [out][retval] */ __RPC__deref_out_opt ABI::Lumia::Imaging::Adjustments::IHueSaturationFilter **__returnValue) = 0;
                        
                    };

                    extern const __declspec(selectany) IID & IID_IHueSaturationFilterFactory = __uuidof(IHueSaturationFilterFactory);

                    
                }  /* end namespace */
            }  /* end namespace */
        }  /* end namespace */
    }  /* end namespace */
    extern "C" { 
    
#else 	/* C style interface */

    typedef struct __x_ABI_CLumia_CImaging_CAdjustments_CIHueSaturationFilterFactoryVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            __RPC__in __x_ABI_CLumia_CImaging_CAdjustments_CIHueSaturationFilterFactory * This,
            /* [in] */ __RPC__in REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            __RPC__in __x_ABI_CLumia_CImaging_CAdjustments_CIHueSaturationFilterFactory * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            __RPC__in __x_ABI_CLumia_CImaging_CAdjustments_CIHueSaturationFilterFactory * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetIids )( 
            __RPC__in __x_ABI_CLumia_CImaging_CAdjustments_CIHueSaturationFilterFactory * This,
            /* [out] */ __RPC__out ULONG *iidCount,
            /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
        
        HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )( 
            __RPC__in __x_ABI_CLumia_CImaging_CAdjustments_CIHueSaturationFilterFactory * This,
            /* [out] */ __RPC__deref_out_opt HSTRING *className);
        
        HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )( 
            __RPC__in __x_ABI_CLumia_CImaging_CAdjustments_CIHueSaturationFilterFactory * This,
            /* [out] */ __RPC__out TrustLevel *trustLevel);
        
        HRESULT ( STDMETHODCALLTYPE *CreateWithAdjustments )( 
            __RPC__in __x_ABI_CLumia_CImaging_CAdjustments_CIHueSaturationFilterFactory * This,
            /* [in] */ DOUBLE hue,
            /* [in] */ DOUBLE saturation,
            /* [out][retval] */ __RPC__deref_out_opt __x_ABI_CLumia_CImaging_CAdjustments_CIHueSaturationFilter **__returnValue);
        
        END_INTERFACE
    } __x_ABI_CLumia_CImaging_CAdjustments_CIHueSaturationFilterFactoryVtbl;

    interface __x_ABI_CLumia_CImaging_CAdjustments_CIHueSaturationFilterFactory
    {
        CONST_VTBL struct __x_ABI_CLumia_CImaging_CAdjustments_CIHueSaturationFilterFactoryVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define __x_ABI_CLumia_CImaging_CAdjustments_CIHueSaturationFilterFactory_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __x_ABI_CLumia_CImaging_CAdjustments_CIHueSaturationFilterFactory_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __x_ABI_CLumia_CImaging_CAdjustments_CIHueSaturationFilterFactory_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __x_ABI_CLumia_CImaging_CAdjustments_CIHueSaturationFilterFactory_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 

#define __x_ABI_CLumia_CImaging_CAdjustments_CIHueSaturationFilterFactory_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 

#define __x_ABI_CLumia_CImaging_CAdjustments_CIHueSaturationFilterFactory_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 


#define __x_ABI_CLumia_CImaging_CAdjustments_CIHueSaturationFilterFactory_CreateWithAdjustments(This,hue,saturation,__returnValue)	\
    ( (This)->lpVtbl -> CreateWithAdjustments(This,hue,saturation,__returnValue) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* ____x_ABI_CLumia_CImaging_CAdjustments_CIHueSaturationFilterFactory_INTERFACE_DEFINED__ */


/* interface __MIDL_itf_Lumia2EImaging2EAdjustments_0000_0073 */
/* [local] */ 

#if !defined(____x_ABI_CLumia_CImaging_CAdjustments_CIHueSaturationLightnessFilter_INTERFACE_DEFINED__)
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Lumia_Imaging_Adjustments_IHueSaturationLightnessFilter[] = L"Lumia.Imaging.Adjustments.IHueSaturationLightnessFilter";
#endif /* !defined(____x_ABI_CLumia_CImaging_CAdjustments_CIHueSaturationLightnessFilter_INTERFACE_DEFINED__) */


/* interface __MIDL_itf_Lumia2EImaging2EAdjustments_0000_0073 */
/* [local] */ 



extern RPC_IF_HANDLE __MIDL_itf_Lumia2EImaging2EAdjustments_0000_0073_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_Lumia2EImaging2EAdjustments_0000_0073_v0_0_s_ifspec;

#ifndef ____x_ABI_CLumia_CImaging_CAdjustments_CIHueSaturationLightnessFilter_INTERFACE_DEFINED__
#define ____x_ABI_CLumia_CImaging_CAdjustments_CIHueSaturationLightnessFilter_INTERFACE_DEFINED__

/* interface __x_ABI_CLumia_CImaging_CAdjustments_CIHueSaturationLightnessFilter */
/* [uuid][object] */ 



/* interface ABI::Lumia::Imaging::Adjustments::IHueSaturationLightnessFilter */
/* [uuid][object] */ 


EXTERN_C const IID IID___x_ABI_CLumia_CImaging_CAdjustments_CIHueSaturationLightnessFilter;

#if defined(__cplusplus) && !defined(CINTERFACE)
    } /* end extern "C" */
    namespace ABI {
        namespace Lumia {
            namespace Imaging {
                namespace Adjustments {
                    
                    MIDL_INTERFACE("50742D97-901F-3812-BF2E-24FEECBBA087")
                    IHueSaturationLightnessFilter : public IInspectable
                    {
                    public:
                        virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_HueCurve( 
                            /* [out][retval] */ __RPC__deref_out_opt ABI::Lumia::Imaging::Adjustments::ICurve **__returnValue) = 0;
                        
                        virtual /* [propput] */ HRESULT STDMETHODCALLTYPE put_HueCurve( 
                            /* [in] */ __RPC__in_opt ABI::Lumia::Imaging::Adjustments::ICurve *value) = 0;
                        
                        virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_SaturationCurve( 
                            /* [out][retval] */ __RPC__deref_out_opt ABI::Lumia::Imaging::Adjustments::ICurve **__returnValue) = 0;
                        
                        virtual /* [propput] */ HRESULT STDMETHODCALLTYPE put_SaturationCurve( 
                            /* [in] */ __RPC__in_opt ABI::Lumia::Imaging::Adjustments::ICurve *value) = 0;
                        
                        virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_LightnessCurve( 
                            /* [out][retval] */ __RPC__deref_out_opt ABI::Lumia::Imaging::Adjustments::ICurve **__returnValue) = 0;
                        
                        virtual /* [propput] */ HRESULT STDMETHODCALLTYPE put_LightnessCurve( 
                            /* [in] */ __RPC__in_opt ABI::Lumia::Imaging::Adjustments::ICurve *value) = 0;
                        
                    };

                    extern const __declspec(selectany) IID & IID_IHueSaturationLightnessFilter = __uuidof(IHueSaturationLightnessFilter);

                    
                }  /* end namespace */
            }  /* end namespace */
        }  /* end namespace */
    }  /* end namespace */
    extern "C" { 
    
#else 	/* C style interface */

    typedef struct __x_ABI_CLumia_CImaging_CAdjustments_CIHueSaturationLightnessFilterVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            __RPC__in __x_ABI_CLumia_CImaging_CAdjustments_CIHueSaturationLightnessFilter * This,
            /* [in] */ __RPC__in REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            __RPC__in __x_ABI_CLumia_CImaging_CAdjustments_CIHueSaturationLightnessFilter * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            __RPC__in __x_ABI_CLumia_CImaging_CAdjustments_CIHueSaturationLightnessFilter * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetIids )( 
            __RPC__in __x_ABI_CLumia_CImaging_CAdjustments_CIHueSaturationLightnessFilter * This,
            /* [out] */ __RPC__out ULONG *iidCount,
            /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
        
        HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )( 
            __RPC__in __x_ABI_CLumia_CImaging_CAdjustments_CIHueSaturationLightnessFilter * This,
            /* [out] */ __RPC__deref_out_opt HSTRING *className);
        
        HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )( 
            __RPC__in __x_ABI_CLumia_CImaging_CAdjustments_CIHueSaturationLightnessFilter * This,
            /* [out] */ __RPC__out TrustLevel *trustLevel);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_HueCurve )( 
            __RPC__in __x_ABI_CLumia_CImaging_CAdjustments_CIHueSaturationLightnessFilter * This,
            /* [out][retval] */ __RPC__deref_out_opt __x_ABI_CLumia_CImaging_CAdjustments_CICurve **__returnValue);
        
        /* [propput] */ HRESULT ( STDMETHODCALLTYPE *put_HueCurve )( 
            __RPC__in __x_ABI_CLumia_CImaging_CAdjustments_CIHueSaturationLightnessFilter * This,
            /* [in] */ __RPC__in_opt __x_ABI_CLumia_CImaging_CAdjustments_CICurve *value);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_SaturationCurve )( 
            __RPC__in __x_ABI_CLumia_CImaging_CAdjustments_CIHueSaturationLightnessFilter * This,
            /* [out][retval] */ __RPC__deref_out_opt __x_ABI_CLumia_CImaging_CAdjustments_CICurve **__returnValue);
        
        /* [propput] */ HRESULT ( STDMETHODCALLTYPE *put_SaturationCurve )( 
            __RPC__in __x_ABI_CLumia_CImaging_CAdjustments_CIHueSaturationLightnessFilter * This,
            /* [in] */ __RPC__in_opt __x_ABI_CLumia_CImaging_CAdjustments_CICurve *value);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_LightnessCurve )( 
            __RPC__in __x_ABI_CLumia_CImaging_CAdjustments_CIHueSaturationLightnessFilter * This,
            /* [out][retval] */ __RPC__deref_out_opt __x_ABI_CLumia_CImaging_CAdjustments_CICurve **__returnValue);
        
        /* [propput] */ HRESULT ( STDMETHODCALLTYPE *put_LightnessCurve )( 
            __RPC__in __x_ABI_CLumia_CImaging_CAdjustments_CIHueSaturationLightnessFilter * This,
            /* [in] */ __RPC__in_opt __x_ABI_CLumia_CImaging_CAdjustments_CICurve *value);
        
        END_INTERFACE
    } __x_ABI_CLumia_CImaging_CAdjustments_CIHueSaturationLightnessFilterVtbl;

    interface __x_ABI_CLumia_CImaging_CAdjustments_CIHueSaturationLightnessFilter
    {
        CONST_VTBL struct __x_ABI_CLumia_CImaging_CAdjustments_CIHueSaturationLightnessFilterVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define __x_ABI_CLumia_CImaging_CAdjustments_CIHueSaturationLightnessFilter_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __x_ABI_CLumia_CImaging_CAdjustments_CIHueSaturationLightnessFilter_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __x_ABI_CLumia_CImaging_CAdjustments_CIHueSaturationLightnessFilter_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __x_ABI_CLumia_CImaging_CAdjustments_CIHueSaturationLightnessFilter_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 

#define __x_ABI_CLumia_CImaging_CAdjustments_CIHueSaturationLightnessFilter_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 

#define __x_ABI_CLumia_CImaging_CAdjustments_CIHueSaturationLightnessFilter_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 


#define __x_ABI_CLumia_CImaging_CAdjustments_CIHueSaturationLightnessFilter_get_HueCurve(This,__returnValue)	\
    ( (This)->lpVtbl -> get_HueCurve(This,__returnValue) ) 

#define __x_ABI_CLumia_CImaging_CAdjustments_CIHueSaturationLightnessFilter_put_HueCurve(This,value)	\
    ( (This)->lpVtbl -> put_HueCurve(This,value) ) 

#define __x_ABI_CLumia_CImaging_CAdjustments_CIHueSaturationLightnessFilter_get_SaturationCurve(This,__returnValue)	\
    ( (This)->lpVtbl -> get_SaturationCurve(This,__returnValue) ) 

#define __x_ABI_CLumia_CImaging_CAdjustments_CIHueSaturationLightnessFilter_put_SaturationCurve(This,value)	\
    ( (This)->lpVtbl -> put_SaturationCurve(This,value) ) 

#define __x_ABI_CLumia_CImaging_CAdjustments_CIHueSaturationLightnessFilter_get_LightnessCurve(This,__returnValue)	\
    ( (This)->lpVtbl -> get_LightnessCurve(This,__returnValue) ) 

#define __x_ABI_CLumia_CImaging_CAdjustments_CIHueSaturationLightnessFilter_put_LightnessCurve(This,value)	\
    ( (This)->lpVtbl -> put_LightnessCurve(This,value) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* ____x_ABI_CLumia_CImaging_CAdjustments_CIHueSaturationLightnessFilter_INTERFACE_DEFINED__ */


/* interface __MIDL_itf_Lumia2EImaging2EAdjustments_0000_0074 */
/* [local] */ 

#if !defined(____x_ABI_CLumia_CImaging_CAdjustments_CILensBlurKernel_INTERFACE_DEFINED__)
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Lumia_Imaging_Adjustments_ILensBlurKernel[] = L"Lumia.Imaging.Adjustments.ILensBlurKernel";
#endif /* !defined(____x_ABI_CLumia_CImaging_CAdjustments_CILensBlurKernel_INTERFACE_DEFINED__) */


/* interface __MIDL_itf_Lumia2EImaging2EAdjustments_0000_0074 */
/* [local] */ 



extern RPC_IF_HANDLE __MIDL_itf_Lumia2EImaging2EAdjustments_0000_0074_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_Lumia2EImaging2EAdjustments_0000_0074_v0_0_s_ifspec;

#ifndef ____x_ABI_CLumia_CImaging_CAdjustments_CILensBlurKernel_INTERFACE_DEFINED__
#define ____x_ABI_CLumia_CImaging_CAdjustments_CILensBlurKernel_INTERFACE_DEFINED__

/* interface __x_ABI_CLumia_CImaging_CAdjustments_CILensBlurKernel */
/* [uuid][object] */ 



/* interface ABI::Lumia::Imaging::Adjustments::ILensBlurKernel */
/* [uuid][object] */ 


EXTERN_C const IID IID___x_ABI_CLumia_CImaging_CAdjustments_CILensBlurKernel;

#if defined(__cplusplus) && !defined(CINTERFACE)
    } /* end extern "C" */
    namespace ABI {
        namespace Lumia {
            namespace Imaging {
                namespace Adjustments {
                    
                    MIDL_INTERFACE("2875C1F8-E9F1-3A6A-94C4-C695A5640745")
                    ILensBlurKernel : public IInspectable
                    {
                    public:
                        virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_PointLightStrength( 
                            /* [out][retval] */ __RPC__out UINT32 *__returnValue) = 0;
                        
                        virtual /* [propput] */ HRESULT STDMETHODCALLTYPE put_PointLightStrength( 
                            /* [in] */ UINT32 __set_formal) = 0;
                        
                        virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_Size( 
                            /* [out][retval] */ __RPC__out UINT32 *__returnValue) = 0;
                        
                        virtual /* [propput] */ HRESULT STDMETHODCALLTYPE put_Size( 
                            /* [in] */ UINT32 __set_formal) = 0;
                        
                    };

                    extern const __declspec(selectany) IID & IID_ILensBlurKernel = __uuidof(ILensBlurKernel);

                    
                }  /* end namespace */
            }  /* end namespace */
        }  /* end namespace */
    }  /* end namespace */
    extern "C" { 
    
#else 	/* C style interface */

    typedef struct __x_ABI_CLumia_CImaging_CAdjustments_CILensBlurKernelVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            __RPC__in __x_ABI_CLumia_CImaging_CAdjustments_CILensBlurKernel * This,
            /* [in] */ __RPC__in REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            __RPC__in __x_ABI_CLumia_CImaging_CAdjustments_CILensBlurKernel * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            __RPC__in __x_ABI_CLumia_CImaging_CAdjustments_CILensBlurKernel * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetIids )( 
            __RPC__in __x_ABI_CLumia_CImaging_CAdjustments_CILensBlurKernel * This,
            /* [out] */ __RPC__out ULONG *iidCount,
            /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
        
        HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )( 
            __RPC__in __x_ABI_CLumia_CImaging_CAdjustments_CILensBlurKernel * This,
            /* [out] */ __RPC__deref_out_opt HSTRING *className);
        
        HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )( 
            __RPC__in __x_ABI_CLumia_CImaging_CAdjustments_CILensBlurKernel * This,
            /* [out] */ __RPC__out TrustLevel *trustLevel);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_PointLightStrength )( 
            __RPC__in __x_ABI_CLumia_CImaging_CAdjustments_CILensBlurKernel * This,
            /* [out][retval] */ __RPC__out UINT32 *__returnValue);
        
        /* [propput] */ HRESULT ( STDMETHODCALLTYPE *put_PointLightStrength )( 
            __RPC__in __x_ABI_CLumia_CImaging_CAdjustments_CILensBlurKernel * This,
            /* [in] */ UINT32 __set_formal);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_Size )( 
            __RPC__in __x_ABI_CLumia_CImaging_CAdjustments_CILensBlurKernel * This,
            /* [out][retval] */ __RPC__out UINT32 *__returnValue);
        
        /* [propput] */ HRESULT ( STDMETHODCALLTYPE *put_Size )( 
            __RPC__in __x_ABI_CLumia_CImaging_CAdjustments_CILensBlurKernel * This,
            /* [in] */ UINT32 __set_formal);
        
        END_INTERFACE
    } __x_ABI_CLumia_CImaging_CAdjustments_CILensBlurKernelVtbl;

    interface __x_ABI_CLumia_CImaging_CAdjustments_CILensBlurKernel
    {
        CONST_VTBL struct __x_ABI_CLumia_CImaging_CAdjustments_CILensBlurKernelVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define __x_ABI_CLumia_CImaging_CAdjustments_CILensBlurKernel_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __x_ABI_CLumia_CImaging_CAdjustments_CILensBlurKernel_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __x_ABI_CLumia_CImaging_CAdjustments_CILensBlurKernel_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __x_ABI_CLumia_CImaging_CAdjustments_CILensBlurKernel_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 

#define __x_ABI_CLumia_CImaging_CAdjustments_CILensBlurKernel_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 

#define __x_ABI_CLumia_CImaging_CAdjustments_CILensBlurKernel_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 


#define __x_ABI_CLumia_CImaging_CAdjustments_CILensBlurKernel_get_PointLightStrength(This,__returnValue)	\
    ( (This)->lpVtbl -> get_PointLightStrength(This,__returnValue) ) 

#define __x_ABI_CLumia_CImaging_CAdjustments_CILensBlurKernel_put_PointLightStrength(This,__set_formal)	\
    ( (This)->lpVtbl -> put_PointLightStrength(This,__set_formal) ) 

#define __x_ABI_CLumia_CImaging_CAdjustments_CILensBlurKernel_get_Size(This,__returnValue)	\
    ( (This)->lpVtbl -> get_Size(This,__returnValue) ) 

#define __x_ABI_CLumia_CImaging_CAdjustments_CILensBlurKernel_put_Size(This,__set_formal)	\
    ( (This)->lpVtbl -> put_Size(This,__set_formal) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* ____x_ABI_CLumia_CImaging_CAdjustments_CILensBlurKernel_INTERFACE_DEFINED__ */


/* interface __MIDL_itf_Lumia2EImaging2EAdjustments_0000_0075 */
/* [local] */ 

#if !defined(____x_ABI_CLumia_CImaging_CAdjustments_CILensBlurCustomKernel_INTERFACE_DEFINED__)
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Lumia_Imaging_Adjustments_ILensBlurCustomKernel[] = L"Lumia.Imaging.Adjustments.ILensBlurCustomKernel";
#endif /* !defined(____x_ABI_CLumia_CImaging_CAdjustments_CILensBlurCustomKernel_INTERFACE_DEFINED__) */


/* interface __MIDL_itf_Lumia2EImaging2EAdjustments_0000_0075 */
/* [local] */ 



extern RPC_IF_HANDLE __MIDL_itf_Lumia2EImaging2EAdjustments_0000_0075_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_Lumia2EImaging2EAdjustments_0000_0075_v0_0_s_ifspec;

#ifndef ____x_ABI_CLumia_CImaging_CAdjustments_CILensBlurCustomKernel_INTERFACE_DEFINED__
#define ____x_ABI_CLumia_CImaging_CAdjustments_CILensBlurCustomKernel_INTERFACE_DEFINED__

/* interface __x_ABI_CLumia_CImaging_CAdjustments_CILensBlurCustomKernel */
/* [uuid][object] */ 



/* interface ABI::Lumia::Imaging::Adjustments::ILensBlurCustomKernel */
/* [uuid][object] */ 


EXTERN_C const IID IID___x_ABI_CLumia_CImaging_CAdjustments_CILensBlurCustomKernel;

#if defined(__cplusplus) && !defined(CINTERFACE)
    } /* end extern "C" */
    namespace ABI {
        namespace Lumia {
            namespace Imaging {
                namespace Adjustments {
                    
                    MIDL_INTERFACE("2E02C2D9-6A07-3F8B-8D49-0F4504D6917E")
                    ILensBlurCustomKernel : public IInspectable
                    {
                    public:
                        virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_Shape( 
                            /* [out][retval] */ __RPC__deref_out_opt ABI::Lumia::Imaging::IImageProvider **__returnValue) = 0;
                        
                        virtual /* [propput] */ HRESULT STDMETHODCALLTYPE put_Shape( 
                            /* [in] */ __RPC__in_opt ABI::Lumia::Imaging::IImageProvider *Shape) = 0;
                        
                    };

                    extern const __declspec(selectany) IID & IID_ILensBlurCustomKernel = __uuidof(ILensBlurCustomKernel);

                    
                }  /* end namespace */
            }  /* end namespace */
        }  /* end namespace */
    }  /* end namespace */
    extern "C" { 
    
#else 	/* C style interface */

    typedef struct __x_ABI_CLumia_CImaging_CAdjustments_CILensBlurCustomKernelVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            __RPC__in __x_ABI_CLumia_CImaging_CAdjustments_CILensBlurCustomKernel * This,
            /* [in] */ __RPC__in REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            __RPC__in __x_ABI_CLumia_CImaging_CAdjustments_CILensBlurCustomKernel * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            __RPC__in __x_ABI_CLumia_CImaging_CAdjustments_CILensBlurCustomKernel * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetIids )( 
            __RPC__in __x_ABI_CLumia_CImaging_CAdjustments_CILensBlurCustomKernel * This,
            /* [out] */ __RPC__out ULONG *iidCount,
            /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
        
        HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )( 
            __RPC__in __x_ABI_CLumia_CImaging_CAdjustments_CILensBlurCustomKernel * This,
            /* [out] */ __RPC__deref_out_opt HSTRING *className);
        
        HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )( 
            __RPC__in __x_ABI_CLumia_CImaging_CAdjustments_CILensBlurCustomKernel * This,
            /* [out] */ __RPC__out TrustLevel *trustLevel);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_Shape )( 
            __RPC__in __x_ABI_CLumia_CImaging_CAdjustments_CILensBlurCustomKernel * This,
            /* [out][retval] */ __RPC__deref_out_opt __x_ABI_CLumia_CImaging_CIImageProvider **__returnValue);
        
        /* [propput] */ HRESULT ( STDMETHODCALLTYPE *put_Shape )( 
            __RPC__in __x_ABI_CLumia_CImaging_CAdjustments_CILensBlurCustomKernel * This,
            /* [in] */ __RPC__in_opt __x_ABI_CLumia_CImaging_CIImageProvider *Shape);
        
        END_INTERFACE
    } __x_ABI_CLumia_CImaging_CAdjustments_CILensBlurCustomKernelVtbl;

    interface __x_ABI_CLumia_CImaging_CAdjustments_CILensBlurCustomKernel
    {
        CONST_VTBL struct __x_ABI_CLumia_CImaging_CAdjustments_CILensBlurCustomKernelVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define __x_ABI_CLumia_CImaging_CAdjustments_CILensBlurCustomKernel_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __x_ABI_CLumia_CImaging_CAdjustments_CILensBlurCustomKernel_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __x_ABI_CLumia_CImaging_CAdjustments_CILensBlurCustomKernel_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __x_ABI_CLumia_CImaging_CAdjustments_CILensBlurCustomKernel_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 

#define __x_ABI_CLumia_CImaging_CAdjustments_CILensBlurCustomKernel_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 

#define __x_ABI_CLumia_CImaging_CAdjustments_CILensBlurCustomKernel_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 


#define __x_ABI_CLumia_CImaging_CAdjustments_CILensBlurCustomKernel_get_Shape(This,__returnValue)	\
    ( (This)->lpVtbl -> get_Shape(This,__returnValue) ) 

#define __x_ABI_CLumia_CImaging_CAdjustments_CILensBlurCustomKernel_put_Shape(This,Shape)	\
    ( (This)->lpVtbl -> put_Shape(This,Shape) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* ____x_ABI_CLumia_CImaging_CAdjustments_CILensBlurCustomKernel_INTERFACE_DEFINED__ */


/* interface __MIDL_itf_Lumia2EImaging2EAdjustments_0000_0076 */
/* [local] */ 

#if !defined(____x_ABI_CLumia_CImaging_CAdjustments_CILensBlurCustomKernelFactory_INTERFACE_DEFINED__)
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Lumia_Imaging_Adjustments_ILensBlurCustomKernelFactory[] = L"Lumia.Imaging.Adjustments.ILensBlurCustomKernelFactory";
#endif /* !defined(____x_ABI_CLumia_CImaging_CAdjustments_CILensBlurCustomKernelFactory_INTERFACE_DEFINED__) */


/* interface __MIDL_itf_Lumia2EImaging2EAdjustments_0000_0076 */
/* [local] */ 



extern RPC_IF_HANDLE __MIDL_itf_Lumia2EImaging2EAdjustments_0000_0076_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_Lumia2EImaging2EAdjustments_0000_0076_v0_0_s_ifspec;

#ifndef ____x_ABI_CLumia_CImaging_CAdjustments_CILensBlurCustomKernelFactory_INTERFACE_DEFINED__
#define ____x_ABI_CLumia_CImaging_CAdjustments_CILensBlurCustomKernelFactory_INTERFACE_DEFINED__

/* interface __x_ABI_CLumia_CImaging_CAdjustments_CILensBlurCustomKernelFactory */
/* [uuid][object] */ 



/* interface ABI::Lumia::Imaging::Adjustments::ILensBlurCustomKernelFactory */
/* [uuid][object] */ 


EXTERN_C const IID IID___x_ABI_CLumia_CImaging_CAdjustments_CILensBlurCustomKernelFactory;

#if defined(__cplusplus) && !defined(CINTERFACE)
    } /* end extern "C" */
    namespace ABI {
        namespace Lumia {
            namespace Imaging {
                namespace Adjustments {
                    
                    MIDL_INTERFACE("B3DB6D5D-86F8-337C-9A52-5BA18B78FC92")
                    ILensBlurCustomKernelFactory : public IInspectable
                    {
                    public:
                        virtual HRESULT STDMETHODCALLTYPE CreateFromImage( 
                            /* [in] */ __RPC__in_opt ABI::Lumia::Imaging::IImageProvider *shape,
                            /* [out][retval] */ __RPC__deref_out_opt ABI::Lumia::Imaging::Adjustments::ILensBlurCustomKernel **__returnValue) = 0;
                        
                        virtual HRESULT STDMETHODCALLTYPE CreateScaledFromImage( 
                            /* [in] */ __RPC__in_opt ABI::Lumia::Imaging::IImageProvider *shape,
                            /* [in] */ UINT32 size,
                            /* [out][retval] */ __RPC__deref_out_opt ABI::Lumia::Imaging::Adjustments::ILensBlurCustomKernel **__returnValue) = 0;
                        
                    };

                    extern const __declspec(selectany) IID & IID_ILensBlurCustomKernelFactory = __uuidof(ILensBlurCustomKernelFactory);

                    
                }  /* end namespace */
            }  /* end namespace */
        }  /* end namespace */
    }  /* end namespace */
    extern "C" { 
    
#else 	/* C style interface */

    typedef struct __x_ABI_CLumia_CImaging_CAdjustments_CILensBlurCustomKernelFactoryVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            __RPC__in __x_ABI_CLumia_CImaging_CAdjustments_CILensBlurCustomKernelFactory * This,
            /* [in] */ __RPC__in REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            __RPC__in __x_ABI_CLumia_CImaging_CAdjustments_CILensBlurCustomKernelFactory * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            __RPC__in __x_ABI_CLumia_CImaging_CAdjustments_CILensBlurCustomKernelFactory * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetIids )( 
            __RPC__in __x_ABI_CLumia_CImaging_CAdjustments_CILensBlurCustomKernelFactory * This,
            /* [out] */ __RPC__out ULONG *iidCount,
            /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
        
        HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )( 
            __RPC__in __x_ABI_CLumia_CImaging_CAdjustments_CILensBlurCustomKernelFactory * This,
            /* [out] */ __RPC__deref_out_opt HSTRING *className);
        
        HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )( 
            __RPC__in __x_ABI_CLumia_CImaging_CAdjustments_CILensBlurCustomKernelFactory * This,
            /* [out] */ __RPC__out TrustLevel *trustLevel);
        
        HRESULT ( STDMETHODCALLTYPE *CreateFromImage )( 
            __RPC__in __x_ABI_CLumia_CImaging_CAdjustments_CILensBlurCustomKernelFactory * This,
            /* [in] */ __RPC__in_opt __x_ABI_CLumia_CImaging_CIImageProvider *shape,
            /* [out][retval] */ __RPC__deref_out_opt __x_ABI_CLumia_CImaging_CAdjustments_CILensBlurCustomKernel **__returnValue);
        
        HRESULT ( STDMETHODCALLTYPE *CreateScaledFromImage )( 
            __RPC__in __x_ABI_CLumia_CImaging_CAdjustments_CILensBlurCustomKernelFactory * This,
            /* [in] */ __RPC__in_opt __x_ABI_CLumia_CImaging_CIImageProvider *shape,
            /* [in] */ UINT32 size,
            /* [out][retval] */ __RPC__deref_out_opt __x_ABI_CLumia_CImaging_CAdjustments_CILensBlurCustomKernel **__returnValue);
        
        END_INTERFACE
    } __x_ABI_CLumia_CImaging_CAdjustments_CILensBlurCustomKernelFactoryVtbl;

    interface __x_ABI_CLumia_CImaging_CAdjustments_CILensBlurCustomKernelFactory
    {
        CONST_VTBL struct __x_ABI_CLumia_CImaging_CAdjustments_CILensBlurCustomKernelFactoryVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define __x_ABI_CLumia_CImaging_CAdjustments_CILensBlurCustomKernelFactory_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __x_ABI_CLumia_CImaging_CAdjustments_CILensBlurCustomKernelFactory_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __x_ABI_CLumia_CImaging_CAdjustments_CILensBlurCustomKernelFactory_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __x_ABI_CLumia_CImaging_CAdjustments_CILensBlurCustomKernelFactory_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 

#define __x_ABI_CLumia_CImaging_CAdjustments_CILensBlurCustomKernelFactory_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 

#define __x_ABI_CLumia_CImaging_CAdjustments_CILensBlurCustomKernelFactory_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 


#define __x_ABI_CLumia_CImaging_CAdjustments_CILensBlurCustomKernelFactory_CreateFromImage(This,shape,__returnValue)	\
    ( (This)->lpVtbl -> CreateFromImage(This,shape,__returnValue) ) 

#define __x_ABI_CLumia_CImaging_CAdjustments_CILensBlurCustomKernelFactory_CreateScaledFromImage(This,shape,size,__returnValue)	\
    ( (This)->lpVtbl -> CreateScaledFromImage(This,shape,size,__returnValue) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* ____x_ABI_CLumia_CImaging_CAdjustments_CILensBlurCustomKernelFactory_INTERFACE_DEFINED__ */


/* interface __MIDL_itf_Lumia2EImaging2EAdjustments_0000_0077 */
/* [local] */ 

#if !defined(____x_ABI_CLumia_CImaging_CAdjustments_CILensBlurPredefinedKernel_INTERFACE_DEFINED__)
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Lumia_Imaging_Adjustments_ILensBlurPredefinedKernel[] = L"Lumia.Imaging.Adjustments.ILensBlurPredefinedKernel";
#endif /* !defined(____x_ABI_CLumia_CImaging_CAdjustments_CILensBlurPredefinedKernel_INTERFACE_DEFINED__) */


/* interface __MIDL_itf_Lumia2EImaging2EAdjustments_0000_0077 */
/* [local] */ 



extern RPC_IF_HANDLE __MIDL_itf_Lumia2EImaging2EAdjustments_0000_0077_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_Lumia2EImaging2EAdjustments_0000_0077_v0_0_s_ifspec;

#ifndef ____x_ABI_CLumia_CImaging_CAdjustments_CILensBlurPredefinedKernel_INTERFACE_DEFINED__
#define ____x_ABI_CLumia_CImaging_CAdjustments_CILensBlurPredefinedKernel_INTERFACE_DEFINED__

/* interface __x_ABI_CLumia_CImaging_CAdjustments_CILensBlurPredefinedKernel */
/* [uuid][object] */ 



/* interface ABI::Lumia::Imaging::Adjustments::ILensBlurPredefinedKernel */
/* [uuid][object] */ 


EXTERN_C const IID IID___x_ABI_CLumia_CImaging_CAdjustments_CILensBlurPredefinedKernel;

#if defined(__cplusplus) && !defined(CINTERFACE)
    } /* end extern "C" */
    namespace ABI {
        namespace Lumia {
            namespace Imaging {
                namespace Adjustments {
                    
                    MIDL_INTERFACE("A27117D4-2916-32A6-90AD-7BD3E4B180D6")
                    ILensBlurPredefinedKernel : public IInspectable
                    {
                    public:
                        virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_LensBlurPredefinedKernelShape( 
                            /* [out][retval] */ __RPC__out ABI::Lumia::Imaging::Adjustments::LensBlurPredefinedKernelShape *__returnValue) = 0;
                        
                        virtual /* [propput] */ HRESULT STDMETHODCALLTYPE put_LensBlurPredefinedKernelShape( 
                            /* [in] */ ABI::Lumia::Imaging::Adjustments::LensBlurPredefinedKernelShape shape) = 0;
                        
                    };

                    extern const __declspec(selectany) IID & IID_ILensBlurPredefinedKernel = __uuidof(ILensBlurPredefinedKernel);

                    
                }  /* end namespace */
            }  /* end namespace */
        }  /* end namespace */
    }  /* end namespace */
    extern "C" { 
    
#else 	/* C style interface */

    typedef struct __x_ABI_CLumia_CImaging_CAdjustments_CILensBlurPredefinedKernelVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            __RPC__in __x_ABI_CLumia_CImaging_CAdjustments_CILensBlurPredefinedKernel * This,
            /* [in] */ __RPC__in REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            __RPC__in __x_ABI_CLumia_CImaging_CAdjustments_CILensBlurPredefinedKernel * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            __RPC__in __x_ABI_CLumia_CImaging_CAdjustments_CILensBlurPredefinedKernel * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetIids )( 
            __RPC__in __x_ABI_CLumia_CImaging_CAdjustments_CILensBlurPredefinedKernel * This,
            /* [out] */ __RPC__out ULONG *iidCount,
            /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
        
        HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )( 
            __RPC__in __x_ABI_CLumia_CImaging_CAdjustments_CILensBlurPredefinedKernel * This,
            /* [out] */ __RPC__deref_out_opt HSTRING *className);
        
        HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )( 
            __RPC__in __x_ABI_CLumia_CImaging_CAdjustments_CILensBlurPredefinedKernel * This,
            /* [out] */ __RPC__out TrustLevel *trustLevel);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_LensBlurPredefinedKernelShape )( 
            __RPC__in __x_ABI_CLumia_CImaging_CAdjustments_CILensBlurPredefinedKernel * This,
            /* [out][retval] */ __RPC__out __x_ABI_CLumia_CImaging_CAdjustments_CLensBlurPredefinedKernelShape *__returnValue);
        
        /* [propput] */ HRESULT ( STDMETHODCALLTYPE *put_LensBlurPredefinedKernelShape )( 
            __RPC__in __x_ABI_CLumia_CImaging_CAdjustments_CILensBlurPredefinedKernel * This,
            /* [in] */ __x_ABI_CLumia_CImaging_CAdjustments_CLensBlurPredefinedKernelShape shape);
        
        END_INTERFACE
    } __x_ABI_CLumia_CImaging_CAdjustments_CILensBlurPredefinedKernelVtbl;

    interface __x_ABI_CLumia_CImaging_CAdjustments_CILensBlurPredefinedKernel
    {
        CONST_VTBL struct __x_ABI_CLumia_CImaging_CAdjustments_CILensBlurPredefinedKernelVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define __x_ABI_CLumia_CImaging_CAdjustments_CILensBlurPredefinedKernel_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __x_ABI_CLumia_CImaging_CAdjustments_CILensBlurPredefinedKernel_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __x_ABI_CLumia_CImaging_CAdjustments_CILensBlurPredefinedKernel_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __x_ABI_CLumia_CImaging_CAdjustments_CILensBlurPredefinedKernel_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 

#define __x_ABI_CLumia_CImaging_CAdjustments_CILensBlurPredefinedKernel_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 

#define __x_ABI_CLumia_CImaging_CAdjustments_CILensBlurPredefinedKernel_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 


#define __x_ABI_CLumia_CImaging_CAdjustments_CILensBlurPredefinedKernel_get_LensBlurPredefinedKernelShape(This,__returnValue)	\
    ( (This)->lpVtbl -> get_LensBlurPredefinedKernelShape(This,__returnValue) ) 

#define __x_ABI_CLumia_CImaging_CAdjustments_CILensBlurPredefinedKernel_put_LensBlurPredefinedKernelShape(This,shape)	\
    ( (This)->lpVtbl -> put_LensBlurPredefinedKernelShape(This,shape) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* ____x_ABI_CLumia_CImaging_CAdjustments_CILensBlurPredefinedKernel_INTERFACE_DEFINED__ */


/* interface __MIDL_itf_Lumia2EImaging2EAdjustments_0000_0078 */
/* [local] */ 

#if !defined(____x_ABI_CLumia_CImaging_CAdjustments_CILensBlurPredefinedKernelFactory_INTERFACE_DEFINED__)
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Lumia_Imaging_Adjustments_ILensBlurPredefinedKernelFactory[] = L"Lumia.Imaging.Adjustments.ILensBlurPredefinedKernelFactory";
#endif /* !defined(____x_ABI_CLumia_CImaging_CAdjustments_CILensBlurPredefinedKernelFactory_INTERFACE_DEFINED__) */


/* interface __MIDL_itf_Lumia2EImaging2EAdjustments_0000_0078 */
/* [local] */ 



extern RPC_IF_HANDLE __MIDL_itf_Lumia2EImaging2EAdjustments_0000_0078_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_Lumia2EImaging2EAdjustments_0000_0078_v0_0_s_ifspec;

#ifndef ____x_ABI_CLumia_CImaging_CAdjustments_CILensBlurPredefinedKernelFactory_INTERFACE_DEFINED__
#define ____x_ABI_CLumia_CImaging_CAdjustments_CILensBlurPredefinedKernelFactory_INTERFACE_DEFINED__

/* interface __x_ABI_CLumia_CImaging_CAdjustments_CILensBlurPredefinedKernelFactory */
/* [uuid][object] */ 



/* interface ABI::Lumia::Imaging::Adjustments::ILensBlurPredefinedKernelFactory */
/* [uuid][object] */ 


EXTERN_C const IID IID___x_ABI_CLumia_CImaging_CAdjustments_CILensBlurPredefinedKernelFactory;

#if defined(__cplusplus) && !defined(CINTERFACE)
    } /* end extern "C" */
    namespace ABI {
        namespace Lumia {
            namespace Imaging {
                namespace Adjustments {
                    
                    MIDL_INTERFACE("8E2543D2-1AFE-3B61-B922-E5B7BB364E32")
                    ILensBlurPredefinedKernelFactory : public IInspectable
                    {
                    public:
                        virtual HRESULT STDMETHODCALLTYPE CreateWithShapeAndSize( 
                            /* [in] */ ABI::Lumia::Imaging::Adjustments::LensBlurPredefinedKernelShape shape,
                            /* [in] */ UINT32 size,
                            /* [out][retval] */ __RPC__deref_out_opt ABI::Lumia::Imaging::Adjustments::ILensBlurPredefinedKernel **__returnValue) = 0;
                        
                    };

                    extern const __declspec(selectany) IID & IID_ILensBlurPredefinedKernelFactory = __uuidof(ILensBlurPredefinedKernelFactory);

                    
                }  /* end namespace */
            }  /* end namespace */
        }  /* end namespace */
    }  /* end namespace */
    extern "C" { 
    
#else 	/* C style interface */

    typedef struct __x_ABI_CLumia_CImaging_CAdjustments_CILensBlurPredefinedKernelFactoryVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            __RPC__in __x_ABI_CLumia_CImaging_CAdjustments_CILensBlurPredefinedKernelFactory * This,
            /* [in] */ __RPC__in REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            __RPC__in __x_ABI_CLumia_CImaging_CAdjustments_CILensBlurPredefinedKernelFactory * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            __RPC__in __x_ABI_CLumia_CImaging_CAdjustments_CILensBlurPredefinedKernelFactory * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetIids )( 
            __RPC__in __x_ABI_CLumia_CImaging_CAdjustments_CILensBlurPredefinedKernelFactory * This,
            /* [out] */ __RPC__out ULONG *iidCount,
            /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
        
        HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )( 
            __RPC__in __x_ABI_CLumia_CImaging_CAdjustments_CILensBlurPredefinedKernelFactory * This,
            /* [out] */ __RPC__deref_out_opt HSTRING *className);
        
        HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )( 
            __RPC__in __x_ABI_CLumia_CImaging_CAdjustments_CILensBlurPredefinedKernelFactory * This,
            /* [out] */ __RPC__out TrustLevel *trustLevel);
        
        HRESULT ( STDMETHODCALLTYPE *CreateWithShapeAndSize )( 
            __RPC__in __x_ABI_CLumia_CImaging_CAdjustments_CILensBlurPredefinedKernelFactory * This,
            /* [in] */ __x_ABI_CLumia_CImaging_CAdjustments_CLensBlurPredefinedKernelShape shape,
            /* [in] */ UINT32 size,
            /* [out][retval] */ __RPC__deref_out_opt __x_ABI_CLumia_CImaging_CAdjustments_CILensBlurPredefinedKernel **__returnValue);
        
        END_INTERFACE
    } __x_ABI_CLumia_CImaging_CAdjustments_CILensBlurPredefinedKernelFactoryVtbl;

    interface __x_ABI_CLumia_CImaging_CAdjustments_CILensBlurPredefinedKernelFactory
    {
        CONST_VTBL struct __x_ABI_CLumia_CImaging_CAdjustments_CILensBlurPredefinedKernelFactoryVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define __x_ABI_CLumia_CImaging_CAdjustments_CILensBlurPredefinedKernelFactory_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __x_ABI_CLumia_CImaging_CAdjustments_CILensBlurPredefinedKernelFactory_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __x_ABI_CLumia_CImaging_CAdjustments_CILensBlurPredefinedKernelFactory_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __x_ABI_CLumia_CImaging_CAdjustments_CILensBlurPredefinedKernelFactory_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 

#define __x_ABI_CLumia_CImaging_CAdjustments_CILensBlurPredefinedKernelFactory_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 

#define __x_ABI_CLumia_CImaging_CAdjustments_CILensBlurPredefinedKernelFactory_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 


#define __x_ABI_CLumia_CImaging_CAdjustments_CILensBlurPredefinedKernelFactory_CreateWithShapeAndSize(This,shape,size,__returnValue)	\
    ( (This)->lpVtbl -> CreateWithShapeAndSize(This,shape,size,__returnValue) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* ____x_ABI_CLumia_CImaging_CAdjustments_CILensBlurPredefinedKernelFactory_INTERFACE_DEFINED__ */


/* interface __MIDL_itf_Lumia2EImaging2EAdjustments_0000_0079 */
/* [local] */ 

#if !defined(____x_ABI_CLumia_CImaging_CAdjustments_CILensBlurEffect_INTERFACE_DEFINED__)
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Lumia_Imaging_Adjustments_ILensBlurEffect[] = L"Lumia.Imaging.Adjustments.ILensBlurEffect";
#endif /* !defined(____x_ABI_CLumia_CImaging_CAdjustments_CILensBlurEffect_INTERFACE_DEFINED__) */


/* interface __MIDL_itf_Lumia2EImaging2EAdjustments_0000_0079 */
/* [local] */ 



extern RPC_IF_HANDLE __MIDL_itf_Lumia2EImaging2EAdjustments_0000_0079_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_Lumia2EImaging2EAdjustments_0000_0079_v0_0_s_ifspec;

#ifndef ____x_ABI_CLumia_CImaging_CAdjustments_CILensBlurEffect_INTERFACE_DEFINED__
#define ____x_ABI_CLumia_CImaging_CAdjustments_CILensBlurEffect_INTERFACE_DEFINED__

/* interface __x_ABI_CLumia_CImaging_CAdjustments_CILensBlurEffect */
/* [uuid][object] */ 



/* interface ABI::Lumia::Imaging::Adjustments::ILensBlurEffect */
/* [uuid][object] */ 


EXTERN_C const IID IID___x_ABI_CLumia_CImaging_CAdjustments_CILensBlurEffect;

#if defined(__cplusplus) && !defined(CINTERFACE)
    } /* end extern "C" */
    namespace ABI {
        namespace Lumia {
            namespace Imaging {
                namespace Adjustments {
                    
                    MIDL_INTERFACE("959A0232-C5CB-3AA3-A25F-EF9398F61938")
                    ILensBlurEffect : public IInspectable
                    {
                    public:
                        virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_KernelMap( 
                            /* [out][retval] */ __RPC__deref_out_opt ABI::Lumia::Imaging::IImageProvider **__returnValue) = 0;
                        
                        virtual /* [propput] */ HRESULT STDMETHODCALLTYPE put_KernelMap( 
                            /* [in] */ __RPC__in_opt ABI::Lumia::Imaging::IImageProvider *value) = 0;
                        
                        virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_Kernels( 
                            /* [out][retval] */ __RPC__deref_out_opt __FIVectorView_1_Lumia__CImaging__CAdjustments__CILensBlurKernel **__returnValue) = 0;
                        
                        virtual /* [propput] */ HRESULT STDMETHODCALLTYPE put_Kernels( 
                            /* [in] */ __RPC__in_opt __FIVectorView_1_Lumia__CImaging__CAdjustments__CILensBlurKernel *value) = 0;
                        
                        virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_BlendKernelWidth( 
                            /* [out][retval] */ __RPC__out UINT32 *__returnValue) = 0;
                        
                        virtual /* [propput] */ HRESULT STDMETHODCALLTYPE put_BlendKernelWidth( 
                            /* [in] */ UINT32 value) = 0;
                        
                        virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_PointLightStrength( 
                            /* [out][retval] */ __RPC__out UINT32 *__returnValue) = 0;
                        
                        virtual /* [propput] */ HRESULT STDMETHODCALLTYPE put_PointLightStrength( 
                            /* [in] */ UINT32 value) = 0;
                        
                        virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_Quality( 
                            /* [out][retval] */ __RPC__out DOUBLE *__returnValue) = 0;
                        
                        virtual /* [propput] */ HRESULT STDMETHODCALLTYPE put_Quality( 
                            /* [in] */ DOUBLE quality) = 0;
                        
                        virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_FocusAreaEdgeMirroring( 
                            /* [out][retval] */ __RPC__out ABI::Lumia::Imaging::Adjustments::LensBlurFocusAreaEdgeMirroring *__returnValue) = 0;
                        
                        virtual /* [propput] */ HRESULT STDMETHODCALLTYPE put_FocusAreaEdgeMirroring( 
                            /* [in] */ ABI::Lumia::Imaging::Adjustments::LensBlurFocusAreaEdgeMirroring value) = 0;
                        
                        virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_KernelMapType( 
                            /* [out][retval] */ __RPC__out ABI::Lumia::Imaging::Adjustments::LensBlurKernelMapType *__returnValue) = 0;
                        
                        virtual /* [propput] */ HRESULT STDMETHODCALLTYPE put_KernelMapType( 
                            /* [in] */ ABI::Lumia::Imaging::Adjustments::LensBlurKernelMapType value) = 0;
                        
                        virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_FocusEdgeSoftening( 
                            /* [out][retval] */ __RPC__deref_out_opt ABI::Windows::Foundation::IStringable **__returnValue) = 0;
                        
                        virtual /* [propput] */ HRESULT STDMETHODCALLTYPE put_FocusEdgeSoftening( 
                            /* [in] */ __RPC__in_opt ABI::Windows::Foundation::IStringable *value) = 0;
                        
                    };

                    extern const __declspec(selectany) IID & IID_ILensBlurEffect = __uuidof(ILensBlurEffect);

                    
                }  /* end namespace */
            }  /* end namespace */
        }  /* end namespace */
    }  /* end namespace */
    extern "C" { 
    
#else 	/* C style interface */

    typedef struct __x_ABI_CLumia_CImaging_CAdjustments_CILensBlurEffectVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            __RPC__in __x_ABI_CLumia_CImaging_CAdjustments_CILensBlurEffect * This,
            /* [in] */ __RPC__in REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            __RPC__in __x_ABI_CLumia_CImaging_CAdjustments_CILensBlurEffect * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            __RPC__in __x_ABI_CLumia_CImaging_CAdjustments_CILensBlurEffect * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetIids )( 
            __RPC__in __x_ABI_CLumia_CImaging_CAdjustments_CILensBlurEffect * This,
            /* [out] */ __RPC__out ULONG *iidCount,
            /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
        
        HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )( 
            __RPC__in __x_ABI_CLumia_CImaging_CAdjustments_CILensBlurEffect * This,
            /* [out] */ __RPC__deref_out_opt HSTRING *className);
        
        HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )( 
            __RPC__in __x_ABI_CLumia_CImaging_CAdjustments_CILensBlurEffect * This,
            /* [out] */ __RPC__out TrustLevel *trustLevel);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_KernelMap )( 
            __RPC__in __x_ABI_CLumia_CImaging_CAdjustments_CILensBlurEffect * This,
            /* [out][retval] */ __RPC__deref_out_opt __x_ABI_CLumia_CImaging_CIImageProvider **__returnValue);
        
        /* [propput] */ HRESULT ( STDMETHODCALLTYPE *put_KernelMap )( 
            __RPC__in __x_ABI_CLumia_CImaging_CAdjustments_CILensBlurEffect * This,
            /* [in] */ __RPC__in_opt __x_ABI_CLumia_CImaging_CIImageProvider *value);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_Kernels )( 
            __RPC__in __x_ABI_CLumia_CImaging_CAdjustments_CILensBlurEffect * This,
            /* [out][retval] */ __RPC__deref_out_opt __FIVectorView_1_Lumia__CImaging__CAdjustments__CILensBlurKernel **__returnValue);
        
        /* [propput] */ HRESULT ( STDMETHODCALLTYPE *put_Kernels )( 
            __RPC__in __x_ABI_CLumia_CImaging_CAdjustments_CILensBlurEffect * This,
            /* [in] */ __RPC__in_opt __FIVectorView_1_Lumia__CImaging__CAdjustments__CILensBlurKernel *value);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_BlendKernelWidth )( 
            __RPC__in __x_ABI_CLumia_CImaging_CAdjustments_CILensBlurEffect * This,
            /* [out][retval] */ __RPC__out UINT32 *__returnValue);
        
        /* [propput] */ HRESULT ( STDMETHODCALLTYPE *put_BlendKernelWidth )( 
            __RPC__in __x_ABI_CLumia_CImaging_CAdjustments_CILensBlurEffect * This,
            /* [in] */ UINT32 value);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_PointLightStrength )( 
            __RPC__in __x_ABI_CLumia_CImaging_CAdjustments_CILensBlurEffect * This,
            /* [out][retval] */ __RPC__out UINT32 *__returnValue);
        
        /* [propput] */ HRESULT ( STDMETHODCALLTYPE *put_PointLightStrength )( 
            __RPC__in __x_ABI_CLumia_CImaging_CAdjustments_CILensBlurEffect * This,
            /* [in] */ UINT32 value);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_Quality )( 
            __RPC__in __x_ABI_CLumia_CImaging_CAdjustments_CILensBlurEffect * This,
            /* [out][retval] */ __RPC__out DOUBLE *__returnValue);
        
        /* [propput] */ HRESULT ( STDMETHODCALLTYPE *put_Quality )( 
            __RPC__in __x_ABI_CLumia_CImaging_CAdjustments_CILensBlurEffect * This,
            /* [in] */ DOUBLE quality);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_FocusAreaEdgeMirroring )( 
            __RPC__in __x_ABI_CLumia_CImaging_CAdjustments_CILensBlurEffect * This,
            /* [out][retval] */ __RPC__out __x_ABI_CLumia_CImaging_CAdjustments_CLensBlurFocusAreaEdgeMirroring *__returnValue);
        
        /* [propput] */ HRESULT ( STDMETHODCALLTYPE *put_FocusAreaEdgeMirroring )( 
            __RPC__in __x_ABI_CLumia_CImaging_CAdjustments_CILensBlurEffect * This,
            /* [in] */ __x_ABI_CLumia_CImaging_CAdjustments_CLensBlurFocusAreaEdgeMirroring value);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_KernelMapType )( 
            __RPC__in __x_ABI_CLumia_CImaging_CAdjustments_CILensBlurEffect * This,
            /* [out][retval] */ __RPC__out __x_ABI_CLumia_CImaging_CAdjustments_CLensBlurKernelMapType *__returnValue);
        
        /* [propput] */ HRESULT ( STDMETHODCALLTYPE *put_KernelMapType )( 
            __RPC__in __x_ABI_CLumia_CImaging_CAdjustments_CILensBlurEffect * This,
            /* [in] */ __x_ABI_CLumia_CImaging_CAdjustments_CLensBlurKernelMapType value);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_FocusEdgeSoftening )( 
            __RPC__in __x_ABI_CLumia_CImaging_CAdjustments_CILensBlurEffect * This,
            /* [out][retval] */ __RPC__deref_out_opt __x_ABI_CWindows_CFoundation_CIStringable **__returnValue);
        
        /* [propput] */ HRESULT ( STDMETHODCALLTYPE *put_FocusEdgeSoftening )( 
            __RPC__in __x_ABI_CLumia_CImaging_CAdjustments_CILensBlurEffect * This,
            /* [in] */ __RPC__in_opt __x_ABI_CWindows_CFoundation_CIStringable *value);
        
        END_INTERFACE
    } __x_ABI_CLumia_CImaging_CAdjustments_CILensBlurEffectVtbl;

    interface __x_ABI_CLumia_CImaging_CAdjustments_CILensBlurEffect
    {
        CONST_VTBL struct __x_ABI_CLumia_CImaging_CAdjustments_CILensBlurEffectVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define __x_ABI_CLumia_CImaging_CAdjustments_CILensBlurEffect_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __x_ABI_CLumia_CImaging_CAdjustments_CILensBlurEffect_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __x_ABI_CLumia_CImaging_CAdjustments_CILensBlurEffect_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __x_ABI_CLumia_CImaging_CAdjustments_CILensBlurEffect_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 

#define __x_ABI_CLumia_CImaging_CAdjustments_CILensBlurEffect_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 

#define __x_ABI_CLumia_CImaging_CAdjustments_CILensBlurEffect_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 


#define __x_ABI_CLumia_CImaging_CAdjustments_CILensBlurEffect_get_KernelMap(This,__returnValue)	\
    ( (This)->lpVtbl -> get_KernelMap(This,__returnValue) ) 

#define __x_ABI_CLumia_CImaging_CAdjustments_CILensBlurEffect_put_KernelMap(This,value)	\
    ( (This)->lpVtbl -> put_KernelMap(This,value) ) 

#define __x_ABI_CLumia_CImaging_CAdjustments_CILensBlurEffect_get_Kernels(This,__returnValue)	\
    ( (This)->lpVtbl -> get_Kernels(This,__returnValue) ) 

#define __x_ABI_CLumia_CImaging_CAdjustments_CILensBlurEffect_put_Kernels(This,value)	\
    ( (This)->lpVtbl -> put_Kernels(This,value) ) 

#define __x_ABI_CLumia_CImaging_CAdjustments_CILensBlurEffect_get_BlendKernelWidth(This,__returnValue)	\
    ( (This)->lpVtbl -> get_BlendKernelWidth(This,__returnValue) ) 

#define __x_ABI_CLumia_CImaging_CAdjustments_CILensBlurEffect_put_BlendKernelWidth(This,value)	\
    ( (This)->lpVtbl -> put_BlendKernelWidth(This,value) ) 

#define __x_ABI_CLumia_CImaging_CAdjustments_CILensBlurEffect_get_PointLightStrength(This,__returnValue)	\
    ( (This)->lpVtbl -> get_PointLightStrength(This,__returnValue) ) 

#define __x_ABI_CLumia_CImaging_CAdjustments_CILensBlurEffect_put_PointLightStrength(This,value)	\
    ( (This)->lpVtbl -> put_PointLightStrength(This,value) ) 

#define __x_ABI_CLumia_CImaging_CAdjustments_CILensBlurEffect_get_Quality(This,__returnValue)	\
    ( (This)->lpVtbl -> get_Quality(This,__returnValue) ) 

#define __x_ABI_CLumia_CImaging_CAdjustments_CILensBlurEffect_put_Quality(This,quality)	\
    ( (This)->lpVtbl -> put_Quality(This,quality) ) 

#define __x_ABI_CLumia_CImaging_CAdjustments_CILensBlurEffect_get_FocusAreaEdgeMirroring(This,__returnValue)	\
    ( (This)->lpVtbl -> get_FocusAreaEdgeMirroring(This,__returnValue) ) 

#define __x_ABI_CLumia_CImaging_CAdjustments_CILensBlurEffect_put_FocusAreaEdgeMirroring(This,value)	\
    ( (This)->lpVtbl -> put_FocusAreaEdgeMirroring(This,value) ) 

#define __x_ABI_CLumia_CImaging_CAdjustments_CILensBlurEffect_get_KernelMapType(This,__returnValue)	\
    ( (This)->lpVtbl -> get_KernelMapType(This,__returnValue) ) 

#define __x_ABI_CLumia_CImaging_CAdjustments_CILensBlurEffect_put_KernelMapType(This,value)	\
    ( (This)->lpVtbl -> put_KernelMapType(This,value) ) 

#define __x_ABI_CLumia_CImaging_CAdjustments_CILensBlurEffect_get_FocusEdgeSoftening(This,__returnValue)	\
    ( (This)->lpVtbl -> get_FocusEdgeSoftening(This,__returnValue) ) 

#define __x_ABI_CLumia_CImaging_CAdjustments_CILensBlurEffect_put_FocusEdgeSoftening(This,value)	\
    ( (This)->lpVtbl -> put_FocusEdgeSoftening(This,value) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* ____x_ABI_CLumia_CImaging_CAdjustments_CILensBlurEffect_INTERFACE_DEFINED__ */


/* interface __MIDL_itf_Lumia2EImaging2EAdjustments_0000_0080 */
/* [local] */ 

#if !defined(____x_ABI_CLumia_CImaging_CAdjustments_CILensBlurEffectFactory_INTERFACE_DEFINED__)
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Lumia_Imaging_Adjustments_ILensBlurEffectFactory[] = L"Lumia.Imaging.Adjustments.ILensBlurEffectFactory";
#endif /* !defined(____x_ABI_CLumia_CImaging_CAdjustments_CILensBlurEffectFactory_INTERFACE_DEFINED__) */


/* interface __MIDL_itf_Lumia2EImaging2EAdjustments_0000_0080 */
/* [local] */ 



extern RPC_IF_HANDLE __MIDL_itf_Lumia2EImaging2EAdjustments_0000_0080_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_Lumia2EImaging2EAdjustments_0000_0080_v0_0_s_ifspec;

#ifndef ____x_ABI_CLumia_CImaging_CAdjustments_CILensBlurEffectFactory_INTERFACE_DEFINED__
#define ____x_ABI_CLumia_CImaging_CAdjustments_CILensBlurEffectFactory_INTERFACE_DEFINED__

/* interface __x_ABI_CLumia_CImaging_CAdjustments_CILensBlurEffectFactory */
/* [uuid][object] */ 



/* interface ABI::Lumia::Imaging::Adjustments::ILensBlurEffectFactory */
/* [uuid][object] */ 


EXTERN_C const IID IID___x_ABI_CLumia_CImaging_CAdjustments_CILensBlurEffectFactory;

#if defined(__cplusplus) && !defined(CINTERFACE)
    } /* end extern "C" */
    namespace ABI {
        namespace Lumia {
            namespace Imaging {
                namespace Adjustments {
                    
                    MIDL_INTERFACE("2B42357E-739C-3EF7-BCBD-0C3DC02CEE02")
                    ILensBlurEffectFactory : public IInspectable
                    {
                    public:
                        virtual HRESULT STDMETHODCALLTYPE Create( 
                            /* [in] */ __RPC__in_opt ABI::Lumia::Imaging::IImageProvider *imageSource,
                            /* [out][retval] */ __RPC__deref_out_opt ABI::Lumia::Imaging::Adjustments::ILensBlurEffect **__returnValue) = 0;
                        
                        virtual HRESULT STDMETHODCALLTYPE CreateWithKernelMap( 
                            /* [in] */ __RPC__in_opt ABI::Lumia::Imaging::IImageProvider *imageSource,
                            /* [in] */ __RPC__in_opt ABI::Lumia::Imaging::IImageProvider *kernelMap,
                            /* [out][retval] */ __RPC__deref_out_opt ABI::Lumia::Imaging::Adjustments::ILensBlurEffect **__returnValue) = 0;
                        
                        virtual HRESULT STDMETHODCALLTYPE CreateWithKernel( 
                            /* [in] */ __RPC__in_opt ABI::Lumia::Imaging::IImageProvider *imageSource,
                            /* [in] */ __RPC__in_opt ABI::Lumia::Imaging::Adjustments::ILensBlurKernel *kernel,
                            /* [out][retval] */ __RPC__deref_out_opt ABI::Lumia::Imaging::Adjustments::ILensBlurEffect **__returnValue) = 0;
                        
                        virtual HRESULT STDMETHODCALLTYPE CreateWithKernelMapAndKernel( 
                            /* [in] */ __RPC__in_opt ABI::Lumia::Imaging::IImageProvider *imageSource,
                            /* [in] */ __RPC__in_opt ABI::Lumia::Imaging::IImageProvider *kernelMap,
                            /* [in] */ __RPC__in_opt ABI::Lumia::Imaging::Adjustments::ILensBlurKernel *kernel,
                            /* [out][retval] */ __RPC__deref_out_opt ABI::Lumia::Imaging::Adjustments::ILensBlurEffect **__returnValue) = 0;
                        
                        virtual HRESULT STDMETHODCALLTYPE CreateWithKernelMapAndKernels( 
                            /* [in] */ __RPC__in_opt ABI::Lumia::Imaging::IImageProvider *imageSource,
                            /* [in] */ __RPC__in_opt ABI::Lumia::Imaging::IImageProvider *kernelMap,
                            /* [in] */ __RPC__in_opt __FIVectorView_1_Lumia__CImaging__CAdjustments__CILensBlurKernel *kernels,
                            /* [out][retval] */ __RPC__deref_out_opt ABI::Lumia::Imaging::Adjustments::ILensBlurEffect **__returnValue) = 0;
                        
                    };

                    extern const __declspec(selectany) IID & IID_ILensBlurEffectFactory = __uuidof(ILensBlurEffectFactory);

                    
                }  /* end namespace */
            }  /* end namespace */
        }  /* end namespace */
    }  /* end namespace */
    extern "C" { 
    
#else 	/* C style interface */

    typedef struct __x_ABI_CLumia_CImaging_CAdjustments_CILensBlurEffectFactoryVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            __RPC__in __x_ABI_CLumia_CImaging_CAdjustments_CILensBlurEffectFactory * This,
            /* [in] */ __RPC__in REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            __RPC__in __x_ABI_CLumia_CImaging_CAdjustments_CILensBlurEffectFactory * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            __RPC__in __x_ABI_CLumia_CImaging_CAdjustments_CILensBlurEffectFactory * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetIids )( 
            __RPC__in __x_ABI_CLumia_CImaging_CAdjustments_CILensBlurEffectFactory * This,
            /* [out] */ __RPC__out ULONG *iidCount,
            /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
        
        HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )( 
            __RPC__in __x_ABI_CLumia_CImaging_CAdjustments_CILensBlurEffectFactory * This,
            /* [out] */ __RPC__deref_out_opt HSTRING *className);
        
        HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )( 
            __RPC__in __x_ABI_CLumia_CImaging_CAdjustments_CILensBlurEffectFactory * This,
            /* [out] */ __RPC__out TrustLevel *trustLevel);
        
        HRESULT ( STDMETHODCALLTYPE *Create )( 
            __RPC__in __x_ABI_CLumia_CImaging_CAdjustments_CILensBlurEffectFactory * This,
            /* [in] */ __RPC__in_opt __x_ABI_CLumia_CImaging_CIImageProvider *imageSource,
            /* [out][retval] */ __RPC__deref_out_opt __x_ABI_CLumia_CImaging_CAdjustments_CILensBlurEffect **__returnValue);
        
        HRESULT ( STDMETHODCALLTYPE *CreateWithKernelMap )( 
            __RPC__in __x_ABI_CLumia_CImaging_CAdjustments_CILensBlurEffectFactory * This,
            /* [in] */ __RPC__in_opt __x_ABI_CLumia_CImaging_CIImageProvider *imageSource,
            /* [in] */ __RPC__in_opt __x_ABI_CLumia_CImaging_CIImageProvider *kernelMap,
            /* [out][retval] */ __RPC__deref_out_opt __x_ABI_CLumia_CImaging_CAdjustments_CILensBlurEffect **__returnValue);
        
        HRESULT ( STDMETHODCALLTYPE *CreateWithKernel )( 
            __RPC__in __x_ABI_CLumia_CImaging_CAdjustments_CILensBlurEffectFactory * This,
            /* [in] */ __RPC__in_opt __x_ABI_CLumia_CImaging_CIImageProvider *imageSource,
            /* [in] */ __RPC__in_opt __x_ABI_CLumia_CImaging_CAdjustments_CILensBlurKernel *kernel,
            /* [out][retval] */ __RPC__deref_out_opt __x_ABI_CLumia_CImaging_CAdjustments_CILensBlurEffect **__returnValue);
        
        HRESULT ( STDMETHODCALLTYPE *CreateWithKernelMapAndKernel )( 
            __RPC__in __x_ABI_CLumia_CImaging_CAdjustments_CILensBlurEffectFactory * This,
            /* [in] */ __RPC__in_opt __x_ABI_CLumia_CImaging_CIImageProvider *imageSource,
            /* [in] */ __RPC__in_opt __x_ABI_CLumia_CImaging_CIImageProvider *kernelMap,
            /* [in] */ __RPC__in_opt __x_ABI_CLumia_CImaging_CAdjustments_CILensBlurKernel *kernel,
            /* [out][retval] */ __RPC__deref_out_opt __x_ABI_CLumia_CImaging_CAdjustments_CILensBlurEffect **__returnValue);
        
        HRESULT ( STDMETHODCALLTYPE *CreateWithKernelMapAndKernels )( 
            __RPC__in __x_ABI_CLumia_CImaging_CAdjustments_CILensBlurEffectFactory * This,
            /* [in] */ __RPC__in_opt __x_ABI_CLumia_CImaging_CIImageProvider *imageSource,
            /* [in] */ __RPC__in_opt __x_ABI_CLumia_CImaging_CIImageProvider *kernelMap,
            /* [in] */ __RPC__in_opt __FIVectorView_1_Lumia__CImaging__CAdjustments__CILensBlurKernel *kernels,
            /* [out][retval] */ __RPC__deref_out_opt __x_ABI_CLumia_CImaging_CAdjustments_CILensBlurEffect **__returnValue);
        
        END_INTERFACE
    } __x_ABI_CLumia_CImaging_CAdjustments_CILensBlurEffectFactoryVtbl;

    interface __x_ABI_CLumia_CImaging_CAdjustments_CILensBlurEffectFactory
    {
        CONST_VTBL struct __x_ABI_CLumia_CImaging_CAdjustments_CILensBlurEffectFactoryVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define __x_ABI_CLumia_CImaging_CAdjustments_CILensBlurEffectFactory_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __x_ABI_CLumia_CImaging_CAdjustments_CILensBlurEffectFactory_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __x_ABI_CLumia_CImaging_CAdjustments_CILensBlurEffectFactory_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __x_ABI_CLumia_CImaging_CAdjustments_CILensBlurEffectFactory_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 

#define __x_ABI_CLumia_CImaging_CAdjustments_CILensBlurEffectFactory_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 

#define __x_ABI_CLumia_CImaging_CAdjustments_CILensBlurEffectFactory_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 


#define __x_ABI_CLumia_CImaging_CAdjustments_CILensBlurEffectFactory_Create(This,imageSource,__returnValue)	\
    ( (This)->lpVtbl -> Create(This,imageSource,__returnValue) ) 

#define __x_ABI_CLumia_CImaging_CAdjustments_CILensBlurEffectFactory_CreateWithKernelMap(This,imageSource,kernelMap,__returnValue)	\
    ( (This)->lpVtbl -> CreateWithKernelMap(This,imageSource,kernelMap,__returnValue) ) 

#define __x_ABI_CLumia_CImaging_CAdjustments_CILensBlurEffectFactory_CreateWithKernel(This,imageSource,kernel,__returnValue)	\
    ( (This)->lpVtbl -> CreateWithKernel(This,imageSource,kernel,__returnValue) ) 

#define __x_ABI_CLumia_CImaging_CAdjustments_CILensBlurEffectFactory_CreateWithKernelMapAndKernel(This,imageSource,kernelMap,kernel,__returnValue)	\
    ( (This)->lpVtbl -> CreateWithKernelMapAndKernel(This,imageSource,kernelMap,kernel,__returnValue) ) 

#define __x_ABI_CLumia_CImaging_CAdjustments_CILensBlurEffectFactory_CreateWithKernelMapAndKernels(This,imageSource,kernelMap,kernels,__returnValue)	\
    ( (This)->lpVtbl -> CreateWithKernelMapAndKernels(This,imageSource,kernelMap,kernels,__returnValue) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* ____x_ABI_CLumia_CImaging_CAdjustments_CILensBlurEffectFactory_INTERFACE_DEFINED__ */


/* interface __MIDL_itf_Lumia2EImaging2EAdjustments_0000_0081 */
/* [local] */ 

#if !defined(____x_ABI_CLumia_CImaging_CAdjustments_CIRgbLevelsFilter_INTERFACE_DEFINED__)
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Lumia_Imaging_Adjustments_IRgbLevelsFilter[] = L"Lumia.Imaging.Adjustments.IRgbLevelsFilter";
#endif /* !defined(____x_ABI_CLumia_CImaging_CAdjustments_CIRgbLevelsFilter_INTERFACE_DEFINED__) */


/* interface __MIDL_itf_Lumia2EImaging2EAdjustments_0000_0081 */
/* [local] */ 



extern RPC_IF_HANDLE __MIDL_itf_Lumia2EImaging2EAdjustments_0000_0081_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_Lumia2EImaging2EAdjustments_0000_0081_v0_0_s_ifspec;

#ifndef ____x_ABI_CLumia_CImaging_CAdjustments_CIRgbLevelsFilter_INTERFACE_DEFINED__
#define ____x_ABI_CLumia_CImaging_CAdjustments_CIRgbLevelsFilter_INTERFACE_DEFINED__

/* interface __x_ABI_CLumia_CImaging_CAdjustments_CIRgbLevelsFilter */
/* [uuid][object] */ 



/* interface ABI::Lumia::Imaging::Adjustments::IRgbLevelsFilter */
/* [uuid][object] */ 


EXTERN_C const IID IID___x_ABI_CLumia_CImaging_CAdjustments_CIRgbLevelsFilter;

#if defined(__cplusplus) && !defined(CINTERFACE)
    } /* end extern "C" */
    namespace ABI {
        namespace Lumia {
            namespace Imaging {
                namespace Adjustments {
                    
                    MIDL_INTERFACE("8FB00004-D43B-352D-9817-DE53C99CAC19")
                    IRgbLevelsFilter : public IInspectable
                    {
                    public:
                        virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_Rgb( 
                            /* [out][retval] */ __RPC__out ABI::Lumia::Imaging::Adjustments::Levels *__returnValue) = 0;
                        
                        virtual /* [propput] */ HRESULT STDMETHODCALLTYPE put_Rgb( 
                            /* [in] */ ABI::Lumia::Imaging::Adjustments::Levels value) = 0;
                        
                        virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_Red( 
                            /* [out][retval] */ __RPC__out ABI::Lumia::Imaging::Adjustments::Levels *__returnValue) = 0;
                        
                        virtual /* [propput] */ HRESULT STDMETHODCALLTYPE put_Red( 
                            /* [in] */ ABI::Lumia::Imaging::Adjustments::Levels value) = 0;
                        
                        virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_Green( 
                            /* [out][retval] */ __RPC__out ABI::Lumia::Imaging::Adjustments::Levels *__returnValue) = 0;
                        
                        virtual /* [propput] */ HRESULT STDMETHODCALLTYPE put_Green( 
                            /* [in] */ ABI::Lumia::Imaging::Adjustments::Levels value) = 0;
                        
                        virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_Blue( 
                            /* [out][retval] */ __RPC__out ABI::Lumia::Imaging::Adjustments::Levels *__returnValue) = 0;
                        
                        virtual /* [propput] */ HRESULT STDMETHODCALLTYPE put_Blue( 
                            /* [in] */ ABI::Lumia::Imaging::Adjustments::Levels value) = 0;
                        
                    };

                    extern const __declspec(selectany) IID & IID_IRgbLevelsFilter = __uuidof(IRgbLevelsFilter);

                    
                }  /* end namespace */
            }  /* end namespace */
        }  /* end namespace */
    }  /* end namespace */
    extern "C" { 
    
#else 	/* C style interface */

    typedef struct __x_ABI_CLumia_CImaging_CAdjustments_CIRgbLevelsFilterVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            __RPC__in __x_ABI_CLumia_CImaging_CAdjustments_CIRgbLevelsFilter * This,
            /* [in] */ __RPC__in REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            __RPC__in __x_ABI_CLumia_CImaging_CAdjustments_CIRgbLevelsFilter * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            __RPC__in __x_ABI_CLumia_CImaging_CAdjustments_CIRgbLevelsFilter * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetIids )( 
            __RPC__in __x_ABI_CLumia_CImaging_CAdjustments_CIRgbLevelsFilter * This,
            /* [out] */ __RPC__out ULONG *iidCount,
            /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
        
        HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )( 
            __RPC__in __x_ABI_CLumia_CImaging_CAdjustments_CIRgbLevelsFilter * This,
            /* [out] */ __RPC__deref_out_opt HSTRING *className);
        
        HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )( 
            __RPC__in __x_ABI_CLumia_CImaging_CAdjustments_CIRgbLevelsFilter * This,
            /* [out] */ __RPC__out TrustLevel *trustLevel);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_Rgb )( 
            __RPC__in __x_ABI_CLumia_CImaging_CAdjustments_CIRgbLevelsFilter * This,
            /* [out][retval] */ __RPC__out __x_ABI_CLumia_CImaging_CAdjustments_CLevels *__returnValue);
        
        /* [propput] */ HRESULT ( STDMETHODCALLTYPE *put_Rgb )( 
            __RPC__in __x_ABI_CLumia_CImaging_CAdjustments_CIRgbLevelsFilter * This,
            /* [in] */ __x_ABI_CLumia_CImaging_CAdjustments_CLevels value);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_Red )( 
            __RPC__in __x_ABI_CLumia_CImaging_CAdjustments_CIRgbLevelsFilter * This,
            /* [out][retval] */ __RPC__out __x_ABI_CLumia_CImaging_CAdjustments_CLevels *__returnValue);
        
        /* [propput] */ HRESULT ( STDMETHODCALLTYPE *put_Red )( 
            __RPC__in __x_ABI_CLumia_CImaging_CAdjustments_CIRgbLevelsFilter * This,
            /* [in] */ __x_ABI_CLumia_CImaging_CAdjustments_CLevels value);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_Green )( 
            __RPC__in __x_ABI_CLumia_CImaging_CAdjustments_CIRgbLevelsFilter * This,
            /* [out][retval] */ __RPC__out __x_ABI_CLumia_CImaging_CAdjustments_CLevels *__returnValue);
        
        /* [propput] */ HRESULT ( STDMETHODCALLTYPE *put_Green )( 
            __RPC__in __x_ABI_CLumia_CImaging_CAdjustments_CIRgbLevelsFilter * This,
            /* [in] */ __x_ABI_CLumia_CImaging_CAdjustments_CLevels value);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_Blue )( 
            __RPC__in __x_ABI_CLumia_CImaging_CAdjustments_CIRgbLevelsFilter * This,
            /* [out][retval] */ __RPC__out __x_ABI_CLumia_CImaging_CAdjustments_CLevels *__returnValue);
        
        /* [propput] */ HRESULT ( STDMETHODCALLTYPE *put_Blue )( 
            __RPC__in __x_ABI_CLumia_CImaging_CAdjustments_CIRgbLevelsFilter * This,
            /* [in] */ __x_ABI_CLumia_CImaging_CAdjustments_CLevels value);
        
        END_INTERFACE
    } __x_ABI_CLumia_CImaging_CAdjustments_CIRgbLevelsFilterVtbl;

    interface __x_ABI_CLumia_CImaging_CAdjustments_CIRgbLevelsFilter
    {
        CONST_VTBL struct __x_ABI_CLumia_CImaging_CAdjustments_CIRgbLevelsFilterVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define __x_ABI_CLumia_CImaging_CAdjustments_CIRgbLevelsFilter_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __x_ABI_CLumia_CImaging_CAdjustments_CIRgbLevelsFilter_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __x_ABI_CLumia_CImaging_CAdjustments_CIRgbLevelsFilter_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __x_ABI_CLumia_CImaging_CAdjustments_CIRgbLevelsFilter_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 

#define __x_ABI_CLumia_CImaging_CAdjustments_CIRgbLevelsFilter_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 

#define __x_ABI_CLumia_CImaging_CAdjustments_CIRgbLevelsFilter_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 


#define __x_ABI_CLumia_CImaging_CAdjustments_CIRgbLevelsFilter_get_Rgb(This,__returnValue)	\
    ( (This)->lpVtbl -> get_Rgb(This,__returnValue) ) 

#define __x_ABI_CLumia_CImaging_CAdjustments_CIRgbLevelsFilter_put_Rgb(This,value)	\
    ( (This)->lpVtbl -> put_Rgb(This,value) ) 

#define __x_ABI_CLumia_CImaging_CAdjustments_CIRgbLevelsFilter_get_Red(This,__returnValue)	\
    ( (This)->lpVtbl -> get_Red(This,__returnValue) ) 

#define __x_ABI_CLumia_CImaging_CAdjustments_CIRgbLevelsFilter_put_Red(This,value)	\
    ( (This)->lpVtbl -> put_Red(This,value) ) 

#define __x_ABI_CLumia_CImaging_CAdjustments_CIRgbLevelsFilter_get_Green(This,__returnValue)	\
    ( (This)->lpVtbl -> get_Green(This,__returnValue) ) 

#define __x_ABI_CLumia_CImaging_CAdjustments_CIRgbLevelsFilter_put_Green(This,value)	\
    ( (This)->lpVtbl -> put_Green(This,value) ) 

#define __x_ABI_CLumia_CImaging_CAdjustments_CIRgbLevelsFilter_get_Blue(This,__returnValue)	\
    ( (This)->lpVtbl -> get_Blue(This,__returnValue) ) 

#define __x_ABI_CLumia_CImaging_CAdjustments_CIRgbLevelsFilter_put_Blue(This,value)	\
    ( (This)->lpVtbl -> put_Blue(This,value) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* ____x_ABI_CLumia_CImaging_CAdjustments_CIRgbLevelsFilter_INTERFACE_DEFINED__ */


/* interface __MIDL_itf_Lumia2EImaging2EAdjustments_0000_0082 */
/* [local] */ 

#if !defined(____x_ABI_CLumia_CImaging_CAdjustments_CIRgbLevelsFilterFactory_INTERFACE_DEFINED__)
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Lumia_Imaging_Adjustments_IRgbLevelsFilterFactory[] = L"Lumia.Imaging.Adjustments.IRgbLevelsFilterFactory";
#endif /* !defined(____x_ABI_CLumia_CImaging_CAdjustments_CIRgbLevelsFilterFactory_INTERFACE_DEFINED__) */


/* interface __MIDL_itf_Lumia2EImaging2EAdjustments_0000_0082 */
/* [local] */ 



extern RPC_IF_HANDLE __MIDL_itf_Lumia2EImaging2EAdjustments_0000_0082_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_Lumia2EImaging2EAdjustments_0000_0082_v0_0_s_ifspec;

#ifndef ____x_ABI_CLumia_CImaging_CAdjustments_CIRgbLevelsFilterFactory_INTERFACE_DEFINED__
#define ____x_ABI_CLumia_CImaging_CAdjustments_CIRgbLevelsFilterFactory_INTERFACE_DEFINED__

/* interface __x_ABI_CLumia_CImaging_CAdjustments_CIRgbLevelsFilterFactory */
/* [uuid][object] */ 



/* interface ABI::Lumia::Imaging::Adjustments::IRgbLevelsFilterFactory */
/* [uuid][object] */ 


EXTERN_C const IID IID___x_ABI_CLumia_CImaging_CAdjustments_CIRgbLevelsFilterFactory;

#if defined(__cplusplus) && !defined(CINTERFACE)
    } /* end extern "C" */
    namespace ABI {
        namespace Lumia {
            namespace Imaging {
                namespace Adjustments {
                    
                    MIDL_INTERFACE("32DB5039-6795-3A10-8D41-76E2F1690C4D")
                    IRgbLevelsFilterFactory : public IInspectable
                    {
                    public:
                        virtual HRESULT STDMETHODCALLTYPE CreateWithSharedLevels( 
                            /* [in] */ ABI::Lumia::Imaging::Adjustments::Levels rgb,
                            /* [out][retval] */ __RPC__deref_out_opt ABI::Lumia::Imaging::Adjustments::IRgbLevelsFilter **__returnValue) = 0;
                        
                        virtual HRESULT STDMETHODCALLTYPE CreateWithIndividualLevels( 
                            /* [in] */ ABI::Lumia::Imaging::Adjustments::Levels rgb,
                            /* [in] */ ABI::Lumia::Imaging::Adjustments::Levels red,
                            /* [in] */ ABI::Lumia::Imaging::Adjustments::Levels green,
                            /* [in] */ ABI::Lumia::Imaging::Adjustments::Levels blue,
                            /* [out][retval] */ __RPC__deref_out_opt ABI::Lumia::Imaging::Adjustments::IRgbLevelsFilter **__returnValue) = 0;
                        
                    };

                    extern const __declspec(selectany) IID & IID_IRgbLevelsFilterFactory = __uuidof(IRgbLevelsFilterFactory);

                    
                }  /* end namespace */
            }  /* end namespace */
        }  /* end namespace */
    }  /* end namespace */
    extern "C" { 
    
#else 	/* C style interface */

    typedef struct __x_ABI_CLumia_CImaging_CAdjustments_CIRgbLevelsFilterFactoryVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            __RPC__in __x_ABI_CLumia_CImaging_CAdjustments_CIRgbLevelsFilterFactory * This,
            /* [in] */ __RPC__in REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            __RPC__in __x_ABI_CLumia_CImaging_CAdjustments_CIRgbLevelsFilterFactory * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            __RPC__in __x_ABI_CLumia_CImaging_CAdjustments_CIRgbLevelsFilterFactory * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetIids )( 
            __RPC__in __x_ABI_CLumia_CImaging_CAdjustments_CIRgbLevelsFilterFactory * This,
            /* [out] */ __RPC__out ULONG *iidCount,
            /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
        
        HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )( 
            __RPC__in __x_ABI_CLumia_CImaging_CAdjustments_CIRgbLevelsFilterFactory * This,
            /* [out] */ __RPC__deref_out_opt HSTRING *className);
        
        HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )( 
            __RPC__in __x_ABI_CLumia_CImaging_CAdjustments_CIRgbLevelsFilterFactory * This,
            /* [out] */ __RPC__out TrustLevel *trustLevel);
        
        HRESULT ( STDMETHODCALLTYPE *CreateWithSharedLevels )( 
            __RPC__in __x_ABI_CLumia_CImaging_CAdjustments_CIRgbLevelsFilterFactory * This,
            /* [in] */ __x_ABI_CLumia_CImaging_CAdjustments_CLevels rgb,
            /* [out][retval] */ __RPC__deref_out_opt __x_ABI_CLumia_CImaging_CAdjustments_CIRgbLevelsFilter **__returnValue);
        
        HRESULT ( STDMETHODCALLTYPE *CreateWithIndividualLevels )( 
            __RPC__in __x_ABI_CLumia_CImaging_CAdjustments_CIRgbLevelsFilterFactory * This,
            /* [in] */ __x_ABI_CLumia_CImaging_CAdjustments_CLevels rgb,
            /* [in] */ __x_ABI_CLumia_CImaging_CAdjustments_CLevels red,
            /* [in] */ __x_ABI_CLumia_CImaging_CAdjustments_CLevels green,
            /* [in] */ __x_ABI_CLumia_CImaging_CAdjustments_CLevels blue,
            /* [out][retval] */ __RPC__deref_out_opt __x_ABI_CLumia_CImaging_CAdjustments_CIRgbLevelsFilter **__returnValue);
        
        END_INTERFACE
    } __x_ABI_CLumia_CImaging_CAdjustments_CIRgbLevelsFilterFactoryVtbl;

    interface __x_ABI_CLumia_CImaging_CAdjustments_CIRgbLevelsFilterFactory
    {
        CONST_VTBL struct __x_ABI_CLumia_CImaging_CAdjustments_CIRgbLevelsFilterFactoryVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define __x_ABI_CLumia_CImaging_CAdjustments_CIRgbLevelsFilterFactory_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __x_ABI_CLumia_CImaging_CAdjustments_CIRgbLevelsFilterFactory_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __x_ABI_CLumia_CImaging_CAdjustments_CIRgbLevelsFilterFactory_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __x_ABI_CLumia_CImaging_CAdjustments_CIRgbLevelsFilterFactory_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 

#define __x_ABI_CLumia_CImaging_CAdjustments_CIRgbLevelsFilterFactory_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 

#define __x_ABI_CLumia_CImaging_CAdjustments_CIRgbLevelsFilterFactory_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 


#define __x_ABI_CLumia_CImaging_CAdjustments_CIRgbLevelsFilterFactory_CreateWithSharedLevels(This,rgb,__returnValue)	\
    ( (This)->lpVtbl -> CreateWithSharedLevels(This,rgb,__returnValue) ) 

#define __x_ABI_CLumia_CImaging_CAdjustments_CIRgbLevelsFilterFactory_CreateWithIndividualLevels(This,rgb,red,green,blue,__returnValue)	\
    ( (This)->lpVtbl -> CreateWithIndividualLevels(This,rgb,red,green,blue,__returnValue) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* ____x_ABI_CLumia_CImaging_CAdjustments_CIRgbLevelsFilterFactory_INTERFACE_DEFINED__ */


/* interface __MIDL_itf_Lumia2EImaging2EAdjustments_0000_0083 */
/* [local] */ 

#if !defined(____x_ABI_CLumia_CImaging_CAdjustments_CILevelsFilter_INTERFACE_DEFINED__)
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Lumia_Imaging_Adjustments_ILevelsFilter[] = L"Lumia.Imaging.Adjustments.ILevelsFilter";
#endif /* !defined(____x_ABI_CLumia_CImaging_CAdjustments_CILevelsFilter_INTERFACE_DEFINED__) */


/* interface __MIDL_itf_Lumia2EImaging2EAdjustments_0000_0083 */
/* [local] */ 



extern RPC_IF_HANDLE __MIDL_itf_Lumia2EImaging2EAdjustments_0000_0083_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_Lumia2EImaging2EAdjustments_0000_0083_v0_0_s_ifspec;

#ifndef ____x_ABI_CLumia_CImaging_CAdjustments_CILevelsFilter_INTERFACE_DEFINED__
#define ____x_ABI_CLumia_CImaging_CAdjustments_CILevelsFilter_INTERFACE_DEFINED__

/* interface __x_ABI_CLumia_CImaging_CAdjustments_CILevelsFilter */
/* [uuid][object] */ 



/* interface ABI::Lumia::Imaging::Adjustments::ILevelsFilter */
/* [uuid][object] */ 


EXTERN_C const IID IID___x_ABI_CLumia_CImaging_CAdjustments_CILevelsFilter;

#if defined(__cplusplus) && !defined(CINTERFACE)
    } /* end extern "C" */
    namespace ABI {
        namespace Lumia {
            namespace Imaging {
                namespace Adjustments {
                    
                    MIDL_INTERFACE("86715323-584F-35C8-9291-FD8ED2CC4CF4")
                    ILevelsFilter : public IInspectable
                    {
                    public:
                        virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_White( 
                            /* [out][retval] */ __RPC__out DOUBLE *__returnValue) = 0;
                        
                        virtual /* [propput] */ HRESULT STDMETHODCALLTYPE put_White( 
                            /* [in] */ DOUBLE value) = 0;
                        
                        virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_Gray( 
                            /* [out][retval] */ __RPC__out DOUBLE *__returnValue) = 0;
                        
                        virtual /* [propput] */ HRESULT STDMETHODCALLTYPE put_Gray( 
                            /* [in] */ DOUBLE value) = 0;
                        
                        virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_Black( 
                            /* [out][retval] */ __RPC__out DOUBLE *__returnValue) = 0;
                        
                        virtual /* [propput] */ HRESULT STDMETHODCALLTYPE put_Black( 
                            /* [in] */ DOUBLE value) = 0;
                        
                    };

                    extern const __declspec(selectany) IID & IID_ILevelsFilter = __uuidof(ILevelsFilter);

                    
                }  /* end namespace */
            }  /* end namespace */
        }  /* end namespace */
    }  /* end namespace */
    extern "C" { 
    
#else 	/* C style interface */

    typedef struct __x_ABI_CLumia_CImaging_CAdjustments_CILevelsFilterVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            __RPC__in __x_ABI_CLumia_CImaging_CAdjustments_CILevelsFilter * This,
            /* [in] */ __RPC__in REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            __RPC__in __x_ABI_CLumia_CImaging_CAdjustments_CILevelsFilter * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            __RPC__in __x_ABI_CLumia_CImaging_CAdjustments_CILevelsFilter * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetIids )( 
            __RPC__in __x_ABI_CLumia_CImaging_CAdjustments_CILevelsFilter * This,
            /* [out] */ __RPC__out ULONG *iidCount,
            /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
        
        HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )( 
            __RPC__in __x_ABI_CLumia_CImaging_CAdjustments_CILevelsFilter * This,
            /* [out] */ __RPC__deref_out_opt HSTRING *className);
        
        HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )( 
            __RPC__in __x_ABI_CLumia_CImaging_CAdjustments_CILevelsFilter * This,
            /* [out] */ __RPC__out TrustLevel *trustLevel);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_White )( 
            __RPC__in __x_ABI_CLumia_CImaging_CAdjustments_CILevelsFilter * This,
            /* [out][retval] */ __RPC__out DOUBLE *__returnValue);
        
        /* [propput] */ HRESULT ( STDMETHODCALLTYPE *put_White )( 
            __RPC__in __x_ABI_CLumia_CImaging_CAdjustments_CILevelsFilter * This,
            /* [in] */ DOUBLE value);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_Gray )( 
            __RPC__in __x_ABI_CLumia_CImaging_CAdjustments_CILevelsFilter * This,
            /* [out][retval] */ __RPC__out DOUBLE *__returnValue);
        
        /* [propput] */ HRESULT ( STDMETHODCALLTYPE *put_Gray )( 
            __RPC__in __x_ABI_CLumia_CImaging_CAdjustments_CILevelsFilter * This,
            /* [in] */ DOUBLE value);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_Black )( 
            __RPC__in __x_ABI_CLumia_CImaging_CAdjustments_CILevelsFilter * This,
            /* [out][retval] */ __RPC__out DOUBLE *__returnValue);
        
        /* [propput] */ HRESULT ( STDMETHODCALLTYPE *put_Black )( 
            __RPC__in __x_ABI_CLumia_CImaging_CAdjustments_CILevelsFilter * This,
            /* [in] */ DOUBLE value);
        
        END_INTERFACE
    } __x_ABI_CLumia_CImaging_CAdjustments_CILevelsFilterVtbl;

    interface __x_ABI_CLumia_CImaging_CAdjustments_CILevelsFilter
    {
        CONST_VTBL struct __x_ABI_CLumia_CImaging_CAdjustments_CILevelsFilterVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define __x_ABI_CLumia_CImaging_CAdjustments_CILevelsFilter_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __x_ABI_CLumia_CImaging_CAdjustments_CILevelsFilter_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __x_ABI_CLumia_CImaging_CAdjustments_CILevelsFilter_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __x_ABI_CLumia_CImaging_CAdjustments_CILevelsFilter_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 

#define __x_ABI_CLumia_CImaging_CAdjustments_CILevelsFilter_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 

#define __x_ABI_CLumia_CImaging_CAdjustments_CILevelsFilter_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 


#define __x_ABI_CLumia_CImaging_CAdjustments_CILevelsFilter_get_White(This,__returnValue)	\
    ( (This)->lpVtbl -> get_White(This,__returnValue) ) 

#define __x_ABI_CLumia_CImaging_CAdjustments_CILevelsFilter_put_White(This,value)	\
    ( (This)->lpVtbl -> put_White(This,value) ) 

#define __x_ABI_CLumia_CImaging_CAdjustments_CILevelsFilter_get_Gray(This,__returnValue)	\
    ( (This)->lpVtbl -> get_Gray(This,__returnValue) ) 

#define __x_ABI_CLumia_CImaging_CAdjustments_CILevelsFilter_put_Gray(This,value)	\
    ( (This)->lpVtbl -> put_Gray(This,value) ) 

#define __x_ABI_CLumia_CImaging_CAdjustments_CILevelsFilter_get_Black(This,__returnValue)	\
    ( (This)->lpVtbl -> get_Black(This,__returnValue) ) 

#define __x_ABI_CLumia_CImaging_CAdjustments_CILevelsFilter_put_Black(This,value)	\
    ( (This)->lpVtbl -> put_Black(This,value) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* ____x_ABI_CLumia_CImaging_CAdjustments_CILevelsFilter_INTERFACE_DEFINED__ */


/* interface __MIDL_itf_Lumia2EImaging2EAdjustments_0000_0084 */
/* [local] */ 

#if !defined(____x_ABI_CLumia_CImaging_CAdjustments_CILevelsFilterFactory_INTERFACE_DEFINED__)
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Lumia_Imaging_Adjustments_ILevelsFilterFactory[] = L"Lumia.Imaging.Adjustments.ILevelsFilterFactory";
#endif /* !defined(____x_ABI_CLumia_CImaging_CAdjustments_CILevelsFilterFactory_INTERFACE_DEFINED__) */


/* interface __MIDL_itf_Lumia2EImaging2EAdjustments_0000_0084 */
/* [local] */ 



extern RPC_IF_HANDLE __MIDL_itf_Lumia2EImaging2EAdjustments_0000_0084_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_Lumia2EImaging2EAdjustments_0000_0084_v0_0_s_ifspec;

#ifndef ____x_ABI_CLumia_CImaging_CAdjustments_CILevelsFilterFactory_INTERFACE_DEFINED__
#define ____x_ABI_CLumia_CImaging_CAdjustments_CILevelsFilterFactory_INTERFACE_DEFINED__

/* interface __x_ABI_CLumia_CImaging_CAdjustments_CILevelsFilterFactory */
/* [uuid][object] */ 



/* interface ABI::Lumia::Imaging::Adjustments::ILevelsFilterFactory */
/* [uuid][object] */ 


EXTERN_C const IID IID___x_ABI_CLumia_CImaging_CAdjustments_CILevelsFilterFactory;

#if defined(__cplusplus) && !defined(CINTERFACE)
    } /* end extern "C" */
    namespace ABI {
        namespace Lumia {
            namespace Imaging {
                namespace Adjustments {
                    
                    MIDL_INTERFACE("FF6DB6A4-456E-320A-8F2F-1B91C7F358F4")
                    ILevelsFilterFactory : public IInspectable
                    {
                    public:
                        virtual HRESULT STDMETHODCALLTYPE CreateWithLevels( 
                            /* [in] */ DOUBLE white,
                            /* [in] */ DOUBLE gray,
                            /* [in] */ DOUBLE black,
                            /* [out][retval] */ __RPC__deref_out_opt ABI::Lumia::Imaging::Adjustments::ILevelsFilter **__returnValue) = 0;
                        
                    };

                    extern const __declspec(selectany) IID & IID_ILevelsFilterFactory = __uuidof(ILevelsFilterFactory);

                    
                }  /* end namespace */
            }  /* end namespace */
        }  /* end namespace */
    }  /* end namespace */
    extern "C" { 
    
#else 	/* C style interface */

    typedef struct __x_ABI_CLumia_CImaging_CAdjustments_CILevelsFilterFactoryVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            __RPC__in __x_ABI_CLumia_CImaging_CAdjustments_CILevelsFilterFactory * This,
            /* [in] */ __RPC__in REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            __RPC__in __x_ABI_CLumia_CImaging_CAdjustments_CILevelsFilterFactory * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            __RPC__in __x_ABI_CLumia_CImaging_CAdjustments_CILevelsFilterFactory * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetIids )( 
            __RPC__in __x_ABI_CLumia_CImaging_CAdjustments_CILevelsFilterFactory * This,
            /* [out] */ __RPC__out ULONG *iidCount,
            /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
        
        HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )( 
            __RPC__in __x_ABI_CLumia_CImaging_CAdjustments_CILevelsFilterFactory * This,
            /* [out] */ __RPC__deref_out_opt HSTRING *className);
        
        HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )( 
            __RPC__in __x_ABI_CLumia_CImaging_CAdjustments_CILevelsFilterFactory * This,
            /* [out] */ __RPC__out TrustLevel *trustLevel);
        
        HRESULT ( STDMETHODCALLTYPE *CreateWithLevels )( 
            __RPC__in __x_ABI_CLumia_CImaging_CAdjustments_CILevelsFilterFactory * This,
            /* [in] */ DOUBLE white,
            /* [in] */ DOUBLE gray,
            /* [in] */ DOUBLE black,
            /* [out][retval] */ __RPC__deref_out_opt __x_ABI_CLumia_CImaging_CAdjustments_CILevelsFilter **__returnValue);
        
        END_INTERFACE
    } __x_ABI_CLumia_CImaging_CAdjustments_CILevelsFilterFactoryVtbl;

    interface __x_ABI_CLumia_CImaging_CAdjustments_CILevelsFilterFactory
    {
        CONST_VTBL struct __x_ABI_CLumia_CImaging_CAdjustments_CILevelsFilterFactoryVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define __x_ABI_CLumia_CImaging_CAdjustments_CILevelsFilterFactory_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __x_ABI_CLumia_CImaging_CAdjustments_CILevelsFilterFactory_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __x_ABI_CLumia_CImaging_CAdjustments_CILevelsFilterFactory_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __x_ABI_CLumia_CImaging_CAdjustments_CILevelsFilterFactory_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 

#define __x_ABI_CLumia_CImaging_CAdjustments_CILevelsFilterFactory_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 

#define __x_ABI_CLumia_CImaging_CAdjustments_CILevelsFilterFactory_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 


#define __x_ABI_CLumia_CImaging_CAdjustments_CILevelsFilterFactory_CreateWithLevels(This,white,gray,black,__returnValue)	\
    ( (This)->lpVtbl -> CreateWithLevels(This,white,gray,black,__returnValue) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* ____x_ABI_CLumia_CImaging_CAdjustments_CILevelsFilterFactory_INTERFACE_DEFINED__ */


/* interface __MIDL_itf_Lumia2EImaging2EAdjustments_0000_0085 */
/* [local] */ 

#if !defined(____x_ABI_CLumia_CImaging_CAdjustments_CILocalBoostAutomaticFilter_INTERFACE_DEFINED__)
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Lumia_Imaging_Adjustments_ILocalBoostAutomaticFilter[] = L"Lumia.Imaging.Adjustments.ILocalBoostAutomaticFilter";
#endif /* !defined(____x_ABI_CLumia_CImaging_CAdjustments_CILocalBoostAutomaticFilter_INTERFACE_DEFINED__) */


/* interface __MIDL_itf_Lumia2EImaging2EAdjustments_0000_0085 */
/* [local] */ 



extern RPC_IF_HANDLE __MIDL_itf_Lumia2EImaging2EAdjustments_0000_0085_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_Lumia2EImaging2EAdjustments_0000_0085_v0_0_s_ifspec;

#ifndef ____x_ABI_CLumia_CImaging_CAdjustments_CILocalBoostAutomaticFilter_INTERFACE_DEFINED__
#define ____x_ABI_CLumia_CImaging_CAdjustments_CILocalBoostAutomaticFilter_INTERFACE_DEFINED__

/* interface __x_ABI_CLumia_CImaging_CAdjustments_CILocalBoostAutomaticFilter */
/* [uuid][object] */ 



/* interface ABI::Lumia::Imaging::Adjustments::ILocalBoostAutomaticFilter */
/* [uuid][object] */ 


EXTERN_C const IID IID___x_ABI_CLumia_CImaging_CAdjustments_CILocalBoostAutomaticFilter;

#if defined(__cplusplus) && !defined(CINTERFACE)
    } /* end extern "C" */
    namespace ABI {
        namespace Lumia {
            namespace Imaging {
                namespace Adjustments {
                    
                    MIDL_INTERFACE("02A1CC0A-E177-3A86-BC68-69CECADC06FF")
                    ILocalBoostAutomaticFilter : public IInspectable
                    {
                    public:
                        virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_Level( 
                            /* [out][retval] */ __RPC__out INT32 *__returnValue) = 0;
                        
                        virtual /* [propput] */ HRESULT STDMETHODCALLTYPE put_Level( 
                            /* [in] */ INT32 value) = 0;
                        
                    };

                    extern const __declspec(selectany) IID & IID_ILocalBoostAutomaticFilter = __uuidof(ILocalBoostAutomaticFilter);

                    
                }  /* end namespace */
            }  /* end namespace */
        }  /* end namespace */
    }  /* end namespace */
    extern "C" { 
    
#else 	/* C style interface */

    typedef struct __x_ABI_CLumia_CImaging_CAdjustments_CILocalBoostAutomaticFilterVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            __RPC__in __x_ABI_CLumia_CImaging_CAdjustments_CILocalBoostAutomaticFilter * This,
            /* [in] */ __RPC__in REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            __RPC__in __x_ABI_CLumia_CImaging_CAdjustments_CILocalBoostAutomaticFilter * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            __RPC__in __x_ABI_CLumia_CImaging_CAdjustments_CILocalBoostAutomaticFilter * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetIids )( 
            __RPC__in __x_ABI_CLumia_CImaging_CAdjustments_CILocalBoostAutomaticFilter * This,
            /* [out] */ __RPC__out ULONG *iidCount,
            /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
        
        HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )( 
            __RPC__in __x_ABI_CLumia_CImaging_CAdjustments_CILocalBoostAutomaticFilter * This,
            /* [out] */ __RPC__deref_out_opt HSTRING *className);
        
        HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )( 
            __RPC__in __x_ABI_CLumia_CImaging_CAdjustments_CILocalBoostAutomaticFilter * This,
            /* [out] */ __RPC__out TrustLevel *trustLevel);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_Level )( 
            __RPC__in __x_ABI_CLumia_CImaging_CAdjustments_CILocalBoostAutomaticFilter * This,
            /* [out][retval] */ __RPC__out INT32 *__returnValue);
        
        /* [propput] */ HRESULT ( STDMETHODCALLTYPE *put_Level )( 
            __RPC__in __x_ABI_CLumia_CImaging_CAdjustments_CILocalBoostAutomaticFilter * This,
            /* [in] */ INT32 value);
        
        END_INTERFACE
    } __x_ABI_CLumia_CImaging_CAdjustments_CILocalBoostAutomaticFilterVtbl;

    interface __x_ABI_CLumia_CImaging_CAdjustments_CILocalBoostAutomaticFilter
    {
        CONST_VTBL struct __x_ABI_CLumia_CImaging_CAdjustments_CILocalBoostAutomaticFilterVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define __x_ABI_CLumia_CImaging_CAdjustments_CILocalBoostAutomaticFilter_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __x_ABI_CLumia_CImaging_CAdjustments_CILocalBoostAutomaticFilter_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __x_ABI_CLumia_CImaging_CAdjustments_CILocalBoostAutomaticFilter_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __x_ABI_CLumia_CImaging_CAdjustments_CILocalBoostAutomaticFilter_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 

#define __x_ABI_CLumia_CImaging_CAdjustments_CILocalBoostAutomaticFilter_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 

#define __x_ABI_CLumia_CImaging_CAdjustments_CILocalBoostAutomaticFilter_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 


#define __x_ABI_CLumia_CImaging_CAdjustments_CILocalBoostAutomaticFilter_get_Level(This,__returnValue)	\
    ( (This)->lpVtbl -> get_Level(This,__returnValue) ) 

#define __x_ABI_CLumia_CImaging_CAdjustments_CILocalBoostAutomaticFilter_put_Level(This,value)	\
    ( (This)->lpVtbl -> put_Level(This,value) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* ____x_ABI_CLumia_CImaging_CAdjustments_CILocalBoostAutomaticFilter_INTERFACE_DEFINED__ */


/* interface __MIDL_itf_Lumia2EImaging2EAdjustments_0000_0086 */
/* [local] */ 

#if !defined(____x_ABI_CLumia_CImaging_CAdjustments_CILocalBoostAutomaticFilterFactory_INTERFACE_DEFINED__)
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Lumia_Imaging_Adjustments_ILocalBoostAutomaticFilterFactory[] = L"Lumia.Imaging.Adjustments.ILocalBoostAutomaticFilterFactory";
#endif /* !defined(____x_ABI_CLumia_CImaging_CAdjustments_CILocalBoostAutomaticFilterFactory_INTERFACE_DEFINED__) */


/* interface __MIDL_itf_Lumia2EImaging2EAdjustments_0000_0086 */
/* [local] */ 



extern RPC_IF_HANDLE __MIDL_itf_Lumia2EImaging2EAdjustments_0000_0086_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_Lumia2EImaging2EAdjustments_0000_0086_v0_0_s_ifspec;

#ifndef ____x_ABI_CLumia_CImaging_CAdjustments_CILocalBoostAutomaticFilterFactory_INTERFACE_DEFINED__
#define ____x_ABI_CLumia_CImaging_CAdjustments_CILocalBoostAutomaticFilterFactory_INTERFACE_DEFINED__

/* interface __x_ABI_CLumia_CImaging_CAdjustments_CILocalBoostAutomaticFilterFactory */
/* [uuid][object] */ 



/* interface ABI::Lumia::Imaging::Adjustments::ILocalBoostAutomaticFilterFactory */
/* [uuid][object] */ 


EXTERN_C const IID IID___x_ABI_CLumia_CImaging_CAdjustments_CILocalBoostAutomaticFilterFactory;

#if defined(__cplusplus) && !defined(CINTERFACE)
    } /* end extern "C" */
    namespace ABI {
        namespace Lumia {
            namespace Imaging {
                namespace Adjustments {
                    
                    MIDL_INTERFACE("CA5C5826-5E14-3C58-A3E6-0F5645B9F76F")
                    ILocalBoostAutomaticFilterFactory : public IInspectable
                    {
                    public:
                        virtual HRESULT STDMETHODCALLTYPE CreateWithLevel( 
                            /* [in] */ INT32 level,
                            /* [out][retval] */ __RPC__deref_out_opt ABI::Lumia::Imaging::Adjustments::ILocalBoostAutomaticFilter **__returnValue) = 0;
                        
                    };

                    extern const __declspec(selectany) IID & IID_ILocalBoostAutomaticFilterFactory = __uuidof(ILocalBoostAutomaticFilterFactory);

                    
                }  /* end namespace */
            }  /* end namespace */
        }  /* end namespace */
    }  /* end namespace */
    extern "C" { 
    
#else 	/* C style interface */

    typedef struct __x_ABI_CLumia_CImaging_CAdjustments_CILocalBoostAutomaticFilterFactoryVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            __RPC__in __x_ABI_CLumia_CImaging_CAdjustments_CILocalBoostAutomaticFilterFactory * This,
            /* [in] */ __RPC__in REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            __RPC__in __x_ABI_CLumia_CImaging_CAdjustments_CILocalBoostAutomaticFilterFactory * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            __RPC__in __x_ABI_CLumia_CImaging_CAdjustments_CILocalBoostAutomaticFilterFactory * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetIids )( 
            __RPC__in __x_ABI_CLumia_CImaging_CAdjustments_CILocalBoostAutomaticFilterFactory * This,
            /* [out] */ __RPC__out ULONG *iidCount,
            /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
        
        HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )( 
            __RPC__in __x_ABI_CLumia_CImaging_CAdjustments_CILocalBoostAutomaticFilterFactory * This,
            /* [out] */ __RPC__deref_out_opt HSTRING *className);
        
        HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )( 
            __RPC__in __x_ABI_CLumia_CImaging_CAdjustments_CILocalBoostAutomaticFilterFactory * This,
            /* [out] */ __RPC__out TrustLevel *trustLevel);
        
        HRESULT ( STDMETHODCALLTYPE *CreateWithLevel )( 
            __RPC__in __x_ABI_CLumia_CImaging_CAdjustments_CILocalBoostAutomaticFilterFactory * This,
            /* [in] */ INT32 level,
            /* [out][retval] */ __RPC__deref_out_opt __x_ABI_CLumia_CImaging_CAdjustments_CILocalBoostAutomaticFilter **__returnValue);
        
        END_INTERFACE
    } __x_ABI_CLumia_CImaging_CAdjustments_CILocalBoostAutomaticFilterFactoryVtbl;

    interface __x_ABI_CLumia_CImaging_CAdjustments_CILocalBoostAutomaticFilterFactory
    {
        CONST_VTBL struct __x_ABI_CLumia_CImaging_CAdjustments_CILocalBoostAutomaticFilterFactoryVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define __x_ABI_CLumia_CImaging_CAdjustments_CILocalBoostAutomaticFilterFactory_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __x_ABI_CLumia_CImaging_CAdjustments_CILocalBoostAutomaticFilterFactory_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __x_ABI_CLumia_CImaging_CAdjustments_CILocalBoostAutomaticFilterFactory_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __x_ABI_CLumia_CImaging_CAdjustments_CILocalBoostAutomaticFilterFactory_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 

#define __x_ABI_CLumia_CImaging_CAdjustments_CILocalBoostAutomaticFilterFactory_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 

#define __x_ABI_CLumia_CImaging_CAdjustments_CILocalBoostAutomaticFilterFactory_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 


#define __x_ABI_CLumia_CImaging_CAdjustments_CILocalBoostAutomaticFilterFactory_CreateWithLevel(This,level,__returnValue)	\
    ( (This)->lpVtbl -> CreateWithLevel(This,level,__returnValue) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* ____x_ABI_CLumia_CImaging_CAdjustments_CILocalBoostAutomaticFilterFactory_INTERFACE_DEFINED__ */


/* interface __MIDL_itf_Lumia2EImaging2EAdjustments_0000_0087 */
/* [local] */ 

#if !defined(____x_ABI_CLumia_CImaging_CAdjustments_CILocalBoostFilter_INTERFACE_DEFINED__)
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Lumia_Imaging_Adjustments_ILocalBoostFilter[] = L"Lumia.Imaging.Adjustments.ILocalBoostFilter";
#endif /* !defined(____x_ABI_CLumia_CImaging_CAdjustments_CILocalBoostFilter_INTERFACE_DEFINED__) */


/* interface __MIDL_itf_Lumia2EImaging2EAdjustments_0000_0087 */
/* [local] */ 



extern RPC_IF_HANDLE __MIDL_itf_Lumia2EImaging2EAdjustments_0000_0087_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_Lumia2EImaging2EAdjustments_0000_0087_v0_0_s_ifspec;

#ifndef ____x_ABI_CLumia_CImaging_CAdjustments_CILocalBoostFilter_INTERFACE_DEFINED__
#define ____x_ABI_CLumia_CImaging_CAdjustments_CILocalBoostFilter_INTERFACE_DEFINED__

/* interface __x_ABI_CLumia_CImaging_CAdjustments_CILocalBoostFilter */
/* [uuid][object] */ 



/* interface ABI::Lumia::Imaging::Adjustments::ILocalBoostFilter */
/* [uuid][object] */ 


EXTERN_C const IID IID___x_ABI_CLumia_CImaging_CAdjustments_CILocalBoostFilter;

#if defined(__cplusplus) && !defined(CINTERFACE)
    } /* end extern "C" */
    namespace ABI {
        namespace Lumia {
            namespace Imaging {
                namespace Adjustments {
                    
                    MIDL_INTERFACE("F94B83DA-DE75-3CA5-AB6E-6B7AA772A17C")
                    ILocalBoostFilter : public IInspectable
                    {
                    public:
                        virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_Gamma( 
                            /* [out][retval] */ __RPC__out DOUBLE *__returnValue) = 0;
                        
                        virtual /* [propput] */ HRESULT STDMETHODCALLTYPE put_Gamma( 
                            /* [in] */ DOUBLE value) = 0;
                        
                        virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_DarkContrast( 
                            /* [out][retval] */ __RPC__out DOUBLE *__returnValue) = 0;
                        
                        virtual /* [propput] */ HRESULT STDMETHODCALLTYPE put_DarkContrast( 
                            /* [in] */ DOUBLE value) = 0;
                        
                        virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_LightContrast( 
                            /* [out][retval] */ __RPC__out DOUBLE *__returnValue) = 0;
                        
                        virtual /* [propput] */ HRESULT STDMETHODCALLTYPE put_LightContrast( 
                            /* [in] */ DOUBLE value) = 0;
                        
                        virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_SensitivityLevel( 
                            /* [out][retval] */ __RPC__out DOUBLE *__returnValue) = 0;
                        
                        virtual /* [propput] */ HRESULT STDMETHODCALLTYPE put_SensitivityLevel( 
                            /* [in] */ DOUBLE value) = 0;
                        
                    };

                    extern const __declspec(selectany) IID & IID_ILocalBoostFilter = __uuidof(ILocalBoostFilter);

                    
                }  /* end namespace */
            }  /* end namespace */
        }  /* end namespace */
    }  /* end namespace */
    extern "C" { 
    
#else 	/* C style interface */

    typedef struct __x_ABI_CLumia_CImaging_CAdjustments_CILocalBoostFilterVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            __RPC__in __x_ABI_CLumia_CImaging_CAdjustments_CILocalBoostFilter * This,
            /* [in] */ __RPC__in REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            __RPC__in __x_ABI_CLumia_CImaging_CAdjustments_CILocalBoostFilter * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            __RPC__in __x_ABI_CLumia_CImaging_CAdjustments_CILocalBoostFilter * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetIids )( 
            __RPC__in __x_ABI_CLumia_CImaging_CAdjustments_CILocalBoostFilter * This,
            /* [out] */ __RPC__out ULONG *iidCount,
            /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
        
        HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )( 
            __RPC__in __x_ABI_CLumia_CImaging_CAdjustments_CILocalBoostFilter * This,
            /* [out] */ __RPC__deref_out_opt HSTRING *className);
        
        HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )( 
            __RPC__in __x_ABI_CLumia_CImaging_CAdjustments_CILocalBoostFilter * This,
            /* [out] */ __RPC__out TrustLevel *trustLevel);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_Gamma )( 
            __RPC__in __x_ABI_CLumia_CImaging_CAdjustments_CILocalBoostFilter * This,
            /* [out][retval] */ __RPC__out DOUBLE *__returnValue);
        
        /* [propput] */ HRESULT ( STDMETHODCALLTYPE *put_Gamma )( 
            __RPC__in __x_ABI_CLumia_CImaging_CAdjustments_CILocalBoostFilter * This,
            /* [in] */ DOUBLE value);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_DarkContrast )( 
            __RPC__in __x_ABI_CLumia_CImaging_CAdjustments_CILocalBoostFilter * This,
            /* [out][retval] */ __RPC__out DOUBLE *__returnValue);
        
        /* [propput] */ HRESULT ( STDMETHODCALLTYPE *put_DarkContrast )( 
            __RPC__in __x_ABI_CLumia_CImaging_CAdjustments_CILocalBoostFilter * This,
            /* [in] */ DOUBLE value);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_LightContrast )( 
            __RPC__in __x_ABI_CLumia_CImaging_CAdjustments_CILocalBoostFilter * This,
            /* [out][retval] */ __RPC__out DOUBLE *__returnValue);
        
        /* [propput] */ HRESULT ( STDMETHODCALLTYPE *put_LightContrast )( 
            __RPC__in __x_ABI_CLumia_CImaging_CAdjustments_CILocalBoostFilter * This,
            /* [in] */ DOUBLE value);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_SensitivityLevel )( 
            __RPC__in __x_ABI_CLumia_CImaging_CAdjustments_CILocalBoostFilter * This,
            /* [out][retval] */ __RPC__out DOUBLE *__returnValue);
        
        /* [propput] */ HRESULT ( STDMETHODCALLTYPE *put_SensitivityLevel )( 
            __RPC__in __x_ABI_CLumia_CImaging_CAdjustments_CILocalBoostFilter * This,
            /* [in] */ DOUBLE value);
        
        END_INTERFACE
    } __x_ABI_CLumia_CImaging_CAdjustments_CILocalBoostFilterVtbl;

    interface __x_ABI_CLumia_CImaging_CAdjustments_CILocalBoostFilter
    {
        CONST_VTBL struct __x_ABI_CLumia_CImaging_CAdjustments_CILocalBoostFilterVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define __x_ABI_CLumia_CImaging_CAdjustments_CILocalBoostFilter_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __x_ABI_CLumia_CImaging_CAdjustments_CILocalBoostFilter_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __x_ABI_CLumia_CImaging_CAdjustments_CILocalBoostFilter_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __x_ABI_CLumia_CImaging_CAdjustments_CILocalBoostFilter_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 

#define __x_ABI_CLumia_CImaging_CAdjustments_CILocalBoostFilter_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 

#define __x_ABI_CLumia_CImaging_CAdjustments_CILocalBoostFilter_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 


#define __x_ABI_CLumia_CImaging_CAdjustments_CILocalBoostFilter_get_Gamma(This,__returnValue)	\
    ( (This)->lpVtbl -> get_Gamma(This,__returnValue) ) 

#define __x_ABI_CLumia_CImaging_CAdjustments_CILocalBoostFilter_put_Gamma(This,value)	\
    ( (This)->lpVtbl -> put_Gamma(This,value) ) 

#define __x_ABI_CLumia_CImaging_CAdjustments_CILocalBoostFilter_get_DarkContrast(This,__returnValue)	\
    ( (This)->lpVtbl -> get_DarkContrast(This,__returnValue) ) 

#define __x_ABI_CLumia_CImaging_CAdjustments_CILocalBoostFilter_put_DarkContrast(This,value)	\
    ( (This)->lpVtbl -> put_DarkContrast(This,value) ) 

#define __x_ABI_CLumia_CImaging_CAdjustments_CILocalBoostFilter_get_LightContrast(This,__returnValue)	\
    ( (This)->lpVtbl -> get_LightContrast(This,__returnValue) ) 

#define __x_ABI_CLumia_CImaging_CAdjustments_CILocalBoostFilter_put_LightContrast(This,value)	\
    ( (This)->lpVtbl -> put_LightContrast(This,value) ) 

#define __x_ABI_CLumia_CImaging_CAdjustments_CILocalBoostFilter_get_SensitivityLevel(This,__returnValue)	\
    ( (This)->lpVtbl -> get_SensitivityLevel(This,__returnValue) ) 

#define __x_ABI_CLumia_CImaging_CAdjustments_CILocalBoostFilter_put_SensitivityLevel(This,value)	\
    ( (This)->lpVtbl -> put_SensitivityLevel(This,value) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* ____x_ABI_CLumia_CImaging_CAdjustments_CILocalBoostFilter_INTERFACE_DEFINED__ */


/* interface __MIDL_itf_Lumia2EImaging2EAdjustments_0000_0088 */
/* [local] */ 

#if !defined(____x_ABI_CLumia_CImaging_CAdjustments_CILocalBoostFilterFactory_INTERFACE_DEFINED__)
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Lumia_Imaging_Adjustments_ILocalBoostFilterFactory[] = L"Lumia.Imaging.Adjustments.ILocalBoostFilterFactory";
#endif /* !defined(____x_ABI_CLumia_CImaging_CAdjustments_CILocalBoostFilterFactory_INTERFACE_DEFINED__) */


/* interface __MIDL_itf_Lumia2EImaging2EAdjustments_0000_0088 */
/* [local] */ 



extern RPC_IF_HANDLE __MIDL_itf_Lumia2EImaging2EAdjustments_0000_0088_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_Lumia2EImaging2EAdjustments_0000_0088_v0_0_s_ifspec;

#ifndef ____x_ABI_CLumia_CImaging_CAdjustments_CILocalBoostFilterFactory_INTERFACE_DEFINED__
#define ____x_ABI_CLumia_CImaging_CAdjustments_CILocalBoostFilterFactory_INTERFACE_DEFINED__

/* interface __x_ABI_CLumia_CImaging_CAdjustments_CILocalBoostFilterFactory */
/* [uuid][object] */ 



/* interface ABI::Lumia::Imaging::Adjustments::ILocalBoostFilterFactory */
/* [uuid][object] */ 


EXTERN_C const IID IID___x_ABI_CLumia_CImaging_CAdjustments_CILocalBoostFilterFactory;

#if defined(__cplusplus) && !defined(CINTERFACE)
    } /* end extern "C" */
    namespace ABI {
        namespace Lumia {
            namespace Imaging {
                namespace Adjustments {
                    
                    MIDL_INTERFACE("81F521F4-D860-3EA5-A7AE-0863ED9BB640")
                    ILocalBoostFilterFactory : public IInspectable
                    {
                    public:
                        virtual HRESULT STDMETHODCALLTYPE CreateWithSettings( 
                            /* [in] */ DOUBLE gamma,
                            /* [in] */ DOUBLE darkContrast,
                            /* [in] */ DOUBLE lightContrast,
                            /* [in] */ DOUBLE sensitivityLevel,
                            /* [out][retval] */ __RPC__deref_out_opt ABI::Lumia::Imaging::Adjustments::ILocalBoostFilter **__returnValue) = 0;
                        
                    };

                    extern const __declspec(selectany) IID & IID_ILocalBoostFilterFactory = __uuidof(ILocalBoostFilterFactory);

                    
                }  /* end namespace */
            }  /* end namespace */
        }  /* end namespace */
    }  /* end namespace */
    extern "C" { 
    
#else 	/* C style interface */

    typedef struct __x_ABI_CLumia_CImaging_CAdjustments_CILocalBoostFilterFactoryVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            __RPC__in __x_ABI_CLumia_CImaging_CAdjustments_CILocalBoostFilterFactory * This,
            /* [in] */ __RPC__in REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            __RPC__in __x_ABI_CLumia_CImaging_CAdjustments_CILocalBoostFilterFactory * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            __RPC__in __x_ABI_CLumia_CImaging_CAdjustments_CILocalBoostFilterFactory * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetIids )( 
            __RPC__in __x_ABI_CLumia_CImaging_CAdjustments_CILocalBoostFilterFactory * This,
            /* [out] */ __RPC__out ULONG *iidCount,
            /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
        
        HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )( 
            __RPC__in __x_ABI_CLumia_CImaging_CAdjustments_CILocalBoostFilterFactory * This,
            /* [out] */ __RPC__deref_out_opt HSTRING *className);
        
        HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )( 
            __RPC__in __x_ABI_CLumia_CImaging_CAdjustments_CILocalBoostFilterFactory * This,
            /* [out] */ __RPC__out TrustLevel *trustLevel);
        
        HRESULT ( STDMETHODCALLTYPE *CreateWithSettings )( 
            __RPC__in __x_ABI_CLumia_CImaging_CAdjustments_CILocalBoostFilterFactory * This,
            /* [in] */ DOUBLE gamma,
            /* [in] */ DOUBLE darkContrast,
            /* [in] */ DOUBLE lightContrast,
            /* [in] */ DOUBLE sensitivityLevel,
            /* [out][retval] */ __RPC__deref_out_opt __x_ABI_CLumia_CImaging_CAdjustments_CILocalBoostFilter **__returnValue);
        
        END_INTERFACE
    } __x_ABI_CLumia_CImaging_CAdjustments_CILocalBoostFilterFactoryVtbl;

    interface __x_ABI_CLumia_CImaging_CAdjustments_CILocalBoostFilterFactory
    {
        CONST_VTBL struct __x_ABI_CLumia_CImaging_CAdjustments_CILocalBoostFilterFactoryVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define __x_ABI_CLumia_CImaging_CAdjustments_CILocalBoostFilterFactory_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __x_ABI_CLumia_CImaging_CAdjustments_CILocalBoostFilterFactory_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __x_ABI_CLumia_CImaging_CAdjustments_CILocalBoostFilterFactory_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __x_ABI_CLumia_CImaging_CAdjustments_CILocalBoostFilterFactory_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 

#define __x_ABI_CLumia_CImaging_CAdjustments_CILocalBoostFilterFactory_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 

#define __x_ABI_CLumia_CImaging_CAdjustments_CILocalBoostFilterFactory_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 


#define __x_ABI_CLumia_CImaging_CAdjustments_CILocalBoostFilterFactory_CreateWithSettings(This,gamma,darkContrast,lightContrast,sensitivityLevel,__returnValue)	\
    ( (This)->lpVtbl -> CreateWithSettings(This,gamma,darkContrast,lightContrast,sensitivityLevel,__returnValue) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* ____x_ABI_CLumia_CImaging_CAdjustments_CILocalBoostFilterFactory_INTERFACE_DEFINED__ */


/* interface __MIDL_itf_Lumia2EImaging2EAdjustments_0000_0089 */
/* [local] */ 

#if !defined(____x_ABI_CLumia_CImaging_CAdjustments_CINoiseFilter_INTERFACE_DEFINED__)
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Lumia_Imaging_Adjustments_INoiseFilter[] = L"Lumia.Imaging.Adjustments.INoiseFilter";
#endif /* !defined(____x_ABI_CLumia_CImaging_CAdjustments_CINoiseFilter_INTERFACE_DEFINED__) */


/* interface __MIDL_itf_Lumia2EImaging2EAdjustments_0000_0089 */
/* [local] */ 



extern RPC_IF_HANDLE __MIDL_itf_Lumia2EImaging2EAdjustments_0000_0089_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_Lumia2EImaging2EAdjustments_0000_0089_v0_0_s_ifspec;

#ifndef ____x_ABI_CLumia_CImaging_CAdjustments_CINoiseFilter_INTERFACE_DEFINED__
#define ____x_ABI_CLumia_CImaging_CAdjustments_CINoiseFilter_INTERFACE_DEFINED__

/* interface __x_ABI_CLumia_CImaging_CAdjustments_CINoiseFilter */
/* [uuid][object] */ 



/* interface ABI::Lumia::Imaging::Adjustments::INoiseFilter */
/* [uuid][object] */ 


EXTERN_C const IID IID___x_ABI_CLumia_CImaging_CAdjustments_CINoiseFilter;

#if defined(__cplusplus) && !defined(CINTERFACE)
    } /* end extern "C" */
    namespace ABI {
        namespace Lumia {
            namespace Imaging {
                namespace Adjustments {
                    
                    MIDL_INTERFACE("106628C4-9CCC-300D-B002-E10904676B73")
                    INoiseFilter : public IInspectable
                    {
                    public:
                        virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_Level( 
                            /* [out][retval] */ __RPC__out ABI::Lumia::Imaging::Adjustments::NoiseLevel *__returnValue) = 0;
                        
                        virtual /* [propput] */ HRESULT STDMETHODCALLTYPE put_Level( 
                            /* [in] */ ABI::Lumia::Imaging::Adjustments::NoiseLevel value) = 0;
                        
                    };

                    extern const __declspec(selectany) IID & IID_INoiseFilter = __uuidof(INoiseFilter);

                    
                }  /* end namespace */
            }  /* end namespace */
        }  /* end namespace */
    }  /* end namespace */
    extern "C" { 
    
#else 	/* C style interface */

    typedef struct __x_ABI_CLumia_CImaging_CAdjustments_CINoiseFilterVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            __RPC__in __x_ABI_CLumia_CImaging_CAdjustments_CINoiseFilter * This,
            /* [in] */ __RPC__in REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            __RPC__in __x_ABI_CLumia_CImaging_CAdjustments_CINoiseFilter * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            __RPC__in __x_ABI_CLumia_CImaging_CAdjustments_CINoiseFilter * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetIids )( 
            __RPC__in __x_ABI_CLumia_CImaging_CAdjustments_CINoiseFilter * This,
            /* [out] */ __RPC__out ULONG *iidCount,
            /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
        
        HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )( 
            __RPC__in __x_ABI_CLumia_CImaging_CAdjustments_CINoiseFilter * This,
            /* [out] */ __RPC__deref_out_opt HSTRING *className);
        
        HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )( 
            __RPC__in __x_ABI_CLumia_CImaging_CAdjustments_CINoiseFilter * This,
            /* [out] */ __RPC__out TrustLevel *trustLevel);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_Level )( 
            __RPC__in __x_ABI_CLumia_CImaging_CAdjustments_CINoiseFilter * This,
            /* [out][retval] */ __RPC__out __x_ABI_CLumia_CImaging_CAdjustments_CNoiseLevel *__returnValue);
        
        /* [propput] */ HRESULT ( STDMETHODCALLTYPE *put_Level )( 
            __RPC__in __x_ABI_CLumia_CImaging_CAdjustments_CINoiseFilter * This,
            /* [in] */ __x_ABI_CLumia_CImaging_CAdjustments_CNoiseLevel value);
        
        END_INTERFACE
    } __x_ABI_CLumia_CImaging_CAdjustments_CINoiseFilterVtbl;

    interface __x_ABI_CLumia_CImaging_CAdjustments_CINoiseFilter
    {
        CONST_VTBL struct __x_ABI_CLumia_CImaging_CAdjustments_CINoiseFilterVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define __x_ABI_CLumia_CImaging_CAdjustments_CINoiseFilter_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __x_ABI_CLumia_CImaging_CAdjustments_CINoiseFilter_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __x_ABI_CLumia_CImaging_CAdjustments_CINoiseFilter_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __x_ABI_CLumia_CImaging_CAdjustments_CINoiseFilter_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 

#define __x_ABI_CLumia_CImaging_CAdjustments_CINoiseFilter_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 

#define __x_ABI_CLumia_CImaging_CAdjustments_CINoiseFilter_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 


#define __x_ABI_CLumia_CImaging_CAdjustments_CINoiseFilter_get_Level(This,__returnValue)	\
    ( (This)->lpVtbl -> get_Level(This,__returnValue) ) 

#define __x_ABI_CLumia_CImaging_CAdjustments_CINoiseFilter_put_Level(This,value)	\
    ( (This)->lpVtbl -> put_Level(This,value) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* ____x_ABI_CLumia_CImaging_CAdjustments_CINoiseFilter_INTERFACE_DEFINED__ */


/* interface __MIDL_itf_Lumia2EImaging2EAdjustments_0000_0090 */
/* [local] */ 

#if !defined(____x_ABI_CLumia_CImaging_CAdjustments_CINoiseFilterFactory_INTERFACE_DEFINED__)
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Lumia_Imaging_Adjustments_INoiseFilterFactory[] = L"Lumia.Imaging.Adjustments.INoiseFilterFactory";
#endif /* !defined(____x_ABI_CLumia_CImaging_CAdjustments_CINoiseFilterFactory_INTERFACE_DEFINED__) */


/* interface __MIDL_itf_Lumia2EImaging2EAdjustments_0000_0090 */
/* [local] */ 



extern RPC_IF_HANDLE __MIDL_itf_Lumia2EImaging2EAdjustments_0000_0090_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_Lumia2EImaging2EAdjustments_0000_0090_v0_0_s_ifspec;

#ifndef ____x_ABI_CLumia_CImaging_CAdjustments_CINoiseFilterFactory_INTERFACE_DEFINED__
#define ____x_ABI_CLumia_CImaging_CAdjustments_CINoiseFilterFactory_INTERFACE_DEFINED__

/* interface __x_ABI_CLumia_CImaging_CAdjustments_CINoiseFilterFactory */
/* [uuid][object] */ 



/* interface ABI::Lumia::Imaging::Adjustments::INoiseFilterFactory */
/* [uuid][object] */ 


EXTERN_C const IID IID___x_ABI_CLumia_CImaging_CAdjustments_CINoiseFilterFactory;

#if defined(__cplusplus) && !defined(CINTERFACE)
    } /* end extern "C" */
    namespace ABI {
        namespace Lumia {
            namespace Imaging {
                namespace Adjustments {
                    
                    MIDL_INTERFACE("4432E5EF-26B6-3B77-84E4-F5C63FBDB344")
                    INoiseFilterFactory : public IInspectable
                    {
                    public:
                        virtual HRESULT STDMETHODCALLTYPE CreateWithLevel( 
                            /* [in] */ ABI::Lumia::Imaging::Adjustments::NoiseLevel level,
                            /* [out][retval] */ __RPC__deref_out_opt ABI::Lumia::Imaging::Adjustments::INoiseFilter **__returnValue) = 0;
                        
                    };

                    extern const __declspec(selectany) IID & IID_INoiseFilterFactory = __uuidof(INoiseFilterFactory);

                    
                }  /* end namespace */
            }  /* end namespace */
        }  /* end namespace */
    }  /* end namespace */
    extern "C" { 
    
#else 	/* C style interface */

    typedef struct __x_ABI_CLumia_CImaging_CAdjustments_CINoiseFilterFactoryVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            __RPC__in __x_ABI_CLumia_CImaging_CAdjustments_CINoiseFilterFactory * This,
            /* [in] */ __RPC__in REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            __RPC__in __x_ABI_CLumia_CImaging_CAdjustments_CINoiseFilterFactory * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            __RPC__in __x_ABI_CLumia_CImaging_CAdjustments_CINoiseFilterFactory * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetIids )( 
            __RPC__in __x_ABI_CLumia_CImaging_CAdjustments_CINoiseFilterFactory * This,
            /* [out] */ __RPC__out ULONG *iidCount,
            /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
        
        HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )( 
            __RPC__in __x_ABI_CLumia_CImaging_CAdjustments_CINoiseFilterFactory * This,
            /* [out] */ __RPC__deref_out_opt HSTRING *className);
        
        HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )( 
            __RPC__in __x_ABI_CLumia_CImaging_CAdjustments_CINoiseFilterFactory * This,
            /* [out] */ __RPC__out TrustLevel *trustLevel);
        
        HRESULT ( STDMETHODCALLTYPE *CreateWithLevel )( 
            __RPC__in __x_ABI_CLumia_CImaging_CAdjustments_CINoiseFilterFactory * This,
            /* [in] */ __x_ABI_CLumia_CImaging_CAdjustments_CNoiseLevel level,
            /* [out][retval] */ __RPC__deref_out_opt __x_ABI_CLumia_CImaging_CAdjustments_CINoiseFilter **__returnValue);
        
        END_INTERFACE
    } __x_ABI_CLumia_CImaging_CAdjustments_CINoiseFilterFactoryVtbl;

    interface __x_ABI_CLumia_CImaging_CAdjustments_CINoiseFilterFactory
    {
        CONST_VTBL struct __x_ABI_CLumia_CImaging_CAdjustments_CINoiseFilterFactoryVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define __x_ABI_CLumia_CImaging_CAdjustments_CINoiseFilterFactory_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __x_ABI_CLumia_CImaging_CAdjustments_CINoiseFilterFactory_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __x_ABI_CLumia_CImaging_CAdjustments_CINoiseFilterFactory_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __x_ABI_CLumia_CImaging_CAdjustments_CINoiseFilterFactory_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 

#define __x_ABI_CLumia_CImaging_CAdjustments_CINoiseFilterFactory_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 

#define __x_ABI_CLumia_CImaging_CAdjustments_CINoiseFilterFactory_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 


#define __x_ABI_CLumia_CImaging_CAdjustments_CINoiseFilterFactory_CreateWithLevel(This,level,__returnValue)	\
    ( (This)->lpVtbl -> CreateWithLevel(This,level,__returnValue) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* ____x_ABI_CLumia_CImaging_CAdjustments_CINoiseFilterFactory_INTERFACE_DEFINED__ */


/* interface __MIDL_itf_Lumia2EImaging2EAdjustments_0000_2028 */




/* interface __MIDL_itf_Lumia2EImaging2EAdjustments_0000_2028 */




extern RPC_IF_HANDLE __MIDL_itf_Lumia2EImaging2EAdjustments_0000_2028_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_Lumia2EImaging2EAdjustments_0000_2028_v0_0_s_ifspec;

/* interface __MIDL_itf_Lumia2EImaging2EAdjustments_0000_0092 */
/* [local] */ 

#ifndef DEF___FIIterator_1_Windows__CFoundation__CRect
#define DEF___FIIterator_1_Windows__CFoundation__CRect
#if !defined(__cplusplus) || defined(RO_NO_TEMPLATE_NAME)


/* interface __MIDL_itf_Lumia2EImaging2EAdjustments_0000_0092 */
/* [local] */ 



extern RPC_IF_HANDLE __MIDL_itf_Lumia2EImaging2EAdjustments_0000_0092_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_Lumia2EImaging2EAdjustments_0000_0092_v0_0_s_ifspec;

#ifndef ____FIIterator_1_Windows__CFoundation__CRect_INTERFACE_DEFINED__
#define ____FIIterator_1_Windows__CFoundation__CRect_INTERFACE_DEFINED__

/* interface __FIIterator_1_Windows__CFoundation__CRect */
/* [unique][uuid][object] */ 



/* interface __FIIterator_1_Windows__CFoundation__CRect */
/* [unique][uuid][object] */ 


EXTERN_C const IID IID___FIIterator_1_Windows__CFoundation__CRect;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("3487aa9d-505f-550e-874e-5b6194c618eb")
    __FIIterator_1_Windows__CFoundation__CRect : public IInspectable
    {
    public:
        virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_Current( 
            /* [retval][out] */ __RPC__out struct ABI::Windows::Foundation::Rect *current) = 0;
        
        virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_HasCurrent( 
            /* [retval][out] */ __RPC__out boolean *hasCurrent) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE MoveNext( 
            /* [retval][out] */ __RPC__out boolean *hasCurrent) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetMany( 
            /* [in] */ unsigned int capacity,
            /* [size_is][length_is][out] */ __RPC__out_ecount_part(capacity, *actual) struct ABI::Windows::Foundation::Rect *items,
            /* [retval][out] */ __RPC__out unsigned int *actual) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct __FIIterator_1_Windows__CFoundation__CRectVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            __RPC__in __FIIterator_1_Windows__CFoundation__CRect * This,
            /* [in] */ __RPC__in REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            __RPC__in __FIIterator_1_Windows__CFoundation__CRect * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            __RPC__in __FIIterator_1_Windows__CFoundation__CRect * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetIids )( 
            __RPC__in __FIIterator_1_Windows__CFoundation__CRect * This,
            /* [out] */ __RPC__out ULONG *iidCount,
            /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
        
        HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )( 
            __RPC__in __FIIterator_1_Windows__CFoundation__CRect * This,
            /* [out] */ __RPC__deref_out_opt HSTRING *className);
        
        HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )( 
            __RPC__in __FIIterator_1_Windows__CFoundation__CRect * This,
            /* [out] */ __RPC__out TrustLevel *trustLevel);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_Current )( 
            __RPC__in __FIIterator_1_Windows__CFoundation__CRect * This,
            /* [retval][out] */ __RPC__out struct __x_ABI_CWindows_CFoundation_CRect *current);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_HasCurrent )( 
            __RPC__in __FIIterator_1_Windows__CFoundation__CRect * This,
            /* [retval][out] */ __RPC__out boolean *hasCurrent);
        
        HRESULT ( STDMETHODCALLTYPE *MoveNext )( 
            __RPC__in __FIIterator_1_Windows__CFoundation__CRect * This,
            /* [retval][out] */ __RPC__out boolean *hasCurrent);
        
        HRESULT ( STDMETHODCALLTYPE *GetMany )( 
            __RPC__in __FIIterator_1_Windows__CFoundation__CRect * This,
            /* [in] */ unsigned int capacity,
            /* [size_is][length_is][out] */ __RPC__out_ecount_part(capacity, *actual) struct __x_ABI_CWindows_CFoundation_CRect *items,
            /* [retval][out] */ __RPC__out unsigned int *actual);
        
        END_INTERFACE
    } __FIIterator_1_Windows__CFoundation__CRectVtbl;

    interface __FIIterator_1_Windows__CFoundation__CRect
    {
        CONST_VTBL struct __FIIterator_1_Windows__CFoundation__CRectVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define __FIIterator_1_Windows__CFoundation__CRect_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __FIIterator_1_Windows__CFoundation__CRect_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __FIIterator_1_Windows__CFoundation__CRect_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __FIIterator_1_Windows__CFoundation__CRect_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 

#define __FIIterator_1_Windows__CFoundation__CRect_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 

#define __FIIterator_1_Windows__CFoundation__CRect_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 


#define __FIIterator_1_Windows__CFoundation__CRect_get_Current(This,current)	\
    ( (This)->lpVtbl -> get_Current(This,current) ) 

#define __FIIterator_1_Windows__CFoundation__CRect_get_HasCurrent(This,hasCurrent)	\
    ( (This)->lpVtbl -> get_HasCurrent(This,hasCurrent) ) 

#define __FIIterator_1_Windows__CFoundation__CRect_MoveNext(This,hasCurrent)	\
    ( (This)->lpVtbl -> MoveNext(This,hasCurrent) ) 

#define __FIIterator_1_Windows__CFoundation__CRect_GetMany(This,capacity,items,actual)	\
    ( (This)->lpVtbl -> GetMany(This,capacity,items,actual) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* ____FIIterator_1_Windows__CFoundation__CRect_INTERFACE_DEFINED__ */


/* interface __MIDL_itf_Lumia2EImaging2EAdjustments_0000_0093 */
/* [local] */ 

#endif /* pinterface */
#endif /* DEF___FIIterator_1_Windows__CFoundation__CRect */


/* interface __MIDL_itf_Lumia2EImaging2EAdjustments_0000_0093 */
/* [local] */ 



extern RPC_IF_HANDLE __MIDL_itf_Lumia2EImaging2EAdjustments_0000_0093_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_Lumia2EImaging2EAdjustments_0000_0093_v0_0_s_ifspec;

/* interface __MIDL_itf_Lumia2EImaging2EAdjustments_0000_2029 */




/* interface __MIDL_itf_Lumia2EImaging2EAdjustments_0000_2029 */




extern RPC_IF_HANDLE __MIDL_itf_Lumia2EImaging2EAdjustments_0000_2029_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_Lumia2EImaging2EAdjustments_0000_2029_v0_0_s_ifspec;

/* interface __MIDL_itf_Lumia2EImaging2EAdjustments_0000_0094 */
/* [local] */ 

#ifndef DEF___FIIterable_1_Windows__CFoundation__CRect
#define DEF___FIIterable_1_Windows__CFoundation__CRect
#if !defined(__cplusplus) || defined(RO_NO_TEMPLATE_NAME)


/* interface __MIDL_itf_Lumia2EImaging2EAdjustments_0000_0094 */
/* [local] */ 



extern RPC_IF_HANDLE __MIDL_itf_Lumia2EImaging2EAdjustments_0000_0094_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_Lumia2EImaging2EAdjustments_0000_0094_v0_0_s_ifspec;

#ifndef ____FIIterable_1_Windows__CFoundation__CRect_INTERFACE_DEFINED__
#define ____FIIterable_1_Windows__CFoundation__CRect_INTERFACE_DEFINED__

/* interface __FIIterable_1_Windows__CFoundation__CRect */
/* [unique][uuid][object] */ 



/* interface __FIIterable_1_Windows__CFoundation__CRect */
/* [unique][uuid][object] */ 


EXTERN_C const IID IID___FIIterable_1_Windows__CFoundation__CRect;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("f7a49934-2bcd-50b0-a10a-750045d95578")
    __FIIterable_1_Windows__CFoundation__CRect : public IInspectable
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE First( 
            /* [retval][out] */ __RPC__deref_out_opt __FIIterator_1_Windows__CFoundation__CRect **first) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct __FIIterable_1_Windows__CFoundation__CRectVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            __RPC__in __FIIterable_1_Windows__CFoundation__CRect * This,
            /* [in] */ __RPC__in REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            __RPC__in __FIIterable_1_Windows__CFoundation__CRect * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            __RPC__in __FIIterable_1_Windows__CFoundation__CRect * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetIids )( 
            __RPC__in __FIIterable_1_Windows__CFoundation__CRect * This,
            /* [out] */ __RPC__out ULONG *iidCount,
            /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
        
        HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )( 
            __RPC__in __FIIterable_1_Windows__CFoundation__CRect * This,
            /* [out] */ __RPC__deref_out_opt HSTRING *className);
        
        HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )( 
            __RPC__in __FIIterable_1_Windows__CFoundation__CRect * This,
            /* [out] */ __RPC__out TrustLevel *trustLevel);
        
        HRESULT ( STDMETHODCALLTYPE *First )( 
            __RPC__in __FIIterable_1_Windows__CFoundation__CRect * This,
            /* [retval][out] */ __RPC__deref_out_opt __FIIterator_1_Windows__CFoundation__CRect **first);
        
        END_INTERFACE
    } __FIIterable_1_Windows__CFoundation__CRectVtbl;

    interface __FIIterable_1_Windows__CFoundation__CRect
    {
        CONST_VTBL struct __FIIterable_1_Windows__CFoundation__CRectVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define __FIIterable_1_Windows__CFoundation__CRect_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __FIIterable_1_Windows__CFoundation__CRect_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __FIIterable_1_Windows__CFoundation__CRect_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __FIIterable_1_Windows__CFoundation__CRect_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 

#define __FIIterable_1_Windows__CFoundation__CRect_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 

#define __FIIterable_1_Windows__CFoundation__CRect_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 


#define __FIIterable_1_Windows__CFoundation__CRect_First(This,first)	\
    ( (This)->lpVtbl -> First(This,first) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* ____FIIterable_1_Windows__CFoundation__CRect_INTERFACE_DEFINED__ */


/* interface __MIDL_itf_Lumia2EImaging2EAdjustments_0000_0095 */
/* [local] */ 

#endif /* pinterface */
#endif /* DEF___FIIterable_1_Windows__CFoundation__CRect */


/* interface __MIDL_itf_Lumia2EImaging2EAdjustments_0000_0095 */
/* [local] */ 



extern RPC_IF_HANDLE __MIDL_itf_Lumia2EImaging2EAdjustments_0000_0095_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_Lumia2EImaging2EAdjustments_0000_0095_v0_0_s_ifspec;

/* interface __MIDL_itf_Lumia2EImaging2EAdjustments_0000_2030 */




/* interface __MIDL_itf_Lumia2EImaging2EAdjustments_0000_2030 */




extern RPC_IF_HANDLE __MIDL_itf_Lumia2EImaging2EAdjustments_0000_2030_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_Lumia2EImaging2EAdjustments_0000_2030_v0_0_s_ifspec;

/* interface __MIDL_itf_Lumia2EImaging2EAdjustments_0000_0096 */
/* [local] */ 

#ifndef DEF___FIVectorView_1_Windows__CFoundation__CRect
#define DEF___FIVectorView_1_Windows__CFoundation__CRect
#if !defined(__cplusplus) || defined(RO_NO_TEMPLATE_NAME)


/* interface __MIDL_itf_Lumia2EImaging2EAdjustments_0000_0096 */
/* [local] */ 



extern RPC_IF_HANDLE __MIDL_itf_Lumia2EImaging2EAdjustments_0000_0096_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_Lumia2EImaging2EAdjustments_0000_0096_v0_0_s_ifspec;

#ifndef ____FIVectorView_1_Windows__CFoundation__CRect_INTERFACE_DEFINED__
#define ____FIVectorView_1_Windows__CFoundation__CRect_INTERFACE_DEFINED__

/* interface __FIVectorView_1_Windows__CFoundation__CRect */
/* [unique][uuid][object] */ 



/* interface __FIVectorView_1_Windows__CFoundation__CRect */
/* [unique][uuid][object] */ 


EXTERN_C const IID IID___FIVectorView_1_Windows__CFoundation__CRect;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("0b651ad6-9755-5be5-8918-6bd61eed3795")
    __FIVectorView_1_Windows__CFoundation__CRect : public IInspectable
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE GetAt( 
            /* [in] */ unsigned int index,
            /* [retval][out] */ __RPC__out struct ABI::Windows::Foundation::Rect *item) = 0;
        
        virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_Size( 
            /* [retval][out] */ __RPC__out unsigned int *size) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE IndexOf( 
            /* [in] */ struct ABI::Windows::Foundation::Rect item,
            /* [out] */ __RPC__out unsigned int *index,
            /* [retval][out] */ __RPC__out boolean *found) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetMany( 
            /* [in] */ unsigned int startIndex,
            /* [in] */ unsigned int capacity,
            /* [size_is][length_is][out] */ __RPC__out_ecount_part(capacity, *actual) struct ABI::Windows::Foundation::Rect *items,
            /* [retval][out] */ __RPC__out unsigned int *actual) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct __FIVectorView_1_Windows__CFoundation__CRectVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            __RPC__in __FIVectorView_1_Windows__CFoundation__CRect * This,
            /* [in] */ __RPC__in REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            __RPC__in __FIVectorView_1_Windows__CFoundation__CRect * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            __RPC__in __FIVectorView_1_Windows__CFoundation__CRect * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetIids )( 
            __RPC__in __FIVectorView_1_Windows__CFoundation__CRect * This,
            /* [out] */ __RPC__out ULONG *iidCount,
            /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
        
        HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )( 
            __RPC__in __FIVectorView_1_Windows__CFoundation__CRect * This,
            /* [out] */ __RPC__deref_out_opt HSTRING *className);
        
        HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )( 
            __RPC__in __FIVectorView_1_Windows__CFoundation__CRect * This,
            /* [out] */ __RPC__out TrustLevel *trustLevel);
        
        HRESULT ( STDMETHODCALLTYPE *GetAt )( 
            __RPC__in __FIVectorView_1_Windows__CFoundation__CRect * This,
            /* [in] */ unsigned int index,
            /* [retval][out] */ __RPC__out struct __x_ABI_CWindows_CFoundation_CRect *item);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_Size )( 
            __RPC__in __FIVectorView_1_Windows__CFoundation__CRect * This,
            /* [retval][out] */ __RPC__out unsigned int *size);
        
        HRESULT ( STDMETHODCALLTYPE *IndexOf )( 
            __RPC__in __FIVectorView_1_Windows__CFoundation__CRect * This,
            /* [in] */ struct __x_ABI_CWindows_CFoundation_CRect item,
            /* [out] */ __RPC__out unsigned int *index,
            /* [retval][out] */ __RPC__out boolean *found);
        
        HRESULT ( STDMETHODCALLTYPE *GetMany )( 
            __RPC__in __FIVectorView_1_Windows__CFoundation__CRect * This,
            /* [in] */ unsigned int startIndex,
            /* [in] */ unsigned int capacity,
            /* [size_is][length_is][out] */ __RPC__out_ecount_part(capacity, *actual) struct __x_ABI_CWindows_CFoundation_CRect *items,
            /* [retval][out] */ __RPC__out unsigned int *actual);
        
        END_INTERFACE
    } __FIVectorView_1_Windows__CFoundation__CRectVtbl;

    interface __FIVectorView_1_Windows__CFoundation__CRect
    {
        CONST_VTBL struct __FIVectorView_1_Windows__CFoundation__CRectVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define __FIVectorView_1_Windows__CFoundation__CRect_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __FIVectorView_1_Windows__CFoundation__CRect_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __FIVectorView_1_Windows__CFoundation__CRect_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __FIVectorView_1_Windows__CFoundation__CRect_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 

#define __FIVectorView_1_Windows__CFoundation__CRect_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 

#define __FIVectorView_1_Windows__CFoundation__CRect_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 


#define __FIVectorView_1_Windows__CFoundation__CRect_GetAt(This,index,item)	\
    ( (This)->lpVtbl -> GetAt(This,index,item) ) 

#define __FIVectorView_1_Windows__CFoundation__CRect_get_Size(This,size)	\
    ( (This)->lpVtbl -> get_Size(This,size) ) 

#define __FIVectorView_1_Windows__CFoundation__CRect_IndexOf(This,item,index,found)	\
    ( (This)->lpVtbl -> IndexOf(This,item,index,found) ) 

#define __FIVectorView_1_Windows__CFoundation__CRect_GetMany(This,startIndex,capacity,items,actual)	\
    ( (This)->lpVtbl -> GetMany(This,startIndex,capacity,items,actual) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* ____FIVectorView_1_Windows__CFoundation__CRect_INTERFACE_DEFINED__ */


/* interface __MIDL_itf_Lumia2EImaging2EAdjustments_0000_0097 */
/* [local] */ 

#endif /* pinterface */
#endif /* DEF___FIVectorView_1_Windows__CFoundation__CRect */
#if !defined(____x_ABI_CLumia_CImaging_CAdjustments_CIRedEyeRemovalFilter_INTERFACE_DEFINED__)
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Lumia_Imaging_Adjustments_IRedEyeRemovalFilter[] = L"Lumia.Imaging.Adjustments.IRedEyeRemovalFilter";
#endif /* !defined(____x_ABI_CLumia_CImaging_CAdjustments_CIRedEyeRemovalFilter_INTERFACE_DEFINED__) */


/* interface __MIDL_itf_Lumia2EImaging2EAdjustments_0000_0097 */
/* [local] */ 



extern RPC_IF_HANDLE __MIDL_itf_Lumia2EImaging2EAdjustments_0000_0097_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_Lumia2EImaging2EAdjustments_0000_0097_v0_0_s_ifspec;

#ifndef ____x_ABI_CLumia_CImaging_CAdjustments_CIRedEyeRemovalFilter_INTERFACE_DEFINED__
#define ____x_ABI_CLumia_CImaging_CAdjustments_CIRedEyeRemovalFilter_INTERFACE_DEFINED__

/* interface __x_ABI_CLumia_CImaging_CAdjustments_CIRedEyeRemovalFilter */
/* [uuid][object] */ 



/* interface ABI::Lumia::Imaging::Adjustments::IRedEyeRemovalFilter */
/* [uuid][object] */ 


EXTERN_C const IID IID___x_ABI_CLumia_CImaging_CAdjustments_CIRedEyeRemovalFilter;

#if defined(__cplusplus) && !defined(CINTERFACE)
    } /* end extern "C" */
    namespace ABI {
        namespace Lumia {
            namespace Imaging {
                namespace Adjustments {
                    
                    MIDL_INTERFACE("654544E3-9EA1-38A7-A783-DC9F0E0C864D")
                    IRedEyeRemovalFilter : public IInspectable
                    {
                    public:
                        virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_EyeAreas( 
                            /* [out][retval] */ __RPC__deref_out_opt __FIVectorView_1_Windows__CFoundation__CRect **__returnValue) = 0;
                        
                        virtual /* [propput] */ HRESULT STDMETHODCALLTYPE put_EyeAreas( 
                            /* [in] */ __RPC__in_opt __FIVectorView_1_Windows__CFoundation__CRect *value) = 0;
                        
                        virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_Mode( 
                            /* [out][retval] */ __RPC__out ABI::Lumia::Imaging::Adjustments::RedEyeRemovalMode *__returnValue) = 0;
                        
                        virtual /* [propput] */ HRESULT STDMETHODCALLTYPE put_Mode( 
                            /* [in] */ ABI::Lumia::Imaging::Adjustments::RedEyeRemovalMode value) = 0;
                        
                        virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_DetectedEyes( 
                            /* [out][retval] */ __RPC__deref_out_opt __FIVectorView_1_Windows__CFoundation__CRect **__returnValue) = 0;
                        
                    };

                    extern const __declspec(selectany) IID & IID_IRedEyeRemovalFilter = __uuidof(IRedEyeRemovalFilter);

                    
                }  /* end namespace */
            }  /* end namespace */
        }  /* end namespace */
    }  /* end namespace */
    extern "C" { 
    
#else 	/* C style interface */

    typedef struct __x_ABI_CLumia_CImaging_CAdjustments_CIRedEyeRemovalFilterVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            __RPC__in __x_ABI_CLumia_CImaging_CAdjustments_CIRedEyeRemovalFilter * This,
            /* [in] */ __RPC__in REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            __RPC__in __x_ABI_CLumia_CImaging_CAdjustments_CIRedEyeRemovalFilter * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            __RPC__in __x_ABI_CLumia_CImaging_CAdjustments_CIRedEyeRemovalFilter * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetIids )( 
            __RPC__in __x_ABI_CLumia_CImaging_CAdjustments_CIRedEyeRemovalFilter * This,
            /* [out] */ __RPC__out ULONG *iidCount,
            /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
        
        HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )( 
            __RPC__in __x_ABI_CLumia_CImaging_CAdjustments_CIRedEyeRemovalFilter * This,
            /* [out] */ __RPC__deref_out_opt HSTRING *className);
        
        HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )( 
            __RPC__in __x_ABI_CLumia_CImaging_CAdjustments_CIRedEyeRemovalFilter * This,
            /* [out] */ __RPC__out TrustLevel *trustLevel);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_EyeAreas )( 
            __RPC__in __x_ABI_CLumia_CImaging_CAdjustments_CIRedEyeRemovalFilter * This,
            /* [out][retval] */ __RPC__deref_out_opt __FIVectorView_1_Windows__CFoundation__CRect **__returnValue);
        
        /* [propput] */ HRESULT ( STDMETHODCALLTYPE *put_EyeAreas )( 
            __RPC__in __x_ABI_CLumia_CImaging_CAdjustments_CIRedEyeRemovalFilter * This,
            /* [in] */ __RPC__in_opt __FIVectorView_1_Windows__CFoundation__CRect *value);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_Mode )( 
            __RPC__in __x_ABI_CLumia_CImaging_CAdjustments_CIRedEyeRemovalFilter * This,
            /* [out][retval] */ __RPC__out __x_ABI_CLumia_CImaging_CAdjustments_CRedEyeRemovalMode *__returnValue);
        
        /* [propput] */ HRESULT ( STDMETHODCALLTYPE *put_Mode )( 
            __RPC__in __x_ABI_CLumia_CImaging_CAdjustments_CIRedEyeRemovalFilter * This,
            /* [in] */ __x_ABI_CLumia_CImaging_CAdjustments_CRedEyeRemovalMode value);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_DetectedEyes )( 
            __RPC__in __x_ABI_CLumia_CImaging_CAdjustments_CIRedEyeRemovalFilter * This,
            /* [out][retval] */ __RPC__deref_out_opt __FIVectorView_1_Windows__CFoundation__CRect **__returnValue);
        
        END_INTERFACE
    } __x_ABI_CLumia_CImaging_CAdjustments_CIRedEyeRemovalFilterVtbl;

    interface __x_ABI_CLumia_CImaging_CAdjustments_CIRedEyeRemovalFilter
    {
        CONST_VTBL struct __x_ABI_CLumia_CImaging_CAdjustments_CIRedEyeRemovalFilterVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define __x_ABI_CLumia_CImaging_CAdjustments_CIRedEyeRemovalFilter_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __x_ABI_CLumia_CImaging_CAdjustments_CIRedEyeRemovalFilter_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __x_ABI_CLumia_CImaging_CAdjustments_CIRedEyeRemovalFilter_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __x_ABI_CLumia_CImaging_CAdjustments_CIRedEyeRemovalFilter_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 

#define __x_ABI_CLumia_CImaging_CAdjustments_CIRedEyeRemovalFilter_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 

#define __x_ABI_CLumia_CImaging_CAdjustments_CIRedEyeRemovalFilter_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 


#define __x_ABI_CLumia_CImaging_CAdjustments_CIRedEyeRemovalFilter_get_EyeAreas(This,__returnValue)	\
    ( (This)->lpVtbl -> get_EyeAreas(This,__returnValue) ) 

#define __x_ABI_CLumia_CImaging_CAdjustments_CIRedEyeRemovalFilter_put_EyeAreas(This,value)	\
    ( (This)->lpVtbl -> put_EyeAreas(This,value) ) 

#define __x_ABI_CLumia_CImaging_CAdjustments_CIRedEyeRemovalFilter_get_Mode(This,__returnValue)	\
    ( (This)->lpVtbl -> get_Mode(This,__returnValue) ) 

#define __x_ABI_CLumia_CImaging_CAdjustments_CIRedEyeRemovalFilter_put_Mode(This,value)	\
    ( (This)->lpVtbl -> put_Mode(This,value) ) 

#define __x_ABI_CLumia_CImaging_CAdjustments_CIRedEyeRemovalFilter_get_DetectedEyes(This,__returnValue)	\
    ( (This)->lpVtbl -> get_DetectedEyes(This,__returnValue) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* ____x_ABI_CLumia_CImaging_CAdjustments_CIRedEyeRemovalFilter_INTERFACE_DEFINED__ */


/* interface __MIDL_itf_Lumia2EImaging2EAdjustments_0000_0098 */
/* [local] */ 

#if !defined(____x_ABI_CLumia_CImaging_CAdjustments_CIRedEyeRemovalFilterFactory_INTERFACE_DEFINED__)
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Lumia_Imaging_Adjustments_IRedEyeRemovalFilterFactory[] = L"Lumia.Imaging.Adjustments.IRedEyeRemovalFilterFactory";
#endif /* !defined(____x_ABI_CLumia_CImaging_CAdjustments_CIRedEyeRemovalFilterFactory_INTERFACE_DEFINED__) */


/* interface __MIDL_itf_Lumia2EImaging2EAdjustments_0000_0098 */
/* [local] */ 



extern RPC_IF_HANDLE __MIDL_itf_Lumia2EImaging2EAdjustments_0000_0098_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_Lumia2EImaging2EAdjustments_0000_0098_v0_0_s_ifspec;

#ifndef ____x_ABI_CLumia_CImaging_CAdjustments_CIRedEyeRemovalFilterFactory_INTERFACE_DEFINED__
#define ____x_ABI_CLumia_CImaging_CAdjustments_CIRedEyeRemovalFilterFactory_INTERFACE_DEFINED__

/* interface __x_ABI_CLumia_CImaging_CAdjustments_CIRedEyeRemovalFilterFactory */
/* [uuid][object] */ 



/* interface ABI::Lumia::Imaging::Adjustments::IRedEyeRemovalFilterFactory */
/* [uuid][object] */ 


EXTERN_C const IID IID___x_ABI_CLumia_CImaging_CAdjustments_CIRedEyeRemovalFilterFactory;

#if defined(__cplusplus) && !defined(CINTERFACE)
    } /* end extern "C" */
    namespace ABI {
        namespace Lumia {
            namespace Imaging {
                namespace Adjustments {
                    
                    MIDL_INTERFACE("3C942718-D732-3BE3-90F7-EF14FF9E505F")
                    IRedEyeRemovalFilterFactory : public IInspectable
                    {
                    public:
                        virtual HRESULT STDMETHODCALLTYPE Create( 
                            /* [in] */ __RPC__in_opt __FIVectorView_1_Windows__CFoundation__CRect *eyeAreas,
                            /* [out][retval] */ __RPC__deref_out_opt ABI::Lumia::Imaging::Adjustments::IRedEyeRemovalFilter **__returnValue) = 0;
                        
                        virtual HRESULT STDMETHODCALLTYPE CreateWithRemovalMode( 
                            /* [in] */ __RPC__in_opt __FIVectorView_1_Windows__CFoundation__CRect *eyeAreas,
                            /* [in] */ ABI::Lumia::Imaging::Adjustments::RedEyeRemovalMode mode,
                            /* [out][retval] */ __RPC__deref_out_opt ABI::Lumia::Imaging::Adjustments::IRedEyeRemovalFilter **__returnValue) = 0;
                        
                    };

                    extern const __declspec(selectany) IID & IID_IRedEyeRemovalFilterFactory = __uuidof(IRedEyeRemovalFilterFactory);

                    
                }  /* end namespace */
            }  /* end namespace */
        }  /* end namespace */
    }  /* end namespace */
    extern "C" { 
    
#else 	/* C style interface */

    typedef struct __x_ABI_CLumia_CImaging_CAdjustments_CIRedEyeRemovalFilterFactoryVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            __RPC__in __x_ABI_CLumia_CImaging_CAdjustments_CIRedEyeRemovalFilterFactory * This,
            /* [in] */ __RPC__in REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            __RPC__in __x_ABI_CLumia_CImaging_CAdjustments_CIRedEyeRemovalFilterFactory * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            __RPC__in __x_ABI_CLumia_CImaging_CAdjustments_CIRedEyeRemovalFilterFactory * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetIids )( 
            __RPC__in __x_ABI_CLumia_CImaging_CAdjustments_CIRedEyeRemovalFilterFactory * This,
            /* [out] */ __RPC__out ULONG *iidCount,
            /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
        
        HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )( 
            __RPC__in __x_ABI_CLumia_CImaging_CAdjustments_CIRedEyeRemovalFilterFactory * This,
            /* [out] */ __RPC__deref_out_opt HSTRING *className);
        
        HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )( 
            __RPC__in __x_ABI_CLumia_CImaging_CAdjustments_CIRedEyeRemovalFilterFactory * This,
            /* [out] */ __RPC__out TrustLevel *trustLevel);
        
        HRESULT ( STDMETHODCALLTYPE *Create )( 
            __RPC__in __x_ABI_CLumia_CImaging_CAdjustments_CIRedEyeRemovalFilterFactory * This,
            /* [in] */ __RPC__in_opt __FIVectorView_1_Windows__CFoundation__CRect *eyeAreas,
            /* [out][retval] */ __RPC__deref_out_opt __x_ABI_CLumia_CImaging_CAdjustments_CIRedEyeRemovalFilter **__returnValue);
        
        HRESULT ( STDMETHODCALLTYPE *CreateWithRemovalMode )( 
            __RPC__in __x_ABI_CLumia_CImaging_CAdjustments_CIRedEyeRemovalFilterFactory * This,
            /* [in] */ __RPC__in_opt __FIVectorView_1_Windows__CFoundation__CRect *eyeAreas,
            /* [in] */ __x_ABI_CLumia_CImaging_CAdjustments_CRedEyeRemovalMode mode,
            /* [out][retval] */ __RPC__deref_out_opt __x_ABI_CLumia_CImaging_CAdjustments_CIRedEyeRemovalFilter **__returnValue);
        
        END_INTERFACE
    } __x_ABI_CLumia_CImaging_CAdjustments_CIRedEyeRemovalFilterFactoryVtbl;

    interface __x_ABI_CLumia_CImaging_CAdjustments_CIRedEyeRemovalFilterFactory
    {
        CONST_VTBL struct __x_ABI_CLumia_CImaging_CAdjustments_CIRedEyeRemovalFilterFactoryVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define __x_ABI_CLumia_CImaging_CAdjustments_CIRedEyeRemovalFilterFactory_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __x_ABI_CLumia_CImaging_CAdjustments_CIRedEyeRemovalFilterFactory_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __x_ABI_CLumia_CImaging_CAdjustments_CIRedEyeRemovalFilterFactory_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __x_ABI_CLumia_CImaging_CAdjustments_CIRedEyeRemovalFilterFactory_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 

#define __x_ABI_CLumia_CImaging_CAdjustments_CIRedEyeRemovalFilterFactory_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 

#define __x_ABI_CLumia_CImaging_CAdjustments_CIRedEyeRemovalFilterFactory_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 


#define __x_ABI_CLumia_CImaging_CAdjustments_CIRedEyeRemovalFilterFactory_Create(This,eyeAreas,__returnValue)	\
    ( (This)->lpVtbl -> Create(This,eyeAreas,__returnValue) ) 

#define __x_ABI_CLumia_CImaging_CAdjustments_CIRedEyeRemovalFilterFactory_CreateWithRemovalMode(This,eyeAreas,mode,__returnValue)	\
    ( (This)->lpVtbl -> CreateWithRemovalMode(This,eyeAreas,mode,__returnValue) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* ____x_ABI_CLumia_CImaging_CAdjustments_CIRedEyeRemovalFilterFactory_INTERFACE_DEFINED__ */


/* interface __MIDL_itf_Lumia2EImaging2EAdjustments_0000_0099 */
/* [local] */ 

#if !defined(____x_ABI_CLumia_CImaging_CAdjustments_CISaturationLightnessFilter_INTERFACE_DEFINED__)
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Lumia_Imaging_Adjustments_ISaturationLightnessFilter[] = L"Lumia.Imaging.Adjustments.ISaturationLightnessFilter";
#endif /* !defined(____x_ABI_CLumia_CImaging_CAdjustments_CISaturationLightnessFilter_INTERFACE_DEFINED__) */


/* interface __MIDL_itf_Lumia2EImaging2EAdjustments_0000_0099 */
/* [local] */ 



extern RPC_IF_HANDLE __MIDL_itf_Lumia2EImaging2EAdjustments_0000_0099_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_Lumia2EImaging2EAdjustments_0000_0099_v0_0_s_ifspec;

#ifndef ____x_ABI_CLumia_CImaging_CAdjustments_CISaturationLightnessFilter_INTERFACE_DEFINED__
#define ____x_ABI_CLumia_CImaging_CAdjustments_CISaturationLightnessFilter_INTERFACE_DEFINED__

/* interface __x_ABI_CLumia_CImaging_CAdjustments_CISaturationLightnessFilter */
/* [uuid][object] */ 



/* interface ABI::Lumia::Imaging::Adjustments::ISaturationLightnessFilter */
/* [uuid][object] */ 


EXTERN_C const IID IID___x_ABI_CLumia_CImaging_CAdjustments_CISaturationLightnessFilter;

#if defined(__cplusplus) && !defined(CINTERFACE)
    } /* end extern "C" */
    namespace ABI {
        namespace Lumia {
            namespace Imaging {
                namespace Adjustments {
                    
                    MIDL_INTERFACE("8D214D1E-2DBC-3A2F-858D-498C7E4A76F5")
                    ISaturationLightnessFilter : public IInspectable
                    {
                    public:
                        virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_SaturationCurve( 
                            /* [out][retval] */ __RPC__deref_out_opt ABI::Lumia::Imaging::Adjustments::ICurve **__returnValue) = 0;
                        
                        virtual /* [propput] */ HRESULT STDMETHODCALLTYPE put_SaturationCurve( 
                            /* [in] */ __RPC__in_opt ABI::Lumia::Imaging::Adjustments::ICurve *value) = 0;
                        
                        virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_LightnessCurve( 
                            /* [out][retval] */ __RPC__deref_out_opt ABI::Lumia::Imaging::Adjustments::ICurve **__returnValue) = 0;
                        
                        virtual /* [propput] */ HRESULT STDMETHODCALLTYPE put_LightnessCurve( 
                            /* [in] */ __RPC__in_opt ABI::Lumia::Imaging::Adjustments::ICurve *value) = 0;
                        
                    };

                    extern const __declspec(selectany) IID & IID_ISaturationLightnessFilter = __uuidof(ISaturationLightnessFilter);

                    
                }  /* end namespace */
            }  /* end namespace */
        }  /* end namespace */
    }  /* end namespace */
    extern "C" { 
    
#else 	/* C style interface */

    typedef struct __x_ABI_CLumia_CImaging_CAdjustments_CISaturationLightnessFilterVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            __RPC__in __x_ABI_CLumia_CImaging_CAdjustments_CISaturationLightnessFilter * This,
            /* [in] */ __RPC__in REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            __RPC__in __x_ABI_CLumia_CImaging_CAdjustments_CISaturationLightnessFilter * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            __RPC__in __x_ABI_CLumia_CImaging_CAdjustments_CISaturationLightnessFilter * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetIids )( 
            __RPC__in __x_ABI_CLumia_CImaging_CAdjustments_CISaturationLightnessFilter * This,
            /* [out] */ __RPC__out ULONG *iidCount,
            /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
        
        HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )( 
            __RPC__in __x_ABI_CLumia_CImaging_CAdjustments_CISaturationLightnessFilter * This,
            /* [out] */ __RPC__deref_out_opt HSTRING *className);
        
        HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )( 
            __RPC__in __x_ABI_CLumia_CImaging_CAdjustments_CISaturationLightnessFilter * This,
            /* [out] */ __RPC__out TrustLevel *trustLevel);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_SaturationCurve )( 
            __RPC__in __x_ABI_CLumia_CImaging_CAdjustments_CISaturationLightnessFilter * This,
            /* [out][retval] */ __RPC__deref_out_opt __x_ABI_CLumia_CImaging_CAdjustments_CICurve **__returnValue);
        
        /* [propput] */ HRESULT ( STDMETHODCALLTYPE *put_SaturationCurve )( 
            __RPC__in __x_ABI_CLumia_CImaging_CAdjustments_CISaturationLightnessFilter * This,
            /* [in] */ __RPC__in_opt __x_ABI_CLumia_CImaging_CAdjustments_CICurve *value);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_LightnessCurve )( 
            __RPC__in __x_ABI_CLumia_CImaging_CAdjustments_CISaturationLightnessFilter * This,
            /* [out][retval] */ __RPC__deref_out_opt __x_ABI_CLumia_CImaging_CAdjustments_CICurve **__returnValue);
        
        /* [propput] */ HRESULT ( STDMETHODCALLTYPE *put_LightnessCurve )( 
            __RPC__in __x_ABI_CLumia_CImaging_CAdjustments_CISaturationLightnessFilter * This,
            /* [in] */ __RPC__in_opt __x_ABI_CLumia_CImaging_CAdjustments_CICurve *value);
        
        END_INTERFACE
    } __x_ABI_CLumia_CImaging_CAdjustments_CISaturationLightnessFilterVtbl;

    interface __x_ABI_CLumia_CImaging_CAdjustments_CISaturationLightnessFilter
    {
        CONST_VTBL struct __x_ABI_CLumia_CImaging_CAdjustments_CISaturationLightnessFilterVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define __x_ABI_CLumia_CImaging_CAdjustments_CISaturationLightnessFilter_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __x_ABI_CLumia_CImaging_CAdjustments_CISaturationLightnessFilter_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __x_ABI_CLumia_CImaging_CAdjustments_CISaturationLightnessFilter_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __x_ABI_CLumia_CImaging_CAdjustments_CISaturationLightnessFilter_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 

#define __x_ABI_CLumia_CImaging_CAdjustments_CISaturationLightnessFilter_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 

#define __x_ABI_CLumia_CImaging_CAdjustments_CISaturationLightnessFilter_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 


#define __x_ABI_CLumia_CImaging_CAdjustments_CISaturationLightnessFilter_get_SaturationCurve(This,__returnValue)	\
    ( (This)->lpVtbl -> get_SaturationCurve(This,__returnValue) ) 

#define __x_ABI_CLumia_CImaging_CAdjustments_CISaturationLightnessFilter_put_SaturationCurve(This,value)	\
    ( (This)->lpVtbl -> put_SaturationCurve(This,value) ) 

#define __x_ABI_CLumia_CImaging_CAdjustments_CISaturationLightnessFilter_get_LightnessCurve(This,__returnValue)	\
    ( (This)->lpVtbl -> get_LightnessCurve(This,__returnValue) ) 

#define __x_ABI_CLumia_CImaging_CAdjustments_CISaturationLightnessFilter_put_LightnessCurve(This,value)	\
    ( (This)->lpVtbl -> put_LightnessCurve(This,value) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* ____x_ABI_CLumia_CImaging_CAdjustments_CISaturationLightnessFilter_INTERFACE_DEFINED__ */


/* interface __MIDL_itf_Lumia2EImaging2EAdjustments_0000_0100 */
/* [local] */ 

#if !defined(____x_ABI_CLumia_CImaging_CAdjustments_CISaturationLightnessFilterFactory_INTERFACE_DEFINED__)
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Lumia_Imaging_Adjustments_ISaturationLightnessFilterFactory[] = L"Lumia.Imaging.Adjustments.ISaturationLightnessFilterFactory";
#endif /* !defined(____x_ABI_CLumia_CImaging_CAdjustments_CISaturationLightnessFilterFactory_INTERFACE_DEFINED__) */


/* interface __MIDL_itf_Lumia2EImaging2EAdjustments_0000_0100 */
/* [local] */ 



extern RPC_IF_HANDLE __MIDL_itf_Lumia2EImaging2EAdjustments_0000_0100_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_Lumia2EImaging2EAdjustments_0000_0100_v0_0_s_ifspec;

#ifndef ____x_ABI_CLumia_CImaging_CAdjustments_CISaturationLightnessFilterFactory_INTERFACE_DEFINED__
#define ____x_ABI_CLumia_CImaging_CAdjustments_CISaturationLightnessFilterFactory_INTERFACE_DEFINED__

/* interface __x_ABI_CLumia_CImaging_CAdjustments_CISaturationLightnessFilterFactory */
/* [uuid][object] */ 



/* interface ABI::Lumia::Imaging::Adjustments::ISaturationLightnessFilterFactory */
/* [uuid][object] */ 


EXTERN_C const IID IID___x_ABI_CLumia_CImaging_CAdjustments_CISaturationLightnessFilterFactory;

#if defined(__cplusplus) && !defined(CINTERFACE)
    } /* end extern "C" */
    namespace ABI {
        namespace Lumia {
            namespace Imaging {
                namespace Adjustments {
                    
                    MIDL_INTERFACE("076CDEA9-BE0B-3101-ADBA-A0702C809083")
                    ISaturationLightnessFilterFactory : public IInspectable
                    {
                    public:
                        virtual HRESULT STDMETHODCALLTYPE Create( 
                            /* [in] */ __RPC__in_opt ABI::Lumia::Imaging::Adjustments::ICurve *saturationCurve,
                            /* [in] */ __RPC__in_opt ABI::Lumia::Imaging::Adjustments::ICurve *lightnessCurve,
                            /* [out][retval] */ __RPC__deref_out_opt ABI::Lumia::Imaging::Adjustments::ISaturationLightnessFilter **__returnValue) = 0;
                        
                    };

                    extern const __declspec(selectany) IID & IID_ISaturationLightnessFilterFactory = __uuidof(ISaturationLightnessFilterFactory);

                    
                }  /* end namespace */
            }  /* end namespace */
        }  /* end namespace */
    }  /* end namespace */
    extern "C" { 
    
#else 	/* C style interface */

    typedef struct __x_ABI_CLumia_CImaging_CAdjustments_CISaturationLightnessFilterFactoryVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            __RPC__in __x_ABI_CLumia_CImaging_CAdjustments_CISaturationLightnessFilterFactory * This,
            /* [in] */ __RPC__in REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            __RPC__in __x_ABI_CLumia_CImaging_CAdjustments_CISaturationLightnessFilterFactory * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            __RPC__in __x_ABI_CLumia_CImaging_CAdjustments_CISaturationLightnessFilterFactory * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetIids )( 
            __RPC__in __x_ABI_CLumia_CImaging_CAdjustments_CISaturationLightnessFilterFactory * This,
            /* [out] */ __RPC__out ULONG *iidCount,
            /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
        
        HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )( 
            __RPC__in __x_ABI_CLumia_CImaging_CAdjustments_CISaturationLightnessFilterFactory * This,
            /* [out] */ __RPC__deref_out_opt HSTRING *className);
        
        HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )( 
            __RPC__in __x_ABI_CLumia_CImaging_CAdjustments_CISaturationLightnessFilterFactory * This,
            /* [out] */ __RPC__out TrustLevel *trustLevel);
        
        HRESULT ( STDMETHODCALLTYPE *Create )( 
            __RPC__in __x_ABI_CLumia_CImaging_CAdjustments_CISaturationLightnessFilterFactory * This,
            /* [in] */ __RPC__in_opt __x_ABI_CLumia_CImaging_CAdjustments_CICurve *saturationCurve,
            /* [in] */ __RPC__in_opt __x_ABI_CLumia_CImaging_CAdjustments_CICurve *lightnessCurve,
            /* [out][retval] */ __RPC__deref_out_opt __x_ABI_CLumia_CImaging_CAdjustments_CISaturationLightnessFilter **__returnValue);
        
        END_INTERFACE
    } __x_ABI_CLumia_CImaging_CAdjustments_CISaturationLightnessFilterFactoryVtbl;

    interface __x_ABI_CLumia_CImaging_CAdjustments_CISaturationLightnessFilterFactory
    {
        CONST_VTBL struct __x_ABI_CLumia_CImaging_CAdjustments_CISaturationLightnessFilterFactoryVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define __x_ABI_CLumia_CImaging_CAdjustments_CISaturationLightnessFilterFactory_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __x_ABI_CLumia_CImaging_CAdjustments_CISaturationLightnessFilterFactory_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __x_ABI_CLumia_CImaging_CAdjustments_CISaturationLightnessFilterFactory_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __x_ABI_CLumia_CImaging_CAdjustments_CISaturationLightnessFilterFactory_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 

#define __x_ABI_CLumia_CImaging_CAdjustments_CISaturationLightnessFilterFactory_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 

#define __x_ABI_CLumia_CImaging_CAdjustments_CISaturationLightnessFilterFactory_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 


#define __x_ABI_CLumia_CImaging_CAdjustments_CISaturationLightnessFilterFactory_Create(This,saturationCurve,lightnessCurve,__returnValue)	\
    ( (This)->lpVtbl -> Create(This,saturationCurve,lightnessCurve,__returnValue) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* ____x_ABI_CLumia_CImaging_CAdjustments_CISaturationLightnessFilterFactory_INTERFACE_DEFINED__ */


/* interface __MIDL_itf_Lumia2EImaging2EAdjustments_0000_0101 */
/* [local] */ 

#if !defined(____x_ABI_CLumia_CImaging_CAdjustments_CISharpnessFilter_INTERFACE_DEFINED__)
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Lumia_Imaging_Adjustments_ISharpnessFilter[] = L"Lumia.Imaging.Adjustments.ISharpnessFilter";
#endif /* !defined(____x_ABI_CLumia_CImaging_CAdjustments_CISharpnessFilter_INTERFACE_DEFINED__) */


/* interface __MIDL_itf_Lumia2EImaging2EAdjustments_0000_0101 */
/* [local] */ 



extern RPC_IF_HANDLE __MIDL_itf_Lumia2EImaging2EAdjustments_0000_0101_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_Lumia2EImaging2EAdjustments_0000_0101_v0_0_s_ifspec;

#ifndef ____x_ABI_CLumia_CImaging_CAdjustments_CISharpnessFilter_INTERFACE_DEFINED__
#define ____x_ABI_CLumia_CImaging_CAdjustments_CISharpnessFilter_INTERFACE_DEFINED__

/* interface __x_ABI_CLumia_CImaging_CAdjustments_CISharpnessFilter */
/* [uuid][object] */ 



/* interface ABI::Lumia::Imaging::Adjustments::ISharpnessFilter */
/* [uuid][object] */ 


EXTERN_C const IID IID___x_ABI_CLumia_CImaging_CAdjustments_CISharpnessFilter;

#if defined(__cplusplus) && !defined(CINTERFACE)
    } /* end extern "C" */
    namespace ABI {
        namespace Lumia {
            namespace Imaging {
                namespace Adjustments {
                    
                    MIDL_INTERFACE("CE6CDBD7-61C7-3B57-A346-B21363B803DC")
                    ISharpnessFilter : public IInspectable
                    {
                    public:
                        virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_Level( 
                            /* [out][retval] */ __RPC__out DOUBLE *__returnValue) = 0;
                        
                        virtual /* [propput] */ HRESULT STDMETHODCALLTYPE put_Level( 
                            /* [in] */ DOUBLE value) = 0;
                        
                    };

                    extern const __declspec(selectany) IID & IID_ISharpnessFilter = __uuidof(ISharpnessFilter);

                    
                }  /* end namespace */
            }  /* end namespace */
        }  /* end namespace */
    }  /* end namespace */
    extern "C" { 
    
#else 	/* C style interface */

    typedef struct __x_ABI_CLumia_CImaging_CAdjustments_CISharpnessFilterVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            __RPC__in __x_ABI_CLumia_CImaging_CAdjustments_CISharpnessFilter * This,
            /* [in] */ __RPC__in REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            __RPC__in __x_ABI_CLumia_CImaging_CAdjustments_CISharpnessFilter * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            __RPC__in __x_ABI_CLumia_CImaging_CAdjustments_CISharpnessFilter * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetIids )( 
            __RPC__in __x_ABI_CLumia_CImaging_CAdjustments_CISharpnessFilter * This,
            /* [out] */ __RPC__out ULONG *iidCount,
            /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
        
        HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )( 
            __RPC__in __x_ABI_CLumia_CImaging_CAdjustments_CISharpnessFilter * This,
            /* [out] */ __RPC__deref_out_opt HSTRING *className);
        
        HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )( 
            __RPC__in __x_ABI_CLumia_CImaging_CAdjustments_CISharpnessFilter * This,
            /* [out] */ __RPC__out TrustLevel *trustLevel);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_Level )( 
            __RPC__in __x_ABI_CLumia_CImaging_CAdjustments_CISharpnessFilter * This,
            /* [out][retval] */ __RPC__out DOUBLE *__returnValue);
        
        /* [propput] */ HRESULT ( STDMETHODCALLTYPE *put_Level )( 
            __RPC__in __x_ABI_CLumia_CImaging_CAdjustments_CISharpnessFilter * This,
            /* [in] */ DOUBLE value);
        
        END_INTERFACE
    } __x_ABI_CLumia_CImaging_CAdjustments_CISharpnessFilterVtbl;

    interface __x_ABI_CLumia_CImaging_CAdjustments_CISharpnessFilter
    {
        CONST_VTBL struct __x_ABI_CLumia_CImaging_CAdjustments_CISharpnessFilterVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define __x_ABI_CLumia_CImaging_CAdjustments_CISharpnessFilter_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __x_ABI_CLumia_CImaging_CAdjustments_CISharpnessFilter_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __x_ABI_CLumia_CImaging_CAdjustments_CISharpnessFilter_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __x_ABI_CLumia_CImaging_CAdjustments_CISharpnessFilter_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 

#define __x_ABI_CLumia_CImaging_CAdjustments_CISharpnessFilter_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 

#define __x_ABI_CLumia_CImaging_CAdjustments_CISharpnessFilter_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 


#define __x_ABI_CLumia_CImaging_CAdjustments_CISharpnessFilter_get_Level(This,__returnValue)	\
    ( (This)->lpVtbl -> get_Level(This,__returnValue) ) 

#define __x_ABI_CLumia_CImaging_CAdjustments_CISharpnessFilter_put_Level(This,value)	\
    ( (This)->lpVtbl -> put_Level(This,value) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* ____x_ABI_CLumia_CImaging_CAdjustments_CISharpnessFilter_INTERFACE_DEFINED__ */


/* interface __MIDL_itf_Lumia2EImaging2EAdjustments_0000_0102 */
/* [local] */ 

#if !defined(____x_ABI_CLumia_CImaging_CAdjustments_CISharpnessFilterFactory_INTERFACE_DEFINED__)
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Lumia_Imaging_Adjustments_ISharpnessFilterFactory[] = L"Lumia.Imaging.Adjustments.ISharpnessFilterFactory";
#endif /* !defined(____x_ABI_CLumia_CImaging_CAdjustments_CISharpnessFilterFactory_INTERFACE_DEFINED__) */


/* interface __MIDL_itf_Lumia2EImaging2EAdjustments_0000_0102 */
/* [local] */ 



extern RPC_IF_HANDLE __MIDL_itf_Lumia2EImaging2EAdjustments_0000_0102_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_Lumia2EImaging2EAdjustments_0000_0102_v0_0_s_ifspec;

#ifndef ____x_ABI_CLumia_CImaging_CAdjustments_CISharpnessFilterFactory_INTERFACE_DEFINED__
#define ____x_ABI_CLumia_CImaging_CAdjustments_CISharpnessFilterFactory_INTERFACE_DEFINED__

/* interface __x_ABI_CLumia_CImaging_CAdjustments_CISharpnessFilterFactory */
/* [uuid][object] */ 



/* interface ABI::Lumia::Imaging::Adjustments::ISharpnessFilterFactory */
/* [uuid][object] */ 


EXTERN_C const IID IID___x_ABI_CLumia_CImaging_CAdjustments_CISharpnessFilterFactory;

#if defined(__cplusplus) && !defined(CINTERFACE)
    } /* end extern "C" */
    namespace ABI {
        namespace Lumia {
            namespace Imaging {
                namespace Adjustments {
                    
                    MIDL_INTERFACE("69FC8745-85B5-3D88-B87C-E8CED11F18A6")
                    ISharpnessFilterFactory : public IInspectable
                    {
                    public:
                        virtual HRESULT STDMETHODCALLTYPE CreateWithLevel( 
                            /* [in] */ DOUBLE level,
                            /* [out][retval] */ __RPC__deref_out_opt ABI::Lumia::Imaging::Adjustments::ISharpnessFilter **__returnValue) = 0;
                        
                    };

                    extern const __declspec(selectany) IID & IID_ISharpnessFilterFactory = __uuidof(ISharpnessFilterFactory);

                    
                }  /* end namespace */
            }  /* end namespace */
        }  /* end namespace */
    }  /* end namespace */
    extern "C" { 
    
#else 	/* C style interface */

    typedef struct __x_ABI_CLumia_CImaging_CAdjustments_CISharpnessFilterFactoryVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            __RPC__in __x_ABI_CLumia_CImaging_CAdjustments_CISharpnessFilterFactory * This,
            /* [in] */ __RPC__in REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            __RPC__in __x_ABI_CLumia_CImaging_CAdjustments_CISharpnessFilterFactory * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            __RPC__in __x_ABI_CLumia_CImaging_CAdjustments_CISharpnessFilterFactory * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetIids )( 
            __RPC__in __x_ABI_CLumia_CImaging_CAdjustments_CISharpnessFilterFactory * This,
            /* [out] */ __RPC__out ULONG *iidCount,
            /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
        
        HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )( 
            __RPC__in __x_ABI_CLumia_CImaging_CAdjustments_CISharpnessFilterFactory * This,
            /* [out] */ __RPC__deref_out_opt HSTRING *className);
        
        HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )( 
            __RPC__in __x_ABI_CLumia_CImaging_CAdjustments_CISharpnessFilterFactory * This,
            /* [out] */ __RPC__out TrustLevel *trustLevel);
        
        HRESULT ( STDMETHODCALLTYPE *CreateWithLevel )( 
            __RPC__in __x_ABI_CLumia_CImaging_CAdjustments_CISharpnessFilterFactory * This,
            /* [in] */ DOUBLE level,
            /* [out][retval] */ __RPC__deref_out_opt __x_ABI_CLumia_CImaging_CAdjustments_CISharpnessFilter **__returnValue);
        
        END_INTERFACE
    } __x_ABI_CLumia_CImaging_CAdjustments_CISharpnessFilterFactoryVtbl;

    interface __x_ABI_CLumia_CImaging_CAdjustments_CISharpnessFilterFactory
    {
        CONST_VTBL struct __x_ABI_CLumia_CImaging_CAdjustments_CISharpnessFilterFactoryVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define __x_ABI_CLumia_CImaging_CAdjustments_CISharpnessFilterFactory_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __x_ABI_CLumia_CImaging_CAdjustments_CISharpnessFilterFactory_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __x_ABI_CLumia_CImaging_CAdjustments_CISharpnessFilterFactory_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __x_ABI_CLumia_CImaging_CAdjustments_CISharpnessFilterFactory_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 

#define __x_ABI_CLumia_CImaging_CAdjustments_CISharpnessFilterFactory_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 

#define __x_ABI_CLumia_CImaging_CAdjustments_CISharpnessFilterFactory_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 


#define __x_ABI_CLumia_CImaging_CAdjustments_CISharpnessFilterFactory_CreateWithLevel(This,level,__returnValue)	\
    ( (This)->lpVtbl -> CreateWithLevel(This,level,__returnValue) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* ____x_ABI_CLumia_CImaging_CAdjustments_CISharpnessFilterFactory_INTERFACE_DEFINED__ */


/* interface __MIDL_itf_Lumia2EImaging2EAdjustments_0000_0103 */
/* [local] */ 

#if !defined(____x_ABI_CLumia_CImaging_CAdjustments_CIRgbMixerFilter_INTERFACE_DEFINED__)
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Lumia_Imaging_Adjustments_IRgbMixerFilter[] = L"Lumia.Imaging.Adjustments.IRgbMixerFilter";
#endif /* !defined(____x_ABI_CLumia_CImaging_CAdjustments_CIRgbMixerFilter_INTERFACE_DEFINED__) */


/* interface __MIDL_itf_Lumia2EImaging2EAdjustments_0000_0103 */
/* [local] */ 



extern RPC_IF_HANDLE __MIDL_itf_Lumia2EImaging2EAdjustments_0000_0103_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_Lumia2EImaging2EAdjustments_0000_0103_v0_0_s_ifspec;

#ifndef ____x_ABI_CLumia_CImaging_CAdjustments_CIRgbMixerFilter_INTERFACE_DEFINED__
#define ____x_ABI_CLumia_CImaging_CAdjustments_CIRgbMixerFilter_INTERFACE_DEFINED__

/* interface __x_ABI_CLumia_CImaging_CAdjustments_CIRgbMixerFilter */
/* [uuid][object] */ 



/* interface ABI::Lumia::Imaging::Adjustments::IRgbMixerFilter */
/* [uuid][object] */ 


EXTERN_C const IID IID___x_ABI_CLumia_CImaging_CAdjustments_CIRgbMixerFilter;

#if defined(__cplusplus) && !defined(CINTERFACE)
    } /* end extern "C" */
    namespace ABI {
        namespace Lumia {
            namespace Imaging {
                namespace Adjustments {
                    
                    MIDL_INTERFACE("3232F785-E964-3AD1-A811-B02E90FBB803")
                    IRgbMixerFilter : public IInspectable
                    {
                    public:
                        virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_Alpha( 
                            /* [out][retval] */ __RPC__deref_out_opt ABI::Lumia::Imaging::Adjustments::IArgbColorCurves **__returnValue) = 0;
                        
                        virtual /* [propput] */ HRESULT STDMETHODCALLTYPE put_Alpha( 
                            /* [in] */ __RPC__in_opt ABI::Lumia::Imaging::Adjustments::IArgbColorCurves *value) = 0;
                        
                        virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_Red( 
                            /* [out][retval] */ __RPC__deref_out_opt ABI::Lumia::Imaging::Adjustments::IArgbColorCurves **__returnValue) = 0;
                        
                        virtual /* [propput] */ HRESULT STDMETHODCALLTYPE put_Red( 
                            /* [in] */ __RPC__in_opt ABI::Lumia::Imaging::Adjustments::IArgbColorCurves *value) = 0;
                        
                        virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_Green( 
                            /* [out][retval] */ __RPC__deref_out_opt ABI::Lumia::Imaging::Adjustments::IArgbColorCurves **__returnValue) = 0;
                        
                        virtual /* [propput] */ HRESULT STDMETHODCALLTYPE put_Green( 
                            /* [in] */ __RPC__in_opt ABI::Lumia::Imaging::Adjustments::IArgbColorCurves *value) = 0;
                        
                        virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_Blue( 
                            /* [out][retval] */ __RPC__deref_out_opt ABI::Lumia::Imaging::Adjustments::IArgbColorCurves **__returnValue) = 0;
                        
                        virtual /* [propput] */ HRESULT STDMETHODCALLTYPE put_Blue( 
                            /* [in] */ __RPC__in_opt ABI::Lumia::Imaging::Adjustments::IArgbColorCurves *value) = 0;
                        
                    };

                    extern const __declspec(selectany) IID & IID_IRgbMixerFilter = __uuidof(IRgbMixerFilter);

                    
                }  /* end namespace */
            }  /* end namespace */
        }  /* end namespace */
    }  /* end namespace */
    extern "C" { 
    
#else 	/* C style interface */

    typedef struct __x_ABI_CLumia_CImaging_CAdjustments_CIRgbMixerFilterVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            __RPC__in __x_ABI_CLumia_CImaging_CAdjustments_CIRgbMixerFilter * This,
            /* [in] */ __RPC__in REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            __RPC__in __x_ABI_CLumia_CImaging_CAdjustments_CIRgbMixerFilter * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            __RPC__in __x_ABI_CLumia_CImaging_CAdjustments_CIRgbMixerFilter * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetIids )( 
            __RPC__in __x_ABI_CLumia_CImaging_CAdjustments_CIRgbMixerFilter * This,
            /* [out] */ __RPC__out ULONG *iidCount,
            /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
        
        HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )( 
            __RPC__in __x_ABI_CLumia_CImaging_CAdjustments_CIRgbMixerFilter * This,
            /* [out] */ __RPC__deref_out_opt HSTRING *className);
        
        HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )( 
            __RPC__in __x_ABI_CLumia_CImaging_CAdjustments_CIRgbMixerFilter * This,
            /* [out] */ __RPC__out TrustLevel *trustLevel);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_Alpha )( 
            __RPC__in __x_ABI_CLumia_CImaging_CAdjustments_CIRgbMixerFilter * This,
            /* [out][retval] */ __RPC__deref_out_opt __x_ABI_CLumia_CImaging_CAdjustments_CIArgbColorCurves **__returnValue);
        
        /* [propput] */ HRESULT ( STDMETHODCALLTYPE *put_Alpha )( 
            __RPC__in __x_ABI_CLumia_CImaging_CAdjustments_CIRgbMixerFilter * This,
            /* [in] */ __RPC__in_opt __x_ABI_CLumia_CImaging_CAdjustments_CIArgbColorCurves *value);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_Red )( 
            __RPC__in __x_ABI_CLumia_CImaging_CAdjustments_CIRgbMixerFilter * This,
            /* [out][retval] */ __RPC__deref_out_opt __x_ABI_CLumia_CImaging_CAdjustments_CIArgbColorCurves **__returnValue);
        
        /* [propput] */ HRESULT ( STDMETHODCALLTYPE *put_Red )( 
            __RPC__in __x_ABI_CLumia_CImaging_CAdjustments_CIRgbMixerFilter * This,
            /* [in] */ __RPC__in_opt __x_ABI_CLumia_CImaging_CAdjustments_CIArgbColorCurves *value);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_Green )( 
            __RPC__in __x_ABI_CLumia_CImaging_CAdjustments_CIRgbMixerFilter * This,
            /* [out][retval] */ __RPC__deref_out_opt __x_ABI_CLumia_CImaging_CAdjustments_CIArgbColorCurves **__returnValue);
        
        /* [propput] */ HRESULT ( STDMETHODCALLTYPE *put_Green )( 
            __RPC__in __x_ABI_CLumia_CImaging_CAdjustments_CIRgbMixerFilter * This,
            /* [in] */ __RPC__in_opt __x_ABI_CLumia_CImaging_CAdjustments_CIArgbColorCurves *value);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_Blue )( 
            __RPC__in __x_ABI_CLumia_CImaging_CAdjustments_CIRgbMixerFilter * This,
            /* [out][retval] */ __RPC__deref_out_opt __x_ABI_CLumia_CImaging_CAdjustments_CIArgbColorCurves **__returnValue);
        
        /* [propput] */ HRESULT ( STDMETHODCALLTYPE *put_Blue )( 
            __RPC__in __x_ABI_CLumia_CImaging_CAdjustments_CIRgbMixerFilter * This,
            /* [in] */ __RPC__in_opt __x_ABI_CLumia_CImaging_CAdjustments_CIArgbColorCurves *value);
        
        END_INTERFACE
    } __x_ABI_CLumia_CImaging_CAdjustments_CIRgbMixerFilterVtbl;

    interface __x_ABI_CLumia_CImaging_CAdjustments_CIRgbMixerFilter
    {
        CONST_VTBL struct __x_ABI_CLumia_CImaging_CAdjustments_CIRgbMixerFilterVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define __x_ABI_CLumia_CImaging_CAdjustments_CIRgbMixerFilter_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __x_ABI_CLumia_CImaging_CAdjustments_CIRgbMixerFilter_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __x_ABI_CLumia_CImaging_CAdjustments_CIRgbMixerFilter_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __x_ABI_CLumia_CImaging_CAdjustments_CIRgbMixerFilter_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 

#define __x_ABI_CLumia_CImaging_CAdjustments_CIRgbMixerFilter_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 

#define __x_ABI_CLumia_CImaging_CAdjustments_CIRgbMixerFilter_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 


#define __x_ABI_CLumia_CImaging_CAdjustments_CIRgbMixerFilter_get_Alpha(This,__returnValue)	\
    ( (This)->lpVtbl -> get_Alpha(This,__returnValue) ) 

#define __x_ABI_CLumia_CImaging_CAdjustments_CIRgbMixerFilter_put_Alpha(This,value)	\
    ( (This)->lpVtbl -> put_Alpha(This,value) ) 

#define __x_ABI_CLumia_CImaging_CAdjustments_CIRgbMixerFilter_get_Red(This,__returnValue)	\
    ( (This)->lpVtbl -> get_Red(This,__returnValue) ) 

#define __x_ABI_CLumia_CImaging_CAdjustments_CIRgbMixerFilter_put_Red(This,value)	\
    ( (This)->lpVtbl -> put_Red(This,value) ) 

#define __x_ABI_CLumia_CImaging_CAdjustments_CIRgbMixerFilter_get_Green(This,__returnValue)	\
    ( (This)->lpVtbl -> get_Green(This,__returnValue) ) 

#define __x_ABI_CLumia_CImaging_CAdjustments_CIRgbMixerFilter_put_Green(This,value)	\
    ( (This)->lpVtbl -> put_Green(This,value) ) 

#define __x_ABI_CLumia_CImaging_CAdjustments_CIRgbMixerFilter_get_Blue(This,__returnValue)	\
    ( (This)->lpVtbl -> get_Blue(This,__returnValue) ) 

#define __x_ABI_CLumia_CImaging_CAdjustments_CIRgbMixerFilter_put_Blue(This,value)	\
    ( (This)->lpVtbl -> put_Blue(This,value) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* ____x_ABI_CLumia_CImaging_CAdjustments_CIRgbMixerFilter_INTERFACE_DEFINED__ */


/* interface __MIDL_itf_Lumia2EImaging2EAdjustments_0000_0104 */
/* [local] */ 

#if !defined(____x_ABI_CLumia_CImaging_CAdjustments_CITemperatureAndTintFilter_INTERFACE_DEFINED__)
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Lumia_Imaging_Adjustments_ITemperatureAndTintFilter[] = L"Lumia.Imaging.Adjustments.ITemperatureAndTintFilter";
#endif /* !defined(____x_ABI_CLumia_CImaging_CAdjustments_CITemperatureAndTintFilter_INTERFACE_DEFINED__) */


/* interface __MIDL_itf_Lumia2EImaging2EAdjustments_0000_0104 */
/* [local] */ 



extern RPC_IF_HANDLE __MIDL_itf_Lumia2EImaging2EAdjustments_0000_0104_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_Lumia2EImaging2EAdjustments_0000_0104_v0_0_s_ifspec;

#ifndef ____x_ABI_CLumia_CImaging_CAdjustments_CITemperatureAndTintFilter_INTERFACE_DEFINED__
#define ____x_ABI_CLumia_CImaging_CAdjustments_CITemperatureAndTintFilter_INTERFACE_DEFINED__

/* interface __x_ABI_CLumia_CImaging_CAdjustments_CITemperatureAndTintFilter */
/* [uuid][object] */ 



/* interface ABI::Lumia::Imaging::Adjustments::ITemperatureAndTintFilter */
/* [uuid][object] */ 


EXTERN_C const IID IID___x_ABI_CLumia_CImaging_CAdjustments_CITemperatureAndTintFilter;

#if defined(__cplusplus) && !defined(CINTERFACE)
    } /* end extern "C" */
    namespace ABI {
        namespace Lumia {
            namespace Imaging {
                namespace Adjustments {
                    
                    MIDL_INTERFACE("2A5D450A-42F4-3762-B190-D0CF0C02D3B7")
                    ITemperatureAndTintFilter : public IInspectable
                    {
                    public:
                        virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_Temperature( 
                            /* [out][retval] */ __RPC__out DOUBLE *__returnValue) = 0;
                        
                        virtual /* [propput] */ HRESULT STDMETHODCALLTYPE put_Temperature( 
                            /* [in] */ DOUBLE value) = 0;
                        
                        virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_Tint( 
                            /* [out][retval] */ __RPC__out DOUBLE *__returnValue) = 0;
                        
                        virtual /* [propput] */ HRESULT STDMETHODCALLTYPE put_Tint( 
                            /* [in] */ DOUBLE value) = 0;
                        
                    };

                    extern const __declspec(selectany) IID & IID_ITemperatureAndTintFilter = __uuidof(ITemperatureAndTintFilter);

                    
                }  /* end namespace */
            }  /* end namespace */
        }  /* end namespace */
    }  /* end namespace */
    extern "C" { 
    
#else 	/* C style interface */

    typedef struct __x_ABI_CLumia_CImaging_CAdjustments_CITemperatureAndTintFilterVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            __RPC__in __x_ABI_CLumia_CImaging_CAdjustments_CITemperatureAndTintFilter * This,
            /* [in] */ __RPC__in REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            __RPC__in __x_ABI_CLumia_CImaging_CAdjustments_CITemperatureAndTintFilter * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            __RPC__in __x_ABI_CLumia_CImaging_CAdjustments_CITemperatureAndTintFilter * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetIids )( 
            __RPC__in __x_ABI_CLumia_CImaging_CAdjustments_CITemperatureAndTintFilter * This,
            /* [out] */ __RPC__out ULONG *iidCount,
            /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
        
        HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )( 
            __RPC__in __x_ABI_CLumia_CImaging_CAdjustments_CITemperatureAndTintFilter * This,
            /* [out] */ __RPC__deref_out_opt HSTRING *className);
        
        HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )( 
            __RPC__in __x_ABI_CLumia_CImaging_CAdjustments_CITemperatureAndTintFilter * This,
            /* [out] */ __RPC__out TrustLevel *trustLevel);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_Temperature )( 
            __RPC__in __x_ABI_CLumia_CImaging_CAdjustments_CITemperatureAndTintFilter * This,
            /* [out][retval] */ __RPC__out DOUBLE *__returnValue);
        
        /* [propput] */ HRESULT ( STDMETHODCALLTYPE *put_Temperature )( 
            __RPC__in __x_ABI_CLumia_CImaging_CAdjustments_CITemperatureAndTintFilter * This,
            /* [in] */ DOUBLE value);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_Tint )( 
            __RPC__in __x_ABI_CLumia_CImaging_CAdjustments_CITemperatureAndTintFilter * This,
            /* [out][retval] */ __RPC__out DOUBLE *__returnValue);
        
        /* [propput] */ HRESULT ( STDMETHODCALLTYPE *put_Tint )( 
            __RPC__in __x_ABI_CLumia_CImaging_CAdjustments_CITemperatureAndTintFilter * This,
            /* [in] */ DOUBLE value);
        
        END_INTERFACE
    } __x_ABI_CLumia_CImaging_CAdjustments_CITemperatureAndTintFilterVtbl;

    interface __x_ABI_CLumia_CImaging_CAdjustments_CITemperatureAndTintFilter
    {
        CONST_VTBL struct __x_ABI_CLumia_CImaging_CAdjustments_CITemperatureAndTintFilterVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define __x_ABI_CLumia_CImaging_CAdjustments_CITemperatureAndTintFilter_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __x_ABI_CLumia_CImaging_CAdjustments_CITemperatureAndTintFilter_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __x_ABI_CLumia_CImaging_CAdjustments_CITemperatureAndTintFilter_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __x_ABI_CLumia_CImaging_CAdjustments_CITemperatureAndTintFilter_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 

#define __x_ABI_CLumia_CImaging_CAdjustments_CITemperatureAndTintFilter_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 

#define __x_ABI_CLumia_CImaging_CAdjustments_CITemperatureAndTintFilter_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 


#define __x_ABI_CLumia_CImaging_CAdjustments_CITemperatureAndTintFilter_get_Temperature(This,__returnValue)	\
    ( (This)->lpVtbl -> get_Temperature(This,__returnValue) ) 

#define __x_ABI_CLumia_CImaging_CAdjustments_CITemperatureAndTintFilter_put_Temperature(This,value)	\
    ( (This)->lpVtbl -> put_Temperature(This,value) ) 

#define __x_ABI_CLumia_CImaging_CAdjustments_CITemperatureAndTintFilter_get_Tint(This,__returnValue)	\
    ( (This)->lpVtbl -> get_Tint(This,__returnValue) ) 

#define __x_ABI_CLumia_CImaging_CAdjustments_CITemperatureAndTintFilter_put_Tint(This,value)	\
    ( (This)->lpVtbl -> put_Tint(This,value) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* ____x_ABI_CLumia_CImaging_CAdjustments_CITemperatureAndTintFilter_INTERFACE_DEFINED__ */


/* interface __MIDL_itf_Lumia2EImaging2EAdjustments_0000_0105 */
/* [local] */ 

#if !defined(____x_ABI_CLumia_CImaging_CAdjustments_CITemperatureAndTintFilterFactory_INTERFACE_DEFINED__)
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Lumia_Imaging_Adjustments_ITemperatureAndTintFilterFactory[] = L"Lumia.Imaging.Adjustments.ITemperatureAndTintFilterFactory";
#endif /* !defined(____x_ABI_CLumia_CImaging_CAdjustments_CITemperatureAndTintFilterFactory_INTERFACE_DEFINED__) */


/* interface __MIDL_itf_Lumia2EImaging2EAdjustments_0000_0105 */
/* [local] */ 



extern RPC_IF_HANDLE __MIDL_itf_Lumia2EImaging2EAdjustments_0000_0105_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_Lumia2EImaging2EAdjustments_0000_0105_v0_0_s_ifspec;

#ifndef ____x_ABI_CLumia_CImaging_CAdjustments_CITemperatureAndTintFilterFactory_INTERFACE_DEFINED__
#define ____x_ABI_CLumia_CImaging_CAdjustments_CITemperatureAndTintFilterFactory_INTERFACE_DEFINED__

/* interface __x_ABI_CLumia_CImaging_CAdjustments_CITemperatureAndTintFilterFactory */
/* [uuid][object] */ 



/* interface ABI::Lumia::Imaging::Adjustments::ITemperatureAndTintFilterFactory */
/* [uuid][object] */ 


EXTERN_C const IID IID___x_ABI_CLumia_CImaging_CAdjustments_CITemperatureAndTintFilterFactory;

#if defined(__cplusplus) && !defined(CINTERFACE)
    } /* end extern "C" */
    namespace ABI {
        namespace Lumia {
            namespace Imaging {
                namespace Adjustments {
                    
                    MIDL_INTERFACE("0F9EB73F-3EE5-3995-87CB-3D9106E2D567")
                    ITemperatureAndTintFilterFactory : public IInspectable
                    {
                    public:
                        virtual HRESULT STDMETHODCALLTYPE CreateWithAdjustments( 
                            /* [in] */ DOUBLE temperature,
                            /* [in] */ DOUBLE tint,
                            /* [out][retval] */ __RPC__deref_out_opt ABI::Lumia::Imaging::Adjustments::ITemperatureAndTintFilter **__returnValue) = 0;
                        
                    };

                    extern const __declspec(selectany) IID & IID_ITemperatureAndTintFilterFactory = __uuidof(ITemperatureAndTintFilterFactory);

                    
                }  /* end namespace */
            }  /* end namespace */
        }  /* end namespace */
    }  /* end namespace */
    extern "C" { 
    
#else 	/* C style interface */

    typedef struct __x_ABI_CLumia_CImaging_CAdjustments_CITemperatureAndTintFilterFactoryVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            __RPC__in __x_ABI_CLumia_CImaging_CAdjustments_CITemperatureAndTintFilterFactory * This,
            /* [in] */ __RPC__in REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            __RPC__in __x_ABI_CLumia_CImaging_CAdjustments_CITemperatureAndTintFilterFactory * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            __RPC__in __x_ABI_CLumia_CImaging_CAdjustments_CITemperatureAndTintFilterFactory * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetIids )( 
            __RPC__in __x_ABI_CLumia_CImaging_CAdjustments_CITemperatureAndTintFilterFactory * This,
            /* [out] */ __RPC__out ULONG *iidCount,
            /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
        
        HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )( 
            __RPC__in __x_ABI_CLumia_CImaging_CAdjustments_CITemperatureAndTintFilterFactory * This,
            /* [out] */ __RPC__deref_out_opt HSTRING *className);
        
        HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )( 
            __RPC__in __x_ABI_CLumia_CImaging_CAdjustments_CITemperatureAndTintFilterFactory * This,
            /* [out] */ __RPC__out TrustLevel *trustLevel);
        
        HRESULT ( STDMETHODCALLTYPE *CreateWithAdjustments )( 
            __RPC__in __x_ABI_CLumia_CImaging_CAdjustments_CITemperatureAndTintFilterFactory * This,
            /* [in] */ DOUBLE temperature,
            /* [in] */ DOUBLE tint,
            /* [out][retval] */ __RPC__deref_out_opt __x_ABI_CLumia_CImaging_CAdjustments_CITemperatureAndTintFilter **__returnValue);
        
        END_INTERFACE
    } __x_ABI_CLumia_CImaging_CAdjustments_CITemperatureAndTintFilterFactoryVtbl;

    interface __x_ABI_CLumia_CImaging_CAdjustments_CITemperatureAndTintFilterFactory
    {
        CONST_VTBL struct __x_ABI_CLumia_CImaging_CAdjustments_CITemperatureAndTintFilterFactoryVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define __x_ABI_CLumia_CImaging_CAdjustments_CITemperatureAndTintFilterFactory_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __x_ABI_CLumia_CImaging_CAdjustments_CITemperatureAndTintFilterFactory_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __x_ABI_CLumia_CImaging_CAdjustments_CITemperatureAndTintFilterFactory_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __x_ABI_CLumia_CImaging_CAdjustments_CITemperatureAndTintFilterFactory_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 

#define __x_ABI_CLumia_CImaging_CAdjustments_CITemperatureAndTintFilterFactory_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 

#define __x_ABI_CLumia_CImaging_CAdjustments_CITemperatureAndTintFilterFactory_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 


#define __x_ABI_CLumia_CImaging_CAdjustments_CITemperatureAndTintFilterFactory_CreateWithAdjustments(This,temperature,tint,__returnValue)	\
    ( (This)->lpVtbl -> CreateWithAdjustments(This,temperature,tint,__returnValue) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* ____x_ABI_CLumia_CImaging_CAdjustments_CITemperatureAndTintFilterFactory_INTERFACE_DEFINED__ */


/* interface __MIDL_itf_Lumia2EImaging2EAdjustments_0000_0106 */
/* [local] */ 

#if !defined(____x_ABI_CLumia_CImaging_CAdjustments_CIVibranceFilter_INTERFACE_DEFINED__)
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Lumia_Imaging_Adjustments_IVibranceFilter[] = L"Lumia.Imaging.Adjustments.IVibranceFilter";
#endif /* !defined(____x_ABI_CLumia_CImaging_CAdjustments_CIVibranceFilter_INTERFACE_DEFINED__) */


/* interface __MIDL_itf_Lumia2EImaging2EAdjustments_0000_0106 */
/* [local] */ 



extern RPC_IF_HANDLE __MIDL_itf_Lumia2EImaging2EAdjustments_0000_0106_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_Lumia2EImaging2EAdjustments_0000_0106_v0_0_s_ifspec;

#ifndef ____x_ABI_CLumia_CImaging_CAdjustments_CIVibranceFilter_INTERFACE_DEFINED__
#define ____x_ABI_CLumia_CImaging_CAdjustments_CIVibranceFilter_INTERFACE_DEFINED__

/* interface __x_ABI_CLumia_CImaging_CAdjustments_CIVibranceFilter */
/* [uuid][object] */ 



/* interface ABI::Lumia::Imaging::Adjustments::IVibranceFilter */
/* [uuid][object] */ 


EXTERN_C const IID IID___x_ABI_CLumia_CImaging_CAdjustments_CIVibranceFilter;

#if defined(__cplusplus) && !defined(CINTERFACE)
    } /* end extern "C" */
    namespace ABI {
        namespace Lumia {
            namespace Imaging {
                namespace Adjustments {
                    
                    MIDL_INTERFACE("9529634E-2ED3-30CB-8073-E9C5958A863D")
                    IVibranceFilter : public IInspectable
                    {
                    public:
                        virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_Level( 
                            /* [out][retval] */ __RPC__out DOUBLE *__returnValue) = 0;
                        
                        virtual /* [propput] */ HRESULT STDMETHODCALLTYPE put_Level( 
                            /* [in] */ DOUBLE value) = 0;
                        
                        virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_SkinLevel( 
                            /* [out][retval] */ __RPC__out DOUBLE *__returnValue) = 0;
                        
                        virtual /* [propput] */ HRESULT STDMETHODCALLTYPE put_SkinLevel( 
                            /* [in] */ DOUBLE value) = 0;
                        
                        virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_Sensitivity( 
                            /* [out][retval] */ __RPC__out DOUBLE *__returnValue) = 0;
                        
                        virtual /* [propput] */ HRESULT STDMETHODCALLTYPE put_Sensitivity( 
                            /* [in] */ DOUBLE value) = 0;
                        
                        virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_SkinHueRange( 
                            /* [out][retval] */ __RPC__out ABI::Lumia::Imaging::RampedRange *__returnValue) = 0;
                        
                        virtual /* [propput] */ HRESULT STDMETHODCALLTYPE put_SkinHueRange( 
                            /* [in] */ ABI::Lumia::Imaging::RampedRange value) = 0;
                        
                    };

                    extern const __declspec(selectany) IID & IID_IVibranceFilter = __uuidof(IVibranceFilter);

                    
                }  /* end namespace */
            }  /* end namespace */
        }  /* end namespace */
    }  /* end namespace */
    extern "C" { 
    
#else 	/* C style interface */

    typedef struct __x_ABI_CLumia_CImaging_CAdjustments_CIVibranceFilterVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            __RPC__in __x_ABI_CLumia_CImaging_CAdjustments_CIVibranceFilter * This,
            /* [in] */ __RPC__in REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            __RPC__in __x_ABI_CLumia_CImaging_CAdjustments_CIVibranceFilter * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            __RPC__in __x_ABI_CLumia_CImaging_CAdjustments_CIVibranceFilter * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetIids )( 
            __RPC__in __x_ABI_CLumia_CImaging_CAdjustments_CIVibranceFilter * This,
            /* [out] */ __RPC__out ULONG *iidCount,
            /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
        
        HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )( 
            __RPC__in __x_ABI_CLumia_CImaging_CAdjustments_CIVibranceFilter * This,
            /* [out] */ __RPC__deref_out_opt HSTRING *className);
        
        HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )( 
            __RPC__in __x_ABI_CLumia_CImaging_CAdjustments_CIVibranceFilter * This,
            /* [out] */ __RPC__out TrustLevel *trustLevel);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_Level )( 
            __RPC__in __x_ABI_CLumia_CImaging_CAdjustments_CIVibranceFilter * This,
            /* [out][retval] */ __RPC__out DOUBLE *__returnValue);
        
        /* [propput] */ HRESULT ( STDMETHODCALLTYPE *put_Level )( 
            __RPC__in __x_ABI_CLumia_CImaging_CAdjustments_CIVibranceFilter * This,
            /* [in] */ DOUBLE value);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_SkinLevel )( 
            __RPC__in __x_ABI_CLumia_CImaging_CAdjustments_CIVibranceFilter * This,
            /* [out][retval] */ __RPC__out DOUBLE *__returnValue);
        
        /* [propput] */ HRESULT ( STDMETHODCALLTYPE *put_SkinLevel )( 
            __RPC__in __x_ABI_CLumia_CImaging_CAdjustments_CIVibranceFilter * This,
            /* [in] */ DOUBLE value);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_Sensitivity )( 
            __RPC__in __x_ABI_CLumia_CImaging_CAdjustments_CIVibranceFilter * This,
            /* [out][retval] */ __RPC__out DOUBLE *__returnValue);
        
        /* [propput] */ HRESULT ( STDMETHODCALLTYPE *put_Sensitivity )( 
            __RPC__in __x_ABI_CLumia_CImaging_CAdjustments_CIVibranceFilter * This,
            /* [in] */ DOUBLE value);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_SkinHueRange )( 
            __RPC__in __x_ABI_CLumia_CImaging_CAdjustments_CIVibranceFilter * This,
            /* [out][retval] */ __RPC__out __x_ABI_CLumia_CImaging_CRampedRange *__returnValue);
        
        /* [propput] */ HRESULT ( STDMETHODCALLTYPE *put_SkinHueRange )( 
            __RPC__in __x_ABI_CLumia_CImaging_CAdjustments_CIVibranceFilter * This,
            /* [in] */ __x_ABI_CLumia_CImaging_CRampedRange value);
        
        END_INTERFACE
    } __x_ABI_CLumia_CImaging_CAdjustments_CIVibranceFilterVtbl;

    interface __x_ABI_CLumia_CImaging_CAdjustments_CIVibranceFilter
    {
        CONST_VTBL struct __x_ABI_CLumia_CImaging_CAdjustments_CIVibranceFilterVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define __x_ABI_CLumia_CImaging_CAdjustments_CIVibranceFilter_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __x_ABI_CLumia_CImaging_CAdjustments_CIVibranceFilter_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __x_ABI_CLumia_CImaging_CAdjustments_CIVibranceFilter_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __x_ABI_CLumia_CImaging_CAdjustments_CIVibranceFilter_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 

#define __x_ABI_CLumia_CImaging_CAdjustments_CIVibranceFilter_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 

#define __x_ABI_CLumia_CImaging_CAdjustments_CIVibranceFilter_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 


#define __x_ABI_CLumia_CImaging_CAdjustments_CIVibranceFilter_get_Level(This,__returnValue)	\
    ( (This)->lpVtbl -> get_Level(This,__returnValue) ) 

#define __x_ABI_CLumia_CImaging_CAdjustments_CIVibranceFilter_put_Level(This,value)	\
    ( (This)->lpVtbl -> put_Level(This,value) ) 

#define __x_ABI_CLumia_CImaging_CAdjustments_CIVibranceFilter_get_SkinLevel(This,__returnValue)	\
    ( (This)->lpVtbl -> get_SkinLevel(This,__returnValue) ) 

#define __x_ABI_CLumia_CImaging_CAdjustments_CIVibranceFilter_put_SkinLevel(This,value)	\
    ( (This)->lpVtbl -> put_SkinLevel(This,value) ) 

#define __x_ABI_CLumia_CImaging_CAdjustments_CIVibranceFilter_get_Sensitivity(This,__returnValue)	\
    ( (This)->lpVtbl -> get_Sensitivity(This,__returnValue) ) 

#define __x_ABI_CLumia_CImaging_CAdjustments_CIVibranceFilter_put_Sensitivity(This,value)	\
    ( (This)->lpVtbl -> put_Sensitivity(This,value) ) 

#define __x_ABI_CLumia_CImaging_CAdjustments_CIVibranceFilter_get_SkinHueRange(This,__returnValue)	\
    ( (This)->lpVtbl -> get_SkinHueRange(This,__returnValue) ) 

#define __x_ABI_CLumia_CImaging_CAdjustments_CIVibranceFilter_put_SkinHueRange(This,value)	\
    ( (This)->lpVtbl -> put_SkinHueRange(This,value) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* ____x_ABI_CLumia_CImaging_CAdjustments_CIVibranceFilter_INTERFACE_DEFINED__ */


/* interface __MIDL_itf_Lumia2EImaging2EAdjustments_0000_0107 */
/* [local] */ 

#if !defined(____x_ABI_CLumia_CImaging_CAdjustments_CIWhiteBalanceFilter_INTERFACE_DEFINED__)
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Lumia_Imaging_Adjustments_IWhiteBalanceFilter[] = L"Lumia.Imaging.Adjustments.IWhiteBalanceFilter";
#endif /* !defined(____x_ABI_CLumia_CImaging_CAdjustments_CIWhiteBalanceFilter_INTERFACE_DEFINED__) */


/* interface __MIDL_itf_Lumia2EImaging2EAdjustments_0000_0107 */
/* [local] */ 



extern RPC_IF_HANDLE __MIDL_itf_Lumia2EImaging2EAdjustments_0000_0107_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_Lumia2EImaging2EAdjustments_0000_0107_v0_0_s_ifspec;

#ifndef ____x_ABI_CLumia_CImaging_CAdjustments_CIWhiteBalanceFilter_INTERFACE_DEFINED__
#define ____x_ABI_CLumia_CImaging_CAdjustments_CIWhiteBalanceFilter_INTERFACE_DEFINED__

/* interface __x_ABI_CLumia_CImaging_CAdjustments_CIWhiteBalanceFilter */
/* [uuid][object] */ 



/* interface ABI::Lumia::Imaging::Adjustments::IWhiteBalanceFilter */
/* [uuid][object] */ 


EXTERN_C const IID IID___x_ABI_CLumia_CImaging_CAdjustments_CIWhiteBalanceFilter;

#if defined(__cplusplus) && !defined(CINTERFACE)
    } /* end extern "C" */
    namespace ABI {
        namespace Lumia {
            namespace Imaging {
                namespace Adjustments {
                    
                    MIDL_INTERFACE("DBB687D5-CAD2-3400-80A3-36435E68DE4D")
                    IWhiteBalanceFilter : public IInspectable
                    {
                    public:
                        virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_WhitePointCalculationMode( 
                            /* [out][retval] */ __RPC__out ABI::Lumia::Imaging::Adjustments::WhitePointCalculationMode *__returnValue) = 0;
                        
                        virtual /* [propput] */ HRESULT STDMETHODCALLTYPE put_WhitePointCalculationMode( 
                            /* [in] */ ABI::Lumia::Imaging::Adjustments::WhitePointCalculationMode value) = 0;
                        
                        virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_SourceWhitePoint( 
                            /* [out][retval] */ __RPC__out ABI::Windows::UI::Color *__returnValue) = 0;
                        
                        virtual /* [propput] */ HRESULT STDMETHODCALLTYPE put_SourceWhitePoint( 
                            /* [in] */ ABI::Windows::UI::Color value) = 0;
                        
                    };

                    extern const __declspec(selectany) IID & IID_IWhiteBalanceFilter = __uuidof(IWhiteBalanceFilter);

                    
                }  /* end namespace */
            }  /* end namespace */
        }  /* end namespace */
    }  /* end namespace */
    extern "C" { 
    
#else 	/* C style interface */

    typedef struct __x_ABI_CLumia_CImaging_CAdjustments_CIWhiteBalanceFilterVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            __RPC__in __x_ABI_CLumia_CImaging_CAdjustments_CIWhiteBalanceFilter * This,
            /* [in] */ __RPC__in REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            __RPC__in __x_ABI_CLumia_CImaging_CAdjustments_CIWhiteBalanceFilter * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            __RPC__in __x_ABI_CLumia_CImaging_CAdjustments_CIWhiteBalanceFilter * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetIids )( 
            __RPC__in __x_ABI_CLumia_CImaging_CAdjustments_CIWhiteBalanceFilter * This,
            /* [out] */ __RPC__out ULONG *iidCount,
            /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
        
        HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )( 
            __RPC__in __x_ABI_CLumia_CImaging_CAdjustments_CIWhiteBalanceFilter * This,
            /* [out] */ __RPC__deref_out_opt HSTRING *className);
        
        HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )( 
            __RPC__in __x_ABI_CLumia_CImaging_CAdjustments_CIWhiteBalanceFilter * This,
            /* [out] */ __RPC__out TrustLevel *trustLevel);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_WhitePointCalculationMode )( 
            __RPC__in __x_ABI_CLumia_CImaging_CAdjustments_CIWhiteBalanceFilter * This,
            /* [out][retval] */ __RPC__out __x_ABI_CLumia_CImaging_CAdjustments_CWhitePointCalculationMode *__returnValue);
        
        /* [propput] */ HRESULT ( STDMETHODCALLTYPE *put_WhitePointCalculationMode )( 
            __RPC__in __x_ABI_CLumia_CImaging_CAdjustments_CIWhiteBalanceFilter * This,
            /* [in] */ __x_ABI_CLumia_CImaging_CAdjustments_CWhitePointCalculationMode value);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_SourceWhitePoint )( 
            __RPC__in __x_ABI_CLumia_CImaging_CAdjustments_CIWhiteBalanceFilter * This,
            /* [out][retval] */ __RPC__out __x_ABI_CWindows_CUI_CColor *__returnValue);
        
        /* [propput] */ HRESULT ( STDMETHODCALLTYPE *put_SourceWhitePoint )( 
            __RPC__in __x_ABI_CLumia_CImaging_CAdjustments_CIWhiteBalanceFilter * This,
            /* [in] */ __x_ABI_CWindows_CUI_CColor value);
        
        END_INTERFACE
    } __x_ABI_CLumia_CImaging_CAdjustments_CIWhiteBalanceFilterVtbl;

    interface __x_ABI_CLumia_CImaging_CAdjustments_CIWhiteBalanceFilter
    {
        CONST_VTBL struct __x_ABI_CLumia_CImaging_CAdjustments_CIWhiteBalanceFilterVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define __x_ABI_CLumia_CImaging_CAdjustments_CIWhiteBalanceFilter_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __x_ABI_CLumia_CImaging_CAdjustments_CIWhiteBalanceFilter_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __x_ABI_CLumia_CImaging_CAdjustments_CIWhiteBalanceFilter_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __x_ABI_CLumia_CImaging_CAdjustments_CIWhiteBalanceFilter_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 

#define __x_ABI_CLumia_CImaging_CAdjustments_CIWhiteBalanceFilter_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 

#define __x_ABI_CLumia_CImaging_CAdjustments_CIWhiteBalanceFilter_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 


#define __x_ABI_CLumia_CImaging_CAdjustments_CIWhiteBalanceFilter_get_WhitePointCalculationMode(This,__returnValue)	\
    ( (This)->lpVtbl -> get_WhitePointCalculationMode(This,__returnValue) ) 

#define __x_ABI_CLumia_CImaging_CAdjustments_CIWhiteBalanceFilter_put_WhitePointCalculationMode(This,value)	\
    ( (This)->lpVtbl -> put_WhitePointCalculationMode(This,value) ) 

#define __x_ABI_CLumia_CImaging_CAdjustments_CIWhiteBalanceFilter_get_SourceWhitePoint(This,__returnValue)	\
    ( (This)->lpVtbl -> get_SourceWhitePoint(This,__returnValue) ) 

#define __x_ABI_CLumia_CImaging_CAdjustments_CIWhiteBalanceFilter_put_SourceWhitePoint(This,value)	\
    ( (This)->lpVtbl -> put_SourceWhitePoint(This,value) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* ____x_ABI_CLumia_CImaging_CAdjustments_CIWhiteBalanceFilter_INTERFACE_DEFINED__ */


/* interface __MIDL_itf_Lumia2EImaging2EAdjustments_0000_0108 */
/* [local] */ 

#if !defined(____x_ABI_CLumia_CImaging_CAdjustments_CIWhiteBalanceFilterFactory_INTERFACE_DEFINED__)
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Lumia_Imaging_Adjustments_IWhiteBalanceFilterFactory[] = L"Lumia.Imaging.Adjustments.IWhiteBalanceFilterFactory";
#endif /* !defined(____x_ABI_CLumia_CImaging_CAdjustments_CIWhiteBalanceFilterFactory_INTERFACE_DEFINED__) */


/* interface __MIDL_itf_Lumia2EImaging2EAdjustments_0000_0108 */
/* [local] */ 



extern RPC_IF_HANDLE __MIDL_itf_Lumia2EImaging2EAdjustments_0000_0108_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_Lumia2EImaging2EAdjustments_0000_0108_v0_0_s_ifspec;

#ifndef ____x_ABI_CLumia_CImaging_CAdjustments_CIWhiteBalanceFilterFactory_INTERFACE_DEFINED__
#define ____x_ABI_CLumia_CImaging_CAdjustments_CIWhiteBalanceFilterFactory_INTERFACE_DEFINED__

/* interface __x_ABI_CLumia_CImaging_CAdjustments_CIWhiteBalanceFilterFactory */
/* [uuid][object] */ 



/* interface ABI::Lumia::Imaging::Adjustments::IWhiteBalanceFilterFactory */
/* [uuid][object] */ 


EXTERN_C const IID IID___x_ABI_CLumia_CImaging_CAdjustments_CIWhiteBalanceFilterFactory;

#if defined(__cplusplus) && !defined(CINTERFACE)
    } /* end extern "C" */
    namespace ABI {
        namespace Lumia {
            namespace Imaging {
                namespace Adjustments {
                    
                    MIDL_INTERFACE("D696B62F-1F1F-3359-B5AA-352DA61A1BAF")
                    IWhiteBalanceFilterFactory : public IInspectable
                    {
                    public:
                        virtual HRESULT STDMETHODCALLTYPE Create( 
                            /* [in] */ ABI::Lumia::Imaging::Adjustments::WhitePointCalculationMode whitePointCalculationMode,
                            /* [out][retval] */ __RPC__deref_out_opt ABI::Lumia::Imaging::Adjustments::IWhiteBalanceFilter **__returnValue) = 0;
                        
                        virtual HRESULT STDMETHODCALLTYPE CreateWithSourceWhitePoint( 
                            /* [in] */ ABI::Lumia::Imaging::Adjustments::WhitePointCalculationMode whitePointCalculationMode,
                            /* [in] */ ABI::Windows::UI::Color sourceWhitePoint,
                            /* [out][retval] */ __RPC__deref_out_opt ABI::Lumia::Imaging::Adjustments::IWhiteBalanceFilter **__returnValue) = 0;
                        
                    };

                    extern const __declspec(selectany) IID & IID_IWhiteBalanceFilterFactory = __uuidof(IWhiteBalanceFilterFactory);

                    
                }  /* end namespace */
            }  /* end namespace */
        }  /* end namespace */
    }  /* end namespace */
    extern "C" { 
    
#else 	/* C style interface */

    typedef struct __x_ABI_CLumia_CImaging_CAdjustments_CIWhiteBalanceFilterFactoryVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            __RPC__in __x_ABI_CLumia_CImaging_CAdjustments_CIWhiteBalanceFilterFactory * This,
            /* [in] */ __RPC__in REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            __RPC__in __x_ABI_CLumia_CImaging_CAdjustments_CIWhiteBalanceFilterFactory * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            __RPC__in __x_ABI_CLumia_CImaging_CAdjustments_CIWhiteBalanceFilterFactory * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetIids )( 
            __RPC__in __x_ABI_CLumia_CImaging_CAdjustments_CIWhiteBalanceFilterFactory * This,
            /* [out] */ __RPC__out ULONG *iidCount,
            /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
        
        HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )( 
            __RPC__in __x_ABI_CLumia_CImaging_CAdjustments_CIWhiteBalanceFilterFactory * This,
            /* [out] */ __RPC__deref_out_opt HSTRING *className);
        
        HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )( 
            __RPC__in __x_ABI_CLumia_CImaging_CAdjustments_CIWhiteBalanceFilterFactory * This,
            /* [out] */ __RPC__out TrustLevel *trustLevel);
        
        HRESULT ( STDMETHODCALLTYPE *Create )( 
            __RPC__in __x_ABI_CLumia_CImaging_CAdjustments_CIWhiteBalanceFilterFactory * This,
            /* [in] */ __x_ABI_CLumia_CImaging_CAdjustments_CWhitePointCalculationMode whitePointCalculationMode,
            /* [out][retval] */ __RPC__deref_out_opt __x_ABI_CLumia_CImaging_CAdjustments_CIWhiteBalanceFilter **__returnValue);
        
        HRESULT ( STDMETHODCALLTYPE *CreateWithSourceWhitePoint )( 
            __RPC__in __x_ABI_CLumia_CImaging_CAdjustments_CIWhiteBalanceFilterFactory * This,
            /* [in] */ __x_ABI_CLumia_CImaging_CAdjustments_CWhitePointCalculationMode whitePointCalculationMode,
            /* [in] */ __x_ABI_CWindows_CUI_CColor sourceWhitePoint,
            /* [out][retval] */ __RPC__deref_out_opt __x_ABI_CLumia_CImaging_CAdjustments_CIWhiteBalanceFilter **__returnValue);
        
        END_INTERFACE
    } __x_ABI_CLumia_CImaging_CAdjustments_CIWhiteBalanceFilterFactoryVtbl;

    interface __x_ABI_CLumia_CImaging_CAdjustments_CIWhiteBalanceFilterFactory
    {
        CONST_VTBL struct __x_ABI_CLumia_CImaging_CAdjustments_CIWhiteBalanceFilterFactoryVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define __x_ABI_CLumia_CImaging_CAdjustments_CIWhiteBalanceFilterFactory_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __x_ABI_CLumia_CImaging_CAdjustments_CIWhiteBalanceFilterFactory_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __x_ABI_CLumia_CImaging_CAdjustments_CIWhiteBalanceFilterFactory_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __x_ABI_CLumia_CImaging_CAdjustments_CIWhiteBalanceFilterFactory_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 

#define __x_ABI_CLumia_CImaging_CAdjustments_CIWhiteBalanceFilterFactory_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 

#define __x_ABI_CLumia_CImaging_CAdjustments_CIWhiteBalanceFilterFactory_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 


#define __x_ABI_CLumia_CImaging_CAdjustments_CIWhiteBalanceFilterFactory_Create(This,whitePointCalculationMode,__returnValue)	\
    ( (This)->lpVtbl -> Create(This,whitePointCalculationMode,__returnValue) ) 

#define __x_ABI_CLumia_CImaging_CAdjustments_CIWhiteBalanceFilterFactory_CreateWithSourceWhitePoint(This,whitePointCalculationMode,sourceWhitePoint,__returnValue)	\
    ( (This)->lpVtbl -> CreateWithSourceWhitePoint(This,whitePointCalculationMode,sourceWhitePoint,__returnValue) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* ____x_ABI_CLumia_CImaging_CAdjustments_CIWhiteBalanceFilterFactory_INTERFACE_DEFINED__ */


/* interface __MIDL_itf_Lumia2EImaging2EAdjustments_0000_0109 */
/* [local] */ 

#if !defined(____x_ABI_CLumia_CImaging_CAdjustments_CIWhiteboardEnhancementFilter_INTERFACE_DEFINED__)
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Lumia_Imaging_Adjustments_IWhiteboardEnhancementFilter[] = L"Lumia.Imaging.Adjustments.IWhiteboardEnhancementFilter";
#endif /* !defined(____x_ABI_CLumia_CImaging_CAdjustments_CIWhiteboardEnhancementFilter_INTERFACE_DEFINED__) */


/* interface __MIDL_itf_Lumia2EImaging2EAdjustments_0000_0109 */
/* [local] */ 



extern RPC_IF_HANDLE __MIDL_itf_Lumia2EImaging2EAdjustments_0000_0109_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_Lumia2EImaging2EAdjustments_0000_0109_v0_0_s_ifspec;

#ifndef ____x_ABI_CLumia_CImaging_CAdjustments_CIWhiteboardEnhancementFilter_INTERFACE_DEFINED__
#define ____x_ABI_CLumia_CImaging_CAdjustments_CIWhiteboardEnhancementFilter_INTERFACE_DEFINED__

/* interface __x_ABI_CLumia_CImaging_CAdjustments_CIWhiteboardEnhancementFilter */
/* [uuid][object] */ 



/* interface ABI::Lumia::Imaging::Adjustments::IWhiteboardEnhancementFilter */
/* [uuid][object] */ 


EXTERN_C const IID IID___x_ABI_CLumia_CImaging_CAdjustments_CIWhiteboardEnhancementFilter;

#if defined(__cplusplus) && !defined(CINTERFACE)
    } /* end extern "C" */
    namespace ABI {
        namespace Lumia {
            namespace Imaging {
                namespace Adjustments {
                    
                    MIDL_INTERFACE("5B5D3DEF-0898-3C71-B4D8-EB6C636D1637")
                    IWhiteboardEnhancementFilter : public IInspectable
                    {
                    public:
                        virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_WhiteboardEnhancementMode( 
                            /* [out][retval] */ __RPC__out ABI::Lumia::Imaging::Adjustments::WhiteboardEnhancementMode *__returnValue) = 0;
                        
                        virtual /* [propput] */ HRESULT STDMETHODCALLTYPE put_WhiteboardEnhancementMode( 
                            /* [in] */ ABI::Lumia::Imaging::Adjustments::WhiteboardEnhancementMode value) = 0;
                        
                    };

                    extern const __declspec(selectany) IID & IID_IWhiteboardEnhancementFilter = __uuidof(IWhiteboardEnhancementFilter);

                    
                }  /* end namespace */
            }  /* end namespace */
        }  /* end namespace */
    }  /* end namespace */
    extern "C" { 
    
#else 	/* C style interface */

    typedef struct __x_ABI_CLumia_CImaging_CAdjustments_CIWhiteboardEnhancementFilterVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            __RPC__in __x_ABI_CLumia_CImaging_CAdjustments_CIWhiteboardEnhancementFilter * This,
            /* [in] */ __RPC__in REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            __RPC__in __x_ABI_CLumia_CImaging_CAdjustments_CIWhiteboardEnhancementFilter * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            __RPC__in __x_ABI_CLumia_CImaging_CAdjustments_CIWhiteboardEnhancementFilter * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetIids )( 
            __RPC__in __x_ABI_CLumia_CImaging_CAdjustments_CIWhiteboardEnhancementFilter * This,
            /* [out] */ __RPC__out ULONG *iidCount,
            /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
        
        HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )( 
            __RPC__in __x_ABI_CLumia_CImaging_CAdjustments_CIWhiteboardEnhancementFilter * This,
            /* [out] */ __RPC__deref_out_opt HSTRING *className);
        
        HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )( 
            __RPC__in __x_ABI_CLumia_CImaging_CAdjustments_CIWhiteboardEnhancementFilter * This,
            /* [out] */ __RPC__out TrustLevel *trustLevel);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_WhiteboardEnhancementMode )( 
            __RPC__in __x_ABI_CLumia_CImaging_CAdjustments_CIWhiteboardEnhancementFilter * This,
            /* [out][retval] */ __RPC__out __x_ABI_CLumia_CImaging_CAdjustments_CWhiteboardEnhancementMode *__returnValue);
        
        /* [propput] */ HRESULT ( STDMETHODCALLTYPE *put_WhiteboardEnhancementMode )( 
            __RPC__in __x_ABI_CLumia_CImaging_CAdjustments_CIWhiteboardEnhancementFilter * This,
            /* [in] */ __x_ABI_CLumia_CImaging_CAdjustments_CWhiteboardEnhancementMode value);
        
        END_INTERFACE
    } __x_ABI_CLumia_CImaging_CAdjustments_CIWhiteboardEnhancementFilterVtbl;

    interface __x_ABI_CLumia_CImaging_CAdjustments_CIWhiteboardEnhancementFilter
    {
        CONST_VTBL struct __x_ABI_CLumia_CImaging_CAdjustments_CIWhiteboardEnhancementFilterVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define __x_ABI_CLumia_CImaging_CAdjustments_CIWhiteboardEnhancementFilter_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __x_ABI_CLumia_CImaging_CAdjustments_CIWhiteboardEnhancementFilter_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __x_ABI_CLumia_CImaging_CAdjustments_CIWhiteboardEnhancementFilter_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __x_ABI_CLumia_CImaging_CAdjustments_CIWhiteboardEnhancementFilter_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 

#define __x_ABI_CLumia_CImaging_CAdjustments_CIWhiteboardEnhancementFilter_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 

#define __x_ABI_CLumia_CImaging_CAdjustments_CIWhiteboardEnhancementFilter_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 


#define __x_ABI_CLumia_CImaging_CAdjustments_CIWhiteboardEnhancementFilter_get_WhiteboardEnhancementMode(This,__returnValue)	\
    ( (This)->lpVtbl -> get_WhiteboardEnhancementMode(This,__returnValue) ) 

#define __x_ABI_CLumia_CImaging_CAdjustments_CIWhiteboardEnhancementFilter_put_WhiteboardEnhancementMode(This,value)	\
    ( (This)->lpVtbl -> put_WhiteboardEnhancementMode(This,value) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* ____x_ABI_CLumia_CImaging_CAdjustments_CIWhiteboardEnhancementFilter_INTERFACE_DEFINED__ */


/* interface __MIDL_itf_Lumia2EImaging2EAdjustments_0000_0110 */
/* [local] */ 

#if !defined(____x_ABI_CLumia_CImaging_CAdjustments_CIWhiteboardEnhancementFilterFactory_INTERFACE_DEFINED__)
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Lumia_Imaging_Adjustments_IWhiteboardEnhancementFilterFactory[] = L"Lumia.Imaging.Adjustments.IWhiteboardEnhancementFilterFactory";
#endif /* !defined(____x_ABI_CLumia_CImaging_CAdjustments_CIWhiteboardEnhancementFilterFactory_INTERFACE_DEFINED__) */


/* interface __MIDL_itf_Lumia2EImaging2EAdjustments_0000_0110 */
/* [local] */ 



extern RPC_IF_HANDLE __MIDL_itf_Lumia2EImaging2EAdjustments_0000_0110_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_Lumia2EImaging2EAdjustments_0000_0110_v0_0_s_ifspec;

#ifndef ____x_ABI_CLumia_CImaging_CAdjustments_CIWhiteboardEnhancementFilterFactory_INTERFACE_DEFINED__
#define ____x_ABI_CLumia_CImaging_CAdjustments_CIWhiteboardEnhancementFilterFactory_INTERFACE_DEFINED__

/* interface __x_ABI_CLumia_CImaging_CAdjustments_CIWhiteboardEnhancementFilterFactory */
/* [uuid][object] */ 



/* interface ABI::Lumia::Imaging::Adjustments::IWhiteboardEnhancementFilterFactory */
/* [uuid][object] */ 


EXTERN_C const IID IID___x_ABI_CLumia_CImaging_CAdjustments_CIWhiteboardEnhancementFilterFactory;

#if defined(__cplusplus) && !defined(CINTERFACE)
    } /* end extern "C" */
    namespace ABI {
        namespace Lumia {
            namespace Imaging {
                namespace Adjustments {
                    
                    MIDL_INTERFACE("814B7CF2-6455-3876-BB7C-118048871676")
                    IWhiteboardEnhancementFilterFactory : public IInspectable
                    {
                    public:
                        virtual HRESULT STDMETHODCALLTYPE CreateWithMode( 
                            /* [in] */ ABI::Lumia::Imaging::Adjustments::WhiteboardEnhancementMode whiteboardEnhancementMode,
                            /* [out][retval] */ __RPC__deref_out_opt ABI::Lumia::Imaging::Adjustments::IWhiteboardEnhancementFilter **__returnValue) = 0;
                        
                    };

                    extern const __declspec(selectany) IID & IID_IWhiteboardEnhancementFilterFactory = __uuidof(IWhiteboardEnhancementFilterFactory);

                    
                }  /* end namespace */
            }  /* end namespace */
        }  /* end namespace */
    }  /* end namespace */
    extern "C" { 
    
#else 	/* C style interface */

    typedef struct __x_ABI_CLumia_CImaging_CAdjustments_CIWhiteboardEnhancementFilterFactoryVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            __RPC__in __x_ABI_CLumia_CImaging_CAdjustments_CIWhiteboardEnhancementFilterFactory * This,
            /* [in] */ __RPC__in REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            __RPC__in __x_ABI_CLumia_CImaging_CAdjustments_CIWhiteboardEnhancementFilterFactory * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            __RPC__in __x_ABI_CLumia_CImaging_CAdjustments_CIWhiteboardEnhancementFilterFactory * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetIids )( 
            __RPC__in __x_ABI_CLumia_CImaging_CAdjustments_CIWhiteboardEnhancementFilterFactory * This,
            /* [out] */ __RPC__out ULONG *iidCount,
            /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
        
        HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )( 
            __RPC__in __x_ABI_CLumia_CImaging_CAdjustments_CIWhiteboardEnhancementFilterFactory * This,
            /* [out] */ __RPC__deref_out_opt HSTRING *className);
        
        HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )( 
            __RPC__in __x_ABI_CLumia_CImaging_CAdjustments_CIWhiteboardEnhancementFilterFactory * This,
            /* [out] */ __RPC__out TrustLevel *trustLevel);
        
        HRESULT ( STDMETHODCALLTYPE *CreateWithMode )( 
            __RPC__in __x_ABI_CLumia_CImaging_CAdjustments_CIWhiteboardEnhancementFilterFactory * This,
            /* [in] */ __x_ABI_CLumia_CImaging_CAdjustments_CWhiteboardEnhancementMode whiteboardEnhancementMode,
            /* [out][retval] */ __RPC__deref_out_opt __x_ABI_CLumia_CImaging_CAdjustments_CIWhiteboardEnhancementFilter **__returnValue);
        
        END_INTERFACE
    } __x_ABI_CLumia_CImaging_CAdjustments_CIWhiteboardEnhancementFilterFactoryVtbl;

    interface __x_ABI_CLumia_CImaging_CAdjustments_CIWhiteboardEnhancementFilterFactory
    {
        CONST_VTBL struct __x_ABI_CLumia_CImaging_CAdjustments_CIWhiteboardEnhancementFilterFactoryVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define __x_ABI_CLumia_CImaging_CAdjustments_CIWhiteboardEnhancementFilterFactory_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __x_ABI_CLumia_CImaging_CAdjustments_CIWhiteboardEnhancementFilterFactory_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __x_ABI_CLumia_CImaging_CAdjustments_CIWhiteboardEnhancementFilterFactory_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __x_ABI_CLumia_CImaging_CAdjustments_CIWhiteboardEnhancementFilterFactory_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 

#define __x_ABI_CLumia_CImaging_CAdjustments_CIWhiteboardEnhancementFilterFactory_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 

#define __x_ABI_CLumia_CImaging_CAdjustments_CIWhiteboardEnhancementFilterFactory_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 


#define __x_ABI_CLumia_CImaging_CAdjustments_CIWhiteboardEnhancementFilterFactory_CreateWithMode(This,whiteboardEnhancementMode,__returnValue)	\
    ( (This)->lpVtbl -> CreateWithMode(This,whiteboardEnhancementMode,__returnValue) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* ____x_ABI_CLumia_CImaging_CAdjustments_CIWhiteboardEnhancementFilterFactory_INTERFACE_DEFINED__ */


/* interface __MIDL_itf_Lumia2EImaging2EAdjustments_0000_0111 */
/* [local] */ 

#ifndef RUNTIMECLASS_Lumia_Imaging_Adjustments_CurveMinMaxPair_DEFINED
#define RUNTIMECLASS_Lumia_Imaging_Adjustments_CurveMinMaxPair_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Lumia_Imaging_Adjustments_CurveMinMaxPair[] = L"Lumia.Imaging.Adjustments.CurveMinMaxPair";
#endif
#ifndef RUNTIMECLASS_Lumia_Imaging_Adjustments_Curve_DEFINED
#define RUNTIMECLASS_Lumia_Imaging_Adjustments_Curve_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Lumia_Imaging_Adjustments_Curve[] = L"Lumia.Imaging.Adjustments.Curve";
#endif
#ifndef RUNTIMECLASS_Lumia_Imaging_Adjustments_ArgbColorCurves_DEFINED
#define RUNTIMECLASS_Lumia_Imaging_Adjustments_ArgbColorCurves_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Lumia_Imaging_Adjustments_ArgbColorCurves[] = L"Lumia.Imaging.Adjustments.ArgbColorCurves";
#endif
#ifndef RUNTIMECLASS_Lumia_Imaging_Adjustments_AutoEnhanceFilter_DEFINED
#define RUNTIMECLASS_Lumia_Imaging_Adjustments_AutoEnhanceFilter_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Lumia_Imaging_Adjustments_AutoEnhanceFilter[] = L"Lumia.Imaging.Adjustments.AutoEnhanceFilter";
#endif
#ifndef RUNTIMECLASS_Lumia_Imaging_Adjustments_AutoFixAnalyzerResult_DEFINED
#define RUNTIMECLASS_Lumia_Imaging_Adjustments_AutoFixAnalyzerResult_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Lumia_Imaging_Adjustments_AutoFixAnalyzerResult[] = L"Lumia.Imaging.Adjustments.AutoFixAnalyzerResult";
#endif
#ifndef RUNTIMECLASS_Lumia_Imaging_Adjustments_AutoFixAnalyzer_DEFINED
#define RUNTIMECLASS_Lumia_Imaging_Adjustments_AutoFixAnalyzer_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Lumia_Imaging_Adjustments_AutoFixAnalyzer[] = L"Lumia.Imaging.Adjustments.AutoFixAnalyzer";
#endif
#ifndef RUNTIMECLASS_Lumia_Imaging_Adjustments_AutoLevelsFilter_DEFINED
#define RUNTIMECLASS_Lumia_Imaging_Adjustments_AutoLevelsFilter_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Lumia_Imaging_Adjustments_AutoLevelsFilter[] = L"Lumia.Imaging.Adjustments.AutoLevelsFilter";
#endif
#ifndef RUNTIMECLASS_Lumia_Imaging_Adjustments_BlurFilter_DEFINED
#define RUNTIMECLASS_Lumia_Imaging_Adjustments_BlurFilter_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Lumia_Imaging_Adjustments_BlurFilter[] = L"Lumia.Imaging.Adjustments.BlurFilter";
#endif
#ifndef RUNTIMECLASS_Lumia_Imaging_Adjustments_BrightnessFilter_DEFINED
#define RUNTIMECLASS_Lumia_Imaging_Adjustments_BrightnessFilter_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Lumia_Imaging_Adjustments_BrightnessFilter[] = L"Lumia.Imaging.Adjustments.BrightnessFilter";
#endif
#ifndef RUNTIMECLASS_Lumia_Imaging_Adjustments_ColorAdjustFilter_DEFINED
#define RUNTIMECLASS_Lumia_Imaging_Adjustments_ColorAdjustFilter_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Lumia_Imaging_Adjustments_ColorAdjustFilter[] = L"Lumia.Imaging.Adjustments.ColorAdjustFilter";
#endif
#ifndef RUNTIMECLASS_Lumia_Imaging_Adjustments_ColorBoostFilter_DEFINED
#define RUNTIMECLASS_Lumia_Imaging_Adjustments_ColorBoostFilter_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Lumia_Imaging_Adjustments_ColorBoostFilter[] = L"Lumia.Imaging.Adjustments.ColorBoostFilter";
#endif
#ifndef RUNTIMECLASS_Lumia_Imaging_Adjustments_ColorizationFilter_DEFINED
#define RUNTIMECLASS_Lumia_Imaging_Adjustments_ColorizationFilter_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Lumia_Imaging_Adjustments_ColorizationFilter[] = L"Lumia.Imaging.Adjustments.ColorizationFilter";
#endif
#ifndef RUNTIMECLASS_Lumia_Imaging_Adjustments_ContrastFilter_DEFINED
#define RUNTIMECLASS_Lumia_Imaging_Adjustments_ContrastFilter_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Lumia_Imaging_Adjustments_ContrastFilter[] = L"Lumia.Imaging.Adjustments.ContrastFilter";
#endif
#ifndef RUNTIMECLASS_Lumia_Imaging_Adjustments_LensBlurFocusEdgeSoftening_DEFINED
#define RUNTIMECLASS_Lumia_Imaging_Adjustments_LensBlurFocusEdgeSoftening_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Lumia_Imaging_Adjustments_LensBlurFocusEdgeSoftening[] = L"Lumia.Imaging.Adjustments.LensBlurFocusEdgeSoftening";
#endif
#ifndef RUNTIMECLASS_Lumia_Imaging_Adjustments_CurvesFilter_DEFINED
#define RUNTIMECLASS_Lumia_Imaging_Adjustments_CurvesFilter_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Lumia_Imaging_Adjustments_CurvesFilter[] = L"Lumia.Imaging.Adjustments.CurvesFilter";
#endif
#ifndef RUNTIMECLASS_Lumia_Imaging_Adjustments_DespeckleFilter_DEFINED
#define RUNTIMECLASS_Lumia_Imaging_Adjustments_DespeckleFilter_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Lumia_Imaging_Adjustments_DespeckleFilter[] = L"Lumia.Imaging.Adjustments.DespeckleFilter";
#endif
#ifndef RUNTIMECLASS_Lumia_Imaging_Adjustments_ExposureFilter_DEFINED
#define RUNTIMECLASS_Lumia_Imaging_Adjustments_ExposureFilter_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Lumia_Imaging_Adjustments_ExposureFilter[] = L"Lumia.Imaging.Adjustments.ExposureFilter";
#endif
#ifndef RUNTIMECLASS_Lumia_Imaging_Adjustments_GaussianNoiseFilter_DEFINED
#define RUNTIMECLASS_Lumia_Imaging_Adjustments_GaussianNoiseFilter_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Lumia_Imaging_Adjustments_GaussianNoiseFilter[] = L"Lumia.Imaging.Adjustments.GaussianNoiseFilter";
#endif
#ifndef RUNTIMECLASS_Lumia_Imaging_Adjustments_GrayscaleFilter_DEFINED
#define RUNTIMECLASS_Lumia_Imaging_Adjustments_GrayscaleFilter_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Lumia_Imaging_Adjustments_GrayscaleFilter[] = L"Lumia.Imaging.Adjustments.GrayscaleFilter";
#endif
#ifndef RUNTIMECLASS_Lumia_Imaging_Adjustments_HdrEffect_DEFINED
#define RUNTIMECLASS_Lumia_Imaging_Adjustments_HdrEffect_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Lumia_Imaging_Adjustments_HdrEffect[] = L"Lumia.Imaging.Adjustments.HdrEffect";
#endif
#ifndef RUNTIMECLASS_Lumia_Imaging_Adjustments_HueSaturationFilter_DEFINED
#define RUNTIMECLASS_Lumia_Imaging_Adjustments_HueSaturationFilter_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Lumia_Imaging_Adjustments_HueSaturationFilter[] = L"Lumia.Imaging.Adjustments.HueSaturationFilter";
#endif
#ifndef RUNTIMECLASS_Lumia_Imaging_Adjustments_HueSaturationLightnessFilter_DEFINED
#define RUNTIMECLASS_Lumia_Imaging_Adjustments_HueSaturationLightnessFilter_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Lumia_Imaging_Adjustments_HueSaturationLightnessFilter[] = L"Lumia.Imaging.Adjustments.HueSaturationLightnessFilter";
#endif
#ifndef RUNTIMECLASS_Lumia_Imaging_Adjustments_LensBlurCustomKernel_DEFINED
#define RUNTIMECLASS_Lumia_Imaging_Adjustments_LensBlurCustomKernel_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Lumia_Imaging_Adjustments_LensBlurCustomKernel[] = L"Lumia.Imaging.Adjustments.LensBlurCustomKernel";
#endif
#ifndef RUNTIMECLASS_Lumia_Imaging_Adjustments_LensBlurPredefinedKernel_DEFINED
#define RUNTIMECLASS_Lumia_Imaging_Adjustments_LensBlurPredefinedKernel_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Lumia_Imaging_Adjustments_LensBlurPredefinedKernel[] = L"Lumia.Imaging.Adjustments.LensBlurPredefinedKernel";
#endif
#ifndef RUNTIMECLASS_Lumia_Imaging_Adjustments_LensBlurEffect_DEFINED
#define RUNTIMECLASS_Lumia_Imaging_Adjustments_LensBlurEffect_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Lumia_Imaging_Adjustments_LensBlurEffect[] = L"Lumia.Imaging.Adjustments.LensBlurEffect";
#endif
#ifndef RUNTIMECLASS_Lumia_Imaging_Adjustments_RgbLevelsFilter_DEFINED
#define RUNTIMECLASS_Lumia_Imaging_Adjustments_RgbLevelsFilter_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Lumia_Imaging_Adjustments_RgbLevelsFilter[] = L"Lumia.Imaging.Adjustments.RgbLevelsFilter";
#endif
#ifndef RUNTIMECLASS_Lumia_Imaging_Adjustments_LevelsFilter_DEFINED
#define RUNTIMECLASS_Lumia_Imaging_Adjustments_LevelsFilter_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Lumia_Imaging_Adjustments_LevelsFilter[] = L"Lumia.Imaging.Adjustments.LevelsFilter";
#endif
#ifndef RUNTIMECLASS_Lumia_Imaging_Adjustments_LocalBoostAutomaticFilter_DEFINED
#define RUNTIMECLASS_Lumia_Imaging_Adjustments_LocalBoostAutomaticFilter_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Lumia_Imaging_Adjustments_LocalBoostAutomaticFilter[] = L"Lumia.Imaging.Adjustments.LocalBoostAutomaticFilter";
#endif
#ifndef RUNTIMECLASS_Lumia_Imaging_Adjustments_LocalBoostFilter_DEFINED
#define RUNTIMECLASS_Lumia_Imaging_Adjustments_LocalBoostFilter_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Lumia_Imaging_Adjustments_LocalBoostFilter[] = L"Lumia.Imaging.Adjustments.LocalBoostFilter";
#endif
#ifndef RUNTIMECLASS_Lumia_Imaging_Adjustments_NoiseFilter_DEFINED
#define RUNTIMECLASS_Lumia_Imaging_Adjustments_NoiseFilter_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Lumia_Imaging_Adjustments_NoiseFilter[] = L"Lumia.Imaging.Adjustments.NoiseFilter";
#endif
#ifndef RUNTIMECLASS_Lumia_Imaging_Adjustments_RedEyeRemovalFilter_DEFINED
#define RUNTIMECLASS_Lumia_Imaging_Adjustments_RedEyeRemovalFilter_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Lumia_Imaging_Adjustments_RedEyeRemovalFilter[] = L"Lumia.Imaging.Adjustments.RedEyeRemovalFilter";
#endif
#ifndef RUNTIMECLASS_Lumia_Imaging_Adjustments_SaturationLightnessFilter_DEFINED
#define RUNTIMECLASS_Lumia_Imaging_Adjustments_SaturationLightnessFilter_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Lumia_Imaging_Adjustments_SaturationLightnessFilter[] = L"Lumia.Imaging.Adjustments.SaturationLightnessFilter";
#endif
#ifndef RUNTIMECLASS_Lumia_Imaging_Adjustments_SharpnessFilter_DEFINED
#define RUNTIMECLASS_Lumia_Imaging_Adjustments_SharpnessFilter_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Lumia_Imaging_Adjustments_SharpnessFilter[] = L"Lumia.Imaging.Adjustments.SharpnessFilter";
#endif
#ifndef RUNTIMECLASS_Lumia_Imaging_Adjustments_RgbMixerFilter_DEFINED
#define RUNTIMECLASS_Lumia_Imaging_Adjustments_RgbMixerFilter_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Lumia_Imaging_Adjustments_RgbMixerFilter[] = L"Lumia.Imaging.Adjustments.RgbMixerFilter";
#endif
#ifndef RUNTIMECLASS_Lumia_Imaging_Adjustments_TemperatureAndTintFilter_DEFINED
#define RUNTIMECLASS_Lumia_Imaging_Adjustments_TemperatureAndTintFilter_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Lumia_Imaging_Adjustments_TemperatureAndTintFilter[] = L"Lumia.Imaging.Adjustments.TemperatureAndTintFilter";
#endif
#ifndef RUNTIMECLASS_Lumia_Imaging_Adjustments_VibranceFilter_DEFINED
#define RUNTIMECLASS_Lumia_Imaging_Adjustments_VibranceFilter_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Lumia_Imaging_Adjustments_VibranceFilter[] = L"Lumia.Imaging.Adjustments.VibranceFilter";
#endif
#ifndef RUNTIMECLASS_Lumia_Imaging_Adjustments_WhiteBalanceFilter_DEFINED
#define RUNTIMECLASS_Lumia_Imaging_Adjustments_WhiteBalanceFilter_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Lumia_Imaging_Adjustments_WhiteBalanceFilter[] = L"Lumia.Imaging.Adjustments.WhiteBalanceFilter";
#endif
#ifndef RUNTIMECLASS_Lumia_Imaging_Adjustments_WhiteboardEnhancementFilter_DEFINED
#define RUNTIMECLASS_Lumia_Imaging_Adjustments_WhiteboardEnhancementFilter_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Lumia_Imaging_Adjustments_WhiteboardEnhancementFilter[] = L"Lumia.Imaging.Adjustments.WhiteboardEnhancementFilter";
#endif


/* interface __MIDL_itf_Lumia2EImaging2EAdjustments_0000_0111 */
/* [local] */ 



extern RPC_IF_HANDLE __MIDL_itf_Lumia2EImaging2EAdjustments_0000_0111_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_Lumia2EImaging2EAdjustments_0000_0111_v0_0_s_ifspec;

/* Additional Prototypes for ALL interfaces */

/* end of Additional Prototypes */

#ifdef __cplusplus
}
#endif

#endif


