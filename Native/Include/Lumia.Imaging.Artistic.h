/*
Copyright (c) 2014 Microsoft Mobile
 
Permission is hereby granted, free of charge, to any person obtaining a copy
of this software and associated documentation files (the "Software"), to deal
in the Software without restriction, including without limitation the rights
to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
copies of the Software, and to permit persons to whom the Software is
furnished to do so, subject to the following conditions:
The above copyright notice and this permission notice shall be included in
all copies or substantial portions of the Software.

THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN
THE SOFTWARE.
*/

// 14a955a8c166572ba70fae472486786fbe39ddda Fri, 12 Dec 2014 18:46:36 +0100



/* this ALWAYS GENERATED file contains the definitions for the interfaces */


 /* File created by MIDL compiler version 8.00.0603 */
/* at Sat Dec 13 23:08:23 2014
 */
/* Compiler settings for C:\Users\cadahl\AppData\Local\Temp\Lumia.Imaging.Artistic.idl-ecf32d61:
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

#ifndef __Lumia2EImaging2EArtistic_h__
#define __Lumia2EImaging2EArtistic_h__

#if defined(_MSC_VER) && (_MSC_VER >= 1020)
#pragma once
#endif

/* Forward Declarations */ 

#ifndef ____FIIterator_1_Lumia__CImaging__CArtistic__CSplitToneRange_FWD_DEFINED__
#define ____FIIterator_1_Lumia__CImaging__CArtistic__CSplitToneRange_FWD_DEFINED__
typedef interface __FIIterator_1_Lumia__CImaging__CArtistic__CSplitToneRange __FIIterator_1_Lumia__CImaging__CArtistic__CSplitToneRange;

#endif 	/* ____FIIterator_1_Lumia__CImaging__CArtistic__CSplitToneRange_FWD_DEFINED__ */


#ifndef ____FIIterable_1_Lumia__CImaging__CArtistic__CSplitToneRange_FWD_DEFINED__
#define ____FIIterable_1_Lumia__CImaging__CArtistic__CSplitToneRange_FWD_DEFINED__
typedef interface __FIIterable_1_Lumia__CImaging__CArtistic__CSplitToneRange __FIIterable_1_Lumia__CImaging__CArtistic__CSplitToneRange;

#endif 	/* ____FIIterable_1_Lumia__CImaging__CArtistic__CSplitToneRange_FWD_DEFINED__ */


#ifndef ____FIVectorView_1_Lumia__CImaging__CArtistic__CSplitToneRange_FWD_DEFINED__
#define ____FIVectorView_1_Lumia__CImaging__CArtistic__CSplitToneRange_FWD_DEFINED__
typedef interface __FIVectorView_1_Lumia__CImaging__CArtistic__CSplitToneRange __FIVectorView_1_Lumia__CImaging__CArtistic__CSplitToneRange;

#endif 	/* ____FIVectorView_1_Lumia__CImaging__CArtistic__CSplitToneRange_FWD_DEFINED__ */


#ifndef ____FIVector_1_Lumia__CImaging__CArtistic__CSplitToneRange_FWD_DEFINED__
#define ____FIVector_1_Lumia__CImaging__CArtistic__CSplitToneRange_FWD_DEFINED__
typedef interface __FIVector_1_Lumia__CImaging__CArtistic__CSplitToneRange __FIVector_1_Lumia__CImaging__CArtistic__CSplitToneRange;

#endif 	/* ____FIVector_1_Lumia__CImaging__CArtistic__CSplitToneRange_FWD_DEFINED__ */


#ifndef ____x_ABI_CLumia_CImaging_CArtistic_CIAntiqueFilter_FWD_DEFINED__
#define ____x_ABI_CLumia_CImaging_CArtistic_CIAntiqueFilter_FWD_DEFINED__
typedef interface __x_ABI_CLumia_CImaging_CArtistic_CIAntiqueFilter __x_ABI_CLumia_CImaging_CArtistic_CIAntiqueFilter;

#ifdef __cplusplus
namespace ABI {
    namespace Lumia {
        namespace Imaging {
            namespace Artistic {
                interface IAntiqueFilter;
            } /* end namespace */
        } /* end namespace */
    } /* end namespace */
} /* end namespace */

#endif /* __cplusplus */

#endif 	/* ____x_ABI_CLumia_CImaging_CArtistic_CIAntiqueFilter_FWD_DEFINED__ */


#ifndef ____x_ABI_CLumia_CImaging_CArtistic_CICartoonFilter_FWD_DEFINED__
#define ____x_ABI_CLumia_CImaging_CArtistic_CICartoonFilter_FWD_DEFINED__
typedef interface __x_ABI_CLumia_CImaging_CArtistic_CICartoonFilter __x_ABI_CLumia_CImaging_CArtistic_CICartoonFilter;

#ifdef __cplusplus
namespace ABI {
    namespace Lumia {
        namespace Imaging {
            namespace Artistic {
                interface ICartoonFilter;
            } /* end namespace */
        } /* end namespace */
    } /* end namespace */
} /* end namespace */

#endif /* __cplusplus */

#endif 	/* ____x_ABI_CLumia_CImaging_CArtistic_CICartoonFilter_FWD_DEFINED__ */


#ifndef ____x_ABI_CLumia_CImaging_CArtistic_CICartoonFilterFactory_FWD_DEFINED__
#define ____x_ABI_CLumia_CImaging_CArtistic_CICartoonFilterFactory_FWD_DEFINED__
typedef interface __x_ABI_CLumia_CImaging_CArtistic_CICartoonFilterFactory __x_ABI_CLumia_CImaging_CArtistic_CICartoonFilterFactory;

#ifdef __cplusplus
namespace ABI {
    namespace Lumia {
        namespace Imaging {
            namespace Artistic {
                interface ICartoonFilterFactory;
            } /* end namespace */
        } /* end namespace */
    } /* end namespace */
} /* end namespace */

#endif /* __cplusplus */

#endif 	/* ____x_ABI_CLumia_CImaging_CArtistic_CICartoonFilterFactory_FWD_DEFINED__ */


#ifndef ____x_ABI_CLumia_CImaging_CArtistic_CIColorSwapFilter_FWD_DEFINED__
#define ____x_ABI_CLumia_CImaging_CArtistic_CIColorSwapFilter_FWD_DEFINED__
typedef interface __x_ABI_CLumia_CImaging_CArtistic_CIColorSwapFilter __x_ABI_CLumia_CImaging_CArtistic_CIColorSwapFilter;

#ifdef __cplusplus
namespace ABI {
    namespace Lumia {
        namespace Imaging {
            namespace Artistic {
                interface IColorSwapFilter;
            } /* end namespace */
        } /* end namespace */
    } /* end namespace */
} /* end namespace */

#endif /* __cplusplus */

#endif 	/* ____x_ABI_CLumia_CImaging_CArtistic_CIColorSwapFilter_FWD_DEFINED__ */


#ifndef ____x_ABI_CLumia_CImaging_CArtistic_CIColorSwapFilterFactory_FWD_DEFINED__
#define ____x_ABI_CLumia_CImaging_CArtistic_CIColorSwapFilterFactory_FWD_DEFINED__
typedef interface __x_ABI_CLumia_CImaging_CArtistic_CIColorSwapFilterFactory __x_ABI_CLumia_CImaging_CArtistic_CIColorSwapFilterFactory;

#ifdef __cplusplus
namespace ABI {
    namespace Lumia {
        namespace Imaging {
            namespace Artistic {
                interface IColorSwapFilterFactory;
            } /* end namespace */
        } /* end namespace */
    } /* end namespace */
} /* end namespace */

#endif /* __cplusplus */

#endif 	/* ____x_ABI_CLumia_CImaging_CArtistic_CIColorSwapFilterFactory_FWD_DEFINED__ */


#ifndef ____x_ABI_CLumia_CImaging_CArtistic_CIEmbossFilter_FWD_DEFINED__
#define ____x_ABI_CLumia_CImaging_CArtistic_CIEmbossFilter_FWD_DEFINED__
typedef interface __x_ABI_CLumia_CImaging_CArtistic_CIEmbossFilter __x_ABI_CLumia_CImaging_CArtistic_CIEmbossFilter;

#ifdef __cplusplus
namespace ABI {
    namespace Lumia {
        namespace Imaging {
            namespace Artistic {
                interface IEmbossFilter;
            } /* end namespace */
        } /* end namespace */
    } /* end namespace */
} /* end namespace */

#endif /* __cplusplus */

#endif 	/* ____x_ABI_CLumia_CImaging_CArtistic_CIEmbossFilter_FWD_DEFINED__ */


#ifndef ____x_ABI_CLumia_CImaging_CArtistic_CIEmbossFilterFactory_FWD_DEFINED__
#define ____x_ABI_CLumia_CImaging_CArtistic_CIEmbossFilterFactory_FWD_DEFINED__
typedef interface __x_ABI_CLumia_CImaging_CArtistic_CIEmbossFilterFactory __x_ABI_CLumia_CImaging_CArtistic_CIEmbossFilterFactory;

#ifdef __cplusplus
namespace ABI {
    namespace Lumia {
        namespace Imaging {
            namespace Artistic {
                interface IEmbossFilterFactory;
            } /* end namespace */
        } /* end namespace */
    } /* end namespace */
} /* end namespace */

#endif /* __cplusplus */

#endif 	/* ____x_ABI_CLumia_CImaging_CArtistic_CIEmbossFilterFactory_FWD_DEFINED__ */


#ifndef ____x_ABI_CLumia_CImaging_CArtistic_CIFogFilter_FWD_DEFINED__
#define ____x_ABI_CLumia_CImaging_CArtistic_CIFogFilter_FWD_DEFINED__
typedef interface __x_ABI_CLumia_CImaging_CArtistic_CIFogFilter __x_ABI_CLumia_CImaging_CArtistic_CIFogFilter;

#ifdef __cplusplus
namespace ABI {
    namespace Lumia {
        namespace Imaging {
            namespace Artistic {
                interface IFogFilter;
            } /* end namespace */
        } /* end namespace */
    } /* end namespace */
} /* end namespace */

#endif /* __cplusplus */

#endif 	/* ____x_ABI_CLumia_CImaging_CArtistic_CIFogFilter_FWD_DEFINED__ */


#ifndef ____x_ABI_CLumia_CImaging_CArtistic_CIFoundationFilter_FWD_DEFINED__
#define ____x_ABI_CLumia_CImaging_CArtistic_CIFoundationFilter_FWD_DEFINED__
typedef interface __x_ABI_CLumia_CImaging_CArtistic_CIFoundationFilter __x_ABI_CLumia_CImaging_CArtistic_CIFoundationFilter;

#ifdef __cplusplus
namespace ABI {
    namespace Lumia {
        namespace Imaging {
            namespace Artistic {
                interface IFoundationFilter;
            } /* end namespace */
        } /* end namespace */
    } /* end namespace */
} /* end namespace */

#endif /* __cplusplus */

#endif 	/* ____x_ABI_CLumia_CImaging_CArtistic_CIFoundationFilter_FWD_DEFINED__ */


#ifndef ____x_ABI_CLumia_CImaging_CArtistic_CIFoundationFilterFactory_FWD_DEFINED__
#define ____x_ABI_CLumia_CImaging_CArtistic_CIFoundationFilterFactory_FWD_DEFINED__
typedef interface __x_ABI_CLumia_CImaging_CArtistic_CIFoundationFilterFactory __x_ABI_CLumia_CImaging_CArtistic_CIFoundationFilterFactory;

#ifdef __cplusplus
namespace ABI {
    namespace Lumia {
        namespace Imaging {
            namespace Artistic {
                interface IFoundationFilterFactory;
            } /* end namespace */
        } /* end namespace */
    } /* end namespace */
} /* end namespace */

#endif /* __cplusplus */

#endif 	/* ____x_ABI_CLumia_CImaging_CArtistic_CIFoundationFilterFactory_FWD_DEFINED__ */


#ifndef ____x_ABI_CLumia_CImaging_CArtistic_CIGrayscaleNegativeFilter_FWD_DEFINED__
#define ____x_ABI_CLumia_CImaging_CArtistic_CIGrayscaleNegativeFilter_FWD_DEFINED__
typedef interface __x_ABI_CLumia_CImaging_CArtistic_CIGrayscaleNegativeFilter __x_ABI_CLumia_CImaging_CArtistic_CIGrayscaleNegativeFilter;

#ifdef __cplusplus
namespace ABI {
    namespace Lumia {
        namespace Imaging {
            namespace Artistic {
                interface IGrayscaleNegativeFilter;
            } /* end namespace */
        } /* end namespace */
    } /* end namespace */
} /* end namespace */

#endif /* __cplusplus */

#endif 	/* ____x_ABI_CLumia_CImaging_CArtistic_CIGrayscaleNegativeFilter_FWD_DEFINED__ */


#ifndef ____x_ABI_CLumia_CImaging_CArtistic_CILomoFilter_FWD_DEFINED__
#define ____x_ABI_CLumia_CImaging_CArtistic_CILomoFilter_FWD_DEFINED__
typedef interface __x_ABI_CLumia_CImaging_CArtistic_CILomoFilter __x_ABI_CLumia_CImaging_CArtistic_CILomoFilter;

#ifdef __cplusplus
namespace ABI {
    namespace Lumia {
        namespace Imaging {
            namespace Artistic {
                interface ILomoFilter;
            } /* end namespace */
        } /* end namespace */
    } /* end namespace */
} /* end namespace */

#endif /* __cplusplus */

#endif 	/* ____x_ABI_CLumia_CImaging_CArtistic_CILomoFilter_FWD_DEFINED__ */


#ifndef ____x_ABI_CLumia_CImaging_CArtistic_CILomoFilterFactory_FWD_DEFINED__
#define ____x_ABI_CLumia_CImaging_CArtistic_CILomoFilterFactory_FWD_DEFINED__
typedef interface __x_ABI_CLumia_CImaging_CArtistic_CILomoFilterFactory __x_ABI_CLumia_CImaging_CArtistic_CILomoFilterFactory;

#ifdef __cplusplus
namespace ABI {
    namespace Lumia {
        namespace Imaging {
            namespace Artistic {
                interface ILomoFilterFactory;
            } /* end namespace */
        } /* end namespace */
    } /* end namespace */
} /* end namespace */

#endif /* __cplusplus */

#endif 	/* ____x_ABI_CLumia_CImaging_CArtistic_CILomoFilterFactory_FWD_DEFINED__ */


#ifndef ____x_ABI_CLumia_CImaging_CArtistic_CIMagicPenFilter_FWD_DEFINED__
#define ____x_ABI_CLumia_CImaging_CArtistic_CIMagicPenFilter_FWD_DEFINED__
typedef interface __x_ABI_CLumia_CImaging_CArtistic_CIMagicPenFilter __x_ABI_CLumia_CImaging_CArtistic_CIMagicPenFilter;

#ifdef __cplusplus
namespace ABI {
    namespace Lumia {
        namespace Imaging {
            namespace Artistic {
                interface IMagicPenFilter;
            } /* end namespace */
        } /* end namespace */
    } /* end namespace */
} /* end namespace */

#endif /* __cplusplus */

#endif 	/* ____x_ABI_CLumia_CImaging_CArtistic_CIMagicPenFilter_FWD_DEFINED__ */


#ifndef ____x_ABI_CLumia_CImaging_CArtistic_CIMilkyFilter_FWD_DEFINED__
#define ____x_ABI_CLumia_CImaging_CArtistic_CIMilkyFilter_FWD_DEFINED__
typedef interface __x_ABI_CLumia_CImaging_CArtistic_CIMilkyFilter __x_ABI_CLumia_CImaging_CArtistic_CIMilkyFilter;

#ifdef __cplusplus
namespace ABI {
    namespace Lumia {
        namespace Imaging {
            namespace Artistic {
                interface IMilkyFilter;
            } /* end namespace */
        } /* end namespace */
    } /* end namespace */
} /* end namespace */

#endif /* __cplusplus */

#endif 	/* ____x_ABI_CLumia_CImaging_CArtistic_CIMilkyFilter_FWD_DEFINED__ */


#ifndef ____x_ABI_CLumia_CImaging_CArtistic_CIMirrorFilter_FWD_DEFINED__
#define ____x_ABI_CLumia_CImaging_CArtistic_CIMirrorFilter_FWD_DEFINED__
typedef interface __x_ABI_CLumia_CImaging_CArtistic_CIMirrorFilter __x_ABI_CLumia_CImaging_CArtistic_CIMirrorFilter;

#ifdef __cplusplus
namespace ABI {
    namespace Lumia {
        namespace Imaging {
            namespace Artistic {
                interface IMirrorFilter;
            } /* end namespace */
        } /* end namespace */
    } /* end namespace */
} /* end namespace */

#endif /* __cplusplus */

#endif 	/* ____x_ABI_CLumia_CImaging_CArtistic_CIMirrorFilter_FWD_DEFINED__ */


#ifndef ____x_ABI_CLumia_CImaging_CArtistic_CIMonoColorFilter_FWD_DEFINED__
#define ____x_ABI_CLumia_CImaging_CArtistic_CIMonoColorFilter_FWD_DEFINED__
typedef interface __x_ABI_CLumia_CImaging_CArtistic_CIMonoColorFilter __x_ABI_CLumia_CImaging_CArtistic_CIMonoColorFilter;

#ifdef __cplusplus
namespace ABI {
    namespace Lumia {
        namespace Imaging {
            namespace Artistic {
                interface IMonoColorFilter;
            } /* end namespace */
        } /* end namespace */
    } /* end namespace */
} /* end namespace */

#endif /* __cplusplus */

#endif 	/* ____x_ABI_CLumia_CImaging_CArtistic_CIMonoColorFilter_FWD_DEFINED__ */


#ifndef ____x_ABI_CLumia_CImaging_CArtistic_CIMonoColorFilterFactory_FWD_DEFINED__
#define ____x_ABI_CLumia_CImaging_CArtistic_CIMonoColorFilterFactory_FWD_DEFINED__
typedef interface __x_ABI_CLumia_CImaging_CArtistic_CIMonoColorFilterFactory __x_ABI_CLumia_CImaging_CArtistic_CIMonoColorFilterFactory;

#ifdef __cplusplus
namespace ABI {
    namespace Lumia {
        namespace Imaging {
            namespace Artistic {
                interface IMonoColorFilterFactory;
            } /* end namespace */
        } /* end namespace */
    } /* end namespace */
} /* end namespace */

#endif /* __cplusplus */

#endif 	/* ____x_ABI_CLumia_CImaging_CArtistic_CIMonoColorFilterFactory_FWD_DEFINED__ */


#ifndef ____x_ABI_CLumia_CImaging_CArtistic_CIMoonlightFilter_FWD_DEFINED__
#define ____x_ABI_CLumia_CImaging_CArtistic_CIMoonlightFilter_FWD_DEFINED__
typedef interface __x_ABI_CLumia_CImaging_CArtistic_CIMoonlightFilter __x_ABI_CLumia_CImaging_CArtistic_CIMoonlightFilter;

#ifdef __cplusplus
namespace ABI {
    namespace Lumia {
        namespace Imaging {
            namespace Artistic {
                interface IMoonlightFilter;
            } /* end namespace */
        } /* end namespace */
    } /* end namespace */
} /* end namespace */

#endif /* __cplusplus */

#endif 	/* ____x_ABI_CLumia_CImaging_CArtistic_CIMoonlightFilter_FWD_DEFINED__ */


#ifndef ____x_ABI_CLumia_CImaging_CArtistic_CIMoonlightFilterFactory_FWD_DEFINED__
#define ____x_ABI_CLumia_CImaging_CArtistic_CIMoonlightFilterFactory_FWD_DEFINED__
typedef interface __x_ABI_CLumia_CImaging_CArtistic_CIMoonlightFilterFactory __x_ABI_CLumia_CImaging_CArtistic_CIMoonlightFilterFactory;

#ifdef __cplusplus
namespace ABI {
    namespace Lumia {
        namespace Imaging {
            namespace Artistic {
                interface IMoonlightFilterFactory;
            } /* end namespace */
        } /* end namespace */
    } /* end namespace */
} /* end namespace */

#endif /* __cplusplus */

#endif 	/* ____x_ABI_CLumia_CImaging_CArtistic_CIMoonlightFilterFactory_FWD_DEFINED__ */


#ifndef ____x_ABI_CLumia_CImaging_CArtistic_CINegativeFilter_FWD_DEFINED__
#define ____x_ABI_CLumia_CImaging_CArtistic_CINegativeFilter_FWD_DEFINED__
typedef interface __x_ABI_CLumia_CImaging_CArtistic_CINegativeFilter __x_ABI_CLumia_CImaging_CArtistic_CINegativeFilter;

#ifdef __cplusplus
namespace ABI {
    namespace Lumia {
        namespace Imaging {
            namespace Artistic {
                interface INegativeFilter;
            } /* end namespace */
        } /* end namespace */
    } /* end namespace */
} /* end namespace */

#endif /* __cplusplus */

#endif 	/* ____x_ABI_CLumia_CImaging_CArtistic_CINegativeFilter_FWD_DEFINED__ */


#ifndef ____x_ABI_CLumia_CImaging_CArtistic_CIOilyFilter_FWD_DEFINED__
#define ____x_ABI_CLumia_CImaging_CArtistic_CIOilyFilter_FWD_DEFINED__
typedef interface __x_ABI_CLumia_CImaging_CArtistic_CIOilyFilter __x_ABI_CLumia_CImaging_CArtistic_CIOilyFilter;

#ifdef __cplusplus
namespace ABI {
    namespace Lumia {
        namespace Imaging {
            namespace Artistic {
                interface IOilyFilter;
            } /* end namespace */
        } /* end namespace */
    } /* end namespace */
} /* end namespace */

#endif /* __cplusplus */

#endif 	/* ____x_ABI_CLumia_CImaging_CArtistic_CIOilyFilter_FWD_DEFINED__ */


#ifndef ____x_ABI_CLumia_CImaging_CArtistic_CIOilyFilterFactory_FWD_DEFINED__
#define ____x_ABI_CLumia_CImaging_CArtistic_CIOilyFilterFactory_FWD_DEFINED__
typedef interface __x_ABI_CLumia_CImaging_CArtistic_CIOilyFilterFactory __x_ABI_CLumia_CImaging_CArtistic_CIOilyFilterFactory;

#ifdef __cplusplus
namespace ABI {
    namespace Lumia {
        namespace Imaging {
            namespace Artistic {
                interface IOilyFilterFactory;
            } /* end namespace */
        } /* end namespace */
    } /* end namespace */
} /* end namespace */

#endif /* __cplusplus */

#endif 	/* ____x_ABI_CLumia_CImaging_CArtistic_CIOilyFilterFactory_FWD_DEFINED__ */


#ifndef ____x_ABI_CLumia_CImaging_CArtistic_CIPaintFilter_FWD_DEFINED__
#define ____x_ABI_CLumia_CImaging_CArtistic_CIPaintFilter_FWD_DEFINED__
typedef interface __x_ABI_CLumia_CImaging_CArtistic_CIPaintFilter __x_ABI_CLumia_CImaging_CArtistic_CIPaintFilter;

#ifdef __cplusplus
namespace ABI {
    namespace Lumia {
        namespace Imaging {
            namespace Artistic {
                interface IPaintFilter;
            } /* end namespace */
        } /* end namespace */
    } /* end namespace */
} /* end namespace */

#endif /* __cplusplus */

#endif 	/* ____x_ABI_CLumia_CImaging_CArtistic_CIPaintFilter_FWD_DEFINED__ */


#ifndef ____x_ABI_CLumia_CImaging_CArtistic_CIPaintFilterFactory_FWD_DEFINED__
#define ____x_ABI_CLumia_CImaging_CArtistic_CIPaintFilterFactory_FWD_DEFINED__
typedef interface __x_ABI_CLumia_CImaging_CArtistic_CIPaintFilterFactory __x_ABI_CLumia_CImaging_CArtistic_CIPaintFilterFactory;

#ifdef __cplusplus
namespace ABI {
    namespace Lumia {
        namespace Imaging {
            namespace Artistic {
                interface IPaintFilterFactory;
            } /* end namespace */
        } /* end namespace */
    } /* end namespace */
} /* end namespace */

#endif /* __cplusplus */

#endif 	/* ____x_ABI_CLumia_CImaging_CArtistic_CIPaintFilterFactory_FWD_DEFINED__ */


#ifndef ____x_ABI_CLumia_CImaging_CArtistic_CIPosterizeFilter_FWD_DEFINED__
#define ____x_ABI_CLumia_CImaging_CArtistic_CIPosterizeFilter_FWD_DEFINED__
typedef interface __x_ABI_CLumia_CImaging_CArtistic_CIPosterizeFilter __x_ABI_CLumia_CImaging_CArtistic_CIPosterizeFilter;

#ifdef __cplusplus
namespace ABI {
    namespace Lumia {
        namespace Imaging {
            namespace Artistic {
                interface IPosterizeFilter;
            } /* end namespace */
        } /* end namespace */
    } /* end namespace */
} /* end namespace */

#endif /* __cplusplus */

#endif 	/* ____x_ABI_CLumia_CImaging_CArtistic_CIPosterizeFilter_FWD_DEFINED__ */


#ifndef ____x_ABI_CLumia_CImaging_CArtistic_CIPosterizeFilterFactory_FWD_DEFINED__
#define ____x_ABI_CLumia_CImaging_CArtistic_CIPosterizeFilterFactory_FWD_DEFINED__
typedef interface __x_ABI_CLumia_CImaging_CArtistic_CIPosterizeFilterFactory __x_ABI_CLumia_CImaging_CArtistic_CIPosterizeFilterFactory;

#ifdef __cplusplus
namespace ABI {
    namespace Lumia {
        namespace Imaging {
            namespace Artistic {
                interface IPosterizeFilterFactory;
            } /* end namespace */
        } /* end namespace */
    } /* end namespace */
} /* end namespace */

#endif /* __cplusplus */

#endif 	/* ____x_ABI_CLumia_CImaging_CArtistic_CIPosterizeFilterFactory_FWD_DEFINED__ */


#ifndef ____x_ABI_CLumia_CImaging_CArtistic_CISepiaFilter_FWD_DEFINED__
#define ____x_ABI_CLumia_CImaging_CArtistic_CISepiaFilter_FWD_DEFINED__
typedef interface __x_ABI_CLumia_CImaging_CArtistic_CISepiaFilter __x_ABI_CLumia_CImaging_CArtistic_CISepiaFilter;

#ifdef __cplusplus
namespace ABI {
    namespace Lumia {
        namespace Imaging {
            namespace Artistic {
                interface ISepiaFilter;
            } /* end namespace */
        } /* end namespace */
    } /* end namespace */
} /* end namespace */

#endif /* __cplusplus */

#endif 	/* ____x_ABI_CLumia_CImaging_CArtistic_CISepiaFilter_FWD_DEFINED__ */


#ifndef ____x_ABI_CLumia_CImaging_CArtistic_CISketchFilter_FWD_DEFINED__
#define ____x_ABI_CLumia_CImaging_CArtistic_CISketchFilter_FWD_DEFINED__
typedef interface __x_ABI_CLumia_CImaging_CArtistic_CISketchFilter __x_ABI_CLumia_CImaging_CArtistic_CISketchFilter;

#ifdef __cplusplus
namespace ABI {
    namespace Lumia {
        namespace Imaging {
            namespace Artistic {
                interface ISketchFilter;
            } /* end namespace */
        } /* end namespace */
    } /* end namespace */
} /* end namespace */

#endif /* __cplusplus */

#endif 	/* ____x_ABI_CLumia_CImaging_CArtistic_CISketchFilter_FWD_DEFINED__ */


#ifndef ____x_ABI_CLumia_CImaging_CArtistic_CISketchFilterFactory_FWD_DEFINED__
#define ____x_ABI_CLumia_CImaging_CArtistic_CISketchFilterFactory_FWD_DEFINED__
typedef interface __x_ABI_CLumia_CImaging_CArtistic_CISketchFilterFactory __x_ABI_CLumia_CImaging_CArtistic_CISketchFilterFactory;

#ifdef __cplusplus
namespace ABI {
    namespace Lumia {
        namespace Imaging {
            namespace Artistic {
                interface ISketchFilterFactory;
            } /* end namespace */
        } /* end namespace */
    } /* end namespace */
} /* end namespace */

#endif /* __cplusplus */

#endif 	/* ____x_ABI_CLumia_CImaging_CArtistic_CISketchFilterFactory_FWD_DEFINED__ */


#ifndef ____x_ABI_CLumia_CImaging_CArtistic_CISolarizeFilter_FWD_DEFINED__
#define ____x_ABI_CLumia_CImaging_CArtistic_CISolarizeFilter_FWD_DEFINED__
typedef interface __x_ABI_CLumia_CImaging_CArtistic_CISolarizeFilter __x_ABI_CLumia_CImaging_CArtistic_CISolarizeFilter;

#ifdef __cplusplus
namespace ABI {
    namespace Lumia {
        namespace Imaging {
            namespace Artistic {
                interface ISolarizeFilter;
            } /* end namespace */
        } /* end namespace */
    } /* end namespace */
} /* end namespace */

#endif /* __cplusplus */

#endif 	/* ____x_ABI_CLumia_CImaging_CArtistic_CISolarizeFilter_FWD_DEFINED__ */


#ifndef ____x_ABI_CLumia_CImaging_CArtistic_CISolarizeFilterFactory_FWD_DEFINED__
#define ____x_ABI_CLumia_CImaging_CArtistic_CISolarizeFilterFactory_FWD_DEFINED__
typedef interface __x_ABI_CLumia_CImaging_CArtistic_CISolarizeFilterFactory __x_ABI_CLumia_CImaging_CArtistic_CISolarizeFilterFactory;

#ifdef __cplusplus
namespace ABI {
    namespace Lumia {
        namespace Imaging {
            namespace Artistic {
                interface ISolarizeFilterFactory;
            } /* end namespace */
        } /* end namespace */
    } /* end namespace */
} /* end namespace */

#endif /* __cplusplus */

#endif 	/* ____x_ABI_CLumia_CImaging_CArtistic_CISolarizeFilterFactory_FWD_DEFINED__ */


#ifndef ____x_ABI_CLumia_CImaging_CArtistic_CISplitToneRange_FWD_DEFINED__
#define ____x_ABI_CLumia_CImaging_CArtistic_CISplitToneRange_FWD_DEFINED__
typedef interface __x_ABI_CLumia_CImaging_CArtistic_CISplitToneRange __x_ABI_CLumia_CImaging_CArtistic_CISplitToneRange;

#ifdef __cplusplus
namespace ABI {
    namespace Lumia {
        namespace Imaging {
            namespace Artistic {
                interface ISplitToneRange;
            } /* end namespace */
        } /* end namespace */
    } /* end namespace */
} /* end namespace */

#endif /* __cplusplus */

#endif 	/* ____x_ABI_CLumia_CImaging_CArtistic_CISplitToneRange_FWD_DEFINED__ */


#ifndef ____x_ABI_CLumia_CImaging_CArtistic_CISplitToneRangeFactory_FWD_DEFINED__
#define ____x_ABI_CLumia_CImaging_CArtistic_CISplitToneRangeFactory_FWD_DEFINED__
typedef interface __x_ABI_CLumia_CImaging_CArtistic_CISplitToneRangeFactory __x_ABI_CLumia_CImaging_CArtistic_CISplitToneRangeFactory;

#ifdef __cplusplus
namespace ABI {
    namespace Lumia {
        namespace Imaging {
            namespace Artistic {
                interface ISplitToneRangeFactory;
            } /* end namespace */
        } /* end namespace */
    } /* end namespace */
} /* end namespace */

#endif /* __cplusplus */

#endif 	/* ____x_ABI_CLumia_CImaging_CArtistic_CISplitToneRangeFactory_FWD_DEFINED__ */


#ifndef ____x_ABI_CLumia_CImaging_CArtistic_CISplitToneFilter_FWD_DEFINED__
#define ____x_ABI_CLumia_CImaging_CArtistic_CISplitToneFilter_FWD_DEFINED__
typedef interface __x_ABI_CLumia_CImaging_CArtistic_CISplitToneFilter __x_ABI_CLumia_CImaging_CArtistic_CISplitToneFilter;

#ifdef __cplusplus
namespace ABI {
    namespace Lumia {
        namespace Imaging {
            namespace Artistic {
                interface ISplitToneFilter;
            } /* end namespace */
        } /* end namespace */
    } /* end namespace */
} /* end namespace */

#endif /* __cplusplus */

#endif 	/* ____x_ABI_CLumia_CImaging_CArtistic_CISplitToneFilter_FWD_DEFINED__ */


#ifndef ____x_ABI_CLumia_CImaging_CArtistic_CISplitToneFilterFactory_FWD_DEFINED__
#define ____x_ABI_CLumia_CImaging_CArtistic_CISplitToneFilterFactory_FWD_DEFINED__
typedef interface __x_ABI_CLumia_CImaging_CArtistic_CISplitToneFilterFactory __x_ABI_CLumia_CImaging_CArtistic_CISplitToneFilterFactory;

#ifdef __cplusplus
namespace ABI {
    namespace Lumia {
        namespace Imaging {
            namespace Artistic {
                interface ISplitToneFilterFactory;
            } /* end namespace */
        } /* end namespace */
    } /* end namespace */
} /* end namespace */

#endif /* __cplusplus */

#endif 	/* ____x_ABI_CLumia_CImaging_CArtistic_CISplitToneFilterFactory_FWD_DEFINED__ */


#ifndef ____x_ABI_CLumia_CImaging_CArtistic_CISpotlightFilter_FWD_DEFINED__
#define ____x_ABI_CLumia_CImaging_CArtistic_CISpotlightFilter_FWD_DEFINED__
typedef interface __x_ABI_CLumia_CImaging_CArtistic_CISpotlightFilter __x_ABI_CLumia_CImaging_CArtistic_CISpotlightFilter;

#ifdef __cplusplus
namespace ABI {
    namespace Lumia {
        namespace Imaging {
            namespace Artistic {
                interface ISpotlightFilter;
            } /* end namespace */
        } /* end namespace */
    } /* end namespace */
} /* end namespace */

#endif /* __cplusplus */

#endif 	/* ____x_ABI_CLumia_CImaging_CArtistic_CISpotlightFilter_FWD_DEFINED__ */


#ifndef ____x_ABI_CLumia_CImaging_CArtistic_CISpotlightFilterFactory_FWD_DEFINED__
#define ____x_ABI_CLumia_CImaging_CArtistic_CISpotlightFilterFactory_FWD_DEFINED__
typedef interface __x_ABI_CLumia_CImaging_CArtistic_CISpotlightFilterFactory __x_ABI_CLumia_CImaging_CArtistic_CISpotlightFilterFactory;

#ifdef __cplusplus
namespace ABI {
    namespace Lumia {
        namespace Imaging {
            namespace Artistic {
                interface ISpotlightFilterFactory;
            } /* end namespace */
        } /* end namespace */
    } /* end namespace */
} /* end namespace */

#endif /* __cplusplus */

#endif 	/* ____x_ABI_CLumia_CImaging_CArtistic_CISpotlightFilterFactory_FWD_DEFINED__ */


#ifndef ____x_ABI_CLumia_CImaging_CArtistic_CIStampFilter_FWD_DEFINED__
#define ____x_ABI_CLumia_CImaging_CArtistic_CIStampFilter_FWD_DEFINED__
typedef interface __x_ABI_CLumia_CImaging_CArtistic_CIStampFilter __x_ABI_CLumia_CImaging_CArtistic_CIStampFilter;

#ifdef __cplusplus
namespace ABI {
    namespace Lumia {
        namespace Imaging {
            namespace Artistic {
                interface IStampFilter;
            } /* end namespace */
        } /* end namespace */
    } /* end namespace */
} /* end namespace */

#endif /* __cplusplus */

#endif 	/* ____x_ABI_CLumia_CImaging_CArtistic_CIStampFilter_FWD_DEFINED__ */


#ifndef ____x_ABI_CLumia_CImaging_CArtistic_CIStampFilterFactory_FWD_DEFINED__
#define ____x_ABI_CLumia_CImaging_CArtistic_CIStampFilterFactory_FWD_DEFINED__
typedef interface __x_ABI_CLumia_CImaging_CArtistic_CIStampFilterFactory __x_ABI_CLumia_CImaging_CArtistic_CIStampFilterFactory;

#ifdef __cplusplus
namespace ABI {
    namespace Lumia {
        namespace Imaging {
            namespace Artistic {
                interface IStampFilterFactory;
            } /* end namespace */
        } /* end namespace */
    } /* end namespace */
} /* end namespace */

#endif /* __cplusplus */

#endif 	/* ____x_ABI_CLumia_CImaging_CArtistic_CIStampFilterFactory_FWD_DEFINED__ */


#ifndef ____x_ABI_CLumia_CImaging_CArtistic_CIVignettingFilter_FWD_DEFINED__
#define ____x_ABI_CLumia_CImaging_CArtistic_CIVignettingFilter_FWD_DEFINED__
typedef interface __x_ABI_CLumia_CImaging_CArtistic_CIVignettingFilter __x_ABI_CLumia_CImaging_CArtistic_CIVignettingFilter;

#ifdef __cplusplus
namespace ABI {
    namespace Lumia {
        namespace Imaging {
            namespace Artistic {
                interface IVignettingFilter;
            } /* end namespace */
        } /* end namespace */
    } /* end namespace */
} /* end namespace */

#endif /* __cplusplus */

#endif 	/* ____x_ABI_CLumia_CImaging_CArtistic_CIVignettingFilter_FWD_DEFINED__ */


#ifndef ____x_ABI_CLumia_CImaging_CArtistic_CIVignettingFilterFactory_FWD_DEFINED__
#define ____x_ABI_CLumia_CImaging_CArtistic_CIVignettingFilterFactory_FWD_DEFINED__
typedef interface __x_ABI_CLumia_CImaging_CArtistic_CIVignettingFilterFactory __x_ABI_CLumia_CImaging_CArtistic_CIVignettingFilterFactory;

#ifdef __cplusplus
namespace ABI {
    namespace Lumia {
        namespace Imaging {
            namespace Artistic {
                interface IVignettingFilterFactory;
            } /* end namespace */
        } /* end namespace */
    } /* end namespace */
} /* end namespace */

#endif /* __cplusplus */

#endif 	/* ____x_ABI_CLumia_CImaging_CArtistic_CIVignettingFilterFactory_FWD_DEFINED__ */


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


#ifndef ____FIVector_1_Windows__CFoundation__CRect_FWD_DEFINED__
#define ____FIVector_1_Windows__CFoundation__CRect_FWD_DEFINED__
typedef interface __FIVector_1_Windows__CFoundation__CRect __FIVector_1_Windows__CFoundation__CRect;

#endif 	/* ____FIVector_1_Windows__CFoundation__CRect_FWD_DEFINED__ */


#ifndef ____x_ABI_CLumia_CImaging_CArtistic_CIWarpFilter_FWD_DEFINED__
#define ____x_ABI_CLumia_CImaging_CArtistic_CIWarpFilter_FWD_DEFINED__
typedef interface __x_ABI_CLumia_CImaging_CArtistic_CIWarpFilter __x_ABI_CLumia_CImaging_CArtistic_CIWarpFilter;

#ifdef __cplusplus
namespace ABI {
    namespace Lumia {
        namespace Imaging {
            namespace Artistic {
                interface IWarpFilter;
            } /* end namespace */
        } /* end namespace */
    } /* end namespace */
} /* end namespace */

#endif /* __cplusplus */

#endif 	/* ____x_ABI_CLumia_CImaging_CArtistic_CIWarpFilter_FWD_DEFINED__ */


#ifndef ____x_ABI_CLumia_CImaging_CArtistic_CIWarpFilterFactory_FWD_DEFINED__
#define ____x_ABI_CLumia_CImaging_CArtistic_CIWarpFilterFactory_FWD_DEFINED__
typedef interface __x_ABI_CLumia_CImaging_CArtistic_CIWarpFilterFactory __x_ABI_CLumia_CImaging_CArtistic_CIWarpFilterFactory;

#ifdef __cplusplus
namespace ABI {
    namespace Lumia {
        namespace Imaging {
            namespace Artistic {
                interface IWarpFilterFactory;
            } /* end namespace */
        } /* end namespace */
    } /* end namespace */
} /* end namespace */

#endif /* __cplusplus */

#endif 	/* ____x_ABI_CLumia_CImaging_CArtistic_CIWarpFilterFactory_FWD_DEFINED__ */


#ifndef ____x_ABI_CLumia_CImaging_CArtistic_CIWatercolorFilter_FWD_DEFINED__
#define ____x_ABI_CLumia_CImaging_CArtistic_CIWatercolorFilter_FWD_DEFINED__
typedef interface __x_ABI_CLumia_CImaging_CArtistic_CIWatercolorFilter __x_ABI_CLumia_CImaging_CArtistic_CIWatercolorFilter;

#ifdef __cplusplus
namespace ABI {
    namespace Lumia {
        namespace Imaging {
            namespace Artistic {
                interface IWatercolorFilter;
            } /* end namespace */
        } /* end namespace */
    } /* end namespace */
} /* end namespace */

#endif /* __cplusplus */

#endif 	/* ____x_ABI_CLumia_CImaging_CArtistic_CIWatercolorFilter_FWD_DEFINED__ */


#ifndef ____x_ABI_CLumia_CImaging_CArtistic_CIWatercolorFilterFactory_FWD_DEFINED__
#define ____x_ABI_CLumia_CImaging_CArtistic_CIWatercolorFilterFactory_FWD_DEFINED__
typedef interface __x_ABI_CLumia_CImaging_CArtistic_CIWatercolorFilterFactory __x_ABI_CLumia_CImaging_CArtistic_CIWatercolorFilterFactory;

#ifdef __cplusplus
namespace ABI {
    namespace Lumia {
        namespace Imaging {
            namespace Artistic {
                interface IWatercolorFilterFactory;
            } /* end namespace */
        } /* end namespace */
    } /* end namespace */
} /* end namespace */

#endif /* __cplusplus */

#endif 	/* ____x_ABI_CLumia_CImaging_CArtistic_CIWatercolorFilterFactory_FWD_DEFINED__ */


/* header files for imported files */
#include "inspectable.h"
#include "AsyncInfo.h"
#include "EventToken.h"
#include "Windows.Foundation.h"
#include "Lumia.Imaging.h"

#ifdef __cplusplus
extern "C"{
#endif 


/* interface __MIDL_itf_Lumia2EImaging2EArtistic_0000_0000 */
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
namespace Artistic {
class SplitToneRange;
} /*Artistic*/
} /*Imaging*/
} /*Lumia*/
}
#endif

#ifdef __cplusplus
namespace ABI {
namespace Lumia {
namespace Imaging {
namespace Artistic {
interface ISplitToneRange;
} /*Artistic*/
} /*Imaging*/
} /*Lumia*/
}
#endif


/* interface __MIDL_itf_Lumia2EImaging2EArtistic_0000_0000 */
/* [local] */ 




extern RPC_IF_HANDLE __MIDL_itf_Lumia2EImaging2EArtistic_0000_0000_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_Lumia2EImaging2EArtistic_0000_0000_v0_0_s_ifspec;

/* interface __MIDL_itf_Lumia2EImaging2EArtistic_0000_2003 */




/* interface __MIDL_itf_Lumia2EImaging2EArtistic_0000_2003 */




extern RPC_IF_HANDLE __MIDL_itf_Lumia2EImaging2EArtistic_0000_2003_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_Lumia2EImaging2EArtistic_0000_2003_v0_0_s_ifspec;

/* interface __MIDL_itf_Lumia2EImaging2EArtistic_0000_0001 */
/* [local] */ 

#ifndef DEF___FIIterator_1_Lumia__CImaging__CArtistic__CSplitToneRange_USE
#define DEF___FIIterator_1_Lumia__CImaging__CArtistic__CSplitToneRange_USE
#if defined(__cplusplus) && !defined(RO_NO_TEMPLATE_NAME)
} /*extern "C"*/ 
namespace ABI { namespace Windows { namespace Foundation { namespace Collections {
template <>
struct __declspec(uuid("2c3a0ea0-9ccf-5a17-83bb-dd6ae4828a30"))
IIterator<ABI::Lumia::Imaging::Artistic::SplitToneRange*> : IIterator_impl<ABI::Windows::Foundation::Internal::AggregateType<ABI::Lumia::Imaging::Artistic::SplitToneRange*, ABI::Lumia::Imaging::Artistic::ISplitToneRange*>> {
static const wchar_t* z_get_rc_name_impl() {
return L"Windows.Foundation.Collections.IIterator`1<Lumia.Imaging.Artistic.SplitToneRange>"; }
};
typedef IIterator<ABI::Lumia::Imaging::Artistic::SplitToneRange*> __FIIterator_1_Lumia__CImaging__CArtistic__CSplitToneRange_t;
#define ____FIIterator_1_Lumia__CImaging__CArtistic__CSplitToneRange_FWD_DEFINED__
#define __FIIterator_1_Lumia__CImaging__CArtistic__CSplitToneRange ABI::Windows::Foundation::Collections::__FIIterator_1_Lumia__CImaging__CArtistic__CSplitToneRange_t

/* ABI */ } /* Windows */ } /* Foundation */ } /* Collections */ }
extern "C" {
#endif //__cplusplus
#endif /* DEF___FIIterator_1_Lumia__CImaging__CArtistic__CSplitToneRange_USE */


/* interface __MIDL_itf_Lumia2EImaging2EArtistic_0000_0001 */
/* [local] */ 




extern RPC_IF_HANDLE __MIDL_itf_Lumia2EImaging2EArtistic_0000_0001_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_Lumia2EImaging2EArtistic_0000_0001_v0_0_s_ifspec;

/* interface __MIDL_itf_Lumia2EImaging2EArtistic_0000_2004 */




/* interface __MIDL_itf_Lumia2EImaging2EArtistic_0000_2004 */




extern RPC_IF_HANDLE __MIDL_itf_Lumia2EImaging2EArtistic_0000_2004_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_Lumia2EImaging2EArtistic_0000_2004_v0_0_s_ifspec;

/* interface __MIDL_itf_Lumia2EImaging2EArtistic_0000_0002 */
/* [local] */ 

#ifndef DEF___FIIterable_1_Lumia__CImaging__CArtistic__CSplitToneRange_USE
#define DEF___FIIterable_1_Lumia__CImaging__CArtistic__CSplitToneRange_USE
#if defined(__cplusplus) && !defined(RO_NO_TEMPLATE_NAME)
} /*extern "C"*/ 
namespace ABI { namespace Windows { namespace Foundation { namespace Collections {
template <>
struct __declspec(uuid("e6e9ea14-2573-50bd-a726-9b00b880eda9"))
IIterable<ABI::Lumia::Imaging::Artistic::SplitToneRange*> : IIterable_impl<ABI::Windows::Foundation::Internal::AggregateType<ABI::Lumia::Imaging::Artistic::SplitToneRange*, ABI::Lumia::Imaging::Artistic::ISplitToneRange*>> {
static const wchar_t* z_get_rc_name_impl() {
return L"Windows.Foundation.Collections.IIterable`1<Lumia.Imaging.Artistic.SplitToneRange>"; }
};
typedef IIterable<ABI::Lumia::Imaging::Artistic::SplitToneRange*> __FIIterable_1_Lumia__CImaging__CArtistic__CSplitToneRange_t;
#define ____FIIterable_1_Lumia__CImaging__CArtistic__CSplitToneRange_FWD_DEFINED__
#define __FIIterable_1_Lumia__CImaging__CArtistic__CSplitToneRange ABI::Windows::Foundation::Collections::__FIIterable_1_Lumia__CImaging__CArtistic__CSplitToneRange_t

/* ABI */ } /* Windows */ } /* Foundation */ } /* Collections */ }
extern "C" {
#endif //__cplusplus
#endif /* DEF___FIIterable_1_Lumia__CImaging__CArtistic__CSplitToneRange_USE */


/* interface __MIDL_itf_Lumia2EImaging2EArtistic_0000_0002 */
/* [local] */ 




extern RPC_IF_HANDLE __MIDL_itf_Lumia2EImaging2EArtistic_0000_0002_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_Lumia2EImaging2EArtistic_0000_0002_v0_0_s_ifspec;

/* interface __MIDL_itf_Lumia2EImaging2EArtistic_0000_2005 */




/* interface __MIDL_itf_Lumia2EImaging2EArtistic_0000_2005 */




extern RPC_IF_HANDLE __MIDL_itf_Lumia2EImaging2EArtistic_0000_2005_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_Lumia2EImaging2EArtistic_0000_2005_v0_0_s_ifspec;

/* interface __MIDL_itf_Lumia2EImaging2EArtistic_0000_0003 */
/* [local] */ 

#ifndef DEF___FIVectorView_1_Lumia__CImaging__CArtistic__CSplitToneRange_USE
#define DEF___FIVectorView_1_Lumia__CImaging__CArtistic__CSplitToneRange_USE
#if defined(__cplusplus) && !defined(RO_NO_TEMPLATE_NAME)
} /*extern "C"*/ 
namespace ABI { namespace Windows { namespace Foundation { namespace Collections {
template <>
struct __declspec(uuid("b923a2bb-ed78-56ff-ba34-4cbce97f3ce6"))
IVectorView<ABI::Lumia::Imaging::Artistic::SplitToneRange*> : IVectorView_impl<ABI::Windows::Foundation::Internal::AggregateType<ABI::Lumia::Imaging::Artistic::SplitToneRange*, ABI::Lumia::Imaging::Artistic::ISplitToneRange*>> {
static const wchar_t* z_get_rc_name_impl() {
return L"Windows.Foundation.Collections.IVectorView`1<Lumia.Imaging.Artistic.SplitToneRange>"; }
};
typedef IVectorView<ABI::Lumia::Imaging::Artistic::SplitToneRange*> __FIVectorView_1_Lumia__CImaging__CArtistic__CSplitToneRange_t;
#define ____FIVectorView_1_Lumia__CImaging__CArtistic__CSplitToneRange_FWD_DEFINED__
#define __FIVectorView_1_Lumia__CImaging__CArtistic__CSplitToneRange ABI::Windows::Foundation::Collections::__FIVectorView_1_Lumia__CImaging__CArtistic__CSplitToneRange_t

/* ABI */ } /* Windows */ } /* Foundation */ } /* Collections */ }
extern "C" {
#endif //__cplusplus
#endif /* DEF___FIVectorView_1_Lumia__CImaging__CArtistic__CSplitToneRange_USE */


/* interface __MIDL_itf_Lumia2EImaging2EArtistic_0000_0003 */
/* [local] */ 




extern RPC_IF_HANDLE __MIDL_itf_Lumia2EImaging2EArtistic_0000_0003_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_Lumia2EImaging2EArtistic_0000_0003_v0_0_s_ifspec;

/* interface __MIDL_itf_Lumia2EImaging2EArtistic_0000_2006 */




/* interface __MIDL_itf_Lumia2EImaging2EArtistic_0000_2006 */




extern RPC_IF_HANDLE __MIDL_itf_Lumia2EImaging2EArtistic_0000_2006_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_Lumia2EImaging2EArtistic_0000_2006_v0_0_s_ifspec;

/* interface __MIDL_itf_Lumia2EImaging2EArtistic_0000_0004 */
/* [local] */ 

#ifndef DEF___FIVector_1_Lumia__CImaging__CArtistic__CSplitToneRange_USE
#define DEF___FIVector_1_Lumia__CImaging__CArtistic__CSplitToneRange_USE
#if defined(__cplusplus) && !defined(RO_NO_TEMPLATE_NAME)
} /*extern "C"*/ 
namespace ABI { namespace Windows { namespace Foundation { namespace Collections {
template <>
struct __declspec(uuid("9e95c2ef-c7b0-5d78-8b82-2a4adfbba6ae"))
IVector<ABI::Lumia::Imaging::Artistic::SplitToneRange*> : IVector_impl<ABI::Windows::Foundation::Internal::AggregateType<ABI::Lumia::Imaging::Artistic::SplitToneRange*, ABI::Lumia::Imaging::Artistic::ISplitToneRange*>> {
static const wchar_t* z_get_rc_name_impl() {
return L"Windows.Foundation.Collections.IVector`1<Lumia.Imaging.Artistic.SplitToneRange>"; }
};
typedef IVector<ABI::Lumia::Imaging::Artistic::SplitToneRange*> __FIVector_1_Lumia__CImaging__CArtistic__CSplitToneRange_t;
#define ____FIVector_1_Lumia__CImaging__CArtistic__CSplitToneRange_FWD_DEFINED__
#define __FIVector_1_Lumia__CImaging__CArtistic__CSplitToneRange ABI::Windows::Foundation::Collections::__FIVector_1_Lumia__CImaging__CArtistic__CSplitToneRange_t

/* ABI */ } /* Windows */ } /* Foundation */ } /* Collections */ }
extern "C" {
#endif //__cplusplus
#endif /* DEF___FIVector_1_Lumia__CImaging__CArtistic__CSplitToneRange_USE */

#ifdef __cplusplus
namespace ABI {
namespace Windows {
namespace Foundation {
struct Rect;
} /*Foundation*/
} /*Windows*/
}
#endif


/* interface __MIDL_itf_Lumia2EImaging2EArtistic_0000_0004 */
/* [local] */ 





extern RPC_IF_HANDLE __MIDL_itf_Lumia2EImaging2EArtistic_0000_0004_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_Lumia2EImaging2EArtistic_0000_0004_v0_0_s_ifspec;

/* interface __MIDL_itf_Lumia2EImaging2EArtistic_0000_2007 */




/* interface __MIDL_itf_Lumia2EImaging2EArtistic_0000_2007 */




extern RPC_IF_HANDLE __MIDL_itf_Lumia2EImaging2EArtistic_0000_2007_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_Lumia2EImaging2EArtistic_0000_2007_v0_0_s_ifspec;

/* interface __MIDL_itf_Lumia2EImaging2EArtistic_0000_0005 */
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


/* interface __MIDL_itf_Lumia2EImaging2EArtistic_0000_0005 */
/* [local] */ 




extern RPC_IF_HANDLE __MIDL_itf_Lumia2EImaging2EArtistic_0000_0005_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_Lumia2EImaging2EArtistic_0000_0005_v0_0_s_ifspec;

/* interface __MIDL_itf_Lumia2EImaging2EArtistic_0000_2008 */




/* interface __MIDL_itf_Lumia2EImaging2EArtistic_0000_2008 */




extern RPC_IF_HANDLE __MIDL_itf_Lumia2EImaging2EArtistic_0000_2008_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_Lumia2EImaging2EArtistic_0000_2008_v0_0_s_ifspec;

/* interface __MIDL_itf_Lumia2EImaging2EArtistic_0000_0006 */
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


/* interface __MIDL_itf_Lumia2EImaging2EArtistic_0000_0006 */
/* [local] */ 




extern RPC_IF_HANDLE __MIDL_itf_Lumia2EImaging2EArtistic_0000_0006_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_Lumia2EImaging2EArtistic_0000_0006_v0_0_s_ifspec;

/* interface __MIDL_itf_Lumia2EImaging2EArtistic_0000_2009 */




/* interface __MIDL_itf_Lumia2EImaging2EArtistic_0000_2009 */




extern RPC_IF_HANDLE __MIDL_itf_Lumia2EImaging2EArtistic_0000_2009_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_Lumia2EImaging2EArtistic_0000_2009_v0_0_s_ifspec;

/* interface __MIDL_itf_Lumia2EImaging2EArtistic_0000_0007 */
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


/* interface __MIDL_itf_Lumia2EImaging2EArtistic_0000_0007 */
/* [local] */ 




extern RPC_IF_HANDLE __MIDL_itf_Lumia2EImaging2EArtistic_0000_0007_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_Lumia2EImaging2EArtistic_0000_0007_v0_0_s_ifspec;

/* interface __MIDL_itf_Lumia2EImaging2EArtistic_0000_2010 */




/* interface __MIDL_itf_Lumia2EImaging2EArtistic_0000_2010 */




extern RPC_IF_HANDLE __MIDL_itf_Lumia2EImaging2EArtistic_0000_2010_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_Lumia2EImaging2EArtistic_0000_2010_v0_0_s_ifspec;

/* interface __MIDL_itf_Lumia2EImaging2EArtistic_0000_0008 */
/* [local] */ 

#ifndef DEF___FIVector_1_Windows__CFoundation__CRect_USE
#define DEF___FIVector_1_Windows__CFoundation__CRect_USE
#if defined(__cplusplus) && !defined(RO_NO_TEMPLATE_NAME)
} /*extern "C"*/ 
namespace ABI { namespace Windows { namespace Foundation { namespace Collections {
template <>
struct __declspec(uuid("ec699315-2109-545a-8425-26f721372fd3"))
IVector<struct ABI::Windows::Foundation::Rect> : IVector_impl<struct ABI::Windows::Foundation::Rect> {
static const wchar_t* z_get_rc_name_impl() {
return L"Windows.Foundation.Collections.IVector`1<Windows.Foundation.Rect>"; }
};
typedef IVector<struct ABI::Windows::Foundation::Rect> __FIVector_1_Windows__CFoundation__CRect_t;
#define ____FIVector_1_Windows__CFoundation__CRect_FWD_DEFINED__
#define __FIVector_1_Windows__CFoundation__CRect ABI::Windows::Foundation::Collections::__FIVector_1_Windows__CFoundation__CRect_t

/* ABI */ } /* Windows */ } /* Foundation */ } /* Collections */ }
extern "C" {
#endif //__cplusplus
#endif /* DEF___FIVector_1_Windows__CFoundation__CRect_USE */
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

typedef enum __x_ABI_CLumia_CImaging_CRotation __x_ABI_CLumia_CImaging_CRotation;


#endif /* end if !defined(__cplusplus) */


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

typedef enum __x_ABI_CLumia_CImaging_CArtistic_CLomoVignetting __x_ABI_CLumia_CImaging_CArtistic_CLomoVignetting;


#endif /* end if !defined(__cplusplus) */


#endif
#if !defined(__cplusplus)
#if !defined(__cplusplus)

typedef enum __x_ABI_CLumia_CImaging_CArtistic_CLomoStyle __x_ABI_CLumia_CImaging_CArtistic_CLomoStyle;


#endif /* end if !defined(__cplusplus) */


#endif
#if !defined(__cplusplus)
#if !defined(__cplusplus)

typedef enum __x_ABI_CLumia_CImaging_CArtistic_COilBrushSize __x_ABI_CLumia_CImaging_CArtistic_COilBrushSize;


#endif /* end if !defined(__cplusplus) */


#endif
#if !defined(__cplusplus)
#if !defined(__cplusplus)

typedef enum __x_ABI_CLumia_CImaging_CArtistic_CSketchMode __x_ABI_CLumia_CImaging_CArtistic_CSketchMode;


#endif /* end if !defined(__cplusplus) */


#endif
#if !defined(__cplusplus)
#if !defined(__cplusplus)

typedef enum __x_ABI_CLumia_CImaging_CArtistic_CWarpEffect __x_ABI_CLumia_CImaging_CArtistic_CWarpEffect;


#endif /* end if !defined(__cplusplus) */


#endif













































#ifdef __cplusplus
namespace ABI {
namespace Lumia {
namespace Imaging {
namespace Artistic {
class AntiqueFilter;
} /*Artistic*/
} /*Imaging*/
} /*Lumia*/
}
#endif
#ifdef __cplusplus
namespace ABI {
namespace Lumia {
namespace Imaging {
namespace Artistic {
class CartoonFilter;
} /*Artistic*/
} /*Imaging*/
} /*Lumia*/
}
#endif
#ifdef __cplusplus
namespace ABI {
namespace Lumia {
namespace Imaging {
namespace Artistic {
class ColorSwapFilter;
} /*Artistic*/
} /*Imaging*/
} /*Lumia*/
}
#endif
#ifdef __cplusplus
namespace ABI {
namespace Lumia {
namespace Imaging {
namespace Artistic {
class EmbossFilter;
} /*Artistic*/
} /*Imaging*/
} /*Lumia*/
}
#endif
#ifdef __cplusplus
namespace ABI {
namespace Lumia {
namespace Imaging {
namespace Artistic {
class FogFilter;
} /*Artistic*/
} /*Imaging*/
} /*Lumia*/
}
#endif
#ifdef __cplusplus
namespace ABI {
namespace Lumia {
namespace Imaging {
namespace Artistic {
class FoundationFilter;
} /*Artistic*/
} /*Imaging*/
} /*Lumia*/
}
#endif
#ifdef __cplusplus
namespace ABI {
namespace Lumia {
namespace Imaging {
namespace Artistic {
class GrayscaleNegativeFilter;
} /*Artistic*/
} /*Imaging*/
} /*Lumia*/
}
#endif
#ifdef __cplusplus
namespace ABI {
namespace Lumia {
namespace Imaging {
namespace Artistic {
class LomoFilter;
} /*Artistic*/
} /*Imaging*/
} /*Lumia*/
}
#endif
#ifdef __cplusplus
namespace ABI {
namespace Lumia {
namespace Imaging {
namespace Artistic {
class MagicPenFilter;
} /*Artistic*/
} /*Imaging*/
} /*Lumia*/
}
#endif
#ifdef __cplusplus
namespace ABI {
namespace Lumia {
namespace Imaging {
namespace Artistic {
class MilkyFilter;
} /*Artistic*/
} /*Imaging*/
} /*Lumia*/
}
#endif
#ifdef __cplusplus
namespace ABI {
namespace Lumia {
namespace Imaging {
namespace Artistic {
class MirrorFilter;
} /*Artistic*/
} /*Imaging*/
} /*Lumia*/
}
#endif
#ifdef __cplusplus
namespace ABI {
namespace Lumia {
namespace Imaging {
namespace Artistic {
class MonoColorFilter;
} /*Artistic*/
} /*Imaging*/
} /*Lumia*/
}
#endif
#ifdef __cplusplus
namespace ABI {
namespace Lumia {
namespace Imaging {
namespace Artistic {
class MoonlightFilter;
} /*Artistic*/
} /*Imaging*/
} /*Lumia*/
}
#endif
#ifdef __cplusplus
namespace ABI {
namespace Lumia {
namespace Imaging {
namespace Artistic {
class NegativeFilter;
} /*Artistic*/
} /*Imaging*/
} /*Lumia*/
}
#endif
#ifdef __cplusplus
namespace ABI {
namespace Lumia {
namespace Imaging {
namespace Artistic {
class OilyFilter;
} /*Artistic*/
} /*Imaging*/
} /*Lumia*/
}
#endif
#ifdef __cplusplus
namespace ABI {
namespace Lumia {
namespace Imaging {
namespace Artistic {
class PaintFilter;
} /*Artistic*/
} /*Imaging*/
} /*Lumia*/
}
#endif
#ifdef __cplusplus
namespace ABI {
namespace Lumia {
namespace Imaging {
namespace Artistic {
class PosterizeFilter;
} /*Artistic*/
} /*Imaging*/
} /*Lumia*/
}
#endif
#ifdef __cplusplus
namespace ABI {
namespace Lumia {
namespace Imaging {
namespace Artistic {
class SepiaFilter;
} /*Artistic*/
} /*Imaging*/
} /*Lumia*/
}
#endif
#ifdef __cplusplus
namespace ABI {
namespace Lumia {
namespace Imaging {
namespace Artistic {
class SketchFilter;
} /*Artistic*/
} /*Imaging*/
} /*Lumia*/
}
#endif
#ifdef __cplusplus
namespace ABI {
namespace Lumia {
namespace Imaging {
namespace Artistic {
class SolarizeFilter;
} /*Artistic*/
} /*Imaging*/
} /*Lumia*/
}
#endif
#ifdef __cplusplus
namespace ABI {
namespace Lumia {
namespace Imaging {
namespace Artistic {
class SplitToneFilter;
} /*Artistic*/
} /*Imaging*/
} /*Lumia*/
}
#endif
#ifdef __cplusplus
namespace ABI {
namespace Lumia {
namespace Imaging {
namespace Artistic {
class SpotlightFilter;
} /*Artistic*/
} /*Imaging*/
} /*Lumia*/
}
#endif
#ifdef __cplusplus
namespace ABI {
namespace Lumia {
namespace Imaging {
namespace Artistic {
class StampFilter;
} /*Artistic*/
} /*Imaging*/
} /*Lumia*/
}
#endif
#ifdef __cplusplus
namespace ABI {
namespace Lumia {
namespace Imaging {
namespace Artistic {
class VignettingFilter;
} /*Artistic*/
} /*Imaging*/
} /*Lumia*/
}
#endif
#ifdef __cplusplus
namespace ABI {
namespace Lumia {
namespace Imaging {
namespace Artistic {
class WarpFilter;
} /*Artistic*/
} /*Imaging*/
} /*Lumia*/
}
#endif
#ifdef __cplusplus
namespace ABI {
namespace Lumia {
namespace Imaging {
namespace Artistic {
class WatercolorFilter;
} /*Artistic*/
} /*Imaging*/
} /*Lumia*/
}
#endif


/* interface __MIDL_itf_Lumia2EImaging2EArtistic_0000_0008 */
/* [local] */ 



#ifdef __cplusplus

} /* end extern "C" */
namespace ABI {
    namespace Lumia {
        namespace Imaging {
            
            typedef enum Rotation Rotation;
            
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
            namespace Artistic {
                
                typedef enum LomoVignetting LomoVignetting;
                
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
            namespace Artistic {
                
                typedef enum LomoStyle LomoStyle;
                
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
            namespace Artistic {
                
                typedef enum OilBrushSize OilBrushSize;
                
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
            namespace Artistic {
                
                typedef enum SketchMode SketchMode;
                
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
            namespace Artistic {
                
                typedef enum WarpEffect WarpEffect;
                
            } /* end namespace */
        } /* end namespace */
    } /* end namespace */
} /* end namespace */

extern "C" { 
#endif
















































extern RPC_IF_HANDLE __MIDL_itf_Lumia2EImaging2EArtistic_0000_0008_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_Lumia2EImaging2EArtistic_0000_0008_v0_0_s_ifspec;

/* interface __MIDL_itf_Lumia2EImaging2EArtistic_0000_2011 */




/* interface __MIDL_itf_Lumia2EImaging2EArtistic_0000_2011 */




extern RPC_IF_HANDLE __MIDL_itf_Lumia2EImaging2EArtistic_0000_2011_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_Lumia2EImaging2EArtistic_0000_2011_v0_0_s_ifspec;

/* interface __MIDL_itf_Lumia2EImaging2EArtistic_0000_0009 */
/* [local] */ 

#ifndef DEF___FIIterator_1_Lumia__CImaging__CArtistic__CSplitToneRange
#define DEF___FIIterator_1_Lumia__CImaging__CArtistic__CSplitToneRange
#if !defined(__cplusplus) || defined(RO_NO_TEMPLATE_NAME)


/* interface __MIDL_itf_Lumia2EImaging2EArtistic_0000_0009 */
/* [local] */ 



extern RPC_IF_HANDLE __MIDL_itf_Lumia2EImaging2EArtistic_0000_0009_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_Lumia2EImaging2EArtistic_0000_0009_v0_0_s_ifspec;

#ifndef ____FIIterator_1_Lumia__CImaging__CArtistic__CSplitToneRange_INTERFACE_DEFINED__
#define ____FIIterator_1_Lumia__CImaging__CArtistic__CSplitToneRange_INTERFACE_DEFINED__

/* interface __FIIterator_1_Lumia__CImaging__CArtistic__CSplitToneRange */
/* [unique][uuid][object] */ 



/* interface __FIIterator_1_Lumia__CImaging__CArtistic__CSplitToneRange */
/* [unique][uuid][object] */ 


EXTERN_C const IID IID___FIIterator_1_Lumia__CImaging__CArtistic__CSplitToneRange;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("2c3a0ea0-9ccf-5a17-83bb-dd6ae4828a30")
    __FIIterator_1_Lumia__CImaging__CArtistic__CSplitToneRange : public IInspectable
    {
    public:
        virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_Current( 
            /* [retval][out] */ __RPC__deref_out_opt ABI::Lumia::Imaging::Artistic::ISplitToneRange **current) = 0;
        
        virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_HasCurrent( 
            /* [retval][out] */ __RPC__out boolean *hasCurrent) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE MoveNext( 
            /* [retval][out] */ __RPC__out boolean *hasCurrent) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetMany( 
            /* [in] */ unsigned int capacity,
            /* [size_is][length_is][out] */ __RPC__out_ecount_part(capacity, *actual) ABI::Lumia::Imaging::Artistic::ISplitToneRange **items,
            /* [retval][out] */ __RPC__out unsigned int *actual) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct __FIIterator_1_Lumia__CImaging__CArtistic__CSplitToneRangeVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            __RPC__in __FIIterator_1_Lumia__CImaging__CArtistic__CSplitToneRange * This,
            /* [in] */ __RPC__in REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            __RPC__in __FIIterator_1_Lumia__CImaging__CArtistic__CSplitToneRange * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            __RPC__in __FIIterator_1_Lumia__CImaging__CArtistic__CSplitToneRange * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetIids )( 
            __RPC__in __FIIterator_1_Lumia__CImaging__CArtistic__CSplitToneRange * This,
            /* [out] */ __RPC__out ULONG *iidCount,
            /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
        
        HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )( 
            __RPC__in __FIIterator_1_Lumia__CImaging__CArtistic__CSplitToneRange * This,
            /* [out] */ __RPC__deref_out_opt HSTRING *className);
        
        HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )( 
            __RPC__in __FIIterator_1_Lumia__CImaging__CArtistic__CSplitToneRange * This,
            /* [out] */ __RPC__out TrustLevel *trustLevel);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_Current )( 
            __RPC__in __FIIterator_1_Lumia__CImaging__CArtistic__CSplitToneRange * This,
            /* [retval][out] */ __RPC__deref_out_opt __x_ABI_CLumia_CImaging_CArtistic_CISplitToneRange **current);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_HasCurrent )( 
            __RPC__in __FIIterator_1_Lumia__CImaging__CArtistic__CSplitToneRange * This,
            /* [retval][out] */ __RPC__out boolean *hasCurrent);
        
        HRESULT ( STDMETHODCALLTYPE *MoveNext )( 
            __RPC__in __FIIterator_1_Lumia__CImaging__CArtistic__CSplitToneRange * This,
            /* [retval][out] */ __RPC__out boolean *hasCurrent);
        
        HRESULT ( STDMETHODCALLTYPE *GetMany )( 
            __RPC__in __FIIterator_1_Lumia__CImaging__CArtistic__CSplitToneRange * This,
            /* [in] */ unsigned int capacity,
            /* [size_is][length_is][out] */ __RPC__out_ecount_part(capacity, *actual) __x_ABI_CLumia_CImaging_CArtistic_CISplitToneRange **items,
            /* [retval][out] */ __RPC__out unsigned int *actual);
        
        END_INTERFACE
    } __FIIterator_1_Lumia__CImaging__CArtistic__CSplitToneRangeVtbl;

    interface __FIIterator_1_Lumia__CImaging__CArtistic__CSplitToneRange
    {
        CONST_VTBL struct __FIIterator_1_Lumia__CImaging__CArtistic__CSplitToneRangeVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define __FIIterator_1_Lumia__CImaging__CArtistic__CSplitToneRange_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __FIIterator_1_Lumia__CImaging__CArtistic__CSplitToneRange_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __FIIterator_1_Lumia__CImaging__CArtistic__CSplitToneRange_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __FIIterator_1_Lumia__CImaging__CArtistic__CSplitToneRange_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 

#define __FIIterator_1_Lumia__CImaging__CArtistic__CSplitToneRange_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 

#define __FIIterator_1_Lumia__CImaging__CArtistic__CSplitToneRange_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 


#define __FIIterator_1_Lumia__CImaging__CArtistic__CSplitToneRange_get_Current(This,current)	\
    ( (This)->lpVtbl -> get_Current(This,current) ) 

#define __FIIterator_1_Lumia__CImaging__CArtistic__CSplitToneRange_get_HasCurrent(This,hasCurrent)	\
    ( (This)->lpVtbl -> get_HasCurrent(This,hasCurrent) ) 

#define __FIIterator_1_Lumia__CImaging__CArtistic__CSplitToneRange_MoveNext(This,hasCurrent)	\
    ( (This)->lpVtbl -> MoveNext(This,hasCurrent) ) 

#define __FIIterator_1_Lumia__CImaging__CArtistic__CSplitToneRange_GetMany(This,capacity,items,actual)	\
    ( (This)->lpVtbl -> GetMany(This,capacity,items,actual) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* ____FIIterator_1_Lumia__CImaging__CArtistic__CSplitToneRange_INTERFACE_DEFINED__ */


/* interface __MIDL_itf_Lumia2EImaging2EArtistic_0000_0010 */
/* [local] */ 

#endif /* pinterface */
#endif /* DEF___FIIterator_1_Lumia__CImaging__CArtistic__CSplitToneRange */


/* interface __MIDL_itf_Lumia2EImaging2EArtistic_0000_0010 */
/* [local] */ 



extern RPC_IF_HANDLE __MIDL_itf_Lumia2EImaging2EArtistic_0000_0010_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_Lumia2EImaging2EArtistic_0000_0010_v0_0_s_ifspec;

/* interface __MIDL_itf_Lumia2EImaging2EArtistic_0000_2012 */




/* interface __MIDL_itf_Lumia2EImaging2EArtistic_0000_2012 */




extern RPC_IF_HANDLE __MIDL_itf_Lumia2EImaging2EArtistic_0000_2012_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_Lumia2EImaging2EArtistic_0000_2012_v0_0_s_ifspec;

/* interface __MIDL_itf_Lumia2EImaging2EArtistic_0000_0011 */
/* [local] */ 

#ifndef DEF___FIIterable_1_Lumia__CImaging__CArtistic__CSplitToneRange
#define DEF___FIIterable_1_Lumia__CImaging__CArtistic__CSplitToneRange
#if !defined(__cplusplus) || defined(RO_NO_TEMPLATE_NAME)


/* interface __MIDL_itf_Lumia2EImaging2EArtistic_0000_0011 */
/* [local] */ 



extern RPC_IF_HANDLE __MIDL_itf_Lumia2EImaging2EArtistic_0000_0011_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_Lumia2EImaging2EArtistic_0000_0011_v0_0_s_ifspec;

#ifndef ____FIIterable_1_Lumia__CImaging__CArtistic__CSplitToneRange_INTERFACE_DEFINED__
#define ____FIIterable_1_Lumia__CImaging__CArtistic__CSplitToneRange_INTERFACE_DEFINED__

/* interface __FIIterable_1_Lumia__CImaging__CArtistic__CSplitToneRange */
/* [unique][uuid][object] */ 



/* interface __FIIterable_1_Lumia__CImaging__CArtistic__CSplitToneRange */
/* [unique][uuid][object] */ 


EXTERN_C const IID IID___FIIterable_1_Lumia__CImaging__CArtistic__CSplitToneRange;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("e6e9ea14-2573-50bd-a726-9b00b880eda9")
    __FIIterable_1_Lumia__CImaging__CArtistic__CSplitToneRange : public IInspectable
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE First( 
            /* [retval][out] */ __RPC__deref_out_opt __FIIterator_1_Lumia__CImaging__CArtistic__CSplitToneRange **first) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct __FIIterable_1_Lumia__CImaging__CArtistic__CSplitToneRangeVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            __RPC__in __FIIterable_1_Lumia__CImaging__CArtistic__CSplitToneRange * This,
            /* [in] */ __RPC__in REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            __RPC__in __FIIterable_1_Lumia__CImaging__CArtistic__CSplitToneRange * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            __RPC__in __FIIterable_1_Lumia__CImaging__CArtistic__CSplitToneRange * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetIids )( 
            __RPC__in __FIIterable_1_Lumia__CImaging__CArtistic__CSplitToneRange * This,
            /* [out] */ __RPC__out ULONG *iidCount,
            /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
        
        HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )( 
            __RPC__in __FIIterable_1_Lumia__CImaging__CArtistic__CSplitToneRange * This,
            /* [out] */ __RPC__deref_out_opt HSTRING *className);
        
        HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )( 
            __RPC__in __FIIterable_1_Lumia__CImaging__CArtistic__CSplitToneRange * This,
            /* [out] */ __RPC__out TrustLevel *trustLevel);
        
        HRESULT ( STDMETHODCALLTYPE *First )( 
            __RPC__in __FIIterable_1_Lumia__CImaging__CArtistic__CSplitToneRange * This,
            /* [retval][out] */ __RPC__deref_out_opt __FIIterator_1_Lumia__CImaging__CArtistic__CSplitToneRange **first);
        
        END_INTERFACE
    } __FIIterable_1_Lumia__CImaging__CArtistic__CSplitToneRangeVtbl;

    interface __FIIterable_1_Lumia__CImaging__CArtistic__CSplitToneRange
    {
        CONST_VTBL struct __FIIterable_1_Lumia__CImaging__CArtistic__CSplitToneRangeVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define __FIIterable_1_Lumia__CImaging__CArtistic__CSplitToneRange_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __FIIterable_1_Lumia__CImaging__CArtistic__CSplitToneRange_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __FIIterable_1_Lumia__CImaging__CArtistic__CSplitToneRange_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __FIIterable_1_Lumia__CImaging__CArtistic__CSplitToneRange_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 

#define __FIIterable_1_Lumia__CImaging__CArtistic__CSplitToneRange_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 

#define __FIIterable_1_Lumia__CImaging__CArtistic__CSplitToneRange_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 


#define __FIIterable_1_Lumia__CImaging__CArtistic__CSplitToneRange_First(This,first)	\
    ( (This)->lpVtbl -> First(This,first) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* ____FIIterable_1_Lumia__CImaging__CArtistic__CSplitToneRange_INTERFACE_DEFINED__ */


/* interface __MIDL_itf_Lumia2EImaging2EArtistic_0000_0012 */
/* [local] */ 

#endif /* pinterface */
#endif /* DEF___FIIterable_1_Lumia__CImaging__CArtistic__CSplitToneRange */


/* interface __MIDL_itf_Lumia2EImaging2EArtistic_0000_0012 */
/* [local] */ 



extern RPC_IF_HANDLE __MIDL_itf_Lumia2EImaging2EArtistic_0000_0012_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_Lumia2EImaging2EArtistic_0000_0012_v0_0_s_ifspec;

/* interface __MIDL_itf_Lumia2EImaging2EArtistic_0000_2013 */




/* interface __MIDL_itf_Lumia2EImaging2EArtistic_0000_2013 */




extern RPC_IF_HANDLE __MIDL_itf_Lumia2EImaging2EArtistic_0000_2013_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_Lumia2EImaging2EArtistic_0000_2013_v0_0_s_ifspec;

/* interface __MIDL_itf_Lumia2EImaging2EArtistic_0000_0013 */
/* [local] */ 

#ifndef DEF___FIVectorView_1_Lumia__CImaging__CArtistic__CSplitToneRange
#define DEF___FIVectorView_1_Lumia__CImaging__CArtistic__CSplitToneRange
#if !defined(__cplusplus) || defined(RO_NO_TEMPLATE_NAME)


/* interface __MIDL_itf_Lumia2EImaging2EArtistic_0000_0013 */
/* [local] */ 



extern RPC_IF_HANDLE __MIDL_itf_Lumia2EImaging2EArtistic_0000_0013_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_Lumia2EImaging2EArtistic_0000_0013_v0_0_s_ifspec;

#ifndef ____FIVectorView_1_Lumia__CImaging__CArtistic__CSplitToneRange_INTERFACE_DEFINED__
#define ____FIVectorView_1_Lumia__CImaging__CArtistic__CSplitToneRange_INTERFACE_DEFINED__

/* interface __FIVectorView_1_Lumia__CImaging__CArtistic__CSplitToneRange */
/* [unique][uuid][object] */ 



/* interface __FIVectorView_1_Lumia__CImaging__CArtistic__CSplitToneRange */
/* [unique][uuid][object] */ 


EXTERN_C const IID IID___FIVectorView_1_Lumia__CImaging__CArtistic__CSplitToneRange;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("b923a2bb-ed78-56ff-ba34-4cbce97f3ce6")
    __FIVectorView_1_Lumia__CImaging__CArtistic__CSplitToneRange : public IInspectable
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE GetAt( 
            /* [in] */ unsigned int index,
            /* [retval][out] */ __RPC__deref_out_opt ABI::Lumia::Imaging::Artistic::ISplitToneRange **item) = 0;
        
        virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_Size( 
            /* [retval][out] */ __RPC__out unsigned int *size) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE IndexOf( 
            /* [in] */ __RPC__in_opt ABI::Lumia::Imaging::Artistic::ISplitToneRange *item,
            /* [out] */ __RPC__out unsigned int *index,
            /* [retval][out] */ __RPC__out boolean *found) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetMany( 
            /* [in] */ unsigned int startIndex,
            /* [in] */ unsigned int capacity,
            /* [size_is][length_is][out] */ __RPC__out_ecount_part(capacity, *actual) ABI::Lumia::Imaging::Artistic::ISplitToneRange **items,
            /* [retval][out] */ __RPC__out unsigned int *actual) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct __FIVectorView_1_Lumia__CImaging__CArtistic__CSplitToneRangeVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            __RPC__in __FIVectorView_1_Lumia__CImaging__CArtistic__CSplitToneRange * This,
            /* [in] */ __RPC__in REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            __RPC__in __FIVectorView_1_Lumia__CImaging__CArtistic__CSplitToneRange * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            __RPC__in __FIVectorView_1_Lumia__CImaging__CArtistic__CSplitToneRange * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetIids )( 
            __RPC__in __FIVectorView_1_Lumia__CImaging__CArtistic__CSplitToneRange * This,
            /* [out] */ __RPC__out ULONG *iidCount,
            /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
        
        HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )( 
            __RPC__in __FIVectorView_1_Lumia__CImaging__CArtistic__CSplitToneRange * This,
            /* [out] */ __RPC__deref_out_opt HSTRING *className);
        
        HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )( 
            __RPC__in __FIVectorView_1_Lumia__CImaging__CArtistic__CSplitToneRange * This,
            /* [out] */ __RPC__out TrustLevel *trustLevel);
        
        HRESULT ( STDMETHODCALLTYPE *GetAt )( 
            __RPC__in __FIVectorView_1_Lumia__CImaging__CArtistic__CSplitToneRange * This,
            /* [in] */ unsigned int index,
            /* [retval][out] */ __RPC__deref_out_opt __x_ABI_CLumia_CImaging_CArtistic_CISplitToneRange **item);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_Size )( 
            __RPC__in __FIVectorView_1_Lumia__CImaging__CArtistic__CSplitToneRange * This,
            /* [retval][out] */ __RPC__out unsigned int *size);
        
        HRESULT ( STDMETHODCALLTYPE *IndexOf )( 
            __RPC__in __FIVectorView_1_Lumia__CImaging__CArtistic__CSplitToneRange * This,
            /* [in] */ __RPC__in_opt __x_ABI_CLumia_CImaging_CArtistic_CISplitToneRange *item,
            /* [out] */ __RPC__out unsigned int *index,
            /* [retval][out] */ __RPC__out boolean *found);
        
        HRESULT ( STDMETHODCALLTYPE *GetMany )( 
            __RPC__in __FIVectorView_1_Lumia__CImaging__CArtistic__CSplitToneRange * This,
            /* [in] */ unsigned int startIndex,
            /* [in] */ unsigned int capacity,
            /* [size_is][length_is][out] */ __RPC__out_ecount_part(capacity, *actual) __x_ABI_CLumia_CImaging_CArtistic_CISplitToneRange **items,
            /* [retval][out] */ __RPC__out unsigned int *actual);
        
        END_INTERFACE
    } __FIVectorView_1_Lumia__CImaging__CArtistic__CSplitToneRangeVtbl;

    interface __FIVectorView_1_Lumia__CImaging__CArtistic__CSplitToneRange
    {
        CONST_VTBL struct __FIVectorView_1_Lumia__CImaging__CArtistic__CSplitToneRangeVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define __FIVectorView_1_Lumia__CImaging__CArtistic__CSplitToneRange_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __FIVectorView_1_Lumia__CImaging__CArtistic__CSplitToneRange_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __FIVectorView_1_Lumia__CImaging__CArtistic__CSplitToneRange_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __FIVectorView_1_Lumia__CImaging__CArtistic__CSplitToneRange_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 

#define __FIVectorView_1_Lumia__CImaging__CArtistic__CSplitToneRange_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 

#define __FIVectorView_1_Lumia__CImaging__CArtistic__CSplitToneRange_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 


#define __FIVectorView_1_Lumia__CImaging__CArtistic__CSplitToneRange_GetAt(This,index,item)	\
    ( (This)->lpVtbl -> GetAt(This,index,item) ) 

#define __FIVectorView_1_Lumia__CImaging__CArtistic__CSplitToneRange_get_Size(This,size)	\
    ( (This)->lpVtbl -> get_Size(This,size) ) 

#define __FIVectorView_1_Lumia__CImaging__CArtistic__CSplitToneRange_IndexOf(This,item,index,found)	\
    ( (This)->lpVtbl -> IndexOf(This,item,index,found) ) 

#define __FIVectorView_1_Lumia__CImaging__CArtistic__CSplitToneRange_GetMany(This,startIndex,capacity,items,actual)	\
    ( (This)->lpVtbl -> GetMany(This,startIndex,capacity,items,actual) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* ____FIVectorView_1_Lumia__CImaging__CArtistic__CSplitToneRange_INTERFACE_DEFINED__ */


/* interface __MIDL_itf_Lumia2EImaging2EArtistic_0000_0014 */
/* [local] */ 

#endif /* pinterface */
#endif /* DEF___FIVectorView_1_Lumia__CImaging__CArtistic__CSplitToneRange */


/* interface __MIDL_itf_Lumia2EImaging2EArtistic_0000_0014 */
/* [local] */ 



extern RPC_IF_HANDLE __MIDL_itf_Lumia2EImaging2EArtistic_0000_0014_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_Lumia2EImaging2EArtistic_0000_0014_v0_0_s_ifspec;

/* interface __MIDL_itf_Lumia2EImaging2EArtistic_0000_2014 */




/* interface __MIDL_itf_Lumia2EImaging2EArtistic_0000_2014 */




extern RPC_IF_HANDLE __MIDL_itf_Lumia2EImaging2EArtistic_0000_2014_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_Lumia2EImaging2EArtistic_0000_2014_v0_0_s_ifspec;

/* interface __MIDL_itf_Lumia2EImaging2EArtistic_0000_0015 */
/* [local] */ 

#ifndef DEF___FIVector_1_Lumia__CImaging__CArtistic__CSplitToneRange
#define DEF___FIVector_1_Lumia__CImaging__CArtistic__CSplitToneRange
#if !defined(__cplusplus) || defined(RO_NO_TEMPLATE_NAME)


/* interface __MIDL_itf_Lumia2EImaging2EArtistic_0000_0015 */
/* [local] */ 



extern RPC_IF_HANDLE __MIDL_itf_Lumia2EImaging2EArtistic_0000_0015_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_Lumia2EImaging2EArtistic_0000_0015_v0_0_s_ifspec;

#ifndef ____FIVector_1_Lumia__CImaging__CArtistic__CSplitToneRange_INTERFACE_DEFINED__
#define ____FIVector_1_Lumia__CImaging__CArtistic__CSplitToneRange_INTERFACE_DEFINED__

/* interface __FIVector_1_Lumia__CImaging__CArtistic__CSplitToneRange */
/* [unique][uuid][object] */ 



/* interface __FIVector_1_Lumia__CImaging__CArtistic__CSplitToneRange */
/* [unique][uuid][object] */ 


EXTERN_C const IID IID___FIVector_1_Lumia__CImaging__CArtistic__CSplitToneRange;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("9e95c2ef-c7b0-5d78-8b82-2a4adfbba6ae")
    __FIVector_1_Lumia__CImaging__CArtistic__CSplitToneRange : public IInspectable
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE GetAt( 
            /* [in] */ unsigned int index,
            /* [retval][out] */ __RPC__deref_out_opt ABI::Lumia::Imaging::Artistic::ISplitToneRange **item) = 0;
        
        virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_Size( 
            /* [retval][out] */ __RPC__out unsigned int *size) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetView( 
            /* [retval][out] */ __RPC__deref_out_opt __FIVectorView_1_Lumia__CImaging__CArtistic__CSplitToneRange **view) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE IndexOf( 
            /* [in] */ __RPC__in_opt ABI::Lumia::Imaging::Artistic::ISplitToneRange *item,
            /* [out] */ __RPC__out unsigned int *index,
            /* [retval][out] */ __RPC__out boolean *found) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE SetAt( 
            /* [in] */ unsigned int index,
            /* [in] */ __RPC__in_opt ABI::Lumia::Imaging::Artistic::ISplitToneRange *item) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE InsertAt( 
            /* [in] */ unsigned int index,
            /* [in] */ __RPC__in_opt ABI::Lumia::Imaging::Artistic::ISplitToneRange *item) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE RemoveAt( 
            /* [in] */ unsigned int index) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE Append( 
            /* [in] */ __RPC__in_opt ABI::Lumia::Imaging::Artistic::ISplitToneRange *item) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE RemoveAtEnd( void) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE Clear( void) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetMany( 
            /* [in] */ unsigned int startIndex,
            /* [in] */ unsigned int capacity,
            /* [size_is][length_is][out] */ __RPC__out_ecount_part(capacity, *actual) ABI::Lumia::Imaging::Artistic::ISplitToneRange **items,
            /* [retval][out] */ __RPC__out unsigned int *actual) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE ReplaceAll( 
            /* [in] */ unsigned int count,
            /* [size_is][in] */ __RPC__in_ecount_full(count) ABI::Lumia::Imaging::Artistic::ISplitToneRange **value) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct __FIVector_1_Lumia__CImaging__CArtistic__CSplitToneRangeVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            __RPC__in __FIVector_1_Lumia__CImaging__CArtistic__CSplitToneRange * This,
            /* [in] */ __RPC__in REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            __RPC__in __FIVector_1_Lumia__CImaging__CArtistic__CSplitToneRange * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            __RPC__in __FIVector_1_Lumia__CImaging__CArtistic__CSplitToneRange * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetIids )( 
            __RPC__in __FIVector_1_Lumia__CImaging__CArtistic__CSplitToneRange * This,
            /* [out] */ __RPC__out ULONG *iidCount,
            /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
        
        HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )( 
            __RPC__in __FIVector_1_Lumia__CImaging__CArtistic__CSplitToneRange * This,
            /* [out] */ __RPC__deref_out_opt HSTRING *className);
        
        HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )( 
            __RPC__in __FIVector_1_Lumia__CImaging__CArtistic__CSplitToneRange * This,
            /* [out] */ __RPC__out TrustLevel *trustLevel);
        
        HRESULT ( STDMETHODCALLTYPE *GetAt )( 
            __RPC__in __FIVector_1_Lumia__CImaging__CArtistic__CSplitToneRange * This,
            /* [in] */ unsigned int index,
            /* [retval][out] */ __RPC__deref_out_opt __x_ABI_CLumia_CImaging_CArtistic_CISplitToneRange **item);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_Size )( 
            __RPC__in __FIVector_1_Lumia__CImaging__CArtistic__CSplitToneRange * This,
            /* [retval][out] */ __RPC__out unsigned int *size);
        
        HRESULT ( STDMETHODCALLTYPE *GetView )( 
            __RPC__in __FIVector_1_Lumia__CImaging__CArtistic__CSplitToneRange * This,
            /* [retval][out] */ __RPC__deref_out_opt __FIVectorView_1_Lumia__CImaging__CArtistic__CSplitToneRange **view);
        
        HRESULT ( STDMETHODCALLTYPE *IndexOf )( 
            __RPC__in __FIVector_1_Lumia__CImaging__CArtistic__CSplitToneRange * This,
            /* [in] */ __RPC__in_opt __x_ABI_CLumia_CImaging_CArtistic_CISplitToneRange *item,
            /* [out] */ __RPC__out unsigned int *index,
            /* [retval][out] */ __RPC__out boolean *found);
        
        HRESULT ( STDMETHODCALLTYPE *SetAt )( 
            __RPC__in __FIVector_1_Lumia__CImaging__CArtistic__CSplitToneRange * This,
            /* [in] */ unsigned int index,
            /* [in] */ __RPC__in_opt __x_ABI_CLumia_CImaging_CArtistic_CISplitToneRange *item);
        
        HRESULT ( STDMETHODCALLTYPE *InsertAt )( 
            __RPC__in __FIVector_1_Lumia__CImaging__CArtistic__CSplitToneRange * This,
            /* [in] */ unsigned int index,
            /* [in] */ __RPC__in_opt __x_ABI_CLumia_CImaging_CArtistic_CISplitToneRange *item);
        
        HRESULT ( STDMETHODCALLTYPE *RemoveAt )( 
            __RPC__in __FIVector_1_Lumia__CImaging__CArtistic__CSplitToneRange * This,
            /* [in] */ unsigned int index);
        
        HRESULT ( STDMETHODCALLTYPE *Append )( 
            __RPC__in __FIVector_1_Lumia__CImaging__CArtistic__CSplitToneRange * This,
            /* [in] */ __RPC__in_opt __x_ABI_CLumia_CImaging_CArtistic_CISplitToneRange *item);
        
        HRESULT ( STDMETHODCALLTYPE *RemoveAtEnd )( 
            __RPC__in __FIVector_1_Lumia__CImaging__CArtistic__CSplitToneRange * This);
        
        HRESULT ( STDMETHODCALLTYPE *Clear )( 
            __RPC__in __FIVector_1_Lumia__CImaging__CArtistic__CSplitToneRange * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetMany )( 
            __RPC__in __FIVector_1_Lumia__CImaging__CArtistic__CSplitToneRange * This,
            /* [in] */ unsigned int startIndex,
            /* [in] */ unsigned int capacity,
            /* [size_is][length_is][out] */ __RPC__out_ecount_part(capacity, *actual) __x_ABI_CLumia_CImaging_CArtistic_CISplitToneRange **items,
            /* [retval][out] */ __RPC__out unsigned int *actual);
        
        HRESULT ( STDMETHODCALLTYPE *ReplaceAll )( 
            __RPC__in __FIVector_1_Lumia__CImaging__CArtistic__CSplitToneRange * This,
            /* [in] */ unsigned int count,
            /* [size_is][in] */ __RPC__in_ecount_full(count) __x_ABI_CLumia_CImaging_CArtistic_CISplitToneRange **value);
        
        END_INTERFACE
    } __FIVector_1_Lumia__CImaging__CArtistic__CSplitToneRangeVtbl;

    interface __FIVector_1_Lumia__CImaging__CArtistic__CSplitToneRange
    {
        CONST_VTBL struct __FIVector_1_Lumia__CImaging__CArtistic__CSplitToneRangeVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define __FIVector_1_Lumia__CImaging__CArtistic__CSplitToneRange_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __FIVector_1_Lumia__CImaging__CArtistic__CSplitToneRange_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __FIVector_1_Lumia__CImaging__CArtistic__CSplitToneRange_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __FIVector_1_Lumia__CImaging__CArtistic__CSplitToneRange_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 

#define __FIVector_1_Lumia__CImaging__CArtistic__CSplitToneRange_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 

#define __FIVector_1_Lumia__CImaging__CArtistic__CSplitToneRange_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 


#define __FIVector_1_Lumia__CImaging__CArtistic__CSplitToneRange_GetAt(This,index,item)	\
    ( (This)->lpVtbl -> GetAt(This,index,item) ) 

#define __FIVector_1_Lumia__CImaging__CArtistic__CSplitToneRange_get_Size(This,size)	\
    ( (This)->lpVtbl -> get_Size(This,size) ) 

#define __FIVector_1_Lumia__CImaging__CArtistic__CSplitToneRange_GetView(This,view)	\
    ( (This)->lpVtbl -> GetView(This,view) ) 

#define __FIVector_1_Lumia__CImaging__CArtistic__CSplitToneRange_IndexOf(This,item,index,found)	\
    ( (This)->lpVtbl -> IndexOf(This,item,index,found) ) 

#define __FIVector_1_Lumia__CImaging__CArtistic__CSplitToneRange_SetAt(This,index,item)	\
    ( (This)->lpVtbl -> SetAt(This,index,item) ) 

#define __FIVector_1_Lumia__CImaging__CArtistic__CSplitToneRange_InsertAt(This,index,item)	\
    ( (This)->lpVtbl -> InsertAt(This,index,item) ) 

#define __FIVector_1_Lumia__CImaging__CArtistic__CSplitToneRange_RemoveAt(This,index)	\
    ( (This)->lpVtbl -> RemoveAt(This,index) ) 

#define __FIVector_1_Lumia__CImaging__CArtistic__CSplitToneRange_Append(This,item)	\
    ( (This)->lpVtbl -> Append(This,item) ) 

#define __FIVector_1_Lumia__CImaging__CArtistic__CSplitToneRange_RemoveAtEnd(This)	\
    ( (This)->lpVtbl -> RemoveAtEnd(This) ) 

#define __FIVector_1_Lumia__CImaging__CArtistic__CSplitToneRange_Clear(This)	\
    ( (This)->lpVtbl -> Clear(This) ) 

#define __FIVector_1_Lumia__CImaging__CArtistic__CSplitToneRange_GetMany(This,startIndex,capacity,items,actual)	\
    ( (This)->lpVtbl -> GetMany(This,startIndex,capacity,items,actual) ) 

#define __FIVector_1_Lumia__CImaging__CArtistic__CSplitToneRange_ReplaceAll(This,count,value)	\
    ( (This)->lpVtbl -> ReplaceAll(This,count,value) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* ____FIVector_1_Lumia__CImaging__CArtistic__CSplitToneRange_INTERFACE_DEFINED__ */


/* interface __MIDL_itf_Lumia2EImaging2EArtistic_0000_0016 */
/* [local] */ 

#endif /* pinterface */
#endif /* DEF___FIVector_1_Lumia__CImaging__CArtistic__CSplitToneRange */
#if !defined(__cplusplus)

#if !defined(__cplusplus)
/* [v1_enum] */ 
enum __x_ABI_CLumia_CImaging_CArtistic_CLomoVignetting
    {
        LomoVignetting_Low	= 0,
        LomoVignetting_Medium	= 1,
        LomoVignetting_High	= 2
    } ;
#endif /* end if !defined(__cplusplus) */

#endif
#if !defined(__cplusplus)

#if !defined(__cplusplus)
/* [v1_enum] */ 
enum __x_ABI_CLumia_CImaging_CArtistic_CLomoStyle
    {
        LomoStyle_Neutral	= 0,
        LomoStyle_Red	= 1,
        LomoStyle_Green	= 2,
        LomoStyle_Blue	= 3,
        LomoStyle_Yellow	= 4
    } ;
#endif /* end if !defined(__cplusplus) */

#endif
#if !defined(__cplusplus)

#if !defined(__cplusplus)
/* [v1_enum] */ 
enum __x_ABI_CLumia_CImaging_CArtistic_COilBrushSize
    {
        OilBrushSize_Small	= 0,
        OilBrushSize_Medium	= 1,
        OilBrushSize_Large	= 2
    } ;
#endif /* end if !defined(__cplusplus) */

#endif
#if !defined(__cplusplus)

#if !defined(__cplusplus)
/* [v1_enum] */ 
enum __x_ABI_CLumia_CImaging_CArtistic_CSketchMode
    {
        SketchMode_Gray	= 0,
        SketchMode_Color	= 1
    } ;
#endif /* end if !defined(__cplusplus) */

#endif
#if !defined(__cplusplus)

#if !defined(__cplusplus)
/* [v1_enum] */ 
enum __x_ABI_CLumia_CImaging_CArtistic_CWarpEffect
    {
        WarpEffect_Upnose	= 0,
        WarpEffect_Twister	= 1,
        WarpEffect_SmallNose	= 2,
        WarpEffect_WideSmile	= 3,
        WarpEffect_Grit	= 4,
        WarpEffect_BigFace	= 5,
        WarpEffect_Professor	= 6,
        WarpEffect_Alien	= 7,
        WarpEffect_BigNose	= 8,
        WarpEffect_AlienHybrid	= 9,
        WarpEffect_Gobbler	= 10,
        WarpEffect_Square	= 11,
        WarpEffect_Sharpchin	= 12,
        WarpEffect_LongFaced	= 13,
        WarpEffect_HappyFool	= 14,
        WarpEffect_Insect	= 15
    } ;
#endif /* end if !defined(__cplusplus) */

#endif
#if !defined(____x_ABI_CLumia_CImaging_CArtistic_CIAntiqueFilter_INTERFACE_DEFINED__)
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Lumia_Imaging_Artistic_IAntiqueFilter[] = L"Lumia.Imaging.Artistic.IAntiqueFilter";
#endif /* !defined(____x_ABI_CLumia_CImaging_CArtistic_CIAntiqueFilter_INTERFACE_DEFINED__) */


/* interface __MIDL_itf_Lumia2EImaging2EArtistic_0000_0016 */
/* [local] */ 

#ifdef __cplusplus
} /* end extern "C" */
namespace ABI {
    namespace Lumia {
        namespace Imaging {
            namespace Artistic {
                
                /* [v1_enum] */ 
                enum LomoVignetting
                    {
                        LomoVignetting_Low	= 0,
                        LomoVignetting_Medium	= 1,
                        LomoVignetting_High	= 2
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
            namespace Artistic {
                
                /* [v1_enum] */ 
                enum LomoStyle
                    {
                        LomoStyle_Neutral	= 0,
                        LomoStyle_Red	= 1,
                        LomoStyle_Green	= 2,
                        LomoStyle_Blue	= 3,
                        LomoStyle_Yellow	= 4
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
            namespace Artistic {
                
                /* [v1_enum] */ 
                enum OilBrushSize
                    {
                        OilBrushSize_Small	= 0,
                        OilBrushSize_Medium	= 1,
                        OilBrushSize_Large	= 2
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
            namespace Artistic {
                
                /* [v1_enum] */ 
                enum SketchMode
                    {
                        SketchMode_Gray	= 0,
                        SketchMode_Color	= 1
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
            namespace Artistic {
                
                /* [v1_enum] */ 
                enum WarpEffect
                    {
                        WarpEffect_Upnose	= 0,
                        WarpEffect_Twister	= 1,
                        WarpEffect_SmallNose	= 2,
                        WarpEffect_WideSmile	= 3,
                        WarpEffect_Grit	= 4,
                        WarpEffect_BigFace	= 5,
                        WarpEffect_Professor	= 6,
                        WarpEffect_Alien	= 7,
                        WarpEffect_BigNose	= 8,
                        WarpEffect_AlienHybrid	= 9,
                        WarpEffect_Gobbler	= 10,
                        WarpEffect_Square	= 11,
                        WarpEffect_Sharpchin	= 12,
                        WarpEffect_LongFaced	= 13,
                        WarpEffect_HappyFool	= 14,
                        WarpEffect_Insect	= 15
                    } ;
            } /* end namespace */
        } /* end namespace */
    } /* end namespace */
} /* end namespace */

extern "C" { 
#endif



extern RPC_IF_HANDLE __MIDL_itf_Lumia2EImaging2EArtistic_0000_0016_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_Lumia2EImaging2EArtistic_0000_0016_v0_0_s_ifspec;

#ifndef ____x_ABI_CLumia_CImaging_CArtistic_CIAntiqueFilter_INTERFACE_DEFINED__
#define ____x_ABI_CLumia_CImaging_CArtistic_CIAntiqueFilter_INTERFACE_DEFINED__

/* interface __x_ABI_CLumia_CImaging_CArtistic_CIAntiqueFilter */
/* [uuid][object] */ 



/* interface ABI::Lumia::Imaging::Artistic::IAntiqueFilter */
/* [uuid][object] */ 


EXTERN_C const IID IID___x_ABI_CLumia_CImaging_CArtistic_CIAntiqueFilter;

#if defined(__cplusplus) && !defined(CINTERFACE)
    } /* end extern "C" */
    namespace ABI {
        namespace Lumia {
            namespace Imaging {
                namespace Artistic {
                    
                    MIDL_INTERFACE("CE97F65B-4B04-34CE-BDE5-CCCA5966B51E")
                    IAntiqueFilter : public IInspectable
                    {
                    public:
                    };

                    extern const __declspec(selectany) IID & IID_IAntiqueFilter = __uuidof(IAntiqueFilter);

                    
                }  /* end namespace */
            }  /* end namespace */
        }  /* end namespace */
    }  /* end namespace */
    extern "C" { 
    
#else 	/* C style interface */

    typedef struct __x_ABI_CLumia_CImaging_CArtistic_CIAntiqueFilterVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            __RPC__in __x_ABI_CLumia_CImaging_CArtistic_CIAntiqueFilter * This,
            /* [in] */ __RPC__in REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            __RPC__in __x_ABI_CLumia_CImaging_CArtistic_CIAntiqueFilter * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            __RPC__in __x_ABI_CLumia_CImaging_CArtistic_CIAntiqueFilter * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetIids )( 
            __RPC__in __x_ABI_CLumia_CImaging_CArtistic_CIAntiqueFilter * This,
            /* [out] */ __RPC__out ULONG *iidCount,
            /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
        
        HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )( 
            __RPC__in __x_ABI_CLumia_CImaging_CArtistic_CIAntiqueFilter * This,
            /* [out] */ __RPC__deref_out_opt HSTRING *className);
        
        HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )( 
            __RPC__in __x_ABI_CLumia_CImaging_CArtistic_CIAntiqueFilter * This,
            /* [out] */ __RPC__out TrustLevel *trustLevel);
        
        END_INTERFACE
    } __x_ABI_CLumia_CImaging_CArtistic_CIAntiqueFilterVtbl;

    interface __x_ABI_CLumia_CImaging_CArtistic_CIAntiqueFilter
    {
        CONST_VTBL struct __x_ABI_CLumia_CImaging_CArtistic_CIAntiqueFilterVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define __x_ABI_CLumia_CImaging_CArtistic_CIAntiqueFilter_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __x_ABI_CLumia_CImaging_CArtistic_CIAntiqueFilter_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __x_ABI_CLumia_CImaging_CArtistic_CIAntiqueFilter_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __x_ABI_CLumia_CImaging_CArtistic_CIAntiqueFilter_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 

#define __x_ABI_CLumia_CImaging_CArtistic_CIAntiqueFilter_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 

#define __x_ABI_CLumia_CImaging_CArtistic_CIAntiqueFilter_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 


#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* ____x_ABI_CLumia_CImaging_CArtistic_CIAntiqueFilter_INTERFACE_DEFINED__ */


/* interface __MIDL_itf_Lumia2EImaging2EArtistic_0000_0017 */
/* [local] */ 

#if !defined(____x_ABI_CLumia_CImaging_CArtistic_CICartoonFilter_INTERFACE_DEFINED__)
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Lumia_Imaging_Artistic_ICartoonFilter[] = L"Lumia.Imaging.Artistic.ICartoonFilter";
#endif /* !defined(____x_ABI_CLumia_CImaging_CArtistic_CICartoonFilter_INTERFACE_DEFINED__) */


/* interface __MIDL_itf_Lumia2EImaging2EArtistic_0000_0017 */
/* [local] */ 



extern RPC_IF_HANDLE __MIDL_itf_Lumia2EImaging2EArtistic_0000_0017_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_Lumia2EImaging2EArtistic_0000_0017_v0_0_s_ifspec;

#ifndef ____x_ABI_CLumia_CImaging_CArtistic_CICartoonFilter_INTERFACE_DEFINED__
#define ____x_ABI_CLumia_CImaging_CArtistic_CICartoonFilter_INTERFACE_DEFINED__

/* interface __x_ABI_CLumia_CImaging_CArtistic_CICartoonFilter */
/* [uuid][object] */ 



/* interface ABI::Lumia::Imaging::Artistic::ICartoonFilter */
/* [uuid][object] */ 


EXTERN_C const IID IID___x_ABI_CLumia_CImaging_CArtistic_CICartoonFilter;

#if defined(__cplusplus) && !defined(CINTERFACE)
    } /* end extern "C" */
    namespace ABI {
        namespace Lumia {
            namespace Imaging {
                namespace Artistic {
                    
                    MIDL_INTERFACE("08F7CCE0-D463-36BC-98EB-BD2B46699C47")
                    ICartoonFilter : public IInspectable
                    {
                    public:
                        virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_DistinctEdges( 
                            /* [out][retval] */ __RPC__out boolean *__returnValue) = 0;
                        
                        virtual /* [propput] */ HRESULT STDMETHODCALLTYPE put_DistinctEdges( 
                            /* [in] */ boolean value) = 0;
                        
                    };

                    extern const __declspec(selectany) IID & IID_ICartoonFilter = __uuidof(ICartoonFilter);

                    
                }  /* end namespace */
            }  /* end namespace */
        }  /* end namespace */
    }  /* end namespace */
    extern "C" { 
    
#else 	/* C style interface */

    typedef struct __x_ABI_CLumia_CImaging_CArtistic_CICartoonFilterVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            __RPC__in __x_ABI_CLumia_CImaging_CArtistic_CICartoonFilter * This,
            /* [in] */ __RPC__in REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            __RPC__in __x_ABI_CLumia_CImaging_CArtistic_CICartoonFilter * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            __RPC__in __x_ABI_CLumia_CImaging_CArtistic_CICartoonFilter * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetIids )( 
            __RPC__in __x_ABI_CLumia_CImaging_CArtistic_CICartoonFilter * This,
            /* [out] */ __RPC__out ULONG *iidCount,
            /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
        
        HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )( 
            __RPC__in __x_ABI_CLumia_CImaging_CArtistic_CICartoonFilter * This,
            /* [out] */ __RPC__deref_out_opt HSTRING *className);
        
        HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )( 
            __RPC__in __x_ABI_CLumia_CImaging_CArtistic_CICartoonFilter * This,
            /* [out] */ __RPC__out TrustLevel *trustLevel);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_DistinctEdges )( 
            __RPC__in __x_ABI_CLumia_CImaging_CArtistic_CICartoonFilter * This,
            /* [out][retval] */ __RPC__out boolean *__returnValue);
        
        /* [propput] */ HRESULT ( STDMETHODCALLTYPE *put_DistinctEdges )( 
            __RPC__in __x_ABI_CLumia_CImaging_CArtistic_CICartoonFilter * This,
            /* [in] */ boolean value);
        
        END_INTERFACE
    } __x_ABI_CLumia_CImaging_CArtistic_CICartoonFilterVtbl;

    interface __x_ABI_CLumia_CImaging_CArtistic_CICartoonFilter
    {
        CONST_VTBL struct __x_ABI_CLumia_CImaging_CArtistic_CICartoonFilterVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define __x_ABI_CLumia_CImaging_CArtistic_CICartoonFilter_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __x_ABI_CLumia_CImaging_CArtistic_CICartoonFilter_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __x_ABI_CLumia_CImaging_CArtistic_CICartoonFilter_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __x_ABI_CLumia_CImaging_CArtistic_CICartoonFilter_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 

#define __x_ABI_CLumia_CImaging_CArtistic_CICartoonFilter_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 

#define __x_ABI_CLumia_CImaging_CArtistic_CICartoonFilter_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 


#define __x_ABI_CLumia_CImaging_CArtistic_CICartoonFilter_get_DistinctEdges(This,__returnValue)	\
    ( (This)->lpVtbl -> get_DistinctEdges(This,__returnValue) ) 

#define __x_ABI_CLumia_CImaging_CArtistic_CICartoonFilter_put_DistinctEdges(This,value)	\
    ( (This)->lpVtbl -> put_DistinctEdges(This,value) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* ____x_ABI_CLumia_CImaging_CArtistic_CICartoonFilter_INTERFACE_DEFINED__ */


/* interface __MIDL_itf_Lumia2EImaging2EArtistic_0000_0018 */
/* [local] */ 

#if !defined(____x_ABI_CLumia_CImaging_CArtistic_CICartoonFilterFactory_INTERFACE_DEFINED__)
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Lumia_Imaging_Artistic_ICartoonFilterFactory[] = L"Lumia.Imaging.Artistic.ICartoonFilterFactory";
#endif /* !defined(____x_ABI_CLumia_CImaging_CArtistic_CICartoonFilterFactory_INTERFACE_DEFINED__) */


/* interface __MIDL_itf_Lumia2EImaging2EArtistic_0000_0018 */
/* [local] */ 



extern RPC_IF_HANDLE __MIDL_itf_Lumia2EImaging2EArtistic_0000_0018_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_Lumia2EImaging2EArtistic_0000_0018_v0_0_s_ifspec;

#ifndef ____x_ABI_CLumia_CImaging_CArtistic_CICartoonFilterFactory_INTERFACE_DEFINED__
#define ____x_ABI_CLumia_CImaging_CArtistic_CICartoonFilterFactory_INTERFACE_DEFINED__

/* interface __x_ABI_CLumia_CImaging_CArtistic_CICartoonFilterFactory */
/* [uuid][object] */ 



/* interface ABI::Lumia::Imaging::Artistic::ICartoonFilterFactory */
/* [uuid][object] */ 


EXTERN_C const IID IID___x_ABI_CLumia_CImaging_CArtistic_CICartoonFilterFactory;

#if defined(__cplusplus) && !defined(CINTERFACE)
    } /* end extern "C" */
    namespace ABI {
        namespace Lumia {
            namespace Imaging {
                namespace Artistic {
                    
                    MIDL_INTERFACE("0687F447-4FB0-38E5-BD4F-BDAE1E1D4119")
                    ICartoonFilterFactory : public IInspectable
                    {
                    public:
                        virtual HRESULT STDMETHODCALLTYPE CreateWithDistinctEdges( 
                            /* [in] */ boolean distinctEdges,
                            /* [out][retval] */ __RPC__deref_out_opt ABI::Lumia::Imaging::Artistic::ICartoonFilter **__returnValue) = 0;
                        
                    };

                    extern const __declspec(selectany) IID & IID_ICartoonFilterFactory = __uuidof(ICartoonFilterFactory);

                    
                }  /* end namespace */
            }  /* end namespace */
        }  /* end namespace */
    }  /* end namespace */
    extern "C" { 
    
#else 	/* C style interface */

    typedef struct __x_ABI_CLumia_CImaging_CArtistic_CICartoonFilterFactoryVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            __RPC__in __x_ABI_CLumia_CImaging_CArtistic_CICartoonFilterFactory * This,
            /* [in] */ __RPC__in REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            __RPC__in __x_ABI_CLumia_CImaging_CArtistic_CICartoonFilterFactory * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            __RPC__in __x_ABI_CLumia_CImaging_CArtistic_CICartoonFilterFactory * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetIids )( 
            __RPC__in __x_ABI_CLumia_CImaging_CArtistic_CICartoonFilterFactory * This,
            /* [out] */ __RPC__out ULONG *iidCount,
            /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
        
        HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )( 
            __RPC__in __x_ABI_CLumia_CImaging_CArtistic_CICartoonFilterFactory * This,
            /* [out] */ __RPC__deref_out_opt HSTRING *className);
        
        HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )( 
            __RPC__in __x_ABI_CLumia_CImaging_CArtistic_CICartoonFilterFactory * This,
            /* [out] */ __RPC__out TrustLevel *trustLevel);
        
        HRESULT ( STDMETHODCALLTYPE *CreateWithDistinctEdges )( 
            __RPC__in __x_ABI_CLumia_CImaging_CArtistic_CICartoonFilterFactory * This,
            /* [in] */ boolean distinctEdges,
            /* [out][retval] */ __RPC__deref_out_opt __x_ABI_CLumia_CImaging_CArtistic_CICartoonFilter **__returnValue);
        
        END_INTERFACE
    } __x_ABI_CLumia_CImaging_CArtistic_CICartoonFilterFactoryVtbl;

    interface __x_ABI_CLumia_CImaging_CArtistic_CICartoonFilterFactory
    {
        CONST_VTBL struct __x_ABI_CLumia_CImaging_CArtistic_CICartoonFilterFactoryVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define __x_ABI_CLumia_CImaging_CArtistic_CICartoonFilterFactory_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __x_ABI_CLumia_CImaging_CArtistic_CICartoonFilterFactory_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __x_ABI_CLumia_CImaging_CArtistic_CICartoonFilterFactory_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __x_ABI_CLumia_CImaging_CArtistic_CICartoonFilterFactory_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 

#define __x_ABI_CLumia_CImaging_CArtistic_CICartoonFilterFactory_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 

#define __x_ABI_CLumia_CImaging_CArtistic_CICartoonFilterFactory_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 


#define __x_ABI_CLumia_CImaging_CArtistic_CICartoonFilterFactory_CreateWithDistinctEdges(This,distinctEdges,__returnValue)	\
    ( (This)->lpVtbl -> CreateWithDistinctEdges(This,distinctEdges,__returnValue) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* ____x_ABI_CLumia_CImaging_CArtistic_CICartoonFilterFactory_INTERFACE_DEFINED__ */


/* interface __MIDL_itf_Lumia2EImaging2EArtistic_0000_0019 */
/* [local] */ 

#if !defined(____x_ABI_CLumia_CImaging_CArtistic_CIColorSwapFilter_INTERFACE_DEFINED__)
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Lumia_Imaging_Artistic_IColorSwapFilter[] = L"Lumia.Imaging.Artistic.IColorSwapFilter";
#endif /* !defined(____x_ABI_CLumia_CImaging_CArtistic_CIColorSwapFilter_INTERFACE_DEFINED__) */


/* interface __MIDL_itf_Lumia2EImaging2EArtistic_0000_0019 */
/* [local] */ 



extern RPC_IF_HANDLE __MIDL_itf_Lumia2EImaging2EArtistic_0000_0019_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_Lumia2EImaging2EArtistic_0000_0019_v0_0_s_ifspec;

#ifndef ____x_ABI_CLumia_CImaging_CArtistic_CIColorSwapFilter_INTERFACE_DEFINED__
#define ____x_ABI_CLumia_CImaging_CArtistic_CIColorSwapFilter_INTERFACE_DEFINED__

/* interface __x_ABI_CLumia_CImaging_CArtistic_CIColorSwapFilter */
/* [uuid][object] */ 



/* interface ABI::Lumia::Imaging::Artistic::IColorSwapFilter */
/* [uuid][object] */ 


EXTERN_C const IID IID___x_ABI_CLumia_CImaging_CArtistic_CIColorSwapFilter;

#if defined(__cplusplus) && !defined(CINTERFACE)
    } /* end extern "C" */
    namespace ABI {
        namespace Lumia {
            namespace Imaging {
                namespace Artistic {
                    
                    MIDL_INTERFACE("26C8E696-817C-3257-9D8B-52EF5A9AF9BB")
                    IColorSwapFilter : public IInspectable
                    {
                    public:
                        virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_SourceColor( 
                            /* [out][retval] */ __RPC__out ABI::Windows::UI::Color *__returnValue) = 0;
                        
                        virtual /* [propput] */ HRESULT STDMETHODCALLTYPE put_SourceColor( 
                            /* [in] */ ABI::Windows::UI::Color value) = 0;
                        
                        virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_SwapColor( 
                            /* [out][retval] */ __RPC__out ABI::Windows::UI::Color *__returnValue) = 0;
                        
                        virtual /* [propput] */ HRESULT STDMETHODCALLTYPE put_SwapColor( 
                            /* [in] */ ABI::Windows::UI::Color value) = 0;
                        
                        virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_ColorDistance( 
                            /* [out][retval] */ __RPC__out DOUBLE *__returnValue) = 0;
                        
                        virtual /* [propput] */ HRESULT STDMETHODCALLTYPE put_ColorDistance( 
                            /* [in] */ DOUBLE value) = 0;
                        
                        virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_IsMonoColor( 
                            /* [out][retval] */ __RPC__out boolean *__returnValue) = 0;
                        
                        virtual /* [propput] */ HRESULT STDMETHODCALLTYPE put_IsMonoColor( 
                            /* [in] */ boolean value) = 0;
                        
                        virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_SwapLuminance( 
                            /* [out][retval] */ __RPC__out boolean *__returnValue) = 0;
                        
                        virtual /* [propput] */ HRESULT STDMETHODCALLTYPE put_SwapLuminance( 
                            /* [in] */ boolean value) = 0;
                        
                    };

                    extern const __declspec(selectany) IID & IID_IColorSwapFilter = __uuidof(IColorSwapFilter);

                    
                }  /* end namespace */
            }  /* end namespace */
        }  /* end namespace */
    }  /* end namespace */
    extern "C" { 
    
#else 	/* C style interface */

    typedef struct __x_ABI_CLumia_CImaging_CArtistic_CIColorSwapFilterVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            __RPC__in __x_ABI_CLumia_CImaging_CArtistic_CIColorSwapFilter * This,
            /* [in] */ __RPC__in REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            __RPC__in __x_ABI_CLumia_CImaging_CArtistic_CIColorSwapFilter * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            __RPC__in __x_ABI_CLumia_CImaging_CArtistic_CIColorSwapFilter * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetIids )( 
            __RPC__in __x_ABI_CLumia_CImaging_CArtistic_CIColorSwapFilter * This,
            /* [out] */ __RPC__out ULONG *iidCount,
            /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
        
        HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )( 
            __RPC__in __x_ABI_CLumia_CImaging_CArtistic_CIColorSwapFilter * This,
            /* [out] */ __RPC__deref_out_opt HSTRING *className);
        
        HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )( 
            __RPC__in __x_ABI_CLumia_CImaging_CArtistic_CIColorSwapFilter * This,
            /* [out] */ __RPC__out TrustLevel *trustLevel);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_SourceColor )( 
            __RPC__in __x_ABI_CLumia_CImaging_CArtistic_CIColorSwapFilter * This,
            /* [out][retval] */ __RPC__out __x_ABI_CWindows_CUI_CColor *__returnValue);
        
        /* [propput] */ HRESULT ( STDMETHODCALLTYPE *put_SourceColor )( 
            __RPC__in __x_ABI_CLumia_CImaging_CArtistic_CIColorSwapFilter * This,
            /* [in] */ __x_ABI_CWindows_CUI_CColor value);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_SwapColor )( 
            __RPC__in __x_ABI_CLumia_CImaging_CArtistic_CIColorSwapFilter * This,
            /* [out][retval] */ __RPC__out __x_ABI_CWindows_CUI_CColor *__returnValue);
        
        /* [propput] */ HRESULT ( STDMETHODCALLTYPE *put_SwapColor )( 
            __RPC__in __x_ABI_CLumia_CImaging_CArtistic_CIColorSwapFilter * This,
            /* [in] */ __x_ABI_CWindows_CUI_CColor value);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_ColorDistance )( 
            __RPC__in __x_ABI_CLumia_CImaging_CArtistic_CIColorSwapFilter * This,
            /* [out][retval] */ __RPC__out DOUBLE *__returnValue);
        
        /* [propput] */ HRESULT ( STDMETHODCALLTYPE *put_ColorDistance )( 
            __RPC__in __x_ABI_CLumia_CImaging_CArtistic_CIColorSwapFilter * This,
            /* [in] */ DOUBLE value);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_IsMonoColor )( 
            __RPC__in __x_ABI_CLumia_CImaging_CArtistic_CIColorSwapFilter * This,
            /* [out][retval] */ __RPC__out boolean *__returnValue);
        
        /* [propput] */ HRESULT ( STDMETHODCALLTYPE *put_IsMonoColor )( 
            __RPC__in __x_ABI_CLumia_CImaging_CArtistic_CIColorSwapFilter * This,
            /* [in] */ boolean value);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_SwapLuminance )( 
            __RPC__in __x_ABI_CLumia_CImaging_CArtistic_CIColorSwapFilter * This,
            /* [out][retval] */ __RPC__out boolean *__returnValue);
        
        /* [propput] */ HRESULT ( STDMETHODCALLTYPE *put_SwapLuminance )( 
            __RPC__in __x_ABI_CLumia_CImaging_CArtistic_CIColorSwapFilter * This,
            /* [in] */ boolean value);
        
        END_INTERFACE
    } __x_ABI_CLumia_CImaging_CArtistic_CIColorSwapFilterVtbl;

    interface __x_ABI_CLumia_CImaging_CArtistic_CIColorSwapFilter
    {
        CONST_VTBL struct __x_ABI_CLumia_CImaging_CArtistic_CIColorSwapFilterVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define __x_ABI_CLumia_CImaging_CArtistic_CIColorSwapFilter_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __x_ABI_CLumia_CImaging_CArtistic_CIColorSwapFilter_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __x_ABI_CLumia_CImaging_CArtistic_CIColorSwapFilter_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __x_ABI_CLumia_CImaging_CArtistic_CIColorSwapFilter_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 

#define __x_ABI_CLumia_CImaging_CArtistic_CIColorSwapFilter_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 

#define __x_ABI_CLumia_CImaging_CArtistic_CIColorSwapFilter_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 


#define __x_ABI_CLumia_CImaging_CArtistic_CIColorSwapFilter_get_SourceColor(This,__returnValue)	\
    ( (This)->lpVtbl -> get_SourceColor(This,__returnValue) ) 

#define __x_ABI_CLumia_CImaging_CArtistic_CIColorSwapFilter_put_SourceColor(This,value)	\
    ( (This)->lpVtbl -> put_SourceColor(This,value) ) 

#define __x_ABI_CLumia_CImaging_CArtistic_CIColorSwapFilter_get_SwapColor(This,__returnValue)	\
    ( (This)->lpVtbl -> get_SwapColor(This,__returnValue) ) 

#define __x_ABI_CLumia_CImaging_CArtistic_CIColorSwapFilter_put_SwapColor(This,value)	\
    ( (This)->lpVtbl -> put_SwapColor(This,value) ) 

#define __x_ABI_CLumia_CImaging_CArtistic_CIColorSwapFilter_get_ColorDistance(This,__returnValue)	\
    ( (This)->lpVtbl -> get_ColorDistance(This,__returnValue) ) 

#define __x_ABI_CLumia_CImaging_CArtistic_CIColorSwapFilter_put_ColorDistance(This,value)	\
    ( (This)->lpVtbl -> put_ColorDistance(This,value) ) 

#define __x_ABI_CLumia_CImaging_CArtistic_CIColorSwapFilter_get_IsMonoColor(This,__returnValue)	\
    ( (This)->lpVtbl -> get_IsMonoColor(This,__returnValue) ) 

#define __x_ABI_CLumia_CImaging_CArtistic_CIColorSwapFilter_put_IsMonoColor(This,value)	\
    ( (This)->lpVtbl -> put_IsMonoColor(This,value) ) 

#define __x_ABI_CLumia_CImaging_CArtistic_CIColorSwapFilter_get_SwapLuminance(This,__returnValue)	\
    ( (This)->lpVtbl -> get_SwapLuminance(This,__returnValue) ) 

#define __x_ABI_CLumia_CImaging_CArtistic_CIColorSwapFilter_put_SwapLuminance(This,value)	\
    ( (This)->lpVtbl -> put_SwapLuminance(This,value) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* ____x_ABI_CLumia_CImaging_CArtistic_CIColorSwapFilter_INTERFACE_DEFINED__ */


/* interface __MIDL_itf_Lumia2EImaging2EArtistic_0000_0020 */
/* [local] */ 

#if !defined(____x_ABI_CLumia_CImaging_CArtistic_CIColorSwapFilterFactory_INTERFACE_DEFINED__)
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Lumia_Imaging_Artistic_IColorSwapFilterFactory[] = L"Lumia.Imaging.Artistic.IColorSwapFilterFactory";
#endif /* !defined(____x_ABI_CLumia_CImaging_CArtistic_CIColorSwapFilterFactory_INTERFACE_DEFINED__) */


/* interface __MIDL_itf_Lumia2EImaging2EArtistic_0000_0020 */
/* [local] */ 



extern RPC_IF_HANDLE __MIDL_itf_Lumia2EImaging2EArtistic_0000_0020_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_Lumia2EImaging2EArtistic_0000_0020_v0_0_s_ifspec;

#ifndef ____x_ABI_CLumia_CImaging_CArtistic_CIColorSwapFilterFactory_INTERFACE_DEFINED__
#define ____x_ABI_CLumia_CImaging_CArtistic_CIColorSwapFilterFactory_INTERFACE_DEFINED__

/* interface __x_ABI_CLumia_CImaging_CArtistic_CIColorSwapFilterFactory */
/* [uuid][object] */ 



/* interface ABI::Lumia::Imaging::Artistic::IColorSwapFilterFactory */
/* [uuid][object] */ 


EXTERN_C const IID IID___x_ABI_CLumia_CImaging_CArtistic_CIColorSwapFilterFactory;

#if defined(__cplusplus) && !defined(CINTERFACE)
    } /* end extern "C" */
    namespace ABI {
        namespace Lumia {
            namespace Imaging {
                namespace Artistic {
                    
                    MIDL_INTERFACE("46CCDC56-347B-3B9D-AA5D-5F399FB7EE5F")
                    IColorSwapFilterFactory : public IInspectable
                    {
                    public:
                        virtual HRESULT STDMETHODCALLTYPE CreateWithSettings( 
                            /* [in] */ ABI::Windows::UI::Color sourceColor,
                            /* [in] */ ABI::Windows::UI::Color swapColor,
                            /* [in] */ DOUBLE colorDistance,
                            /* [in] */ boolean isMonoColor,
                            /* [in] */ boolean swapLuminance,
                            /* [out][retval] */ __RPC__deref_out_opt ABI::Lumia::Imaging::Artistic::IColorSwapFilter **__returnValue) = 0;
                        
                    };

                    extern const __declspec(selectany) IID & IID_IColorSwapFilterFactory = __uuidof(IColorSwapFilterFactory);

                    
                }  /* end namespace */
            }  /* end namespace */
        }  /* end namespace */
    }  /* end namespace */
    extern "C" { 
    
#else 	/* C style interface */

    typedef struct __x_ABI_CLumia_CImaging_CArtistic_CIColorSwapFilterFactoryVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            __RPC__in __x_ABI_CLumia_CImaging_CArtistic_CIColorSwapFilterFactory * This,
            /* [in] */ __RPC__in REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            __RPC__in __x_ABI_CLumia_CImaging_CArtistic_CIColorSwapFilterFactory * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            __RPC__in __x_ABI_CLumia_CImaging_CArtistic_CIColorSwapFilterFactory * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetIids )( 
            __RPC__in __x_ABI_CLumia_CImaging_CArtistic_CIColorSwapFilterFactory * This,
            /* [out] */ __RPC__out ULONG *iidCount,
            /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
        
        HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )( 
            __RPC__in __x_ABI_CLumia_CImaging_CArtistic_CIColorSwapFilterFactory * This,
            /* [out] */ __RPC__deref_out_opt HSTRING *className);
        
        HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )( 
            __RPC__in __x_ABI_CLumia_CImaging_CArtistic_CIColorSwapFilterFactory * This,
            /* [out] */ __RPC__out TrustLevel *trustLevel);
        
        HRESULT ( STDMETHODCALLTYPE *CreateWithSettings )( 
            __RPC__in __x_ABI_CLumia_CImaging_CArtistic_CIColorSwapFilterFactory * This,
            /* [in] */ __x_ABI_CWindows_CUI_CColor sourceColor,
            /* [in] */ __x_ABI_CWindows_CUI_CColor swapColor,
            /* [in] */ DOUBLE colorDistance,
            /* [in] */ boolean isMonoColor,
            /* [in] */ boolean swapLuminance,
            /* [out][retval] */ __RPC__deref_out_opt __x_ABI_CLumia_CImaging_CArtistic_CIColorSwapFilter **__returnValue);
        
        END_INTERFACE
    } __x_ABI_CLumia_CImaging_CArtistic_CIColorSwapFilterFactoryVtbl;

    interface __x_ABI_CLumia_CImaging_CArtistic_CIColorSwapFilterFactory
    {
        CONST_VTBL struct __x_ABI_CLumia_CImaging_CArtistic_CIColorSwapFilterFactoryVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define __x_ABI_CLumia_CImaging_CArtistic_CIColorSwapFilterFactory_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __x_ABI_CLumia_CImaging_CArtistic_CIColorSwapFilterFactory_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __x_ABI_CLumia_CImaging_CArtistic_CIColorSwapFilterFactory_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __x_ABI_CLumia_CImaging_CArtistic_CIColorSwapFilterFactory_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 

#define __x_ABI_CLumia_CImaging_CArtistic_CIColorSwapFilterFactory_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 

#define __x_ABI_CLumia_CImaging_CArtistic_CIColorSwapFilterFactory_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 


#define __x_ABI_CLumia_CImaging_CArtistic_CIColorSwapFilterFactory_CreateWithSettings(This,sourceColor,swapColor,colorDistance,isMonoColor,swapLuminance,__returnValue)	\
    ( (This)->lpVtbl -> CreateWithSettings(This,sourceColor,swapColor,colorDistance,isMonoColor,swapLuminance,__returnValue) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* ____x_ABI_CLumia_CImaging_CArtistic_CIColorSwapFilterFactory_INTERFACE_DEFINED__ */


/* interface __MIDL_itf_Lumia2EImaging2EArtistic_0000_0021 */
/* [local] */ 

#if !defined(____x_ABI_CLumia_CImaging_CArtistic_CIEmbossFilter_INTERFACE_DEFINED__)
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Lumia_Imaging_Artistic_IEmbossFilter[] = L"Lumia.Imaging.Artistic.IEmbossFilter";
#endif /* !defined(____x_ABI_CLumia_CImaging_CArtistic_CIEmbossFilter_INTERFACE_DEFINED__) */


/* interface __MIDL_itf_Lumia2EImaging2EArtistic_0000_0021 */
/* [local] */ 



extern RPC_IF_HANDLE __MIDL_itf_Lumia2EImaging2EArtistic_0000_0021_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_Lumia2EImaging2EArtistic_0000_0021_v0_0_s_ifspec;

#ifndef ____x_ABI_CLumia_CImaging_CArtistic_CIEmbossFilter_INTERFACE_DEFINED__
#define ____x_ABI_CLumia_CImaging_CArtistic_CIEmbossFilter_INTERFACE_DEFINED__

/* interface __x_ABI_CLumia_CImaging_CArtistic_CIEmbossFilter */
/* [uuid][object] */ 



/* interface ABI::Lumia::Imaging::Artistic::IEmbossFilter */
/* [uuid][object] */ 


EXTERN_C const IID IID___x_ABI_CLumia_CImaging_CArtistic_CIEmbossFilter;

#if defined(__cplusplus) && !defined(CINTERFACE)
    } /* end extern "C" */
    namespace ABI {
        namespace Lumia {
            namespace Imaging {
                namespace Artistic {
                    
                    MIDL_INTERFACE("650F2D8A-E27F-3E07-AE4D-BE8BCAEE98D7")
                    IEmbossFilter : public IInspectable
                    {
                    public:
                        virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_Level( 
                            /* [out][retval] */ __RPC__out DOUBLE *__returnValue) = 0;
                        
                        virtual /* [propput] */ HRESULT STDMETHODCALLTYPE put_Level( 
                            /* [in] */ DOUBLE value) = 0;
                        
                    };

                    extern const __declspec(selectany) IID & IID_IEmbossFilter = __uuidof(IEmbossFilter);

                    
                }  /* end namespace */
            }  /* end namespace */
        }  /* end namespace */
    }  /* end namespace */
    extern "C" { 
    
#else 	/* C style interface */

    typedef struct __x_ABI_CLumia_CImaging_CArtistic_CIEmbossFilterVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            __RPC__in __x_ABI_CLumia_CImaging_CArtistic_CIEmbossFilter * This,
            /* [in] */ __RPC__in REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            __RPC__in __x_ABI_CLumia_CImaging_CArtistic_CIEmbossFilter * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            __RPC__in __x_ABI_CLumia_CImaging_CArtistic_CIEmbossFilter * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetIids )( 
            __RPC__in __x_ABI_CLumia_CImaging_CArtistic_CIEmbossFilter * This,
            /* [out] */ __RPC__out ULONG *iidCount,
            /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
        
        HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )( 
            __RPC__in __x_ABI_CLumia_CImaging_CArtistic_CIEmbossFilter * This,
            /* [out] */ __RPC__deref_out_opt HSTRING *className);
        
        HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )( 
            __RPC__in __x_ABI_CLumia_CImaging_CArtistic_CIEmbossFilter * This,
            /* [out] */ __RPC__out TrustLevel *trustLevel);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_Level )( 
            __RPC__in __x_ABI_CLumia_CImaging_CArtistic_CIEmbossFilter * This,
            /* [out][retval] */ __RPC__out DOUBLE *__returnValue);
        
        /* [propput] */ HRESULT ( STDMETHODCALLTYPE *put_Level )( 
            __RPC__in __x_ABI_CLumia_CImaging_CArtistic_CIEmbossFilter * This,
            /* [in] */ DOUBLE value);
        
        END_INTERFACE
    } __x_ABI_CLumia_CImaging_CArtistic_CIEmbossFilterVtbl;

    interface __x_ABI_CLumia_CImaging_CArtistic_CIEmbossFilter
    {
        CONST_VTBL struct __x_ABI_CLumia_CImaging_CArtistic_CIEmbossFilterVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define __x_ABI_CLumia_CImaging_CArtistic_CIEmbossFilter_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __x_ABI_CLumia_CImaging_CArtistic_CIEmbossFilter_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __x_ABI_CLumia_CImaging_CArtistic_CIEmbossFilter_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __x_ABI_CLumia_CImaging_CArtistic_CIEmbossFilter_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 

#define __x_ABI_CLumia_CImaging_CArtistic_CIEmbossFilter_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 

#define __x_ABI_CLumia_CImaging_CArtistic_CIEmbossFilter_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 


#define __x_ABI_CLumia_CImaging_CArtistic_CIEmbossFilter_get_Level(This,__returnValue)	\
    ( (This)->lpVtbl -> get_Level(This,__returnValue) ) 

#define __x_ABI_CLumia_CImaging_CArtistic_CIEmbossFilter_put_Level(This,value)	\
    ( (This)->lpVtbl -> put_Level(This,value) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* ____x_ABI_CLumia_CImaging_CArtistic_CIEmbossFilter_INTERFACE_DEFINED__ */


/* interface __MIDL_itf_Lumia2EImaging2EArtistic_0000_0022 */
/* [local] */ 

#if !defined(____x_ABI_CLumia_CImaging_CArtistic_CIEmbossFilterFactory_INTERFACE_DEFINED__)
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Lumia_Imaging_Artistic_IEmbossFilterFactory[] = L"Lumia.Imaging.Artistic.IEmbossFilterFactory";
#endif /* !defined(____x_ABI_CLumia_CImaging_CArtistic_CIEmbossFilterFactory_INTERFACE_DEFINED__) */


/* interface __MIDL_itf_Lumia2EImaging2EArtistic_0000_0022 */
/* [local] */ 



extern RPC_IF_HANDLE __MIDL_itf_Lumia2EImaging2EArtistic_0000_0022_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_Lumia2EImaging2EArtistic_0000_0022_v0_0_s_ifspec;

#ifndef ____x_ABI_CLumia_CImaging_CArtistic_CIEmbossFilterFactory_INTERFACE_DEFINED__
#define ____x_ABI_CLumia_CImaging_CArtistic_CIEmbossFilterFactory_INTERFACE_DEFINED__

/* interface __x_ABI_CLumia_CImaging_CArtistic_CIEmbossFilterFactory */
/* [uuid][object] */ 



/* interface ABI::Lumia::Imaging::Artistic::IEmbossFilterFactory */
/* [uuid][object] */ 


EXTERN_C const IID IID___x_ABI_CLumia_CImaging_CArtistic_CIEmbossFilterFactory;

#if defined(__cplusplus) && !defined(CINTERFACE)
    } /* end extern "C" */
    namespace ABI {
        namespace Lumia {
            namespace Imaging {
                namespace Artistic {
                    
                    MIDL_INTERFACE("79DBA3E2-882E-3BE4-9805-97D276A8DAAE")
                    IEmbossFilterFactory : public IInspectable
                    {
                    public:
                        virtual HRESULT STDMETHODCALLTYPE Create( 
                            /* [in] */ DOUBLE level,
                            /* [out][retval] */ __RPC__deref_out_opt ABI::Lumia::Imaging::Artistic::IEmbossFilter **__returnValue) = 0;
                        
                    };

                    extern const __declspec(selectany) IID & IID_IEmbossFilterFactory = __uuidof(IEmbossFilterFactory);

                    
                }  /* end namespace */
            }  /* end namespace */
        }  /* end namespace */
    }  /* end namespace */
    extern "C" { 
    
#else 	/* C style interface */

    typedef struct __x_ABI_CLumia_CImaging_CArtistic_CIEmbossFilterFactoryVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            __RPC__in __x_ABI_CLumia_CImaging_CArtistic_CIEmbossFilterFactory * This,
            /* [in] */ __RPC__in REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            __RPC__in __x_ABI_CLumia_CImaging_CArtistic_CIEmbossFilterFactory * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            __RPC__in __x_ABI_CLumia_CImaging_CArtistic_CIEmbossFilterFactory * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetIids )( 
            __RPC__in __x_ABI_CLumia_CImaging_CArtistic_CIEmbossFilterFactory * This,
            /* [out] */ __RPC__out ULONG *iidCount,
            /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
        
        HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )( 
            __RPC__in __x_ABI_CLumia_CImaging_CArtistic_CIEmbossFilterFactory * This,
            /* [out] */ __RPC__deref_out_opt HSTRING *className);
        
        HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )( 
            __RPC__in __x_ABI_CLumia_CImaging_CArtistic_CIEmbossFilterFactory * This,
            /* [out] */ __RPC__out TrustLevel *trustLevel);
        
        HRESULT ( STDMETHODCALLTYPE *Create )( 
            __RPC__in __x_ABI_CLumia_CImaging_CArtistic_CIEmbossFilterFactory * This,
            /* [in] */ DOUBLE level,
            /* [out][retval] */ __RPC__deref_out_opt __x_ABI_CLumia_CImaging_CArtistic_CIEmbossFilter **__returnValue);
        
        END_INTERFACE
    } __x_ABI_CLumia_CImaging_CArtistic_CIEmbossFilterFactoryVtbl;

    interface __x_ABI_CLumia_CImaging_CArtistic_CIEmbossFilterFactory
    {
        CONST_VTBL struct __x_ABI_CLumia_CImaging_CArtistic_CIEmbossFilterFactoryVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define __x_ABI_CLumia_CImaging_CArtistic_CIEmbossFilterFactory_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __x_ABI_CLumia_CImaging_CArtistic_CIEmbossFilterFactory_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __x_ABI_CLumia_CImaging_CArtistic_CIEmbossFilterFactory_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __x_ABI_CLumia_CImaging_CArtistic_CIEmbossFilterFactory_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 

#define __x_ABI_CLumia_CImaging_CArtistic_CIEmbossFilterFactory_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 

#define __x_ABI_CLumia_CImaging_CArtistic_CIEmbossFilterFactory_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 


#define __x_ABI_CLumia_CImaging_CArtistic_CIEmbossFilterFactory_Create(This,level,__returnValue)	\
    ( (This)->lpVtbl -> Create(This,level,__returnValue) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* ____x_ABI_CLumia_CImaging_CArtistic_CIEmbossFilterFactory_INTERFACE_DEFINED__ */


/* interface __MIDL_itf_Lumia2EImaging2EArtistic_0000_0023 */
/* [local] */ 

#if !defined(____x_ABI_CLumia_CImaging_CArtistic_CIFogFilter_INTERFACE_DEFINED__)
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Lumia_Imaging_Artistic_IFogFilter[] = L"Lumia.Imaging.Artistic.IFogFilter";
#endif /* !defined(____x_ABI_CLumia_CImaging_CArtistic_CIFogFilter_INTERFACE_DEFINED__) */


/* interface __MIDL_itf_Lumia2EImaging2EArtistic_0000_0023 */
/* [local] */ 



extern RPC_IF_HANDLE __MIDL_itf_Lumia2EImaging2EArtistic_0000_0023_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_Lumia2EImaging2EArtistic_0000_0023_v0_0_s_ifspec;

#ifndef ____x_ABI_CLumia_CImaging_CArtistic_CIFogFilter_INTERFACE_DEFINED__
#define ____x_ABI_CLumia_CImaging_CArtistic_CIFogFilter_INTERFACE_DEFINED__

/* interface __x_ABI_CLumia_CImaging_CArtistic_CIFogFilter */
/* [uuid][object] */ 



/* interface ABI::Lumia::Imaging::Artistic::IFogFilter */
/* [uuid][object] */ 


EXTERN_C const IID IID___x_ABI_CLumia_CImaging_CArtistic_CIFogFilter;

#if defined(__cplusplus) && !defined(CINTERFACE)
    } /* end extern "C" */
    namespace ABI {
        namespace Lumia {
            namespace Imaging {
                namespace Artistic {
                    
                    MIDL_INTERFACE("56DADCC2-B8EE-3374-BBAF-58341AFFA315")
                    IFogFilter : public IInspectable
                    {
                    public:
                    };

                    extern const __declspec(selectany) IID & IID_IFogFilter = __uuidof(IFogFilter);

                    
                }  /* end namespace */
            }  /* end namespace */
        }  /* end namespace */
    }  /* end namespace */
    extern "C" { 
    
#else 	/* C style interface */

    typedef struct __x_ABI_CLumia_CImaging_CArtistic_CIFogFilterVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            __RPC__in __x_ABI_CLumia_CImaging_CArtistic_CIFogFilter * This,
            /* [in] */ __RPC__in REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            __RPC__in __x_ABI_CLumia_CImaging_CArtistic_CIFogFilter * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            __RPC__in __x_ABI_CLumia_CImaging_CArtistic_CIFogFilter * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetIids )( 
            __RPC__in __x_ABI_CLumia_CImaging_CArtistic_CIFogFilter * This,
            /* [out] */ __RPC__out ULONG *iidCount,
            /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
        
        HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )( 
            __RPC__in __x_ABI_CLumia_CImaging_CArtistic_CIFogFilter * This,
            /* [out] */ __RPC__deref_out_opt HSTRING *className);
        
        HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )( 
            __RPC__in __x_ABI_CLumia_CImaging_CArtistic_CIFogFilter * This,
            /* [out] */ __RPC__out TrustLevel *trustLevel);
        
        END_INTERFACE
    } __x_ABI_CLumia_CImaging_CArtistic_CIFogFilterVtbl;

    interface __x_ABI_CLumia_CImaging_CArtistic_CIFogFilter
    {
        CONST_VTBL struct __x_ABI_CLumia_CImaging_CArtistic_CIFogFilterVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define __x_ABI_CLumia_CImaging_CArtistic_CIFogFilter_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __x_ABI_CLumia_CImaging_CArtistic_CIFogFilter_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __x_ABI_CLumia_CImaging_CArtistic_CIFogFilter_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __x_ABI_CLumia_CImaging_CArtistic_CIFogFilter_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 

#define __x_ABI_CLumia_CImaging_CArtistic_CIFogFilter_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 

#define __x_ABI_CLumia_CImaging_CArtistic_CIFogFilter_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 


#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* ____x_ABI_CLumia_CImaging_CArtistic_CIFogFilter_INTERFACE_DEFINED__ */


/* interface __MIDL_itf_Lumia2EImaging2EArtistic_0000_0024 */
/* [local] */ 

#if !defined(____x_ABI_CLumia_CImaging_CArtistic_CIFoundationFilter_INTERFACE_DEFINED__)
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Lumia_Imaging_Artistic_IFoundationFilter[] = L"Lumia.Imaging.Artistic.IFoundationFilter";
#endif /* !defined(____x_ABI_CLumia_CImaging_CArtistic_CIFoundationFilter_INTERFACE_DEFINED__) */


/* interface __MIDL_itf_Lumia2EImaging2EArtistic_0000_0024 */
/* [local] */ 



extern RPC_IF_HANDLE __MIDL_itf_Lumia2EImaging2EArtistic_0000_0024_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_Lumia2EImaging2EArtistic_0000_0024_v0_0_s_ifspec;

#ifndef ____x_ABI_CLumia_CImaging_CArtistic_CIFoundationFilter_INTERFACE_DEFINED__
#define ____x_ABI_CLumia_CImaging_CArtistic_CIFoundationFilter_INTERFACE_DEFINED__

/* interface __x_ABI_CLumia_CImaging_CArtistic_CIFoundationFilter */
/* [uuid][object] */ 



/* interface ABI::Lumia::Imaging::Artistic::IFoundationFilter */
/* [uuid][object] */ 


EXTERN_C const IID IID___x_ABI_CLumia_CImaging_CArtistic_CIFoundationFilter;

#if defined(__cplusplus) && !defined(CINTERFACE)
    } /* end extern "C" */
    namespace ABI {
        namespace Lumia {
            namespace Imaging {
                namespace Artistic {
                    
                    MIDL_INTERFACE("68E16223-EE38-34A3-8C11-B13A16EBDB51")
                    IFoundationFilter : public IInspectable
                    {
                    public:
                        virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_Region( 
                            /* [out][retval] */ __RPC__out ABI::Windows::Foundation::Rect *__returnValue) = 0;
                        
                        virtual /* [propput] */ HRESULT STDMETHODCALLTYPE put_Region( 
                            /* [in] */ ABI::Windows::Foundation::Rect value) = 0;
                        
                    };

                    extern const __declspec(selectany) IID & IID_IFoundationFilter = __uuidof(IFoundationFilter);

                    
                }  /* end namespace */
            }  /* end namespace */
        }  /* end namespace */
    }  /* end namespace */
    extern "C" { 
    
#else 	/* C style interface */

    typedef struct __x_ABI_CLumia_CImaging_CArtistic_CIFoundationFilterVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            __RPC__in __x_ABI_CLumia_CImaging_CArtistic_CIFoundationFilter * This,
            /* [in] */ __RPC__in REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            __RPC__in __x_ABI_CLumia_CImaging_CArtistic_CIFoundationFilter * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            __RPC__in __x_ABI_CLumia_CImaging_CArtistic_CIFoundationFilter * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetIids )( 
            __RPC__in __x_ABI_CLumia_CImaging_CArtistic_CIFoundationFilter * This,
            /* [out] */ __RPC__out ULONG *iidCount,
            /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
        
        HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )( 
            __RPC__in __x_ABI_CLumia_CImaging_CArtistic_CIFoundationFilter * This,
            /* [out] */ __RPC__deref_out_opt HSTRING *className);
        
        HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )( 
            __RPC__in __x_ABI_CLumia_CImaging_CArtistic_CIFoundationFilter * This,
            /* [out] */ __RPC__out TrustLevel *trustLevel);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_Region )( 
            __RPC__in __x_ABI_CLumia_CImaging_CArtistic_CIFoundationFilter * This,
            /* [out][retval] */ __RPC__out __x_ABI_CWindows_CFoundation_CRect *__returnValue);
        
        /* [propput] */ HRESULT ( STDMETHODCALLTYPE *put_Region )( 
            __RPC__in __x_ABI_CLumia_CImaging_CArtistic_CIFoundationFilter * This,
            /* [in] */ __x_ABI_CWindows_CFoundation_CRect value);
        
        END_INTERFACE
    } __x_ABI_CLumia_CImaging_CArtistic_CIFoundationFilterVtbl;

    interface __x_ABI_CLumia_CImaging_CArtistic_CIFoundationFilter
    {
        CONST_VTBL struct __x_ABI_CLumia_CImaging_CArtistic_CIFoundationFilterVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define __x_ABI_CLumia_CImaging_CArtistic_CIFoundationFilter_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __x_ABI_CLumia_CImaging_CArtistic_CIFoundationFilter_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __x_ABI_CLumia_CImaging_CArtistic_CIFoundationFilter_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __x_ABI_CLumia_CImaging_CArtistic_CIFoundationFilter_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 

#define __x_ABI_CLumia_CImaging_CArtistic_CIFoundationFilter_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 

#define __x_ABI_CLumia_CImaging_CArtistic_CIFoundationFilter_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 


#define __x_ABI_CLumia_CImaging_CArtistic_CIFoundationFilter_get_Region(This,__returnValue)	\
    ( (This)->lpVtbl -> get_Region(This,__returnValue) ) 

#define __x_ABI_CLumia_CImaging_CArtistic_CIFoundationFilter_put_Region(This,value)	\
    ( (This)->lpVtbl -> put_Region(This,value) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* ____x_ABI_CLumia_CImaging_CArtistic_CIFoundationFilter_INTERFACE_DEFINED__ */


/* interface __MIDL_itf_Lumia2EImaging2EArtistic_0000_0025 */
/* [local] */ 

#if !defined(____x_ABI_CLumia_CImaging_CArtistic_CIFoundationFilterFactory_INTERFACE_DEFINED__)
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Lumia_Imaging_Artistic_IFoundationFilterFactory[] = L"Lumia.Imaging.Artistic.IFoundationFilterFactory";
#endif /* !defined(____x_ABI_CLumia_CImaging_CArtistic_CIFoundationFilterFactory_INTERFACE_DEFINED__) */


/* interface __MIDL_itf_Lumia2EImaging2EArtistic_0000_0025 */
/* [local] */ 



extern RPC_IF_HANDLE __MIDL_itf_Lumia2EImaging2EArtistic_0000_0025_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_Lumia2EImaging2EArtistic_0000_0025_v0_0_s_ifspec;

#ifndef ____x_ABI_CLumia_CImaging_CArtistic_CIFoundationFilterFactory_INTERFACE_DEFINED__
#define ____x_ABI_CLumia_CImaging_CArtistic_CIFoundationFilterFactory_INTERFACE_DEFINED__

/* interface __x_ABI_CLumia_CImaging_CArtistic_CIFoundationFilterFactory */
/* [uuid][object] */ 



/* interface ABI::Lumia::Imaging::Artistic::IFoundationFilterFactory */
/* [uuid][object] */ 


EXTERN_C const IID IID___x_ABI_CLumia_CImaging_CArtistic_CIFoundationFilterFactory;

#if defined(__cplusplus) && !defined(CINTERFACE)
    } /* end extern "C" */
    namespace ABI {
        namespace Lumia {
            namespace Imaging {
                namespace Artistic {
                    
                    MIDL_INTERFACE("99671B05-65DC-3F93-A1B6-A153D80AA2C0")
                    IFoundationFilterFactory : public IInspectable
                    {
                    public:
                        virtual HRESULT STDMETHODCALLTYPE Create( 
                            /* [in] */ ABI::Windows::Foundation::Rect region,
                            /* [out][retval] */ __RPC__deref_out_opt ABI::Lumia::Imaging::Artistic::IFoundationFilter **__returnValue) = 0;
                        
                    };

                    extern const __declspec(selectany) IID & IID_IFoundationFilterFactory = __uuidof(IFoundationFilterFactory);

                    
                }  /* end namespace */
            }  /* end namespace */
        }  /* end namespace */
    }  /* end namespace */
    extern "C" { 
    
#else 	/* C style interface */

    typedef struct __x_ABI_CLumia_CImaging_CArtistic_CIFoundationFilterFactoryVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            __RPC__in __x_ABI_CLumia_CImaging_CArtistic_CIFoundationFilterFactory * This,
            /* [in] */ __RPC__in REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            __RPC__in __x_ABI_CLumia_CImaging_CArtistic_CIFoundationFilterFactory * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            __RPC__in __x_ABI_CLumia_CImaging_CArtistic_CIFoundationFilterFactory * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetIids )( 
            __RPC__in __x_ABI_CLumia_CImaging_CArtistic_CIFoundationFilterFactory * This,
            /* [out] */ __RPC__out ULONG *iidCount,
            /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
        
        HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )( 
            __RPC__in __x_ABI_CLumia_CImaging_CArtistic_CIFoundationFilterFactory * This,
            /* [out] */ __RPC__deref_out_opt HSTRING *className);
        
        HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )( 
            __RPC__in __x_ABI_CLumia_CImaging_CArtistic_CIFoundationFilterFactory * This,
            /* [out] */ __RPC__out TrustLevel *trustLevel);
        
        HRESULT ( STDMETHODCALLTYPE *Create )( 
            __RPC__in __x_ABI_CLumia_CImaging_CArtistic_CIFoundationFilterFactory * This,
            /* [in] */ __x_ABI_CWindows_CFoundation_CRect region,
            /* [out][retval] */ __RPC__deref_out_opt __x_ABI_CLumia_CImaging_CArtistic_CIFoundationFilter **__returnValue);
        
        END_INTERFACE
    } __x_ABI_CLumia_CImaging_CArtistic_CIFoundationFilterFactoryVtbl;

    interface __x_ABI_CLumia_CImaging_CArtistic_CIFoundationFilterFactory
    {
        CONST_VTBL struct __x_ABI_CLumia_CImaging_CArtistic_CIFoundationFilterFactoryVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define __x_ABI_CLumia_CImaging_CArtistic_CIFoundationFilterFactory_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __x_ABI_CLumia_CImaging_CArtistic_CIFoundationFilterFactory_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __x_ABI_CLumia_CImaging_CArtistic_CIFoundationFilterFactory_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __x_ABI_CLumia_CImaging_CArtistic_CIFoundationFilterFactory_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 

#define __x_ABI_CLumia_CImaging_CArtistic_CIFoundationFilterFactory_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 

#define __x_ABI_CLumia_CImaging_CArtistic_CIFoundationFilterFactory_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 


#define __x_ABI_CLumia_CImaging_CArtistic_CIFoundationFilterFactory_Create(This,region,__returnValue)	\
    ( (This)->lpVtbl -> Create(This,region,__returnValue) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* ____x_ABI_CLumia_CImaging_CArtistic_CIFoundationFilterFactory_INTERFACE_DEFINED__ */


/* interface __MIDL_itf_Lumia2EImaging2EArtistic_0000_0026 */
/* [local] */ 

#if !defined(____x_ABI_CLumia_CImaging_CArtistic_CIGrayscaleNegativeFilter_INTERFACE_DEFINED__)
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Lumia_Imaging_Artistic_IGrayscaleNegativeFilter[] = L"Lumia.Imaging.Artistic.IGrayscaleNegativeFilter";
#endif /* !defined(____x_ABI_CLumia_CImaging_CArtistic_CIGrayscaleNegativeFilter_INTERFACE_DEFINED__) */


/* interface __MIDL_itf_Lumia2EImaging2EArtistic_0000_0026 */
/* [local] */ 



extern RPC_IF_HANDLE __MIDL_itf_Lumia2EImaging2EArtistic_0000_0026_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_Lumia2EImaging2EArtistic_0000_0026_v0_0_s_ifspec;

#ifndef ____x_ABI_CLumia_CImaging_CArtistic_CIGrayscaleNegativeFilter_INTERFACE_DEFINED__
#define ____x_ABI_CLumia_CImaging_CArtistic_CIGrayscaleNegativeFilter_INTERFACE_DEFINED__

/* interface __x_ABI_CLumia_CImaging_CArtistic_CIGrayscaleNegativeFilter */
/* [uuid][object] */ 



/* interface ABI::Lumia::Imaging::Artistic::IGrayscaleNegativeFilter */
/* [uuid][object] */ 


EXTERN_C const IID IID___x_ABI_CLumia_CImaging_CArtistic_CIGrayscaleNegativeFilter;

#if defined(__cplusplus) && !defined(CINTERFACE)
    } /* end extern "C" */
    namespace ABI {
        namespace Lumia {
            namespace Imaging {
                namespace Artistic {
                    
                    MIDL_INTERFACE("6FD7D767-2A73-3CB5-A581-E193BE348C77")
                    IGrayscaleNegativeFilter : public IInspectable
                    {
                    public:
                    };

                    extern const __declspec(selectany) IID & IID_IGrayscaleNegativeFilter = __uuidof(IGrayscaleNegativeFilter);

                    
                }  /* end namespace */
            }  /* end namespace */
        }  /* end namespace */
    }  /* end namespace */
    extern "C" { 
    
#else 	/* C style interface */

    typedef struct __x_ABI_CLumia_CImaging_CArtistic_CIGrayscaleNegativeFilterVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            __RPC__in __x_ABI_CLumia_CImaging_CArtistic_CIGrayscaleNegativeFilter * This,
            /* [in] */ __RPC__in REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            __RPC__in __x_ABI_CLumia_CImaging_CArtistic_CIGrayscaleNegativeFilter * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            __RPC__in __x_ABI_CLumia_CImaging_CArtistic_CIGrayscaleNegativeFilter * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetIids )( 
            __RPC__in __x_ABI_CLumia_CImaging_CArtistic_CIGrayscaleNegativeFilter * This,
            /* [out] */ __RPC__out ULONG *iidCount,
            /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
        
        HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )( 
            __RPC__in __x_ABI_CLumia_CImaging_CArtistic_CIGrayscaleNegativeFilter * This,
            /* [out] */ __RPC__deref_out_opt HSTRING *className);
        
        HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )( 
            __RPC__in __x_ABI_CLumia_CImaging_CArtistic_CIGrayscaleNegativeFilter * This,
            /* [out] */ __RPC__out TrustLevel *trustLevel);
        
        END_INTERFACE
    } __x_ABI_CLumia_CImaging_CArtistic_CIGrayscaleNegativeFilterVtbl;

    interface __x_ABI_CLumia_CImaging_CArtistic_CIGrayscaleNegativeFilter
    {
        CONST_VTBL struct __x_ABI_CLumia_CImaging_CArtistic_CIGrayscaleNegativeFilterVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define __x_ABI_CLumia_CImaging_CArtistic_CIGrayscaleNegativeFilter_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __x_ABI_CLumia_CImaging_CArtistic_CIGrayscaleNegativeFilter_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __x_ABI_CLumia_CImaging_CArtistic_CIGrayscaleNegativeFilter_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __x_ABI_CLumia_CImaging_CArtistic_CIGrayscaleNegativeFilter_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 

#define __x_ABI_CLumia_CImaging_CArtistic_CIGrayscaleNegativeFilter_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 

#define __x_ABI_CLumia_CImaging_CArtistic_CIGrayscaleNegativeFilter_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 


#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* ____x_ABI_CLumia_CImaging_CArtistic_CIGrayscaleNegativeFilter_INTERFACE_DEFINED__ */


/* interface __MIDL_itf_Lumia2EImaging2EArtistic_0000_0027 */
/* [local] */ 

#if !defined(____x_ABI_CLumia_CImaging_CArtistic_CILomoFilter_INTERFACE_DEFINED__)
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Lumia_Imaging_Artistic_ILomoFilter[] = L"Lumia.Imaging.Artistic.ILomoFilter";
#endif /* !defined(____x_ABI_CLumia_CImaging_CArtistic_CILomoFilter_INTERFACE_DEFINED__) */


/* interface __MIDL_itf_Lumia2EImaging2EArtistic_0000_0027 */
/* [local] */ 



extern RPC_IF_HANDLE __MIDL_itf_Lumia2EImaging2EArtistic_0000_0027_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_Lumia2EImaging2EArtistic_0000_0027_v0_0_s_ifspec;

#ifndef ____x_ABI_CLumia_CImaging_CArtistic_CILomoFilter_INTERFACE_DEFINED__
#define ____x_ABI_CLumia_CImaging_CArtistic_CILomoFilter_INTERFACE_DEFINED__

/* interface __x_ABI_CLumia_CImaging_CArtistic_CILomoFilter */
/* [uuid][object] */ 



/* interface ABI::Lumia::Imaging::Artistic::ILomoFilter */
/* [uuid][object] */ 


EXTERN_C const IID IID___x_ABI_CLumia_CImaging_CArtistic_CILomoFilter;

#if defined(__cplusplus) && !defined(CINTERFACE)
    } /* end extern "C" */
    namespace ABI {
        namespace Lumia {
            namespace Imaging {
                namespace Artistic {
                    
                    MIDL_INTERFACE("3546F9DB-2FCD-352A-AB89-DCD19FBFC451")
                    ILomoFilter : public IInspectable
                    {
                    public:
                        virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_Brightness( 
                            /* [out][retval] */ __RPC__out DOUBLE *__returnValue) = 0;
                        
                        virtual /* [propput] */ HRESULT STDMETHODCALLTYPE put_Brightness( 
                            /* [in] */ DOUBLE value) = 0;
                        
                        virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_Saturation( 
                            /* [out][retval] */ __RPC__out DOUBLE *__returnValue) = 0;
                        
                        virtual /* [propput] */ HRESULT STDMETHODCALLTYPE put_Saturation( 
                            /* [in] */ DOUBLE value) = 0;
                        
                        virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_LomoVignetting( 
                            /* [out][retval] */ __RPC__out ABI::Lumia::Imaging::Artistic::LomoVignetting *__returnValue) = 0;
                        
                        virtual /* [propput] */ HRESULT STDMETHODCALLTYPE put_LomoVignetting( 
                            /* [in] */ ABI::Lumia::Imaging::Artistic::LomoVignetting value) = 0;
                        
                        virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_LomoStyle( 
                            /* [out][retval] */ __RPC__out ABI::Lumia::Imaging::Artistic::LomoStyle *__returnValue) = 0;
                        
                        virtual /* [propput] */ HRESULT STDMETHODCALLTYPE put_LomoStyle( 
                            /* [in] */ ABI::Lumia::Imaging::Artistic::LomoStyle value) = 0;
                        
                    };

                    extern const __declspec(selectany) IID & IID_ILomoFilter = __uuidof(ILomoFilter);

                    
                }  /* end namespace */
            }  /* end namespace */
        }  /* end namespace */
    }  /* end namespace */
    extern "C" { 
    
#else 	/* C style interface */

    typedef struct __x_ABI_CLumia_CImaging_CArtistic_CILomoFilterVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            __RPC__in __x_ABI_CLumia_CImaging_CArtistic_CILomoFilter * This,
            /* [in] */ __RPC__in REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            __RPC__in __x_ABI_CLumia_CImaging_CArtistic_CILomoFilter * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            __RPC__in __x_ABI_CLumia_CImaging_CArtistic_CILomoFilter * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetIids )( 
            __RPC__in __x_ABI_CLumia_CImaging_CArtistic_CILomoFilter * This,
            /* [out] */ __RPC__out ULONG *iidCount,
            /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
        
        HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )( 
            __RPC__in __x_ABI_CLumia_CImaging_CArtistic_CILomoFilter * This,
            /* [out] */ __RPC__deref_out_opt HSTRING *className);
        
        HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )( 
            __RPC__in __x_ABI_CLumia_CImaging_CArtistic_CILomoFilter * This,
            /* [out] */ __RPC__out TrustLevel *trustLevel);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_Brightness )( 
            __RPC__in __x_ABI_CLumia_CImaging_CArtistic_CILomoFilter * This,
            /* [out][retval] */ __RPC__out DOUBLE *__returnValue);
        
        /* [propput] */ HRESULT ( STDMETHODCALLTYPE *put_Brightness )( 
            __RPC__in __x_ABI_CLumia_CImaging_CArtistic_CILomoFilter * This,
            /* [in] */ DOUBLE value);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_Saturation )( 
            __RPC__in __x_ABI_CLumia_CImaging_CArtistic_CILomoFilter * This,
            /* [out][retval] */ __RPC__out DOUBLE *__returnValue);
        
        /* [propput] */ HRESULT ( STDMETHODCALLTYPE *put_Saturation )( 
            __RPC__in __x_ABI_CLumia_CImaging_CArtistic_CILomoFilter * This,
            /* [in] */ DOUBLE value);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_LomoVignetting )( 
            __RPC__in __x_ABI_CLumia_CImaging_CArtistic_CILomoFilter * This,
            /* [out][retval] */ __RPC__out __x_ABI_CLumia_CImaging_CArtistic_CLomoVignetting *__returnValue);
        
        /* [propput] */ HRESULT ( STDMETHODCALLTYPE *put_LomoVignetting )( 
            __RPC__in __x_ABI_CLumia_CImaging_CArtistic_CILomoFilter * This,
            /* [in] */ __x_ABI_CLumia_CImaging_CArtistic_CLomoVignetting value);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_LomoStyle )( 
            __RPC__in __x_ABI_CLumia_CImaging_CArtistic_CILomoFilter * This,
            /* [out][retval] */ __RPC__out __x_ABI_CLumia_CImaging_CArtistic_CLomoStyle *__returnValue);
        
        /* [propput] */ HRESULT ( STDMETHODCALLTYPE *put_LomoStyle )( 
            __RPC__in __x_ABI_CLumia_CImaging_CArtistic_CILomoFilter * This,
            /* [in] */ __x_ABI_CLumia_CImaging_CArtistic_CLomoStyle value);
        
        END_INTERFACE
    } __x_ABI_CLumia_CImaging_CArtistic_CILomoFilterVtbl;

    interface __x_ABI_CLumia_CImaging_CArtistic_CILomoFilter
    {
        CONST_VTBL struct __x_ABI_CLumia_CImaging_CArtistic_CILomoFilterVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define __x_ABI_CLumia_CImaging_CArtistic_CILomoFilter_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __x_ABI_CLumia_CImaging_CArtistic_CILomoFilter_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __x_ABI_CLumia_CImaging_CArtistic_CILomoFilter_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __x_ABI_CLumia_CImaging_CArtistic_CILomoFilter_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 

#define __x_ABI_CLumia_CImaging_CArtistic_CILomoFilter_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 

#define __x_ABI_CLumia_CImaging_CArtistic_CILomoFilter_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 


#define __x_ABI_CLumia_CImaging_CArtistic_CILomoFilter_get_Brightness(This,__returnValue)	\
    ( (This)->lpVtbl -> get_Brightness(This,__returnValue) ) 

#define __x_ABI_CLumia_CImaging_CArtistic_CILomoFilter_put_Brightness(This,value)	\
    ( (This)->lpVtbl -> put_Brightness(This,value) ) 

#define __x_ABI_CLumia_CImaging_CArtistic_CILomoFilter_get_Saturation(This,__returnValue)	\
    ( (This)->lpVtbl -> get_Saturation(This,__returnValue) ) 

#define __x_ABI_CLumia_CImaging_CArtistic_CILomoFilter_put_Saturation(This,value)	\
    ( (This)->lpVtbl -> put_Saturation(This,value) ) 

#define __x_ABI_CLumia_CImaging_CArtistic_CILomoFilter_get_LomoVignetting(This,__returnValue)	\
    ( (This)->lpVtbl -> get_LomoVignetting(This,__returnValue) ) 

#define __x_ABI_CLumia_CImaging_CArtistic_CILomoFilter_put_LomoVignetting(This,value)	\
    ( (This)->lpVtbl -> put_LomoVignetting(This,value) ) 

#define __x_ABI_CLumia_CImaging_CArtistic_CILomoFilter_get_LomoStyle(This,__returnValue)	\
    ( (This)->lpVtbl -> get_LomoStyle(This,__returnValue) ) 

#define __x_ABI_CLumia_CImaging_CArtistic_CILomoFilter_put_LomoStyle(This,value)	\
    ( (This)->lpVtbl -> put_LomoStyle(This,value) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* ____x_ABI_CLumia_CImaging_CArtistic_CILomoFilter_INTERFACE_DEFINED__ */


/* interface __MIDL_itf_Lumia2EImaging2EArtistic_0000_0028 */
/* [local] */ 

#if !defined(____x_ABI_CLumia_CImaging_CArtistic_CILomoFilterFactory_INTERFACE_DEFINED__)
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Lumia_Imaging_Artistic_ILomoFilterFactory[] = L"Lumia.Imaging.Artistic.ILomoFilterFactory";
#endif /* !defined(____x_ABI_CLumia_CImaging_CArtistic_CILomoFilterFactory_INTERFACE_DEFINED__) */


/* interface __MIDL_itf_Lumia2EImaging2EArtistic_0000_0028 */
/* [local] */ 



extern RPC_IF_HANDLE __MIDL_itf_Lumia2EImaging2EArtistic_0000_0028_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_Lumia2EImaging2EArtistic_0000_0028_v0_0_s_ifspec;

#ifndef ____x_ABI_CLumia_CImaging_CArtistic_CILomoFilterFactory_INTERFACE_DEFINED__
#define ____x_ABI_CLumia_CImaging_CArtistic_CILomoFilterFactory_INTERFACE_DEFINED__

/* interface __x_ABI_CLumia_CImaging_CArtistic_CILomoFilterFactory */
/* [uuid][object] */ 



/* interface ABI::Lumia::Imaging::Artistic::ILomoFilterFactory */
/* [uuid][object] */ 


EXTERN_C const IID IID___x_ABI_CLumia_CImaging_CArtistic_CILomoFilterFactory;

#if defined(__cplusplus) && !defined(CINTERFACE)
    } /* end extern "C" */
    namespace ABI {
        namespace Lumia {
            namespace Imaging {
                namespace Artistic {
                    
                    MIDL_INTERFACE("6418B86E-A066-368B-A392-C10455487C0C")
                    ILomoFilterFactory : public IInspectable
                    {
                    public:
                        virtual HRESULT STDMETHODCALLTYPE CreateWithSettings( 
                            /* [in] */ DOUBLE brightness,
                            /* [in] */ DOUBLE saturation,
                            /* [in] */ ABI::Lumia::Imaging::Artistic::LomoVignetting vignetting,
                            /* [in] */ ABI::Lumia::Imaging::Artistic::LomoStyle style,
                            /* [out][retval] */ __RPC__deref_out_opt ABI::Lumia::Imaging::Artistic::ILomoFilter **__returnValue) = 0;
                        
                    };

                    extern const __declspec(selectany) IID & IID_ILomoFilterFactory = __uuidof(ILomoFilterFactory);

                    
                }  /* end namespace */
            }  /* end namespace */
        }  /* end namespace */
    }  /* end namespace */
    extern "C" { 
    
#else 	/* C style interface */

    typedef struct __x_ABI_CLumia_CImaging_CArtistic_CILomoFilterFactoryVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            __RPC__in __x_ABI_CLumia_CImaging_CArtistic_CILomoFilterFactory * This,
            /* [in] */ __RPC__in REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            __RPC__in __x_ABI_CLumia_CImaging_CArtistic_CILomoFilterFactory * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            __RPC__in __x_ABI_CLumia_CImaging_CArtistic_CILomoFilterFactory * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetIids )( 
            __RPC__in __x_ABI_CLumia_CImaging_CArtistic_CILomoFilterFactory * This,
            /* [out] */ __RPC__out ULONG *iidCount,
            /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
        
        HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )( 
            __RPC__in __x_ABI_CLumia_CImaging_CArtistic_CILomoFilterFactory * This,
            /* [out] */ __RPC__deref_out_opt HSTRING *className);
        
        HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )( 
            __RPC__in __x_ABI_CLumia_CImaging_CArtistic_CILomoFilterFactory * This,
            /* [out] */ __RPC__out TrustLevel *trustLevel);
        
        HRESULT ( STDMETHODCALLTYPE *CreateWithSettings )( 
            __RPC__in __x_ABI_CLumia_CImaging_CArtistic_CILomoFilterFactory * This,
            /* [in] */ DOUBLE brightness,
            /* [in] */ DOUBLE saturation,
            /* [in] */ __x_ABI_CLumia_CImaging_CArtistic_CLomoVignetting vignetting,
            /* [in] */ __x_ABI_CLumia_CImaging_CArtistic_CLomoStyle style,
            /* [out][retval] */ __RPC__deref_out_opt __x_ABI_CLumia_CImaging_CArtistic_CILomoFilter **__returnValue);
        
        END_INTERFACE
    } __x_ABI_CLumia_CImaging_CArtistic_CILomoFilterFactoryVtbl;

    interface __x_ABI_CLumia_CImaging_CArtistic_CILomoFilterFactory
    {
        CONST_VTBL struct __x_ABI_CLumia_CImaging_CArtistic_CILomoFilterFactoryVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define __x_ABI_CLumia_CImaging_CArtistic_CILomoFilterFactory_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __x_ABI_CLumia_CImaging_CArtistic_CILomoFilterFactory_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __x_ABI_CLumia_CImaging_CArtistic_CILomoFilterFactory_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __x_ABI_CLumia_CImaging_CArtistic_CILomoFilterFactory_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 

#define __x_ABI_CLumia_CImaging_CArtistic_CILomoFilterFactory_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 

#define __x_ABI_CLumia_CImaging_CArtistic_CILomoFilterFactory_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 


#define __x_ABI_CLumia_CImaging_CArtistic_CILomoFilterFactory_CreateWithSettings(This,brightness,saturation,vignetting,style,__returnValue)	\
    ( (This)->lpVtbl -> CreateWithSettings(This,brightness,saturation,vignetting,style,__returnValue) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* ____x_ABI_CLumia_CImaging_CArtistic_CILomoFilterFactory_INTERFACE_DEFINED__ */


/* interface __MIDL_itf_Lumia2EImaging2EArtistic_0000_0029 */
/* [local] */ 

#if !defined(____x_ABI_CLumia_CImaging_CArtistic_CIMagicPenFilter_INTERFACE_DEFINED__)
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Lumia_Imaging_Artistic_IMagicPenFilter[] = L"Lumia.Imaging.Artistic.IMagicPenFilter";
#endif /* !defined(____x_ABI_CLumia_CImaging_CArtistic_CIMagicPenFilter_INTERFACE_DEFINED__) */


/* interface __MIDL_itf_Lumia2EImaging2EArtistic_0000_0029 */
/* [local] */ 



extern RPC_IF_HANDLE __MIDL_itf_Lumia2EImaging2EArtistic_0000_0029_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_Lumia2EImaging2EArtistic_0000_0029_v0_0_s_ifspec;

#ifndef ____x_ABI_CLumia_CImaging_CArtistic_CIMagicPenFilter_INTERFACE_DEFINED__
#define ____x_ABI_CLumia_CImaging_CArtistic_CIMagicPenFilter_INTERFACE_DEFINED__

/* interface __x_ABI_CLumia_CImaging_CArtistic_CIMagicPenFilter */
/* [uuid][object] */ 



/* interface ABI::Lumia::Imaging::Artistic::IMagicPenFilter */
/* [uuid][object] */ 


EXTERN_C const IID IID___x_ABI_CLumia_CImaging_CArtistic_CIMagicPenFilter;

#if defined(__cplusplus) && !defined(CINTERFACE)
    } /* end extern "C" */
    namespace ABI {
        namespace Lumia {
            namespace Imaging {
                namespace Artistic {
                    
                    MIDL_INTERFACE("D398D363-80F0-3F01-B081-5D5F4A6AC33F")
                    IMagicPenFilter : public IInspectable
                    {
                    public:
                    };

                    extern const __declspec(selectany) IID & IID_IMagicPenFilter = __uuidof(IMagicPenFilter);

                    
                }  /* end namespace */
            }  /* end namespace */
        }  /* end namespace */
    }  /* end namespace */
    extern "C" { 
    
#else 	/* C style interface */

    typedef struct __x_ABI_CLumia_CImaging_CArtistic_CIMagicPenFilterVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            __RPC__in __x_ABI_CLumia_CImaging_CArtistic_CIMagicPenFilter * This,
            /* [in] */ __RPC__in REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            __RPC__in __x_ABI_CLumia_CImaging_CArtistic_CIMagicPenFilter * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            __RPC__in __x_ABI_CLumia_CImaging_CArtistic_CIMagicPenFilter * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetIids )( 
            __RPC__in __x_ABI_CLumia_CImaging_CArtistic_CIMagicPenFilter * This,
            /* [out] */ __RPC__out ULONG *iidCount,
            /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
        
        HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )( 
            __RPC__in __x_ABI_CLumia_CImaging_CArtistic_CIMagicPenFilter * This,
            /* [out] */ __RPC__deref_out_opt HSTRING *className);
        
        HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )( 
            __RPC__in __x_ABI_CLumia_CImaging_CArtistic_CIMagicPenFilter * This,
            /* [out] */ __RPC__out TrustLevel *trustLevel);
        
        END_INTERFACE
    } __x_ABI_CLumia_CImaging_CArtistic_CIMagicPenFilterVtbl;

    interface __x_ABI_CLumia_CImaging_CArtistic_CIMagicPenFilter
    {
        CONST_VTBL struct __x_ABI_CLumia_CImaging_CArtistic_CIMagicPenFilterVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define __x_ABI_CLumia_CImaging_CArtistic_CIMagicPenFilter_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __x_ABI_CLumia_CImaging_CArtistic_CIMagicPenFilter_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __x_ABI_CLumia_CImaging_CArtistic_CIMagicPenFilter_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __x_ABI_CLumia_CImaging_CArtistic_CIMagicPenFilter_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 

#define __x_ABI_CLumia_CImaging_CArtistic_CIMagicPenFilter_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 

#define __x_ABI_CLumia_CImaging_CArtistic_CIMagicPenFilter_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 


#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* ____x_ABI_CLumia_CImaging_CArtistic_CIMagicPenFilter_INTERFACE_DEFINED__ */


/* interface __MIDL_itf_Lumia2EImaging2EArtistic_0000_0030 */
/* [local] */ 

#if !defined(____x_ABI_CLumia_CImaging_CArtistic_CIMilkyFilter_INTERFACE_DEFINED__)
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Lumia_Imaging_Artistic_IMilkyFilter[] = L"Lumia.Imaging.Artistic.IMilkyFilter";
#endif /* !defined(____x_ABI_CLumia_CImaging_CArtistic_CIMilkyFilter_INTERFACE_DEFINED__) */


/* interface __MIDL_itf_Lumia2EImaging2EArtistic_0000_0030 */
/* [local] */ 



extern RPC_IF_HANDLE __MIDL_itf_Lumia2EImaging2EArtistic_0000_0030_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_Lumia2EImaging2EArtistic_0000_0030_v0_0_s_ifspec;

#ifndef ____x_ABI_CLumia_CImaging_CArtistic_CIMilkyFilter_INTERFACE_DEFINED__
#define ____x_ABI_CLumia_CImaging_CArtistic_CIMilkyFilter_INTERFACE_DEFINED__

/* interface __x_ABI_CLumia_CImaging_CArtistic_CIMilkyFilter */
/* [uuid][object] */ 



/* interface ABI::Lumia::Imaging::Artistic::IMilkyFilter */
/* [uuid][object] */ 


EXTERN_C const IID IID___x_ABI_CLumia_CImaging_CArtistic_CIMilkyFilter;

#if defined(__cplusplus) && !defined(CINTERFACE)
    } /* end extern "C" */
    namespace ABI {
        namespace Lumia {
            namespace Imaging {
                namespace Artistic {
                    
                    MIDL_INTERFACE("F86F6534-02E3-3DAE-9D84-0A4A6FEC41B9")
                    IMilkyFilter : public IInspectable
                    {
                    public:
                    };

                    extern const __declspec(selectany) IID & IID_IMilkyFilter = __uuidof(IMilkyFilter);

                    
                }  /* end namespace */
            }  /* end namespace */
        }  /* end namespace */
    }  /* end namespace */
    extern "C" { 
    
#else 	/* C style interface */

    typedef struct __x_ABI_CLumia_CImaging_CArtistic_CIMilkyFilterVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            __RPC__in __x_ABI_CLumia_CImaging_CArtistic_CIMilkyFilter * This,
            /* [in] */ __RPC__in REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            __RPC__in __x_ABI_CLumia_CImaging_CArtistic_CIMilkyFilter * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            __RPC__in __x_ABI_CLumia_CImaging_CArtistic_CIMilkyFilter * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetIids )( 
            __RPC__in __x_ABI_CLumia_CImaging_CArtistic_CIMilkyFilter * This,
            /* [out] */ __RPC__out ULONG *iidCount,
            /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
        
        HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )( 
            __RPC__in __x_ABI_CLumia_CImaging_CArtistic_CIMilkyFilter * This,
            /* [out] */ __RPC__deref_out_opt HSTRING *className);
        
        HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )( 
            __RPC__in __x_ABI_CLumia_CImaging_CArtistic_CIMilkyFilter * This,
            /* [out] */ __RPC__out TrustLevel *trustLevel);
        
        END_INTERFACE
    } __x_ABI_CLumia_CImaging_CArtistic_CIMilkyFilterVtbl;

    interface __x_ABI_CLumia_CImaging_CArtistic_CIMilkyFilter
    {
        CONST_VTBL struct __x_ABI_CLumia_CImaging_CArtistic_CIMilkyFilterVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define __x_ABI_CLumia_CImaging_CArtistic_CIMilkyFilter_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __x_ABI_CLumia_CImaging_CArtistic_CIMilkyFilter_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __x_ABI_CLumia_CImaging_CArtistic_CIMilkyFilter_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __x_ABI_CLumia_CImaging_CArtistic_CIMilkyFilter_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 

#define __x_ABI_CLumia_CImaging_CArtistic_CIMilkyFilter_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 

#define __x_ABI_CLumia_CImaging_CArtistic_CIMilkyFilter_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 


#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* ____x_ABI_CLumia_CImaging_CArtistic_CIMilkyFilter_INTERFACE_DEFINED__ */


/* interface __MIDL_itf_Lumia2EImaging2EArtistic_0000_0031 */
/* [local] */ 

#if !defined(____x_ABI_CLumia_CImaging_CArtistic_CIMirrorFilter_INTERFACE_DEFINED__)
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Lumia_Imaging_Artistic_IMirrorFilter[] = L"Lumia.Imaging.Artistic.IMirrorFilter";
#endif /* !defined(____x_ABI_CLumia_CImaging_CArtistic_CIMirrorFilter_INTERFACE_DEFINED__) */


/* interface __MIDL_itf_Lumia2EImaging2EArtistic_0000_0031 */
/* [local] */ 



extern RPC_IF_HANDLE __MIDL_itf_Lumia2EImaging2EArtistic_0000_0031_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_Lumia2EImaging2EArtistic_0000_0031_v0_0_s_ifspec;

#ifndef ____x_ABI_CLumia_CImaging_CArtistic_CIMirrorFilter_INTERFACE_DEFINED__
#define ____x_ABI_CLumia_CImaging_CArtistic_CIMirrorFilter_INTERFACE_DEFINED__

/* interface __x_ABI_CLumia_CImaging_CArtistic_CIMirrorFilter */
/* [uuid][object] */ 



/* interface ABI::Lumia::Imaging::Artistic::IMirrorFilter */
/* [uuid][object] */ 


EXTERN_C const IID IID___x_ABI_CLumia_CImaging_CArtistic_CIMirrorFilter;

#if defined(__cplusplus) && !defined(CINTERFACE)
    } /* end extern "C" */
    namespace ABI {
        namespace Lumia {
            namespace Imaging {
                namespace Artistic {
                    
                    MIDL_INTERFACE("695E4137-0C32-3D3B-893B-4E454A74C7A9")
                    IMirrorFilter : public IInspectable
                    {
                    public:
                    };

                    extern const __declspec(selectany) IID & IID_IMirrorFilter = __uuidof(IMirrorFilter);

                    
                }  /* end namespace */
            }  /* end namespace */
        }  /* end namespace */
    }  /* end namespace */
    extern "C" { 
    
#else 	/* C style interface */

    typedef struct __x_ABI_CLumia_CImaging_CArtistic_CIMirrorFilterVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            __RPC__in __x_ABI_CLumia_CImaging_CArtistic_CIMirrorFilter * This,
            /* [in] */ __RPC__in REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            __RPC__in __x_ABI_CLumia_CImaging_CArtistic_CIMirrorFilter * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            __RPC__in __x_ABI_CLumia_CImaging_CArtistic_CIMirrorFilter * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetIids )( 
            __RPC__in __x_ABI_CLumia_CImaging_CArtistic_CIMirrorFilter * This,
            /* [out] */ __RPC__out ULONG *iidCount,
            /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
        
        HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )( 
            __RPC__in __x_ABI_CLumia_CImaging_CArtistic_CIMirrorFilter * This,
            /* [out] */ __RPC__deref_out_opt HSTRING *className);
        
        HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )( 
            __RPC__in __x_ABI_CLumia_CImaging_CArtistic_CIMirrorFilter * This,
            /* [out] */ __RPC__out TrustLevel *trustLevel);
        
        END_INTERFACE
    } __x_ABI_CLumia_CImaging_CArtistic_CIMirrorFilterVtbl;

    interface __x_ABI_CLumia_CImaging_CArtistic_CIMirrorFilter
    {
        CONST_VTBL struct __x_ABI_CLumia_CImaging_CArtistic_CIMirrorFilterVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define __x_ABI_CLumia_CImaging_CArtistic_CIMirrorFilter_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __x_ABI_CLumia_CImaging_CArtistic_CIMirrorFilter_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __x_ABI_CLumia_CImaging_CArtistic_CIMirrorFilter_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __x_ABI_CLumia_CImaging_CArtistic_CIMirrorFilter_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 

#define __x_ABI_CLumia_CImaging_CArtistic_CIMirrorFilter_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 

#define __x_ABI_CLumia_CImaging_CArtistic_CIMirrorFilter_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 


#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* ____x_ABI_CLumia_CImaging_CArtistic_CIMirrorFilter_INTERFACE_DEFINED__ */


/* interface __MIDL_itf_Lumia2EImaging2EArtistic_0000_0032 */
/* [local] */ 

#if !defined(____x_ABI_CLumia_CImaging_CArtistic_CIMonoColorFilter_INTERFACE_DEFINED__)
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Lumia_Imaging_Artistic_IMonoColorFilter[] = L"Lumia.Imaging.Artistic.IMonoColorFilter";
#endif /* !defined(____x_ABI_CLumia_CImaging_CArtistic_CIMonoColorFilter_INTERFACE_DEFINED__) */


/* interface __MIDL_itf_Lumia2EImaging2EArtistic_0000_0032 */
/* [local] */ 



extern RPC_IF_HANDLE __MIDL_itf_Lumia2EImaging2EArtistic_0000_0032_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_Lumia2EImaging2EArtistic_0000_0032_v0_0_s_ifspec;

#ifndef ____x_ABI_CLumia_CImaging_CArtistic_CIMonoColorFilter_INTERFACE_DEFINED__
#define ____x_ABI_CLumia_CImaging_CArtistic_CIMonoColorFilter_INTERFACE_DEFINED__

/* interface __x_ABI_CLumia_CImaging_CArtistic_CIMonoColorFilter */
/* [uuid][object] */ 



/* interface ABI::Lumia::Imaging::Artistic::IMonoColorFilter */
/* [uuid][object] */ 


EXTERN_C const IID IID___x_ABI_CLumia_CImaging_CArtistic_CIMonoColorFilter;

#if defined(__cplusplus) && !defined(CINTERFACE)
    } /* end extern "C" */
    namespace ABI {
        namespace Lumia {
            namespace Imaging {
                namespace Artistic {
                    
                    MIDL_INTERFACE("643B6902-CF4D-3DEB-B654-1A36752A102C")
                    IMonoColorFilter : public IInspectable
                    {
                    public:
                        virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_PreserveColor( 
                            /* [out][retval] */ __RPC__out ABI::Windows::UI::Color *__returnValue) = 0;
                        
                        virtual /* [propput] */ HRESULT STDMETHODCALLTYPE put_PreserveColor( 
                            /* [in] */ ABI::Windows::UI::Color value) = 0;
                        
                        virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_ColorDistance( 
                            /* [out][retval] */ __RPC__out DOUBLE *__returnValue) = 0;
                        
                        virtual /* [propput] */ HRESULT STDMETHODCALLTYPE put_ColorDistance( 
                            /* [in] */ DOUBLE value) = 0;
                        
                    };

                    extern const __declspec(selectany) IID & IID_IMonoColorFilter = __uuidof(IMonoColorFilter);

                    
                }  /* end namespace */
            }  /* end namespace */
        }  /* end namespace */
    }  /* end namespace */
    extern "C" { 
    
#else 	/* C style interface */

    typedef struct __x_ABI_CLumia_CImaging_CArtistic_CIMonoColorFilterVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            __RPC__in __x_ABI_CLumia_CImaging_CArtistic_CIMonoColorFilter * This,
            /* [in] */ __RPC__in REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            __RPC__in __x_ABI_CLumia_CImaging_CArtistic_CIMonoColorFilter * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            __RPC__in __x_ABI_CLumia_CImaging_CArtistic_CIMonoColorFilter * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetIids )( 
            __RPC__in __x_ABI_CLumia_CImaging_CArtistic_CIMonoColorFilter * This,
            /* [out] */ __RPC__out ULONG *iidCount,
            /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
        
        HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )( 
            __RPC__in __x_ABI_CLumia_CImaging_CArtistic_CIMonoColorFilter * This,
            /* [out] */ __RPC__deref_out_opt HSTRING *className);
        
        HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )( 
            __RPC__in __x_ABI_CLumia_CImaging_CArtistic_CIMonoColorFilter * This,
            /* [out] */ __RPC__out TrustLevel *trustLevel);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_PreserveColor )( 
            __RPC__in __x_ABI_CLumia_CImaging_CArtistic_CIMonoColorFilter * This,
            /* [out][retval] */ __RPC__out __x_ABI_CWindows_CUI_CColor *__returnValue);
        
        /* [propput] */ HRESULT ( STDMETHODCALLTYPE *put_PreserveColor )( 
            __RPC__in __x_ABI_CLumia_CImaging_CArtistic_CIMonoColorFilter * This,
            /* [in] */ __x_ABI_CWindows_CUI_CColor value);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_ColorDistance )( 
            __RPC__in __x_ABI_CLumia_CImaging_CArtistic_CIMonoColorFilter * This,
            /* [out][retval] */ __RPC__out DOUBLE *__returnValue);
        
        /* [propput] */ HRESULT ( STDMETHODCALLTYPE *put_ColorDistance )( 
            __RPC__in __x_ABI_CLumia_CImaging_CArtistic_CIMonoColorFilter * This,
            /* [in] */ DOUBLE value);
        
        END_INTERFACE
    } __x_ABI_CLumia_CImaging_CArtistic_CIMonoColorFilterVtbl;

    interface __x_ABI_CLumia_CImaging_CArtistic_CIMonoColorFilter
    {
        CONST_VTBL struct __x_ABI_CLumia_CImaging_CArtistic_CIMonoColorFilterVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define __x_ABI_CLumia_CImaging_CArtistic_CIMonoColorFilter_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __x_ABI_CLumia_CImaging_CArtistic_CIMonoColorFilter_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __x_ABI_CLumia_CImaging_CArtistic_CIMonoColorFilter_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __x_ABI_CLumia_CImaging_CArtistic_CIMonoColorFilter_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 

#define __x_ABI_CLumia_CImaging_CArtistic_CIMonoColorFilter_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 

#define __x_ABI_CLumia_CImaging_CArtistic_CIMonoColorFilter_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 


#define __x_ABI_CLumia_CImaging_CArtistic_CIMonoColorFilter_get_PreserveColor(This,__returnValue)	\
    ( (This)->lpVtbl -> get_PreserveColor(This,__returnValue) ) 

#define __x_ABI_CLumia_CImaging_CArtistic_CIMonoColorFilter_put_PreserveColor(This,value)	\
    ( (This)->lpVtbl -> put_PreserveColor(This,value) ) 

#define __x_ABI_CLumia_CImaging_CArtistic_CIMonoColorFilter_get_ColorDistance(This,__returnValue)	\
    ( (This)->lpVtbl -> get_ColorDistance(This,__returnValue) ) 

#define __x_ABI_CLumia_CImaging_CArtistic_CIMonoColorFilter_put_ColorDistance(This,value)	\
    ( (This)->lpVtbl -> put_ColorDistance(This,value) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* ____x_ABI_CLumia_CImaging_CArtistic_CIMonoColorFilter_INTERFACE_DEFINED__ */


/* interface __MIDL_itf_Lumia2EImaging2EArtistic_0000_0033 */
/* [local] */ 

#if !defined(____x_ABI_CLumia_CImaging_CArtistic_CIMonoColorFilterFactory_INTERFACE_DEFINED__)
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Lumia_Imaging_Artistic_IMonoColorFilterFactory[] = L"Lumia.Imaging.Artistic.IMonoColorFilterFactory";
#endif /* !defined(____x_ABI_CLumia_CImaging_CArtistic_CIMonoColorFilterFactory_INTERFACE_DEFINED__) */


/* interface __MIDL_itf_Lumia2EImaging2EArtistic_0000_0033 */
/* [local] */ 



extern RPC_IF_HANDLE __MIDL_itf_Lumia2EImaging2EArtistic_0000_0033_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_Lumia2EImaging2EArtistic_0000_0033_v0_0_s_ifspec;

#ifndef ____x_ABI_CLumia_CImaging_CArtistic_CIMonoColorFilterFactory_INTERFACE_DEFINED__
#define ____x_ABI_CLumia_CImaging_CArtistic_CIMonoColorFilterFactory_INTERFACE_DEFINED__

/* interface __x_ABI_CLumia_CImaging_CArtistic_CIMonoColorFilterFactory */
/* [uuid][object] */ 



/* interface ABI::Lumia::Imaging::Artistic::IMonoColorFilterFactory */
/* [uuid][object] */ 


EXTERN_C const IID IID___x_ABI_CLumia_CImaging_CArtistic_CIMonoColorFilterFactory;

#if defined(__cplusplus) && !defined(CINTERFACE)
    } /* end extern "C" */
    namespace ABI {
        namespace Lumia {
            namespace Imaging {
                namespace Artistic {
                    
                    MIDL_INTERFACE("4D1513E9-51DA-3E55-9A43-F3EA314C3780")
                    IMonoColorFilterFactory : public IInspectable
                    {
                    public:
                        virtual HRESULT STDMETHODCALLTYPE CreateWithColor( 
                            /* [in] */ ABI::Windows::UI::Color preserveColor,
                            /* [in] */ DOUBLE colorDistance,
                            /* [out][retval] */ __RPC__deref_out_opt ABI::Lumia::Imaging::Artistic::IMonoColorFilter **__returnValue) = 0;
                        
                    };

                    extern const __declspec(selectany) IID & IID_IMonoColorFilterFactory = __uuidof(IMonoColorFilterFactory);

                    
                }  /* end namespace */
            }  /* end namespace */
        }  /* end namespace */
    }  /* end namespace */
    extern "C" { 
    
#else 	/* C style interface */

    typedef struct __x_ABI_CLumia_CImaging_CArtistic_CIMonoColorFilterFactoryVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            __RPC__in __x_ABI_CLumia_CImaging_CArtistic_CIMonoColorFilterFactory * This,
            /* [in] */ __RPC__in REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            __RPC__in __x_ABI_CLumia_CImaging_CArtistic_CIMonoColorFilterFactory * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            __RPC__in __x_ABI_CLumia_CImaging_CArtistic_CIMonoColorFilterFactory * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetIids )( 
            __RPC__in __x_ABI_CLumia_CImaging_CArtistic_CIMonoColorFilterFactory * This,
            /* [out] */ __RPC__out ULONG *iidCount,
            /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
        
        HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )( 
            __RPC__in __x_ABI_CLumia_CImaging_CArtistic_CIMonoColorFilterFactory * This,
            /* [out] */ __RPC__deref_out_opt HSTRING *className);
        
        HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )( 
            __RPC__in __x_ABI_CLumia_CImaging_CArtistic_CIMonoColorFilterFactory * This,
            /* [out] */ __RPC__out TrustLevel *trustLevel);
        
        HRESULT ( STDMETHODCALLTYPE *CreateWithColor )( 
            __RPC__in __x_ABI_CLumia_CImaging_CArtistic_CIMonoColorFilterFactory * This,
            /* [in] */ __x_ABI_CWindows_CUI_CColor preserveColor,
            /* [in] */ DOUBLE colorDistance,
            /* [out][retval] */ __RPC__deref_out_opt __x_ABI_CLumia_CImaging_CArtistic_CIMonoColorFilter **__returnValue);
        
        END_INTERFACE
    } __x_ABI_CLumia_CImaging_CArtistic_CIMonoColorFilterFactoryVtbl;

    interface __x_ABI_CLumia_CImaging_CArtistic_CIMonoColorFilterFactory
    {
        CONST_VTBL struct __x_ABI_CLumia_CImaging_CArtistic_CIMonoColorFilterFactoryVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define __x_ABI_CLumia_CImaging_CArtistic_CIMonoColorFilterFactory_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __x_ABI_CLumia_CImaging_CArtistic_CIMonoColorFilterFactory_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __x_ABI_CLumia_CImaging_CArtistic_CIMonoColorFilterFactory_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __x_ABI_CLumia_CImaging_CArtistic_CIMonoColorFilterFactory_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 

#define __x_ABI_CLumia_CImaging_CArtistic_CIMonoColorFilterFactory_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 

#define __x_ABI_CLumia_CImaging_CArtistic_CIMonoColorFilterFactory_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 


#define __x_ABI_CLumia_CImaging_CArtistic_CIMonoColorFilterFactory_CreateWithColor(This,preserveColor,colorDistance,__returnValue)	\
    ( (This)->lpVtbl -> CreateWithColor(This,preserveColor,colorDistance,__returnValue) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* ____x_ABI_CLumia_CImaging_CArtistic_CIMonoColorFilterFactory_INTERFACE_DEFINED__ */


/* interface __MIDL_itf_Lumia2EImaging2EArtistic_0000_0034 */
/* [local] */ 

#if !defined(____x_ABI_CLumia_CImaging_CArtistic_CIMoonlightFilter_INTERFACE_DEFINED__)
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Lumia_Imaging_Artistic_IMoonlightFilter[] = L"Lumia.Imaging.Artistic.IMoonlightFilter";
#endif /* !defined(____x_ABI_CLumia_CImaging_CArtistic_CIMoonlightFilter_INTERFACE_DEFINED__) */


/* interface __MIDL_itf_Lumia2EImaging2EArtistic_0000_0034 */
/* [local] */ 



extern RPC_IF_HANDLE __MIDL_itf_Lumia2EImaging2EArtistic_0000_0034_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_Lumia2EImaging2EArtistic_0000_0034_v0_0_s_ifspec;

#ifndef ____x_ABI_CLumia_CImaging_CArtistic_CIMoonlightFilter_INTERFACE_DEFINED__
#define ____x_ABI_CLumia_CImaging_CArtistic_CIMoonlightFilter_INTERFACE_DEFINED__

/* interface __x_ABI_CLumia_CImaging_CArtistic_CIMoonlightFilter */
/* [uuid][object] */ 



/* interface ABI::Lumia::Imaging::Artistic::IMoonlightFilter */
/* [uuid][object] */ 


EXTERN_C const IID IID___x_ABI_CLumia_CImaging_CArtistic_CIMoonlightFilter;

#if defined(__cplusplus) && !defined(CINTERFACE)
    } /* end extern "C" */
    namespace ABI {
        namespace Lumia {
            namespace Imaging {
                namespace Artistic {
                    
                    MIDL_INTERFACE("E344521A-A24C-3C9F-B0FD-E158F18BD7A7")
                    IMoonlightFilter : public IInspectable
                    {
                    public:
                        virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_Clock( 
                            /* [out][retval] */ __RPC__out INT32 *__returnValue) = 0;
                        
                        virtual /* [propput] */ HRESULT STDMETHODCALLTYPE put_Clock( 
                            /* [in] */ INT32 value) = 0;
                        
                    };

                    extern const __declspec(selectany) IID & IID_IMoonlightFilter = __uuidof(IMoonlightFilter);

                    
                }  /* end namespace */
            }  /* end namespace */
        }  /* end namespace */
    }  /* end namespace */
    extern "C" { 
    
#else 	/* C style interface */

    typedef struct __x_ABI_CLumia_CImaging_CArtistic_CIMoonlightFilterVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            __RPC__in __x_ABI_CLumia_CImaging_CArtistic_CIMoonlightFilter * This,
            /* [in] */ __RPC__in REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            __RPC__in __x_ABI_CLumia_CImaging_CArtistic_CIMoonlightFilter * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            __RPC__in __x_ABI_CLumia_CImaging_CArtistic_CIMoonlightFilter * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetIids )( 
            __RPC__in __x_ABI_CLumia_CImaging_CArtistic_CIMoonlightFilter * This,
            /* [out] */ __RPC__out ULONG *iidCount,
            /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
        
        HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )( 
            __RPC__in __x_ABI_CLumia_CImaging_CArtistic_CIMoonlightFilter * This,
            /* [out] */ __RPC__deref_out_opt HSTRING *className);
        
        HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )( 
            __RPC__in __x_ABI_CLumia_CImaging_CArtistic_CIMoonlightFilter * This,
            /* [out] */ __RPC__out TrustLevel *trustLevel);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_Clock )( 
            __RPC__in __x_ABI_CLumia_CImaging_CArtistic_CIMoonlightFilter * This,
            /* [out][retval] */ __RPC__out INT32 *__returnValue);
        
        /* [propput] */ HRESULT ( STDMETHODCALLTYPE *put_Clock )( 
            __RPC__in __x_ABI_CLumia_CImaging_CArtistic_CIMoonlightFilter * This,
            /* [in] */ INT32 value);
        
        END_INTERFACE
    } __x_ABI_CLumia_CImaging_CArtistic_CIMoonlightFilterVtbl;

    interface __x_ABI_CLumia_CImaging_CArtistic_CIMoonlightFilter
    {
        CONST_VTBL struct __x_ABI_CLumia_CImaging_CArtistic_CIMoonlightFilterVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define __x_ABI_CLumia_CImaging_CArtistic_CIMoonlightFilter_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __x_ABI_CLumia_CImaging_CArtistic_CIMoonlightFilter_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __x_ABI_CLumia_CImaging_CArtistic_CIMoonlightFilter_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __x_ABI_CLumia_CImaging_CArtistic_CIMoonlightFilter_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 

#define __x_ABI_CLumia_CImaging_CArtistic_CIMoonlightFilter_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 

#define __x_ABI_CLumia_CImaging_CArtistic_CIMoonlightFilter_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 


#define __x_ABI_CLumia_CImaging_CArtistic_CIMoonlightFilter_get_Clock(This,__returnValue)	\
    ( (This)->lpVtbl -> get_Clock(This,__returnValue) ) 

#define __x_ABI_CLumia_CImaging_CArtistic_CIMoonlightFilter_put_Clock(This,value)	\
    ( (This)->lpVtbl -> put_Clock(This,value) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* ____x_ABI_CLumia_CImaging_CArtistic_CIMoonlightFilter_INTERFACE_DEFINED__ */


/* interface __MIDL_itf_Lumia2EImaging2EArtistic_0000_0035 */
/* [local] */ 

#if !defined(____x_ABI_CLumia_CImaging_CArtistic_CIMoonlightFilterFactory_INTERFACE_DEFINED__)
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Lumia_Imaging_Artistic_IMoonlightFilterFactory[] = L"Lumia.Imaging.Artistic.IMoonlightFilterFactory";
#endif /* !defined(____x_ABI_CLumia_CImaging_CArtistic_CIMoonlightFilterFactory_INTERFACE_DEFINED__) */


/* interface __MIDL_itf_Lumia2EImaging2EArtistic_0000_0035 */
/* [local] */ 



extern RPC_IF_HANDLE __MIDL_itf_Lumia2EImaging2EArtistic_0000_0035_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_Lumia2EImaging2EArtistic_0000_0035_v0_0_s_ifspec;

#ifndef ____x_ABI_CLumia_CImaging_CArtistic_CIMoonlightFilterFactory_INTERFACE_DEFINED__
#define ____x_ABI_CLumia_CImaging_CArtistic_CIMoonlightFilterFactory_INTERFACE_DEFINED__

/* interface __x_ABI_CLumia_CImaging_CArtistic_CIMoonlightFilterFactory */
/* [uuid][object] */ 



/* interface ABI::Lumia::Imaging::Artistic::IMoonlightFilterFactory */
/* [uuid][object] */ 


EXTERN_C const IID IID___x_ABI_CLumia_CImaging_CArtistic_CIMoonlightFilterFactory;

#if defined(__cplusplus) && !defined(CINTERFACE)
    } /* end extern "C" */
    namespace ABI {
        namespace Lumia {
            namespace Imaging {
                namespace Artistic {
                    
                    MIDL_INTERFACE("95FDC820-EAE7-3F84-9364-AF80D755C9DA")
                    IMoonlightFilterFactory : public IInspectable
                    {
                    public:
                        virtual HRESULT STDMETHODCALLTYPE Create( 
                            /* [in] */ INT32 clock,
                            /* [out][retval] */ __RPC__deref_out_opt ABI::Lumia::Imaging::Artistic::IMoonlightFilter **__returnValue) = 0;
                        
                    };

                    extern const __declspec(selectany) IID & IID_IMoonlightFilterFactory = __uuidof(IMoonlightFilterFactory);

                    
                }  /* end namespace */
            }  /* end namespace */
        }  /* end namespace */
    }  /* end namespace */
    extern "C" { 
    
#else 	/* C style interface */

    typedef struct __x_ABI_CLumia_CImaging_CArtistic_CIMoonlightFilterFactoryVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            __RPC__in __x_ABI_CLumia_CImaging_CArtistic_CIMoonlightFilterFactory * This,
            /* [in] */ __RPC__in REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            __RPC__in __x_ABI_CLumia_CImaging_CArtistic_CIMoonlightFilterFactory * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            __RPC__in __x_ABI_CLumia_CImaging_CArtistic_CIMoonlightFilterFactory * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetIids )( 
            __RPC__in __x_ABI_CLumia_CImaging_CArtistic_CIMoonlightFilterFactory * This,
            /* [out] */ __RPC__out ULONG *iidCount,
            /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
        
        HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )( 
            __RPC__in __x_ABI_CLumia_CImaging_CArtistic_CIMoonlightFilterFactory * This,
            /* [out] */ __RPC__deref_out_opt HSTRING *className);
        
        HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )( 
            __RPC__in __x_ABI_CLumia_CImaging_CArtistic_CIMoonlightFilterFactory * This,
            /* [out] */ __RPC__out TrustLevel *trustLevel);
        
        HRESULT ( STDMETHODCALLTYPE *Create )( 
            __RPC__in __x_ABI_CLumia_CImaging_CArtistic_CIMoonlightFilterFactory * This,
            /* [in] */ INT32 clock,
            /* [out][retval] */ __RPC__deref_out_opt __x_ABI_CLumia_CImaging_CArtistic_CIMoonlightFilter **__returnValue);
        
        END_INTERFACE
    } __x_ABI_CLumia_CImaging_CArtistic_CIMoonlightFilterFactoryVtbl;

    interface __x_ABI_CLumia_CImaging_CArtistic_CIMoonlightFilterFactory
    {
        CONST_VTBL struct __x_ABI_CLumia_CImaging_CArtistic_CIMoonlightFilterFactoryVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define __x_ABI_CLumia_CImaging_CArtistic_CIMoonlightFilterFactory_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __x_ABI_CLumia_CImaging_CArtistic_CIMoonlightFilterFactory_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __x_ABI_CLumia_CImaging_CArtistic_CIMoonlightFilterFactory_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __x_ABI_CLumia_CImaging_CArtistic_CIMoonlightFilterFactory_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 

#define __x_ABI_CLumia_CImaging_CArtistic_CIMoonlightFilterFactory_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 

#define __x_ABI_CLumia_CImaging_CArtistic_CIMoonlightFilterFactory_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 


#define __x_ABI_CLumia_CImaging_CArtistic_CIMoonlightFilterFactory_Create(This,clock,__returnValue)	\
    ( (This)->lpVtbl -> Create(This,clock,__returnValue) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* ____x_ABI_CLumia_CImaging_CArtistic_CIMoonlightFilterFactory_INTERFACE_DEFINED__ */


/* interface __MIDL_itf_Lumia2EImaging2EArtistic_0000_0036 */
/* [local] */ 

#if !defined(____x_ABI_CLumia_CImaging_CArtistic_CINegativeFilter_INTERFACE_DEFINED__)
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Lumia_Imaging_Artistic_INegativeFilter[] = L"Lumia.Imaging.Artistic.INegativeFilter";
#endif /* !defined(____x_ABI_CLumia_CImaging_CArtistic_CINegativeFilter_INTERFACE_DEFINED__) */


/* interface __MIDL_itf_Lumia2EImaging2EArtistic_0000_0036 */
/* [local] */ 



extern RPC_IF_HANDLE __MIDL_itf_Lumia2EImaging2EArtistic_0000_0036_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_Lumia2EImaging2EArtistic_0000_0036_v0_0_s_ifspec;

#ifndef ____x_ABI_CLumia_CImaging_CArtistic_CINegativeFilter_INTERFACE_DEFINED__
#define ____x_ABI_CLumia_CImaging_CArtistic_CINegativeFilter_INTERFACE_DEFINED__

/* interface __x_ABI_CLumia_CImaging_CArtistic_CINegativeFilter */
/* [uuid][object] */ 



/* interface ABI::Lumia::Imaging::Artistic::INegativeFilter */
/* [uuid][object] */ 


EXTERN_C const IID IID___x_ABI_CLumia_CImaging_CArtistic_CINegativeFilter;

#if defined(__cplusplus) && !defined(CINTERFACE)
    } /* end extern "C" */
    namespace ABI {
        namespace Lumia {
            namespace Imaging {
                namespace Artistic {
                    
                    MIDL_INTERFACE("8F3B68BF-7435-3009-B055-32B2E738D38F")
                    INegativeFilter : public IInspectable
                    {
                    public:
                    };

                    extern const __declspec(selectany) IID & IID_INegativeFilter = __uuidof(INegativeFilter);

                    
                }  /* end namespace */
            }  /* end namespace */
        }  /* end namespace */
    }  /* end namespace */
    extern "C" { 
    
#else 	/* C style interface */

    typedef struct __x_ABI_CLumia_CImaging_CArtistic_CINegativeFilterVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            __RPC__in __x_ABI_CLumia_CImaging_CArtistic_CINegativeFilter * This,
            /* [in] */ __RPC__in REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            __RPC__in __x_ABI_CLumia_CImaging_CArtistic_CINegativeFilter * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            __RPC__in __x_ABI_CLumia_CImaging_CArtistic_CINegativeFilter * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetIids )( 
            __RPC__in __x_ABI_CLumia_CImaging_CArtistic_CINegativeFilter * This,
            /* [out] */ __RPC__out ULONG *iidCount,
            /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
        
        HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )( 
            __RPC__in __x_ABI_CLumia_CImaging_CArtistic_CINegativeFilter * This,
            /* [out] */ __RPC__deref_out_opt HSTRING *className);
        
        HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )( 
            __RPC__in __x_ABI_CLumia_CImaging_CArtistic_CINegativeFilter * This,
            /* [out] */ __RPC__out TrustLevel *trustLevel);
        
        END_INTERFACE
    } __x_ABI_CLumia_CImaging_CArtistic_CINegativeFilterVtbl;

    interface __x_ABI_CLumia_CImaging_CArtistic_CINegativeFilter
    {
        CONST_VTBL struct __x_ABI_CLumia_CImaging_CArtistic_CINegativeFilterVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define __x_ABI_CLumia_CImaging_CArtistic_CINegativeFilter_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __x_ABI_CLumia_CImaging_CArtistic_CINegativeFilter_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __x_ABI_CLumia_CImaging_CArtistic_CINegativeFilter_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __x_ABI_CLumia_CImaging_CArtistic_CINegativeFilter_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 

#define __x_ABI_CLumia_CImaging_CArtistic_CINegativeFilter_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 

#define __x_ABI_CLumia_CImaging_CArtistic_CINegativeFilter_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 


#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* ____x_ABI_CLumia_CImaging_CArtistic_CINegativeFilter_INTERFACE_DEFINED__ */


/* interface __MIDL_itf_Lumia2EImaging2EArtistic_0000_0037 */
/* [local] */ 

#if !defined(____x_ABI_CLumia_CImaging_CArtistic_CIOilyFilter_INTERFACE_DEFINED__)
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Lumia_Imaging_Artistic_IOilyFilter[] = L"Lumia.Imaging.Artistic.IOilyFilter";
#endif /* !defined(____x_ABI_CLumia_CImaging_CArtistic_CIOilyFilter_INTERFACE_DEFINED__) */


/* interface __MIDL_itf_Lumia2EImaging2EArtistic_0000_0037 */
/* [local] */ 



extern RPC_IF_HANDLE __MIDL_itf_Lumia2EImaging2EArtistic_0000_0037_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_Lumia2EImaging2EArtistic_0000_0037_v0_0_s_ifspec;

#ifndef ____x_ABI_CLumia_CImaging_CArtistic_CIOilyFilter_INTERFACE_DEFINED__
#define ____x_ABI_CLumia_CImaging_CArtistic_CIOilyFilter_INTERFACE_DEFINED__

/* interface __x_ABI_CLumia_CImaging_CArtistic_CIOilyFilter */
/* [uuid][object] */ 



/* interface ABI::Lumia::Imaging::Artistic::IOilyFilter */
/* [uuid][object] */ 


EXTERN_C const IID IID___x_ABI_CLumia_CImaging_CArtistic_CIOilyFilter;

#if defined(__cplusplus) && !defined(CINTERFACE)
    } /* end extern "C" */
    namespace ABI {
        namespace Lumia {
            namespace Imaging {
                namespace Artistic {
                    
                    MIDL_INTERFACE("CE1C36B3-FD31-33E1-81F5-11A49AD7426B")
                    IOilyFilter : public IInspectable
                    {
                    public:
                        virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_OilBrushSize( 
                            /* [out][retval] */ __RPC__out ABI::Lumia::Imaging::Artistic::OilBrushSize *__returnValue) = 0;
                        
                        virtual /* [propput] */ HRESULT STDMETHODCALLTYPE put_OilBrushSize( 
                            /* [in] */ ABI::Lumia::Imaging::Artistic::OilBrushSize value) = 0;
                        
                    };

                    extern const __declspec(selectany) IID & IID_IOilyFilter = __uuidof(IOilyFilter);

                    
                }  /* end namespace */
            }  /* end namespace */
        }  /* end namespace */
    }  /* end namespace */
    extern "C" { 
    
#else 	/* C style interface */

    typedef struct __x_ABI_CLumia_CImaging_CArtistic_CIOilyFilterVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            __RPC__in __x_ABI_CLumia_CImaging_CArtistic_CIOilyFilter * This,
            /* [in] */ __RPC__in REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            __RPC__in __x_ABI_CLumia_CImaging_CArtistic_CIOilyFilter * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            __RPC__in __x_ABI_CLumia_CImaging_CArtistic_CIOilyFilter * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetIids )( 
            __RPC__in __x_ABI_CLumia_CImaging_CArtistic_CIOilyFilter * This,
            /* [out] */ __RPC__out ULONG *iidCount,
            /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
        
        HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )( 
            __RPC__in __x_ABI_CLumia_CImaging_CArtistic_CIOilyFilter * This,
            /* [out] */ __RPC__deref_out_opt HSTRING *className);
        
        HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )( 
            __RPC__in __x_ABI_CLumia_CImaging_CArtistic_CIOilyFilter * This,
            /* [out] */ __RPC__out TrustLevel *trustLevel);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_OilBrushSize )( 
            __RPC__in __x_ABI_CLumia_CImaging_CArtistic_CIOilyFilter * This,
            /* [out][retval] */ __RPC__out __x_ABI_CLumia_CImaging_CArtistic_COilBrushSize *__returnValue);
        
        /* [propput] */ HRESULT ( STDMETHODCALLTYPE *put_OilBrushSize )( 
            __RPC__in __x_ABI_CLumia_CImaging_CArtistic_CIOilyFilter * This,
            /* [in] */ __x_ABI_CLumia_CImaging_CArtistic_COilBrushSize value);
        
        END_INTERFACE
    } __x_ABI_CLumia_CImaging_CArtistic_CIOilyFilterVtbl;

    interface __x_ABI_CLumia_CImaging_CArtistic_CIOilyFilter
    {
        CONST_VTBL struct __x_ABI_CLumia_CImaging_CArtistic_CIOilyFilterVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define __x_ABI_CLumia_CImaging_CArtistic_CIOilyFilter_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __x_ABI_CLumia_CImaging_CArtistic_CIOilyFilter_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __x_ABI_CLumia_CImaging_CArtistic_CIOilyFilter_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __x_ABI_CLumia_CImaging_CArtistic_CIOilyFilter_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 

#define __x_ABI_CLumia_CImaging_CArtistic_CIOilyFilter_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 

#define __x_ABI_CLumia_CImaging_CArtistic_CIOilyFilter_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 


#define __x_ABI_CLumia_CImaging_CArtistic_CIOilyFilter_get_OilBrushSize(This,__returnValue)	\
    ( (This)->lpVtbl -> get_OilBrushSize(This,__returnValue) ) 

#define __x_ABI_CLumia_CImaging_CArtistic_CIOilyFilter_put_OilBrushSize(This,value)	\
    ( (This)->lpVtbl -> put_OilBrushSize(This,value) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* ____x_ABI_CLumia_CImaging_CArtistic_CIOilyFilter_INTERFACE_DEFINED__ */


/* interface __MIDL_itf_Lumia2EImaging2EArtistic_0000_0038 */
/* [local] */ 

#if !defined(____x_ABI_CLumia_CImaging_CArtistic_CIOilyFilterFactory_INTERFACE_DEFINED__)
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Lumia_Imaging_Artistic_IOilyFilterFactory[] = L"Lumia.Imaging.Artistic.IOilyFilterFactory";
#endif /* !defined(____x_ABI_CLumia_CImaging_CArtistic_CIOilyFilterFactory_INTERFACE_DEFINED__) */


/* interface __MIDL_itf_Lumia2EImaging2EArtistic_0000_0038 */
/* [local] */ 



extern RPC_IF_HANDLE __MIDL_itf_Lumia2EImaging2EArtistic_0000_0038_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_Lumia2EImaging2EArtistic_0000_0038_v0_0_s_ifspec;

#ifndef ____x_ABI_CLumia_CImaging_CArtistic_CIOilyFilterFactory_INTERFACE_DEFINED__
#define ____x_ABI_CLumia_CImaging_CArtistic_CIOilyFilterFactory_INTERFACE_DEFINED__

/* interface __x_ABI_CLumia_CImaging_CArtistic_CIOilyFilterFactory */
/* [uuid][object] */ 



/* interface ABI::Lumia::Imaging::Artistic::IOilyFilterFactory */
/* [uuid][object] */ 


EXTERN_C const IID IID___x_ABI_CLumia_CImaging_CArtistic_CIOilyFilterFactory;

#if defined(__cplusplus) && !defined(CINTERFACE)
    } /* end extern "C" */
    namespace ABI {
        namespace Lumia {
            namespace Imaging {
                namespace Artistic {
                    
                    MIDL_INTERFACE("C5D8B852-641F-3886-B9D2-B18823DF4BAF")
                    IOilyFilterFactory : public IInspectable
                    {
                    public:
                        virtual HRESULT STDMETHODCALLTYPE CreateWithBrushSize( 
                            /* [in] */ ABI::Lumia::Imaging::Artistic::OilBrushSize oilBrushSize,
                            /* [out][retval] */ __RPC__deref_out_opt ABI::Lumia::Imaging::Artistic::IOilyFilter **__returnValue) = 0;
                        
                    };

                    extern const __declspec(selectany) IID & IID_IOilyFilterFactory = __uuidof(IOilyFilterFactory);

                    
                }  /* end namespace */
            }  /* end namespace */
        }  /* end namespace */
    }  /* end namespace */
    extern "C" { 
    
#else 	/* C style interface */

    typedef struct __x_ABI_CLumia_CImaging_CArtistic_CIOilyFilterFactoryVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            __RPC__in __x_ABI_CLumia_CImaging_CArtistic_CIOilyFilterFactory * This,
            /* [in] */ __RPC__in REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            __RPC__in __x_ABI_CLumia_CImaging_CArtistic_CIOilyFilterFactory * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            __RPC__in __x_ABI_CLumia_CImaging_CArtistic_CIOilyFilterFactory * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetIids )( 
            __RPC__in __x_ABI_CLumia_CImaging_CArtistic_CIOilyFilterFactory * This,
            /* [out] */ __RPC__out ULONG *iidCount,
            /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
        
        HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )( 
            __RPC__in __x_ABI_CLumia_CImaging_CArtistic_CIOilyFilterFactory * This,
            /* [out] */ __RPC__deref_out_opt HSTRING *className);
        
        HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )( 
            __RPC__in __x_ABI_CLumia_CImaging_CArtistic_CIOilyFilterFactory * This,
            /* [out] */ __RPC__out TrustLevel *trustLevel);
        
        HRESULT ( STDMETHODCALLTYPE *CreateWithBrushSize )( 
            __RPC__in __x_ABI_CLumia_CImaging_CArtistic_CIOilyFilterFactory * This,
            /* [in] */ __x_ABI_CLumia_CImaging_CArtistic_COilBrushSize oilBrushSize,
            /* [out][retval] */ __RPC__deref_out_opt __x_ABI_CLumia_CImaging_CArtistic_CIOilyFilter **__returnValue);
        
        END_INTERFACE
    } __x_ABI_CLumia_CImaging_CArtistic_CIOilyFilterFactoryVtbl;

    interface __x_ABI_CLumia_CImaging_CArtistic_CIOilyFilterFactory
    {
        CONST_VTBL struct __x_ABI_CLumia_CImaging_CArtistic_CIOilyFilterFactoryVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define __x_ABI_CLumia_CImaging_CArtistic_CIOilyFilterFactory_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __x_ABI_CLumia_CImaging_CArtistic_CIOilyFilterFactory_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __x_ABI_CLumia_CImaging_CArtistic_CIOilyFilterFactory_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __x_ABI_CLumia_CImaging_CArtistic_CIOilyFilterFactory_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 

#define __x_ABI_CLumia_CImaging_CArtistic_CIOilyFilterFactory_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 

#define __x_ABI_CLumia_CImaging_CArtistic_CIOilyFilterFactory_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 


#define __x_ABI_CLumia_CImaging_CArtistic_CIOilyFilterFactory_CreateWithBrushSize(This,oilBrushSize,__returnValue)	\
    ( (This)->lpVtbl -> CreateWithBrushSize(This,oilBrushSize,__returnValue) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* ____x_ABI_CLumia_CImaging_CArtistic_CIOilyFilterFactory_INTERFACE_DEFINED__ */


/* interface __MIDL_itf_Lumia2EImaging2EArtistic_0000_0039 */
/* [local] */ 

#if !defined(____x_ABI_CLumia_CImaging_CArtistic_CIPaintFilter_INTERFACE_DEFINED__)
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Lumia_Imaging_Artistic_IPaintFilter[] = L"Lumia.Imaging.Artistic.IPaintFilter";
#endif /* !defined(____x_ABI_CLumia_CImaging_CArtistic_CIPaintFilter_INTERFACE_DEFINED__) */


/* interface __MIDL_itf_Lumia2EImaging2EArtistic_0000_0039 */
/* [local] */ 



extern RPC_IF_HANDLE __MIDL_itf_Lumia2EImaging2EArtistic_0000_0039_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_Lumia2EImaging2EArtistic_0000_0039_v0_0_s_ifspec;

#ifndef ____x_ABI_CLumia_CImaging_CArtistic_CIPaintFilter_INTERFACE_DEFINED__
#define ____x_ABI_CLumia_CImaging_CArtistic_CIPaintFilter_INTERFACE_DEFINED__

/* interface __x_ABI_CLumia_CImaging_CArtistic_CIPaintFilter */
/* [uuid][object] */ 



/* interface ABI::Lumia::Imaging::Artistic::IPaintFilter */
/* [uuid][object] */ 


EXTERN_C const IID IID___x_ABI_CLumia_CImaging_CArtistic_CIPaintFilter;

#if defined(__cplusplus) && !defined(CINTERFACE)
    } /* end extern "C" */
    namespace ABI {
        namespace Lumia {
            namespace Imaging {
                namespace Artistic {
                    
                    MIDL_INTERFACE("B7CC23E4-4ED5-3D13-ADD9-A2F9863F385B")
                    IPaintFilter : public IInspectable
                    {
                    public:
                        virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_Level( 
                            /* [out][retval] */ __RPC__out INT32 *__returnValue) = 0;
                        
                        virtual /* [propput] */ HRESULT STDMETHODCALLTYPE put_Level( 
                            /* [in] */ INT32 value) = 0;
                        
                    };

                    extern const __declspec(selectany) IID & IID_IPaintFilter = __uuidof(IPaintFilter);

                    
                }  /* end namespace */
            }  /* end namespace */
        }  /* end namespace */
    }  /* end namespace */
    extern "C" { 
    
#else 	/* C style interface */

    typedef struct __x_ABI_CLumia_CImaging_CArtistic_CIPaintFilterVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            __RPC__in __x_ABI_CLumia_CImaging_CArtistic_CIPaintFilter * This,
            /* [in] */ __RPC__in REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            __RPC__in __x_ABI_CLumia_CImaging_CArtistic_CIPaintFilter * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            __RPC__in __x_ABI_CLumia_CImaging_CArtistic_CIPaintFilter * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetIids )( 
            __RPC__in __x_ABI_CLumia_CImaging_CArtistic_CIPaintFilter * This,
            /* [out] */ __RPC__out ULONG *iidCount,
            /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
        
        HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )( 
            __RPC__in __x_ABI_CLumia_CImaging_CArtistic_CIPaintFilter * This,
            /* [out] */ __RPC__deref_out_opt HSTRING *className);
        
        HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )( 
            __RPC__in __x_ABI_CLumia_CImaging_CArtistic_CIPaintFilter * This,
            /* [out] */ __RPC__out TrustLevel *trustLevel);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_Level )( 
            __RPC__in __x_ABI_CLumia_CImaging_CArtistic_CIPaintFilter * This,
            /* [out][retval] */ __RPC__out INT32 *__returnValue);
        
        /* [propput] */ HRESULT ( STDMETHODCALLTYPE *put_Level )( 
            __RPC__in __x_ABI_CLumia_CImaging_CArtistic_CIPaintFilter * This,
            /* [in] */ INT32 value);
        
        END_INTERFACE
    } __x_ABI_CLumia_CImaging_CArtistic_CIPaintFilterVtbl;

    interface __x_ABI_CLumia_CImaging_CArtistic_CIPaintFilter
    {
        CONST_VTBL struct __x_ABI_CLumia_CImaging_CArtistic_CIPaintFilterVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define __x_ABI_CLumia_CImaging_CArtistic_CIPaintFilter_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __x_ABI_CLumia_CImaging_CArtistic_CIPaintFilter_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __x_ABI_CLumia_CImaging_CArtistic_CIPaintFilter_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __x_ABI_CLumia_CImaging_CArtistic_CIPaintFilter_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 

#define __x_ABI_CLumia_CImaging_CArtistic_CIPaintFilter_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 

#define __x_ABI_CLumia_CImaging_CArtistic_CIPaintFilter_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 


#define __x_ABI_CLumia_CImaging_CArtistic_CIPaintFilter_get_Level(This,__returnValue)	\
    ( (This)->lpVtbl -> get_Level(This,__returnValue) ) 

#define __x_ABI_CLumia_CImaging_CArtistic_CIPaintFilter_put_Level(This,value)	\
    ( (This)->lpVtbl -> put_Level(This,value) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* ____x_ABI_CLumia_CImaging_CArtistic_CIPaintFilter_INTERFACE_DEFINED__ */


/* interface __MIDL_itf_Lumia2EImaging2EArtistic_0000_0040 */
/* [local] */ 

#if !defined(____x_ABI_CLumia_CImaging_CArtistic_CIPaintFilterFactory_INTERFACE_DEFINED__)
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Lumia_Imaging_Artistic_IPaintFilterFactory[] = L"Lumia.Imaging.Artistic.IPaintFilterFactory";
#endif /* !defined(____x_ABI_CLumia_CImaging_CArtistic_CIPaintFilterFactory_INTERFACE_DEFINED__) */


/* interface __MIDL_itf_Lumia2EImaging2EArtistic_0000_0040 */
/* [local] */ 



extern RPC_IF_HANDLE __MIDL_itf_Lumia2EImaging2EArtistic_0000_0040_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_Lumia2EImaging2EArtistic_0000_0040_v0_0_s_ifspec;

#ifndef ____x_ABI_CLumia_CImaging_CArtistic_CIPaintFilterFactory_INTERFACE_DEFINED__
#define ____x_ABI_CLumia_CImaging_CArtistic_CIPaintFilterFactory_INTERFACE_DEFINED__

/* interface __x_ABI_CLumia_CImaging_CArtistic_CIPaintFilterFactory */
/* [uuid][object] */ 



/* interface ABI::Lumia::Imaging::Artistic::IPaintFilterFactory */
/* [uuid][object] */ 


EXTERN_C const IID IID___x_ABI_CLumia_CImaging_CArtistic_CIPaintFilterFactory;

#if defined(__cplusplus) && !defined(CINTERFACE)
    } /* end extern "C" */
    namespace ABI {
        namespace Lumia {
            namespace Imaging {
                namespace Artistic {
                    
                    MIDL_INTERFACE("5D26A5D4-CACB-36F4-806C-9A630545A787")
                    IPaintFilterFactory : public IInspectable
                    {
                    public:
                        virtual HRESULT STDMETHODCALLTYPE CreateWithLevel( 
                            /* [in] */ INT32 level,
                            /* [out][retval] */ __RPC__deref_out_opt ABI::Lumia::Imaging::Artistic::IPaintFilter **__returnValue) = 0;
                        
                    };

                    extern const __declspec(selectany) IID & IID_IPaintFilterFactory = __uuidof(IPaintFilterFactory);

                    
                }  /* end namespace */
            }  /* end namespace */
        }  /* end namespace */
    }  /* end namespace */
    extern "C" { 
    
#else 	/* C style interface */

    typedef struct __x_ABI_CLumia_CImaging_CArtistic_CIPaintFilterFactoryVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            __RPC__in __x_ABI_CLumia_CImaging_CArtistic_CIPaintFilterFactory * This,
            /* [in] */ __RPC__in REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            __RPC__in __x_ABI_CLumia_CImaging_CArtistic_CIPaintFilterFactory * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            __RPC__in __x_ABI_CLumia_CImaging_CArtistic_CIPaintFilterFactory * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetIids )( 
            __RPC__in __x_ABI_CLumia_CImaging_CArtistic_CIPaintFilterFactory * This,
            /* [out] */ __RPC__out ULONG *iidCount,
            /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
        
        HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )( 
            __RPC__in __x_ABI_CLumia_CImaging_CArtistic_CIPaintFilterFactory * This,
            /* [out] */ __RPC__deref_out_opt HSTRING *className);
        
        HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )( 
            __RPC__in __x_ABI_CLumia_CImaging_CArtistic_CIPaintFilterFactory * This,
            /* [out] */ __RPC__out TrustLevel *trustLevel);
        
        HRESULT ( STDMETHODCALLTYPE *CreateWithLevel )( 
            __RPC__in __x_ABI_CLumia_CImaging_CArtistic_CIPaintFilterFactory * This,
            /* [in] */ INT32 level,
            /* [out][retval] */ __RPC__deref_out_opt __x_ABI_CLumia_CImaging_CArtistic_CIPaintFilter **__returnValue);
        
        END_INTERFACE
    } __x_ABI_CLumia_CImaging_CArtistic_CIPaintFilterFactoryVtbl;

    interface __x_ABI_CLumia_CImaging_CArtistic_CIPaintFilterFactory
    {
        CONST_VTBL struct __x_ABI_CLumia_CImaging_CArtistic_CIPaintFilterFactoryVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define __x_ABI_CLumia_CImaging_CArtistic_CIPaintFilterFactory_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __x_ABI_CLumia_CImaging_CArtistic_CIPaintFilterFactory_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __x_ABI_CLumia_CImaging_CArtistic_CIPaintFilterFactory_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __x_ABI_CLumia_CImaging_CArtistic_CIPaintFilterFactory_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 

#define __x_ABI_CLumia_CImaging_CArtistic_CIPaintFilterFactory_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 

#define __x_ABI_CLumia_CImaging_CArtistic_CIPaintFilterFactory_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 


#define __x_ABI_CLumia_CImaging_CArtistic_CIPaintFilterFactory_CreateWithLevel(This,level,__returnValue)	\
    ( (This)->lpVtbl -> CreateWithLevel(This,level,__returnValue) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* ____x_ABI_CLumia_CImaging_CArtistic_CIPaintFilterFactory_INTERFACE_DEFINED__ */


/* interface __MIDL_itf_Lumia2EImaging2EArtistic_0000_0041 */
/* [local] */ 

#if !defined(____x_ABI_CLumia_CImaging_CArtistic_CIPosterizeFilter_INTERFACE_DEFINED__)
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Lumia_Imaging_Artistic_IPosterizeFilter[] = L"Lumia.Imaging.Artistic.IPosterizeFilter";
#endif /* !defined(____x_ABI_CLumia_CImaging_CArtistic_CIPosterizeFilter_INTERFACE_DEFINED__) */


/* interface __MIDL_itf_Lumia2EImaging2EArtistic_0000_0041 */
/* [local] */ 



extern RPC_IF_HANDLE __MIDL_itf_Lumia2EImaging2EArtistic_0000_0041_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_Lumia2EImaging2EArtistic_0000_0041_v0_0_s_ifspec;

#ifndef ____x_ABI_CLumia_CImaging_CArtistic_CIPosterizeFilter_INTERFACE_DEFINED__
#define ____x_ABI_CLumia_CImaging_CArtistic_CIPosterizeFilter_INTERFACE_DEFINED__

/* interface __x_ABI_CLumia_CImaging_CArtistic_CIPosterizeFilter */
/* [uuid][object] */ 



/* interface ABI::Lumia::Imaging::Artistic::IPosterizeFilter */
/* [uuid][object] */ 


EXTERN_C const IID IID___x_ABI_CLumia_CImaging_CArtistic_CIPosterizeFilter;

#if defined(__cplusplus) && !defined(CINTERFACE)
    } /* end extern "C" */
    namespace ABI {
        namespace Lumia {
            namespace Imaging {
                namespace Artistic {
                    
                    MIDL_INTERFACE("EB2018EC-A8BC-35A7-B5AB-F480D2BD02AB")
                    IPosterizeFilter : public IInspectable
                    {
                    public:
                        virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_ColorComponentValueCount( 
                            /* [out][retval] */ __RPC__out INT32 *__returnValue) = 0;
                        
                        virtual /* [propput] */ HRESULT STDMETHODCALLTYPE put_ColorComponentValueCount( 
                            /* [in] */ INT32 value) = 0;
                        
                    };

                    extern const __declspec(selectany) IID & IID_IPosterizeFilter = __uuidof(IPosterizeFilter);

                    
                }  /* end namespace */
            }  /* end namespace */
        }  /* end namespace */
    }  /* end namespace */
    extern "C" { 
    
#else 	/* C style interface */

    typedef struct __x_ABI_CLumia_CImaging_CArtistic_CIPosterizeFilterVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            __RPC__in __x_ABI_CLumia_CImaging_CArtistic_CIPosterizeFilter * This,
            /* [in] */ __RPC__in REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            __RPC__in __x_ABI_CLumia_CImaging_CArtistic_CIPosterizeFilter * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            __RPC__in __x_ABI_CLumia_CImaging_CArtistic_CIPosterizeFilter * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetIids )( 
            __RPC__in __x_ABI_CLumia_CImaging_CArtistic_CIPosterizeFilter * This,
            /* [out] */ __RPC__out ULONG *iidCount,
            /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
        
        HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )( 
            __RPC__in __x_ABI_CLumia_CImaging_CArtistic_CIPosterizeFilter * This,
            /* [out] */ __RPC__deref_out_opt HSTRING *className);
        
        HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )( 
            __RPC__in __x_ABI_CLumia_CImaging_CArtistic_CIPosterizeFilter * This,
            /* [out] */ __RPC__out TrustLevel *trustLevel);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_ColorComponentValueCount )( 
            __RPC__in __x_ABI_CLumia_CImaging_CArtistic_CIPosterizeFilter * This,
            /* [out][retval] */ __RPC__out INT32 *__returnValue);
        
        /* [propput] */ HRESULT ( STDMETHODCALLTYPE *put_ColorComponentValueCount )( 
            __RPC__in __x_ABI_CLumia_CImaging_CArtistic_CIPosterizeFilter * This,
            /* [in] */ INT32 value);
        
        END_INTERFACE
    } __x_ABI_CLumia_CImaging_CArtistic_CIPosterizeFilterVtbl;

    interface __x_ABI_CLumia_CImaging_CArtistic_CIPosterizeFilter
    {
        CONST_VTBL struct __x_ABI_CLumia_CImaging_CArtistic_CIPosterizeFilterVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define __x_ABI_CLumia_CImaging_CArtistic_CIPosterizeFilter_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __x_ABI_CLumia_CImaging_CArtistic_CIPosterizeFilter_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __x_ABI_CLumia_CImaging_CArtistic_CIPosterizeFilter_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __x_ABI_CLumia_CImaging_CArtistic_CIPosterizeFilter_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 

#define __x_ABI_CLumia_CImaging_CArtistic_CIPosterizeFilter_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 

#define __x_ABI_CLumia_CImaging_CArtistic_CIPosterizeFilter_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 


#define __x_ABI_CLumia_CImaging_CArtistic_CIPosterizeFilter_get_ColorComponentValueCount(This,__returnValue)	\
    ( (This)->lpVtbl -> get_ColorComponentValueCount(This,__returnValue) ) 

#define __x_ABI_CLumia_CImaging_CArtistic_CIPosterizeFilter_put_ColorComponentValueCount(This,value)	\
    ( (This)->lpVtbl -> put_ColorComponentValueCount(This,value) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* ____x_ABI_CLumia_CImaging_CArtistic_CIPosterizeFilter_INTERFACE_DEFINED__ */


/* interface __MIDL_itf_Lumia2EImaging2EArtistic_0000_0042 */
/* [local] */ 

#if !defined(____x_ABI_CLumia_CImaging_CArtistic_CIPosterizeFilterFactory_INTERFACE_DEFINED__)
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Lumia_Imaging_Artistic_IPosterizeFilterFactory[] = L"Lumia.Imaging.Artistic.IPosterizeFilterFactory";
#endif /* !defined(____x_ABI_CLumia_CImaging_CArtistic_CIPosterizeFilterFactory_INTERFACE_DEFINED__) */


/* interface __MIDL_itf_Lumia2EImaging2EArtistic_0000_0042 */
/* [local] */ 



extern RPC_IF_HANDLE __MIDL_itf_Lumia2EImaging2EArtistic_0000_0042_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_Lumia2EImaging2EArtistic_0000_0042_v0_0_s_ifspec;

#ifndef ____x_ABI_CLumia_CImaging_CArtistic_CIPosterizeFilterFactory_INTERFACE_DEFINED__
#define ____x_ABI_CLumia_CImaging_CArtistic_CIPosterizeFilterFactory_INTERFACE_DEFINED__

/* interface __x_ABI_CLumia_CImaging_CArtistic_CIPosterizeFilterFactory */
/* [uuid][object] */ 



/* interface ABI::Lumia::Imaging::Artistic::IPosterizeFilterFactory */
/* [uuid][object] */ 


EXTERN_C const IID IID___x_ABI_CLumia_CImaging_CArtistic_CIPosterizeFilterFactory;

#if defined(__cplusplus) && !defined(CINTERFACE)
    } /* end extern "C" */
    namespace ABI {
        namespace Lumia {
            namespace Imaging {
                namespace Artistic {
                    
                    MIDL_INTERFACE("03F5E66E-976E-3C93-B70E-75079728511B")
                    IPosterizeFilterFactory : public IInspectable
                    {
                    public:
                        virtual HRESULT STDMETHODCALLTYPE CreateWithColorComponentCount( 
                            /* [in] */ INT32 colorComponentValueCount,
                            /* [out][retval] */ __RPC__deref_out_opt ABI::Lumia::Imaging::Artistic::IPosterizeFilter **__returnValue) = 0;
                        
                    };

                    extern const __declspec(selectany) IID & IID_IPosterizeFilterFactory = __uuidof(IPosterizeFilterFactory);

                    
                }  /* end namespace */
            }  /* end namespace */
        }  /* end namespace */
    }  /* end namespace */
    extern "C" { 
    
#else 	/* C style interface */

    typedef struct __x_ABI_CLumia_CImaging_CArtistic_CIPosterizeFilterFactoryVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            __RPC__in __x_ABI_CLumia_CImaging_CArtistic_CIPosterizeFilterFactory * This,
            /* [in] */ __RPC__in REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            __RPC__in __x_ABI_CLumia_CImaging_CArtistic_CIPosterizeFilterFactory * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            __RPC__in __x_ABI_CLumia_CImaging_CArtistic_CIPosterizeFilterFactory * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetIids )( 
            __RPC__in __x_ABI_CLumia_CImaging_CArtistic_CIPosterizeFilterFactory * This,
            /* [out] */ __RPC__out ULONG *iidCount,
            /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
        
        HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )( 
            __RPC__in __x_ABI_CLumia_CImaging_CArtistic_CIPosterizeFilterFactory * This,
            /* [out] */ __RPC__deref_out_opt HSTRING *className);
        
        HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )( 
            __RPC__in __x_ABI_CLumia_CImaging_CArtistic_CIPosterizeFilterFactory * This,
            /* [out] */ __RPC__out TrustLevel *trustLevel);
        
        HRESULT ( STDMETHODCALLTYPE *CreateWithColorComponentCount )( 
            __RPC__in __x_ABI_CLumia_CImaging_CArtistic_CIPosterizeFilterFactory * This,
            /* [in] */ INT32 colorComponentValueCount,
            /* [out][retval] */ __RPC__deref_out_opt __x_ABI_CLumia_CImaging_CArtistic_CIPosterizeFilter **__returnValue);
        
        END_INTERFACE
    } __x_ABI_CLumia_CImaging_CArtistic_CIPosterizeFilterFactoryVtbl;

    interface __x_ABI_CLumia_CImaging_CArtistic_CIPosterizeFilterFactory
    {
        CONST_VTBL struct __x_ABI_CLumia_CImaging_CArtistic_CIPosterizeFilterFactoryVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define __x_ABI_CLumia_CImaging_CArtistic_CIPosterizeFilterFactory_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __x_ABI_CLumia_CImaging_CArtistic_CIPosterizeFilterFactory_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __x_ABI_CLumia_CImaging_CArtistic_CIPosterizeFilterFactory_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __x_ABI_CLumia_CImaging_CArtistic_CIPosterizeFilterFactory_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 

#define __x_ABI_CLumia_CImaging_CArtistic_CIPosterizeFilterFactory_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 

#define __x_ABI_CLumia_CImaging_CArtistic_CIPosterizeFilterFactory_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 


#define __x_ABI_CLumia_CImaging_CArtistic_CIPosterizeFilterFactory_CreateWithColorComponentCount(This,colorComponentValueCount,__returnValue)	\
    ( (This)->lpVtbl -> CreateWithColorComponentCount(This,colorComponentValueCount,__returnValue) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* ____x_ABI_CLumia_CImaging_CArtistic_CIPosterizeFilterFactory_INTERFACE_DEFINED__ */


/* interface __MIDL_itf_Lumia2EImaging2EArtistic_0000_0043 */
/* [local] */ 

#if !defined(____x_ABI_CLumia_CImaging_CArtistic_CISepiaFilter_INTERFACE_DEFINED__)
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Lumia_Imaging_Artistic_ISepiaFilter[] = L"Lumia.Imaging.Artistic.ISepiaFilter";
#endif /* !defined(____x_ABI_CLumia_CImaging_CArtistic_CISepiaFilter_INTERFACE_DEFINED__) */


/* interface __MIDL_itf_Lumia2EImaging2EArtistic_0000_0043 */
/* [local] */ 



extern RPC_IF_HANDLE __MIDL_itf_Lumia2EImaging2EArtistic_0000_0043_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_Lumia2EImaging2EArtistic_0000_0043_v0_0_s_ifspec;

#ifndef ____x_ABI_CLumia_CImaging_CArtistic_CISepiaFilter_INTERFACE_DEFINED__
#define ____x_ABI_CLumia_CImaging_CArtistic_CISepiaFilter_INTERFACE_DEFINED__

/* interface __x_ABI_CLumia_CImaging_CArtistic_CISepiaFilter */
/* [uuid][object] */ 



/* interface ABI::Lumia::Imaging::Artistic::ISepiaFilter */
/* [uuid][object] */ 


EXTERN_C const IID IID___x_ABI_CLumia_CImaging_CArtistic_CISepiaFilter;

#if defined(__cplusplus) && !defined(CINTERFACE)
    } /* end extern "C" */
    namespace ABI {
        namespace Lumia {
            namespace Imaging {
                namespace Artistic {
                    
                    MIDL_INTERFACE("943A6845-29CA-3235-A0BD-C0865CDA2BF9")
                    ISepiaFilter : public IInspectable
                    {
                    public:
                    };

                    extern const __declspec(selectany) IID & IID_ISepiaFilter = __uuidof(ISepiaFilter);

                    
                }  /* end namespace */
            }  /* end namespace */
        }  /* end namespace */
    }  /* end namespace */
    extern "C" { 
    
#else 	/* C style interface */

    typedef struct __x_ABI_CLumia_CImaging_CArtistic_CISepiaFilterVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            __RPC__in __x_ABI_CLumia_CImaging_CArtistic_CISepiaFilter * This,
            /* [in] */ __RPC__in REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            __RPC__in __x_ABI_CLumia_CImaging_CArtistic_CISepiaFilter * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            __RPC__in __x_ABI_CLumia_CImaging_CArtistic_CISepiaFilter * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetIids )( 
            __RPC__in __x_ABI_CLumia_CImaging_CArtistic_CISepiaFilter * This,
            /* [out] */ __RPC__out ULONG *iidCount,
            /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
        
        HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )( 
            __RPC__in __x_ABI_CLumia_CImaging_CArtistic_CISepiaFilter * This,
            /* [out] */ __RPC__deref_out_opt HSTRING *className);
        
        HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )( 
            __RPC__in __x_ABI_CLumia_CImaging_CArtistic_CISepiaFilter * This,
            /* [out] */ __RPC__out TrustLevel *trustLevel);
        
        END_INTERFACE
    } __x_ABI_CLumia_CImaging_CArtistic_CISepiaFilterVtbl;

    interface __x_ABI_CLumia_CImaging_CArtistic_CISepiaFilter
    {
        CONST_VTBL struct __x_ABI_CLumia_CImaging_CArtistic_CISepiaFilterVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define __x_ABI_CLumia_CImaging_CArtistic_CISepiaFilter_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __x_ABI_CLumia_CImaging_CArtistic_CISepiaFilter_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __x_ABI_CLumia_CImaging_CArtistic_CISepiaFilter_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __x_ABI_CLumia_CImaging_CArtistic_CISepiaFilter_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 

#define __x_ABI_CLumia_CImaging_CArtistic_CISepiaFilter_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 

#define __x_ABI_CLumia_CImaging_CArtistic_CISepiaFilter_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 


#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* ____x_ABI_CLumia_CImaging_CArtistic_CISepiaFilter_INTERFACE_DEFINED__ */


/* interface __MIDL_itf_Lumia2EImaging2EArtistic_0000_0044 */
/* [local] */ 

#if !defined(____x_ABI_CLumia_CImaging_CArtistic_CISketchFilter_INTERFACE_DEFINED__)
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Lumia_Imaging_Artistic_ISketchFilter[] = L"Lumia.Imaging.Artistic.ISketchFilter";
#endif /* !defined(____x_ABI_CLumia_CImaging_CArtistic_CISketchFilter_INTERFACE_DEFINED__) */


/* interface __MIDL_itf_Lumia2EImaging2EArtistic_0000_0044 */
/* [local] */ 



extern RPC_IF_HANDLE __MIDL_itf_Lumia2EImaging2EArtistic_0000_0044_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_Lumia2EImaging2EArtistic_0000_0044_v0_0_s_ifspec;

#ifndef ____x_ABI_CLumia_CImaging_CArtistic_CISketchFilter_INTERFACE_DEFINED__
#define ____x_ABI_CLumia_CImaging_CArtistic_CISketchFilter_INTERFACE_DEFINED__

/* interface __x_ABI_CLumia_CImaging_CArtistic_CISketchFilter */
/* [uuid][object] */ 



/* interface ABI::Lumia::Imaging::Artistic::ISketchFilter */
/* [uuid][object] */ 


EXTERN_C const IID IID___x_ABI_CLumia_CImaging_CArtistic_CISketchFilter;

#if defined(__cplusplus) && !defined(CINTERFACE)
    } /* end extern "C" */
    namespace ABI {
        namespace Lumia {
            namespace Imaging {
                namespace Artistic {
                    
                    MIDL_INTERFACE("818046B9-AA3C-356D-8CA2-38BBC620A5A0")
                    ISketchFilter : public IInspectable
                    {
                    public:
                        virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_SketchMode( 
                            /* [out][retval] */ __RPC__out ABI::Lumia::Imaging::Artistic::SketchMode *__returnValue) = 0;
                        
                        virtual /* [propput] */ HRESULT STDMETHODCALLTYPE put_SketchMode( 
                            /* [in] */ ABI::Lumia::Imaging::Artistic::SketchMode value) = 0;
                        
                    };

                    extern const __declspec(selectany) IID & IID_ISketchFilter = __uuidof(ISketchFilter);

                    
                }  /* end namespace */
            }  /* end namespace */
        }  /* end namespace */
    }  /* end namespace */
    extern "C" { 
    
#else 	/* C style interface */

    typedef struct __x_ABI_CLumia_CImaging_CArtistic_CISketchFilterVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            __RPC__in __x_ABI_CLumia_CImaging_CArtistic_CISketchFilter * This,
            /* [in] */ __RPC__in REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            __RPC__in __x_ABI_CLumia_CImaging_CArtistic_CISketchFilter * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            __RPC__in __x_ABI_CLumia_CImaging_CArtistic_CISketchFilter * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetIids )( 
            __RPC__in __x_ABI_CLumia_CImaging_CArtistic_CISketchFilter * This,
            /* [out] */ __RPC__out ULONG *iidCount,
            /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
        
        HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )( 
            __RPC__in __x_ABI_CLumia_CImaging_CArtistic_CISketchFilter * This,
            /* [out] */ __RPC__deref_out_opt HSTRING *className);
        
        HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )( 
            __RPC__in __x_ABI_CLumia_CImaging_CArtistic_CISketchFilter * This,
            /* [out] */ __RPC__out TrustLevel *trustLevel);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_SketchMode )( 
            __RPC__in __x_ABI_CLumia_CImaging_CArtistic_CISketchFilter * This,
            /* [out][retval] */ __RPC__out __x_ABI_CLumia_CImaging_CArtistic_CSketchMode *__returnValue);
        
        /* [propput] */ HRESULT ( STDMETHODCALLTYPE *put_SketchMode )( 
            __RPC__in __x_ABI_CLumia_CImaging_CArtistic_CISketchFilter * This,
            /* [in] */ __x_ABI_CLumia_CImaging_CArtistic_CSketchMode value);
        
        END_INTERFACE
    } __x_ABI_CLumia_CImaging_CArtistic_CISketchFilterVtbl;

    interface __x_ABI_CLumia_CImaging_CArtistic_CISketchFilter
    {
        CONST_VTBL struct __x_ABI_CLumia_CImaging_CArtistic_CISketchFilterVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define __x_ABI_CLumia_CImaging_CArtistic_CISketchFilter_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __x_ABI_CLumia_CImaging_CArtistic_CISketchFilter_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __x_ABI_CLumia_CImaging_CArtistic_CISketchFilter_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __x_ABI_CLumia_CImaging_CArtistic_CISketchFilter_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 

#define __x_ABI_CLumia_CImaging_CArtistic_CISketchFilter_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 

#define __x_ABI_CLumia_CImaging_CArtistic_CISketchFilter_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 


#define __x_ABI_CLumia_CImaging_CArtistic_CISketchFilter_get_SketchMode(This,__returnValue)	\
    ( (This)->lpVtbl -> get_SketchMode(This,__returnValue) ) 

#define __x_ABI_CLumia_CImaging_CArtistic_CISketchFilter_put_SketchMode(This,value)	\
    ( (This)->lpVtbl -> put_SketchMode(This,value) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* ____x_ABI_CLumia_CImaging_CArtistic_CISketchFilter_INTERFACE_DEFINED__ */


/* interface __MIDL_itf_Lumia2EImaging2EArtistic_0000_0045 */
/* [local] */ 

#if !defined(____x_ABI_CLumia_CImaging_CArtistic_CISketchFilterFactory_INTERFACE_DEFINED__)
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Lumia_Imaging_Artistic_ISketchFilterFactory[] = L"Lumia.Imaging.Artistic.ISketchFilterFactory";
#endif /* !defined(____x_ABI_CLumia_CImaging_CArtistic_CISketchFilterFactory_INTERFACE_DEFINED__) */


/* interface __MIDL_itf_Lumia2EImaging2EArtistic_0000_0045 */
/* [local] */ 



extern RPC_IF_HANDLE __MIDL_itf_Lumia2EImaging2EArtistic_0000_0045_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_Lumia2EImaging2EArtistic_0000_0045_v0_0_s_ifspec;

#ifndef ____x_ABI_CLumia_CImaging_CArtistic_CISketchFilterFactory_INTERFACE_DEFINED__
#define ____x_ABI_CLumia_CImaging_CArtistic_CISketchFilterFactory_INTERFACE_DEFINED__

/* interface __x_ABI_CLumia_CImaging_CArtistic_CISketchFilterFactory */
/* [uuid][object] */ 



/* interface ABI::Lumia::Imaging::Artistic::ISketchFilterFactory */
/* [uuid][object] */ 


EXTERN_C const IID IID___x_ABI_CLumia_CImaging_CArtistic_CISketchFilterFactory;

#if defined(__cplusplus) && !defined(CINTERFACE)
    } /* end extern "C" */
    namespace ABI {
        namespace Lumia {
            namespace Imaging {
                namespace Artistic {
                    
                    MIDL_INTERFACE("BE4D3701-D392-34B9-B0A2-56FF668989E6")
                    ISketchFilterFactory : public IInspectable
                    {
                    public:
                        virtual HRESULT STDMETHODCALLTYPE CreateWithSketchMode( 
                            /* [in] */ ABI::Lumia::Imaging::Artistic::SketchMode sketchMode,
                            /* [out][retval] */ __RPC__deref_out_opt ABI::Lumia::Imaging::Artistic::ISketchFilter **__returnValue) = 0;
                        
                    };

                    extern const __declspec(selectany) IID & IID_ISketchFilterFactory = __uuidof(ISketchFilterFactory);

                    
                }  /* end namespace */
            }  /* end namespace */
        }  /* end namespace */
    }  /* end namespace */
    extern "C" { 
    
#else 	/* C style interface */

    typedef struct __x_ABI_CLumia_CImaging_CArtistic_CISketchFilterFactoryVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            __RPC__in __x_ABI_CLumia_CImaging_CArtistic_CISketchFilterFactory * This,
            /* [in] */ __RPC__in REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            __RPC__in __x_ABI_CLumia_CImaging_CArtistic_CISketchFilterFactory * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            __RPC__in __x_ABI_CLumia_CImaging_CArtistic_CISketchFilterFactory * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetIids )( 
            __RPC__in __x_ABI_CLumia_CImaging_CArtistic_CISketchFilterFactory * This,
            /* [out] */ __RPC__out ULONG *iidCount,
            /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
        
        HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )( 
            __RPC__in __x_ABI_CLumia_CImaging_CArtistic_CISketchFilterFactory * This,
            /* [out] */ __RPC__deref_out_opt HSTRING *className);
        
        HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )( 
            __RPC__in __x_ABI_CLumia_CImaging_CArtistic_CISketchFilterFactory * This,
            /* [out] */ __RPC__out TrustLevel *trustLevel);
        
        HRESULT ( STDMETHODCALLTYPE *CreateWithSketchMode )( 
            __RPC__in __x_ABI_CLumia_CImaging_CArtistic_CISketchFilterFactory * This,
            /* [in] */ __x_ABI_CLumia_CImaging_CArtistic_CSketchMode sketchMode,
            /* [out][retval] */ __RPC__deref_out_opt __x_ABI_CLumia_CImaging_CArtistic_CISketchFilter **__returnValue);
        
        END_INTERFACE
    } __x_ABI_CLumia_CImaging_CArtistic_CISketchFilterFactoryVtbl;

    interface __x_ABI_CLumia_CImaging_CArtistic_CISketchFilterFactory
    {
        CONST_VTBL struct __x_ABI_CLumia_CImaging_CArtistic_CISketchFilterFactoryVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define __x_ABI_CLumia_CImaging_CArtistic_CISketchFilterFactory_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __x_ABI_CLumia_CImaging_CArtistic_CISketchFilterFactory_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __x_ABI_CLumia_CImaging_CArtistic_CISketchFilterFactory_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __x_ABI_CLumia_CImaging_CArtistic_CISketchFilterFactory_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 

#define __x_ABI_CLumia_CImaging_CArtistic_CISketchFilterFactory_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 

#define __x_ABI_CLumia_CImaging_CArtistic_CISketchFilterFactory_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 


#define __x_ABI_CLumia_CImaging_CArtistic_CISketchFilterFactory_CreateWithSketchMode(This,sketchMode,__returnValue)	\
    ( (This)->lpVtbl -> CreateWithSketchMode(This,sketchMode,__returnValue) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* ____x_ABI_CLumia_CImaging_CArtistic_CISketchFilterFactory_INTERFACE_DEFINED__ */


/* interface __MIDL_itf_Lumia2EImaging2EArtistic_0000_0046 */
/* [local] */ 

#if !defined(____x_ABI_CLumia_CImaging_CArtistic_CISolarizeFilter_INTERFACE_DEFINED__)
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Lumia_Imaging_Artistic_ISolarizeFilter[] = L"Lumia.Imaging.Artistic.ISolarizeFilter";
#endif /* !defined(____x_ABI_CLumia_CImaging_CArtistic_CISolarizeFilter_INTERFACE_DEFINED__) */


/* interface __MIDL_itf_Lumia2EImaging2EArtistic_0000_0046 */
/* [local] */ 



extern RPC_IF_HANDLE __MIDL_itf_Lumia2EImaging2EArtistic_0000_0046_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_Lumia2EImaging2EArtistic_0000_0046_v0_0_s_ifspec;

#ifndef ____x_ABI_CLumia_CImaging_CArtistic_CISolarizeFilter_INTERFACE_DEFINED__
#define ____x_ABI_CLumia_CImaging_CArtistic_CISolarizeFilter_INTERFACE_DEFINED__

/* interface __x_ABI_CLumia_CImaging_CArtistic_CISolarizeFilter */
/* [uuid][object] */ 



/* interface ABI::Lumia::Imaging::Artistic::ISolarizeFilter */
/* [uuid][object] */ 


EXTERN_C const IID IID___x_ABI_CLumia_CImaging_CArtistic_CISolarizeFilter;

#if defined(__cplusplus) && !defined(CINTERFACE)
    } /* end extern "C" */
    namespace ABI {
        namespace Lumia {
            namespace Imaging {
                namespace Artistic {
                    
                    MIDL_INTERFACE("83B5E216-8219-3F3A-9054-6714396C42B2")
                    ISolarizeFilter : public IInspectable
                    {
                    public:
                        virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_Threshold( 
                            /* [out][retval] */ __RPC__out DOUBLE *__returnValue) = 0;
                        
                        virtual /* [propput] */ HRESULT STDMETHODCALLTYPE put_Threshold( 
                            /* [in] */ DOUBLE value) = 0;
                        
                    };

                    extern const __declspec(selectany) IID & IID_ISolarizeFilter = __uuidof(ISolarizeFilter);

                    
                }  /* end namespace */
            }  /* end namespace */
        }  /* end namespace */
    }  /* end namespace */
    extern "C" { 
    
#else 	/* C style interface */

    typedef struct __x_ABI_CLumia_CImaging_CArtistic_CISolarizeFilterVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            __RPC__in __x_ABI_CLumia_CImaging_CArtistic_CISolarizeFilter * This,
            /* [in] */ __RPC__in REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            __RPC__in __x_ABI_CLumia_CImaging_CArtistic_CISolarizeFilter * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            __RPC__in __x_ABI_CLumia_CImaging_CArtistic_CISolarizeFilter * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetIids )( 
            __RPC__in __x_ABI_CLumia_CImaging_CArtistic_CISolarizeFilter * This,
            /* [out] */ __RPC__out ULONG *iidCount,
            /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
        
        HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )( 
            __RPC__in __x_ABI_CLumia_CImaging_CArtistic_CISolarizeFilter * This,
            /* [out] */ __RPC__deref_out_opt HSTRING *className);
        
        HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )( 
            __RPC__in __x_ABI_CLumia_CImaging_CArtistic_CISolarizeFilter * This,
            /* [out] */ __RPC__out TrustLevel *trustLevel);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_Threshold )( 
            __RPC__in __x_ABI_CLumia_CImaging_CArtistic_CISolarizeFilter * This,
            /* [out][retval] */ __RPC__out DOUBLE *__returnValue);
        
        /* [propput] */ HRESULT ( STDMETHODCALLTYPE *put_Threshold )( 
            __RPC__in __x_ABI_CLumia_CImaging_CArtistic_CISolarizeFilter * This,
            /* [in] */ DOUBLE value);
        
        END_INTERFACE
    } __x_ABI_CLumia_CImaging_CArtistic_CISolarizeFilterVtbl;

    interface __x_ABI_CLumia_CImaging_CArtistic_CISolarizeFilter
    {
        CONST_VTBL struct __x_ABI_CLumia_CImaging_CArtistic_CISolarizeFilterVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define __x_ABI_CLumia_CImaging_CArtistic_CISolarizeFilter_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __x_ABI_CLumia_CImaging_CArtistic_CISolarizeFilter_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __x_ABI_CLumia_CImaging_CArtistic_CISolarizeFilter_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __x_ABI_CLumia_CImaging_CArtistic_CISolarizeFilter_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 

#define __x_ABI_CLumia_CImaging_CArtistic_CISolarizeFilter_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 

#define __x_ABI_CLumia_CImaging_CArtistic_CISolarizeFilter_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 


#define __x_ABI_CLumia_CImaging_CArtistic_CISolarizeFilter_get_Threshold(This,__returnValue)	\
    ( (This)->lpVtbl -> get_Threshold(This,__returnValue) ) 

#define __x_ABI_CLumia_CImaging_CArtistic_CISolarizeFilter_put_Threshold(This,value)	\
    ( (This)->lpVtbl -> put_Threshold(This,value) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* ____x_ABI_CLumia_CImaging_CArtistic_CISolarizeFilter_INTERFACE_DEFINED__ */


/* interface __MIDL_itf_Lumia2EImaging2EArtistic_0000_0047 */
/* [local] */ 

#if !defined(____x_ABI_CLumia_CImaging_CArtistic_CISolarizeFilterFactory_INTERFACE_DEFINED__)
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Lumia_Imaging_Artistic_ISolarizeFilterFactory[] = L"Lumia.Imaging.Artistic.ISolarizeFilterFactory";
#endif /* !defined(____x_ABI_CLumia_CImaging_CArtistic_CISolarizeFilterFactory_INTERFACE_DEFINED__) */


/* interface __MIDL_itf_Lumia2EImaging2EArtistic_0000_0047 */
/* [local] */ 



extern RPC_IF_HANDLE __MIDL_itf_Lumia2EImaging2EArtistic_0000_0047_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_Lumia2EImaging2EArtistic_0000_0047_v0_0_s_ifspec;

#ifndef ____x_ABI_CLumia_CImaging_CArtistic_CISolarizeFilterFactory_INTERFACE_DEFINED__
#define ____x_ABI_CLumia_CImaging_CArtistic_CISolarizeFilterFactory_INTERFACE_DEFINED__

/* interface __x_ABI_CLumia_CImaging_CArtistic_CISolarizeFilterFactory */
/* [uuid][object] */ 



/* interface ABI::Lumia::Imaging::Artistic::ISolarizeFilterFactory */
/* [uuid][object] */ 


EXTERN_C const IID IID___x_ABI_CLumia_CImaging_CArtistic_CISolarizeFilterFactory;

#if defined(__cplusplus) && !defined(CINTERFACE)
    } /* end extern "C" */
    namespace ABI {
        namespace Lumia {
            namespace Imaging {
                namespace Artistic {
                    
                    MIDL_INTERFACE("43F86BA1-D14B-39F7-8E89-7ED2F2F61424")
                    ISolarizeFilterFactory : public IInspectable
                    {
                    public:
                        virtual HRESULT STDMETHODCALLTYPE CreateWithThreshold( 
                            /* [in] */ DOUBLE threshold,
                            /* [out][retval] */ __RPC__deref_out_opt ABI::Lumia::Imaging::Artistic::ISolarizeFilter **__returnValue) = 0;
                        
                    };

                    extern const __declspec(selectany) IID & IID_ISolarizeFilterFactory = __uuidof(ISolarizeFilterFactory);

                    
                }  /* end namespace */
            }  /* end namespace */
        }  /* end namespace */
    }  /* end namespace */
    extern "C" { 
    
#else 	/* C style interface */

    typedef struct __x_ABI_CLumia_CImaging_CArtistic_CISolarizeFilterFactoryVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            __RPC__in __x_ABI_CLumia_CImaging_CArtistic_CISolarizeFilterFactory * This,
            /* [in] */ __RPC__in REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            __RPC__in __x_ABI_CLumia_CImaging_CArtistic_CISolarizeFilterFactory * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            __RPC__in __x_ABI_CLumia_CImaging_CArtistic_CISolarizeFilterFactory * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetIids )( 
            __RPC__in __x_ABI_CLumia_CImaging_CArtistic_CISolarizeFilterFactory * This,
            /* [out] */ __RPC__out ULONG *iidCount,
            /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
        
        HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )( 
            __RPC__in __x_ABI_CLumia_CImaging_CArtistic_CISolarizeFilterFactory * This,
            /* [out] */ __RPC__deref_out_opt HSTRING *className);
        
        HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )( 
            __RPC__in __x_ABI_CLumia_CImaging_CArtistic_CISolarizeFilterFactory * This,
            /* [out] */ __RPC__out TrustLevel *trustLevel);
        
        HRESULT ( STDMETHODCALLTYPE *CreateWithThreshold )( 
            __RPC__in __x_ABI_CLumia_CImaging_CArtistic_CISolarizeFilterFactory * This,
            /* [in] */ DOUBLE threshold,
            /* [out][retval] */ __RPC__deref_out_opt __x_ABI_CLumia_CImaging_CArtistic_CISolarizeFilter **__returnValue);
        
        END_INTERFACE
    } __x_ABI_CLumia_CImaging_CArtistic_CISolarizeFilterFactoryVtbl;

    interface __x_ABI_CLumia_CImaging_CArtistic_CISolarizeFilterFactory
    {
        CONST_VTBL struct __x_ABI_CLumia_CImaging_CArtistic_CISolarizeFilterFactoryVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define __x_ABI_CLumia_CImaging_CArtistic_CISolarizeFilterFactory_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __x_ABI_CLumia_CImaging_CArtistic_CISolarizeFilterFactory_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __x_ABI_CLumia_CImaging_CArtistic_CISolarizeFilterFactory_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __x_ABI_CLumia_CImaging_CArtistic_CISolarizeFilterFactory_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 

#define __x_ABI_CLumia_CImaging_CArtistic_CISolarizeFilterFactory_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 

#define __x_ABI_CLumia_CImaging_CArtistic_CISolarizeFilterFactory_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 


#define __x_ABI_CLumia_CImaging_CArtistic_CISolarizeFilterFactory_CreateWithThreshold(This,threshold,__returnValue)	\
    ( (This)->lpVtbl -> CreateWithThreshold(This,threshold,__returnValue) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* ____x_ABI_CLumia_CImaging_CArtistic_CISolarizeFilterFactory_INTERFACE_DEFINED__ */


/* interface __MIDL_itf_Lumia2EImaging2EArtistic_0000_0048 */
/* [local] */ 

#if !defined(____x_ABI_CLumia_CImaging_CArtistic_CISplitToneRange_INTERFACE_DEFINED__)
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Lumia_Imaging_Artistic_ISplitToneRange[] = L"Lumia.Imaging.Artistic.ISplitToneRange";
#endif /* !defined(____x_ABI_CLumia_CImaging_CArtistic_CISplitToneRange_INTERFACE_DEFINED__) */


/* interface __MIDL_itf_Lumia2EImaging2EArtistic_0000_0048 */
/* [local] */ 



extern RPC_IF_HANDLE __MIDL_itf_Lumia2EImaging2EArtistic_0000_0048_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_Lumia2EImaging2EArtistic_0000_0048_v0_0_s_ifspec;

#ifndef ____x_ABI_CLumia_CImaging_CArtistic_CISplitToneRange_INTERFACE_DEFINED__
#define ____x_ABI_CLumia_CImaging_CArtistic_CISplitToneRange_INTERFACE_DEFINED__

/* interface __x_ABI_CLumia_CImaging_CArtistic_CISplitToneRange */
/* [uuid][object] */ 



/* interface ABI::Lumia::Imaging::Artistic::ISplitToneRange */
/* [uuid][object] */ 


EXTERN_C const IID IID___x_ABI_CLumia_CImaging_CArtistic_CISplitToneRange;

#if defined(__cplusplus) && !defined(CINTERFACE)
    } /* end extern "C" */
    namespace ABI {
        namespace Lumia {
            namespace Imaging {
                namespace Artistic {
                    
                    MIDL_INTERFACE("DB5E4F89-2EA8-3EF0-A416-66B2BBF9D422")
                    ISplitToneRange : public IInspectable
                    {
                    public:
                        virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_LuminanceLow( 
                            /* [out][retval] */ __RPC__out BYTE *__returnValue) = 0;
                        
                        virtual /* [propput] */ HRESULT STDMETHODCALLTYPE put_LuminanceLow( 
                            /* [in] */ BYTE value) = 0;
                        
                        virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_LuminanceHigh( 
                            /* [out][retval] */ __RPC__out BYTE *__returnValue) = 0;
                        
                        virtual /* [propput] */ HRESULT STDMETHODCALLTYPE put_LuminanceHigh( 
                            /* [in] */ BYTE value) = 0;
                        
                        virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_Color( 
                            /* [out][retval] */ __RPC__out ABI::Windows::UI::Color *__returnValue) = 0;
                        
                        virtual /* [propput] */ HRESULT STDMETHODCALLTYPE put_Color( 
                            /* [in] */ ABI::Windows::UI::Color value) = 0;
                        
                    };

                    extern const __declspec(selectany) IID & IID_ISplitToneRange = __uuidof(ISplitToneRange);

                    
                }  /* end namespace */
            }  /* end namespace */
        }  /* end namespace */
    }  /* end namespace */
    extern "C" { 
    
#else 	/* C style interface */

    typedef struct __x_ABI_CLumia_CImaging_CArtistic_CISplitToneRangeVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            __RPC__in __x_ABI_CLumia_CImaging_CArtistic_CISplitToneRange * This,
            /* [in] */ __RPC__in REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            __RPC__in __x_ABI_CLumia_CImaging_CArtistic_CISplitToneRange * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            __RPC__in __x_ABI_CLumia_CImaging_CArtistic_CISplitToneRange * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetIids )( 
            __RPC__in __x_ABI_CLumia_CImaging_CArtistic_CISplitToneRange * This,
            /* [out] */ __RPC__out ULONG *iidCount,
            /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
        
        HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )( 
            __RPC__in __x_ABI_CLumia_CImaging_CArtistic_CISplitToneRange * This,
            /* [out] */ __RPC__deref_out_opt HSTRING *className);
        
        HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )( 
            __RPC__in __x_ABI_CLumia_CImaging_CArtistic_CISplitToneRange * This,
            /* [out] */ __RPC__out TrustLevel *trustLevel);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_LuminanceLow )( 
            __RPC__in __x_ABI_CLumia_CImaging_CArtistic_CISplitToneRange * This,
            /* [out][retval] */ __RPC__out BYTE *__returnValue);
        
        /* [propput] */ HRESULT ( STDMETHODCALLTYPE *put_LuminanceLow )( 
            __RPC__in __x_ABI_CLumia_CImaging_CArtistic_CISplitToneRange * This,
            /* [in] */ BYTE value);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_LuminanceHigh )( 
            __RPC__in __x_ABI_CLumia_CImaging_CArtistic_CISplitToneRange * This,
            /* [out][retval] */ __RPC__out BYTE *__returnValue);
        
        /* [propput] */ HRESULT ( STDMETHODCALLTYPE *put_LuminanceHigh )( 
            __RPC__in __x_ABI_CLumia_CImaging_CArtistic_CISplitToneRange * This,
            /* [in] */ BYTE value);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_Color )( 
            __RPC__in __x_ABI_CLumia_CImaging_CArtistic_CISplitToneRange * This,
            /* [out][retval] */ __RPC__out __x_ABI_CWindows_CUI_CColor *__returnValue);
        
        /* [propput] */ HRESULT ( STDMETHODCALLTYPE *put_Color )( 
            __RPC__in __x_ABI_CLumia_CImaging_CArtistic_CISplitToneRange * This,
            /* [in] */ __x_ABI_CWindows_CUI_CColor value);
        
        END_INTERFACE
    } __x_ABI_CLumia_CImaging_CArtistic_CISplitToneRangeVtbl;

    interface __x_ABI_CLumia_CImaging_CArtistic_CISplitToneRange
    {
        CONST_VTBL struct __x_ABI_CLumia_CImaging_CArtistic_CISplitToneRangeVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define __x_ABI_CLumia_CImaging_CArtistic_CISplitToneRange_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __x_ABI_CLumia_CImaging_CArtistic_CISplitToneRange_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __x_ABI_CLumia_CImaging_CArtistic_CISplitToneRange_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __x_ABI_CLumia_CImaging_CArtistic_CISplitToneRange_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 

#define __x_ABI_CLumia_CImaging_CArtistic_CISplitToneRange_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 

#define __x_ABI_CLumia_CImaging_CArtistic_CISplitToneRange_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 


#define __x_ABI_CLumia_CImaging_CArtistic_CISplitToneRange_get_LuminanceLow(This,__returnValue)	\
    ( (This)->lpVtbl -> get_LuminanceLow(This,__returnValue) ) 

#define __x_ABI_CLumia_CImaging_CArtistic_CISplitToneRange_put_LuminanceLow(This,value)	\
    ( (This)->lpVtbl -> put_LuminanceLow(This,value) ) 

#define __x_ABI_CLumia_CImaging_CArtistic_CISplitToneRange_get_LuminanceHigh(This,__returnValue)	\
    ( (This)->lpVtbl -> get_LuminanceHigh(This,__returnValue) ) 

#define __x_ABI_CLumia_CImaging_CArtistic_CISplitToneRange_put_LuminanceHigh(This,value)	\
    ( (This)->lpVtbl -> put_LuminanceHigh(This,value) ) 

#define __x_ABI_CLumia_CImaging_CArtistic_CISplitToneRange_get_Color(This,__returnValue)	\
    ( (This)->lpVtbl -> get_Color(This,__returnValue) ) 

#define __x_ABI_CLumia_CImaging_CArtistic_CISplitToneRange_put_Color(This,value)	\
    ( (This)->lpVtbl -> put_Color(This,value) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* ____x_ABI_CLumia_CImaging_CArtistic_CISplitToneRange_INTERFACE_DEFINED__ */


/* interface __MIDL_itf_Lumia2EImaging2EArtistic_0000_0049 */
/* [local] */ 

#if !defined(____x_ABI_CLumia_CImaging_CArtistic_CISplitToneRangeFactory_INTERFACE_DEFINED__)
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Lumia_Imaging_Artistic_ISplitToneRangeFactory[] = L"Lumia.Imaging.Artistic.ISplitToneRangeFactory";
#endif /* !defined(____x_ABI_CLumia_CImaging_CArtistic_CISplitToneRangeFactory_INTERFACE_DEFINED__) */


/* interface __MIDL_itf_Lumia2EImaging2EArtistic_0000_0049 */
/* [local] */ 



extern RPC_IF_HANDLE __MIDL_itf_Lumia2EImaging2EArtistic_0000_0049_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_Lumia2EImaging2EArtistic_0000_0049_v0_0_s_ifspec;

#ifndef ____x_ABI_CLumia_CImaging_CArtistic_CISplitToneRangeFactory_INTERFACE_DEFINED__
#define ____x_ABI_CLumia_CImaging_CArtistic_CISplitToneRangeFactory_INTERFACE_DEFINED__

/* interface __x_ABI_CLumia_CImaging_CArtistic_CISplitToneRangeFactory */
/* [uuid][object] */ 



/* interface ABI::Lumia::Imaging::Artistic::ISplitToneRangeFactory */
/* [uuid][object] */ 


EXTERN_C const IID IID___x_ABI_CLumia_CImaging_CArtistic_CISplitToneRangeFactory;

#if defined(__cplusplus) && !defined(CINTERFACE)
    } /* end extern "C" */
    namespace ABI {
        namespace Lumia {
            namespace Imaging {
                namespace Artistic {
                    
                    MIDL_INTERFACE("692656BC-6A78-3B8B-9835-E835E944C077")
                    ISplitToneRangeFactory : public IInspectable
                    {
                    public:
                        virtual HRESULT STDMETHODCALLTYPE CreateWithSettings( 
                            /* [in] */ BYTE luminanceLow,
                            /* [in] */ BYTE luminanceHigh,
                            /* [in] */ ABI::Windows::UI::Color color,
                            /* [out][retval] */ __RPC__deref_out_opt ABI::Lumia::Imaging::Artistic::ISplitToneRange **__returnValue) = 0;
                        
                    };

                    extern const __declspec(selectany) IID & IID_ISplitToneRangeFactory = __uuidof(ISplitToneRangeFactory);

                    
                }  /* end namespace */
            }  /* end namespace */
        }  /* end namespace */
    }  /* end namespace */
    extern "C" { 
    
#else 	/* C style interface */

    typedef struct __x_ABI_CLumia_CImaging_CArtistic_CISplitToneRangeFactoryVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            __RPC__in __x_ABI_CLumia_CImaging_CArtistic_CISplitToneRangeFactory * This,
            /* [in] */ __RPC__in REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            __RPC__in __x_ABI_CLumia_CImaging_CArtistic_CISplitToneRangeFactory * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            __RPC__in __x_ABI_CLumia_CImaging_CArtistic_CISplitToneRangeFactory * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetIids )( 
            __RPC__in __x_ABI_CLumia_CImaging_CArtistic_CISplitToneRangeFactory * This,
            /* [out] */ __RPC__out ULONG *iidCount,
            /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
        
        HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )( 
            __RPC__in __x_ABI_CLumia_CImaging_CArtistic_CISplitToneRangeFactory * This,
            /* [out] */ __RPC__deref_out_opt HSTRING *className);
        
        HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )( 
            __RPC__in __x_ABI_CLumia_CImaging_CArtistic_CISplitToneRangeFactory * This,
            /* [out] */ __RPC__out TrustLevel *trustLevel);
        
        HRESULT ( STDMETHODCALLTYPE *CreateWithSettings )( 
            __RPC__in __x_ABI_CLumia_CImaging_CArtistic_CISplitToneRangeFactory * This,
            /* [in] */ BYTE luminanceLow,
            /* [in] */ BYTE luminanceHigh,
            /* [in] */ __x_ABI_CWindows_CUI_CColor color,
            /* [out][retval] */ __RPC__deref_out_opt __x_ABI_CLumia_CImaging_CArtistic_CISplitToneRange **__returnValue);
        
        END_INTERFACE
    } __x_ABI_CLumia_CImaging_CArtistic_CISplitToneRangeFactoryVtbl;

    interface __x_ABI_CLumia_CImaging_CArtistic_CISplitToneRangeFactory
    {
        CONST_VTBL struct __x_ABI_CLumia_CImaging_CArtistic_CISplitToneRangeFactoryVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define __x_ABI_CLumia_CImaging_CArtistic_CISplitToneRangeFactory_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __x_ABI_CLumia_CImaging_CArtistic_CISplitToneRangeFactory_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __x_ABI_CLumia_CImaging_CArtistic_CISplitToneRangeFactory_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __x_ABI_CLumia_CImaging_CArtistic_CISplitToneRangeFactory_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 

#define __x_ABI_CLumia_CImaging_CArtistic_CISplitToneRangeFactory_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 

#define __x_ABI_CLumia_CImaging_CArtistic_CISplitToneRangeFactory_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 


#define __x_ABI_CLumia_CImaging_CArtistic_CISplitToneRangeFactory_CreateWithSettings(This,luminanceLow,luminanceHigh,color,__returnValue)	\
    ( (This)->lpVtbl -> CreateWithSettings(This,luminanceLow,luminanceHigh,color,__returnValue) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* ____x_ABI_CLumia_CImaging_CArtistic_CISplitToneRangeFactory_INTERFACE_DEFINED__ */


/* interface __MIDL_itf_Lumia2EImaging2EArtistic_0000_0050 */
/* [local] */ 

#if !defined(____x_ABI_CLumia_CImaging_CArtistic_CISplitToneFilter_INTERFACE_DEFINED__)
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Lumia_Imaging_Artistic_ISplitToneFilter[] = L"Lumia.Imaging.Artistic.ISplitToneFilter";
#endif /* !defined(____x_ABI_CLumia_CImaging_CArtistic_CISplitToneFilter_INTERFACE_DEFINED__) */


/* interface __MIDL_itf_Lumia2EImaging2EArtistic_0000_0050 */
/* [local] */ 



extern RPC_IF_HANDLE __MIDL_itf_Lumia2EImaging2EArtistic_0000_0050_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_Lumia2EImaging2EArtistic_0000_0050_v0_0_s_ifspec;

#ifndef ____x_ABI_CLumia_CImaging_CArtistic_CISplitToneFilter_INTERFACE_DEFINED__
#define ____x_ABI_CLumia_CImaging_CArtistic_CISplitToneFilter_INTERFACE_DEFINED__

/* interface __x_ABI_CLumia_CImaging_CArtistic_CISplitToneFilter */
/* [uuid][object] */ 



/* interface ABI::Lumia::Imaging::Artistic::ISplitToneFilter */
/* [uuid][object] */ 


EXTERN_C const IID IID___x_ABI_CLumia_CImaging_CArtistic_CISplitToneFilter;

#if defined(__cplusplus) && !defined(CINTERFACE)
    } /* end extern "C" */
    namespace ABI {
        namespace Lumia {
            namespace Imaging {
                namespace Artistic {
                    
                    MIDL_INTERFACE("82CBAA79-88A7-357F-BC6D-CC94FB38111B")
                    ISplitToneFilter : public IInspectable
                    {
                    public:
                        virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_SplitToneRanges( 
                            /* [out][retval] */ __RPC__deref_out_opt __FIVector_1_Lumia__CImaging__CArtistic__CSplitToneRange **__returnValue) = 0;
                        
                        virtual /* [propput] */ HRESULT STDMETHODCALLTYPE put_SplitToneRanges( 
                            /* [in] */ __RPC__in_opt __FIVector_1_Lumia__CImaging__CArtistic__CSplitToneRange *value) = 0;
                        
                    };

                    extern const __declspec(selectany) IID & IID_ISplitToneFilter = __uuidof(ISplitToneFilter);

                    
                }  /* end namespace */
            }  /* end namespace */
        }  /* end namespace */
    }  /* end namespace */
    extern "C" { 
    
#else 	/* C style interface */

    typedef struct __x_ABI_CLumia_CImaging_CArtistic_CISplitToneFilterVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            __RPC__in __x_ABI_CLumia_CImaging_CArtistic_CISplitToneFilter * This,
            /* [in] */ __RPC__in REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            __RPC__in __x_ABI_CLumia_CImaging_CArtistic_CISplitToneFilter * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            __RPC__in __x_ABI_CLumia_CImaging_CArtistic_CISplitToneFilter * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetIids )( 
            __RPC__in __x_ABI_CLumia_CImaging_CArtistic_CISplitToneFilter * This,
            /* [out] */ __RPC__out ULONG *iidCount,
            /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
        
        HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )( 
            __RPC__in __x_ABI_CLumia_CImaging_CArtistic_CISplitToneFilter * This,
            /* [out] */ __RPC__deref_out_opt HSTRING *className);
        
        HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )( 
            __RPC__in __x_ABI_CLumia_CImaging_CArtistic_CISplitToneFilter * This,
            /* [out] */ __RPC__out TrustLevel *trustLevel);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_SplitToneRanges )( 
            __RPC__in __x_ABI_CLumia_CImaging_CArtistic_CISplitToneFilter * This,
            /* [out][retval] */ __RPC__deref_out_opt __FIVector_1_Lumia__CImaging__CArtistic__CSplitToneRange **__returnValue);
        
        /* [propput] */ HRESULT ( STDMETHODCALLTYPE *put_SplitToneRanges )( 
            __RPC__in __x_ABI_CLumia_CImaging_CArtistic_CISplitToneFilter * This,
            /* [in] */ __RPC__in_opt __FIVector_1_Lumia__CImaging__CArtistic__CSplitToneRange *value);
        
        END_INTERFACE
    } __x_ABI_CLumia_CImaging_CArtistic_CISplitToneFilterVtbl;

    interface __x_ABI_CLumia_CImaging_CArtistic_CISplitToneFilter
    {
        CONST_VTBL struct __x_ABI_CLumia_CImaging_CArtistic_CISplitToneFilterVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define __x_ABI_CLumia_CImaging_CArtistic_CISplitToneFilter_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __x_ABI_CLumia_CImaging_CArtistic_CISplitToneFilter_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __x_ABI_CLumia_CImaging_CArtistic_CISplitToneFilter_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __x_ABI_CLumia_CImaging_CArtistic_CISplitToneFilter_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 

#define __x_ABI_CLumia_CImaging_CArtistic_CISplitToneFilter_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 

#define __x_ABI_CLumia_CImaging_CArtistic_CISplitToneFilter_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 


#define __x_ABI_CLumia_CImaging_CArtistic_CISplitToneFilter_get_SplitToneRanges(This,__returnValue)	\
    ( (This)->lpVtbl -> get_SplitToneRanges(This,__returnValue) ) 

#define __x_ABI_CLumia_CImaging_CArtistic_CISplitToneFilter_put_SplitToneRanges(This,value)	\
    ( (This)->lpVtbl -> put_SplitToneRanges(This,value) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* ____x_ABI_CLumia_CImaging_CArtistic_CISplitToneFilter_INTERFACE_DEFINED__ */


/* interface __MIDL_itf_Lumia2EImaging2EArtistic_0000_0051 */
/* [local] */ 

#if !defined(____x_ABI_CLumia_CImaging_CArtistic_CISplitToneFilterFactory_INTERFACE_DEFINED__)
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Lumia_Imaging_Artistic_ISplitToneFilterFactory[] = L"Lumia.Imaging.Artistic.ISplitToneFilterFactory";
#endif /* !defined(____x_ABI_CLumia_CImaging_CArtistic_CISplitToneFilterFactory_INTERFACE_DEFINED__) */


/* interface __MIDL_itf_Lumia2EImaging2EArtistic_0000_0051 */
/* [local] */ 



extern RPC_IF_HANDLE __MIDL_itf_Lumia2EImaging2EArtistic_0000_0051_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_Lumia2EImaging2EArtistic_0000_0051_v0_0_s_ifspec;

#ifndef ____x_ABI_CLumia_CImaging_CArtistic_CISplitToneFilterFactory_INTERFACE_DEFINED__
#define ____x_ABI_CLumia_CImaging_CArtistic_CISplitToneFilterFactory_INTERFACE_DEFINED__

/* interface __x_ABI_CLumia_CImaging_CArtistic_CISplitToneFilterFactory */
/* [uuid][object] */ 



/* interface ABI::Lumia::Imaging::Artistic::ISplitToneFilterFactory */
/* [uuid][object] */ 


EXTERN_C const IID IID___x_ABI_CLumia_CImaging_CArtistic_CISplitToneFilterFactory;

#if defined(__cplusplus) && !defined(CINTERFACE)
    } /* end extern "C" */
    namespace ABI {
        namespace Lumia {
            namespace Imaging {
                namespace Artistic {
                    
                    MIDL_INTERFACE("3E9C1108-6577-3D2D-AC31-6C314A2DE797")
                    ISplitToneFilterFactory : public IInspectable
                    {
                    public:
                        virtual HRESULT STDMETHODCALLTYPE CreateWithRanges( 
                            /* [in] */ __RPC__in_opt __FIVector_1_Lumia__CImaging__CArtistic__CSplitToneRange *splitToneRanges,
                            /* [out][retval] */ __RPC__deref_out_opt ABI::Lumia::Imaging::Artistic::ISplitToneFilter **__returnValue) = 0;
                        
                    };

                    extern const __declspec(selectany) IID & IID_ISplitToneFilterFactory = __uuidof(ISplitToneFilterFactory);

                    
                }  /* end namespace */
            }  /* end namespace */
        }  /* end namespace */
    }  /* end namespace */
    extern "C" { 
    
#else 	/* C style interface */

    typedef struct __x_ABI_CLumia_CImaging_CArtistic_CISplitToneFilterFactoryVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            __RPC__in __x_ABI_CLumia_CImaging_CArtistic_CISplitToneFilterFactory * This,
            /* [in] */ __RPC__in REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            __RPC__in __x_ABI_CLumia_CImaging_CArtistic_CISplitToneFilterFactory * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            __RPC__in __x_ABI_CLumia_CImaging_CArtistic_CISplitToneFilterFactory * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetIids )( 
            __RPC__in __x_ABI_CLumia_CImaging_CArtistic_CISplitToneFilterFactory * This,
            /* [out] */ __RPC__out ULONG *iidCount,
            /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
        
        HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )( 
            __RPC__in __x_ABI_CLumia_CImaging_CArtistic_CISplitToneFilterFactory * This,
            /* [out] */ __RPC__deref_out_opt HSTRING *className);
        
        HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )( 
            __RPC__in __x_ABI_CLumia_CImaging_CArtistic_CISplitToneFilterFactory * This,
            /* [out] */ __RPC__out TrustLevel *trustLevel);
        
        HRESULT ( STDMETHODCALLTYPE *CreateWithRanges )( 
            __RPC__in __x_ABI_CLumia_CImaging_CArtistic_CISplitToneFilterFactory * This,
            /* [in] */ __RPC__in_opt __FIVector_1_Lumia__CImaging__CArtistic__CSplitToneRange *splitToneRanges,
            /* [out][retval] */ __RPC__deref_out_opt __x_ABI_CLumia_CImaging_CArtistic_CISplitToneFilter **__returnValue);
        
        END_INTERFACE
    } __x_ABI_CLumia_CImaging_CArtistic_CISplitToneFilterFactoryVtbl;

    interface __x_ABI_CLumia_CImaging_CArtistic_CISplitToneFilterFactory
    {
        CONST_VTBL struct __x_ABI_CLumia_CImaging_CArtistic_CISplitToneFilterFactoryVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define __x_ABI_CLumia_CImaging_CArtistic_CISplitToneFilterFactory_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __x_ABI_CLumia_CImaging_CArtistic_CISplitToneFilterFactory_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __x_ABI_CLumia_CImaging_CArtistic_CISplitToneFilterFactory_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __x_ABI_CLumia_CImaging_CArtistic_CISplitToneFilterFactory_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 

#define __x_ABI_CLumia_CImaging_CArtistic_CISplitToneFilterFactory_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 

#define __x_ABI_CLumia_CImaging_CArtistic_CISplitToneFilterFactory_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 


#define __x_ABI_CLumia_CImaging_CArtistic_CISplitToneFilterFactory_CreateWithRanges(This,splitToneRanges,__returnValue)	\
    ( (This)->lpVtbl -> CreateWithRanges(This,splitToneRanges,__returnValue) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* ____x_ABI_CLumia_CImaging_CArtistic_CISplitToneFilterFactory_INTERFACE_DEFINED__ */


/* interface __MIDL_itf_Lumia2EImaging2EArtistic_0000_0052 */
/* [local] */ 

#if !defined(____x_ABI_CLumia_CImaging_CArtistic_CISpotlightFilter_INTERFACE_DEFINED__)
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Lumia_Imaging_Artistic_ISpotlightFilter[] = L"Lumia.Imaging.Artistic.ISpotlightFilter";
#endif /* !defined(____x_ABI_CLumia_CImaging_CArtistic_CISpotlightFilter_INTERFACE_DEFINED__) */


/* interface __MIDL_itf_Lumia2EImaging2EArtistic_0000_0052 */
/* [local] */ 



extern RPC_IF_HANDLE __MIDL_itf_Lumia2EImaging2EArtistic_0000_0052_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_Lumia2EImaging2EArtistic_0000_0052_v0_0_s_ifspec;

#ifndef ____x_ABI_CLumia_CImaging_CArtistic_CISpotlightFilter_INTERFACE_DEFINED__
#define ____x_ABI_CLumia_CImaging_CArtistic_CISpotlightFilter_INTERFACE_DEFINED__

/* interface __x_ABI_CLumia_CImaging_CArtistic_CISpotlightFilter */
/* [uuid][object] */ 



/* interface ABI::Lumia::Imaging::Artistic::ISpotlightFilter */
/* [uuid][object] */ 


EXTERN_C const IID IID___x_ABI_CLumia_CImaging_CArtistic_CISpotlightFilter;

#if defined(__cplusplus) && !defined(CINTERFACE)
    } /* end extern "C" */
    namespace ABI {
        namespace Lumia {
            namespace Imaging {
                namespace Artistic {
                    
                    MIDL_INTERFACE("E8DAAA20-D7BA-3A68-B68E-AB9D700190DF")
                    ISpotlightFilter : public IInspectable
                    {
                    public:
                        virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_Position( 
                            /* [out][retval] */ __RPC__out ABI::Windows::Foundation::Point *__returnValue) = 0;
                        
                        virtual /* [propput] */ HRESULT STDMETHODCALLTYPE put_Position( 
                            /* [in] */ ABI::Windows::Foundation::Point value) = 0;
                        
                        virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_Radius( 
                            /* [out][retval] */ __RPC__out INT32 *__returnValue) = 0;
                        
                        virtual /* [propput] */ HRESULT STDMETHODCALLTYPE put_Radius( 
                            /* [in] */ INT32 value) = 0;
                        
                        virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_TransitionSize( 
                            /* [out][retval] */ __RPC__out DOUBLE *__returnValue) = 0;
                        
                        virtual /* [propput] */ HRESULT STDMETHODCALLTYPE put_TransitionSize( 
                            /* [in] */ DOUBLE value) = 0;
                        
                    };

                    extern const __declspec(selectany) IID & IID_ISpotlightFilter = __uuidof(ISpotlightFilter);

                    
                }  /* end namespace */
            }  /* end namespace */
        }  /* end namespace */
    }  /* end namespace */
    extern "C" { 
    
#else 	/* C style interface */

    typedef struct __x_ABI_CLumia_CImaging_CArtistic_CISpotlightFilterVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            __RPC__in __x_ABI_CLumia_CImaging_CArtistic_CISpotlightFilter * This,
            /* [in] */ __RPC__in REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            __RPC__in __x_ABI_CLumia_CImaging_CArtistic_CISpotlightFilter * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            __RPC__in __x_ABI_CLumia_CImaging_CArtistic_CISpotlightFilter * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetIids )( 
            __RPC__in __x_ABI_CLumia_CImaging_CArtistic_CISpotlightFilter * This,
            /* [out] */ __RPC__out ULONG *iidCount,
            /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
        
        HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )( 
            __RPC__in __x_ABI_CLumia_CImaging_CArtistic_CISpotlightFilter * This,
            /* [out] */ __RPC__deref_out_opt HSTRING *className);
        
        HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )( 
            __RPC__in __x_ABI_CLumia_CImaging_CArtistic_CISpotlightFilter * This,
            /* [out] */ __RPC__out TrustLevel *trustLevel);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_Position )( 
            __RPC__in __x_ABI_CLumia_CImaging_CArtistic_CISpotlightFilter * This,
            /* [out][retval] */ __RPC__out __x_ABI_CWindows_CFoundation_CPoint *__returnValue);
        
        /* [propput] */ HRESULT ( STDMETHODCALLTYPE *put_Position )( 
            __RPC__in __x_ABI_CLumia_CImaging_CArtistic_CISpotlightFilter * This,
            /* [in] */ __x_ABI_CWindows_CFoundation_CPoint value);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_Radius )( 
            __RPC__in __x_ABI_CLumia_CImaging_CArtistic_CISpotlightFilter * This,
            /* [out][retval] */ __RPC__out INT32 *__returnValue);
        
        /* [propput] */ HRESULT ( STDMETHODCALLTYPE *put_Radius )( 
            __RPC__in __x_ABI_CLumia_CImaging_CArtistic_CISpotlightFilter * This,
            /* [in] */ INT32 value);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_TransitionSize )( 
            __RPC__in __x_ABI_CLumia_CImaging_CArtistic_CISpotlightFilter * This,
            /* [out][retval] */ __RPC__out DOUBLE *__returnValue);
        
        /* [propput] */ HRESULT ( STDMETHODCALLTYPE *put_TransitionSize )( 
            __RPC__in __x_ABI_CLumia_CImaging_CArtistic_CISpotlightFilter * This,
            /* [in] */ DOUBLE value);
        
        END_INTERFACE
    } __x_ABI_CLumia_CImaging_CArtistic_CISpotlightFilterVtbl;

    interface __x_ABI_CLumia_CImaging_CArtistic_CISpotlightFilter
    {
        CONST_VTBL struct __x_ABI_CLumia_CImaging_CArtistic_CISpotlightFilterVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define __x_ABI_CLumia_CImaging_CArtistic_CISpotlightFilter_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __x_ABI_CLumia_CImaging_CArtistic_CISpotlightFilter_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __x_ABI_CLumia_CImaging_CArtistic_CISpotlightFilter_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __x_ABI_CLumia_CImaging_CArtistic_CISpotlightFilter_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 

#define __x_ABI_CLumia_CImaging_CArtistic_CISpotlightFilter_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 

#define __x_ABI_CLumia_CImaging_CArtistic_CISpotlightFilter_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 


#define __x_ABI_CLumia_CImaging_CArtistic_CISpotlightFilter_get_Position(This,__returnValue)	\
    ( (This)->lpVtbl -> get_Position(This,__returnValue) ) 

#define __x_ABI_CLumia_CImaging_CArtistic_CISpotlightFilter_put_Position(This,value)	\
    ( (This)->lpVtbl -> put_Position(This,value) ) 

#define __x_ABI_CLumia_CImaging_CArtistic_CISpotlightFilter_get_Radius(This,__returnValue)	\
    ( (This)->lpVtbl -> get_Radius(This,__returnValue) ) 

#define __x_ABI_CLumia_CImaging_CArtistic_CISpotlightFilter_put_Radius(This,value)	\
    ( (This)->lpVtbl -> put_Radius(This,value) ) 

#define __x_ABI_CLumia_CImaging_CArtistic_CISpotlightFilter_get_TransitionSize(This,__returnValue)	\
    ( (This)->lpVtbl -> get_TransitionSize(This,__returnValue) ) 

#define __x_ABI_CLumia_CImaging_CArtistic_CISpotlightFilter_put_TransitionSize(This,value)	\
    ( (This)->lpVtbl -> put_TransitionSize(This,value) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* ____x_ABI_CLumia_CImaging_CArtistic_CISpotlightFilter_INTERFACE_DEFINED__ */


/* interface __MIDL_itf_Lumia2EImaging2EArtistic_0000_0053 */
/* [local] */ 

#if !defined(____x_ABI_CLumia_CImaging_CArtistic_CISpotlightFilterFactory_INTERFACE_DEFINED__)
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Lumia_Imaging_Artistic_ISpotlightFilterFactory[] = L"Lumia.Imaging.Artistic.ISpotlightFilterFactory";
#endif /* !defined(____x_ABI_CLumia_CImaging_CArtistic_CISpotlightFilterFactory_INTERFACE_DEFINED__) */


/* interface __MIDL_itf_Lumia2EImaging2EArtistic_0000_0053 */
/* [local] */ 



extern RPC_IF_HANDLE __MIDL_itf_Lumia2EImaging2EArtistic_0000_0053_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_Lumia2EImaging2EArtistic_0000_0053_v0_0_s_ifspec;

#ifndef ____x_ABI_CLumia_CImaging_CArtistic_CISpotlightFilterFactory_INTERFACE_DEFINED__
#define ____x_ABI_CLumia_CImaging_CArtistic_CISpotlightFilterFactory_INTERFACE_DEFINED__

/* interface __x_ABI_CLumia_CImaging_CArtistic_CISpotlightFilterFactory */
/* [uuid][object] */ 



/* interface ABI::Lumia::Imaging::Artistic::ISpotlightFilterFactory */
/* [uuid][object] */ 


EXTERN_C const IID IID___x_ABI_CLumia_CImaging_CArtistic_CISpotlightFilterFactory;

#if defined(__cplusplus) && !defined(CINTERFACE)
    } /* end extern "C" */
    namespace ABI {
        namespace Lumia {
            namespace Imaging {
                namespace Artistic {
                    
                    MIDL_INTERFACE("985352C6-A979-34F8-A487-BE7801D7582A")
                    ISpotlightFilterFactory : public IInspectable
                    {
                    public:
                        virtual HRESULT STDMETHODCALLTYPE CreateWithSettings( 
                            /* [in] */ ABI::Windows::Foundation::Point position,
                            /* [in] */ INT32 radius,
                            /* [in] */ DOUBLE transitionSize,
                            /* [out][retval] */ __RPC__deref_out_opt ABI::Lumia::Imaging::Artistic::ISpotlightFilter **__returnValue) = 0;
                        
                    };

                    extern const __declspec(selectany) IID & IID_ISpotlightFilterFactory = __uuidof(ISpotlightFilterFactory);

                    
                }  /* end namespace */
            }  /* end namespace */
        }  /* end namespace */
    }  /* end namespace */
    extern "C" { 
    
#else 	/* C style interface */

    typedef struct __x_ABI_CLumia_CImaging_CArtistic_CISpotlightFilterFactoryVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            __RPC__in __x_ABI_CLumia_CImaging_CArtistic_CISpotlightFilterFactory * This,
            /* [in] */ __RPC__in REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            __RPC__in __x_ABI_CLumia_CImaging_CArtistic_CISpotlightFilterFactory * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            __RPC__in __x_ABI_CLumia_CImaging_CArtistic_CISpotlightFilterFactory * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetIids )( 
            __RPC__in __x_ABI_CLumia_CImaging_CArtistic_CISpotlightFilterFactory * This,
            /* [out] */ __RPC__out ULONG *iidCount,
            /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
        
        HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )( 
            __RPC__in __x_ABI_CLumia_CImaging_CArtistic_CISpotlightFilterFactory * This,
            /* [out] */ __RPC__deref_out_opt HSTRING *className);
        
        HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )( 
            __RPC__in __x_ABI_CLumia_CImaging_CArtistic_CISpotlightFilterFactory * This,
            /* [out] */ __RPC__out TrustLevel *trustLevel);
        
        HRESULT ( STDMETHODCALLTYPE *CreateWithSettings )( 
            __RPC__in __x_ABI_CLumia_CImaging_CArtistic_CISpotlightFilterFactory * This,
            /* [in] */ __x_ABI_CWindows_CFoundation_CPoint position,
            /* [in] */ INT32 radius,
            /* [in] */ DOUBLE transitionSize,
            /* [out][retval] */ __RPC__deref_out_opt __x_ABI_CLumia_CImaging_CArtistic_CISpotlightFilter **__returnValue);
        
        END_INTERFACE
    } __x_ABI_CLumia_CImaging_CArtistic_CISpotlightFilterFactoryVtbl;

    interface __x_ABI_CLumia_CImaging_CArtistic_CISpotlightFilterFactory
    {
        CONST_VTBL struct __x_ABI_CLumia_CImaging_CArtistic_CISpotlightFilterFactoryVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define __x_ABI_CLumia_CImaging_CArtistic_CISpotlightFilterFactory_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __x_ABI_CLumia_CImaging_CArtistic_CISpotlightFilterFactory_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __x_ABI_CLumia_CImaging_CArtistic_CISpotlightFilterFactory_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __x_ABI_CLumia_CImaging_CArtistic_CISpotlightFilterFactory_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 

#define __x_ABI_CLumia_CImaging_CArtistic_CISpotlightFilterFactory_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 

#define __x_ABI_CLumia_CImaging_CArtistic_CISpotlightFilterFactory_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 


#define __x_ABI_CLumia_CImaging_CArtistic_CISpotlightFilterFactory_CreateWithSettings(This,position,radius,transitionSize,__returnValue)	\
    ( (This)->lpVtbl -> CreateWithSettings(This,position,radius,transitionSize,__returnValue) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* ____x_ABI_CLumia_CImaging_CArtistic_CISpotlightFilterFactory_INTERFACE_DEFINED__ */


/* interface __MIDL_itf_Lumia2EImaging2EArtistic_0000_0054 */
/* [local] */ 

#if !defined(____x_ABI_CLumia_CImaging_CArtistic_CIStampFilter_INTERFACE_DEFINED__)
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Lumia_Imaging_Artistic_IStampFilter[] = L"Lumia.Imaging.Artistic.IStampFilter";
#endif /* !defined(____x_ABI_CLumia_CImaging_CArtistic_CIStampFilter_INTERFACE_DEFINED__) */


/* interface __MIDL_itf_Lumia2EImaging2EArtistic_0000_0054 */
/* [local] */ 



extern RPC_IF_HANDLE __MIDL_itf_Lumia2EImaging2EArtistic_0000_0054_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_Lumia2EImaging2EArtistic_0000_0054_v0_0_s_ifspec;

#ifndef ____x_ABI_CLumia_CImaging_CArtistic_CIStampFilter_INTERFACE_DEFINED__
#define ____x_ABI_CLumia_CImaging_CArtistic_CIStampFilter_INTERFACE_DEFINED__

/* interface __x_ABI_CLumia_CImaging_CArtistic_CIStampFilter */
/* [uuid][object] */ 



/* interface ABI::Lumia::Imaging::Artistic::IStampFilter */
/* [uuid][object] */ 


EXTERN_C const IID IID___x_ABI_CLumia_CImaging_CArtistic_CIStampFilter;

#if defined(__cplusplus) && !defined(CINTERFACE)
    } /* end extern "C" */
    namespace ABI {
        namespace Lumia {
            namespace Imaging {
                namespace Artistic {
                    
                    MIDL_INTERFACE("9F96E62B-473F-3879-9F0F-26D1075ECEAA")
                    IStampFilter : public IInspectable
                    {
                    public:
                        virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_Smoothness( 
                            /* [out][retval] */ __RPC__out INT32 *__returnValue) = 0;
                        
                        virtual /* [propput] */ HRESULT STDMETHODCALLTYPE put_Smoothness( 
                            /* [in] */ INT32 value) = 0;
                        
                        virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_Threshold( 
                            /* [out][retval] */ __RPC__out DOUBLE *__returnValue) = 0;
                        
                        virtual /* [propput] */ HRESULT STDMETHODCALLTYPE put_Threshold( 
                            /* [in] */ DOUBLE value) = 0;
                        
                    };

                    extern const __declspec(selectany) IID & IID_IStampFilter = __uuidof(IStampFilter);

                    
                }  /* end namespace */
            }  /* end namespace */
        }  /* end namespace */
    }  /* end namespace */
    extern "C" { 
    
#else 	/* C style interface */

    typedef struct __x_ABI_CLumia_CImaging_CArtistic_CIStampFilterVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            __RPC__in __x_ABI_CLumia_CImaging_CArtistic_CIStampFilter * This,
            /* [in] */ __RPC__in REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            __RPC__in __x_ABI_CLumia_CImaging_CArtistic_CIStampFilter * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            __RPC__in __x_ABI_CLumia_CImaging_CArtistic_CIStampFilter * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetIids )( 
            __RPC__in __x_ABI_CLumia_CImaging_CArtistic_CIStampFilter * This,
            /* [out] */ __RPC__out ULONG *iidCount,
            /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
        
        HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )( 
            __RPC__in __x_ABI_CLumia_CImaging_CArtistic_CIStampFilter * This,
            /* [out] */ __RPC__deref_out_opt HSTRING *className);
        
        HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )( 
            __RPC__in __x_ABI_CLumia_CImaging_CArtistic_CIStampFilter * This,
            /* [out] */ __RPC__out TrustLevel *trustLevel);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_Smoothness )( 
            __RPC__in __x_ABI_CLumia_CImaging_CArtistic_CIStampFilter * This,
            /* [out][retval] */ __RPC__out INT32 *__returnValue);
        
        /* [propput] */ HRESULT ( STDMETHODCALLTYPE *put_Smoothness )( 
            __RPC__in __x_ABI_CLumia_CImaging_CArtistic_CIStampFilter * This,
            /* [in] */ INT32 value);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_Threshold )( 
            __RPC__in __x_ABI_CLumia_CImaging_CArtistic_CIStampFilter * This,
            /* [out][retval] */ __RPC__out DOUBLE *__returnValue);
        
        /* [propput] */ HRESULT ( STDMETHODCALLTYPE *put_Threshold )( 
            __RPC__in __x_ABI_CLumia_CImaging_CArtistic_CIStampFilter * This,
            /* [in] */ DOUBLE value);
        
        END_INTERFACE
    } __x_ABI_CLumia_CImaging_CArtistic_CIStampFilterVtbl;

    interface __x_ABI_CLumia_CImaging_CArtistic_CIStampFilter
    {
        CONST_VTBL struct __x_ABI_CLumia_CImaging_CArtistic_CIStampFilterVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define __x_ABI_CLumia_CImaging_CArtistic_CIStampFilter_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __x_ABI_CLumia_CImaging_CArtistic_CIStampFilter_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __x_ABI_CLumia_CImaging_CArtistic_CIStampFilter_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __x_ABI_CLumia_CImaging_CArtistic_CIStampFilter_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 

#define __x_ABI_CLumia_CImaging_CArtistic_CIStampFilter_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 

#define __x_ABI_CLumia_CImaging_CArtistic_CIStampFilter_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 


#define __x_ABI_CLumia_CImaging_CArtistic_CIStampFilter_get_Smoothness(This,__returnValue)	\
    ( (This)->lpVtbl -> get_Smoothness(This,__returnValue) ) 

#define __x_ABI_CLumia_CImaging_CArtistic_CIStampFilter_put_Smoothness(This,value)	\
    ( (This)->lpVtbl -> put_Smoothness(This,value) ) 

#define __x_ABI_CLumia_CImaging_CArtistic_CIStampFilter_get_Threshold(This,__returnValue)	\
    ( (This)->lpVtbl -> get_Threshold(This,__returnValue) ) 

#define __x_ABI_CLumia_CImaging_CArtistic_CIStampFilter_put_Threshold(This,value)	\
    ( (This)->lpVtbl -> put_Threshold(This,value) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* ____x_ABI_CLumia_CImaging_CArtistic_CIStampFilter_INTERFACE_DEFINED__ */


/* interface __MIDL_itf_Lumia2EImaging2EArtistic_0000_0055 */
/* [local] */ 

#if !defined(____x_ABI_CLumia_CImaging_CArtistic_CIStampFilterFactory_INTERFACE_DEFINED__)
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Lumia_Imaging_Artistic_IStampFilterFactory[] = L"Lumia.Imaging.Artistic.IStampFilterFactory";
#endif /* !defined(____x_ABI_CLumia_CImaging_CArtistic_CIStampFilterFactory_INTERFACE_DEFINED__) */


/* interface __MIDL_itf_Lumia2EImaging2EArtistic_0000_0055 */
/* [local] */ 



extern RPC_IF_HANDLE __MIDL_itf_Lumia2EImaging2EArtistic_0000_0055_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_Lumia2EImaging2EArtistic_0000_0055_v0_0_s_ifspec;

#ifndef ____x_ABI_CLumia_CImaging_CArtistic_CIStampFilterFactory_INTERFACE_DEFINED__
#define ____x_ABI_CLumia_CImaging_CArtistic_CIStampFilterFactory_INTERFACE_DEFINED__

/* interface __x_ABI_CLumia_CImaging_CArtistic_CIStampFilterFactory */
/* [uuid][object] */ 



/* interface ABI::Lumia::Imaging::Artistic::IStampFilterFactory */
/* [uuid][object] */ 


EXTERN_C const IID IID___x_ABI_CLumia_CImaging_CArtistic_CIStampFilterFactory;

#if defined(__cplusplus) && !defined(CINTERFACE)
    } /* end extern "C" */
    namespace ABI {
        namespace Lumia {
            namespace Imaging {
                namespace Artistic {
                    
                    MIDL_INTERFACE("8F76A75A-383B-3F97-A7F0-BD24300EBDBF")
                    IStampFilterFactory : public IInspectable
                    {
                    public:
                        virtual HRESULT STDMETHODCALLTYPE CreateWithSettings( 
                            /* [in] */ INT32 smoothness,
                            /* [in] */ DOUBLE threshold,
                            /* [out][retval] */ __RPC__deref_out_opt ABI::Lumia::Imaging::Artistic::IStampFilter **__returnValue) = 0;
                        
                    };

                    extern const __declspec(selectany) IID & IID_IStampFilterFactory = __uuidof(IStampFilterFactory);

                    
                }  /* end namespace */
            }  /* end namespace */
        }  /* end namespace */
    }  /* end namespace */
    extern "C" { 
    
#else 	/* C style interface */

    typedef struct __x_ABI_CLumia_CImaging_CArtistic_CIStampFilterFactoryVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            __RPC__in __x_ABI_CLumia_CImaging_CArtistic_CIStampFilterFactory * This,
            /* [in] */ __RPC__in REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            __RPC__in __x_ABI_CLumia_CImaging_CArtistic_CIStampFilterFactory * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            __RPC__in __x_ABI_CLumia_CImaging_CArtistic_CIStampFilterFactory * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetIids )( 
            __RPC__in __x_ABI_CLumia_CImaging_CArtistic_CIStampFilterFactory * This,
            /* [out] */ __RPC__out ULONG *iidCount,
            /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
        
        HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )( 
            __RPC__in __x_ABI_CLumia_CImaging_CArtistic_CIStampFilterFactory * This,
            /* [out] */ __RPC__deref_out_opt HSTRING *className);
        
        HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )( 
            __RPC__in __x_ABI_CLumia_CImaging_CArtistic_CIStampFilterFactory * This,
            /* [out] */ __RPC__out TrustLevel *trustLevel);
        
        HRESULT ( STDMETHODCALLTYPE *CreateWithSettings )( 
            __RPC__in __x_ABI_CLumia_CImaging_CArtistic_CIStampFilterFactory * This,
            /* [in] */ INT32 smoothness,
            /* [in] */ DOUBLE threshold,
            /* [out][retval] */ __RPC__deref_out_opt __x_ABI_CLumia_CImaging_CArtistic_CIStampFilter **__returnValue);
        
        END_INTERFACE
    } __x_ABI_CLumia_CImaging_CArtistic_CIStampFilterFactoryVtbl;

    interface __x_ABI_CLumia_CImaging_CArtistic_CIStampFilterFactory
    {
        CONST_VTBL struct __x_ABI_CLumia_CImaging_CArtistic_CIStampFilterFactoryVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define __x_ABI_CLumia_CImaging_CArtistic_CIStampFilterFactory_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __x_ABI_CLumia_CImaging_CArtistic_CIStampFilterFactory_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __x_ABI_CLumia_CImaging_CArtistic_CIStampFilterFactory_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __x_ABI_CLumia_CImaging_CArtistic_CIStampFilterFactory_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 

#define __x_ABI_CLumia_CImaging_CArtistic_CIStampFilterFactory_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 

#define __x_ABI_CLumia_CImaging_CArtistic_CIStampFilterFactory_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 


#define __x_ABI_CLumia_CImaging_CArtistic_CIStampFilterFactory_CreateWithSettings(This,smoothness,threshold,__returnValue)	\
    ( (This)->lpVtbl -> CreateWithSettings(This,smoothness,threshold,__returnValue) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* ____x_ABI_CLumia_CImaging_CArtistic_CIStampFilterFactory_INTERFACE_DEFINED__ */


/* interface __MIDL_itf_Lumia2EImaging2EArtistic_0000_0056 */
/* [local] */ 

#if !defined(____x_ABI_CLumia_CImaging_CArtistic_CIVignettingFilter_INTERFACE_DEFINED__)
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Lumia_Imaging_Artistic_IVignettingFilter[] = L"Lumia.Imaging.Artistic.IVignettingFilter";
#endif /* !defined(____x_ABI_CLumia_CImaging_CArtistic_CIVignettingFilter_INTERFACE_DEFINED__) */


/* interface __MIDL_itf_Lumia2EImaging2EArtistic_0000_0056 */
/* [local] */ 



extern RPC_IF_HANDLE __MIDL_itf_Lumia2EImaging2EArtistic_0000_0056_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_Lumia2EImaging2EArtistic_0000_0056_v0_0_s_ifspec;

#ifndef ____x_ABI_CLumia_CImaging_CArtistic_CIVignettingFilter_INTERFACE_DEFINED__
#define ____x_ABI_CLumia_CImaging_CArtistic_CIVignettingFilter_INTERFACE_DEFINED__

/* interface __x_ABI_CLumia_CImaging_CArtistic_CIVignettingFilter */
/* [uuid][object] */ 



/* interface ABI::Lumia::Imaging::Artistic::IVignettingFilter */
/* [uuid][object] */ 


EXTERN_C const IID IID___x_ABI_CLumia_CImaging_CArtistic_CIVignettingFilter;

#if defined(__cplusplus) && !defined(CINTERFACE)
    } /* end extern "C" */
    namespace ABI {
        namespace Lumia {
            namespace Imaging {
                namespace Artistic {
                    
                    MIDL_INTERFACE("D6FD5D2E-ECED-30DB-B8D9-C6C274761C27")
                    IVignettingFilter : public IInspectable
                    {
                    public:
                        virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_TransitionSize( 
                            /* [out][retval] */ __RPC__out DOUBLE *__returnValue) = 0;
                        
                        virtual /* [propput] */ HRESULT STDMETHODCALLTYPE put_TransitionSize( 
                            /* [in] */ DOUBLE value) = 0;
                        
                        virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_Color( 
                            /* [out][retval] */ __RPC__out ABI::Windows::UI::Color *__returnValue) = 0;
                        
                        virtual /* [propput] */ HRESULT STDMETHODCALLTYPE put_Color( 
                            /* [in] */ ABI::Windows::UI::Color value) = 0;
                        
                        virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_Region( 
                            /* [out][retval] */ __RPC__out ABI::Windows::Foundation::Rect *__returnValue) = 0;
                        
                        virtual /* [propput] */ HRESULT STDMETHODCALLTYPE put_Region( 
                            /* [in] */ ABI::Windows::Foundation::Rect value) = 0;
                        
                    };

                    extern const __declspec(selectany) IID & IID_IVignettingFilter = __uuidof(IVignettingFilter);

                    
                }  /* end namespace */
            }  /* end namespace */
        }  /* end namespace */
    }  /* end namespace */
    extern "C" { 
    
#else 	/* C style interface */

    typedef struct __x_ABI_CLumia_CImaging_CArtistic_CIVignettingFilterVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            __RPC__in __x_ABI_CLumia_CImaging_CArtistic_CIVignettingFilter * This,
            /* [in] */ __RPC__in REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            __RPC__in __x_ABI_CLumia_CImaging_CArtistic_CIVignettingFilter * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            __RPC__in __x_ABI_CLumia_CImaging_CArtistic_CIVignettingFilter * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetIids )( 
            __RPC__in __x_ABI_CLumia_CImaging_CArtistic_CIVignettingFilter * This,
            /* [out] */ __RPC__out ULONG *iidCount,
            /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
        
        HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )( 
            __RPC__in __x_ABI_CLumia_CImaging_CArtistic_CIVignettingFilter * This,
            /* [out] */ __RPC__deref_out_opt HSTRING *className);
        
        HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )( 
            __RPC__in __x_ABI_CLumia_CImaging_CArtistic_CIVignettingFilter * This,
            /* [out] */ __RPC__out TrustLevel *trustLevel);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_TransitionSize )( 
            __RPC__in __x_ABI_CLumia_CImaging_CArtistic_CIVignettingFilter * This,
            /* [out][retval] */ __RPC__out DOUBLE *__returnValue);
        
        /* [propput] */ HRESULT ( STDMETHODCALLTYPE *put_TransitionSize )( 
            __RPC__in __x_ABI_CLumia_CImaging_CArtistic_CIVignettingFilter * This,
            /* [in] */ DOUBLE value);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_Color )( 
            __RPC__in __x_ABI_CLumia_CImaging_CArtistic_CIVignettingFilter * This,
            /* [out][retval] */ __RPC__out __x_ABI_CWindows_CUI_CColor *__returnValue);
        
        /* [propput] */ HRESULT ( STDMETHODCALLTYPE *put_Color )( 
            __RPC__in __x_ABI_CLumia_CImaging_CArtistic_CIVignettingFilter * This,
            /* [in] */ __x_ABI_CWindows_CUI_CColor value);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_Region )( 
            __RPC__in __x_ABI_CLumia_CImaging_CArtistic_CIVignettingFilter * This,
            /* [out][retval] */ __RPC__out __x_ABI_CWindows_CFoundation_CRect *__returnValue);
        
        /* [propput] */ HRESULT ( STDMETHODCALLTYPE *put_Region )( 
            __RPC__in __x_ABI_CLumia_CImaging_CArtistic_CIVignettingFilter * This,
            /* [in] */ __x_ABI_CWindows_CFoundation_CRect value);
        
        END_INTERFACE
    } __x_ABI_CLumia_CImaging_CArtistic_CIVignettingFilterVtbl;

    interface __x_ABI_CLumia_CImaging_CArtistic_CIVignettingFilter
    {
        CONST_VTBL struct __x_ABI_CLumia_CImaging_CArtistic_CIVignettingFilterVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define __x_ABI_CLumia_CImaging_CArtistic_CIVignettingFilter_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __x_ABI_CLumia_CImaging_CArtistic_CIVignettingFilter_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __x_ABI_CLumia_CImaging_CArtistic_CIVignettingFilter_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __x_ABI_CLumia_CImaging_CArtistic_CIVignettingFilter_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 

#define __x_ABI_CLumia_CImaging_CArtistic_CIVignettingFilter_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 

#define __x_ABI_CLumia_CImaging_CArtistic_CIVignettingFilter_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 


#define __x_ABI_CLumia_CImaging_CArtistic_CIVignettingFilter_get_TransitionSize(This,__returnValue)	\
    ( (This)->lpVtbl -> get_TransitionSize(This,__returnValue) ) 

#define __x_ABI_CLumia_CImaging_CArtistic_CIVignettingFilter_put_TransitionSize(This,value)	\
    ( (This)->lpVtbl -> put_TransitionSize(This,value) ) 

#define __x_ABI_CLumia_CImaging_CArtistic_CIVignettingFilter_get_Color(This,__returnValue)	\
    ( (This)->lpVtbl -> get_Color(This,__returnValue) ) 

#define __x_ABI_CLumia_CImaging_CArtistic_CIVignettingFilter_put_Color(This,value)	\
    ( (This)->lpVtbl -> put_Color(This,value) ) 

#define __x_ABI_CLumia_CImaging_CArtistic_CIVignettingFilter_get_Region(This,__returnValue)	\
    ( (This)->lpVtbl -> get_Region(This,__returnValue) ) 

#define __x_ABI_CLumia_CImaging_CArtistic_CIVignettingFilter_put_Region(This,value)	\
    ( (This)->lpVtbl -> put_Region(This,value) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* ____x_ABI_CLumia_CImaging_CArtistic_CIVignettingFilter_INTERFACE_DEFINED__ */


/* interface __MIDL_itf_Lumia2EImaging2EArtistic_0000_0057 */
/* [local] */ 

#if !defined(____x_ABI_CLumia_CImaging_CArtistic_CIVignettingFilterFactory_INTERFACE_DEFINED__)
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Lumia_Imaging_Artistic_IVignettingFilterFactory[] = L"Lumia.Imaging.Artistic.IVignettingFilterFactory";
#endif /* !defined(____x_ABI_CLumia_CImaging_CArtistic_CIVignettingFilterFactory_INTERFACE_DEFINED__) */


/* interface __MIDL_itf_Lumia2EImaging2EArtistic_0000_0057 */
/* [local] */ 



extern RPC_IF_HANDLE __MIDL_itf_Lumia2EImaging2EArtistic_0000_0057_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_Lumia2EImaging2EArtistic_0000_0057_v0_0_s_ifspec;

#ifndef ____x_ABI_CLumia_CImaging_CArtistic_CIVignettingFilterFactory_INTERFACE_DEFINED__
#define ____x_ABI_CLumia_CImaging_CArtistic_CIVignettingFilterFactory_INTERFACE_DEFINED__

/* interface __x_ABI_CLumia_CImaging_CArtistic_CIVignettingFilterFactory */
/* [uuid][object] */ 



/* interface ABI::Lumia::Imaging::Artistic::IVignettingFilterFactory */
/* [uuid][object] */ 


EXTERN_C const IID IID___x_ABI_CLumia_CImaging_CArtistic_CIVignettingFilterFactory;

#if defined(__cplusplus) && !defined(CINTERFACE)
    } /* end extern "C" */
    namespace ABI {
        namespace Lumia {
            namespace Imaging {
                namespace Artistic {
                    
                    MIDL_INTERFACE("602DD292-3943-3A67-91F2-8D4604AE1524")
                    IVignettingFilterFactory : public IInspectable
                    {
                    public:
                        virtual HRESULT STDMETHODCALLTYPE Create( 
                            /* [in] */ DOUBLE transitionSize,
                            /* [in] */ ABI::Windows::UI::Color color,
                            /* [out][retval] */ __RPC__deref_out_opt ABI::Lumia::Imaging::Artistic::IVignettingFilter **__returnValue) = 0;
                        
                        virtual HRESULT STDMETHODCALLTYPE CreateWithRegion( 
                            /* [in] */ DOUBLE transitionSize,
                            /* [in] */ ABI::Windows::UI::Color color,
                            /* [in] */ ABI::Windows::Foundation::Rect region,
                            /* [out][retval] */ __RPC__deref_out_opt ABI::Lumia::Imaging::Artistic::IVignettingFilter **__returnValue) = 0;
                        
                    };

                    extern const __declspec(selectany) IID & IID_IVignettingFilterFactory = __uuidof(IVignettingFilterFactory);

                    
                }  /* end namespace */
            }  /* end namespace */
        }  /* end namespace */
    }  /* end namespace */
    extern "C" { 
    
#else 	/* C style interface */

    typedef struct __x_ABI_CLumia_CImaging_CArtistic_CIVignettingFilterFactoryVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            __RPC__in __x_ABI_CLumia_CImaging_CArtistic_CIVignettingFilterFactory * This,
            /* [in] */ __RPC__in REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            __RPC__in __x_ABI_CLumia_CImaging_CArtistic_CIVignettingFilterFactory * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            __RPC__in __x_ABI_CLumia_CImaging_CArtistic_CIVignettingFilterFactory * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetIids )( 
            __RPC__in __x_ABI_CLumia_CImaging_CArtistic_CIVignettingFilterFactory * This,
            /* [out] */ __RPC__out ULONG *iidCount,
            /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
        
        HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )( 
            __RPC__in __x_ABI_CLumia_CImaging_CArtistic_CIVignettingFilterFactory * This,
            /* [out] */ __RPC__deref_out_opt HSTRING *className);
        
        HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )( 
            __RPC__in __x_ABI_CLumia_CImaging_CArtistic_CIVignettingFilterFactory * This,
            /* [out] */ __RPC__out TrustLevel *trustLevel);
        
        HRESULT ( STDMETHODCALLTYPE *Create )( 
            __RPC__in __x_ABI_CLumia_CImaging_CArtistic_CIVignettingFilterFactory * This,
            /* [in] */ DOUBLE transitionSize,
            /* [in] */ __x_ABI_CWindows_CUI_CColor color,
            /* [out][retval] */ __RPC__deref_out_opt __x_ABI_CLumia_CImaging_CArtistic_CIVignettingFilter **__returnValue);
        
        HRESULT ( STDMETHODCALLTYPE *CreateWithRegion )( 
            __RPC__in __x_ABI_CLumia_CImaging_CArtistic_CIVignettingFilterFactory * This,
            /* [in] */ DOUBLE transitionSize,
            /* [in] */ __x_ABI_CWindows_CUI_CColor color,
            /* [in] */ __x_ABI_CWindows_CFoundation_CRect region,
            /* [out][retval] */ __RPC__deref_out_opt __x_ABI_CLumia_CImaging_CArtistic_CIVignettingFilter **__returnValue);
        
        END_INTERFACE
    } __x_ABI_CLumia_CImaging_CArtistic_CIVignettingFilterFactoryVtbl;

    interface __x_ABI_CLumia_CImaging_CArtistic_CIVignettingFilterFactory
    {
        CONST_VTBL struct __x_ABI_CLumia_CImaging_CArtistic_CIVignettingFilterFactoryVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define __x_ABI_CLumia_CImaging_CArtistic_CIVignettingFilterFactory_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __x_ABI_CLumia_CImaging_CArtistic_CIVignettingFilterFactory_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __x_ABI_CLumia_CImaging_CArtistic_CIVignettingFilterFactory_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __x_ABI_CLumia_CImaging_CArtistic_CIVignettingFilterFactory_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 

#define __x_ABI_CLumia_CImaging_CArtistic_CIVignettingFilterFactory_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 

#define __x_ABI_CLumia_CImaging_CArtistic_CIVignettingFilterFactory_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 


#define __x_ABI_CLumia_CImaging_CArtistic_CIVignettingFilterFactory_Create(This,transitionSize,color,__returnValue)	\
    ( (This)->lpVtbl -> Create(This,transitionSize,color,__returnValue) ) 

#define __x_ABI_CLumia_CImaging_CArtistic_CIVignettingFilterFactory_CreateWithRegion(This,transitionSize,color,region,__returnValue)	\
    ( (This)->lpVtbl -> CreateWithRegion(This,transitionSize,color,region,__returnValue) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* ____x_ABI_CLumia_CImaging_CArtistic_CIVignettingFilterFactory_INTERFACE_DEFINED__ */


/* interface __MIDL_itf_Lumia2EImaging2EArtistic_0000_2015 */




/* interface __MIDL_itf_Lumia2EImaging2EArtistic_0000_2015 */




extern RPC_IF_HANDLE __MIDL_itf_Lumia2EImaging2EArtistic_0000_2015_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_Lumia2EImaging2EArtistic_0000_2015_v0_0_s_ifspec;

/* interface __MIDL_itf_Lumia2EImaging2EArtistic_0000_0059 */
/* [local] */ 

#ifndef DEF___FIIterator_1_Windows__CFoundation__CRect
#define DEF___FIIterator_1_Windows__CFoundation__CRect
#if !defined(__cplusplus) || defined(RO_NO_TEMPLATE_NAME)


/* interface __MIDL_itf_Lumia2EImaging2EArtistic_0000_0059 */
/* [local] */ 



extern RPC_IF_HANDLE __MIDL_itf_Lumia2EImaging2EArtistic_0000_0059_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_Lumia2EImaging2EArtistic_0000_0059_v0_0_s_ifspec;

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


/* interface __MIDL_itf_Lumia2EImaging2EArtistic_0000_0060 */
/* [local] */ 

#endif /* pinterface */
#endif /* DEF___FIIterator_1_Windows__CFoundation__CRect */


/* interface __MIDL_itf_Lumia2EImaging2EArtistic_0000_0060 */
/* [local] */ 



extern RPC_IF_HANDLE __MIDL_itf_Lumia2EImaging2EArtistic_0000_0060_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_Lumia2EImaging2EArtistic_0000_0060_v0_0_s_ifspec;

/* interface __MIDL_itf_Lumia2EImaging2EArtistic_0000_2016 */




/* interface __MIDL_itf_Lumia2EImaging2EArtistic_0000_2016 */




extern RPC_IF_HANDLE __MIDL_itf_Lumia2EImaging2EArtistic_0000_2016_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_Lumia2EImaging2EArtistic_0000_2016_v0_0_s_ifspec;

/* interface __MIDL_itf_Lumia2EImaging2EArtistic_0000_0061 */
/* [local] */ 

#ifndef DEF___FIIterable_1_Windows__CFoundation__CRect
#define DEF___FIIterable_1_Windows__CFoundation__CRect
#if !defined(__cplusplus) || defined(RO_NO_TEMPLATE_NAME)


/* interface __MIDL_itf_Lumia2EImaging2EArtistic_0000_0061 */
/* [local] */ 



extern RPC_IF_HANDLE __MIDL_itf_Lumia2EImaging2EArtistic_0000_0061_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_Lumia2EImaging2EArtistic_0000_0061_v0_0_s_ifspec;

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


/* interface __MIDL_itf_Lumia2EImaging2EArtistic_0000_0062 */
/* [local] */ 

#endif /* pinterface */
#endif /* DEF___FIIterable_1_Windows__CFoundation__CRect */


/* interface __MIDL_itf_Lumia2EImaging2EArtistic_0000_0062 */
/* [local] */ 



extern RPC_IF_HANDLE __MIDL_itf_Lumia2EImaging2EArtistic_0000_0062_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_Lumia2EImaging2EArtistic_0000_0062_v0_0_s_ifspec;

/* interface __MIDL_itf_Lumia2EImaging2EArtistic_0000_2017 */




/* interface __MIDL_itf_Lumia2EImaging2EArtistic_0000_2017 */




extern RPC_IF_HANDLE __MIDL_itf_Lumia2EImaging2EArtistic_0000_2017_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_Lumia2EImaging2EArtistic_0000_2017_v0_0_s_ifspec;

/* interface __MIDL_itf_Lumia2EImaging2EArtistic_0000_0063 */
/* [local] */ 

#ifndef DEF___FIVectorView_1_Windows__CFoundation__CRect
#define DEF___FIVectorView_1_Windows__CFoundation__CRect
#if !defined(__cplusplus) || defined(RO_NO_TEMPLATE_NAME)


/* interface __MIDL_itf_Lumia2EImaging2EArtistic_0000_0063 */
/* [local] */ 



extern RPC_IF_HANDLE __MIDL_itf_Lumia2EImaging2EArtistic_0000_0063_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_Lumia2EImaging2EArtistic_0000_0063_v0_0_s_ifspec;

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


/* interface __MIDL_itf_Lumia2EImaging2EArtistic_0000_0064 */
/* [local] */ 

#endif /* pinterface */
#endif /* DEF___FIVectorView_1_Windows__CFoundation__CRect */


/* interface __MIDL_itf_Lumia2EImaging2EArtistic_0000_0064 */
/* [local] */ 



extern RPC_IF_HANDLE __MIDL_itf_Lumia2EImaging2EArtistic_0000_0064_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_Lumia2EImaging2EArtistic_0000_0064_v0_0_s_ifspec;

/* interface __MIDL_itf_Lumia2EImaging2EArtistic_0000_2018 */




/* interface __MIDL_itf_Lumia2EImaging2EArtistic_0000_2018 */




extern RPC_IF_HANDLE __MIDL_itf_Lumia2EImaging2EArtistic_0000_2018_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_Lumia2EImaging2EArtistic_0000_2018_v0_0_s_ifspec;

/* interface __MIDL_itf_Lumia2EImaging2EArtistic_0000_0065 */
/* [local] */ 

#ifndef DEF___FIVector_1_Windows__CFoundation__CRect
#define DEF___FIVector_1_Windows__CFoundation__CRect
#if !defined(__cplusplus) || defined(RO_NO_TEMPLATE_NAME)


/* interface __MIDL_itf_Lumia2EImaging2EArtistic_0000_0065 */
/* [local] */ 



extern RPC_IF_HANDLE __MIDL_itf_Lumia2EImaging2EArtistic_0000_0065_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_Lumia2EImaging2EArtistic_0000_0065_v0_0_s_ifspec;

#ifndef ____FIVector_1_Windows__CFoundation__CRect_INTERFACE_DEFINED__
#define ____FIVector_1_Windows__CFoundation__CRect_INTERFACE_DEFINED__

/* interface __FIVector_1_Windows__CFoundation__CRect */
/* [unique][uuid][object] */ 



/* interface __FIVector_1_Windows__CFoundation__CRect */
/* [unique][uuid][object] */ 


EXTERN_C const IID IID___FIVector_1_Windows__CFoundation__CRect;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("ec699315-2109-545a-8425-26f721372fd3")
    __FIVector_1_Windows__CFoundation__CRect : public IInspectable
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE GetAt( 
            /* [in] */ unsigned int index,
            /* [retval][out] */ __RPC__out struct ABI::Windows::Foundation::Rect *item) = 0;
        
        virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_Size( 
            /* [retval][out] */ __RPC__out unsigned int *size) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetView( 
            /* [retval][out] */ __RPC__deref_out_opt __FIVectorView_1_Windows__CFoundation__CRect **view) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE IndexOf( 
            /* [in] */ struct ABI::Windows::Foundation::Rect item,
            /* [out] */ __RPC__out unsigned int *index,
            /* [retval][out] */ __RPC__out boolean *found) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE SetAt( 
            /* [in] */ unsigned int index,
            /* [in] */ struct ABI::Windows::Foundation::Rect item) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE InsertAt( 
            /* [in] */ unsigned int index,
            /* [in] */ struct ABI::Windows::Foundation::Rect item) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE RemoveAt( 
            /* [in] */ unsigned int index) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE Append( 
            /* [in] */ struct ABI::Windows::Foundation::Rect item) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE RemoveAtEnd( void) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE Clear( void) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetMany( 
            /* [in] */ unsigned int startIndex,
            /* [in] */ unsigned int capacity,
            /* [size_is][length_is][out] */ __RPC__out_ecount_part(capacity, *actual) struct ABI::Windows::Foundation::Rect *items,
            /* [retval][out] */ __RPC__out unsigned int *actual) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE ReplaceAll( 
            /* [in] */ unsigned int count,
            /* [size_is][in] */ __RPC__in_ecount_full(count) struct ABI::Windows::Foundation::Rect *value) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct __FIVector_1_Windows__CFoundation__CRectVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            __RPC__in __FIVector_1_Windows__CFoundation__CRect * This,
            /* [in] */ __RPC__in REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            __RPC__in __FIVector_1_Windows__CFoundation__CRect * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            __RPC__in __FIVector_1_Windows__CFoundation__CRect * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetIids )( 
            __RPC__in __FIVector_1_Windows__CFoundation__CRect * This,
            /* [out] */ __RPC__out ULONG *iidCount,
            /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
        
        HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )( 
            __RPC__in __FIVector_1_Windows__CFoundation__CRect * This,
            /* [out] */ __RPC__deref_out_opt HSTRING *className);
        
        HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )( 
            __RPC__in __FIVector_1_Windows__CFoundation__CRect * This,
            /* [out] */ __RPC__out TrustLevel *trustLevel);
        
        HRESULT ( STDMETHODCALLTYPE *GetAt )( 
            __RPC__in __FIVector_1_Windows__CFoundation__CRect * This,
            /* [in] */ unsigned int index,
            /* [retval][out] */ __RPC__out struct __x_ABI_CWindows_CFoundation_CRect *item);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_Size )( 
            __RPC__in __FIVector_1_Windows__CFoundation__CRect * This,
            /* [retval][out] */ __RPC__out unsigned int *size);
        
        HRESULT ( STDMETHODCALLTYPE *GetView )( 
            __RPC__in __FIVector_1_Windows__CFoundation__CRect * This,
            /* [retval][out] */ __RPC__deref_out_opt __FIVectorView_1_Windows__CFoundation__CRect **view);
        
        HRESULT ( STDMETHODCALLTYPE *IndexOf )( 
            __RPC__in __FIVector_1_Windows__CFoundation__CRect * This,
            /* [in] */ struct __x_ABI_CWindows_CFoundation_CRect item,
            /* [out] */ __RPC__out unsigned int *index,
            /* [retval][out] */ __RPC__out boolean *found);
        
        HRESULT ( STDMETHODCALLTYPE *SetAt )( 
            __RPC__in __FIVector_1_Windows__CFoundation__CRect * This,
            /* [in] */ unsigned int index,
            /* [in] */ struct __x_ABI_CWindows_CFoundation_CRect item);
        
        HRESULT ( STDMETHODCALLTYPE *InsertAt )( 
            __RPC__in __FIVector_1_Windows__CFoundation__CRect * This,
            /* [in] */ unsigned int index,
            /* [in] */ struct __x_ABI_CWindows_CFoundation_CRect item);
        
        HRESULT ( STDMETHODCALLTYPE *RemoveAt )( 
            __RPC__in __FIVector_1_Windows__CFoundation__CRect * This,
            /* [in] */ unsigned int index);
        
        HRESULT ( STDMETHODCALLTYPE *Append )( 
            __RPC__in __FIVector_1_Windows__CFoundation__CRect * This,
            /* [in] */ struct __x_ABI_CWindows_CFoundation_CRect item);
        
        HRESULT ( STDMETHODCALLTYPE *RemoveAtEnd )( 
            __RPC__in __FIVector_1_Windows__CFoundation__CRect * This);
        
        HRESULT ( STDMETHODCALLTYPE *Clear )( 
            __RPC__in __FIVector_1_Windows__CFoundation__CRect * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetMany )( 
            __RPC__in __FIVector_1_Windows__CFoundation__CRect * This,
            /* [in] */ unsigned int startIndex,
            /* [in] */ unsigned int capacity,
            /* [size_is][length_is][out] */ __RPC__out_ecount_part(capacity, *actual) struct __x_ABI_CWindows_CFoundation_CRect *items,
            /* [retval][out] */ __RPC__out unsigned int *actual);
        
        HRESULT ( STDMETHODCALLTYPE *ReplaceAll )( 
            __RPC__in __FIVector_1_Windows__CFoundation__CRect * This,
            /* [in] */ unsigned int count,
            /* [size_is][in] */ __RPC__in_ecount_full(count) struct __x_ABI_CWindows_CFoundation_CRect *value);
        
        END_INTERFACE
    } __FIVector_1_Windows__CFoundation__CRectVtbl;

    interface __FIVector_1_Windows__CFoundation__CRect
    {
        CONST_VTBL struct __FIVector_1_Windows__CFoundation__CRectVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define __FIVector_1_Windows__CFoundation__CRect_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __FIVector_1_Windows__CFoundation__CRect_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __FIVector_1_Windows__CFoundation__CRect_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __FIVector_1_Windows__CFoundation__CRect_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 

#define __FIVector_1_Windows__CFoundation__CRect_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 

#define __FIVector_1_Windows__CFoundation__CRect_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 


#define __FIVector_1_Windows__CFoundation__CRect_GetAt(This,index,item)	\
    ( (This)->lpVtbl -> GetAt(This,index,item) ) 

#define __FIVector_1_Windows__CFoundation__CRect_get_Size(This,size)	\
    ( (This)->lpVtbl -> get_Size(This,size) ) 

#define __FIVector_1_Windows__CFoundation__CRect_GetView(This,view)	\
    ( (This)->lpVtbl -> GetView(This,view) ) 

#define __FIVector_1_Windows__CFoundation__CRect_IndexOf(This,item,index,found)	\
    ( (This)->lpVtbl -> IndexOf(This,item,index,found) ) 

#define __FIVector_1_Windows__CFoundation__CRect_SetAt(This,index,item)	\
    ( (This)->lpVtbl -> SetAt(This,index,item) ) 

#define __FIVector_1_Windows__CFoundation__CRect_InsertAt(This,index,item)	\
    ( (This)->lpVtbl -> InsertAt(This,index,item) ) 

#define __FIVector_1_Windows__CFoundation__CRect_RemoveAt(This,index)	\
    ( (This)->lpVtbl -> RemoveAt(This,index) ) 

#define __FIVector_1_Windows__CFoundation__CRect_Append(This,item)	\
    ( (This)->lpVtbl -> Append(This,item) ) 

#define __FIVector_1_Windows__CFoundation__CRect_RemoveAtEnd(This)	\
    ( (This)->lpVtbl -> RemoveAtEnd(This) ) 

#define __FIVector_1_Windows__CFoundation__CRect_Clear(This)	\
    ( (This)->lpVtbl -> Clear(This) ) 

#define __FIVector_1_Windows__CFoundation__CRect_GetMany(This,startIndex,capacity,items,actual)	\
    ( (This)->lpVtbl -> GetMany(This,startIndex,capacity,items,actual) ) 

#define __FIVector_1_Windows__CFoundation__CRect_ReplaceAll(This,count,value)	\
    ( (This)->lpVtbl -> ReplaceAll(This,count,value) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* ____FIVector_1_Windows__CFoundation__CRect_INTERFACE_DEFINED__ */


/* interface __MIDL_itf_Lumia2EImaging2EArtistic_0000_0066 */
/* [local] */ 

#endif /* pinterface */
#endif /* DEF___FIVector_1_Windows__CFoundation__CRect */
#if !defined(____x_ABI_CLumia_CImaging_CArtistic_CIWarpFilter_INTERFACE_DEFINED__)
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Lumia_Imaging_Artistic_IWarpFilter[] = L"Lumia.Imaging.Artistic.IWarpFilter";
#endif /* !defined(____x_ABI_CLumia_CImaging_CArtistic_CIWarpFilter_INTERFACE_DEFINED__) */


/* interface __MIDL_itf_Lumia2EImaging2EArtistic_0000_0066 */
/* [local] */ 



extern RPC_IF_HANDLE __MIDL_itf_Lumia2EImaging2EArtistic_0000_0066_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_Lumia2EImaging2EArtistic_0000_0066_v0_0_s_ifspec;

#ifndef ____x_ABI_CLumia_CImaging_CArtistic_CIWarpFilter_INTERFACE_DEFINED__
#define ____x_ABI_CLumia_CImaging_CArtistic_CIWarpFilter_INTERFACE_DEFINED__

/* interface __x_ABI_CLumia_CImaging_CArtistic_CIWarpFilter */
/* [uuid][object] */ 



/* interface ABI::Lumia::Imaging::Artistic::IWarpFilter */
/* [uuid][object] */ 


EXTERN_C const IID IID___x_ABI_CLumia_CImaging_CArtistic_CIWarpFilter;

#if defined(__cplusplus) && !defined(CINTERFACE)
    } /* end extern "C" */
    namespace ABI {
        namespace Lumia {
            namespace Imaging {
                namespace Artistic {
                    
                    MIDL_INTERFACE("A2D07684-4162-3AA8-9026-30F7E968877A")
                    IWarpFilter : public IInspectable
                    {
                    public:
                        virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_WarpEffect( 
                            /* [out][retval] */ __RPC__out ABI::Lumia::Imaging::Artistic::WarpEffect *__returnValue) = 0;
                        
                        virtual /* [propput] */ HRESULT STDMETHODCALLTYPE put_WarpEffect( 
                            /* [in] */ ABI::Lumia::Imaging::Artistic::WarpEffect value) = 0;
                        
                        virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_Level( 
                            /* [out][retval] */ __RPC__out DOUBLE *__returnValue) = 0;
                        
                        virtual /* [propput] */ HRESULT STDMETHODCALLTYPE put_Level( 
                            /* [in] */ DOUBLE value) = 0;
                        
                        virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_Rotation( 
                            /* [out][retval] */ __RPC__out ABI::Lumia::Imaging::Rotation *__returnValue) = 0;
                        
                        virtual /* [propput] */ HRESULT STDMETHODCALLTYPE put_Rotation( 
                            /* [in] */ ABI::Lumia::Imaging::Rotation value) = 0;
                        
                        virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_Regions( 
                            /* [out][retval] */ __RPC__deref_out_opt __FIVector_1_Windows__CFoundation__CRect **__returnValue) = 0;
                        
                        virtual /* [propput] */ HRESULT STDMETHODCALLTYPE put_Regions( 
                            /* [in] */ __RPC__in_opt __FIVector_1_Windows__CFoundation__CRect *value) = 0;
                        
                    };

                    extern const __declspec(selectany) IID & IID_IWarpFilter = __uuidof(IWarpFilter);

                    
                }  /* end namespace */
            }  /* end namespace */
        }  /* end namespace */
    }  /* end namespace */
    extern "C" { 
    
#else 	/* C style interface */

    typedef struct __x_ABI_CLumia_CImaging_CArtistic_CIWarpFilterVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            __RPC__in __x_ABI_CLumia_CImaging_CArtistic_CIWarpFilter * This,
            /* [in] */ __RPC__in REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            __RPC__in __x_ABI_CLumia_CImaging_CArtistic_CIWarpFilter * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            __RPC__in __x_ABI_CLumia_CImaging_CArtistic_CIWarpFilter * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetIids )( 
            __RPC__in __x_ABI_CLumia_CImaging_CArtistic_CIWarpFilter * This,
            /* [out] */ __RPC__out ULONG *iidCount,
            /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
        
        HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )( 
            __RPC__in __x_ABI_CLumia_CImaging_CArtistic_CIWarpFilter * This,
            /* [out] */ __RPC__deref_out_opt HSTRING *className);
        
        HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )( 
            __RPC__in __x_ABI_CLumia_CImaging_CArtistic_CIWarpFilter * This,
            /* [out] */ __RPC__out TrustLevel *trustLevel);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_WarpEffect )( 
            __RPC__in __x_ABI_CLumia_CImaging_CArtistic_CIWarpFilter * This,
            /* [out][retval] */ __RPC__out __x_ABI_CLumia_CImaging_CArtistic_CWarpEffect *__returnValue);
        
        /* [propput] */ HRESULT ( STDMETHODCALLTYPE *put_WarpEffect )( 
            __RPC__in __x_ABI_CLumia_CImaging_CArtistic_CIWarpFilter * This,
            /* [in] */ __x_ABI_CLumia_CImaging_CArtistic_CWarpEffect value);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_Level )( 
            __RPC__in __x_ABI_CLumia_CImaging_CArtistic_CIWarpFilter * This,
            /* [out][retval] */ __RPC__out DOUBLE *__returnValue);
        
        /* [propput] */ HRESULT ( STDMETHODCALLTYPE *put_Level )( 
            __RPC__in __x_ABI_CLumia_CImaging_CArtistic_CIWarpFilter * This,
            /* [in] */ DOUBLE value);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_Rotation )( 
            __RPC__in __x_ABI_CLumia_CImaging_CArtistic_CIWarpFilter * This,
            /* [out][retval] */ __RPC__out __x_ABI_CLumia_CImaging_CRotation *__returnValue);
        
        /* [propput] */ HRESULT ( STDMETHODCALLTYPE *put_Rotation )( 
            __RPC__in __x_ABI_CLumia_CImaging_CArtistic_CIWarpFilter * This,
            /* [in] */ __x_ABI_CLumia_CImaging_CRotation value);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_Regions )( 
            __RPC__in __x_ABI_CLumia_CImaging_CArtistic_CIWarpFilter * This,
            /* [out][retval] */ __RPC__deref_out_opt __FIVector_1_Windows__CFoundation__CRect **__returnValue);
        
        /* [propput] */ HRESULT ( STDMETHODCALLTYPE *put_Regions )( 
            __RPC__in __x_ABI_CLumia_CImaging_CArtistic_CIWarpFilter * This,
            /* [in] */ __RPC__in_opt __FIVector_1_Windows__CFoundation__CRect *value);
        
        END_INTERFACE
    } __x_ABI_CLumia_CImaging_CArtistic_CIWarpFilterVtbl;

    interface __x_ABI_CLumia_CImaging_CArtistic_CIWarpFilter
    {
        CONST_VTBL struct __x_ABI_CLumia_CImaging_CArtistic_CIWarpFilterVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define __x_ABI_CLumia_CImaging_CArtistic_CIWarpFilter_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __x_ABI_CLumia_CImaging_CArtistic_CIWarpFilter_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __x_ABI_CLumia_CImaging_CArtistic_CIWarpFilter_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __x_ABI_CLumia_CImaging_CArtistic_CIWarpFilter_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 

#define __x_ABI_CLumia_CImaging_CArtistic_CIWarpFilter_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 

#define __x_ABI_CLumia_CImaging_CArtistic_CIWarpFilter_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 


#define __x_ABI_CLumia_CImaging_CArtistic_CIWarpFilter_get_WarpEffect(This,__returnValue)	\
    ( (This)->lpVtbl -> get_WarpEffect(This,__returnValue) ) 

#define __x_ABI_CLumia_CImaging_CArtistic_CIWarpFilter_put_WarpEffect(This,value)	\
    ( (This)->lpVtbl -> put_WarpEffect(This,value) ) 

#define __x_ABI_CLumia_CImaging_CArtistic_CIWarpFilter_get_Level(This,__returnValue)	\
    ( (This)->lpVtbl -> get_Level(This,__returnValue) ) 

#define __x_ABI_CLumia_CImaging_CArtistic_CIWarpFilter_put_Level(This,value)	\
    ( (This)->lpVtbl -> put_Level(This,value) ) 

#define __x_ABI_CLumia_CImaging_CArtistic_CIWarpFilter_get_Rotation(This,__returnValue)	\
    ( (This)->lpVtbl -> get_Rotation(This,__returnValue) ) 

#define __x_ABI_CLumia_CImaging_CArtistic_CIWarpFilter_put_Rotation(This,value)	\
    ( (This)->lpVtbl -> put_Rotation(This,value) ) 

#define __x_ABI_CLumia_CImaging_CArtistic_CIWarpFilter_get_Regions(This,__returnValue)	\
    ( (This)->lpVtbl -> get_Regions(This,__returnValue) ) 

#define __x_ABI_CLumia_CImaging_CArtistic_CIWarpFilter_put_Regions(This,value)	\
    ( (This)->lpVtbl -> put_Regions(This,value) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* ____x_ABI_CLumia_CImaging_CArtistic_CIWarpFilter_INTERFACE_DEFINED__ */


/* interface __MIDL_itf_Lumia2EImaging2EArtistic_0000_0067 */
/* [local] */ 

#if !defined(____x_ABI_CLumia_CImaging_CArtistic_CIWarpFilterFactory_INTERFACE_DEFINED__)
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Lumia_Imaging_Artistic_IWarpFilterFactory[] = L"Lumia.Imaging.Artistic.IWarpFilterFactory";
#endif /* !defined(____x_ABI_CLumia_CImaging_CArtistic_CIWarpFilterFactory_INTERFACE_DEFINED__) */


/* interface __MIDL_itf_Lumia2EImaging2EArtistic_0000_0067 */
/* [local] */ 



extern RPC_IF_HANDLE __MIDL_itf_Lumia2EImaging2EArtistic_0000_0067_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_Lumia2EImaging2EArtistic_0000_0067_v0_0_s_ifspec;

#ifndef ____x_ABI_CLumia_CImaging_CArtistic_CIWarpFilterFactory_INTERFACE_DEFINED__
#define ____x_ABI_CLumia_CImaging_CArtistic_CIWarpFilterFactory_INTERFACE_DEFINED__

/* interface __x_ABI_CLumia_CImaging_CArtistic_CIWarpFilterFactory */
/* [uuid][object] */ 



/* interface ABI::Lumia::Imaging::Artistic::IWarpFilterFactory */
/* [uuid][object] */ 


EXTERN_C const IID IID___x_ABI_CLumia_CImaging_CArtistic_CIWarpFilterFactory;

#if defined(__cplusplus) && !defined(CINTERFACE)
    } /* end extern "C" */
    namespace ABI {
        namespace Lumia {
            namespace Imaging {
                namespace Artistic {
                    
                    MIDL_INTERFACE("01CEEFB8-209F-32A2-BDDA-AA4DED7FFD5E")
                    IWarpFilterFactory : public IInspectable
                    {
                    public:
                        virtual HRESULT STDMETHODCALLTYPE Create( 
                            /* [in] */ ABI::Lumia::Imaging::Artistic::WarpEffect effect,
                            /* [in] */ DOUBLE level,
                            /* [out][retval] */ __RPC__deref_out_opt ABI::Lumia::Imaging::Artistic::IWarpFilter **__returnValue) = 0;
                        
                        virtual HRESULT STDMETHODCALLTYPE CreateWithRegions( 
                            /* [in] */ ABI::Lumia::Imaging::Artistic::WarpEffect effect,
                            /* [in] */ DOUBLE level,
                            /* [in] */ ABI::Lumia::Imaging::Rotation rotation,
                            /* [in] */ __RPC__in_opt __FIVector_1_Windows__CFoundation__CRect *regions,
                            /* [out][retval] */ __RPC__deref_out_opt ABI::Lumia::Imaging::Artistic::IWarpFilter **__returnValue) = 0;
                        
                    };

                    extern const __declspec(selectany) IID & IID_IWarpFilterFactory = __uuidof(IWarpFilterFactory);

                    
                }  /* end namespace */
            }  /* end namespace */
        }  /* end namespace */
    }  /* end namespace */
    extern "C" { 
    
#else 	/* C style interface */

    typedef struct __x_ABI_CLumia_CImaging_CArtistic_CIWarpFilterFactoryVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            __RPC__in __x_ABI_CLumia_CImaging_CArtistic_CIWarpFilterFactory * This,
            /* [in] */ __RPC__in REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            __RPC__in __x_ABI_CLumia_CImaging_CArtistic_CIWarpFilterFactory * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            __RPC__in __x_ABI_CLumia_CImaging_CArtistic_CIWarpFilterFactory * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetIids )( 
            __RPC__in __x_ABI_CLumia_CImaging_CArtistic_CIWarpFilterFactory * This,
            /* [out] */ __RPC__out ULONG *iidCount,
            /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
        
        HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )( 
            __RPC__in __x_ABI_CLumia_CImaging_CArtistic_CIWarpFilterFactory * This,
            /* [out] */ __RPC__deref_out_opt HSTRING *className);
        
        HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )( 
            __RPC__in __x_ABI_CLumia_CImaging_CArtistic_CIWarpFilterFactory * This,
            /* [out] */ __RPC__out TrustLevel *trustLevel);
        
        HRESULT ( STDMETHODCALLTYPE *Create )( 
            __RPC__in __x_ABI_CLumia_CImaging_CArtistic_CIWarpFilterFactory * This,
            /* [in] */ __x_ABI_CLumia_CImaging_CArtistic_CWarpEffect effect,
            /* [in] */ DOUBLE level,
            /* [out][retval] */ __RPC__deref_out_opt __x_ABI_CLumia_CImaging_CArtistic_CIWarpFilter **__returnValue);
        
        HRESULT ( STDMETHODCALLTYPE *CreateWithRegions )( 
            __RPC__in __x_ABI_CLumia_CImaging_CArtistic_CIWarpFilterFactory * This,
            /* [in] */ __x_ABI_CLumia_CImaging_CArtistic_CWarpEffect effect,
            /* [in] */ DOUBLE level,
            /* [in] */ __x_ABI_CLumia_CImaging_CRotation rotation,
            /* [in] */ __RPC__in_opt __FIVector_1_Windows__CFoundation__CRect *regions,
            /* [out][retval] */ __RPC__deref_out_opt __x_ABI_CLumia_CImaging_CArtistic_CIWarpFilter **__returnValue);
        
        END_INTERFACE
    } __x_ABI_CLumia_CImaging_CArtistic_CIWarpFilterFactoryVtbl;

    interface __x_ABI_CLumia_CImaging_CArtistic_CIWarpFilterFactory
    {
        CONST_VTBL struct __x_ABI_CLumia_CImaging_CArtistic_CIWarpFilterFactoryVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define __x_ABI_CLumia_CImaging_CArtistic_CIWarpFilterFactory_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __x_ABI_CLumia_CImaging_CArtistic_CIWarpFilterFactory_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __x_ABI_CLumia_CImaging_CArtistic_CIWarpFilterFactory_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __x_ABI_CLumia_CImaging_CArtistic_CIWarpFilterFactory_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 

#define __x_ABI_CLumia_CImaging_CArtistic_CIWarpFilterFactory_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 

#define __x_ABI_CLumia_CImaging_CArtistic_CIWarpFilterFactory_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 


#define __x_ABI_CLumia_CImaging_CArtistic_CIWarpFilterFactory_Create(This,effect,level,__returnValue)	\
    ( (This)->lpVtbl -> Create(This,effect,level,__returnValue) ) 

#define __x_ABI_CLumia_CImaging_CArtistic_CIWarpFilterFactory_CreateWithRegions(This,effect,level,rotation,regions,__returnValue)	\
    ( (This)->lpVtbl -> CreateWithRegions(This,effect,level,rotation,regions,__returnValue) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* ____x_ABI_CLumia_CImaging_CArtistic_CIWarpFilterFactory_INTERFACE_DEFINED__ */


/* interface __MIDL_itf_Lumia2EImaging2EArtistic_0000_0068 */
/* [local] */ 

#if !defined(____x_ABI_CLumia_CImaging_CArtistic_CIWatercolorFilter_INTERFACE_DEFINED__)
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Lumia_Imaging_Artistic_IWatercolorFilter[] = L"Lumia.Imaging.Artistic.IWatercolorFilter";
#endif /* !defined(____x_ABI_CLumia_CImaging_CArtistic_CIWatercolorFilter_INTERFACE_DEFINED__) */


/* interface __MIDL_itf_Lumia2EImaging2EArtistic_0000_0068 */
/* [local] */ 



extern RPC_IF_HANDLE __MIDL_itf_Lumia2EImaging2EArtistic_0000_0068_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_Lumia2EImaging2EArtistic_0000_0068_v0_0_s_ifspec;

#ifndef ____x_ABI_CLumia_CImaging_CArtistic_CIWatercolorFilter_INTERFACE_DEFINED__
#define ____x_ABI_CLumia_CImaging_CArtistic_CIWatercolorFilter_INTERFACE_DEFINED__

/* interface __x_ABI_CLumia_CImaging_CArtistic_CIWatercolorFilter */
/* [uuid][object] */ 



/* interface ABI::Lumia::Imaging::Artistic::IWatercolorFilter */
/* [uuid][object] */ 


EXTERN_C const IID IID___x_ABI_CLumia_CImaging_CArtistic_CIWatercolorFilter;

#if defined(__cplusplus) && !defined(CINTERFACE)
    } /* end extern "C" */
    namespace ABI {
        namespace Lumia {
            namespace Imaging {
                namespace Artistic {
                    
                    MIDL_INTERFACE("72EFA59D-D269-3276-8BA4-18E9E6541F1A")
                    IWatercolorFilter : public IInspectable
                    {
                    public:
                        virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_LightIntensity( 
                            /* [out][retval] */ __RPC__out DOUBLE *__returnValue) = 0;
                        
                        virtual /* [propput] */ HRESULT STDMETHODCALLTYPE put_LightIntensity( 
                            /* [in] */ DOUBLE value) = 0;
                        
                        virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_ColorIntensity( 
                            /* [out][retval] */ __RPC__out DOUBLE *__returnValue) = 0;
                        
                        virtual /* [propput] */ HRESULT STDMETHODCALLTYPE put_ColorIntensity( 
                            /* [in] */ DOUBLE value) = 0;
                        
                    };

                    extern const __declspec(selectany) IID & IID_IWatercolorFilter = __uuidof(IWatercolorFilter);

                    
                }  /* end namespace */
            }  /* end namespace */
        }  /* end namespace */
    }  /* end namespace */
    extern "C" { 
    
#else 	/* C style interface */

    typedef struct __x_ABI_CLumia_CImaging_CArtistic_CIWatercolorFilterVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            __RPC__in __x_ABI_CLumia_CImaging_CArtistic_CIWatercolorFilter * This,
            /* [in] */ __RPC__in REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            __RPC__in __x_ABI_CLumia_CImaging_CArtistic_CIWatercolorFilter * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            __RPC__in __x_ABI_CLumia_CImaging_CArtistic_CIWatercolorFilter * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetIids )( 
            __RPC__in __x_ABI_CLumia_CImaging_CArtistic_CIWatercolorFilter * This,
            /* [out] */ __RPC__out ULONG *iidCount,
            /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
        
        HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )( 
            __RPC__in __x_ABI_CLumia_CImaging_CArtistic_CIWatercolorFilter * This,
            /* [out] */ __RPC__deref_out_opt HSTRING *className);
        
        HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )( 
            __RPC__in __x_ABI_CLumia_CImaging_CArtistic_CIWatercolorFilter * This,
            /* [out] */ __RPC__out TrustLevel *trustLevel);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_LightIntensity )( 
            __RPC__in __x_ABI_CLumia_CImaging_CArtistic_CIWatercolorFilter * This,
            /* [out][retval] */ __RPC__out DOUBLE *__returnValue);
        
        /* [propput] */ HRESULT ( STDMETHODCALLTYPE *put_LightIntensity )( 
            __RPC__in __x_ABI_CLumia_CImaging_CArtistic_CIWatercolorFilter * This,
            /* [in] */ DOUBLE value);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_ColorIntensity )( 
            __RPC__in __x_ABI_CLumia_CImaging_CArtistic_CIWatercolorFilter * This,
            /* [out][retval] */ __RPC__out DOUBLE *__returnValue);
        
        /* [propput] */ HRESULT ( STDMETHODCALLTYPE *put_ColorIntensity )( 
            __RPC__in __x_ABI_CLumia_CImaging_CArtistic_CIWatercolorFilter * This,
            /* [in] */ DOUBLE value);
        
        END_INTERFACE
    } __x_ABI_CLumia_CImaging_CArtistic_CIWatercolorFilterVtbl;

    interface __x_ABI_CLumia_CImaging_CArtistic_CIWatercolorFilter
    {
        CONST_VTBL struct __x_ABI_CLumia_CImaging_CArtistic_CIWatercolorFilterVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define __x_ABI_CLumia_CImaging_CArtistic_CIWatercolorFilter_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __x_ABI_CLumia_CImaging_CArtistic_CIWatercolorFilter_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __x_ABI_CLumia_CImaging_CArtistic_CIWatercolorFilter_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __x_ABI_CLumia_CImaging_CArtistic_CIWatercolorFilter_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 

#define __x_ABI_CLumia_CImaging_CArtistic_CIWatercolorFilter_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 

#define __x_ABI_CLumia_CImaging_CArtistic_CIWatercolorFilter_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 


#define __x_ABI_CLumia_CImaging_CArtistic_CIWatercolorFilter_get_LightIntensity(This,__returnValue)	\
    ( (This)->lpVtbl -> get_LightIntensity(This,__returnValue) ) 

#define __x_ABI_CLumia_CImaging_CArtistic_CIWatercolorFilter_put_LightIntensity(This,value)	\
    ( (This)->lpVtbl -> put_LightIntensity(This,value) ) 

#define __x_ABI_CLumia_CImaging_CArtistic_CIWatercolorFilter_get_ColorIntensity(This,__returnValue)	\
    ( (This)->lpVtbl -> get_ColorIntensity(This,__returnValue) ) 

#define __x_ABI_CLumia_CImaging_CArtistic_CIWatercolorFilter_put_ColorIntensity(This,value)	\
    ( (This)->lpVtbl -> put_ColorIntensity(This,value) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* ____x_ABI_CLumia_CImaging_CArtistic_CIWatercolorFilter_INTERFACE_DEFINED__ */


/* interface __MIDL_itf_Lumia2EImaging2EArtistic_0000_0069 */
/* [local] */ 

#if !defined(____x_ABI_CLumia_CImaging_CArtistic_CIWatercolorFilterFactory_INTERFACE_DEFINED__)
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Lumia_Imaging_Artistic_IWatercolorFilterFactory[] = L"Lumia.Imaging.Artistic.IWatercolorFilterFactory";
#endif /* !defined(____x_ABI_CLumia_CImaging_CArtistic_CIWatercolorFilterFactory_INTERFACE_DEFINED__) */


/* interface __MIDL_itf_Lumia2EImaging2EArtistic_0000_0069 */
/* [local] */ 



extern RPC_IF_HANDLE __MIDL_itf_Lumia2EImaging2EArtistic_0000_0069_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_Lumia2EImaging2EArtistic_0000_0069_v0_0_s_ifspec;

#ifndef ____x_ABI_CLumia_CImaging_CArtistic_CIWatercolorFilterFactory_INTERFACE_DEFINED__
#define ____x_ABI_CLumia_CImaging_CArtistic_CIWatercolorFilterFactory_INTERFACE_DEFINED__

/* interface __x_ABI_CLumia_CImaging_CArtistic_CIWatercolorFilterFactory */
/* [uuid][object] */ 



/* interface ABI::Lumia::Imaging::Artistic::IWatercolorFilterFactory */
/* [uuid][object] */ 


EXTERN_C const IID IID___x_ABI_CLumia_CImaging_CArtistic_CIWatercolorFilterFactory;

#if defined(__cplusplus) && !defined(CINTERFACE)
    } /* end extern "C" */
    namespace ABI {
        namespace Lumia {
            namespace Imaging {
                namespace Artistic {
                    
                    MIDL_INTERFACE("863A5C1C-2CF6-35B1-A66B-5A5098342820")
                    IWatercolorFilterFactory : public IInspectable
                    {
                    public:
                        virtual HRESULT STDMETHODCALLTYPE CreateWithIntensities( 
                            /* [in] */ DOUBLE lightIntensity,
                            /* [in] */ DOUBLE colorIntensity,
                            /* [out][retval] */ __RPC__deref_out_opt ABI::Lumia::Imaging::Artistic::IWatercolorFilter **__returnValue) = 0;
                        
                    };

                    extern const __declspec(selectany) IID & IID_IWatercolorFilterFactory = __uuidof(IWatercolorFilterFactory);

                    
                }  /* end namespace */
            }  /* end namespace */
        }  /* end namespace */
    }  /* end namespace */
    extern "C" { 
    
#else 	/* C style interface */

    typedef struct __x_ABI_CLumia_CImaging_CArtistic_CIWatercolorFilterFactoryVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            __RPC__in __x_ABI_CLumia_CImaging_CArtistic_CIWatercolorFilterFactory * This,
            /* [in] */ __RPC__in REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            __RPC__in __x_ABI_CLumia_CImaging_CArtistic_CIWatercolorFilterFactory * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            __RPC__in __x_ABI_CLumia_CImaging_CArtistic_CIWatercolorFilterFactory * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetIids )( 
            __RPC__in __x_ABI_CLumia_CImaging_CArtistic_CIWatercolorFilterFactory * This,
            /* [out] */ __RPC__out ULONG *iidCount,
            /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
        
        HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )( 
            __RPC__in __x_ABI_CLumia_CImaging_CArtistic_CIWatercolorFilterFactory * This,
            /* [out] */ __RPC__deref_out_opt HSTRING *className);
        
        HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )( 
            __RPC__in __x_ABI_CLumia_CImaging_CArtistic_CIWatercolorFilterFactory * This,
            /* [out] */ __RPC__out TrustLevel *trustLevel);
        
        HRESULT ( STDMETHODCALLTYPE *CreateWithIntensities )( 
            __RPC__in __x_ABI_CLumia_CImaging_CArtistic_CIWatercolorFilterFactory * This,
            /* [in] */ DOUBLE lightIntensity,
            /* [in] */ DOUBLE colorIntensity,
            /* [out][retval] */ __RPC__deref_out_opt __x_ABI_CLumia_CImaging_CArtistic_CIWatercolorFilter **__returnValue);
        
        END_INTERFACE
    } __x_ABI_CLumia_CImaging_CArtistic_CIWatercolorFilterFactoryVtbl;

    interface __x_ABI_CLumia_CImaging_CArtistic_CIWatercolorFilterFactory
    {
        CONST_VTBL struct __x_ABI_CLumia_CImaging_CArtistic_CIWatercolorFilterFactoryVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define __x_ABI_CLumia_CImaging_CArtistic_CIWatercolorFilterFactory_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __x_ABI_CLumia_CImaging_CArtistic_CIWatercolorFilterFactory_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __x_ABI_CLumia_CImaging_CArtistic_CIWatercolorFilterFactory_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __x_ABI_CLumia_CImaging_CArtistic_CIWatercolorFilterFactory_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 

#define __x_ABI_CLumia_CImaging_CArtistic_CIWatercolorFilterFactory_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 

#define __x_ABI_CLumia_CImaging_CArtistic_CIWatercolorFilterFactory_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 


#define __x_ABI_CLumia_CImaging_CArtistic_CIWatercolorFilterFactory_CreateWithIntensities(This,lightIntensity,colorIntensity,__returnValue)	\
    ( (This)->lpVtbl -> CreateWithIntensities(This,lightIntensity,colorIntensity,__returnValue) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* ____x_ABI_CLumia_CImaging_CArtistic_CIWatercolorFilterFactory_INTERFACE_DEFINED__ */


/* interface __MIDL_itf_Lumia2EImaging2EArtistic_0000_0070 */
/* [local] */ 

#ifndef RUNTIMECLASS_Lumia_Imaging_Artistic_AntiqueFilter_DEFINED
#define RUNTIMECLASS_Lumia_Imaging_Artistic_AntiqueFilter_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Lumia_Imaging_Artistic_AntiqueFilter[] = L"Lumia.Imaging.Artistic.AntiqueFilter";
#endif
#ifndef RUNTIMECLASS_Lumia_Imaging_Artistic_CartoonFilter_DEFINED
#define RUNTIMECLASS_Lumia_Imaging_Artistic_CartoonFilter_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Lumia_Imaging_Artistic_CartoonFilter[] = L"Lumia.Imaging.Artistic.CartoonFilter";
#endif
#ifndef RUNTIMECLASS_Lumia_Imaging_Artistic_ColorSwapFilter_DEFINED
#define RUNTIMECLASS_Lumia_Imaging_Artistic_ColorSwapFilter_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Lumia_Imaging_Artistic_ColorSwapFilter[] = L"Lumia.Imaging.Artistic.ColorSwapFilter";
#endif
#ifndef RUNTIMECLASS_Lumia_Imaging_Artistic_EmbossFilter_DEFINED
#define RUNTIMECLASS_Lumia_Imaging_Artistic_EmbossFilter_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Lumia_Imaging_Artistic_EmbossFilter[] = L"Lumia.Imaging.Artistic.EmbossFilter";
#endif
#ifndef RUNTIMECLASS_Lumia_Imaging_Artistic_FogFilter_DEFINED
#define RUNTIMECLASS_Lumia_Imaging_Artistic_FogFilter_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Lumia_Imaging_Artistic_FogFilter[] = L"Lumia.Imaging.Artistic.FogFilter";
#endif
#ifndef RUNTIMECLASS_Lumia_Imaging_Artistic_FoundationFilter_DEFINED
#define RUNTIMECLASS_Lumia_Imaging_Artistic_FoundationFilter_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Lumia_Imaging_Artistic_FoundationFilter[] = L"Lumia.Imaging.Artistic.FoundationFilter";
#endif
#ifndef RUNTIMECLASS_Lumia_Imaging_Artistic_GrayscaleNegativeFilter_DEFINED
#define RUNTIMECLASS_Lumia_Imaging_Artistic_GrayscaleNegativeFilter_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Lumia_Imaging_Artistic_GrayscaleNegativeFilter[] = L"Lumia.Imaging.Artistic.GrayscaleNegativeFilter";
#endif
#ifndef RUNTIMECLASS_Lumia_Imaging_Artistic_LomoFilter_DEFINED
#define RUNTIMECLASS_Lumia_Imaging_Artistic_LomoFilter_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Lumia_Imaging_Artistic_LomoFilter[] = L"Lumia.Imaging.Artistic.LomoFilter";
#endif
#ifndef RUNTIMECLASS_Lumia_Imaging_Artistic_MagicPenFilter_DEFINED
#define RUNTIMECLASS_Lumia_Imaging_Artistic_MagicPenFilter_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Lumia_Imaging_Artistic_MagicPenFilter[] = L"Lumia.Imaging.Artistic.MagicPenFilter";
#endif
#ifndef RUNTIMECLASS_Lumia_Imaging_Artistic_MilkyFilter_DEFINED
#define RUNTIMECLASS_Lumia_Imaging_Artistic_MilkyFilter_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Lumia_Imaging_Artistic_MilkyFilter[] = L"Lumia.Imaging.Artistic.MilkyFilter";
#endif
#ifndef RUNTIMECLASS_Lumia_Imaging_Artistic_MirrorFilter_DEFINED
#define RUNTIMECLASS_Lumia_Imaging_Artistic_MirrorFilter_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Lumia_Imaging_Artistic_MirrorFilter[] = L"Lumia.Imaging.Artistic.MirrorFilter";
#endif
#ifndef RUNTIMECLASS_Lumia_Imaging_Artistic_MonoColorFilter_DEFINED
#define RUNTIMECLASS_Lumia_Imaging_Artistic_MonoColorFilter_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Lumia_Imaging_Artistic_MonoColorFilter[] = L"Lumia.Imaging.Artistic.MonoColorFilter";
#endif
#ifndef RUNTIMECLASS_Lumia_Imaging_Artistic_MoonlightFilter_DEFINED
#define RUNTIMECLASS_Lumia_Imaging_Artistic_MoonlightFilter_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Lumia_Imaging_Artistic_MoonlightFilter[] = L"Lumia.Imaging.Artistic.MoonlightFilter";
#endif
#ifndef RUNTIMECLASS_Lumia_Imaging_Artistic_NegativeFilter_DEFINED
#define RUNTIMECLASS_Lumia_Imaging_Artistic_NegativeFilter_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Lumia_Imaging_Artistic_NegativeFilter[] = L"Lumia.Imaging.Artistic.NegativeFilter";
#endif
#ifndef RUNTIMECLASS_Lumia_Imaging_Artistic_OilyFilter_DEFINED
#define RUNTIMECLASS_Lumia_Imaging_Artistic_OilyFilter_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Lumia_Imaging_Artistic_OilyFilter[] = L"Lumia.Imaging.Artistic.OilyFilter";
#endif
#ifndef RUNTIMECLASS_Lumia_Imaging_Artistic_PaintFilter_DEFINED
#define RUNTIMECLASS_Lumia_Imaging_Artistic_PaintFilter_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Lumia_Imaging_Artistic_PaintFilter[] = L"Lumia.Imaging.Artistic.PaintFilter";
#endif
#ifndef RUNTIMECLASS_Lumia_Imaging_Artistic_PosterizeFilter_DEFINED
#define RUNTIMECLASS_Lumia_Imaging_Artistic_PosterizeFilter_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Lumia_Imaging_Artistic_PosterizeFilter[] = L"Lumia.Imaging.Artistic.PosterizeFilter";
#endif
#ifndef RUNTIMECLASS_Lumia_Imaging_Artistic_SepiaFilter_DEFINED
#define RUNTIMECLASS_Lumia_Imaging_Artistic_SepiaFilter_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Lumia_Imaging_Artistic_SepiaFilter[] = L"Lumia.Imaging.Artistic.SepiaFilter";
#endif
#ifndef RUNTIMECLASS_Lumia_Imaging_Artistic_SketchFilter_DEFINED
#define RUNTIMECLASS_Lumia_Imaging_Artistic_SketchFilter_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Lumia_Imaging_Artistic_SketchFilter[] = L"Lumia.Imaging.Artistic.SketchFilter";
#endif
#ifndef RUNTIMECLASS_Lumia_Imaging_Artistic_SolarizeFilter_DEFINED
#define RUNTIMECLASS_Lumia_Imaging_Artistic_SolarizeFilter_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Lumia_Imaging_Artistic_SolarizeFilter[] = L"Lumia.Imaging.Artistic.SolarizeFilter";
#endif
#ifndef RUNTIMECLASS_Lumia_Imaging_Artistic_SplitToneRange_DEFINED
#define RUNTIMECLASS_Lumia_Imaging_Artistic_SplitToneRange_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Lumia_Imaging_Artistic_SplitToneRange[] = L"Lumia.Imaging.Artistic.SplitToneRange";
#endif
#ifndef RUNTIMECLASS_Lumia_Imaging_Artistic_SplitToneFilter_DEFINED
#define RUNTIMECLASS_Lumia_Imaging_Artistic_SplitToneFilter_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Lumia_Imaging_Artistic_SplitToneFilter[] = L"Lumia.Imaging.Artistic.SplitToneFilter";
#endif
#ifndef RUNTIMECLASS_Lumia_Imaging_Artistic_SpotlightFilter_DEFINED
#define RUNTIMECLASS_Lumia_Imaging_Artistic_SpotlightFilter_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Lumia_Imaging_Artistic_SpotlightFilter[] = L"Lumia.Imaging.Artistic.SpotlightFilter";
#endif
#ifndef RUNTIMECLASS_Lumia_Imaging_Artistic_StampFilter_DEFINED
#define RUNTIMECLASS_Lumia_Imaging_Artistic_StampFilter_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Lumia_Imaging_Artistic_StampFilter[] = L"Lumia.Imaging.Artistic.StampFilter";
#endif
#ifndef RUNTIMECLASS_Lumia_Imaging_Artistic_VignettingFilter_DEFINED
#define RUNTIMECLASS_Lumia_Imaging_Artistic_VignettingFilter_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Lumia_Imaging_Artistic_VignettingFilter[] = L"Lumia.Imaging.Artistic.VignettingFilter";
#endif
#ifndef RUNTIMECLASS_Lumia_Imaging_Artistic_WarpFilter_DEFINED
#define RUNTIMECLASS_Lumia_Imaging_Artistic_WarpFilter_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Lumia_Imaging_Artistic_WarpFilter[] = L"Lumia.Imaging.Artistic.WarpFilter";
#endif
#ifndef RUNTIMECLASS_Lumia_Imaging_Artistic_WatercolorFilter_DEFINED
#define RUNTIMECLASS_Lumia_Imaging_Artistic_WatercolorFilter_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Lumia_Imaging_Artistic_WatercolorFilter[] = L"Lumia.Imaging.Artistic.WatercolorFilter";
#endif


/* interface __MIDL_itf_Lumia2EImaging2EArtistic_0000_0070 */
/* [local] */ 



extern RPC_IF_HANDLE __MIDL_itf_Lumia2EImaging2EArtistic_0000_0070_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_Lumia2EImaging2EArtistic_0000_0070_v0_0_s_ifspec;

/* Additional Prototypes for ALL interfaces */

/* end of Additional Prototypes */

#ifdef __cplusplus
}
#endif

#endif


