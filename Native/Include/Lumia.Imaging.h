

/* this ALWAYS GENERATED file contains the definitions for the interfaces */


 /* File created by MIDL compiler version 8.00.0603 */
/* at Fri Dec 12 18:40:27 2014
 */
/* Compiler settings for C:\Users\cadahl\AppData\Local\Temp\Lumia.Imaging.idl-d1b60d14:
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

#ifndef __Lumia2EImaging_h__
#define __Lumia2EImaging_h__

#if defined(_MSC_VER) && (_MSC_VER >= 1020)
#pragma once
#endif

/* Forward Declarations */ 

#ifndef ____FIIterator_1_Lumia__CImaging__CColorPlaneDescriptor_FWD_DEFINED__
#define ____FIIterator_1_Lumia__CImaging__CColorPlaneDescriptor_FWD_DEFINED__
typedef interface __FIIterator_1_Lumia__CImaging__CColorPlaneDescriptor __FIIterator_1_Lumia__CImaging__CColorPlaneDescriptor;

#endif 	/* ____FIIterator_1_Lumia__CImaging__CColorPlaneDescriptor_FWD_DEFINED__ */


#ifndef ____FIIterable_1_Lumia__CImaging__CColorPlaneDescriptor_FWD_DEFINED__
#define ____FIIterable_1_Lumia__CImaging__CColorPlaneDescriptor_FWD_DEFINED__
typedef interface __FIIterable_1_Lumia__CImaging__CColorPlaneDescriptor __FIIterable_1_Lumia__CImaging__CColorPlaneDescriptor;

#endif 	/* ____FIIterable_1_Lumia__CImaging__CColorPlaneDescriptor_FWD_DEFINED__ */


#ifndef ____FIIterator_1_Lumia__CImaging__CIFilter_FWD_DEFINED__
#define ____FIIterator_1_Lumia__CImaging__CIFilter_FWD_DEFINED__
typedef interface __FIIterator_1_Lumia__CImaging__CIFilter __FIIterator_1_Lumia__CImaging__CIFilter;

#endif 	/* ____FIIterator_1_Lumia__CImaging__CIFilter_FWD_DEFINED__ */


#ifndef ____FIIterable_1_Lumia__CImaging__CIFilter_FWD_DEFINED__
#define ____FIIterable_1_Lumia__CImaging__CIFilter_FWD_DEFINED__
typedef interface __FIIterable_1_Lumia__CImaging__CIFilter __FIIterable_1_Lumia__CImaging__CIFilter;

#endif 	/* ____FIIterable_1_Lumia__CImaging__CIFilter_FWD_DEFINED__ */


#ifndef ____FIIterator_1_Lumia__CImaging__CIImageProvider_FWD_DEFINED__
#define ____FIIterator_1_Lumia__CImaging__CIImageProvider_FWD_DEFINED__
typedef interface __FIIterator_1_Lumia__CImaging__CIImageProvider __FIIterator_1_Lumia__CImaging__CIImageProvider;

#endif 	/* ____FIIterator_1_Lumia__CImaging__CIImageProvider_FWD_DEFINED__ */


#ifndef ____FIIterable_1_Lumia__CImaging__CIImageProvider_FWD_DEFINED__
#define ____FIIterable_1_Lumia__CImaging__CIImageProvider_FWD_DEFINED__
typedef interface __FIIterable_1_Lumia__CImaging__CIImageProvider __FIIterable_1_Lumia__CImaging__CIImageProvider;

#endif 	/* ____FIIterable_1_Lumia__CImaging__CIImageProvider_FWD_DEFINED__ */


#ifndef ____FIVectorView_1_Lumia__CImaging__CColorPlaneDescriptor_FWD_DEFINED__
#define ____FIVectorView_1_Lumia__CImaging__CColorPlaneDescriptor_FWD_DEFINED__
typedef interface __FIVectorView_1_Lumia__CImaging__CColorPlaneDescriptor __FIVectorView_1_Lumia__CImaging__CColorPlaneDescriptor;

#endif 	/* ____FIVectorView_1_Lumia__CImaging__CColorPlaneDescriptor_FWD_DEFINED__ */


#ifndef ____FIVectorView_1_Lumia__CImaging__CIImageProvider_FWD_DEFINED__
#define ____FIVectorView_1_Lumia__CImaging__CIImageProvider_FWD_DEFINED__
typedef interface __FIVectorView_1_Lumia__CImaging__CIImageProvider __FIVectorView_1_Lumia__CImaging__CIImageProvider;

#endif 	/* ____FIVectorView_1_Lumia__CImaging__CIImageProvider_FWD_DEFINED__ */


#ifndef ____FIAsyncOperationCompletedHandler_1_Lumia__CImaging__CBitmap_FWD_DEFINED__
#define ____FIAsyncOperationCompletedHandler_1_Lumia__CImaging__CBitmap_FWD_DEFINED__
typedef interface __FIAsyncOperationCompletedHandler_1_Lumia__CImaging__CBitmap __FIAsyncOperationCompletedHandler_1_Lumia__CImaging__CBitmap;

#endif 	/* ____FIAsyncOperationCompletedHandler_1_Lumia__CImaging__CBitmap_FWD_DEFINED__ */


#ifndef ____FIAsyncOperation_1_Lumia__CImaging__CBitmap_FWD_DEFINED__
#define ____FIAsyncOperation_1_Lumia__CImaging__CBitmap_FWD_DEFINED__
typedef interface __FIAsyncOperation_1_Lumia__CImaging__CBitmap __FIAsyncOperation_1_Lumia__CImaging__CBitmap;

#endif 	/* ____FIAsyncOperation_1_Lumia__CImaging__CBitmap_FWD_DEFINED__ */


#ifndef ____FIAsyncOperationCompletedHandler_1_Lumia__CImaging__CDiagnosticsReport_FWD_DEFINED__
#define ____FIAsyncOperationCompletedHandler_1_Lumia__CImaging__CDiagnosticsReport_FWD_DEFINED__
typedef interface __FIAsyncOperationCompletedHandler_1_Lumia__CImaging__CDiagnosticsReport __FIAsyncOperationCompletedHandler_1_Lumia__CImaging__CDiagnosticsReport;

#endif 	/* ____FIAsyncOperationCompletedHandler_1_Lumia__CImaging__CDiagnosticsReport_FWD_DEFINED__ */


#ifndef ____FIAsyncOperation_1_Lumia__CImaging__CDiagnosticsReport_FWD_DEFINED__
#define ____FIAsyncOperation_1_Lumia__CImaging__CDiagnosticsReport_FWD_DEFINED__
typedef interface __FIAsyncOperation_1_Lumia__CImaging__CDiagnosticsReport __FIAsyncOperation_1_Lumia__CImaging__CDiagnosticsReport;

#endif 	/* ____FIAsyncOperation_1_Lumia__CImaging__CDiagnosticsReport_FWD_DEFINED__ */


#ifndef ____FIAsyncOperationCompletedHandler_1_Lumia__CImaging__CIReadableBitmap_FWD_DEFINED__
#define ____FIAsyncOperationCompletedHandler_1_Lumia__CImaging__CIReadableBitmap_FWD_DEFINED__
typedef interface __FIAsyncOperationCompletedHandler_1_Lumia__CImaging__CIReadableBitmap __FIAsyncOperationCompletedHandler_1_Lumia__CImaging__CIReadableBitmap;

#endif 	/* ____FIAsyncOperationCompletedHandler_1_Lumia__CImaging__CIReadableBitmap_FWD_DEFINED__ */


#ifndef ____FIAsyncOperation_1_Lumia__CImaging__CIReadableBitmap_FWD_DEFINED__
#define ____FIAsyncOperation_1_Lumia__CImaging__CIReadableBitmap_FWD_DEFINED__
typedef interface __FIAsyncOperation_1_Lumia__CImaging__CIReadableBitmap __FIAsyncOperation_1_Lumia__CImaging__CIReadableBitmap;

#endif 	/* ____FIAsyncOperation_1_Lumia__CImaging__CIReadableBitmap_FWD_DEFINED__ */


#ifndef ____FIAsyncOperationCompletedHandler_1_Lumia__CImaging__CImageProviderInfo_FWD_DEFINED__
#define ____FIAsyncOperationCompletedHandler_1_Lumia__CImaging__CImageProviderInfo_FWD_DEFINED__
typedef interface __FIAsyncOperationCompletedHandler_1_Lumia__CImaging__CImageProviderInfo __FIAsyncOperationCompletedHandler_1_Lumia__CImaging__CImageProviderInfo;

#endif 	/* ____FIAsyncOperationCompletedHandler_1_Lumia__CImaging__CImageProviderInfo_FWD_DEFINED__ */


#ifndef ____FIAsyncOperation_1_Lumia__CImaging__CImageProviderInfo_FWD_DEFINED__
#define ____FIAsyncOperation_1_Lumia__CImaging__CImageProviderInfo_FWD_DEFINED__
typedef interface __FIAsyncOperation_1_Lumia__CImaging__CImageProviderInfo __FIAsyncOperation_1_Lumia__CImaging__CImageProviderInfo;

#endif 	/* ____FIAsyncOperation_1_Lumia__CImaging__CImageProviderInfo_FWD_DEFINED__ */


#ifndef ____FIAsyncOperationCompletedHandler_1___FIVectorView_1_Lumia__CImaging__CIImageProvider_FWD_DEFINED__
#define ____FIAsyncOperationCompletedHandler_1___FIVectorView_1_Lumia__CImaging__CIImageProvider_FWD_DEFINED__
typedef interface __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Lumia__CImaging__CIImageProvider __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Lumia__CImaging__CIImageProvider;

#endif 	/* ____FIAsyncOperationCompletedHandler_1___FIVectorView_1_Lumia__CImaging__CIImageProvider_FWD_DEFINED__ */


#ifndef ____FIAsyncOperation_1___FIVectorView_1_Lumia__CImaging__CIImageProvider_FWD_DEFINED__
#define ____FIAsyncOperation_1___FIVectorView_1_Lumia__CImaging__CIImageProvider_FWD_DEFINED__
typedef interface __FIAsyncOperation_1___FIVectorView_1_Lumia__CImaging__CIImageProvider __FIAsyncOperation_1___FIVectorView_1_Lumia__CImaging__CIImageProvider;

#endif 	/* ____FIAsyncOperation_1___FIVectorView_1_Lumia__CImaging__CIImageProvider_FWD_DEFINED__ */


#ifndef ____x_ABI_CLumia_CImaging_CIPreviewFrameAvailableDelegate_FWD_DEFINED__
#define ____x_ABI_CLumia_CImaging_CIPreviewFrameAvailableDelegate_FWD_DEFINED__
typedef interface __x_ABI_CLumia_CImaging_CIPreviewFrameAvailableDelegate __x_ABI_CLumia_CImaging_CIPreviewFrameAvailableDelegate;

#ifdef __cplusplus
namespace ABI {
    namespace Lumia {
        namespace Imaging {
            interface IPreviewFrameAvailableDelegate;
        } /* end namespace */
    } /* end namespace */
} /* end namespace */

#endif /* __cplusplus */

#endif 	/* ____x_ABI_CLumia_CImaging_CIPreviewFrameAvailableDelegate_FWD_DEFINED__ */


#ifndef ____x_ABI_CLumia_CImaging_CIPixelBufferInfo_FWD_DEFINED__
#define ____x_ABI_CLumia_CImaging_CIPixelBufferInfo_FWD_DEFINED__
typedef interface __x_ABI_CLumia_CImaging_CIPixelBufferInfo __x_ABI_CLumia_CImaging_CIPixelBufferInfo;

#ifdef __cplusplus
namespace ABI {
    namespace Lumia {
        namespace Imaging {
            interface IPixelBufferInfo;
        } /* end namespace */
    } /* end namespace */
} /* end namespace */

#endif /* __cplusplus */

#endif 	/* ____x_ABI_CLumia_CImaging_CIPixelBufferInfo_FWD_DEFINED__ */


#ifndef ____x_ABI_CLumia_CImaging_CIReadableBitmap_FWD_DEFINED__
#define ____x_ABI_CLumia_CImaging_CIReadableBitmap_FWD_DEFINED__
typedef interface __x_ABI_CLumia_CImaging_CIReadableBitmap __x_ABI_CLumia_CImaging_CIReadableBitmap;

#ifdef __cplusplus
namespace ABI {
    namespace Lumia {
        namespace Imaging {
            interface IReadableBitmap;
        } /* end namespace */
    } /* end namespace */
} /* end namespace */

#endif /* __cplusplus */

#endif 	/* ____x_ABI_CLumia_CImaging_CIReadableBitmap_FWD_DEFINED__ */


#ifndef ____x_ABI_CLumia_CImaging_CIBitmap_FWD_DEFINED__
#define ____x_ABI_CLumia_CImaging_CIBitmap_FWD_DEFINED__
typedef interface __x_ABI_CLumia_CImaging_CIBitmap __x_ABI_CLumia_CImaging_CIBitmap;

#ifdef __cplusplus
namespace ABI {
    namespace Lumia {
        namespace Imaging {
            interface IBitmap;
        } /* end namespace */
    } /* end namespace */
} /* end namespace */

#endif /* __cplusplus */

#endif 	/* ____x_ABI_CLumia_CImaging_CIBitmap_FWD_DEFINED__ */


#ifndef ____x_ABI_CLumia_CImaging_CIBitmapFactory_FWD_DEFINED__
#define ____x_ABI_CLumia_CImaging_CIBitmapFactory_FWD_DEFINED__
typedef interface __x_ABI_CLumia_CImaging_CIBitmapFactory __x_ABI_CLumia_CImaging_CIBitmapFactory;

#ifdef __cplusplus
namespace ABI {
    namespace Lumia {
        namespace Imaging {
            interface IBitmapFactory;
        } /* end namespace */
    } /* end namespace */
} /* end namespace */

#endif /* __cplusplus */

#endif 	/* ____x_ABI_CLumia_CImaging_CIBitmapFactory_FWD_DEFINED__ */


#ifndef ____x_ABI_CLumia_CImaging_CIImageProvider_FWD_DEFINED__
#define ____x_ABI_CLumia_CImaging_CIImageProvider_FWD_DEFINED__
typedef interface __x_ABI_CLumia_CImaging_CIImageProvider __x_ABI_CLumia_CImaging_CIImageProvider;

#ifdef __cplusplus
namespace ABI {
    namespace Lumia {
        namespace Imaging {
            interface IImageProvider;
        } /* end namespace */
    } /* end namespace */
} /* end namespace */

#endif /* __cplusplus */

#endif 	/* ____x_ABI_CLumia_CImaging_CIImageProvider_FWD_DEFINED__ */


#ifndef ____x_ABI_CLumia_CImaging_CIRenderRequest_FWD_DEFINED__
#define ____x_ABI_CLumia_CImaging_CIRenderRequest_FWD_DEFINED__
typedef interface __x_ABI_CLumia_CImaging_CIRenderRequest __x_ABI_CLumia_CImaging_CIRenderRequest;

#ifdef __cplusplus
namespace ABI {
    namespace Lumia {
        namespace Imaging {
            interface IRenderRequest;
        } /* end namespace */
    } /* end namespace */
} /* end namespace */

#endif /* __cplusplus */

#endif 	/* ____x_ABI_CLumia_CImaging_CIRenderRequest_FWD_DEFINED__ */


#ifndef ____x_ABI_CLumia_CImaging_CIFilter_FWD_DEFINED__
#define ____x_ABI_CLumia_CImaging_CIFilter_FWD_DEFINED__
typedef interface __x_ABI_CLumia_CImaging_CIFilter __x_ABI_CLumia_CImaging_CIFilter;

#ifdef __cplusplus
namespace ABI {
    namespace Lumia {
        namespace Imaging {
            interface IFilter;
        } /* end namespace */
    } /* end namespace */
} /* end namespace */

#endif /* __cplusplus */

#endif 	/* ____x_ABI_CLumia_CImaging_CIFilter_FWD_DEFINED__ */


#ifndef ____x_ABI_CLumia_CImaging_CIImageConsumer_FWD_DEFINED__
#define ____x_ABI_CLumia_CImaging_CIImageConsumer_FWD_DEFINED__
typedef interface __x_ABI_CLumia_CImaging_CIImageConsumer __x_ABI_CLumia_CImaging_CIImageConsumer;

#ifdef __cplusplus
namespace ABI {
    namespace Lumia {
        namespace Imaging {
            interface IImageConsumer;
        } /* end namespace */
    } /* end namespace */
} /* end namespace */

#endif /* __cplusplus */

#endif 	/* ____x_ABI_CLumia_CImaging_CIImageConsumer_FWD_DEFINED__ */


#ifndef ____x_ABI_CLumia_CImaging_CIFilterEffect_FWD_DEFINED__
#define ____x_ABI_CLumia_CImaging_CIFilterEffect_FWD_DEFINED__
typedef interface __x_ABI_CLumia_CImaging_CIFilterEffect __x_ABI_CLumia_CImaging_CIFilterEffect;

#ifdef __cplusplus
namespace ABI {
    namespace Lumia {
        namespace Imaging {
            interface IFilterEffect;
        } /* end namespace */
    } /* end namespace */
} /* end namespace */

#endif /* __cplusplus */

#endif 	/* ____x_ABI_CLumia_CImaging_CIFilterEffect_FWD_DEFINED__ */


#ifndef ____x_ABI_CLumia_CImaging_CIAnimationFrame_FWD_DEFINED__
#define ____x_ABI_CLumia_CImaging_CIAnimationFrame_FWD_DEFINED__
typedef interface __x_ABI_CLumia_CImaging_CIAnimationFrame __x_ABI_CLumia_CImaging_CIAnimationFrame;

#ifdef __cplusplus
namespace ABI {
    namespace Lumia {
        namespace Imaging {
            interface IAnimationFrame;
        } /* end namespace */
    } /* end namespace */
} /* end namespace */

#endif /* __cplusplus */

#endif 	/* ____x_ABI_CLumia_CImaging_CIAnimationFrame_FWD_DEFINED__ */


#ifndef ____x_ABI_CLumia_CImaging_CIAnimationFrameFactory_FWD_DEFINED__
#define ____x_ABI_CLumia_CImaging_CIAnimationFrameFactory_FWD_DEFINED__
typedef interface __x_ABI_CLumia_CImaging_CIAnimationFrameFactory __x_ABI_CLumia_CImaging_CIAnimationFrameFactory;

#ifdef __cplusplus
namespace ABI {
    namespace Lumia {
        namespace Imaging {
            interface IAnimationFrameFactory;
        } /* end namespace */
    } /* end namespace */
} /* end namespace */

#endif /* __cplusplus */

#endif 	/* ____x_ABI_CLumia_CImaging_CIAnimationFrameFactory_FWD_DEFINED__ */


#ifndef ____x_ABI_CLumia_CImaging_CIAutoResizeConfiguration_FWD_DEFINED__
#define ____x_ABI_CLumia_CImaging_CIAutoResizeConfiguration_FWD_DEFINED__
typedef interface __x_ABI_CLumia_CImaging_CIAutoResizeConfiguration __x_ABI_CLumia_CImaging_CIAutoResizeConfiguration;

#ifdef __cplusplus
namespace ABI {
    namespace Lumia {
        namespace Imaging {
            interface IAutoResizeConfiguration;
        } /* end namespace */
    } /* end namespace */
} /* end namespace */

#endif /* __cplusplus */

#endif 	/* ____x_ABI_CLumia_CImaging_CIAutoResizeConfiguration_FWD_DEFINED__ */


#ifndef ____x_ABI_CLumia_CImaging_CIAutoResizeConfigurationFactory_FWD_DEFINED__
#define ____x_ABI_CLumia_CImaging_CIAutoResizeConfigurationFactory_FWD_DEFINED__
typedef interface __x_ABI_CLumia_CImaging_CIAutoResizeConfigurationFactory __x_ABI_CLumia_CImaging_CIAutoResizeConfigurationFactory;

#ifdef __cplusplus
namespace ABI {
    namespace Lumia {
        namespace Imaging {
            interface IAutoResizeConfigurationFactory;
        } /* end namespace */
    } /* end namespace */
} /* end namespace */

#endif /* __cplusplus */

#endif 	/* ____x_ABI_CLumia_CImaging_CIAutoResizeConfigurationFactory_FWD_DEFINED__ */


#ifndef ____x_ABI_CLumia_CImaging_CIColorModeDescriptor_FWD_DEFINED__
#define ____x_ABI_CLumia_CImaging_CIColorModeDescriptor_FWD_DEFINED__
typedef interface __x_ABI_CLumia_CImaging_CIColorModeDescriptor __x_ABI_CLumia_CImaging_CIColorModeDescriptor;

#ifdef __cplusplus
namespace ABI {
    namespace Lumia {
        namespace Imaging {
            interface IColorModeDescriptor;
        } /* end namespace */
    } /* end namespace */
} /* end namespace */

#endif /* __cplusplus */

#endif 	/* ____x_ABI_CLumia_CImaging_CIColorModeDescriptor_FWD_DEFINED__ */


#ifndef ____x_ABI_CLumia_CImaging_CIColorModeDescriptorFactory_FWD_DEFINED__
#define ____x_ABI_CLumia_CImaging_CIColorModeDescriptorFactory_FWD_DEFINED__
typedef interface __x_ABI_CLumia_CImaging_CIColorModeDescriptorFactory __x_ABI_CLumia_CImaging_CIColorModeDescriptorFactory;

#ifdef __cplusplus
namespace ABI {
    namespace Lumia {
        namespace Imaging {
            interface IColorModeDescriptorFactory;
        } /* end namespace */
    } /* end namespace */
} /* end namespace */

#endif /* __cplusplus */

#endif 	/* ____x_ABI_CLumia_CImaging_CIColorModeDescriptorFactory_FWD_DEFINED__ */


#ifndef ____x_ABI_CLumia_CImaging_CIColorPlaneDescriptor_FWD_DEFINED__
#define ____x_ABI_CLumia_CImaging_CIColorPlaneDescriptor_FWD_DEFINED__
typedef interface __x_ABI_CLumia_CImaging_CIColorPlaneDescriptor __x_ABI_CLumia_CImaging_CIColorPlaneDescriptor;

#ifdef __cplusplus
namespace ABI {
    namespace Lumia {
        namespace Imaging {
            interface IColorPlaneDescriptor;
        } /* end namespace */
    } /* end namespace */
} /* end namespace */

#endif /* __cplusplus */

#endif 	/* ____x_ABI_CLumia_CImaging_CIColorPlaneDescriptor_FWD_DEFINED__ */


#ifndef ____x_ABI_CLumia_CImaging_CIImageSize_FWD_DEFINED__
#define ____x_ABI_CLumia_CImaging_CIImageSize_FWD_DEFINED__
typedef interface __x_ABI_CLumia_CImaging_CIImageSize __x_ABI_CLumia_CImaging_CIImageSize;

#ifdef __cplusplus
namespace ABI {
    namespace Lumia {
        namespace Imaging {
            interface IImageSize;
        } /* end namespace */
    } /* end namespace */
} /* end namespace */

#endif /* __cplusplus */

#endif 	/* ____x_ABI_CLumia_CImaging_CIImageSize_FWD_DEFINED__ */


#ifndef ____x_ABI_CLumia_CImaging_CIBitmapImageSource_FWD_DEFINED__
#define ____x_ABI_CLumia_CImaging_CIBitmapImageSource_FWD_DEFINED__
typedef interface __x_ABI_CLumia_CImaging_CIBitmapImageSource __x_ABI_CLumia_CImaging_CIBitmapImageSource;

#ifdef __cplusplus
namespace ABI {
    namespace Lumia {
        namespace Imaging {
            interface IBitmapImageSource;
        } /* end namespace */
    } /* end namespace */
} /* end namespace */

#endif /* __cplusplus */

#endif 	/* ____x_ABI_CLumia_CImaging_CIBitmapImageSource_FWD_DEFINED__ */


#ifndef ____x_ABI_CLumia_CImaging_CIBitmapImageSourceFactory_FWD_DEFINED__
#define ____x_ABI_CLumia_CImaging_CIBitmapImageSourceFactory_FWD_DEFINED__
typedef interface __x_ABI_CLumia_CImaging_CIBitmapImageSourceFactory __x_ABI_CLumia_CImaging_CIBitmapImageSourceFactory;

#ifdef __cplusplus
namespace ABI {
    namespace Lumia {
        namespace Imaging {
            interface IBitmapImageSourceFactory;
        } /* end namespace */
    } /* end namespace */
} /* end namespace */

#endif /* __cplusplus */

#endif 	/* ____x_ABI_CLumia_CImaging_CIBitmapImageSourceFactory_FWD_DEFINED__ */


#ifndef ____x_ABI_CLumia_CImaging_CIBitmapProviderImageSource_FWD_DEFINED__
#define ____x_ABI_CLumia_CImaging_CIBitmapProviderImageSource_FWD_DEFINED__
typedef interface __x_ABI_CLumia_CImaging_CIBitmapProviderImageSource __x_ABI_CLumia_CImaging_CIBitmapProviderImageSource;

#ifdef __cplusplus
namespace ABI {
    namespace Lumia {
        namespace Imaging {
            interface IBitmapProviderImageSource;
        } /* end namespace */
    } /* end namespace */
} /* end namespace */

#endif /* __cplusplus */

#endif 	/* ____x_ABI_CLumia_CImaging_CIBitmapProviderImageSource_FWD_DEFINED__ */


#ifndef ____x_ABI_CLumia_CImaging_CIBitmapProviderImageSourceFactory_FWD_DEFINED__
#define ____x_ABI_CLumia_CImaging_CIBitmapProviderImageSourceFactory_FWD_DEFINED__
typedef interface __x_ABI_CLumia_CImaging_CIBitmapProviderImageSourceFactory __x_ABI_CLumia_CImaging_CIBitmapProviderImageSourceFactory;

#ifdef __cplusplus
namespace ABI {
    namespace Lumia {
        namespace Imaging {
            interface IBitmapProviderImageSourceFactory;
        } /* end namespace */
    } /* end namespace */
} /* end namespace */

#endif /* __cplusplus */

#endif 	/* ____x_ABI_CLumia_CImaging_CIBitmapProviderImageSourceFactory_FWD_DEFINED__ */


#ifndef ____x_ABI_CLumia_CImaging_CIReadableBitmapProvider_FWD_DEFINED__
#define ____x_ABI_CLumia_CImaging_CIReadableBitmapProvider_FWD_DEFINED__
typedef interface __x_ABI_CLumia_CImaging_CIReadableBitmapProvider __x_ABI_CLumia_CImaging_CIReadableBitmapProvider;

#ifdef __cplusplus
namespace ABI {
    namespace Lumia {
        namespace Imaging {
            interface IReadableBitmapProvider;
        } /* end namespace */
    } /* end namespace */
} /* end namespace */

#endif /* __cplusplus */

#endif 	/* ____x_ABI_CLumia_CImaging_CIReadableBitmapProvider_FWD_DEFINED__ */


#ifndef ____x_ABI_CLumia_CImaging_CIBitmapRenderer_FWD_DEFINED__
#define ____x_ABI_CLumia_CImaging_CIBitmapRenderer_FWD_DEFINED__
typedef interface __x_ABI_CLumia_CImaging_CIBitmapRenderer __x_ABI_CLumia_CImaging_CIBitmapRenderer;

#ifdef __cplusplus
namespace ABI {
    namespace Lumia {
        namespace Imaging {
            interface IBitmapRenderer;
        } /* end namespace */
    } /* end namespace */
} /* end namespace */

#endif /* __cplusplus */

#endif 	/* ____x_ABI_CLumia_CImaging_CIBitmapRenderer_FWD_DEFINED__ */


#ifndef ____x_ABI_CLumia_CImaging_CIBitmapRendererFactory_FWD_DEFINED__
#define ____x_ABI_CLumia_CImaging_CIBitmapRendererFactory_FWD_DEFINED__
typedef interface __x_ABI_CLumia_CImaging_CIBitmapRendererFactory __x_ABI_CLumia_CImaging_CIBitmapRendererFactory;

#ifdef __cplusplus
namespace ABI {
    namespace Lumia {
        namespace Imaging {
            interface IBitmapRendererFactory;
        } /* end namespace */
    } /* end namespace */
} /* end namespace */

#endif /* __cplusplus */

#endif 	/* ____x_ABI_CLumia_CImaging_CIBitmapRendererFactory_FWD_DEFINED__ */


#ifndef ____x_ABI_CLumia_CImaging_CIDiagnosticsReport_FWD_DEFINED__
#define ____x_ABI_CLumia_CImaging_CIDiagnosticsReport_FWD_DEFINED__
typedef interface __x_ABI_CLumia_CImaging_CIDiagnosticsReport __x_ABI_CLumia_CImaging_CIDiagnosticsReport;

#ifdef __cplusplus
namespace ABI {
    namespace Lumia {
        namespace Imaging {
            interface IDiagnosticsReport;
        } /* end namespace */
    } /* end namespace */
} /* end namespace */

#endif /* __cplusplus */

#endif 	/* ____x_ABI_CLumia_CImaging_CIDiagnosticsReport_FWD_DEFINED__ */


#ifndef ____x_ABI_CLumia_CImaging_CIDiagnosticsReportStatics_FWD_DEFINED__
#define ____x_ABI_CLumia_CImaging_CIDiagnosticsReportStatics_FWD_DEFINED__
typedef interface __x_ABI_CLumia_CImaging_CIDiagnosticsReportStatics __x_ABI_CLumia_CImaging_CIDiagnosticsReportStatics;

#ifdef __cplusplus
namespace ABI {
    namespace Lumia {
        namespace Imaging {
            interface IDiagnosticsReportStatics;
        } /* end namespace */
    } /* end namespace */
} /* end namespace */

#endif /* __cplusplus */

#endif 	/* ____x_ABI_CLumia_CImaging_CIDiagnosticsReportStatics_FWD_DEFINED__ */


#ifndef ____x_ABI_CLumia_CImaging_CIActiveFrame_FWD_DEFINED__
#define ____x_ABI_CLumia_CImaging_CIActiveFrame_FWD_DEFINED__
typedef interface __x_ABI_CLumia_CImaging_CIActiveFrame __x_ABI_CLumia_CImaging_CIActiveFrame;

#ifdef __cplusplus
namespace ABI {
    namespace Lumia {
        namespace Imaging {
            interface IActiveFrame;
        } /* end namespace */
    } /* end namespace */
} /* end namespace */

#endif /* __cplusplus */

#endif 	/* ____x_ABI_CLumia_CImaging_CIActiveFrame_FWD_DEFINED__ */


#ifndef ____x_ABI_CLumia_CImaging_CIBufferImageSource_FWD_DEFINED__
#define ____x_ABI_CLumia_CImaging_CIBufferImageSource_FWD_DEFINED__
typedef interface __x_ABI_CLumia_CImaging_CIBufferImageSource __x_ABI_CLumia_CImaging_CIBufferImageSource;

#ifdef __cplusplus
namespace ABI {
    namespace Lumia {
        namespace Imaging {
            interface IBufferImageSource;
        } /* end namespace */
    } /* end namespace */
} /* end namespace */

#endif /* __cplusplus */

#endif 	/* ____x_ABI_CLumia_CImaging_CIBufferImageSource_FWD_DEFINED__ */


#ifndef ____x_ABI_CLumia_CImaging_CIBufferImageSourceFactory_FWD_DEFINED__
#define ____x_ABI_CLumia_CImaging_CIBufferImageSourceFactory_FWD_DEFINED__
typedef interface __x_ABI_CLumia_CImaging_CIBufferImageSourceFactory __x_ABI_CLumia_CImaging_CIBufferImageSourceFactory;

#ifdef __cplusplus
namespace ABI {
    namespace Lumia {
        namespace Imaging {
            interface IBufferImageSourceFactory;
        } /* end namespace */
    } /* end namespace */
} /* end namespace */

#endif /* __cplusplus */

#endif 	/* ____x_ABI_CLumia_CImaging_CIBufferImageSourceFactory_FWD_DEFINED__ */


#ifndef ____x_ABI_CLumia_CImaging_CIBufferProviderImageSource_FWD_DEFINED__
#define ____x_ABI_CLumia_CImaging_CIBufferProviderImageSource_FWD_DEFINED__
typedef interface __x_ABI_CLumia_CImaging_CIBufferProviderImageSource __x_ABI_CLumia_CImaging_CIBufferProviderImageSource;

#ifdef __cplusplus
namespace ABI {
    namespace Lumia {
        namespace Imaging {
            interface IBufferProviderImageSource;
        } /* end namespace */
    } /* end namespace */
} /* end namespace */

#endif /* __cplusplus */

#endif 	/* ____x_ABI_CLumia_CImaging_CIBufferProviderImageSource_FWD_DEFINED__ */


#ifndef ____x_ABI_CLumia_CImaging_CIBufferProviderImageSourceFactory_FWD_DEFINED__
#define ____x_ABI_CLumia_CImaging_CIBufferProviderImageSourceFactory_FWD_DEFINED__
typedef interface __x_ABI_CLumia_CImaging_CIBufferProviderImageSourceFactory __x_ABI_CLumia_CImaging_CIBufferProviderImageSourceFactory;

#ifdef __cplusplus
namespace ABI {
    namespace Lumia {
        namespace Imaging {
            interface IBufferProviderImageSourceFactory;
        } /* end namespace */
    } /* end namespace */
} /* end namespace */

#endif /* __cplusplus */

#endif 	/* ____x_ABI_CLumia_CImaging_CIBufferProviderImageSourceFactory_FWD_DEFINED__ */


#ifndef ____x_ABI_CLumia_CImaging_CIBufferProvider_FWD_DEFINED__
#define ____x_ABI_CLumia_CImaging_CIBufferProvider_FWD_DEFINED__
typedef interface __x_ABI_CLumia_CImaging_CIBufferProvider __x_ABI_CLumia_CImaging_CIBufferProvider;

#ifdef __cplusplus
namespace ABI {
    namespace Lumia {
        namespace Imaging {
            interface IBufferProvider;
        } /* end namespace */
    } /* end namespace */
} /* end namespace */

#endif /* __cplusplus */

#endif 	/* ____x_ABI_CLumia_CImaging_CIBufferProvider_FWD_DEFINED__ */


#ifndef ____x_ABI_CLumia_CImaging_CICachingEffect_FWD_DEFINED__
#define ____x_ABI_CLumia_CImaging_CICachingEffect_FWD_DEFINED__
typedef interface __x_ABI_CLumia_CImaging_CICachingEffect __x_ABI_CLumia_CImaging_CICachingEffect;

#ifdef __cplusplus
namespace ABI {
    namespace Lumia {
        namespace Imaging {
            interface ICachingEffect;
        } /* end namespace */
    } /* end namespace */
} /* end namespace */

#endif /* __cplusplus */

#endif 	/* ____x_ABI_CLumia_CImaging_CICachingEffect_FWD_DEFINED__ */


#ifndef ____x_ABI_CLumia_CImaging_CICachingEffectFactory_FWD_DEFINED__
#define ____x_ABI_CLumia_CImaging_CICachingEffectFactory_FWD_DEFINED__
typedef interface __x_ABI_CLumia_CImaging_CICachingEffectFactory __x_ABI_CLumia_CImaging_CICachingEffectFactory;

#ifdef __cplusplus
namespace ABI {
    namespace Lumia {
        namespace Imaging {
            interface ICachingEffectFactory;
        } /* end namespace */
    } /* end namespace */
} /* end namespace */

#endif /* __cplusplus */

#endif 	/* ____x_ABI_CLumia_CImaging_CICachingEffectFactory_FWD_DEFINED__ */


#ifndef ____x_ABI_CLumia_CImaging_CIGradient_FWD_DEFINED__
#define ____x_ABI_CLumia_CImaging_CIGradient_FWD_DEFINED__
typedef interface __x_ABI_CLumia_CImaging_CIGradient __x_ABI_CLumia_CImaging_CIGradient;

#ifdef __cplusplus
namespace ABI {
    namespace Lumia {
        namespace Imaging {
            interface IGradient;
        } /* end namespace */
    } /* end namespace */
} /* end namespace */

#endif /* __cplusplus */

#endif 	/* ____x_ABI_CLumia_CImaging_CIGradient_FWD_DEFINED__ */


#ifndef ____x_ABI_CLumia_CImaging_CIColorImageSource_FWD_DEFINED__
#define ____x_ABI_CLumia_CImaging_CIColorImageSource_FWD_DEFINED__
typedef interface __x_ABI_CLumia_CImaging_CIColorImageSource __x_ABI_CLumia_CImaging_CIColorImageSource;

#ifdef __cplusplus
namespace ABI {
    namespace Lumia {
        namespace Imaging {
            interface IColorImageSource;
        } /* end namespace */
    } /* end namespace */
} /* end namespace */

#endif /* __cplusplus */

#endif 	/* ____x_ABI_CLumia_CImaging_CIColorImageSource_FWD_DEFINED__ */


#ifndef ____x_ABI_CLumia_CImaging_CIColorImageSourceFactory_FWD_DEFINED__
#define ____x_ABI_CLumia_CImaging_CIColorImageSourceFactory_FWD_DEFINED__
typedef interface __x_ABI_CLumia_CImaging_CIColorImageSourceFactory __x_ABI_CLumia_CImaging_CIColorImageSourceFactory;

#ifdef __cplusplus
namespace ABI {
    namespace Lumia {
        namespace Imaging {
            interface IColorImageSourceFactory;
        } /* end namespace */
    } /* end namespace */
} /* end namespace */

#endif /* __cplusplus */

#endif 	/* ____x_ABI_CLumia_CImaging_CIColorImageSourceFactory_FWD_DEFINED__ */


#ifndef ____x_ABI_CLumia_CImaging_CIVersion_FWD_DEFINED__
#define ____x_ABI_CLumia_CImaging_CIVersion_FWD_DEFINED__
typedef interface __x_ABI_CLumia_CImaging_CIVersion __x_ABI_CLumia_CImaging_CIVersion;

#ifdef __cplusplus
namespace ABI {
    namespace Lumia {
        namespace Imaging {
            interface IVersion;
        } /* end namespace */
    } /* end namespace */
} /* end namespace */

#endif /* __cplusplus */

#endif 	/* ____x_ABI_CLumia_CImaging_CIVersion_FWD_DEFINED__ */


#ifndef ____x_ABI_CLumia_CImaging_CIVersionFactory_FWD_DEFINED__
#define ____x_ABI_CLumia_CImaging_CIVersionFactory_FWD_DEFINED__
typedef interface __x_ABI_CLumia_CImaging_CIVersionFactory __x_ABI_CLumia_CImaging_CIVersionFactory;

#ifdef __cplusplus
namespace ABI {
    namespace Lumia {
        namespace Imaging {
            interface IVersionFactory;
        } /* end namespace */
    } /* end namespace */
} /* end namespace */

#endif /* __cplusplus */

#endif 	/* ____x_ABI_CLumia_CImaging_CIVersionFactory_FWD_DEFINED__ */


#ifndef ____x_ABI_CLumia_CImaging_CISdkInfo_FWD_DEFINED__
#define ____x_ABI_CLumia_CImaging_CISdkInfo_FWD_DEFINED__
typedef interface __x_ABI_CLumia_CImaging_CISdkInfo __x_ABI_CLumia_CImaging_CISdkInfo;

#ifdef __cplusplus
namespace ABI {
    namespace Lumia {
        namespace Imaging {
            interface ISdkInfo;
        } /* end namespace */
    } /* end namespace */
} /* end namespace */

#endif /* __cplusplus */

#endif 	/* ____x_ABI_CLumia_CImaging_CISdkInfo_FWD_DEFINED__ */


#ifndef ____x_ABI_CLumia_CImaging_CISdkInfoStatics_FWD_DEFINED__
#define ____x_ABI_CLumia_CImaging_CISdkInfoStatics_FWD_DEFINED__
typedef interface __x_ABI_CLumia_CImaging_CISdkInfoStatics __x_ABI_CLumia_CImaging_CISdkInfoStatics;

#ifdef __cplusplus
namespace ABI {
    namespace Lumia {
        namespace Imaging {
            interface ISdkInfoStatics;
        } /* end namespace */
    } /* end namespace */
} /* end namespace */

#endif /* __cplusplus */

#endif 	/* ____x_ABI_CLumia_CImaging_CISdkInfoStatics_FWD_DEFINED__ */


#ifndef ____x_ABI_CLumia_CImaging_CIEllipseRadius_FWD_DEFINED__
#define ____x_ABI_CLumia_CImaging_CIEllipseRadius_FWD_DEFINED__
typedef interface __x_ABI_CLumia_CImaging_CIEllipseRadius __x_ABI_CLumia_CImaging_CIEllipseRadius;

#ifdef __cplusplus
namespace ABI {
    namespace Lumia {
        namespace Imaging {
            interface IEllipseRadius;
        } /* end namespace */
    } /* end namespace */
} /* end namespace */

#endif /* __cplusplus */

#endif 	/* ____x_ABI_CLumia_CImaging_CIEllipseRadius_FWD_DEFINED__ */


#ifndef ____x_ABI_CLumia_CImaging_CIEllipseRadiusFactory_FWD_DEFINED__
#define ____x_ABI_CLumia_CImaging_CIEllipseRadiusFactory_FWD_DEFINED__
typedef interface __x_ABI_CLumia_CImaging_CIEllipseRadiusFactory __x_ABI_CLumia_CImaging_CIEllipseRadiusFactory;

#ifdef __cplusplus
namespace ABI {
    namespace Lumia {
        namespace Imaging {
            interface IEllipseRadiusFactory;
        } /* end namespace */
    } /* end namespace */
} /* end namespace */

#endif /* __cplusplus */

#endif 	/* ____x_ABI_CLumia_CImaging_CIEllipseRadiusFactory_FWD_DEFINED__ */


#ifndef ____x_ABI_CLumia_CImaging_CIFilterEffectFactory_FWD_DEFINED__
#define ____x_ABI_CLumia_CImaging_CIFilterEffectFactory_FWD_DEFINED__
typedef interface __x_ABI_CLumia_CImaging_CIFilterEffectFactory __x_ABI_CLumia_CImaging_CIFilterEffectFactory;

#ifdef __cplusplus
namespace ABI {
    namespace Lumia {
        namespace Imaging {
            interface IFilterEffectFactory;
        } /* end namespace */
    } /* end namespace */
} /* end namespace */

#endif /* __cplusplus */

#endif 	/* ____x_ABI_CLumia_CImaging_CIFilterEffectFactory_FWD_DEFINED__ */


#ifndef ____x_ABI_CLumia_CImaging_CIGifRenderer_FWD_DEFINED__
#define ____x_ABI_CLumia_CImaging_CIGifRenderer_FWD_DEFINED__
typedef interface __x_ABI_CLumia_CImaging_CIGifRenderer __x_ABI_CLumia_CImaging_CIGifRenderer;

#ifdef __cplusplus
namespace ABI {
    namespace Lumia {
        namespace Imaging {
            interface IGifRenderer;
        } /* end namespace */
    } /* end namespace */
} /* end namespace */

#endif /* __cplusplus */

#endif 	/* ____x_ABI_CLumia_CImaging_CIGifRenderer_FWD_DEFINED__ */


#ifndef ____x_ABI_CLumia_CImaging_CIGifRendererFactory_FWD_DEFINED__
#define ____x_ABI_CLumia_CImaging_CIGifRendererFactory_FWD_DEFINED__
typedef interface __x_ABI_CLumia_CImaging_CIGifRendererFactory __x_ABI_CLumia_CImaging_CIGifRendererFactory;

#ifdef __cplusplus
namespace ABI {
    namespace Lumia {
        namespace Imaging {
            interface IGifRendererFactory;
        } /* end namespace */
    } /* end namespace */
} /* end namespace */

#endif /* __cplusplus */

#endif 	/* ____x_ABI_CLumia_CImaging_CIGifRendererFactory_FWD_DEFINED__ */


#ifndef ____x_ABI_CLumia_CImaging_CILinearGradient_FWD_DEFINED__
#define ____x_ABI_CLumia_CImaging_CILinearGradient_FWD_DEFINED__
typedef interface __x_ABI_CLumia_CImaging_CILinearGradient __x_ABI_CLumia_CImaging_CILinearGradient;

#ifdef __cplusplus
namespace ABI {
    namespace Lumia {
        namespace Imaging {
            interface ILinearGradient;
        } /* end namespace */
    } /* end namespace */
} /* end namespace */

#endif /* __cplusplus */

#endif 	/* ____x_ABI_CLumia_CImaging_CILinearGradient_FWD_DEFINED__ */


#ifndef ____x_ABI_CLumia_CImaging_CILinearGradientFactory_FWD_DEFINED__
#define ____x_ABI_CLumia_CImaging_CILinearGradientFactory_FWD_DEFINED__
typedef interface __x_ABI_CLumia_CImaging_CILinearGradientFactory __x_ABI_CLumia_CImaging_CILinearGradientFactory;

#ifdef __cplusplus
namespace ABI {
    namespace Lumia {
        namespace Imaging {
            interface ILinearGradientFactory;
        } /* end namespace */
    } /* end namespace */
} /* end namespace */

#endif /* __cplusplus */

#endif 	/* ____x_ABI_CLumia_CImaging_CILinearGradientFactory_FWD_DEFINED__ */


#ifndef ____x_ABI_CLumia_CImaging_CIRadialGradient_FWD_DEFINED__
#define ____x_ABI_CLumia_CImaging_CIRadialGradient_FWD_DEFINED__
typedef interface __x_ABI_CLumia_CImaging_CIRadialGradient __x_ABI_CLumia_CImaging_CIRadialGradient;

#ifdef __cplusplus
namespace ABI {
    namespace Lumia {
        namespace Imaging {
            interface IRadialGradient;
        } /* end namespace */
    } /* end namespace */
} /* end namespace */

#endif /* __cplusplus */

#endif 	/* ____x_ABI_CLumia_CImaging_CIRadialGradient_FWD_DEFINED__ */


#ifndef ____x_ABI_CLumia_CImaging_CIRadialGradientFactory_FWD_DEFINED__
#define ____x_ABI_CLumia_CImaging_CIRadialGradientFactory_FWD_DEFINED__
typedef interface __x_ABI_CLumia_CImaging_CIRadialGradientFactory __x_ABI_CLumia_CImaging_CIRadialGradientFactory;

#ifdef __cplusplus
namespace ABI {
    namespace Lumia {
        namespace Imaging {
            interface IRadialGradientFactory;
        } /* end namespace */
    } /* end namespace */
} /* end namespace */

#endif /* __cplusplus */

#endif 	/* ____x_ABI_CLumia_CImaging_CIRadialGradientFactory_FWD_DEFINED__ */


#ifndef ____x_ABI_CLumia_CImaging_CIGradientImageSource_FWD_DEFINED__
#define ____x_ABI_CLumia_CImaging_CIGradientImageSource_FWD_DEFINED__
typedef interface __x_ABI_CLumia_CImaging_CIGradientImageSource __x_ABI_CLumia_CImaging_CIGradientImageSource;

#ifdef __cplusplus
namespace ABI {
    namespace Lumia {
        namespace Imaging {
            interface IGradientImageSource;
        } /* end namespace */
    } /* end namespace */
} /* end namespace */

#endif /* __cplusplus */

#endif 	/* ____x_ABI_CLumia_CImaging_CIGradientImageSource_FWD_DEFINED__ */


#ifndef ____x_ABI_CLumia_CImaging_CIGradientImageSourceFactory_FWD_DEFINED__
#define ____x_ABI_CLumia_CImaging_CIGradientImageSourceFactory_FWD_DEFINED__
typedef interface __x_ABI_CLumia_CImaging_CIGradientImageSourceFactory __x_ABI_CLumia_CImaging_CIGradientImageSourceFactory;

#ifdef __cplusplus
namespace ABI {
    namespace Lumia {
        namespace Imaging {
            interface IGradientImageSourceFactory;
        } /* end namespace */
    } /* end namespace */
} /* end namespace */

#endif /* __cplusplus */

#endif 	/* ____x_ABI_CLumia_CImaging_CIGradientImageSourceFactory_FWD_DEFINED__ */


#ifndef ____x_ABI_CLumia_CImaging_CIImageProviderInfo_FWD_DEFINED__
#define ____x_ABI_CLumia_CImaging_CIImageProviderInfo_FWD_DEFINED__
typedef interface __x_ABI_CLumia_CImaging_CIImageProviderInfo __x_ABI_CLumia_CImaging_CIImageProviderInfo;

#ifdef __cplusplus
namespace ABI {
    namespace Lumia {
        namespace Imaging {
            interface IImageProviderInfo;
        } /* end namespace */
    } /* end namespace */
} /* end namespace */

#endif /* __cplusplus */

#endif 	/* ____x_ABI_CLumia_CImaging_CIImageProviderInfo_FWD_DEFINED__ */


#ifndef ____x_ABI_CLumia_CImaging_CIJpegRenderer_FWD_DEFINED__
#define ____x_ABI_CLumia_CImaging_CIJpegRenderer_FWD_DEFINED__
typedef interface __x_ABI_CLumia_CImaging_CIJpegRenderer __x_ABI_CLumia_CImaging_CIJpegRenderer;

#ifdef __cplusplus
namespace ABI {
    namespace Lumia {
        namespace Imaging {
            interface IJpegRenderer;
        } /* end namespace */
    } /* end namespace */
} /* end namespace */

#endif /* __cplusplus */

#endif 	/* ____x_ABI_CLumia_CImaging_CIJpegRenderer_FWD_DEFINED__ */


#ifndef ____x_ABI_CLumia_CImaging_CIJpegRendererFactory_FWD_DEFINED__
#define ____x_ABI_CLumia_CImaging_CIJpegRendererFactory_FWD_DEFINED__
typedef interface __x_ABI_CLumia_CImaging_CIJpegRendererFactory __x_ABI_CLumia_CImaging_CIJpegRendererFactory;

#ifdef __cplusplus
namespace ABI {
    namespace Lumia {
        namespace Imaging {
            interface IJpegRendererFactory;
        } /* end namespace */
    } /* end namespace */
} /* end namespace */

#endif /* __cplusplus */

#endif 	/* ____x_ABI_CLumia_CImaging_CIJpegRendererFactory_FWD_DEFINED__ */


#ifndef ____x_ABI_CLumia_CImaging_CIJpegTools_FWD_DEFINED__
#define ____x_ABI_CLumia_CImaging_CIJpegTools_FWD_DEFINED__
typedef interface __x_ABI_CLumia_CImaging_CIJpegTools __x_ABI_CLumia_CImaging_CIJpegTools;

#ifdef __cplusplus
namespace ABI {
    namespace Lumia {
        namespace Imaging {
            interface IJpegTools;
        } /* end namespace */
    } /* end namespace */
} /* end namespace */

#endif /* __cplusplus */

#endif 	/* ____x_ABI_CLumia_CImaging_CIJpegTools_FWD_DEFINED__ */


#ifndef ____x_ABI_CLumia_CImaging_CIJpegToolsStatics_FWD_DEFINED__
#define ____x_ABI_CLumia_CImaging_CIJpegToolsStatics_FWD_DEFINED__
typedef interface __x_ABI_CLumia_CImaging_CIJpegToolsStatics __x_ABI_CLumia_CImaging_CIJpegToolsStatics;

#ifdef __cplusplus
namespace ABI {
    namespace Lumia {
        namespace Imaging {
            interface IJpegToolsStatics;
        } /* end namespace */
    } /* end namespace */
} /* end namespace */

#endif /* __cplusplus */

#endif 	/* ____x_ABI_CLumia_CImaging_CIJpegToolsStatics_FWD_DEFINED__ */


#ifndef ____x_ABI_CLumia_CImaging_CIRandomAccessStreamImageSource_FWD_DEFINED__
#define ____x_ABI_CLumia_CImaging_CIRandomAccessStreamImageSource_FWD_DEFINED__
typedef interface __x_ABI_CLumia_CImaging_CIRandomAccessStreamImageSource __x_ABI_CLumia_CImaging_CIRandomAccessStreamImageSource;

#ifdef __cplusplus
namespace ABI {
    namespace Lumia {
        namespace Imaging {
            interface IRandomAccessStreamImageSource;
        } /* end namespace */
    } /* end namespace */
} /* end namespace */

#endif /* __cplusplus */

#endif 	/* ____x_ABI_CLumia_CImaging_CIRandomAccessStreamImageSource_FWD_DEFINED__ */


#ifndef ____x_ABI_CLumia_CImaging_CIRandomAccessStreamImageSourceFactory_FWD_DEFINED__
#define ____x_ABI_CLumia_CImaging_CIRandomAccessStreamImageSourceFactory_FWD_DEFINED__
typedef interface __x_ABI_CLumia_CImaging_CIRandomAccessStreamImageSourceFactory __x_ABI_CLumia_CImaging_CIRandomAccessStreamImageSourceFactory;

#ifdef __cplusplus
namespace ABI {
    namespace Lumia {
        namespace Imaging {
            interface IRandomAccessStreamImageSourceFactory;
        } /* end namespace */
    } /* end namespace */
} /* end namespace */

#endif /* __cplusplus */

#endif 	/* ____x_ABI_CLumia_CImaging_CIRandomAccessStreamImageSourceFactory_FWD_DEFINED__ */


#ifndef ____x_ABI_CLumia_CImaging_CIStorageFileImageSource_FWD_DEFINED__
#define ____x_ABI_CLumia_CImaging_CIStorageFileImageSource_FWD_DEFINED__
typedef interface __x_ABI_CLumia_CImaging_CIStorageFileImageSource __x_ABI_CLumia_CImaging_CIStorageFileImageSource;

#ifdef __cplusplus
namespace ABI {
    namespace Lumia {
        namespace Imaging {
            interface IStorageFileImageSource;
        } /* end namespace */
    } /* end namespace */
} /* end namespace */

#endif /* __cplusplus */

#endif 	/* ____x_ABI_CLumia_CImaging_CIStorageFileImageSource_FWD_DEFINED__ */


#ifndef ____x_ABI_CLumia_CImaging_CIStorageFileImageSourceFactory_FWD_DEFINED__
#define ____x_ABI_CLumia_CImaging_CIStorageFileImageSourceFactory_FWD_DEFINED__
typedef interface __x_ABI_CLumia_CImaging_CIStorageFileImageSourceFactory __x_ABI_CLumia_CImaging_CIStorageFileImageSourceFactory;

#ifdef __cplusplus
namespace ABI {
    namespace Lumia {
        namespace Imaging {
            interface IStorageFileImageSourceFactory;
        } /* end namespace */
    } /* end namespace */
} /* end namespace */

#endif /* __cplusplus */

#endif 	/* ____x_ABI_CLumia_CImaging_CIStorageFileImageSourceFactory_FWD_DEFINED__ */


#ifndef ____x_ABI_CLumia_CImaging_CIMediaCapture_FWD_DEFINED__
#define ____x_ABI_CLumia_CImaging_CIMediaCapture_FWD_DEFINED__
typedef interface __x_ABI_CLumia_CImaging_CIMediaCapture __x_ABI_CLumia_CImaging_CIMediaCapture;

#ifdef __cplusplus
namespace ABI {
    namespace Lumia {
        namespace Imaging {
            interface IMediaCapture;
        } /* end namespace */
    } /* end namespace */
} /* end namespace */

#endif /* __cplusplus */

#endif 	/* ____x_ABI_CLumia_CImaging_CIMediaCapture_FWD_DEFINED__ */


#ifndef ____FIAsyncOperationCompletedHandler_1_Windows__CMedia__CMediaProperties__CVideoEncodingProperties_FWD_DEFINED__
#define ____FIAsyncOperationCompletedHandler_1_Windows__CMedia__CMediaProperties__CVideoEncodingProperties_FWD_DEFINED__
typedef interface __FIAsyncOperationCompletedHandler_1_Windows__CMedia__CMediaProperties__CVideoEncodingProperties __FIAsyncOperationCompletedHandler_1_Windows__CMedia__CMediaProperties__CVideoEncodingProperties;

#endif 	/* ____FIAsyncOperationCompletedHandler_1_Windows__CMedia__CMediaProperties__CVideoEncodingProperties_FWD_DEFINED__ */


#ifndef ____FIAsyncOperation_1_Windows__CMedia__CMediaProperties__CVideoEncodingProperties_FWD_DEFINED__
#define ____FIAsyncOperation_1_Windows__CMedia__CMediaProperties__CVideoEncodingProperties_FWD_DEFINED__
typedef interface __FIAsyncOperation_1_Windows__CMedia__CMediaProperties__CVideoEncodingProperties __FIAsyncOperation_1_Windows__CMedia__CMediaProperties__CVideoEncodingProperties;

#endif 	/* ____FIAsyncOperation_1_Windows__CMedia__CMediaProperties__CVideoEncodingProperties_FWD_DEFINED__ */


#ifndef ____FIIterator_1_Windows__CMedia__CMediaProperties__CVideoEncodingProperties_FWD_DEFINED__
#define ____FIIterator_1_Windows__CMedia__CMediaProperties__CVideoEncodingProperties_FWD_DEFINED__
typedef interface __FIIterator_1_Windows__CMedia__CMediaProperties__CVideoEncodingProperties __FIIterator_1_Windows__CMedia__CMediaProperties__CVideoEncodingProperties;

#endif 	/* ____FIIterator_1_Windows__CMedia__CMediaProperties__CVideoEncodingProperties_FWD_DEFINED__ */


#ifndef ____FIIterable_1_Windows__CMedia__CMediaProperties__CVideoEncodingProperties_FWD_DEFINED__
#define ____FIIterable_1_Windows__CMedia__CMediaProperties__CVideoEncodingProperties_FWD_DEFINED__
typedef interface __FIIterable_1_Windows__CMedia__CMediaProperties__CVideoEncodingProperties __FIIterable_1_Windows__CMedia__CMediaProperties__CVideoEncodingProperties;

#endif 	/* ____FIIterable_1_Windows__CMedia__CMediaProperties__CVideoEncodingProperties_FWD_DEFINED__ */


#ifndef ____x_ABI_CLumia_CImaging_CICameraPreviewImageSource_FWD_DEFINED__
#define ____x_ABI_CLumia_CImaging_CICameraPreviewImageSource_FWD_DEFINED__
typedef interface __x_ABI_CLumia_CImaging_CICameraPreviewImageSource __x_ABI_CLumia_CImaging_CICameraPreviewImageSource;

#ifdef __cplusplus
namespace ABI {
    namespace Lumia {
        namespace Imaging {
            interface ICameraPreviewImageSource;
        } /* end namespace */
    } /* end namespace */
} /* end namespace */

#endif /* __cplusplus */

#endif 	/* ____x_ABI_CLumia_CImaging_CICameraPreviewImageSource_FWD_DEFINED__ */


#ifndef ____x_ABI_CLumia_CImaging_CICameraPreviewImageSourceProtectedNonVirtuals_FWD_DEFINED__
#define ____x_ABI_CLumia_CImaging_CICameraPreviewImageSourceProtectedNonVirtuals_FWD_DEFINED__
typedef interface __x_ABI_CLumia_CImaging_CICameraPreviewImageSourceProtectedNonVirtuals __x_ABI_CLumia_CImaging_CICameraPreviewImageSourceProtectedNonVirtuals;

#ifdef __cplusplus
namespace ABI {
    namespace Lumia {
        namespace Imaging {
            interface ICameraPreviewImageSourceProtectedNonVirtuals;
        } /* end namespace */
    } /* end namespace */
} /* end namespace */

#endif /* __cplusplus */

#endif 	/* ____x_ABI_CLumia_CImaging_CICameraPreviewImageSourceProtectedNonVirtuals_FWD_DEFINED__ */


#ifndef ____FIAsyncOperationCompletedHandler_1_Windows__CUI__CXaml__CMedia__CImaging__CWriteableBitmap_FWD_DEFINED__
#define ____FIAsyncOperationCompletedHandler_1_Windows__CUI__CXaml__CMedia__CImaging__CWriteableBitmap_FWD_DEFINED__
typedef interface __FIAsyncOperationCompletedHandler_1_Windows__CUI__CXaml__CMedia__CImaging__CWriteableBitmap __FIAsyncOperationCompletedHandler_1_Windows__CUI__CXaml__CMedia__CImaging__CWriteableBitmap;

#endif 	/* ____FIAsyncOperationCompletedHandler_1_Windows__CUI__CXaml__CMedia__CImaging__CWriteableBitmap_FWD_DEFINED__ */


#ifndef ____FIAsyncOperation_1_Windows__CUI__CXaml__CMedia__CImaging__CWriteableBitmap_FWD_DEFINED__
#define ____FIAsyncOperation_1_Windows__CUI__CXaml__CMedia__CImaging__CWriteableBitmap_FWD_DEFINED__
typedef interface __FIAsyncOperation_1_Windows__CUI__CXaml__CMedia__CImaging__CWriteableBitmap __FIAsyncOperation_1_Windows__CUI__CXaml__CMedia__CImaging__CWriteableBitmap;

#endif 	/* ____FIAsyncOperation_1_Windows__CUI__CXaml__CMedia__CImaging__CWriteableBitmap_FWD_DEFINED__ */


#ifndef ____x_ABI_CLumia_CImaging_CIWriteableBitmapRenderer_FWD_DEFINED__
#define ____x_ABI_CLumia_CImaging_CIWriteableBitmapRenderer_FWD_DEFINED__
typedef interface __x_ABI_CLumia_CImaging_CIWriteableBitmapRenderer __x_ABI_CLumia_CImaging_CIWriteableBitmapRenderer;

#ifdef __cplusplus
namespace ABI {
    namespace Lumia {
        namespace Imaging {
            interface IWriteableBitmapRenderer;
        } /* end namespace */
    } /* end namespace */
} /* end namespace */

#endif /* __cplusplus */

#endif 	/* ____x_ABI_CLumia_CImaging_CIWriteableBitmapRenderer_FWD_DEFINED__ */


#ifndef ____x_ABI_CLumia_CImaging_CIWriteableBitmapRendererFactory_FWD_DEFINED__
#define ____x_ABI_CLumia_CImaging_CIWriteableBitmapRendererFactory_FWD_DEFINED__
typedef interface __x_ABI_CLumia_CImaging_CIWriteableBitmapRendererFactory __x_ABI_CLumia_CImaging_CIWriteableBitmapRendererFactory;

#ifdef __cplusplus
namespace ABI {
    namespace Lumia {
        namespace Imaging {
            interface IWriteableBitmapRendererFactory;
        } /* end namespace */
    } /* end namespace */
} /* end namespace */

#endif /* __cplusplus */

#endif 	/* ____x_ABI_CLumia_CImaging_CIWriteableBitmapRendererFactory_FWD_DEFINED__ */


/* header files for imported files */
#include "inspectable.h"
#include "AsyncInfo.h"
#include "EventToken.h"
#include "Windows.Foundation.h"
#include "Lumia.Imaging.Transforms.h"
#include "Windows.Media.h"
#include "Windows.Media.Capture.h"
#include "Windows.UI.h"
#include "Windows.UI.Xaml.Media.Imaging.h"

#ifdef __cplusplus
extern "C"{
#endif 


/* interface __MIDL_itf_Lumia2EImaging_0000_0000 */
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
class ColorPlaneDescriptor;
} /*Imaging*/
} /*Lumia*/
}
#endif

#ifdef __cplusplus
namespace ABI {
namespace Lumia {
namespace Imaging {
interface IColorPlaneDescriptor;
} /*Imaging*/
} /*Lumia*/
}
#endif


/* interface __MIDL_itf_Lumia2EImaging_0000_0000 */
/* [local] */ 




extern RPC_IF_HANDLE __MIDL_itf_Lumia2EImaging_0000_0000_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_Lumia2EImaging_0000_0000_v0_0_s_ifspec;

/* interface __MIDL_itf_Lumia2EImaging_0000_1961 */




/* interface __MIDL_itf_Lumia2EImaging_0000_1961 */




extern RPC_IF_HANDLE __MIDL_itf_Lumia2EImaging_0000_1961_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_Lumia2EImaging_0000_1961_v0_0_s_ifspec;

/* interface __MIDL_itf_Lumia2EImaging_0000_0001 */
/* [local] */ 

#ifndef DEF___FIIterator_1_Lumia__CImaging__CColorPlaneDescriptor_USE
#define DEF___FIIterator_1_Lumia__CImaging__CColorPlaneDescriptor_USE
#if defined(__cplusplus) && !defined(RO_NO_TEMPLATE_NAME)
} /*extern "C"*/ 
namespace ABI { namespace Windows { namespace Foundation { namespace Collections {
template <>
struct __declspec(uuid("0fd6e245-f4f4-5977-8807-0d511ec07a50"))
IIterator<ABI::Lumia::Imaging::ColorPlaneDescriptor*> : IIterator_impl<ABI::Windows::Foundation::Internal::AggregateType<ABI::Lumia::Imaging::ColorPlaneDescriptor*, ABI::Lumia::Imaging::IColorPlaneDescriptor*>> {
static const wchar_t* z_get_rc_name_impl() {
return L"Windows.Foundation.Collections.IIterator`1<Lumia.Imaging.ColorPlaneDescriptor>"; }
};
typedef IIterator<ABI::Lumia::Imaging::ColorPlaneDescriptor*> __FIIterator_1_Lumia__CImaging__CColorPlaneDescriptor_t;
#define ____FIIterator_1_Lumia__CImaging__CColorPlaneDescriptor_FWD_DEFINED__
#define __FIIterator_1_Lumia__CImaging__CColorPlaneDescriptor ABI::Windows::Foundation::Collections::__FIIterator_1_Lumia__CImaging__CColorPlaneDescriptor_t

/* ABI */ } /* Windows */ } /* Foundation */ } /* Collections */ }
extern "C" {
#endif //__cplusplus
#endif /* DEF___FIIterator_1_Lumia__CImaging__CColorPlaneDescriptor_USE */


/* interface __MIDL_itf_Lumia2EImaging_0000_0001 */
/* [local] */ 




extern RPC_IF_HANDLE __MIDL_itf_Lumia2EImaging_0000_0001_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_Lumia2EImaging_0000_0001_v0_0_s_ifspec;

/* interface __MIDL_itf_Lumia2EImaging_0000_1962 */




/* interface __MIDL_itf_Lumia2EImaging_0000_1962 */




extern RPC_IF_HANDLE __MIDL_itf_Lumia2EImaging_0000_1962_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_Lumia2EImaging_0000_1962_v0_0_s_ifspec;

/* interface __MIDL_itf_Lumia2EImaging_0000_0002 */
/* [local] */ 

#ifndef DEF___FIIterable_1_Lumia__CImaging__CColorPlaneDescriptor_USE
#define DEF___FIIterable_1_Lumia__CImaging__CColorPlaneDescriptor_USE
#if defined(__cplusplus) && !defined(RO_NO_TEMPLATE_NAME)
} /*extern "C"*/ 
namespace ABI { namespace Windows { namespace Foundation { namespace Collections {
template <>
struct __declspec(uuid("2d40aa89-2058-5a94-8859-153d00ddb2ea"))
IIterable<ABI::Lumia::Imaging::ColorPlaneDescriptor*> : IIterable_impl<ABI::Windows::Foundation::Internal::AggregateType<ABI::Lumia::Imaging::ColorPlaneDescriptor*, ABI::Lumia::Imaging::IColorPlaneDescriptor*>> {
static const wchar_t* z_get_rc_name_impl() {
return L"Windows.Foundation.Collections.IIterable`1<Lumia.Imaging.ColorPlaneDescriptor>"; }
};
typedef IIterable<ABI::Lumia::Imaging::ColorPlaneDescriptor*> __FIIterable_1_Lumia__CImaging__CColorPlaneDescriptor_t;
#define ____FIIterable_1_Lumia__CImaging__CColorPlaneDescriptor_FWD_DEFINED__
#define __FIIterable_1_Lumia__CImaging__CColorPlaneDescriptor ABI::Windows::Foundation::Collections::__FIIterable_1_Lumia__CImaging__CColorPlaneDescriptor_t

/* ABI */ } /* Windows */ } /* Foundation */ } /* Collections */ }
extern "C" {
#endif //__cplusplus
#endif /* DEF___FIIterable_1_Lumia__CImaging__CColorPlaneDescriptor_USE */

#ifdef __cplusplus
namespace ABI {
namespace Lumia {
namespace Imaging {
interface IFilter;
} /*Imaging*/
} /*Lumia*/
}
#endif


/* interface __MIDL_itf_Lumia2EImaging_0000_0002 */
/* [local] */ 





extern RPC_IF_HANDLE __MIDL_itf_Lumia2EImaging_0000_0002_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_Lumia2EImaging_0000_0002_v0_0_s_ifspec;

/* interface __MIDL_itf_Lumia2EImaging_0000_1963 */




/* interface __MIDL_itf_Lumia2EImaging_0000_1963 */




extern RPC_IF_HANDLE __MIDL_itf_Lumia2EImaging_0000_1963_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_Lumia2EImaging_0000_1963_v0_0_s_ifspec;

/* interface __MIDL_itf_Lumia2EImaging_0000_0003 */
/* [local] */ 

#ifndef DEF___FIIterator_1_Lumia__CImaging__CIFilter_USE
#define DEF___FIIterator_1_Lumia__CImaging__CIFilter_USE
#if defined(__cplusplus) && !defined(RO_NO_TEMPLATE_NAME)
} /*extern "C"*/ 
namespace ABI { namespace Windows { namespace Foundation { namespace Collections {
template <>
struct __declspec(uuid("c1f5991d-5bdd-5aa8-8b9d-4734237a0182"))
IIterator<ABI::Lumia::Imaging::IFilter*> : IIterator_impl<ABI::Lumia::Imaging::IFilter*> {
static const wchar_t* z_get_rc_name_impl() {
return L"Windows.Foundation.Collections.IIterator`1<Lumia.Imaging.IFilter>"; }
};
typedef IIterator<ABI::Lumia::Imaging::IFilter*> __FIIterator_1_Lumia__CImaging__CIFilter_t;
#define ____FIIterator_1_Lumia__CImaging__CIFilter_FWD_DEFINED__
#define __FIIterator_1_Lumia__CImaging__CIFilter ABI::Windows::Foundation::Collections::__FIIterator_1_Lumia__CImaging__CIFilter_t

/* ABI */ } /* Windows */ } /* Foundation */ } /* Collections */ }
extern "C" {
#endif //__cplusplus
#endif /* DEF___FIIterator_1_Lumia__CImaging__CIFilter_USE */


/* interface __MIDL_itf_Lumia2EImaging_0000_0003 */
/* [local] */ 




extern RPC_IF_HANDLE __MIDL_itf_Lumia2EImaging_0000_0003_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_Lumia2EImaging_0000_0003_v0_0_s_ifspec;

/* interface __MIDL_itf_Lumia2EImaging_0000_1964 */




/* interface __MIDL_itf_Lumia2EImaging_0000_1964 */




extern RPC_IF_HANDLE __MIDL_itf_Lumia2EImaging_0000_1964_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_Lumia2EImaging_0000_1964_v0_0_s_ifspec;

/* interface __MIDL_itf_Lumia2EImaging_0000_0004 */
/* [local] */ 

#ifndef DEF___FIIterable_1_Lumia__CImaging__CIFilter_USE
#define DEF___FIIterable_1_Lumia__CImaging__CIFilter_USE
#if defined(__cplusplus) && !defined(RO_NO_TEMPLATE_NAME)
} /*extern "C"*/ 
namespace ABI { namespace Windows { namespace Foundation { namespace Collections {
template <>
struct __declspec(uuid("b4ed4432-2849-5796-9474-5544d00b93c0"))
IIterable<ABI::Lumia::Imaging::IFilter*> : IIterable_impl<ABI::Lumia::Imaging::IFilter*> {
static const wchar_t* z_get_rc_name_impl() {
return L"Windows.Foundation.Collections.IIterable`1<Lumia.Imaging.IFilter>"; }
};
typedef IIterable<ABI::Lumia::Imaging::IFilter*> __FIIterable_1_Lumia__CImaging__CIFilter_t;
#define ____FIIterable_1_Lumia__CImaging__CIFilter_FWD_DEFINED__
#define __FIIterable_1_Lumia__CImaging__CIFilter ABI::Windows::Foundation::Collections::__FIIterable_1_Lumia__CImaging__CIFilter_t

/* ABI */ } /* Windows */ } /* Foundation */ } /* Collections */ }
extern "C" {
#endif //__cplusplus
#endif /* DEF___FIIterable_1_Lumia__CImaging__CIFilter_USE */

#ifdef __cplusplus
namespace ABI {
namespace Lumia {
namespace Imaging {
interface IImageProvider;
} /*Imaging*/
} /*Lumia*/
}
#endif


/* interface __MIDL_itf_Lumia2EImaging_0000_0004 */
/* [local] */ 





extern RPC_IF_HANDLE __MIDL_itf_Lumia2EImaging_0000_0004_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_Lumia2EImaging_0000_0004_v0_0_s_ifspec;

/* interface __MIDL_itf_Lumia2EImaging_0000_1965 */




/* interface __MIDL_itf_Lumia2EImaging_0000_1965 */




extern RPC_IF_HANDLE __MIDL_itf_Lumia2EImaging_0000_1965_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_Lumia2EImaging_0000_1965_v0_0_s_ifspec;

/* interface __MIDL_itf_Lumia2EImaging_0000_0005 */
/* [local] */ 

#ifndef DEF___FIIterator_1_Lumia__CImaging__CIImageProvider_USE
#define DEF___FIIterator_1_Lumia__CImaging__CIImageProvider_USE
#if defined(__cplusplus) && !defined(RO_NO_TEMPLATE_NAME)
} /*extern "C"*/ 
namespace ABI { namespace Windows { namespace Foundation { namespace Collections {
template <>
struct __declspec(uuid("6969b00c-12a1-5c8a-92a0-0c1b3993868a"))
IIterator<ABI::Lumia::Imaging::IImageProvider*> : IIterator_impl<ABI::Lumia::Imaging::IImageProvider*> {
static const wchar_t* z_get_rc_name_impl() {
return L"Windows.Foundation.Collections.IIterator`1<Lumia.Imaging.IImageProvider>"; }
};
typedef IIterator<ABI::Lumia::Imaging::IImageProvider*> __FIIterator_1_Lumia__CImaging__CIImageProvider_t;
#define ____FIIterator_1_Lumia__CImaging__CIImageProvider_FWD_DEFINED__
#define __FIIterator_1_Lumia__CImaging__CIImageProvider ABI::Windows::Foundation::Collections::__FIIterator_1_Lumia__CImaging__CIImageProvider_t

/* ABI */ } /* Windows */ } /* Foundation */ } /* Collections */ }
extern "C" {
#endif //__cplusplus
#endif /* DEF___FIIterator_1_Lumia__CImaging__CIImageProvider_USE */


/* interface __MIDL_itf_Lumia2EImaging_0000_0005 */
/* [local] */ 




extern RPC_IF_HANDLE __MIDL_itf_Lumia2EImaging_0000_0005_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_Lumia2EImaging_0000_0005_v0_0_s_ifspec;

/* interface __MIDL_itf_Lumia2EImaging_0000_1966 */




/* interface __MIDL_itf_Lumia2EImaging_0000_1966 */




extern RPC_IF_HANDLE __MIDL_itf_Lumia2EImaging_0000_1966_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_Lumia2EImaging_0000_1966_v0_0_s_ifspec;

/* interface __MIDL_itf_Lumia2EImaging_0000_0006 */
/* [local] */ 

#ifndef DEF___FIIterable_1_Lumia__CImaging__CIImageProvider_USE
#define DEF___FIIterable_1_Lumia__CImaging__CIImageProvider_USE
#if defined(__cplusplus) && !defined(RO_NO_TEMPLATE_NAME)
} /*extern "C"*/ 
namespace ABI { namespace Windows { namespace Foundation { namespace Collections {
template <>
struct __declspec(uuid("4c70620b-ba1f-53bb-93ee-5e928e2fe6c1"))
IIterable<ABI::Lumia::Imaging::IImageProvider*> : IIterable_impl<ABI::Lumia::Imaging::IImageProvider*> {
static const wchar_t* z_get_rc_name_impl() {
return L"Windows.Foundation.Collections.IIterable`1<Lumia.Imaging.IImageProvider>"; }
};
typedef IIterable<ABI::Lumia::Imaging::IImageProvider*> __FIIterable_1_Lumia__CImaging__CIImageProvider_t;
#define ____FIIterable_1_Lumia__CImaging__CIImageProvider_FWD_DEFINED__
#define __FIIterable_1_Lumia__CImaging__CIImageProvider ABI::Windows::Foundation::Collections::__FIIterable_1_Lumia__CImaging__CIImageProvider_t

/* ABI */ } /* Windows */ } /* Foundation */ } /* Collections */ }
extern "C" {
#endif //__cplusplus
#endif /* DEF___FIIterable_1_Lumia__CImaging__CIImageProvider_USE */


/* interface __MIDL_itf_Lumia2EImaging_0000_0006 */
/* [local] */ 




extern RPC_IF_HANDLE __MIDL_itf_Lumia2EImaging_0000_0006_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_Lumia2EImaging_0000_0006_v0_0_s_ifspec;

/* interface __MIDL_itf_Lumia2EImaging_0000_1967 */




/* interface __MIDL_itf_Lumia2EImaging_0000_1967 */




extern RPC_IF_HANDLE __MIDL_itf_Lumia2EImaging_0000_1967_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_Lumia2EImaging_0000_1967_v0_0_s_ifspec;

/* interface __MIDL_itf_Lumia2EImaging_0000_0007 */
/* [local] */ 

#ifndef DEF___FIVectorView_1_Lumia__CImaging__CColorPlaneDescriptor_USE
#define DEF___FIVectorView_1_Lumia__CImaging__CColorPlaneDescriptor_USE
#if defined(__cplusplus) && !defined(RO_NO_TEMPLATE_NAME)
} /*extern "C"*/ 
namespace ABI { namespace Windows { namespace Foundation { namespace Collections {
template <>
struct __declspec(uuid("09d6f970-2188-5a27-a069-280fce06d0ef"))
IVectorView<ABI::Lumia::Imaging::ColorPlaneDescriptor*> : IVectorView_impl<ABI::Windows::Foundation::Internal::AggregateType<ABI::Lumia::Imaging::ColorPlaneDescriptor*, ABI::Lumia::Imaging::IColorPlaneDescriptor*>> {
static const wchar_t* z_get_rc_name_impl() {
return L"Windows.Foundation.Collections.IVectorView`1<Lumia.Imaging.ColorPlaneDescriptor>"; }
};
typedef IVectorView<ABI::Lumia::Imaging::ColorPlaneDescriptor*> __FIVectorView_1_Lumia__CImaging__CColorPlaneDescriptor_t;
#define ____FIVectorView_1_Lumia__CImaging__CColorPlaneDescriptor_FWD_DEFINED__
#define __FIVectorView_1_Lumia__CImaging__CColorPlaneDescriptor ABI::Windows::Foundation::Collections::__FIVectorView_1_Lumia__CImaging__CColorPlaneDescriptor_t

/* ABI */ } /* Windows */ } /* Foundation */ } /* Collections */ }
extern "C" {
#endif //__cplusplus
#endif /* DEF___FIVectorView_1_Lumia__CImaging__CColorPlaneDescriptor_USE */


/* interface __MIDL_itf_Lumia2EImaging_0000_0007 */
/* [local] */ 




extern RPC_IF_HANDLE __MIDL_itf_Lumia2EImaging_0000_0007_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_Lumia2EImaging_0000_0007_v0_0_s_ifspec;

/* interface __MIDL_itf_Lumia2EImaging_0000_1968 */




/* interface __MIDL_itf_Lumia2EImaging_0000_1968 */




extern RPC_IF_HANDLE __MIDL_itf_Lumia2EImaging_0000_1968_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_Lumia2EImaging_0000_1968_v0_0_s_ifspec;

/* interface __MIDL_itf_Lumia2EImaging_0000_0008 */
/* [local] */ 

#ifndef DEF___FIVectorView_1_Lumia__CImaging__CIImageProvider_USE
#define DEF___FIVectorView_1_Lumia__CImaging__CIImageProvider_USE
#if defined(__cplusplus) && !defined(RO_NO_TEMPLATE_NAME)
} /*extern "C"*/ 
namespace ABI { namespace Windows { namespace Foundation { namespace Collections {
template <>
struct __declspec(uuid("887aae9c-c4ba-5ad5-8ead-a0c568db75d5"))
IVectorView<ABI::Lumia::Imaging::IImageProvider*> : IVectorView_impl<ABI::Lumia::Imaging::IImageProvider*> {
static const wchar_t* z_get_rc_name_impl() {
return L"Windows.Foundation.Collections.IVectorView`1<Lumia.Imaging.IImageProvider>"; }
};
typedef IVectorView<ABI::Lumia::Imaging::IImageProvider*> __FIVectorView_1_Lumia__CImaging__CIImageProvider_t;
#define ____FIVectorView_1_Lumia__CImaging__CIImageProvider_FWD_DEFINED__
#define __FIVectorView_1_Lumia__CImaging__CIImageProvider ABI::Windows::Foundation::Collections::__FIVectorView_1_Lumia__CImaging__CIImageProvider_t

/* ABI */ } /* Windows */ } /* Foundation */ } /* Collections */ }
extern "C" {
#endif //__cplusplus
#endif /* DEF___FIVectorView_1_Lumia__CImaging__CIImageProvider_USE */
#ifdef __cplusplus
namespace ABI {
namespace Lumia {
namespace Imaging {
class Bitmap;
} /*Imaging*/
} /*Lumia*/
}
#endif

#ifdef __cplusplus
namespace ABI {
namespace Lumia {
namespace Imaging {
interface IBitmap;
} /*Imaging*/
} /*Lumia*/
}
#endif


/* interface __MIDL_itf_Lumia2EImaging_0000_0008 */
/* [local] */ 





extern RPC_IF_HANDLE __MIDL_itf_Lumia2EImaging_0000_0008_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_Lumia2EImaging_0000_0008_v0_0_s_ifspec;

/* interface __MIDL_itf_Lumia2EImaging_0000_1969 */




/* interface __MIDL_itf_Lumia2EImaging_0000_1969 */




extern RPC_IF_HANDLE __MIDL_itf_Lumia2EImaging_0000_1969_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_Lumia2EImaging_0000_1969_v0_0_s_ifspec;

/* interface __MIDL_itf_Lumia2EImaging_0000_0009 */
/* [local] */ 

#ifndef DEF___FIAsyncOperationCompletedHandler_1_Lumia__CImaging__CBitmap_USE
#define DEF___FIAsyncOperationCompletedHandler_1_Lumia__CImaging__CBitmap_USE
#if defined(__cplusplus) && !defined(RO_NO_TEMPLATE_NAME)
} /*extern "C"*/ 
namespace ABI { namespace Windows { namespace Foundation {
template <>
struct __declspec(uuid("62d38b42-663d-5705-a382-55943b7a66e3"))
IAsyncOperationCompletedHandler<ABI::Lumia::Imaging::Bitmap*> : IAsyncOperationCompletedHandler_impl<ABI::Windows::Foundation::Internal::AggregateType<ABI::Lumia::Imaging::Bitmap*, ABI::Lumia::Imaging::IBitmap*>> {
static const wchar_t* z_get_rc_name_impl() {
return L"Windows.Foundation.AsyncOperationCompletedHandler`1<Lumia.Imaging.Bitmap>"; }
};
typedef IAsyncOperationCompletedHandler<ABI::Lumia::Imaging::Bitmap*> __FIAsyncOperationCompletedHandler_1_Lumia__CImaging__CBitmap_t;
#define ____FIAsyncOperationCompletedHandler_1_Lumia__CImaging__CBitmap_FWD_DEFINED__
#define __FIAsyncOperationCompletedHandler_1_Lumia__CImaging__CBitmap ABI::Windows::Foundation::__FIAsyncOperationCompletedHandler_1_Lumia__CImaging__CBitmap_t

/* ABI */ } /* Windows */ } /* Foundation */ }
extern "C" {
#endif //__cplusplus
#endif /* DEF___FIAsyncOperationCompletedHandler_1_Lumia__CImaging__CBitmap_USE */


/* interface __MIDL_itf_Lumia2EImaging_0000_0009 */
/* [local] */ 




extern RPC_IF_HANDLE __MIDL_itf_Lumia2EImaging_0000_0009_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_Lumia2EImaging_0000_0009_v0_0_s_ifspec;

/* interface __MIDL_itf_Lumia2EImaging_0000_1970 */




/* interface __MIDL_itf_Lumia2EImaging_0000_1970 */




extern RPC_IF_HANDLE __MIDL_itf_Lumia2EImaging_0000_1970_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_Lumia2EImaging_0000_1970_v0_0_s_ifspec;

/* interface __MIDL_itf_Lumia2EImaging_0000_0010 */
/* [local] */ 

#ifndef DEF___FIAsyncOperation_1_Lumia__CImaging__CBitmap_USE
#define DEF___FIAsyncOperation_1_Lumia__CImaging__CBitmap_USE
#if defined(__cplusplus) && !defined(RO_NO_TEMPLATE_NAME)
} /*extern "C"*/ 
namespace ABI { namespace Windows { namespace Foundation {
template <>
struct __declspec(uuid("7ab91fc9-c143-5ca7-a43e-8e6aeac083f1"))
IAsyncOperation<ABI::Lumia::Imaging::Bitmap*> : IAsyncOperation_impl<ABI::Windows::Foundation::Internal::AggregateType<ABI::Lumia::Imaging::Bitmap*, ABI::Lumia::Imaging::IBitmap*>> {
static const wchar_t* z_get_rc_name_impl() {
return L"Windows.Foundation.IAsyncOperation`1<Lumia.Imaging.Bitmap>"; }
};
typedef IAsyncOperation<ABI::Lumia::Imaging::Bitmap*> __FIAsyncOperation_1_Lumia__CImaging__CBitmap_t;
#define ____FIAsyncOperation_1_Lumia__CImaging__CBitmap_FWD_DEFINED__
#define __FIAsyncOperation_1_Lumia__CImaging__CBitmap ABI::Windows::Foundation::__FIAsyncOperation_1_Lumia__CImaging__CBitmap_t

/* ABI */ } /* Windows */ } /* Foundation */ }
extern "C" {
#endif //__cplusplus
#endif /* DEF___FIAsyncOperation_1_Lumia__CImaging__CBitmap_USE */
#ifdef __cplusplus
namespace ABI {
namespace Lumia {
namespace Imaging {
class DiagnosticsReport;
} /*Imaging*/
} /*Lumia*/
}
#endif

#ifdef __cplusplus
namespace ABI {
namespace Lumia {
namespace Imaging {
interface IDiagnosticsReport;
} /*Imaging*/
} /*Lumia*/
}
#endif


/* interface __MIDL_itf_Lumia2EImaging_0000_0010 */
/* [local] */ 





extern RPC_IF_HANDLE __MIDL_itf_Lumia2EImaging_0000_0010_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_Lumia2EImaging_0000_0010_v0_0_s_ifspec;

/* interface __MIDL_itf_Lumia2EImaging_0000_1971 */




/* interface __MIDL_itf_Lumia2EImaging_0000_1971 */




extern RPC_IF_HANDLE __MIDL_itf_Lumia2EImaging_0000_1971_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_Lumia2EImaging_0000_1971_v0_0_s_ifspec;

/* interface __MIDL_itf_Lumia2EImaging_0000_0011 */
/* [local] */ 

#ifndef DEF___FIAsyncOperationCompletedHandler_1_Lumia__CImaging__CDiagnosticsReport_USE
#define DEF___FIAsyncOperationCompletedHandler_1_Lumia__CImaging__CDiagnosticsReport_USE
#if defined(__cplusplus) && !defined(RO_NO_TEMPLATE_NAME)
} /*extern "C"*/ 
namespace ABI { namespace Windows { namespace Foundation {
template <>
struct __declspec(uuid("ff6506e3-8d67-51cd-a079-7ff4faa78815"))
IAsyncOperationCompletedHandler<ABI::Lumia::Imaging::DiagnosticsReport*> : IAsyncOperationCompletedHandler_impl<ABI::Windows::Foundation::Internal::AggregateType<ABI::Lumia::Imaging::DiagnosticsReport*, ABI::Lumia::Imaging::IDiagnosticsReport*>> {
static const wchar_t* z_get_rc_name_impl() {
return L"Windows.Foundation.AsyncOperationCompletedHandler`1<Lumia.Imaging.DiagnosticsReport>"; }
};
typedef IAsyncOperationCompletedHandler<ABI::Lumia::Imaging::DiagnosticsReport*> __FIAsyncOperationCompletedHandler_1_Lumia__CImaging__CDiagnosticsReport_t;
#define ____FIAsyncOperationCompletedHandler_1_Lumia__CImaging__CDiagnosticsReport_FWD_DEFINED__
#define __FIAsyncOperationCompletedHandler_1_Lumia__CImaging__CDiagnosticsReport ABI::Windows::Foundation::__FIAsyncOperationCompletedHandler_1_Lumia__CImaging__CDiagnosticsReport_t

/* ABI */ } /* Windows */ } /* Foundation */ }
extern "C" {
#endif //__cplusplus
#endif /* DEF___FIAsyncOperationCompletedHandler_1_Lumia__CImaging__CDiagnosticsReport_USE */


/* interface __MIDL_itf_Lumia2EImaging_0000_0011 */
/* [local] */ 




extern RPC_IF_HANDLE __MIDL_itf_Lumia2EImaging_0000_0011_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_Lumia2EImaging_0000_0011_v0_0_s_ifspec;

/* interface __MIDL_itf_Lumia2EImaging_0000_1972 */




/* interface __MIDL_itf_Lumia2EImaging_0000_1972 */




extern RPC_IF_HANDLE __MIDL_itf_Lumia2EImaging_0000_1972_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_Lumia2EImaging_0000_1972_v0_0_s_ifspec;

/* interface __MIDL_itf_Lumia2EImaging_0000_0012 */
/* [local] */ 

#ifndef DEF___FIAsyncOperation_1_Lumia__CImaging__CDiagnosticsReport_USE
#define DEF___FIAsyncOperation_1_Lumia__CImaging__CDiagnosticsReport_USE
#if defined(__cplusplus) && !defined(RO_NO_TEMPLATE_NAME)
} /*extern "C"*/ 
namespace ABI { namespace Windows { namespace Foundation {
template <>
struct __declspec(uuid("cb88c5e6-b2f9-5c27-9440-db4de12f134a"))
IAsyncOperation<ABI::Lumia::Imaging::DiagnosticsReport*> : IAsyncOperation_impl<ABI::Windows::Foundation::Internal::AggregateType<ABI::Lumia::Imaging::DiagnosticsReport*, ABI::Lumia::Imaging::IDiagnosticsReport*>> {
static const wchar_t* z_get_rc_name_impl() {
return L"Windows.Foundation.IAsyncOperation`1<Lumia.Imaging.DiagnosticsReport>"; }
};
typedef IAsyncOperation<ABI::Lumia::Imaging::DiagnosticsReport*> __FIAsyncOperation_1_Lumia__CImaging__CDiagnosticsReport_t;
#define ____FIAsyncOperation_1_Lumia__CImaging__CDiagnosticsReport_FWD_DEFINED__
#define __FIAsyncOperation_1_Lumia__CImaging__CDiagnosticsReport ABI::Windows::Foundation::__FIAsyncOperation_1_Lumia__CImaging__CDiagnosticsReport_t

/* ABI */ } /* Windows */ } /* Foundation */ }
extern "C" {
#endif //__cplusplus
#endif /* DEF___FIAsyncOperation_1_Lumia__CImaging__CDiagnosticsReport_USE */

#ifdef __cplusplus
namespace ABI {
namespace Lumia {
namespace Imaging {
interface IReadableBitmap;
} /*Imaging*/
} /*Lumia*/
}
#endif


/* interface __MIDL_itf_Lumia2EImaging_0000_0012 */
/* [local] */ 





extern RPC_IF_HANDLE __MIDL_itf_Lumia2EImaging_0000_0012_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_Lumia2EImaging_0000_0012_v0_0_s_ifspec;

/* interface __MIDL_itf_Lumia2EImaging_0000_1973 */




/* interface __MIDL_itf_Lumia2EImaging_0000_1973 */




extern RPC_IF_HANDLE __MIDL_itf_Lumia2EImaging_0000_1973_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_Lumia2EImaging_0000_1973_v0_0_s_ifspec;

/* interface __MIDL_itf_Lumia2EImaging_0000_0013 */
/* [local] */ 

#ifndef DEF___FIAsyncOperationCompletedHandler_1_Lumia__CImaging__CIReadableBitmap_USE
#define DEF___FIAsyncOperationCompletedHandler_1_Lumia__CImaging__CIReadableBitmap_USE
#if defined(__cplusplus) && !defined(RO_NO_TEMPLATE_NAME)
} /*extern "C"*/ 
namespace ABI { namespace Windows { namespace Foundation {
template <>
struct __declspec(uuid("8e2f28bb-8eed-5030-8e52-7676fd17f133"))
IAsyncOperationCompletedHandler<ABI::Lumia::Imaging::IReadableBitmap*> : IAsyncOperationCompletedHandler_impl<ABI::Lumia::Imaging::IReadableBitmap*> {
static const wchar_t* z_get_rc_name_impl() {
return L"Windows.Foundation.AsyncOperationCompletedHandler`1<Lumia.Imaging.IReadableBitmap>"; }
};
typedef IAsyncOperationCompletedHandler<ABI::Lumia::Imaging::IReadableBitmap*> __FIAsyncOperationCompletedHandler_1_Lumia__CImaging__CIReadableBitmap_t;
#define ____FIAsyncOperationCompletedHandler_1_Lumia__CImaging__CIReadableBitmap_FWD_DEFINED__
#define __FIAsyncOperationCompletedHandler_1_Lumia__CImaging__CIReadableBitmap ABI::Windows::Foundation::__FIAsyncOperationCompletedHandler_1_Lumia__CImaging__CIReadableBitmap_t

/* ABI */ } /* Windows */ } /* Foundation */ }
extern "C" {
#endif //__cplusplus
#endif /* DEF___FIAsyncOperationCompletedHandler_1_Lumia__CImaging__CIReadableBitmap_USE */


/* interface __MIDL_itf_Lumia2EImaging_0000_0013 */
/* [local] */ 




extern RPC_IF_HANDLE __MIDL_itf_Lumia2EImaging_0000_0013_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_Lumia2EImaging_0000_0013_v0_0_s_ifspec;

/* interface __MIDL_itf_Lumia2EImaging_0000_1974 */




/* interface __MIDL_itf_Lumia2EImaging_0000_1974 */




extern RPC_IF_HANDLE __MIDL_itf_Lumia2EImaging_0000_1974_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_Lumia2EImaging_0000_1974_v0_0_s_ifspec;

/* interface __MIDL_itf_Lumia2EImaging_0000_0014 */
/* [local] */ 

#ifndef DEF___FIAsyncOperation_1_Lumia__CImaging__CIReadableBitmap_USE
#define DEF___FIAsyncOperation_1_Lumia__CImaging__CIReadableBitmap_USE
#if defined(__cplusplus) && !defined(RO_NO_TEMPLATE_NAME)
} /*extern "C"*/ 
namespace ABI { namespace Windows { namespace Foundation {
template <>
struct __declspec(uuid("b43135e8-666e-521c-a834-ab21c66ddd14"))
IAsyncOperation<ABI::Lumia::Imaging::IReadableBitmap*> : IAsyncOperation_impl<ABI::Lumia::Imaging::IReadableBitmap*> {
static const wchar_t* z_get_rc_name_impl() {
return L"Windows.Foundation.IAsyncOperation`1<Lumia.Imaging.IReadableBitmap>"; }
};
typedef IAsyncOperation<ABI::Lumia::Imaging::IReadableBitmap*> __FIAsyncOperation_1_Lumia__CImaging__CIReadableBitmap_t;
#define ____FIAsyncOperation_1_Lumia__CImaging__CIReadableBitmap_FWD_DEFINED__
#define __FIAsyncOperation_1_Lumia__CImaging__CIReadableBitmap ABI::Windows::Foundation::__FIAsyncOperation_1_Lumia__CImaging__CIReadableBitmap_t

/* ABI */ } /* Windows */ } /* Foundation */ }
extern "C" {
#endif //__cplusplus
#endif /* DEF___FIAsyncOperation_1_Lumia__CImaging__CIReadableBitmap_USE */
#ifdef __cplusplus
namespace ABI {
namespace Lumia {
namespace Imaging {
class ImageProviderInfo;
} /*Imaging*/
} /*Lumia*/
}
#endif

#ifdef __cplusplus
namespace ABI {
namespace Lumia {
namespace Imaging {
interface IImageProviderInfo;
} /*Imaging*/
} /*Lumia*/
}
#endif


/* interface __MIDL_itf_Lumia2EImaging_0000_0014 */
/* [local] */ 





extern RPC_IF_HANDLE __MIDL_itf_Lumia2EImaging_0000_0014_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_Lumia2EImaging_0000_0014_v0_0_s_ifspec;

/* interface __MIDL_itf_Lumia2EImaging_0000_1975 */




/* interface __MIDL_itf_Lumia2EImaging_0000_1975 */




extern RPC_IF_HANDLE __MIDL_itf_Lumia2EImaging_0000_1975_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_Lumia2EImaging_0000_1975_v0_0_s_ifspec;

/* interface __MIDL_itf_Lumia2EImaging_0000_0015 */
/* [local] */ 

#ifndef DEF___FIAsyncOperationCompletedHandler_1_Lumia__CImaging__CImageProviderInfo_USE
#define DEF___FIAsyncOperationCompletedHandler_1_Lumia__CImaging__CImageProviderInfo_USE
#if defined(__cplusplus) && !defined(RO_NO_TEMPLATE_NAME)
} /*extern "C"*/ 
namespace ABI { namespace Windows { namespace Foundation {
template <>
struct __declspec(uuid("cd5cb054-6ae6-5345-bba1-55d7166b7b5a"))
IAsyncOperationCompletedHandler<ABI::Lumia::Imaging::ImageProviderInfo*> : IAsyncOperationCompletedHandler_impl<ABI::Windows::Foundation::Internal::AggregateType<ABI::Lumia::Imaging::ImageProviderInfo*, ABI::Lumia::Imaging::IImageProviderInfo*>> {
static const wchar_t* z_get_rc_name_impl() {
return L"Windows.Foundation.AsyncOperationCompletedHandler`1<Lumia.Imaging.ImageProviderInfo>"; }
};
typedef IAsyncOperationCompletedHandler<ABI::Lumia::Imaging::ImageProviderInfo*> __FIAsyncOperationCompletedHandler_1_Lumia__CImaging__CImageProviderInfo_t;
#define ____FIAsyncOperationCompletedHandler_1_Lumia__CImaging__CImageProviderInfo_FWD_DEFINED__
#define __FIAsyncOperationCompletedHandler_1_Lumia__CImaging__CImageProviderInfo ABI::Windows::Foundation::__FIAsyncOperationCompletedHandler_1_Lumia__CImaging__CImageProviderInfo_t

/* ABI */ } /* Windows */ } /* Foundation */ }
extern "C" {
#endif //__cplusplus
#endif /* DEF___FIAsyncOperationCompletedHandler_1_Lumia__CImaging__CImageProviderInfo_USE */


/* interface __MIDL_itf_Lumia2EImaging_0000_0015 */
/* [local] */ 




extern RPC_IF_HANDLE __MIDL_itf_Lumia2EImaging_0000_0015_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_Lumia2EImaging_0000_0015_v0_0_s_ifspec;

/* interface __MIDL_itf_Lumia2EImaging_0000_1976 */




/* interface __MIDL_itf_Lumia2EImaging_0000_1976 */




extern RPC_IF_HANDLE __MIDL_itf_Lumia2EImaging_0000_1976_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_Lumia2EImaging_0000_1976_v0_0_s_ifspec;

/* interface __MIDL_itf_Lumia2EImaging_0000_0016 */
/* [local] */ 

#ifndef DEF___FIAsyncOperation_1_Lumia__CImaging__CImageProviderInfo_USE
#define DEF___FIAsyncOperation_1_Lumia__CImaging__CImageProviderInfo_USE
#if defined(__cplusplus) && !defined(RO_NO_TEMPLATE_NAME)
} /*extern "C"*/ 
namespace ABI { namespace Windows { namespace Foundation {
template <>
struct __declspec(uuid("9af9331e-4cbc-5435-aa8a-761bccdc2133"))
IAsyncOperation<ABI::Lumia::Imaging::ImageProviderInfo*> : IAsyncOperation_impl<ABI::Windows::Foundation::Internal::AggregateType<ABI::Lumia::Imaging::ImageProviderInfo*, ABI::Lumia::Imaging::IImageProviderInfo*>> {
static const wchar_t* z_get_rc_name_impl() {
return L"Windows.Foundation.IAsyncOperation`1<Lumia.Imaging.ImageProviderInfo>"; }
};
typedef IAsyncOperation<ABI::Lumia::Imaging::ImageProviderInfo*> __FIAsyncOperation_1_Lumia__CImaging__CImageProviderInfo_t;
#define ____FIAsyncOperation_1_Lumia__CImaging__CImageProviderInfo_FWD_DEFINED__
#define __FIAsyncOperation_1_Lumia__CImaging__CImageProviderInfo ABI::Windows::Foundation::__FIAsyncOperation_1_Lumia__CImaging__CImageProviderInfo_t

/* ABI */ } /* Windows */ } /* Foundation */ }
extern "C" {
#endif //__cplusplus
#endif /* DEF___FIAsyncOperation_1_Lumia__CImaging__CImageProviderInfo_USE */


/* interface __MIDL_itf_Lumia2EImaging_0000_0016 */
/* [local] */ 




extern RPC_IF_HANDLE __MIDL_itf_Lumia2EImaging_0000_0016_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_Lumia2EImaging_0000_0016_v0_0_s_ifspec;

/* interface __MIDL_itf_Lumia2EImaging_0000_1977 */




/* interface __MIDL_itf_Lumia2EImaging_0000_1977 */




extern RPC_IF_HANDLE __MIDL_itf_Lumia2EImaging_0000_1977_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_Lumia2EImaging_0000_1977_v0_0_s_ifspec;

/* interface __MIDL_itf_Lumia2EImaging_0000_0017 */
/* [local] */ 

#ifndef DEF___FIAsyncOperationCompletedHandler_1___FIVectorView_1_Lumia__CImaging__CIImageProvider_USE
#define DEF___FIAsyncOperationCompletedHandler_1___FIVectorView_1_Lumia__CImaging__CIImageProvider_USE
#if defined(__cplusplus) && !defined(RO_NO_TEMPLATE_NAME)
} /*extern "C"*/ 
namespace ABI { namespace Windows { namespace Foundation {
template <>
struct __declspec(uuid("5e5a7930-9709-5a70-8236-4ae9c2b9361e"))
IAsyncOperationCompletedHandler<__FIVectorView_1_Lumia__CImaging__CIImageProvider*> : IAsyncOperationCompletedHandler_impl<__FIVectorView_1_Lumia__CImaging__CIImageProvider*> {
static const wchar_t* z_get_rc_name_impl() {
return L"Windows.Foundation.AsyncOperationCompletedHandler`1<Windows.Foundation.Collections.IVectorView`1<Lumia.Imaging.IImageProvider>>"; }
};
typedef IAsyncOperationCompletedHandler<__FIVectorView_1_Lumia__CImaging__CIImageProvider*> __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Lumia__CImaging__CIImageProvider_t;
#define ____FIAsyncOperationCompletedHandler_1___FIVectorView_1_Lumia__CImaging__CIImageProvider_FWD_DEFINED__
#define __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Lumia__CImaging__CIImageProvider ABI::Windows::Foundation::__FIAsyncOperationCompletedHandler_1___FIVectorView_1_Lumia__CImaging__CIImageProvider_t

/* ABI */ } /* Windows */ } /* Foundation */ }
extern "C" {
#endif //__cplusplus
#endif /* DEF___FIAsyncOperationCompletedHandler_1___FIVectorView_1_Lumia__CImaging__CIImageProvider_USE */


/* interface __MIDL_itf_Lumia2EImaging_0000_0017 */
/* [local] */ 




extern RPC_IF_HANDLE __MIDL_itf_Lumia2EImaging_0000_0017_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_Lumia2EImaging_0000_0017_v0_0_s_ifspec;

/* interface __MIDL_itf_Lumia2EImaging_0000_1978 */




/* interface __MIDL_itf_Lumia2EImaging_0000_1978 */




extern RPC_IF_HANDLE __MIDL_itf_Lumia2EImaging_0000_1978_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_Lumia2EImaging_0000_1978_v0_0_s_ifspec;

/* interface __MIDL_itf_Lumia2EImaging_0000_0018 */
/* [local] */ 

#ifndef DEF___FIAsyncOperation_1___FIVectorView_1_Lumia__CImaging__CIImageProvider_USE
#define DEF___FIAsyncOperation_1___FIVectorView_1_Lumia__CImaging__CIImageProvider_USE
#if defined(__cplusplus) && !defined(RO_NO_TEMPLATE_NAME)
} /*extern "C"*/ 
namespace ABI { namespace Windows { namespace Foundation {
template <>
struct __declspec(uuid("0b63571e-0981-5b12-aee2-1a2fc4771507"))
IAsyncOperation<__FIVectorView_1_Lumia__CImaging__CIImageProvider*> : IAsyncOperation_impl<__FIVectorView_1_Lumia__CImaging__CIImageProvider*> {
static const wchar_t* z_get_rc_name_impl() {
return L"Windows.Foundation.IAsyncOperation`1<Windows.Foundation.Collections.IVectorView`1<Lumia.Imaging.IImageProvider>>"; }
};
typedef IAsyncOperation<__FIVectorView_1_Lumia__CImaging__CIImageProvider*> __FIAsyncOperation_1___FIVectorView_1_Lumia__CImaging__CIImageProvider_t;
#define ____FIAsyncOperation_1___FIVectorView_1_Lumia__CImaging__CIImageProvider_FWD_DEFINED__
#define __FIAsyncOperation_1___FIVectorView_1_Lumia__CImaging__CIImageProvider ABI::Windows::Foundation::__FIAsyncOperation_1___FIVectorView_1_Lumia__CImaging__CIImageProvider_t

/* ABI */ } /* Windows */ } /* Foundation */ }
extern "C" {
#endif //__cplusplus
#endif /* DEF___FIAsyncOperation_1___FIVectorView_1_Lumia__CImaging__CIImageProvider_USE */

#ifdef __cplusplus
namespace ABI {
namespace Windows {
namespace Storage {
namespace Streams {
interface IBuffer;
} /*Streams*/
} /*Storage*/
} /*Windows*/
}
#endif


/* interface __MIDL_itf_Lumia2EImaging_0000_0018 */
/* [local] */ 





extern RPC_IF_HANDLE __MIDL_itf_Lumia2EImaging_0000_0018_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_Lumia2EImaging_0000_0018_v0_0_s_ifspec;

/* interface __MIDL_itf_Lumia2EImaging_0000_1979 */




/* interface __MIDL_itf_Lumia2EImaging_0000_1979 */




extern RPC_IF_HANDLE __MIDL_itf_Lumia2EImaging_0000_1979_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_Lumia2EImaging_0000_1979_v0_0_s_ifspec;

/* interface __MIDL_itf_Lumia2EImaging_0000_0019 */
/* [local] */ 

#ifndef DEF___FIAsyncOperationCompletedHandler_1_Windows__CStorage__CStreams__CIBuffer_USE
#define DEF___FIAsyncOperationCompletedHandler_1_Windows__CStorage__CStreams__CIBuffer_USE
#if defined(__cplusplus) && !defined(RO_NO_TEMPLATE_NAME)
} /*extern "C"*/ 
namespace ABI { namespace Windows { namespace Foundation {
template <>
struct __declspec(uuid("51c3d2fd-b8a1-5620-b746-7ee6d533aca3"))
IAsyncOperationCompletedHandler<ABI::Windows::Storage::Streams::IBuffer*> : IAsyncOperationCompletedHandler_impl<ABI::Windows::Storage::Streams::IBuffer*> {
static const wchar_t* z_get_rc_name_impl() {
return L"Windows.Foundation.AsyncOperationCompletedHandler`1<Windows.Storage.Streams.IBuffer>"; }
};
typedef IAsyncOperationCompletedHandler<ABI::Windows::Storage::Streams::IBuffer*> __FIAsyncOperationCompletedHandler_1_Windows__CStorage__CStreams__CIBuffer_t;
#define ____FIAsyncOperationCompletedHandler_1_Windows__CStorage__CStreams__CIBuffer_FWD_DEFINED__
#define __FIAsyncOperationCompletedHandler_1_Windows__CStorage__CStreams__CIBuffer ABI::Windows::Foundation::__FIAsyncOperationCompletedHandler_1_Windows__CStorage__CStreams__CIBuffer_t

/* ABI */ } /* Windows */ } /* Foundation */ }
extern "C" {
#endif //__cplusplus
#endif /* DEF___FIAsyncOperationCompletedHandler_1_Windows__CStorage__CStreams__CIBuffer_USE */


/* interface __MIDL_itf_Lumia2EImaging_0000_0019 */
/* [local] */ 




extern RPC_IF_HANDLE __MIDL_itf_Lumia2EImaging_0000_0019_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_Lumia2EImaging_0000_0019_v0_0_s_ifspec;

/* interface __MIDL_itf_Lumia2EImaging_0000_1980 */




/* interface __MIDL_itf_Lumia2EImaging_0000_1980 */




extern RPC_IF_HANDLE __MIDL_itf_Lumia2EImaging_0000_1980_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_Lumia2EImaging_0000_1980_v0_0_s_ifspec;

/* interface __MIDL_itf_Lumia2EImaging_0000_0020 */
/* [local] */ 

#ifndef DEF___FIAsyncOperation_1_Windows__CStorage__CStreams__CIBuffer_USE
#define DEF___FIAsyncOperation_1_Windows__CStorage__CStreams__CIBuffer_USE
#if defined(__cplusplus) && !defined(RO_NO_TEMPLATE_NAME)
} /*extern "C"*/ 
namespace ABI { namespace Windows { namespace Foundation {
template <>
struct __declspec(uuid("3bee8834-b9a7-5a80-a746-5ef097227878"))
IAsyncOperation<ABI::Windows::Storage::Streams::IBuffer*> : IAsyncOperation_impl<ABI::Windows::Storage::Streams::IBuffer*> {
static const wchar_t* z_get_rc_name_impl() {
return L"Windows.Foundation.IAsyncOperation`1<Windows.Storage.Streams.IBuffer>"; }
};
typedef IAsyncOperation<ABI::Windows::Storage::Streams::IBuffer*> __FIAsyncOperation_1_Windows__CStorage__CStreams__CIBuffer_t;
#define ____FIAsyncOperation_1_Windows__CStorage__CStreams__CIBuffer_FWD_DEFINED__
#define __FIAsyncOperation_1_Windows__CStorage__CStreams__CIBuffer ABI::Windows::Foundation::__FIAsyncOperation_1_Windows__CStorage__CStreams__CIBuffer_t

/* ABI */ } /* Windows */ } /* Foundation */ }
extern "C" {
#endif //__cplusplus
#endif /* DEF___FIAsyncOperation_1_Windows__CStorage__CStreams__CIBuffer_USE */
#ifdef __cplusplus
namespace ABI {
namespace Windows {
namespace Media {
namespace MediaProperties {
class VideoEncodingProperties;
} /*MediaProperties*/
} /*Media*/
} /*Windows*/
}
#endif

#ifdef __cplusplus
namespace ABI {
namespace Windows {
namespace Media {
namespace MediaProperties {
interface IVideoEncodingProperties;
} /*MediaProperties*/
} /*Media*/
} /*Windows*/
}
#endif


/* interface __MIDL_itf_Lumia2EImaging_0000_0020 */
/* [local] */ 





extern RPC_IF_HANDLE __MIDL_itf_Lumia2EImaging_0000_0020_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_Lumia2EImaging_0000_0020_v0_0_s_ifspec;

/* interface __MIDL_itf_Lumia2EImaging_0000_1981 */




/* interface __MIDL_itf_Lumia2EImaging_0000_1981 */




extern RPC_IF_HANDLE __MIDL_itf_Lumia2EImaging_0000_1981_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_Lumia2EImaging_0000_1981_v0_0_s_ifspec;

/* interface __MIDL_itf_Lumia2EImaging_0000_0021 */
/* [local] */ 

#ifndef DEF___FIAsyncOperationCompletedHandler_1_Windows__CMedia__CMediaProperties__CVideoEncodingProperties_USE
#define DEF___FIAsyncOperationCompletedHandler_1_Windows__CMedia__CMediaProperties__CVideoEncodingProperties_USE
#if defined(__cplusplus) && !defined(RO_NO_TEMPLATE_NAME)
} /*extern "C"*/ 
namespace ABI { namespace Windows { namespace Foundation {
template <>
struct __declspec(uuid("878c77a6-4733-5120-af0a-0f7cbe9f983a"))
IAsyncOperationCompletedHandler<ABI::Windows::Media::MediaProperties::VideoEncodingProperties*> : IAsyncOperationCompletedHandler_impl<ABI::Windows::Foundation::Internal::AggregateType<ABI::Windows::Media::MediaProperties::VideoEncodingProperties*, ABI::Windows::Media::MediaProperties::IVideoEncodingProperties*>> {
static const wchar_t* z_get_rc_name_impl() {
return L"Windows.Foundation.AsyncOperationCompletedHandler`1<Windows.Media.MediaProperties.VideoEncodingProperties>"; }
};
typedef IAsyncOperationCompletedHandler<ABI::Windows::Media::MediaProperties::VideoEncodingProperties*> __FIAsyncOperationCompletedHandler_1_Windows__CMedia__CMediaProperties__CVideoEncodingProperties_t;
#define ____FIAsyncOperationCompletedHandler_1_Windows__CMedia__CMediaProperties__CVideoEncodingProperties_FWD_DEFINED__
#define __FIAsyncOperationCompletedHandler_1_Windows__CMedia__CMediaProperties__CVideoEncodingProperties ABI::Windows::Foundation::__FIAsyncOperationCompletedHandler_1_Windows__CMedia__CMediaProperties__CVideoEncodingProperties_t

/* ABI */ } /* Windows */ } /* Foundation */ }
extern "C" {
#endif //__cplusplus
#endif /* DEF___FIAsyncOperationCompletedHandler_1_Windows__CMedia__CMediaProperties__CVideoEncodingProperties_USE */


/* interface __MIDL_itf_Lumia2EImaging_0000_0021 */
/* [local] */ 




extern RPC_IF_HANDLE __MIDL_itf_Lumia2EImaging_0000_0021_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_Lumia2EImaging_0000_0021_v0_0_s_ifspec;

/* interface __MIDL_itf_Lumia2EImaging_0000_1982 */




/* interface __MIDL_itf_Lumia2EImaging_0000_1982 */




extern RPC_IF_HANDLE __MIDL_itf_Lumia2EImaging_0000_1982_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_Lumia2EImaging_0000_1982_v0_0_s_ifspec;

/* interface __MIDL_itf_Lumia2EImaging_0000_0022 */
/* [local] */ 

#ifndef DEF___FIAsyncOperation_1_Windows__CMedia__CMediaProperties__CVideoEncodingProperties_USE
#define DEF___FIAsyncOperation_1_Windows__CMedia__CMediaProperties__CVideoEncodingProperties_USE
#if defined(__cplusplus) && !defined(RO_NO_TEMPLATE_NAME)
} /*extern "C"*/ 
namespace ABI { namespace Windows { namespace Foundation {
template <>
struct __declspec(uuid("e09a1117-e2cc-5452-a6d1-fb392fecf049"))
IAsyncOperation<ABI::Windows::Media::MediaProperties::VideoEncodingProperties*> : IAsyncOperation_impl<ABI::Windows::Foundation::Internal::AggregateType<ABI::Windows::Media::MediaProperties::VideoEncodingProperties*, ABI::Windows::Media::MediaProperties::IVideoEncodingProperties*>> {
static const wchar_t* z_get_rc_name_impl() {
return L"Windows.Foundation.IAsyncOperation`1<Windows.Media.MediaProperties.VideoEncodingProperties>"; }
};
typedef IAsyncOperation<ABI::Windows::Media::MediaProperties::VideoEncodingProperties*> __FIAsyncOperation_1_Windows__CMedia__CMediaProperties__CVideoEncodingProperties_t;
#define ____FIAsyncOperation_1_Windows__CMedia__CMediaProperties__CVideoEncodingProperties_FWD_DEFINED__
#define __FIAsyncOperation_1_Windows__CMedia__CMediaProperties__CVideoEncodingProperties ABI::Windows::Foundation::__FIAsyncOperation_1_Windows__CMedia__CMediaProperties__CVideoEncodingProperties_t

/* ABI */ } /* Windows */ } /* Foundation */ }
extern "C" {
#endif //__cplusplus
#endif /* DEF___FIAsyncOperation_1_Windows__CMedia__CMediaProperties__CVideoEncodingProperties_USE */


/* interface __MIDL_itf_Lumia2EImaging_0000_0022 */
/* [local] */ 




extern RPC_IF_HANDLE __MIDL_itf_Lumia2EImaging_0000_0022_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_Lumia2EImaging_0000_0022_v0_0_s_ifspec;

/* interface __MIDL_itf_Lumia2EImaging_0000_1983 */




/* interface __MIDL_itf_Lumia2EImaging_0000_1983 */




extern RPC_IF_HANDLE __MIDL_itf_Lumia2EImaging_0000_1983_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_Lumia2EImaging_0000_1983_v0_0_s_ifspec;

/* interface __MIDL_itf_Lumia2EImaging_0000_0023 */
/* [local] */ 

#ifndef DEF___FIIterator_1_Windows__CMedia__CMediaProperties__CVideoEncodingProperties_USE
#define DEF___FIIterator_1_Windows__CMedia__CMediaProperties__CVideoEncodingProperties_USE
#if defined(__cplusplus) && !defined(RO_NO_TEMPLATE_NAME)
} /*extern "C"*/ 
namespace ABI { namespace Windows { namespace Foundation { namespace Collections {
template <>
struct __declspec(uuid("094166ef-ae5f-5315-a3bf-fe54e8c35fcd"))
IIterator<ABI::Windows::Media::MediaProperties::VideoEncodingProperties*> : IIterator_impl<ABI::Windows::Foundation::Internal::AggregateType<ABI::Windows::Media::MediaProperties::VideoEncodingProperties*, ABI::Windows::Media::MediaProperties::IVideoEncodingProperties*>> {
static const wchar_t* z_get_rc_name_impl() {
return L"Windows.Foundation.Collections.IIterator`1<Windows.Media.MediaProperties.VideoEncodingProperties>"; }
};
typedef IIterator<ABI::Windows::Media::MediaProperties::VideoEncodingProperties*> __FIIterator_1_Windows__CMedia__CMediaProperties__CVideoEncodingProperties_t;
#define ____FIIterator_1_Windows__CMedia__CMediaProperties__CVideoEncodingProperties_FWD_DEFINED__
#define __FIIterator_1_Windows__CMedia__CMediaProperties__CVideoEncodingProperties ABI::Windows::Foundation::Collections::__FIIterator_1_Windows__CMedia__CMediaProperties__CVideoEncodingProperties_t

/* ABI */ } /* Windows */ } /* Foundation */ } /* Collections */ }
extern "C" {
#endif //__cplusplus
#endif /* DEF___FIIterator_1_Windows__CMedia__CMediaProperties__CVideoEncodingProperties_USE */


/* interface __MIDL_itf_Lumia2EImaging_0000_0023 */
/* [local] */ 




extern RPC_IF_HANDLE __MIDL_itf_Lumia2EImaging_0000_0023_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_Lumia2EImaging_0000_0023_v0_0_s_ifspec;

/* interface __MIDL_itf_Lumia2EImaging_0000_1984 */




/* interface __MIDL_itf_Lumia2EImaging_0000_1984 */




extern RPC_IF_HANDLE __MIDL_itf_Lumia2EImaging_0000_1984_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_Lumia2EImaging_0000_1984_v0_0_s_ifspec;

/* interface __MIDL_itf_Lumia2EImaging_0000_0024 */
/* [local] */ 

#ifndef DEF___FIIterable_1_Windows__CMedia__CMediaProperties__CVideoEncodingProperties_USE
#define DEF___FIIterable_1_Windows__CMedia__CMediaProperties__CVideoEncodingProperties_USE
#if defined(__cplusplus) && !defined(RO_NO_TEMPLATE_NAME)
} /*extern "C"*/ 
namespace ABI { namespace Windows { namespace Foundation { namespace Collections {
template <>
struct __declspec(uuid("73c7317c-8682-5f81-84a2-30c425fa2d24"))
IIterable<ABI::Windows::Media::MediaProperties::VideoEncodingProperties*> : IIterable_impl<ABI::Windows::Foundation::Internal::AggregateType<ABI::Windows::Media::MediaProperties::VideoEncodingProperties*, ABI::Windows::Media::MediaProperties::IVideoEncodingProperties*>> {
static const wchar_t* z_get_rc_name_impl() {
return L"Windows.Foundation.Collections.IIterable`1<Windows.Media.MediaProperties.VideoEncodingProperties>"; }
};
typedef IIterable<ABI::Windows::Media::MediaProperties::VideoEncodingProperties*> __FIIterable_1_Windows__CMedia__CMediaProperties__CVideoEncodingProperties_t;
#define ____FIIterable_1_Windows__CMedia__CMediaProperties__CVideoEncodingProperties_FWD_DEFINED__
#define __FIIterable_1_Windows__CMedia__CMediaProperties__CVideoEncodingProperties ABI::Windows::Foundation::Collections::__FIIterable_1_Windows__CMedia__CMediaProperties__CVideoEncodingProperties_t

/* ABI */ } /* Windows */ } /* Foundation */ } /* Collections */ }
extern "C" {
#endif //__cplusplus
#endif /* DEF___FIIterable_1_Windows__CMedia__CMediaProperties__CVideoEncodingProperties_USE */
#ifdef __cplusplus
namespace ABI {
namespace Windows {
namespace UI {
namespace Xaml {
namespace Media {
namespace Imaging {
class WriteableBitmap;
} /*Imaging*/
} /*Media*/
} /*Xaml*/
} /*UI*/
} /*Windows*/
}
#endif

#ifdef __cplusplus
namespace ABI {
namespace Windows {
namespace UI {
namespace Xaml {
namespace Media {
namespace Imaging {
interface IWriteableBitmap;
} /*Imaging*/
} /*Media*/
} /*Xaml*/
} /*UI*/
} /*Windows*/
}
#endif


/* interface __MIDL_itf_Lumia2EImaging_0000_0024 */
/* [local] */ 





extern RPC_IF_HANDLE __MIDL_itf_Lumia2EImaging_0000_0024_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_Lumia2EImaging_0000_0024_v0_0_s_ifspec;

/* interface __MIDL_itf_Lumia2EImaging_0000_1985 */




/* interface __MIDL_itf_Lumia2EImaging_0000_1985 */




extern RPC_IF_HANDLE __MIDL_itf_Lumia2EImaging_0000_1985_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_Lumia2EImaging_0000_1985_v0_0_s_ifspec;

/* interface __MIDL_itf_Lumia2EImaging_0000_0025 */
/* [local] */ 

#ifndef DEF___FIAsyncOperationCompletedHandler_1_Windows__CUI__CXaml__CMedia__CImaging__CWriteableBitmap_USE
#define DEF___FIAsyncOperationCompletedHandler_1_Windows__CUI__CXaml__CMedia__CImaging__CWriteableBitmap_USE
#if defined(__cplusplus) && !defined(RO_NO_TEMPLATE_NAME)
} /*extern "C"*/ 
namespace ABI { namespace Windows { namespace Foundation {
template <>
struct __declspec(uuid("768bce8e-0635-554c-9bd0-533cb2da3bf7"))
IAsyncOperationCompletedHandler<ABI::Windows::UI::Xaml::Media::Imaging::WriteableBitmap*> : IAsyncOperationCompletedHandler_impl<ABI::Windows::Foundation::Internal::AggregateType<ABI::Windows::UI::Xaml::Media::Imaging::WriteableBitmap*, ABI::Windows::UI::Xaml::Media::Imaging::IWriteableBitmap*>> {
static const wchar_t* z_get_rc_name_impl() {
return L"Windows.Foundation.AsyncOperationCompletedHandler`1<Windows.UI.Xaml.Media.Imaging.WriteableBitmap>"; }
};
typedef IAsyncOperationCompletedHandler<ABI::Windows::UI::Xaml::Media::Imaging::WriteableBitmap*> __FIAsyncOperationCompletedHandler_1_Windows__CUI__CXaml__CMedia__CImaging__CWriteableBitmap_t;
#define ____FIAsyncOperationCompletedHandler_1_Windows__CUI__CXaml__CMedia__CImaging__CWriteableBitmap_FWD_DEFINED__
#define __FIAsyncOperationCompletedHandler_1_Windows__CUI__CXaml__CMedia__CImaging__CWriteableBitmap ABI::Windows::Foundation::__FIAsyncOperationCompletedHandler_1_Windows__CUI__CXaml__CMedia__CImaging__CWriteableBitmap_t

/* ABI */ } /* Windows */ } /* Foundation */ }
extern "C" {
#endif //__cplusplus
#endif /* DEF___FIAsyncOperationCompletedHandler_1_Windows__CUI__CXaml__CMedia__CImaging__CWriteableBitmap_USE */


/* interface __MIDL_itf_Lumia2EImaging_0000_0025 */
/* [local] */ 




extern RPC_IF_HANDLE __MIDL_itf_Lumia2EImaging_0000_0025_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_Lumia2EImaging_0000_0025_v0_0_s_ifspec;

/* interface __MIDL_itf_Lumia2EImaging_0000_1986 */




/* interface __MIDL_itf_Lumia2EImaging_0000_1986 */




extern RPC_IF_HANDLE __MIDL_itf_Lumia2EImaging_0000_1986_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_Lumia2EImaging_0000_1986_v0_0_s_ifspec;

/* interface __MIDL_itf_Lumia2EImaging_0000_0026 */
/* [local] */ 

#ifndef DEF___FIAsyncOperation_1_Windows__CUI__CXaml__CMedia__CImaging__CWriteableBitmap_USE
#define DEF___FIAsyncOperation_1_Windows__CUI__CXaml__CMedia__CImaging__CWriteableBitmap_USE
#if defined(__cplusplus) && !defined(RO_NO_TEMPLATE_NAME)
} /*extern "C"*/ 
namespace ABI { namespace Windows { namespace Foundation {
template <>
struct __declspec(uuid("a26b59f5-e5ce-56a4-9a17-fe38dd93744b"))
IAsyncOperation<ABI::Windows::UI::Xaml::Media::Imaging::WriteableBitmap*> : IAsyncOperation_impl<ABI::Windows::Foundation::Internal::AggregateType<ABI::Windows::UI::Xaml::Media::Imaging::WriteableBitmap*, ABI::Windows::UI::Xaml::Media::Imaging::IWriteableBitmap*>> {
static const wchar_t* z_get_rc_name_impl() {
return L"Windows.Foundation.IAsyncOperation`1<Windows.UI.Xaml.Media.Imaging.WriteableBitmap>"; }
};
typedef IAsyncOperation<ABI::Windows::UI::Xaml::Media::Imaging::WriteableBitmap*> __FIAsyncOperation_1_Windows__CUI__CXaml__CMedia__CImaging__CWriteableBitmap_t;
#define ____FIAsyncOperation_1_Windows__CUI__CXaml__CMedia__CImaging__CWriteableBitmap_FWD_DEFINED__
#define __FIAsyncOperation_1_Windows__CUI__CXaml__CMedia__CImaging__CWriteableBitmap ABI::Windows::Foundation::__FIAsyncOperation_1_Windows__CUI__CXaml__CMedia__CImaging__CWriteableBitmap_t

/* ABI */ } /* Windows */ } /* Foundation */ }
extern "C" {
#endif //__cplusplus
#endif /* DEF___FIAsyncOperation_1_Windows__CUI__CXaml__CMedia__CImaging__CWriteableBitmap_USE */
#if defined(__cplusplus)
}
#endif // defined(__cplusplus)
#include <Windows.Foundation.h>
#if !defined(__lumia2Eimaging2Etransforms_h__)
#include "Lumia.Imaging.Transforms.h"
#endif // !defined(__lumia2Eimaging2Etransforms_h__)
#if !defined(__windows2Emedia_h__)
#include <Windows.Media.h>
#endif // !defined(__windows2Emedia_h__)
#if !defined(__windows2Emedia2Ecapture_h__)
#include <Windows.Media.Capture.h>
#endif // !defined(__windows2Emedia2Ecapture_h__)
#if !defined(__windows2Emedia2Edevices_h__)
#include <Windows.Media.Devices.h>
#endif // !defined(__windows2Emedia2Edevices_h__)
#if !defined(__windows2Emedia2Emediaproperties_h__)
#include <Windows.Media.MediaProperties.h>
#endif // !defined(__windows2Emedia2Emediaproperties_h__)
#if !defined(__windows2Estorage_h__)
#include <Windows.Storage.h>
#endif // !defined(__windows2Estorage_h__)
#if !defined(__windows2Estorage2Estreams_h__)
#include <Windows.Storage.Streams.h>
#endif // !defined(__windows2Estorage2Estreams_h__)
#if !defined(__windows2Eui_h__)
#include <Windows.UI.h>
#endif // !defined(__windows2Eui_h__)
#if !defined(__windows2Eui2Examl2Emedia2Eimaging_h__)
#include <Windows.UI.Xaml.Media.Imaging.h>
#endif // !defined(__windows2Eui2Examl2Emedia2Eimaging_h__)
#if defined(__cplusplus)
extern "C" {
#endif // defined(__cplusplus)
#if !defined(__cplusplus)
#if !defined(__cplusplus)

typedef enum __x_ABI_CLumia_CImaging_CTransforms_CFlipMode __x_ABI_CLumia_CImaging_CTransforms_CFlipMode;


#endif /* end if !defined(__cplusplus) */


#endif




#if !defined(__cplusplus)
typedef struct __x_ABI_CWindows_CFoundation_CPoint __x_ABI_CWindows_CFoundation_CPoint;

#endif
#if !defined(__cplusplus)
typedef struct __x_ABI_CWindows_CFoundation_CRect __x_ABI_CWindows_CFoundation_CRect;

#endif
#if !defined(__cplusplus)
typedef struct __x_ABI_CWindows_CFoundation_CSize __x_ABI_CWindows_CFoundation_CSize;

#endif
#ifdef __cplusplus
namespace ABI {
namespace Windows {
namespace Media {
namespace Capture {
class MediaCaptureInitializationSettings;
} /*Capture*/
} /*Media*/
} /*Windows*/
}
#endif



#ifdef __cplusplus
namespace ABI {
namespace Windows {
namespace Media {
namespace MediaProperties {
class MediaEncodingProfile;
} /*MediaProperties*/
} /*Media*/
} /*Windows*/
}
#endif



#if !defined(__cplusplus)
typedef struct __x_ABI_CWindows_CUI_CColor __x_ABI_CWindows_CUI_CColor;

#endif
#if !defined(__cplusplus)
#if !defined(__cplusplus)

typedef enum __x_ABI_CLumia_CImaging_CColorMode __x_ABI_CLumia_CImaging_CColorMode;


#endif /* end if !defined(__cplusplus) */


#endif
#if !defined(__cplusplus)
#if !defined(__cplusplus)

typedef enum __x_ABI_CLumia_CImaging_COutputOption __x_ABI_CLumia_CImaging_COutputOption;


#endif /* end if !defined(__cplusplus) */


#endif
#if !defined(__cplusplus)
#if !defined(__cplusplus)

typedef enum __x_ABI_CLumia_CImaging_CAnimationFrameDithering __x_ABI_CLumia_CImaging_CAnimationFrameDithering;


#endif /* end if !defined(__cplusplus) */


#endif
#if !defined(__cplusplus)
#if !defined(__cplusplus)

typedef enum __x_ABI_CLumia_CImaging_CColorSpace __x_ABI_CLumia_CImaging_CColorSpace;


#endif /* end if !defined(__cplusplus) */


#endif
#if !defined(__cplusplus)
#if !defined(__cplusplus)

typedef enum __x_ABI_CLumia_CImaging_CAutoResizeMode __x_ABI_CLumia_CImaging_CAutoResizeMode;


#endif /* end if !defined(__cplusplus) */


#endif
#if !defined(__cplusplus)
#if !defined(__cplusplus)

typedef enum __x_ABI_CLumia_CImaging_CImageFormat __x_ABI_CLumia_CImaging_CImageFormat;


#endif /* end if !defined(__cplusplus) */


#endif
#if !defined(__cplusplus)
#if !defined(__cplusplus)

typedef enum __x_ABI_CLumia_CImaging_CMaskAnnotationType __x_ABI_CLumia_CImaging_CMaskAnnotationType;


#endif /* end if !defined(__cplusplus) */


#endif
#if !defined(__cplusplus)
#if !defined(__cplusplus)

typedef enum __x_ABI_CLumia_CImaging_CJpegOutputColorMode __x_ABI_CLumia_CImaging_CJpegOutputColorMode;


#endif /* end if !defined(__cplusplus) */


#endif
#if !defined(__cplusplus)
#if !defined(__cplusplus)

typedef enum __x_ABI_CLumia_CImaging_CRotation __x_ABI_CLumia_CImaging_CRotation;


#endif /* end if !defined(__cplusplus) */


#endif
#if !defined(__cplusplus)
#if !defined(__cplusplus)

typedef enum __x_ABI_CLumia_CImaging_CJpegOperation __x_ABI_CLumia_CImaging_CJpegOperation;


#endif /* end if !defined(__cplusplus) */


#endif
#if !defined(__cplusplus)
typedef struct __x_ABI_CLumia_CImaging_CMargins __x_ABI_CLumia_CImaging_CMargins;

#endif
#if !defined(__cplusplus)
typedef struct __x_ABI_CLumia_CImaging_CGradientStop __x_ABI_CLumia_CImaging_CGradientStop;

#endif
#if !defined(__cplusplus)
typedef struct __x_ABI_CLumia_CImaging_CRampedRange __x_ABI_CLumia_CImaging_CRampedRange;

#endif




























































#ifdef __cplusplus
namespace ABI {
namespace Lumia {
namespace Imaging {
class PixelBufferInfo;
} /*Imaging*/
} /*Lumia*/
}
#endif
#ifdef __cplusplus
namespace ABI {
namespace Lumia {
namespace Imaging {
class RenderRequest;
} /*Imaging*/
} /*Lumia*/
}
#endif
#ifdef __cplusplus
namespace ABI {
namespace Lumia {
namespace Imaging {
class AnimationFrame;
} /*Imaging*/
} /*Lumia*/
}
#endif
#ifdef __cplusplus
namespace ABI {
namespace Lumia {
namespace Imaging {
class AutoResizeConfiguration;
} /*Imaging*/
} /*Lumia*/
}
#endif
#ifdef __cplusplus
namespace ABI {
namespace Lumia {
namespace Imaging {
class ColorModeDescriptor;
} /*Imaging*/
} /*Lumia*/
}
#endif
#ifdef __cplusplus
namespace ABI {
namespace Lumia {
namespace Imaging {
class BitmapImageSource;
} /*Imaging*/
} /*Lumia*/
}
#endif
#ifdef __cplusplus
namespace ABI {
namespace Lumia {
namespace Imaging {
class BitmapProviderImageSource;
} /*Imaging*/
} /*Lumia*/
}
#endif
#ifdef __cplusplus
namespace ABI {
namespace Lumia {
namespace Imaging {
class BitmapRenderer;
} /*Imaging*/
} /*Lumia*/
}
#endif
#ifdef __cplusplus
namespace ABI {
namespace Lumia {
namespace Imaging {
class BufferImageSource;
} /*Imaging*/
} /*Lumia*/
}
#endif
#ifdef __cplusplus
namespace ABI {
namespace Lumia {
namespace Imaging {
class BufferProviderImageSource;
} /*Imaging*/
} /*Lumia*/
}
#endif
#ifdef __cplusplus
namespace ABI {
namespace Lumia {
namespace Imaging {
class CachingEffect;
} /*Imaging*/
} /*Lumia*/
}
#endif
#ifdef __cplusplus
namespace ABI {
namespace Lumia {
namespace Imaging {
class ColorImageSource;
} /*Imaging*/
} /*Lumia*/
}
#endif
#ifdef __cplusplus
namespace ABI {
namespace Lumia {
namespace Imaging {
class Version;
} /*Imaging*/
} /*Lumia*/
}
#endif
#ifdef __cplusplus
namespace ABI {
namespace Lumia {
namespace Imaging {
class SdkInfo;
} /*Imaging*/
} /*Lumia*/
}
#endif
#ifdef __cplusplus
namespace ABI {
namespace Lumia {
namespace Imaging {
class EllipseRadius;
} /*Imaging*/
} /*Lumia*/
}
#endif
#ifdef __cplusplus
namespace ABI {
namespace Lumia {
namespace Imaging {
class FilterEffect;
} /*Imaging*/
} /*Lumia*/
}
#endif
#ifdef __cplusplus
namespace ABI {
namespace Lumia {
namespace Imaging {
class GifRenderer;
} /*Imaging*/
} /*Lumia*/
}
#endif
#ifdef __cplusplus
namespace ABI {
namespace Lumia {
namespace Imaging {
class LinearGradient;
} /*Imaging*/
} /*Lumia*/
}
#endif
#ifdef __cplusplus
namespace ABI {
namespace Lumia {
namespace Imaging {
class RadialGradient;
} /*Imaging*/
} /*Lumia*/
}
#endif
#ifdef __cplusplus
namespace ABI {
namespace Lumia {
namespace Imaging {
class GradientImageSource;
} /*Imaging*/
} /*Lumia*/
}
#endif
#ifdef __cplusplus
namespace ABI {
namespace Lumia {
namespace Imaging {
class JpegRenderer;
} /*Imaging*/
} /*Lumia*/
}
#endif
#ifdef __cplusplus
namespace ABI {
namespace Lumia {
namespace Imaging {
class JpegTools;
} /*Imaging*/
} /*Lumia*/
}
#endif
#ifdef __cplusplus
namespace ABI {
namespace Lumia {
namespace Imaging {
class RandomAccessStreamImageSource;
} /*Imaging*/
} /*Lumia*/
}
#endif
#ifdef __cplusplus
namespace ABI {
namespace Lumia {
namespace Imaging {
class StorageFileImageSource;
} /*Imaging*/
} /*Lumia*/
}
#endif
#ifdef __cplusplus
namespace ABI {
namespace Lumia {
namespace Imaging {
class CameraPreviewImageSource;
} /*Imaging*/
} /*Lumia*/
}
#endif
#ifdef __cplusplus
namespace ABI {
namespace Lumia {
namespace Imaging {
class WriteableBitmapRenderer;
} /*Imaging*/
} /*Lumia*/
}
#endif


/* interface __MIDL_itf_Lumia2EImaging_0000_0026 */
/* [local] */ 


#ifdef __cplusplus

} /* end extern "C" */
namespace ABI {
    namespace Lumia {
        namespace Imaging {
            namespace Transforms {
                
                typedef enum FlipMode FlipMode;
                
            } /* end namespace */
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
        namespace Foundation {
            
            typedef struct Size Size;
            
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
            
            typedef enum ColorMode ColorMode;
            
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
    namespace Lumia {
        namespace Imaging {
            
            typedef enum AnimationFrameDithering AnimationFrameDithering;
            
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
            
            typedef enum ColorSpace ColorSpace;
            
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
            
            typedef enum AutoResizeMode AutoResizeMode;
            
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
            
            typedef enum ImageFormat ImageFormat;
            
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
            
            typedef enum JpegOutputColorMode JpegOutputColorMode;
            
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
            
            typedef enum Rotation Rotation;
            
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
            
            typedef enum JpegOperation JpegOperation;
            
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
            
            typedef struct Margins Margins;
            
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
            
            typedef struct GradientStop GradientStop;
            
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
            
            typedef struct RampedRange RampedRange;
            
        } /* end namespace */
    } /* end namespace */
} /* end namespace */

extern "C" { 
#endif































































extern RPC_IF_HANDLE __MIDL_itf_Lumia2EImaging_0000_0026_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_Lumia2EImaging_0000_0026_v0_0_s_ifspec;

/* interface __MIDL_itf_Lumia2EImaging_0000_1987 */




/* interface __MIDL_itf_Lumia2EImaging_0000_1987 */




extern RPC_IF_HANDLE __MIDL_itf_Lumia2EImaging_0000_1987_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_Lumia2EImaging_0000_1987_v0_0_s_ifspec;

/* interface __MIDL_itf_Lumia2EImaging_0000_0027 */
/* [local] */ 

#ifndef DEF___FIIterator_1_Lumia__CImaging__CColorPlaneDescriptor
#define DEF___FIIterator_1_Lumia__CImaging__CColorPlaneDescriptor
#if !defined(__cplusplus) || defined(RO_NO_TEMPLATE_NAME)


/* interface __MIDL_itf_Lumia2EImaging_0000_0027 */
/* [local] */ 



extern RPC_IF_HANDLE __MIDL_itf_Lumia2EImaging_0000_0027_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_Lumia2EImaging_0000_0027_v0_0_s_ifspec;

#ifndef ____FIIterator_1_Lumia__CImaging__CColorPlaneDescriptor_INTERFACE_DEFINED__
#define ____FIIterator_1_Lumia__CImaging__CColorPlaneDescriptor_INTERFACE_DEFINED__

/* interface __FIIterator_1_Lumia__CImaging__CColorPlaneDescriptor */
/* [unique][uuid][object] */ 



/* interface __FIIterator_1_Lumia__CImaging__CColorPlaneDescriptor */
/* [unique][uuid][object] */ 


EXTERN_C const IID IID___FIIterator_1_Lumia__CImaging__CColorPlaneDescriptor;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("0fd6e245-f4f4-5977-8807-0d511ec07a50")
    __FIIterator_1_Lumia__CImaging__CColorPlaneDescriptor : public IInspectable
    {
    public:
        virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_Current( 
            /* [retval][out] */ __RPC__deref_out_opt ABI::Lumia::Imaging::IColorPlaneDescriptor **current) = 0;
        
        virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_HasCurrent( 
            /* [retval][out] */ __RPC__out boolean *hasCurrent) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE MoveNext( 
            /* [retval][out] */ __RPC__out boolean *hasCurrent) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetMany( 
            /* [in] */ unsigned int capacity,
            /* [size_is][length_is][out] */ __RPC__out_ecount_part(capacity, *actual) ABI::Lumia::Imaging::IColorPlaneDescriptor **items,
            /* [retval][out] */ __RPC__out unsigned int *actual) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct __FIIterator_1_Lumia__CImaging__CColorPlaneDescriptorVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            __RPC__in __FIIterator_1_Lumia__CImaging__CColorPlaneDescriptor * This,
            /* [in] */ __RPC__in REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            __RPC__in __FIIterator_1_Lumia__CImaging__CColorPlaneDescriptor * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            __RPC__in __FIIterator_1_Lumia__CImaging__CColorPlaneDescriptor * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetIids )( 
            __RPC__in __FIIterator_1_Lumia__CImaging__CColorPlaneDescriptor * This,
            /* [out] */ __RPC__out ULONG *iidCount,
            /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
        
        HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )( 
            __RPC__in __FIIterator_1_Lumia__CImaging__CColorPlaneDescriptor * This,
            /* [out] */ __RPC__deref_out_opt HSTRING *className);
        
        HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )( 
            __RPC__in __FIIterator_1_Lumia__CImaging__CColorPlaneDescriptor * This,
            /* [out] */ __RPC__out TrustLevel *trustLevel);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_Current )( 
            __RPC__in __FIIterator_1_Lumia__CImaging__CColorPlaneDescriptor * This,
            /* [retval][out] */ __RPC__deref_out_opt __x_ABI_CLumia_CImaging_CIColorPlaneDescriptor **current);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_HasCurrent )( 
            __RPC__in __FIIterator_1_Lumia__CImaging__CColorPlaneDescriptor * This,
            /* [retval][out] */ __RPC__out boolean *hasCurrent);
        
        HRESULT ( STDMETHODCALLTYPE *MoveNext )( 
            __RPC__in __FIIterator_1_Lumia__CImaging__CColorPlaneDescriptor * This,
            /* [retval][out] */ __RPC__out boolean *hasCurrent);
        
        HRESULT ( STDMETHODCALLTYPE *GetMany )( 
            __RPC__in __FIIterator_1_Lumia__CImaging__CColorPlaneDescriptor * This,
            /* [in] */ unsigned int capacity,
            /* [size_is][length_is][out] */ __RPC__out_ecount_part(capacity, *actual) __x_ABI_CLumia_CImaging_CIColorPlaneDescriptor **items,
            /* [retval][out] */ __RPC__out unsigned int *actual);
        
        END_INTERFACE
    } __FIIterator_1_Lumia__CImaging__CColorPlaneDescriptorVtbl;

    interface __FIIterator_1_Lumia__CImaging__CColorPlaneDescriptor
    {
        CONST_VTBL struct __FIIterator_1_Lumia__CImaging__CColorPlaneDescriptorVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define __FIIterator_1_Lumia__CImaging__CColorPlaneDescriptor_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __FIIterator_1_Lumia__CImaging__CColorPlaneDescriptor_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __FIIterator_1_Lumia__CImaging__CColorPlaneDescriptor_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __FIIterator_1_Lumia__CImaging__CColorPlaneDescriptor_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 

#define __FIIterator_1_Lumia__CImaging__CColorPlaneDescriptor_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 

#define __FIIterator_1_Lumia__CImaging__CColorPlaneDescriptor_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 


#define __FIIterator_1_Lumia__CImaging__CColorPlaneDescriptor_get_Current(This,current)	\
    ( (This)->lpVtbl -> get_Current(This,current) ) 

#define __FIIterator_1_Lumia__CImaging__CColorPlaneDescriptor_get_HasCurrent(This,hasCurrent)	\
    ( (This)->lpVtbl -> get_HasCurrent(This,hasCurrent) ) 

#define __FIIterator_1_Lumia__CImaging__CColorPlaneDescriptor_MoveNext(This,hasCurrent)	\
    ( (This)->lpVtbl -> MoveNext(This,hasCurrent) ) 

#define __FIIterator_1_Lumia__CImaging__CColorPlaneDescriptor_GetMany(This,capacity,items,actual)	\
    ( (This)->lpVtbl -> GetMany(This,capacity,items,actual) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* ____FIIterator_1_Lumia__CImaging__CColorPlaneDescriptor_INTERFACE_DEFINED__ */


/* interface __MIDL_itf_Lumia2EImaging_0000_0028 */
/* [local] */ 

#endif /* pinterface */
#endif /* DEF___FIIterator_1_Lumia__CImaging__CColorPlaneDescriptor */


/* interface __MIDL_itf_Lumia2EImaging_0000_0028 */
/* [local] */ 



extern RPC_IF_HANDLE __MIDL_itf_Lumia2EImaging_0000_0028_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_Lumia2EImaging_0000_0028_v0_0_s_ifspec;

/* interface __MIDL_itf_Lumia2EImaging_0000_1988 */




/* interface __MIDL_itf_Lumia2EImaging_0000_1988 */




extern RPC_IF_HANDLE __MIDL_itf_Lumia2EImaging_0000_1988_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_Lumia2EImaging_0000_1988_v0_0_s_ifspec;

/* interface __MIDL_itf_Lumia2EImaging_0000_0029 */
/* [local] */ 

#ifndef DEF___FIIterable_1_Lumia__CImaging__CColorPlaneDescriptor
#define DEF___FIIterable_1_Lumia__CImaging__CColorPlaneDescriptor
#if !defined(__cplusplus) || defined(RO_NO_TEMPLATE_NAME)


/* interface __MIDL_itf_Lumia2EImaging_0000_0029 */
/* [local] */ 



extern RPC_IF_HANDLE __MIDL_itf_Lumia2EImaging_0000_0029_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_Lumia2EImaging_0000_0029_v0_0_s_ifspec;

#ifndef ____FIIterable_1_Lumia__CImaging__CColorPlaneDescriptor_INTERFACE_DEFINED__
#define ____FIIterable_1_Lumia__CImaging__CColorPlaneDescriptor_INTERFACE_DEFINED__

/* interface __FIIterable_1_Lumia__CImaging__CColorPlaneDescriptor */
/* [unique][uuid][object] */ 



/* interface __FIIterable_1_Lumia__CImaging__CColorPlaneDescriptor */
/* [unique][uuid][object] */ 


EXTERN_C const IID IID___FIIterable_1_Lumia__CImaging__CColorPlaneDescriptor;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("2d40aa89-2058-5a94-8859-153d00ddb2ea")
    __FIIterable_1_Lumia__CImaging__CColorPlaneDescriptor : public IInspectable
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE First( 
            /* [retval][out] */ __RPC__deref_out_opt __FIIterator_1_Lumia__CImaging__CColorPlaneDescriptor **first) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct __FIIterable_1_Lumia__CImaging__CColorPlaneDescriptorVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            __RPC__in __FIIterable_1_Lumia__CImaging__CColorPlaneDescriptor * This,
            /* [in] */ __RPC__in REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            __RPC__in __FIIterable_1_Lumia__CImaging__CColorPlaneDescriptor * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            __RPC__in __FIIterable_1_Lumia__CImaging__CColorPlaneDescriptor * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetIids )( 
            __RPC__in __FIIterable_1_Lumia__CImaging__CColorPlaneDescriptor * This,
            /* [out] */ __RPC__out ULONG *iidCount,
            /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
        
        HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )( 
            __RPC__in __FIIterable_1_Lumia__CImaging__CColorPlaneDescriptor * This,
            /* [out] */ __RPC__deref_out_opt HSTRING *className);
        
        HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )( 
            __RPC__in __FIIterable_1_Lumia__CImaging__CColorPlaneDescriptor * This,
            /* [out] */ __RPC__out TrustLevel *trustLevel);
        
        HRESULT ( STDMETHODCALLTYPE *First )( 
            __RPC__in __FIIterable_1_Lumia__CImaging__CColorPlaneDescriptor * This,
            /* [retval][out] */ __RPC__deref_out_opt __FIIterator_1_Lumia__CImaging__CColorPlaneDescriptor **first);
        
        END_INTERFACE
    } __FIIterable_1_Lumia__CImaging__CColorPlaneDescriptorVtbl;

    interface __FIIterable_1_Lumia__CImaging__CColorPlaneDescriptor
    {
        CONST_VTBL struct __FIIterable_1_Lumia__CImaging__CColorPlaneDescriptorVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define __FIIterable_1_Lumia__CImaging__CColorPlaneDescriptor_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __FIIterable_1_Lumia__CImaging__CColorPlaneDescriptor_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __FIIterable_1_Lumia__CImaging__CColorPlaneDescriptor_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __FIIterable_1_Lumia__CImaging__CColorPlaneDescriptor_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 

#define __FIIterable_1_Lumia__CImaging__CColorPlaneDescriptor_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 

#define __FIIterable_1_Lumia__CImaging__CColorPlaneDescriptor_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 


#define __FIIterable_1_Lumia__CImaging__CColorPlaneDescriptor_First(This,first)	\
    ( (This)->lpVtbl -> First(This,first) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* ____FIIterable_1_Lumia__CImaging__CColorPlaneDescriptor_INTERFACE_DEFINED__ */


/* interface __MIDL_itf_Lumia2EImaging_0000_0030 */
/* [local] */ 

#endif /* pinterface */
#endif /* DEF___FIIterable_1_Lumia__CImaging__CColorPlaneDescriptor */


/* interface __MIDL_itf_Lumia2EImaging_0000_0030 */
/* [local] */ 



extern RPC_IF_HANDLE __MIDL_itf_Lumia2EImaging_0000_0030_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_Lumia2EImaging_0000_0030_v0_0_s_ifspec;

/* interface __MIDL_itf_Lumia2EImaging_0000_1989 */




/* interface __MIDL_itf_Lumia2EImaging_0000_1989 */




extern RPC_IF_HANDLE __MIDL_itf_Lumia2EImaging_0000_1989_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_Lumia2EImaging_0000_1989_v0_0_s_ifspec;

/* interface __MIDL_itf_Lumia2EImaging_0000_0031 */
/* [local] */ 

#ifndef DEF___FIIterator_1_Lumia__CImaging__CIFilter
#define DEF___FIIterator_1_Lumia__CImaging__CIFilter
#if !defined(__cplusplus) || defined(RO_NO_TEMPLATE_NAME)


/* interface __MIDL_itf_Lumia2EImaging_0000_0031 */
/* [local] */ 



extern RPC_IF_HANDLE __MIDL_itf_Lumia2EImaging_0000_0031_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_Lumia2EImaging_0000_0031_v0_0_s_ifspec;

#ifndef ____FIIterator_1_Lumia__CImaging__CIFilter_INTERFACE_DEFINED__
#define ____FIIterator_1_Lumia__CImaging__CIFilter_INTERFACE_DEFINED__

/* interface __FIIterator_1_Lumia__CImaging__CIFilter */
/* [unique][uuid][object] */ 



/* interface __FIIterator_1_Lumia__CImaging__CIFilter */
/* [unique][uuid][object] */ 


EXTERN_C const IID IID___FIIterator_1_Lumia__CImaging__CIFilter;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("c1f5991d-5bdd-5aa8-8b9d-4734237a0182")
    __FIIterator_1_Lumia__CImaging__CIFilter : public IInspectable
    {
    public:
        virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_Current( 
            /* [retval][out] */ __RPC__deref_out_opt ABI::Lumia::Imaging::IFilter **current) = 0;
        
        virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_HasCurrent( 
            /* [retval][out] */ __RPC__out boolean *hasCurrent) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE MoveNext( 
            /* [retval][out] */ __RPC__out boolean *hasCurrent) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetMany( 
            /* [in] */ unsigned int capacity,
            /* [size_is][length_is][out] */ __RPC__out_ecount_part(capacity, *actual) ABI::Lumia::Imaging::IFilter **items,
            /* [retval][out] */ __RPC__out unsigned int *actual) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct __FIIterator_1_Lumia__CImaging__CIFilterVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            __RPC__in __FIIterator_1_Lumia__CImaging__CIFilter * This,
            /* [in] */ __RPC__in REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            __RPC__in __FIIterator_1_Lumia__CImaging__CIFilter * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            __RPC__in __FIIterator_1_Lumia__CImaging__CIFilter * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetIids )( 
            __RPC__in __FIIterator_1_Lumia__CImaging__CIFilter * This,
            /* [out] */ __RPC__out ULONG *iidCount,
            /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
        
        HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )( 
            __RPC__in __FIIterator_1_Lumia__CImaging__CIFilter * This,
            /* [out] */ __RPC__deref_out_opt HSTRING *className);
        
        HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )( 
            __RPC__in __FIIterator_1_Lumia__CImaging__CIFilter * This,
            /* [out] */ __RPC__out TrustLevel *trustLevel);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_Current )( 
            __RPC__in __FIIterator_1_Lumia__CImaging__CIFilter * This,
            /* [retval][out] */ __RPC__deref_out_opt __x_ABI_CLumia_CImaging_CIFilter **current);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_HasCurrent )( 
            __RPC__in __FIIterator_1_Lumia__CImaging__CIFilter * This,
            /* [retval][out] */ __RPC__out boolean *hasCurrent);
        
        HRESULT ( STDMETHODCALLTYPE *MoveNext )( 
            __RPC__in __FIIterator_1_Lumia__CImaging__CIFilter * This,
            /* [retval][out] */ __RPC__out boolean *hasCurrent);
        
        HRESULT ( STDMETHODCALLTYPE *GetMany )( 
            __RPC__in __FIIterator_1_Lumia__CImaging__CIFilter * This,
            /* [in] */ unsigned int capacity,
            /* [size_is][length_is][out] */ __RPC__out_ecount_part(capacity, *actual) __x_ABI_CLumia_CImaging_CIFilter **items,
            /* [retval][out] */ __RPC__out unsigned int *actual);
        
        END_INTERFACE
    } __FIIterator_1_Lumia__CImaging__CIFilterVtbl;

    interface __FIIterator_1_Lumia__CImaging__CIFilter
    {
        CONST_VTBL struct __FIIterator_1_Lumia__CImaging__CIFilterVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define __FIIterator_1_Lumia__CImaging__CIFilter_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __FIIterator_1_Lumia__CImaging__CIFilter_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __FIIterator_1_Lumia__CImaging__CIFilter_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __FIIterator_1_Lumia__CImaging__CIFilter_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 

#define __FIIterator_1_Lumia__CImaging__CIFilter_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 

#define __FIIterator_1_Lumia__CImaging__CIFilter_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 


#define __FIIterator_1_Lumia__CImaging__CIFilter_get_Current(This,current)	\
    ( (This)->lpVtbl -> get_Current(This,current) ) 

#define __FIIterator_1_Lumia__CImaging__CIFilter_get_HasCurrent(This,hasCurrent)	\
    ( (This)->lpVtbl -> get_HasCurrent(This,hasCurrent) ) 

#define __FIIterator_1_Lumia__CImaging__CIFilter_MoveNext(This,hasCurrent)	\
    ( (This)->lpVtbl -> MoveNext(This,hasCurrent) ) 

#define __FIIterator_1_Lumia__CImaging__CIFilter_GetMany(This,capacity,items,actual)	\
    ( (This)->lpVtbl -> GetMany(This,capacity,items,actual) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* ____FIIterator_1_Lumia__CImaging__CIFilter_INTERFACE_DEFINED__ */


/* interface __MIDL_itf_Lumia2EImaging_0000_0032 */
/* [local] */ 

#endif /* pinterface */
#endif /* DEF___FIIterator_1_Lumia__CImaging__CIFilter */


/* interface __MIDL_itf_Lumia2EImaging_0000_0032 */
/* [local] */ 



extern RPC_IF_HANDLE __MIDL_itf_Lumia2EImaging_0000_0032_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_Lumia2EImaging_0000_0032_v0_0_s_ifspec;

/* interface __MIDL_itf_Lumia2EImaging_0000_1990 */




/* interface __MIDL_itf_Lumia2EImaging_0000_1990 */




extern RPC_IF_HANDLE __MIDL_itf_Lumia2EImaging_0000_1990_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_Lumia2EImaging_0000_1990_v0_0_s_ifspec;

/* interface __MIDL_itf_Lumia2EImaging_0000_0033 */
/* [local] */ 

#ifndef DEF___FIIterable_1_Lumia__CImaging__CIFilter
#define DEF___FIIterable_1_Lumia__CImaging__CIFilter
#if !defined(__cplusplus) || defined(RO_NO_TEMPLATE_NAME)


/* interface __MIDL_itf_Lumia2EImaging_0000_0033 */
/* [local] */ 



extern RPC_IF_HANDLE __MIDL_itf_Lumia2EImaging_0000_0033_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_Lumia2EImaging_0000_0033_v0_0_s_ifspec;

#ifndef ____FIIterable_1_Lumia__CImaging__CIFilter_INTERFACE_DEFINED__
#define ____FIIterable_1_Lumia__CImaging__CIFilter_INTERFACE_DEFINED__

/* interface __FIIterable_1_Lumia__CImaging__CIFilter */
/* [unique][uuid][object] */ 



/* interface __FIIterable_1_Lumia__CImaging__CIFilter */
/* [unique][uuid][object] */ 


EXTERN_C const IID IID___FIIterable_1_Lumia__CImaging__CIFilter;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("b4ed4432-2849-5796-9474-5544d00b93c0")
    __FIIterable_1_Lumia__CImaging__CIFilter : public IInspectable
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE First( 
            /* [retval][out] */ __RPC__deref_out_opt __FIIterator_1_Lumia__CImaging__CIFilter **first) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct __FIIterable_1_Lumia__CImaging__CIFilterVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            __RPC__in __FIIterable_1_Lumia__CImaging__CIFilter * This,
            /* [in] */ __RPC__in REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            __RPC__in __FIIterable_1_Lumia__CImaging__CIFilter * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            __RPC__in __FIIterable_1_Lumia__CImaging__CIFilter * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetIids )( 
            __RPC__in __FIIterable_1_Lumia__CImaging__CIFilter * This,
            /* [out] */ __RPC__out ULONG *iidCount,
            /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
        
        HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )( 
            __RPC__in __FIIterable_1_Lumia__CImaging__CIFilter * This,
            /* [out] */ __RPC__deref_out_opt HSTRING *className);
        
        HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )( 
            __RPC__in __FIIterable_1_Lumia__CImaging__CIFilter * This,
            /* [out] */ __RPC__out TrustLevel *trustLevel);
        
        HRESULT ( STDMETHODCALLTYPE *First )( 
            __RPC__in __FIIterable_1_Lumia__CImaging__CIFilter * This,
            /* [retval][out] */ __RPC__deref_out_opt __FIIterator_1_Lumia__CImaging__CIFilter **first);
        
        END_INTERFACE
    } __FIIterable_1_Lumia__CImaging__CIFilterVtbl;

    interface __FIIterable_1_Lumia__CImaging__CIFilter
    {
        CONST_VTBL struct __FIIterable_1_Lumia__CImaging__CIFilterVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define __FIIterable_1_Lumia__CImaging__CIFilter_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __FIIterable_1_Lumia__CImaging__CIFilter_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __FIIterable_1_Lumia__CImaging__CIFilter_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __FIIterable_1_Lumia__CImaging__CIFilter_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 

#define __FIIterable_1_Lumia__CImaging__CIFilter_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 

#define __FIIterable_1_Lumia__CImaging__CIFilter_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 


#define __FIIterable_1_Lumia__CImaging__CIFilter_First(This,first)	\
    ( (This)->lpVtbl -> First(This,first) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* ____FIIterable_1_Lumia__CImaging__CIFilter_INTERFACE_DEFINED__ */


/* interface __MIDL_itf_Lumia2EImaging_0000_0034 */
/* [local] */ 

#endif /* pinterface */
#endif /* DEF___FIIterable_1_Lumia__CImaging__CIFilter */


/* interface __MIDL_itf_Lumia2EImaging_0000_0034 */
/* [local] */ 



extern RPC_IF_HANDLE __MIDL_itf_Lumia2EImaging_0000_0034_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_Lumia2EImaging_0000_0034_v0_0_s_ifspec;

/* interface __MIDL_itf_Lumia2EImaging_0000_1991 */




/* interface __MIDL_itf_Lumia2EImaging_0000_1991 */




extern RPC_IF_HANDLE __MIDL_itf_Lumia2EImaging_0000_1991_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_Lumia2EImaging_0000_1991_v0_0_s_ifspec;

/* interface __MIDL_itf_Lumia2EImaging_0000_0035 */
/* [local] */ 

#ifndef DEF___FIIterator_1_Lumia__CImaging__CIImageProvider
#define DEF___FIIterator_1_Lumia__CImaging__CIImageProvider
#if !defined(__cplusplus) || defined(RO_NO_TEMPLATE_NAME)


/* interface __MIDL_itf_Lumia2EImaging_0000_0035 */
/* [local] */ 



extern RPC_IF_HANDLE __MIDL_itf_Lumia2EImaging_0000_0035_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_Lumia2EImaging_0000_0035_v0_0_s_ifspec;

#ifndef ____FIIterator_1_Lumia__CImaging__CIImageProvider_INTERFACE_DEFINED__
#define ____FIIterator_1_Lumia__CImaging__CIImageProvider_INTERFACE_DEFINED__

/* interface __FIIterator_1_Lumia__CImaging__CIImageProvider */
/* [unique][uuid][object] */ 



/* interface __FIIterator_1_Lumia__CImaging__CIImageProvider */
/* [unique][uuid][object] */ 


EXTERN_C const IID IID___FIIterator_1_Lumia__CImaging__CIImageProvider;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("6969b00c-12a1-5c8a-92a0-0c1b3993868a")
    __FIIterator_1_Lumia__CImaging__CIImageProvider : public IInspectable
    {
    public:
        virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_Current( 
            /* [retval][out] */ __RPC__deref_out_opt ABI::Lumia::Imaging::IImageProvider **current) = 0;
        
        virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_HasCurrent( 
            /* [retval][out] */ __RPC__out boolean *hasCurrent) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE MoveNext( 
            /* [retval][out] */ __RPC__out boolean *hasCurrent) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetMany( 
            /* [in] */ unsigned int capacity,
            /* [size_is][length_is][out] */ __RPC__out_ecount_part(capacity, *actual) ABI::Lumia::Imaging::IImageProvider **items,
            /* [retval][out] */ __RPC__out unsigned int *actual) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct __FIIterator_1_Lumia__CImaging__CIImageProviderVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            __RPC__in __FIIterator_1_Lumia__CImaging__CIImageProvider * This,
            /* [in] */ __RPC__in REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            __RPC__in __FIIterator_1_Lumia__CImaging__CIImageProvider * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            __RPC__in __FIIterator_1_Lumia__CImaging__CIImageProvider * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetIids )( 
            __RPC__in __FIIterator_1_Lumia__CImaging__CIImageProvider * This,
            /* [out] */ __RPC__out ULONG *iidCount,
            /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
        
        HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )( 
            __RPC__in __FIIterator_1_Lumia__CImaging__CIImageProvider * This,
            /* [out] */ __RPC__deref_out_opt HSTRING *className);
        
        HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )( 
            __RPC__in __FIIterator_1_Lumia__CImaging__CIImageProvider * This,
            /* [out] */ __RPC__out TrustLevel *trustLevel);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_Current )( 
            __RPC__in __FIIterator_1_Lumia__CImaging__CIImageProvider * This,
            /* [retval][out] */ __RPC__deref_out_opt __x_ABI_CLumia_CImaging_CIImageProvider **current);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_HasCurrent )( 
            __RPC__in __FIIterator_1_Lumia__CImaging__CIImageProvider * This,
            /* [retval][out] */ __RPC__out boolean *hasCurrent);
        
        HRESULT ( STDMETHODCALLTYPE *MoveNext )( 
            __RPC__in __FIIterator_1_Lumia__CImaging__CIImageProvider * This,
            /* [retval][out] */ __RPC__out boolean *hasCurrent);
        
        HRESULT ( STDMETHODCALLTYPE *GetMany )( 
            __RPC__in __FIIterator_1_Lumia__CImaging__CIImageProvider * This,
            /* [in] */ unsigned int capacity,
            /* [size_is][length_is][out] */ __RPC__out_ecount_part(capacity, *actual) __x_ABI_CLumia_CImaging_CIImageProvider **items,
            /* [retval][out] */ __RPC__out unsigned int *actual);
        
        END_INTERFACE
    } __FIIterator_1_Lumia__CImaging__CIImageProviderVtbl;

    interface __FIIterator_1_Lumia__CImaging__CIImageProvider
    {
        CONST_VTBL struct __FIIterator_1_Lumia__CImaging__CIImageProviderVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define __FIIterator_1_Lumia__CImaging__CIImageProvider_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __FIIterator_1_Lumia__CImaging__CIImageProvider_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __FIIterator_1_Lumia__CImaging__CIImageProvider_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __FIIterator_1_Lumia__CImaging__CIImageProvider_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 

#define __FIIterator_1_Lumia__CImaging__CIImageProvider_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 

#define __FIIterator_1_Lumia__CImaging__CIImageProvider_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 


#define __FIIterator_1_Lumia__CImaging__CIImageProvider_get_Current(This,current)	\
    ( (This)->lpVtbl -> get_Current(This,current) ) 

#define __FIIterator_1_Lumia__CImaging__CIImageProvider_get_HasCurrent(This,hasCurrent)	\
    ( (This)->lpVtbl -> get_HasCurrent(This,hasCurrent) ) 

#define __FIIterator_1_Lumia__CImaging__CIImageProvider_MoveNext(This,hasCurrent)	\
    ( (This)->lpVtbl -> MoveNext(This,hasCurrent) ) 

#define __FIIterator_1_Lumia__CImaging__CIImageProvider_GetMany(This,capacity,items,actual)	\
    ( (This)->lpVtbl -> GetMany(This,capacity,items,actual) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* ____FIIterator_1_Lumia__CImaging__CIImageProvider_INTERFACE_DEFINED__ */


/* interface __MIDL_itf_Lumia2EImaging_0000_0036 */
/* [local] */ 

#endif /* pinterface */
#endif /* DEF___FIIterator_1_Lumia__CImaging__CIImageProvider */


/* interface __MIDL_itf_Lumia2EImaging_0000_0036 */
/* [local] */ 



extern RPC_IF_HANDLE __MIDL_itf_Lumia2EImaging_0000_0036_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_Lumia2EImaging_0000_0036_v0_0_s_ifspec;

/* interface __MIDL_itf_Lumia2EImaging_0000_1992 */




/* interface __MIDL_itf_Lumia2EImaging_0000_1992 */




extern RPC_IF_HANDLE __MIDL_itf_Lumia2EImaging_0000_1992_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_Lumia2EImaging_0000_1992_v0_0_s_ifspec;

/* interface __MIDL_itf_Lumia2EImaging_0000_0037 */
/* [local] */ 

#ifndef DEF___FIIterable_1_Lumia__CImaging__CIImageProvider
#define DEF___FIIterable_1_Lumia__CImaging__CIImageProvider
#if !defined(__cplusplus) || defined(RO_NO_TEMPLATE_NAME)


/* interface __MIDL_itf_Lumia2EImaging_0000_0037 */
/* [local] */ 



extern RPC_IF_HANDLE __MIDL_itf_Lumia2EImaging_0000_0037_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_Lumia2EImaging_0000_0037_v0_0_s_ifspec;

#ifndef ____FIIterable_1_Lumia__CImaging__CIImageProvider_INTERFACE_DEFINED__
#define ____FIIterable_1_Lumia__CImaging__CIImageProvider_INTERFACE_DEFINED__

/* interface __FIIterable_1_Lumia__CImaging__CIImageProvider */
/* [unique][uuid][object] */ 



/* interface __FIIterable_1_Lumia__CImaging__CIImageProvider */
/* [unique][uuid][object] */ 


EXTERN_C const IID IID___FIIterable_1_Lumia__CImaging__CIImageProvider;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("4c70620b-ba1f-53bb-93ee-5e928e2fe6c1")
    __FIIterable_1_Lumia__CImaging__CIImageProvider : public IInspectable
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE First( 
            /* [retval][out] */ __RPC__deref_out_opt __FIIterator_1_Lumia__CImaging__CIImageProvider **first) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct __FIIterable_1_Lumia__CImaging__CIImageProviderVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            __RPC__in __FIIterable_1_Lumia__CImaging__CIImageProvider * This,
            /* [in] */ __RPC__in REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            __RPC__in __FIIterable_1_Lumia__CImaging__CIImageProvider * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            __RPC__in __FIIterable_1_Lumia__CImaging__CIImageProvider * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetIids )( 
            __RPC__in __FIIterable_1_Lumia__CImaging__CIImageProvider * This,
            /* [out] */ __RPC__out ULONG *iidCount,
            /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
        
        HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )( 
            __RPC__in __FIIterable_1_Lumia__CImaging__CIImageProvider * This,
            /* [out] */ __RPC__deref_out_opt HSTRING *className);
        
        HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )( 
            __RPC__in __FIIterable_1_Lumia__CImaging__CIImageProvider * This,
            /* [out] */ __RPC__out TrustLevel *trustLevel);
        
        HRESULT ( STDMETHODCALLTYPE *First )( 
            __RPC__in __FIIterable_1_Lumia__CImaging__CIImageProvider * This,
            /* [retval][out] */ __RPC__deref_out_opt __FIIterator_1_Lumia__CImaging__CIImageProvider **first);
        
        END_INTERFACE
    } __FIIterable_1_Lumia__CImaging__CIImageProviderVtbl;

    interface __FIIterable_1_Lumia__CImaging__CIImageProvider
    {
        CONST_VTBL struct __FIIterable_1_Lumia__CImaging__CIImageProviderVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define __FIIterable_1_Lumia__CImaging__CIImageProvider_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __FIIterable_1_Lumia__CImaging__CIImageProvider_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __FIIterable_1_Lumia__CImaging__CIImageProvider_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __FIIterable_1_Lumia__CImaging__CIImageProvider_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 

#define __FIIterable_1_Lumia__CImaging__CIImageProvider_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 

#define __FIIterable_1_Lumia__CImaging__CIImageProvider_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 


#define __FIIterable_1_Lumia__CImaging__CIImageProvider_First(This,first)	\
    ( (This)->lpVtbl -> First(This,first) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* ____FIIterable_1_Lumia__CImaging__CIImageProvider_INTERFACE_DEFINED__ */


/* interface __MIDL_itf_Lumia2EImaging_0000_0038 */
/* [local] */ 

#endif /* pinterface */
#endif /* DEF___FIIterable_1_Lumia__CImaging__CIImageProvider */


/* interface __MIDL_itf_Lumia2EImaging_0000_0038 */
/* [local] */ 



extern RPC_IF_HANDLE __MIDL_itf_Lumia2EImaging_0000_0038_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_Lumia2EImaging_0000_0038_v0_0_s_ifspec;

/* interface __MIDL_itf_Lumia2EImaging_0000_1993 */




/* interface __MIDL_itf_Lumia2EImaging_0000_1993 */




extern RPC_IF_HANDLE __MIDL_itf_Lumia2EImaging_0000_1993_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_Lumia2EImaging_0000_1993_v0_0_s_ifspec;

/* interface __MIDL_itf_Lumia2EImaging_0000_0039 */
/* [local] */ 

#ifndef DEF___FIVectorView_1_Lumia__CImaging__CColorPlaneDescriptor
#define DEF___FIVectorView_1_Lumia__CImaging__CColorPlaneDescriptor
#if !defined(__cplusplus) || defined(RO_NO_TEMPLATE_NAME)


/* interface __MIDL_itf_Lumia2EImaging_0000_0039 */
/* [local] */ 



extern RPC_IF_HANDLE __MIDL_itf_Lumia2EImaging_0000_0039_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_Lumia2EImaging_0000_0039_v0_0_s_ifspec;

#ifndef ____FIVectorView_1_Lumia__CImaging__CColorPlaneDescriptor_INTERFACE_DEFINED__
#define ____FIVectorView_1_Lumia__CImaging__CColorPlaneDescriptor_INTERFACE_DEFINED__

/* interface __FIVectorView_1_Lumia__CImaging__CColorPlaneDescriptor */
/* [unique][uuid][object] */ 



/* interface __FIVectorView_1_Lumia__CImaging__CColorPlaneDescriptor */
/* [unique][uuid][object] */ 


EXTERN_C const IID IID___FIVectorView_1_Lumia__CImaging__CColorPlaneDescriptor;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("09d6f970-2188-5a27-a069-280fce06d0ef")
    __FIVectorView_1_Lumia__CImaging__CColorPlaneDescriptor : public IInspectable
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE GetAt( 
            /* [in] */ unsigned int index,
            /* [retval][out] */ __RPC__deref_out_opt ABI::Lumia::Imaging::IColorPlaneDescriptor **item) = 0;
        
        virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_Size( 
            /* [retval][out] */ __RPC__out unsigned int *size) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE IndexOf( 
            /* [in] */ __RPC__in_opt ABI::Lumia::Imaging::IColorPlaneDescriptor *item,
            /* [out] */ __RPC__out unsigned int *index,
            /* [retval][out] */ __RPC__out boolean *found) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetMany( 
            /* [in] */ unsigned int startIndex,
            /* [in] */ unsigned int capacity,
            /* [size_is][length_is][out] */ __RPC__out_ecount_part(capacity, *actual) ABI::Lumia::Imaging::IColorPlaneDescriptor **items,
            /* [retval][out] */ __RPC__out unsigned int *actual) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct __FIVectorView_1_Lumia__CImaging__CColorPlaneDescriptorVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            __RPC__in __FIVectorView_1_Lumia__CImaging__CColorPlaneDescriptor * This,
            /* [in] */ __RPC__in REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            __RPC__in __FIVectorView_1_Lumia__CImaging__CColorPlaneDescriptor * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            __RPC__in __FIVectorView_1_Lumia__CImaging__CColorPlaneDescriptor * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetIids )( 
            __RPC__in __FIVectorView_1_Lumia__CImaging__CColorPlaneDescriptor * This,
            /* [out] */ __RPC__out ULONG *iidCount,
            /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
        
        HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )( 
            __RPC__in __FIVectorView_1_Lumia__CImaging__CColorPlaneDescriptor * This,
            /* [out] */ __RPC__deref_out_opt HSTRING *className);
        
        HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )( 
            __RPC__in __FIVectorView_1_Lumia__CImaging__CColorPlaneDescriptor * This,
            /* [out] */ __RPC__out TrustLevel *trustLevel);
        
        HRESULT ( STDMETHODCALLTYPE *GetAt )( 
            __RPC__in __FIVectorView_1_Lumia__CImaging__CColorPlaneDescriptor * This,
            /* [in] */ unsigned int index,
            /* [retval][out] */ __RPC__deref_out_opt __x_ABI_CLumia_CImaging_CIColorPlaneDescriptor **item);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_Size )( 
            __RPC__in __FIVectorView_1_Lumia__CImaging__CColorPlaneDescriptor * This,
            /* [retval][out] */ __RPC__out unsigned int *size);
        
        HRESULT ( STDMETHODCALLTYPE *IndexOf )( 
            __RPC__in __FIVectorView_1_Lumia__CImaging__CColorPlaneDescriptor * This,
            /* [in] */ __RPC__in_opt __x_ABI_CLumia_CImaging_CIColorPlaneDescriptor *item,
            /* [out] */ __RPC__out unsigned int *index,
            /* [retval][out] */ __RPC__out boolean *found);
        
        HRESULT ( STDMETHODCALLTYPE *GetMany )( 
            __RPC__in __FIVectorView_1_Lumia__CImaging__CColorPlaneDescriptor * This,
            /* [in] */ unsigned int startIndex,
            /* [in] */ unsigned int capacity,
            /* [size_is][length_is][out] */ __RPC__out_ecount_part(capacity, *actual) __x_ABI_CLumia_CImaging_CIColorPlaneDescriptor **items,
            /* [retval][out] */ __RPC__out unsigned int *actual);
        
        END_INTERFACE
    } __FIVectorView_1_Lumia__CImaging__CColorPlaneDescriptorVtbl;

    interface __FIVectorView_1_Lumia__CImaging__CColorPlaneDescriptor
    {
        CONST_VTBL struct __FIVectorView_1_Lumia__CImaging__CColorPlaneDescriptorVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define __FIVectorView_1_Lumia__CImaging__CColorPlaneDescriptor_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __FIVectorView_1_Lumia__CImaging__CColorPlaneDescriptor_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __FIVectorView_1_Lumia__CImaging__CColorPlaneDescriptor_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __FIVectorView_1_Lumia__CImaging__CColorPlaneDescriptor_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 

#define __FIVectorView_1_Lumia__CImaging__CColorPlaneDescriptor_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 

#define __FIVectorView_1_Lumia__CImaging__CColorPlaneDescriptor_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 


#define __FIVectorView_1_Lumia__CImaging__CColorPlaneDescriptor_GetAt(This,index,item)	\
    ( (This)->lpVtbl -> GetAt(This,index,item) ) 

#define __FIVectorView_1_Lumia__CImaging__CColorPlaneDescriptor_get_Size(This,size)	\
    ( (This)->lpVtbl -> get_Size(This,size) ) 

#define __FIVectorView_1_Lumia__CImaging__CColorPlaneDescriptor_IndexOf(This,item,index,found)	\
    ( (This)->lpVtbl -> IndexOf(This,item,index,found) ) 

#define __FIVectorView_1_Lumia__CImaging__CColorPlaneDescriptor_GetMany(This,startIndex,capacity,items,actual)	\
    ( (This)->lpVtbl -> GetMany(This,startIndex,capacity,items,actual) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* ____FIVectorView_1_Lumia__CImaging__CColorPlaneDescriptor_INTERFACE_DEFINED__ */


/* interface __MIDL_itf_Lumia2EImaging_0000_0040 */
/* [local] */ 

#endif /* pinterface */
#endif /* DEF___FIVectorView_1_Lumia__CImaging__CColorPlaneDescriptor */


/* interface __MIDL_itf_Lumia2EImaging_0000_0040 */
/* [local] */ 



extern RPC_IF_HANDLE __MIDL_itf_Lumia2EImaging_0000_0040_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_Lumia2EImaging_0000_0040_v0_0_s_ifspec;

/* interface __MIDL_itf_Lumia2EImaging_0000_1994 */




/* interface __MIDL_itf_Lumia2EImaging_0000_1994 */




extern RPC_IF_HANDLE __MIDL_itf_Lumia2EImaging_0000_1994_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_Lumia2EImaging_0000_1994_v0_0_s_ifspec;

/* interface __MIDL_itf_Lumia2EImaging_0000_0041 */
/* [local] */ 

#ifndef DEF___FIVectorView_1_Lumia__CImaging__CIImageProvider
#define DEF___FIVectorView_1_Lumia__CImaging__CIImageProvider
#if !defined(__cplusplus) || defined(RO_NO_TEMPLATE_NAME)


/* interface __MIDL_itf_Lumia2EImaging_0000_0041 */
/* [local] */ 



extern RPC_IF_HANDLE __MIDL_itf_Lumia2EImaging_0000_0041_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_Lumia2EImaging_0000_0041_v0_0_s_ifspec;

#ifndef ____FIVectorView_1_Lumia__CImaging__CIImageProvider_INTERFACE_DEFINED__
#define ____FIVectorView_1_Lumia__CImaging__CIImageProvider_INTERFACE_DEFINED__

/* interface __FIVectorView_1_Lumia__CImaging__CIImageProvider */
/* [unique][uuid][object] */ 



/* interface __FIVectorView_1_Lumia__CImaging__CIImageProvider */
/* [unique][uuid][object] */ 


EXTERN_C const IID IID___FIVectorView_1_Lumia__CImaging__CIImageProvider;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("887aae9c-c4ba-5ad5-8ead-a0c568db75d5")
    __FIVectorView_1_Lumia__CImaging__CIImageProvider : public IInspectable
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE GetAt( 
            /* [in] */ unsigned int index,
            /* [retval][out] */ __RPC__deref_out_opt ABI::Lumia::Imaging::IImageProvider **item) = 0;
        
        virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_Size( 
            /* [retval][out] */ __RPC__out unsigned int *size) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE IndexOf( 
            /* [in] */ __RPC__in_opt ABI::Lumia::Imaging::IImageProvider *item,
            /* [out] */ __RPC__out unsigned int *index,
            /* [retval][out] */ __RPC__out boolean *found) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetMany( 
            /* [in] */ unsigned int startIndex,
            /* [in] */ unsigned int capacity,
            /* [size_is][length_is][out] */ __RPC__out_ecount_part(capacity, *actual) ABI::Lumia::Imaging::IImageProvider **items,
            /* [retval][out] */ __RPC__out unsigned int *actual) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct __FIVectorView_1_Lumia__CImaging__CIImageProviderVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            __RPC__in __FIVectorView_1_Lumia__CImaging__CIImageProvider * This,
            /* [in] */ __RPC__in REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            __RPC__in __FIVectorView_1_Lumia__CImaging__CIImageProvider * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            __RPC__in __FIVectorView_1_Lumia__CImaging__CIImageProvider * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetIids )( 
            __RPC__in __FIVectorView_1_Lumia__CImaging__CIImageProvider * This,
            /* [out] */ __RPC__out ULONG *iidCount,
            /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
        
        HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )( 
            __RPC__in __FIVectorView_1_Lumia__CImaging__CIImageProvider * This,
            /* [out] */ __RPC__deref_out_opt HSTRING *className);
        
        HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )( 
            __RPC__in __FIVectorView_1_Lumia__CImaging__CIImageProvider * This,
            /* [out] */ __RPC__out TrustLevel *trustLevel);
        
        HRESULT ( STDMETHODCALLTYPE *GetAt )( 
            __RPC__in __FIVectorView_1_Lumia__CImaging__CIImageProvider * This,
            /* [in] */ unsigned int index,
            /* [retval][out] */ __RPC__deref_out_opt __x_ABI_CLumia_CImaging_CIImageProvider **item);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_Size )( 
            __RPC__in __FIVectorView_1_Lumia__CImaging__CIImageProvider * This,
            /* [retval][out] */ __RPC__out unsigned int *size);
        
        HRESULT ( STDMETHODCALLTYPE *IndexOf )( 
            __RPC__in __FIVectorView_1_Lumia__CImaging__CIImageProvider * This,
            /* [in] */ __RPC__in_opt __x_ABI_CLumia_CImaging_CIImageProvider *item,
            /* [out] */ __RPC__out unsigned int *index,
            /* [retval][out] */ __RPC__out boolean *found);
        
        HRESULT ( STDMETHODCALLTYPE *GetMany )( 
            __RPC__in __FIVectorView_1_Lumia__CImaging__CIImageProvider * This,
            /* [in] */ unsigned int startIndex,
            /* [in] */ unsigned int capacity,
            /* [size_is][length_is][out] */ __RPC__out_ecount_part(capacity, *actual) __x_ABI_CLumia_CImaging_CIImageProvider **items,
            /* [retval][out] */ __RPC__out unsigned int *actual);
        
        END_INTERFACE
    } __FIVectorView_1_Lumia__CImaging__CIImageProviderVtbl;

    interface __FIVectorView_1_Lumia__CImaging__CIImageProvider
    {
        CONST_VTBL struct __FIVectorView_1_Lumia__CImaging__CIImageProviderVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define __FIVectorView_1_Lumia__CImaging__CIImageProvider_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __FIVectorView_1_Lumia__CImaging__CIImageProvider_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __FIVectorView_1_Lumia__CImaging__CIImageProvider_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __FIVectorView_1_Lumia__CImaging__CIImageProvider_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 

#define __FIVectorView_1_Lumia__CImaging__CIImageProvider_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 

#define __FIVectorView_1_Lumia__CImaging__CIImageProvider_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 


#define __FIVectorView_1_Lumia__CImaging__CIImageProvider_GetAt(This,index,item)	\
    ( (This)->lpVtbl -> GetAt(This,index,item) ) 

#define __FIVectorView_1_Lumia__CImaging__CIImageProvider_get_Size(This,size)	\
    ( (This)->lpVtbl -> get_Size(This,size) ) 

#define __FIVectorView_1_Lumia__CImaging__CIImageProvider_IndexOf(This,item,index,found)	\
    ( (This)->lpVtbl -> IndexOf(This,item,index,found) ) 

#define __FIVectorView_1_Lumia__CImaging__CIImageProvider_GetMany(This,startIndex,capacity,items,actual)	\
    ( (This)->lpVtbl -> GetMany(This,startIndex,capacity,items,actual) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* ____FIVectorView_1_Lumia__CImaging__CIImageProvider_INTERFACE_DEFINED__ */


/* interface __MIDL_itf_Lumia2EImaging_0000_0042 */
/* [local] */ 

#endif /* pinterface */
#endif /* DEF___FIVectorView_1_Lumia__CImaging__CIImageProvider */


/* interface __MIDL_itf_Lumia2EImaging_0000_0042 */
/* [local] */ 



extern RPC_IF_HANDLE __MIDL_itf_Lumia2EImaging_0000_0042_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_Lumia2EImaging_0000_0042_v0_0_s_ifspec;

/* interface __MIDL_itf_Lumia2EImaging_0000_1995 */




/* interface __MIDL_itf_Lumia2EImaging_0000_1995 */




extern RPC_IF_HANDLE __MIDL_itf_Lumia2EImaging_0000_1995_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_Lumia2EImaging_0000_1995_v0_0_s_ifspec;

/* interface __MIDL_itf_Lumia2EImaging_0000_0043 */
/* [local] */ 

#ifndef DEF___FIAsyncOperationCompletedHandler_1_Lumia__CImaging__CBitmap
#define DEF___FIAsyncOperationCompletedHandler_1_Lumia__CImaging__CBitmap
#if !defined(__cplusplus) || defined(RO_NO_TEMPLATE_NAME)



/* interface __MIDL_itf_Lumia2EImaging_0000_0043 */
/* [local] */ 




extern RPC_IF_HANDLE __MIDL_itf_Lumia2EImaging_0000_0043_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_Lumia2EImaging_0000_0043_v0_0_s_ifspec;

#ifndef ____FIAsyncOperationCompletedHandler_1_Lumia__CImaging__CBitmap_INTERFACE_DEFINED__
#define ____FIAsyncOperationCompletedHandler_1_Lumia__CImaging__CBitmap_INTERFACE_DEFINED__

/* interface __FIAsyncOperationCompletedHandler_1_Lumia__CImaging__CBitmap */
/* [unique][uuid][object] */ 



/* interface __FIAsyncOperationCompletedHandler_1_Lumia__CImaging__CBitmap */
/* [unique][uuid][object] */ 


EXTERN_C const IID IID___FIAsyncOperationCompletedHandler_1_Lumia__CImaging__CBitmap;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("62d38b42-663d-5705-a382-55943b7a66e3")
    __FIAsyncOperationCompletedHandler_1_Lumia__CImaging__CBitmap : public IUnknown
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE Invoke( 
            /* [in] */ __RPC__in_opt __FIAsyncOperation_1_Lumia__CImaging__CBitmap *asyncInfo,
            /* [in] */ AsyncStatus status) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct __FIAsyncOperationCompletedHandler_1_Lumia__CImaging__CBitmapVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            __RPC__in __FIAsyncOperationCompletedHandler_1_Lumia__CImaging__CBitmap * This,
            /* [in] */ __RPC__in REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            __RPC__in __FIAsyncOperationCompletedHandler_1_Lumia__CImaging__CBitmap * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            __RPC__in __FIAsyncOperationCompletedHandler_1_Lumia__CImaging__CBitmap * This);
        
        HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            __RPC__in __FIAsyncOperationCompletedHandler_1_Lumia__CImaging__CBitmap * This,
            /* [in] */ __RPC__in_opt __FIAsyncOperation_1_Lumia__CImaging__CBitmap *asyncInfo,
            /* [in] */ AsyncStatus status);
        
        END_INTERFACE
    } __FIAsyncOperationCompletedHandler_1_Lumia__CImaging__CBitmapVtbl;

    interface __FIAsyncOperationCompletedHandler_1_Lumia__CImaging__CBitmap
    {
        CONST_VTBL struct __FIAsyncOperationCompletedHandler_1_Lumia__CImaging__CBitmapVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define __FIAsyncOperationCompletedHandler_1_Lumia__CImaging__CBitmap_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __FIAsyncOperationCompletedHandler_1_Lumia__CImaging__CBitmap_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __FIAsyncOperationCompletedHandler_1_Lumia__CImaging__CBitmap_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __FIAsyncOperationCompletedHandler_1_Lumia__CImaging__CBitmap_Invoke(This,asyncInfo,status)	\
    ( (This)->lpVtbl -> Invoke(This,asyncInfo,status) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* ____FIAsyncOperationCompletedHandler_1_Lumia__CImaging__CBitmap_INTERFACE_DEFINED__ */


/* interface __MIDL_itf_Lumia2EImaging_0000_0044 */
/* [local] */ 

#endif /* pinterface */
#endif /* DEF___FIAsyncOperationCompletedHandler_1_Lumia__CImaging__CBitmap */


/* interface __MIDL_itf_Lumia2EImaging_0000_0044 */
/* [local] */ 



extern RPC_IF_HANDLE __MIDL_itf_Lumia2EImaging_0000_0044_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_Lumia2EImaging_0000_0044_v0_0_s_ifspec;

/* interface __MIDL_itf_Lumia2EImaging_0000_1996 */




/* interface __MIDL_itf_Lumia2EImaging_0000_1996 */




extern RPC_IF_HANDLE __MIDL_itf_Lumia2EImaging_0000_1996_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_Lumia2EImaging_0000_1996_v0_0_s_ifspec;

/* interface __MIDL_itf_Lumia2EImaging_0000_0045 */
/* [local] */ 

#ifndef DEF___FIAsyncOperation_1_Lumia__CImaging__CBitmap
#define DEF___FIAsyncOperation_1_Lumia__CImaging__CBitmap
#if !defined(__cplusplus) || defined(RO_NO_TEMPLATE_NAME)


/* interface __MIDL_itf_Lumia2EImaging_0000_0045 */
/* [local] */ 



extern RPC_IF_HANDLE __MIDL_itf_Lumia2EImaging_0000_0045_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_Lumia2EImaging_0000_0045_v0_0_s_ifspec;

#ifndef ____FIAsyncOperation_1_Lumia__CImaging__CBitmap_INTERFACE_DEFINED__
#define ____FIAsyncOperation_1_Lumia__CImaging__CBitmap_INTERFACE_DEFINED__

/* interface __FIAsyncOperation_1_Lumia__CImaging__CBitmap */
/* [unique][uuid][object] */ 



/* interface __FIAsyncOperation_1_Lumia__CImaging__CBitmap */
/* [unique][uuid][object] */ 


EXTERN_C const IID IID___FIAsyncOperation_1_Lumia__CImaging__CBitmap;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("7ab91fc9-c143-5ca7-a43e-8e6aeac083f1")
    __FIAsyncOperation_1_Lumia__CImaging__CBitmap : public IInspectable
    {
    public:
        virtual /* [propput] */ HRESULT STDMETHODCALLTYPE put_Completed( 
            /* [in] */ __RPC__in_opt __FIAsyncOperationCompletedHandler_1_Lumia__CImaging__CBitmap *handler) = 0;
        
        virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_Completed( 
            /* [retval][out] */ __RPC__deref_out_opt __FIAsyncOperationCompletedHandler_1_Lumia__CImaging__CBitmap **handler) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetResults( 
            /* [retval][out] */ __RPC__deref_out_opt ABI::Lumia::Imaging::IBitmap **results) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct __FIAsyncOperation_1_Lumia__CImaging__CBitmapVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            __RPC__in __FIAsyncOperation_1_Lumia__CImaging__CBitmap * This,
            /* [in] */ __RPC__in REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            __RPC__in __FIAsyncOperation_1_Lumia__CImaging__CBitmap * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            __RPC__in __FIAsyncOperation_1_Lumia__CImaging__CBitmap * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetIids )( 
            __RPC__in __FIAsyncOperation_1_Lumia__CImaging__CBitmap * This,
            /* [out] */ __RPC__out ULONG *iidCount,
            /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
        
        HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )( 
            __RPC__in __FIAsyncOperation_1_Lumia__CImaging__CBitmap * This,
            /* [out] */ __RPC__deref_out_opt HSTRING *className);
        
        HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )( 
            __RPC__in __FIAsyncOperation_1_Lumia__CImaging__CBitmap * This,
            /* [out] */ __RPC__out TrustLevel *trustLevel);
        
        /* [propput] */ HRESULT ( STDMETHODCALLTYPE *put_Completed )( 
            __RPC__in __FIAsyncOperation_1_Lumia__CImaging__CBitmap * This,
            /* [in] */ __RPC__in_opt __FIAsyncOperationCompletedHandler_1_Lumia__CImaging__CBitmap *handler);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_Completed )( 
            __RPC__in __FIAsyncOperation_1_Lumia__CImaging__CBitmap * This,
            /* [retval][out] */ __RPC__deref_out_opt __FIAsyncOperationCompletedHandler_1_Lumia__CImaging__CBitmap **handler);
        
        HRESULT ( STDMETHODCALLTYPE *GetResults )( 
            __RPC__in __FIAsyncOperation_1_Lumia__CImaging__CBitmap * This,
            /* [retval][out] */ __RPC__deref_out_opt __x_ABI_CLumia_CImaging_CIBitmap **results);
        
        END_INTERFACE
    } __FIAsyncOperation_1_Lumia__CImaging__CBitmapVtbl;

    interface __FIAsyncOperation_1_Lumia__CImaging__CBitmap
    {
        CONST_VTBL struct __FIAsyncOperation_1_Lumia__CImaging__CBitmapVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define __FIAsyncOperation_1_Lumia__CImaging__CBitmap_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __FIAsyncOperation_1_Lumia__CImaging__CBitmap_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __FIAsyncOperation_1_Lumia__CImaging__CBitmap_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __FIAsyncOperation_1_Lumia__CImaging__CBitmap_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 

#define __FIAsyncOperation_1_Lumia__CImaging__CBitmap_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 

#define __FIAsyncOperation_1_Lumia__CImaging__CBitmap_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 


#define __FIAsyncOperation_1_Lumia__CImaging__CBitmap_put_Completed(This,handler)	\
    ( (This)->lpVtbl -> put_Completed(This,handler) ) 

#define __FIAsyncOperation_1_Lumia__CImaging__CBitmap_get_Completed(This,handler)	\
    ( (This)->lpVtbl -> get_Completed(This,handler) ) 

#define __FIAsyncOperation_1_Lumia__CImaging__CBitmap_GetResults(This,results)	\
    ( (This)->lpVtbl -> GetResults(This,results) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* ____FIAsyncOperation_1_Lumia__CImaging__CBitmap_INTERFACE_DEFINED__ */


/* interface __MIDL_itf_Lumia2EImaging_0000_0046 */
/* [local] */ 

#endif /* pinterface */
#endif /* DEF___FIAsyncOperation_1_Lumia__CImaging__CBitmap */


/* interface __MIDL_itf_Lumia2EImaging_0000_0046 */
/* [local] */ 



extern RPC_IF_HANDLE __MIDL_itf_Lumia2EImaging_0000_0046_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_Lumia2EImaging_0000_0046_v0_0_s_ifspec;

/* interface __MIDL_itf_Lumia2EImaging_0000_1997 */




/* interface __MIDL_itf_Lumia2EImaging_0000_1997 */




extern RPC_IF_HANDLE __MIDL_itf_Lumia2EImaging_0000_1997_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_Lumia2EImaging_0000_1997_v0_0_s_ifspec;

/* interface __MIDL_itf_Lumia2EImaging_0000_0047 */
/* [local] */ 

#ifndef DEF___FIAsyncOperationCompletedHandler_1_Lumia__CImaging__CDiagnosticsReport
#define DEF___FIAsyncOperationCompletedHandler_1_Lumia__CImaging__CDiagnosticsReport
#if !defined(__cplusplus) || defined(RO_NO_TEMPLATE_NAME)



/* interface __MIDL_itf_Lumia2EImaging_0000_0047 */
/* [local] */ 




extern RPC_IF_HANDLE __MIDL_itf_Lumia2EImaging_0000_0047_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_Lumia2EImaging_0000_0047_v0_0_s_ifspec;

#ifndef ____FIAsyncOperationCompletedHandler_1_Lumia__CImaging__CDiagnosticsReport_INTERFACE_DEFINED__
#define ____FIAsyncOperationCompletedHandler_1_Lumia__CImaging__CDiagnosticsReport_INTERFACE_DEFINED__

/* interface __FIAsyncOperationCompletedHandler_1_Lumia__CImaging__CDiagnosticsReport */
/* [unique][uuid][object] */ 



/* interface __FIAsyncOperationCompletedHandler_1_Lumia__CImaging__CDiagnosticsReport */
/* [unique][uuid][object] */ 


EXTERN_C const IID IID___FIAsyncOperationCompletedHandler_1_Lumia__CImaging__CDiagnosticsReport;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("ff6506e3-8d67-51cd-a079-7ff4faa78815")
    __FIAsyncOperationCompletedHandler_1_Lumia__CImaging__CDiagnosticsReport : public IUnknown
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE Invoke( 
            /* [in] */ __RPC__in_opt __FIAsyncOperation_1_Lumia__CImaging__CDiagnosticsReport *asyncInfo,
            /* [in] */ AsyncStatus status) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct __FIAsyncOperationCompletedHandler_1_Lumia__CImaging__CDiagnosticsReportVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            __RPC__in __FIAsyncOperationCompletedHandler_1_Lumia__CImaging__CDiagnosticsReport * This,
            /* [in] */ __RPC__in REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            __RPC__in __FIAsyncOperationCompletedHandler_1_Lumia__CImaging__CDiagnosticsReport * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            __RPC__in __FIAsyncOperationCompletedHandler_1_Lumia__CImaging__CDiagnosticsReport * This);
        
        HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            __RPC__in __FIAsyncOperationCompletedHandler_1_Lumia__CImaging__CDiagnosticsReport * This,
            /* [in] */ __RPC__in_opt __FIAsyncOperation_1_Lumia__CImaging__CDiagnosticsReport *asyncInfo,
            /* [in] */ AsyncStatus status);
        
        END_INTERFACE
    } __FIAsyncOperationCompletedHandler_1_Lumia__CImaging__CDiagnosticsReportVtbl;

    interface __FIAsyncOperationCompletedHandler_1_Lumia__CImaging__CDiagnosticsReport
    {
        CONST_VTBL struct __FIAsyncOperationCompletedHandler_1_Lumia__CImaging__CDiagnosticsReportVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define __FIAsyncOperationCompletedHandler_1_Lumia__CImaging__CDiagnosticsReport_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __FIAsyncOperationCompletedHandler_1_Lumia__CImaging__CDiagnosticsReport_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __FIAsyncOperationCompletedHandler_1_Lumia__CImaging__CDiagnosticsReport_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __FIAsyncOperationCompletedHandler_1_Lumia__CImaging__CDiagnosticsReport_Invoke(This,asyncInfo,status)	\
    ( (This)->lpVtbl -> Invoke(This,asyncInfo,status) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* ____FIAsyncOperationCompletedHandler_1_Lumia__CImaging__CDiagnosticsReport_INTERFACE_DEFINED__ */


/* interface __MIDL_itf_Lumia2EImaging_0000_0048 */
/* [local] */ 

#endif /* pinterface */
#endif /* DEF___FIAsyncOperationCompletedHandler_1_Lumia__CImaging__CDiagnosticsReport */


/* interface __MIDL_itf_Lumia2EImaging_0000_0048 */
/* [local] */ 



extern RPC_IF_HANDLE __MIDL_itf_Lumia2EImaging_0000_0048_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_Lumia2EImaging_0000_0048_v0_0_s_ifspec;

/* interface __MIDL_itf_Lumia2EImaging_0000_1998 */




/* interface __MIDL_itf_Lumia2EImaging_0000_1998 */




extern RPC_IF_HANDLE __MIDL_itf_Lumia2EImaging_0000_1998_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_Lumia2EImaging_0000_1998_v0_0_s_ifspec;

/* interface __MIDL_itf_Lumia2EImaging_0000_0049 */
/* [local] */ 

#ifndef DEF___FIAsyncOperation_1_Lumia__CImaging__CDiagnosticsReport
#define DEF___FIAsyncOperation_1_Lumia__CImaging__CDiagnosticsReport
#if !defined(__cplusplus) || defined(RO_NO_TEMPLATE_NAME)


/* interface __MIDL_itf_Lumia2EImaging_0000_0049 */
/* [local] */ 



extern RPC_IF_HANDLE __MIDL_itf_Lumia2EImaging_0000_0049_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_Lumia2EImaging_0000_0049_v0_0_s_ifspec;

#ifndef ____FIAsyncOperation_1_Lumia__CImaging__CDiagnosticsReport_INTERFACE_DEFINED__
#define ____FIAsyncOperation_1_Lumia__CImaging__CDiagnosticsReport_INTERFACE_DEFINED__

/* interface __FIAsyncOperation_1_Lumia__CImaging__CDiagnosticsReport */
/* [unique][uuid][object] */ 



/* interface __FIAsyncOperation_1_Lumia__CImaging__CDiagnosticsReport */
/* [unique][uuid][object] */ 


EXTERN_C const IID IID___FIAsyncOperation_1_Lumia__CImaging__CDiagnosticsReport;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("cb88c5e6-b2f9-5c27-9440-db4de12f134a")
    __FIAsyncOperation_1_Lumia__CImaging__CDiagnosticsReport : public IInspectable
    {
    public:
        virtual /* [propput] */ HRESULT STDMETHODCALLTYPE put_Completed( 
            /* [in] */ __RPC__in_opt __FIAsyncOperationCompletedHandler_1_Lumia__CImaging__CDiagnosticsReport *handler) = 0;
        
        virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_Completed( 
            /* [retval][out] */ __RPC__deref_out_opt __FIAsyncOperationCompletedHandler_1_Lumia__CImaging__CDiagnosticsReport **handler) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetResults( 
            /* [retval][out] */ __RPC__deref_out_opt ABI::Lumia::Imaging::IDiagnosticsReport **results) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct __FIAsyncOperation_1_Lumia__CImaging__CDiagnosticsReportVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            __RPC__in __FIAsyncOperation_1_Lumia__CImaging__CDiagnosticsReport * This,
            /* [in] */ __RPC__in REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            __RPC__in __FIAsyncOperation_1_Lumia__CImaging__CDiagnosticsReport * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            __RPC__in __FIAsyncOperation_1_Lumia__CImaging__CDiagnosticsReport * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetIids )( 
            __RPC__in __FIAsyncOperation_1_Lumia__CImaging__CDiagnosticsReport * This,
            /* [out] */ __RPC__out ULONG *iidCount,
            /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
        
        HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )( 
            __RPC__in __FIAsyncOperation_1_Lumia__CImaging__CDiagnosticsReport * This,
            /* [out] */ __RPC__deref_out_opt HSTRING *className);
        
        HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )( 
            __RPC__in __FIAsyncOperation_1_Lumia__CImaging__CDiagnosticsReport * This,
            /* [out] */ __RPC__out TrustLevel *trustLevel);
        
        /* [propput] */ HRESULT ( STDMETHODCALLTYPE *put_Completed )( 
            __RPC__in __FIAsyncOperation_1_Lumia__CImaging__CDiagnosticsReport * This,
            /* [in] */ __RPC__in_opt __FIAsyncOperationCompletedHandler_1_Lumia__CImaging__CDiagnosticsReport *handler);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_Completed )( 
            __RPC__in __FIAsyncOperation_1_Lumia__CImaging__CDiagnosticsReport * This,
            /* [retval][out] */ __RPC__deref_out_opt __FIAsyncOperationCompletedHandler_1_Lumia__CImaging__CDiagnosticsReport **handler);
        
        HRESULT ( STDMETHODCALLTYPE *GetResults )( 
            __RPC__in __FIAsyncOperation_1_Lumia__CImaging__CDiagnosticsReport * This,
            /* [retval][out] */ __RPC__deref_out_opt __x_ABI_CLumia_CImaging_CIDiagnosticsReport **results);
        
        END_INTERFACE
    } __FIAsyncOperation_1_Lumia__CImaging__CDiagnosticsReportVtbl;

    interface __FIAsyncOperation_1_Lumia__CImaging__CDiagnosticsReport
    {
        CONST_VTBL struct __FIAsyncOperation_1_Lumia__CImaging__CDiagnosticsReportVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define __FIAsyncOperation_1_Lumia__CImaging__CDiagnosticsReport_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __FIAsyncOperation_1_Lumia__CImaging__CDiagnosticsReport_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __FIAsyncOperation_1_Lumia__CImaging__CDiagnosticsReport_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __FIAsyncOperation_1_Lumia__CImaging__CDiagnosticsReport_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 

#define __FIAsyncOperation_1_Lumia__CImaging__CDiagnosticsReport_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 

#define __FIAsyncOperation_1_Lumia__CImaging__CDiagnosticsReport_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 


#define __FIAsyncOperation_1_Lumia__CImaging__CDiagnosticsReport_put_Completed(This,handler)	\
    ( (This)->lpVtbl -> put_Completed(This,handler) ) 

#define __FIAsyncOperation_1_Lumia__CImaging__CDiagnosticsReport_get_Completed(This,handler)	\
    ( (This)->lpVtbl -> get_Completed(This,handler) ) 

#define __FIAsyncOperation_1_Lumia__CImaging__CDiagnosticsReport_GetResults(This,results)	\
    ( (This)->lpVtbl -> GetResults(This,results) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* ____FIAsyncOperation_1_Lumia__CImaging__CDiagnosticsReport_INTERFACE_DEFINED__ */


/* interface __MIDL_itf_Lumia2EImaging_0000_0050 */
/* [local] */ 

#endif /* pinterface */
#endif /* DEF___FIAsyncOperation_1_Lumia__CImaging__CDiagnosticsReport */


/* interface __MIDL_itf_Lumia2EImaging_0000_0050 */
/* [local] */ 



extern RPC_IF_HANDLE __MIDL_itf_Lumia2EImaging_0000_0050_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_Lumia2EImaging_0000_0050_v0_0_s_ifspec;

/* interface __MIDL_itf_Lumia2EImaging_0000_1999 */




/* interface __MIDL_itf_Lumia2EImaging_0000_1999 */




extern RPC_IF_HANDLE __MIDL_itf_Lumia2EImaging_0000_1999_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_Lumia2EImaging_0000_1999_v0_0_s_ifspec;

/* interface __MIDL_itf_Lumia2EImaging_0000_0051 */
/* [local] */ 

#ifndef DEF___FIAsyncOperationCompletedHandler_1_Lumia__CImaging__CIReadableBitmap
#define DEF___FIAsyncOperationCompletedHandler_1_Lumia__CImaging__CIReadableBitmap
#if !defined(__cplusplus) || defined(RO_NO_TEMPLATE_NAME)



/* interface __MIDL_itf_Lumia2EImaging_0000_0051 */
/* [local] */ 




extern RPC_IF_HANDLE __MIDL_itf_Lumia2EImaging_0000_0051_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_Lumia2EImaging_0000_0051_v0_0_s_ifspec;

#ifndef ____FIAsyncOperationCompletedHandler_1_Lumia__CImaging__CIReadableBitmap_INTERFACE_DEFINED__
#define ____FIAsyncOperationCompletedHandler_1_Lumia__CImaging__CIReadableBitmap_INTERFACE_DEFINED__

/* interface __FIAsyncOperationCompletedHandler_1_Lumia__CImaging__CIReadableBitmap */
/* [unique][uuid][object] */ 



/* interface __FIAsyncOperationCompletedHandler_1_Lumia__CImaging__CIReadableBitmap */
/* [unique][uuid][object] */ 


EXTERN_C const IID IID___FIAsyncOperationCompletedHandler_1_Lumia__CImaging__CIReadableBitmap;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("8e2f28bb-8eed-5030-8e52-7676fd17f133")
    __FIAsyncOperationCompletedHandler_1_Lumia__CImaging__CIReadableBitmap : public IUnknown
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE Invoke( 
            /* [in] */ __RPC__in_opt __FIAsyncOperation_1_Lumia__CImaging__CIReadableBitmap *asyncInfo,
            /* [in] */ AsyncStatus status) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct __FIAsyncOperationCompletedHandler_1_Lumia__CImaging__CIReadableBitmapVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            __RPC__in __FIAsyncOperationCompletedHandler_1_Lumia__CImaging__CIReadableBitmap * This,
            /* [in] */ __RPC__in REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            __RPC__in __FIAsyncOperationCompletedHandler_1_Lumia__CImaging__CIReadableBitmap * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            __RPC__in __FIAsyncOperationCompletedHandler_1_Lumia__CImaging__CIReadableBitmap * This);
        
        HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            __RPC__in __FIAsyncOperationCompletedHandler_1_Lumia__CImaging__CIReadableBitmap * This,
            /* [in] */ __RPC__in_opt __FIAsyncOperation_1_Lumia__CImaging__CIReadableBitmap *asyncInfo,
            /* [in] */ AsyncStatus status);
        
        END_INTERFACE
    } __FIAsyncOperationCompletedHandler_1_Lumia__CImaging__CIReadableBitmapVtbl;

    interface __FIAsyncOperationCompletedHandler_1_Lumia__CImaging__CIReadableBitmap
    {
        CONST_VTBL struct __FIAsyncOperationCompletedHandler_1_Lumia__CImaging__CIReadableBitmapVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define __FIAsyncOperationCompletedHandler_1_Lumia__CImaging__CIReadableBitmap_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __FIAsyncOperationCompletedHandler_1_Lumia__CImaging__CIReadableBitmap_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __FIAsyncOperationCompletedHandler_1_Lumia__CImaging__CIReadableBitmap_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __FIAsyncOperationCompletedHandler_1_Lumia__CImaging__CIReadableBitmap_Invoke(This,asyncInfo,status)	\
    ( (This)->lpVtbl -> Invoke(This,asyncInfo,status) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* ____FIAsyncOperationCompletedHandler_1_Lumia__CImaging__CIReadableBitmap_INTERFACE_DEFINED__ */


/* interface __MIDL_itf_Lumia2EImaging_0000_0052 */
/* [local] */ 

#endif /* pinterface */
#endif /* DEF___FIAsyncOperationCompletedHandler_1_Lumia__CImaging__CIReadableBitmap */


/* interface __MIDL_itf_Lumia2EImaging_0000_0052 */
/* [local] */ 



extern RPC_IF_HANDLE __MIDL_itf_Lumia2EImaging_0000_0052_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_Lumia2EImaging_0000_0052_v0_0_s_ifspec;

/* interface __MIDL_itf_Lumia2EImaging_0000_2000 */




/* interface __MIDL_itf_Lumia2EImaging_0000_2000 */




extern RPC_IF_HANDLE __MIDL_itf_Lumia2EImaging_0000_2000_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_Lumia2EImaging_0000_2000_v0_0_s_ifspec;

/* interface __MIDL_itf_Lumia2EImaging_0000_0053 */
/* [local] */ 

#ifndef DEF___FIAsyncOperation_1_Lumia__CImaging__CIReadableBitmap
#define DEF___FIAsyncOperation_1_Lumia__CImaging__CIReadableBitmap
#if !defined(__cplusplus) || defined(RO_NO_TEMPLATE_NAME)


/* interface __MIDL_itf_Lumia2EImaging_0000_0053 */
/* [local] */ 



extern RPC_IF_HANDLE __MIDL_itf_Lumia2EImaging_0000_0053_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_Lumia2EImaging_0000_0053_v0_0_s_ifspec;

#ifndef ____FIAsyncOperation_1_Lumia__CImaging__CIReadableBitmap_INTERFACE_DEFINED__
#define ____FIAsyncOperation_1_Lumia__CImaging__CIReadableBitmap_INTERFACE_DEFINED__

/* interface __FIAsyncOperation_1_Lumia__CImaging__CIReadableBitmap */
/* [unique][uuid][object] */ 



/* interface __FIAsyncOperation_1_Lumia__CImaging__CIReadableBitmap */
/* [unique][uuid][object] */ 


EXTERN_C const IID IID___FIAsyncOperation_1_Lumia__CImaging__CIReadableBitmap;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("b43135e8-666e-521c-a834-ab21c66ddd14")
    __FIAsyncOperation_1_Lumia__CImaging__CIReadableBitmap : public IInspectable
    {
    public:
        virtual /* [propput] */ HRESULT STDMETHODCALLTYPE put_Completed( 
            /* [in] */ __RPC__in_opt __FIAsyncOperationCompletedHandler_1_Lumia__CImaging__CIReadableBitmap *handler) = 0;
        
        virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_Completed( 
            /* [retval][out] */ __RPC__deref_out_opt __FIAsyncOperationCompletedHandler_1_Lumia__CImaging__CIReadableBitmap **handler) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetResults( 
            /* [retval][out] */ __RPC__deref_out_opt ABI::Lumia::Imaging::IReadableBitmap **results) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct __FIAsyncOperation_1_Lumia__CImaging__CIReadableBitmapVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            __RPC__in __FIAsyncOperation_1_Lumia__CImaging__CIReadableBitmap * This,
            /* [in] */ __RPC__in REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            __RPC__in __FIAsyncOperation_1_Lumia__CImaging__CIReadableBitmap * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            __RPC__in __FIAsyncOperation_1_Lumia__CImaging__CIReadableBitmap * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetIids )( 
            __RPC__in __FIAsyncOperation_1_Lumia__CImaging__CIReadableBitmap * This,
            /* [out] */ __RPC__out ULONG *iidCount,
            /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
        
        HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )( 
            __RPC__in __FIAsyncOperation_1_Lumia__CImaging__CIReadableBitmap * This,
            /* [out] */ __RPC__deref_out_opt HSTRING *className);
        
        HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )( 
            __RPC__in __FIAsyncOperation_1_Lumia__CImaging__CIReadableBitmap * This,
            /* [out] */ __RPC__out TrustLevel *trustLevel);
        
        /* [propput] */ HRESULT ( STDMETHODCALLTYPE *put_Completed )( 
            __RPC__in __FIAsyncOperation_1_Lumia__CImaging__CIReadableBitmap * This,
            /* [in] */ __RPC__in_opt __FIAsyncOperationCompletedHandler_1_Lumia__CImaging__CIReadableBitmap *handler);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_Completed )( 
            __RPC__in __FIAsyncOperation_1_Lumia__CImaging__CIReadableBitmap * This,
            /* [retval][out] */ __RPC__deref_out_opt __FIAsyncOperationCompletedHandler_1_Lumia__CImaging__CIReadableBitmap **handler);
        
        HRESULT ( STDMETHODCALLTYPE *GetResults )( 
            __RPC__in __FIAsyncOperation_1_Lumia__CImaging__CIReadableBitmap * This,
            /* [retval][out] */ __RPC__deref_out_opt __x_ABI_CLumia_CImaging_CIReadableBitmap **results);
        
        END_INTERFACE
    } __FIAsyncOperation_1_Lumia__CImaging__CIReadableBitmapVtbl;

    interface __FIAsyncOperation_1_Lumia__CImaging__CIReadableBitmap
    {
        CONST_VTBL struct __FIAsyncOperation_1_Lumia__CImaging__CIReadableBitmapVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define __FIAsyncOperation_1_Lumia__CImaging__CIReadableBitmap_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __FIAsyncOperation_1_Lumia__CImaging__CIReadableBitmap_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __FIAsyncOperation_1_Lumia__CImaging__CIReadableBitmap_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __FIAsyncOperation_1_Lumia__CImaging__CIReadableBitmap_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 

#define __FIAsyncOperation_1_Lumia__CImaging__CIReadableBitmap_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 

#define __FIAsyncOperation_1_Lumia__CImaging__CIReadableBitmap_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 


#define __FIAsyncOperation_1_Lumia__CImaging__CIReadableBitmap_put_Completed(This,handler)	\
    ( (This)->lpVtbl -> put_Completed(This,handler) ) 

#define __FIAsyncOperation_1_Lumia__CImaging__CIReadableBitmap_get_Completed(This,handler)	\
    ( (This)->lpVtbl -> get_Completed(This,handler) ) 

#define __FIAsyncOperation_1_Lumia__CImaging__CIReadableBitmap_GetResults(This,results)	\
    ( (This)->lpVtbl -> GetResults(This,results) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* ____FIAsyncOperation_1_Lumia__CImaging__CIReadableBitmap_INTERFACE_DEFINED__ */


/* interface __MIDL_itf_Lumia2EImaging_0000_0054 */
/* [local] */ 

#endif /* pinterface */
#endif /* DEF___FIAsyncOperation_1_Lumia__CImaging__CIReadableBitmap */


/* interface __MIDL_itf_Lumia2EImaging_0000_0054 */
/* [local] */ 



extern RPC_IF_HANDLE __MIDL_itf_Lumia2EImaging_0000_0054_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_Lumia2EImaging_0000_0054_v0_0_s_ifspec;

/* interface __MIDL_itf_Lumia2EImaging_0000_2001 */




/* interface __MIDL_itf_Lumia2EImaging_0000_2001 */




extern RPC_IF_HANDLE __MIDL_itf_Lumia2EImaging_0000_2001_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_Lumia2EImaging_0000_2001_v0_0_s_ifspec;

/* interface __MIDL_itf_Lumia2EImaging_0000_0055 */
/* [local] */ 

#ifndef DEF___FIAsyncOperationCompletedHandler_1_Lumia__CImaging__CImageProviderInfo
#define DEF___FIAsyncOperationCompletedHandler_1_Lumia__CImaging__CImageProviderInfo
#if !defined(__cplusplus) || defined(RO_NO_TEMPLATE_NAME)



/* interface __MIDL_itf_Lumia2EImaging_0000_0055 */
/* [local] */ 




extern RPC_IF_HANDLE __MIDL_itf_Lumia2EImaging_0000_0055_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_Lumia2EImaging_0000_0055_v0_0_s_ifspec;

#ifndef ____FIAsyncOperationCompletedHandler_1_Lumia__CImaging__CImageProviderInfo_INTERFACE_DEFINED__
#define ____FIAsyncOperationCompletedHandler_1_Lumia__CImaging__CImageProviderInfo_INTERFACE_DEFINED__

/* interface __FIAsyncOperationCompletedHandler_1_Lumia__CImaging__CImageProviderInfo */
/* [unique][uuid][object] */ 



/* interface __FIAsyncOperationCompletedHandler_1_Lumia__CImaging__CImageProviderInfo */
/* [unique][uuid][object] */ 


EXTERN_C const IID IID___FIAsyncOperationCompletedHandler_1_Lumia__CImaging__CImageProviderInfo;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("cd5cb054-6ae6-5345-bba1-55d7166b7b5a")
    __FIAsyncOperationCompletedHandler_1_Lumia__CImaging__CImageProviderInfo : public IUnknown
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE Invoke( 
            /* [in] */ __RPC__in_opt __FIAsyncOperation_1_Lumia__CImaging__CImageProviderInfo *asyncInfo,
            /* [in] */ AsyncStatus status) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct __FIAsyncOperationCompletedHandler_1_Lumia__CImaging__CImageProviderInfoVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            __RPC__in __FIAsyncOperationCompletedHandler_1_Lumia__CImaging__CImageProviderInfo * This,
            /* [in] */ __RPC__in REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            __RPC__in __FIAsyncOperationCompletedHandler_1_Lumia__CImaging__CImageProviderInfo * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            __RPC__in __FIAsyncOperationCompletedHandler_1_Lumia__CImaging__CImageProviderInfo * This);
        
        HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            __RPC__in __FIAsyncOperationCompletedHandler_1_Lumia__CImaging__CImageProviderInfo * This,
            /* [in] */ __RPC__in_opt __FIAsyncOperation_1_Lumia__CImaging__CImageProviderInfo *asyncInfo,
            /* [in] */ AsyncStatus status);
        
        END_INTERFACE
    } __FIAsyncOperationCompletedHandler_1_Lumia__CImaging__CImageProviderInfoVtbl;

    interface __FIAsyncOperationCompletedHandler_1_Lumia__CImaging__CImageProviderInfo
    {
        CONST_VTBL struct __FIAsyncOperationCompletedHandler_1_Lumia__CImaging__CImageProviderInfoVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define __FIAsyncOperationCompletedHandler_1_Lumia__CImaging__CImageProviderInfo_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __FIAsyncOperationCompletedHandler_1_Lumia__CImaging__CImageProviderInfo_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __FIAsyncOperationCompletedHandler_1_Lumia__CImaging__CImageProviderInfo_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __FIAsyncOperationCompletedHandler_1_Lumia__CImaging__CImageProviderInfo_Invoke(This,asyncInfo,status)	\
    ( (This)->lpVtbl -> Invoke(This,asyncInfo,status) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* ____FIAsyncOperationCompletedHandler_1_Lumia__CImaging__CImageProviderInfo_INTERFACE_DEFINED__ */


/* interface __MIDL_itf_Lumia2EImaging_0000_0056 */
/* [local] */ 

#endif /* pinterface */
#endif /* DEF___FIAsyncOperationCompletedHandler_1_Lumia__CImaging__CImageProviderInfo */


/* interface __MIDL_itf_Lumia2EImaging_0000_0056 */
/* [local] */ 



extern RPC_IF_HANDLE __MIDL_itf_Lumia2EImaging_0000_0056_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_Lumia2EImaging_0000_0056_v0_0_s_ifspec;

/* interface __MIDL_itf_Lumia2EImaging_0000_2002 */




/* interface __MIDL_itf_Lumia2EImaging_0000_2002 */




extern RPC_IF_HANDLE __MIDL_itf_Lumia2EImaging_0000_2002_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_Lumia2EImaging_0000_2002_v0_0_s_ifspec;

/* interface __MIDL_itf_Lumia2EImaging_0000_0057 */
/* [local] */ 

#ifndef DEF___FIAsyncOperation_1_Lumia__CImaging__CImageProviderInfo
#define DEF___FIAsyncOperation_1_Lumia__CImaging__CImageProviderInfo
#if !defined(__cplusplus) || defined(RO_NO_TEMPLATE_NAME)


/* interface __MIDL_itf_Lumia2EImaging_0000_0057 */
/* [local] */ 



extern RPC_IF_HANDLE __MIDL_itf_Lumia2EImaging_0000_0057_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_Lumia2EImaging_0000_0057_v0_0_s_ifspec;

#ifndef ____FIAsyncOperation_1_Lumia__CImaging__CImageProviderInfo_INTERFACE_DEFINED__
#define ____FIAsyncOperation_1_Lumia__CImaging__CImageProviderInfo_INTERFACE_DEFINED__

/* interface __FIAsyncOperation_1_Lumia__CImaging__CImageProviderInfo */
/* [unique][uuid][object] */ 



/* interface __FIAsyncOperation_1_Lumia__CImaging__CImageProviderInfo */
/* [unique][uuid][object] */ 


EXTERN_C const IID IID___FIAsyncOperation_1_Lumia__CImaging__CImageProviderInfo;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("9af9331e-4cbc-5435-aa8a-761bccdc2133")
    __FIAsyncOperation_1_Lumia__CImaging__CImageProviderInfo : public IInspectable
    {
    public:
        virtual /* [propput] */ HRESULT STDMETHODCALLTYPE put_Completed( 
            /* [in] */ __RPC__in_opt __FIAsyncOperationCompletedHandler_1_Lumia__CImaging__CImageProviderInfo *handler) = 0;
        
        virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_Completed( 
            /* [retval][out] */ __RPC__deref_out_opt __FIAsyncOperationCompletedHandler_1_Lumia__CImaging__CImageProviderInfo **handler) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetResults( 
            /* [retval][out] */ __RPC__deref_out_opt ABI::Lumia::Imaging::IImageProviderInfo **results) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct __FIAsyncOperation_1_Lumia__CImaging__CImageProviderInfoVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            __RPC__in __FIAsyncOperation_1_Lumia__CImaging__CImageProviderInfo * This,
            /* [in] */ __RPC__in REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            __RPC__in __FIAsyncOperation_1_Lumia__CImaging__CImageProviderInfo * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            __RPC__in __FIAsyncOperation_1_Lumia__CImaging__CImageProviderInfo * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetIids )( 
            __RPC__in __FIAsyncOperation_1_Lumia__CImaging__CImageProviderInfo * This,
            /* [out] */ __RPC__out ULONG *iidCount,
            /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
        
        HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )( 
            __RPC__in __FIAsyncOperation_1_Lumia__CImaging__CImageProviderInfo * This,
            /* [out] */ __RPC__deref_out_opt HSTRING *className);
        
        HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )( 
            __RPC__in __FIAsyncOperation_1_Lumia__CImaging__CImageProviderInfo * This,
            /* [out] */ __RPC__out TrustLevel *trustLevel);
        
        /* [propput] */ HRESULT ( STDMETHODCALLTYPE *put_Completed )( 
            __RPC__in __FIAsyncOperation_1_Lumia__CImaging__CImageProviderInfo * This,
            /* [in] */ __RPC__in_opt __FIAsyncOperationCompletedHandler_1_Lumia__CImaging__CImageProviderInfo *handler);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_Completed )( 
            __RPC__in __FIAsyncOperation_1_Lumia__CImaging__CImageProviderInfo * This,
            /* [retval][out] */ __RPC__deref_out_opt __FIAsyncOperationCompletedHandler_1_Lumia__CImaging__CImageProviderInfo **handler);
        
        HRESULT ( STDMETHODCALLTYPE *GetResults )( 
            __RPC__in __FIAsyncOperation_1_Lumia__CImaging__CImageProviderInfo * This,
            /* [retval][out] */ __RPC__deref_out_opt __x_ABI_CLumia_CImaging_CIImageProviderInfo **results);
        
        END_INTERFACE
    } __FIAsyncOperation_1_Lumia__CImaging__CImageProviderInfoVtbl;

    interface __FIAsyncOperation_1_Lumia__CImaging__CImageProviderInfo
    {
        CONST_VTBL struct __FIAsyncOperation_1_Lumia__CImaging__CImageProviderInfoVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define __FIAsyncOperation_1_Lumia__CImaging__CImageProviderInfo_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __FIAsyncOperation_1_Lumia__CImaging__CImageProviderInfo_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __FIAsyncOperation_1_Lumia__CImaging__CImageProviderInfo_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __FIAsyncOperation_1_Lumia__CImaging__CImageProviderInfo_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 

#define __FIAsyncOperation_1_Lumia__CImaging__CImageProviderInfo_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 

#define __FIAsyncOperation_1_Lumia__CImaging__CImageProviderInfo_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 


#define __FIAsyncOperation_1_Lumia__CImaging__CImageProviderInfo_put_Completed(This,handler)	\
    ( (This)->lpVtbl -> put_Completed(This,handler) ) 

#define __FIAsyncOperation_1_Lumia__CImaging__CImageProviderInfo_get_Completed(This,handler)	\
    ( (This)->lpVtbl -> get_Completed(This,handler) ) 

#define __FIAsyncOperation_1_Lumia__CImaging__CImageProviderInfo_GetResults(This,results)	\
    ( (This)->lpVtbl -> GetResults(This,results) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* ____FIAsyncOperation_1_Lumia__CImaging__CImageProviderInfo_INTERFACE_DEFINED__ */


/* interface __MIDL_itf_Lumia2EImaging_0000_0058 */
/* [local] */ 

#endif /* pinterface */
#endif /* DEF___FIAsyncOperation_1_Lumia__CImaging__CImageProviderInfo */


/* interface __MIDL_itf_Lumia2EImaging_0000_0058 */
/* [local] */ 



extern RPC_IF_HANDLE __MIDL_itf_Lumia2EImaging_0000_0058_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_Lumia2EImaging_0000_0058_v0_0_s_ifspec;

/* interface __MIDL_itf_Lumia2EImaging_0000_2003 */




/* interface __MIDL_itf_Lumia2EImaging_0000_2003 */




extern RPC_IF_HANDLE __MIDL_itf_Lumia2EImaging_0000_2003_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_Lumia2EImaging_0000_2003_v0_0_s_ifspec;

/* interface __MIDL_itf_Lumia2EImaging_0000_0059 */
/* [local] */ 

#ifndef DEF___FIAsyncOperationCompletedHandler_1___FIVectorView_1_Lumia__CImaging__CIImageProvider
#define DEF___FIAsyncOperationCompletedHandler_1___FIVectorView_1_Lumia__CImaging__CIImageProvider
#if !defined(__cplusplus) || defined(RO_NO_TEMPLATE_NAME)



/* interface __MIDL_itf_Lumia2EImaging_0000_0059 */
/* [local] */ 




extern RPC_IF_HANDLE __MIDL_itf_Lumia2EImaging_0000_0059_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_Lumia2EImaging_0000_0059_v0_0_s_ifspec;

#ifndef ____FIAsyncOperationCompletedHandler_1___FIVectorView_1_Lumia__CImaging__CIImageProvider_INTERFACE_DEFINED__
#define ____FIAsyncOperationCompletedHandler_1___FIVectorView_1_Lumia__CImaging__CIImageProvider_INTERFACE_DEFINED__

/* interface __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Lumia__CImaging__CIImageProvider */
/* [unique][uuid][object] */ 



/* interface __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Lumia__CImaging__CIImageProvider */
/* [unique][uuid][object] */ 


EXTERN_C const IID IID___FIAsyncOperationCompletedHandler_1___FIVectorView_1_Lumia__CImaging__CIImageProvider;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("5e5a7930-9709-5a70-8236-4ae9c2b9361e")
    __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Lumia__CImaging__CIImageProvider : public IUnknown
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE Invoke( 
            /* [in] */ __RPC__in_opt __FIAsyncOperation_1___FIVectorView_1_Lumia__CImaging__CIImageProvider *asyncInfo,
            /* [in] */ AsyncStatus status) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Lumia__CImaging__CIImageProviderVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            __RPC__in __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Lumia__CImaging__CIImageProvider * This,
            /* [in] */ __RPC__in REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            __RPC__in __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Lumia__CImaging__CIImageProvider * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            __RPC__in __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Lumia__CImaging__CIImageProvider * This);
        
        HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            __RPC__in __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Lumia__CImaging__CIImageProvider * This,
            /* [in] */ __RPC__in_opt __FIAsyncOperation_1___FIVectorView_1_Lumia__CImaging__CIImageProvider *asyncInfo,
            /* [in] */ AsyncStatus status);
        
        END_INTERFACE
    } __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Lumia__CImaging__CIImageProviderVtbl;

    interface __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Lumia__CImaging__CIImageProvider
    {
        CONST_VTBL struct __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Lumia__CImaging__CIImageProviderVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Lumia__CImaging__CIImageProvider_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Lumia__CImaging__CIImageProvider_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Lumia__CImaging__CIImageProvider_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Lumia__CImaging__CIImageProvider_Invoke(This,asyncInfo,status)	\
    ( (This)->lpVtbl -> Invoke(This,asyncInfo,status) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* ____FIAsyncOperationCompletedHandler_1___FIVectorView_1_Lumia__CImaging__CIImageProvider_INTERFACE_DEFINED__ */


/* interface __MIDL_itf_Lumia2EImaging_0000_0060 */
/* [local] */ 

#endif /* pinterface */
#endif /* DEF___FIAsyncOperationCompletedHandler_1___FIVectorView_1_Lumia__CImaging__CIImageProvider */


/* interface __MIDL_itf_Lumia2EImaging_0000_0060 */
/* [local] */ 



extern RPC_IF_HANDLE __MIDL_itf_Lumia2EImaging_0000_0060_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_Lumia2EImaging_0000_0060_v0_0_s_ifspec;

/* interface __MIDL_itf_Lumia2EImaging_0000_2004 */




/* interface __MIDL_itf_Lumia2EImaging_0000_2004 */




extern RPC_IF_HANDLE __MIDL_itf_Lumia2EImaging_0000_2004_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_Lumia2EImaging_0000_2004_v0_0_s_ifspec;

/* interface __MIDL_itf_Lumia2EImaging_0000_0061 */
/* [local] */ 

#ifndef DEF___FIAsyncOperation_1___FIVectorView_1_Lumia__CImaging__CIImageProvider
#define DEF___FIAsyncOperation_1___FIVectorView_1_Lumia__CImaging__CIImageProvider
#if !defined(__cplusplus) || defined(RO_NO_TEMPLATE_NAME)


/* interface __MIDL_itf_Lumia2EImaging_0000_0061 */
/* [local] */ 



extern RPC_IF_HANDLE __MIDL_itf_Lumia2EImaging_0000_0061_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_Lumia2EImaging_0000_0061_v0_0_s_ifspec;

#ifndef ____FIAsyncOperation_1___FIVectorView_1_Lumia__CImaging__CIImageProvider_INTERFACE_DEFINED__
#define ____FIAsyncOperation_1___FIVectorView_1_Lumia__CImaging__CIImageProvider_INTERFACE_DEFINED__

/* interface __FIAsyncOperation_1___FIVectorView_1_Lumia__CImaging__CIImageProvider */
/* [unique][uuid][object] */ 



/* interface __FIAsyncOperation_1___FIVectorView_1_Lumia__CImaging__CIImageProvider */
/* [unique][uuid][object] */ 


EXTERN_C const IID IID___FIAsyncOperation_1___FIVectorView_1_Lumia__CImaging__CIImageProvider;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("0b63571e-0981-5b12-aee2-1a2fc4771507")
    __FIAsyncOperation_1___FIVectorView_1_Lumia__CImaging__CIImageProvider : public IInspectable
    {
    public:
        virtual /* [propput] */ HRESULT STDMETHODCALLTYPE put_Completed( 
            /* [in] */ __RPC__in_opt __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Lumia__CImaging__CIImageProvider *handler) = 0;
        
        virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_Completed( 
            /* [retval][out] */ __RPC__deref_out_opt __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Lumia__CImaging__CIImageProvider **handler) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetResults( 
            /* [retval][out] */ __RPC__deref_out_opt __FIVectorView_1_Lumia__CImaging__CIImageProvider **results) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct __FIAsyncOperation_1___FIVectorView_1_Lumia__CImaging__CIImageProviderVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            __RPC__in __FIAsyncOperation_1___FIVectorView_1_Lumia__CImaging__CIImageProvider * This,
            /* [in] */ __RPC__in REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            __RPC__in __FIAsyncOperation_1___FIVectorView_1_Lumia__CImaging__CIImageProvider * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            __RPC__in __FIAsyncOperation_1___FIVectorView_1_Lumia__CImaging__CIImageProvider * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetIids )( 
            __RPC__in __FIAsyncOperation_1___FIVectorView_1_Lumia__CImaging__CIImageProvider * This,
            /* [out] */ __RPC__out ULONG *iidCount,
            /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
        
        HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )( 
            __RPC__in __FIAsyncOperation_1___FIVectorView_1_Lumia__CImaging__CIImageProvider * This,
            /* [out] */ __RPC__deref_out_opt HSTRING *className);
        
        HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )( 
            __RPC__in __FIAsyncOperation_1___FIVectorView_1_Lumia__CImaging__CIImageProvider * This,
            /* [out] */ __RPC__out TrustLevel *trustLevel);
        
        /* [propput] */ HRESULT ( STDMETHODCALLTYPE *put_Completed )( 
            __RPC__in __FIAsyncOperation_1___FIVectorView_1_Lumia__CImaging__CIImageProvider * This,
            /* [in] */ __RPC__in_opt __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Lumia__CImaging__CIImageProvider *handler);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_Completed )( 
            __RPC__in __FIAsyncOperation_1___FIVectorView_1_Lumia__CImaging__CIImageProvider * This,
            /* [retval][out] */ __RPC__deref_out_opt __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Lumia__CImaging__CIImageProvider **handler);
        
        HRESULT ( STDMETHODCALLTYPE *GetResults )( 
            __RPC__in __FIAsyncOperation_1___FIVectorView_1_Lumia__CImaging__CIImageProvider * This,
            /* [retval][out] */ __RPC__deref_out_opt __FIVectorView_1_Lumia__CImaging__CIImageProvider **results);
        
        END_INTERFACE
    } __FIAsyncOperation_1___FIVectorView_1_Lumia__CImaging__CIImageProviderVtbl;

    interface __FIAsyncOperation_1___FIVectorView_1_Lumia__CImaging__CIImageProvider
    {
        CONST_VTBL struct __FIAsyncOperation_1___FIVectorView_1_Lumia__CImaging__CIImageProviderVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define __FIAsyncOperation_1___FIVectorView_1_Lumia__CImaging__CIImageProvider_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __FIAsyncOperation_1___FIVectorView_1_Lumia__CImaging__CIImageProvider_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __FIAsyncOperation_1___FIVectorView_1_Lumia__CImaging__CIImageProvider_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __FIAsyncOperation_1___FIVectorView_1_Lumia__CImaging__CIImageProvider_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 

#define __FIAsyncOperation_1___FIVectorView_1_Lumia__CImaging__CIImageProvider_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 

#define __FIAsyncOperation_1___FIVectorView_1_Lumia__CImaging__CIImageProvider_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 


#define __FIAsyncOperation_1___FIVectorView_1_Lumia__CImaging__CIImageProvider_put_Completed(This,handler)	\
    ( (This)->lpVtbl -> put_Completed(This,handler) ) 

#define __FIAsyncOperation_1___FIVectorView_1_Lumia__CImaging__CIImageProvider_get_Completed(This,handler)	\
    ( (This)->lpVtbl -> get_Completed(This,handler) ) 

#define __FIAsyncOperation_1___FIVectorView_1_Lumia__CImaging__CIImageProvider_GetResults(This,results)	\
    ( (This)->lpVtbl -> GetResults(This,results) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* ____FIAsyncOperation_1___FIVectorView_1_Lumia__CImaging__CIImageProvider_INTERFACE_DEFINED__ */


/* interface __MIDL_itf_Lumia2EImaging_0000_0062 */
/* [local] */ 

#endif /* pinterface */
#endif /* DEF___FIAsyncOperation_1___FIVectorView_1_Lumia__CImaging__CIImageProvider */
#if !defined(__cplusplus)

#if !defined(__cplusplus)
/* [v1_enum] */ 
enum __x_ABI_CLumia_CImaging_CColorMode
    {
        ColorMode_Ayuv4444	= 0,
        ColorMode_Rgb565	= 1,
        ColorMode_Rgb565D	= 2,
        ColorMode_Argb8888	= 3,
        ColorMode_Bgra8888	= 4,
        ColorMode_Pbgra8888	= 5,
        ColorMode_Gray8	= 6,
        ColorMode_Gray16	= 7,
        ColorMode_Gray32	= 8,
        ColorMode_Yuv422P	= 9,
        ColorMode_Yuv420Sp	= 10,
        ColorMode_Yvu420Sp	= 11,
        ColorMode_Yuv422Sp	= 12,
        ColorMode_Yvu422Sp	= 13,
        ColorMode_Yuv420P	= 14,
        ColorMode_Yuv444P	= 15,
        ColorMode_Yuv422_Y1UY2V	= 16,
        ColorMode_Y	= 17,
        ColorMode_U	= 18,
        ColorMode_V	= 19,
        ColorMode_Uv	= 20,
        ColorMode_Vu	= 21,
        ColorMode_Float16	= 22,
        ColorMode_Float32	= 23
    } ;
#endif /* end if !defined(__cplusplus) */

#endif
#if !defined(__cplusplus)

#if !defined(__cplusplus)
/* [v1_enum] */ 
enum __x_ABI_CLumia_CImaging_COutputOption
    {
        OutputOption_PreserveAspectRatio	= 0,
        OutputOption_Stretch	= 1,
        OutputOption_PreserveSize	= 2
    } ;
#endif /* end if !defined(__cplusplus) */

#endif
#if !defined(__cplusplus)

#if !defined(__cplusplus)
/* [v1_enum] */ 
enum __x_ABI_CLumia_CImaging_CAnimationFrameDithering
    {
        AnimationFrameDithering_UseRendererSetting	= 0,
        AnimationFrameDithering_On	= 1,
        AnimationFrameDithering_Off	= 2
    } ;
#endif /* end if !defined(__cplusplus) */

#endif
#if !defined(__cplusplus)

#if !defined(__cplusplus)
/* [v1_enum] */ 
enum __x_ABI_CLumia_CImaging_CColorSpace
    {
        ColorSpace_Undefined	= 0,
        ColorSpace_Yuv420	= 1,
        ColorSpace_Yuv422	= 2,
        ColorSpace_Yuv422ROT	= 3,
        ColorSpace_Yuv444	= 4,
        ColorSpace_Yuv400	= 5
    } ;
#endif /* end if !defined(__cplusplus) */

#endif
#if !defined(__cplusplus)

#if !defined(__cplusplus)
/* [v1_enum] */ 
enum __x_ABI_CLumia_CImaging_CAutoResizeMode
    {
        AutoResizeMode_Automatic	= 0,
        AutoResizeMode_PreserveSourceEncodingQuality	= 1,
        AutoResizeMode_PrioritizeLargeImageSize	= 2,
        AutoResizeMode_PrioritizeHighEncodingQuality	= 3
    } ;
#endif /* end if !defined(__cplusplus) */

#endif
#if !defined(__cplusplus)

#if !defined(__cplusplus)
/* [v1_enum] */ 
enum __x_ABI_CLumia_CImaging_CImageFormat
    {
        ImageFormat_Undefined	= 0,
        ImageFormat_Jpeg	= 1,
        ImageFormat_Png	= 2,
        ImageFormat_Gif	= 3,
        ImageFormat_Bmp	= 4,
        ImageFormat_Wbmp	= 5,
        ImageFormat_Tiff	= 6
    } ;
#endif /* end if !defined(__cplusplus) */

#endif
#if !defined(__cplusplus)

#if !defined(__cplusplus)
/* [v1_enum] */ 
enum __x_ABI_CLumia_CImaging_CMaskAnnotationType
    {
        MaskAnnotationType_Foreground	= 0,
        MaskAnnotationType_Background	= 1
    } ;
#endif /* end if !defined(__cplusplus) */

#endif
#if !defined(__cplusplus)

#if !defined(__cplusplus)
/* [v1_enum] */ 
enum __x_ABI_CLumia_CImaging_CJpegOutputColorMode
    {
        JpegOutputColorMode_Yuv420	= 0,
        JpegOutputColorMode_Yuv422	= 1,
        JpegOutputColorMode_Grayscale	= 2
    } ;
#endif /* end if !defined(__cplusplus) */

#endif
#if !defined(__cplusplus)

#if !defined(__cplusplus)
/* [v1_enum] */ 
enum __x_ABI_CLumia_CImaging_CRotation
    {
        Rotation_Rotate0	= 0,
        Rotation_Rotate90	= 1,
        Rotation_Rotate180	= 2,
        Rotation_Rotate270	= 3
    } ;
#endif /* end if !defined(__cplusplus) */

#endif
#if !defined(__cplusplus)

#if !defined(__cplusplus)
/* [v1_enum] */ 
enum __x_ABI_CLumia_CImaging_CJpegOperation
    {
        JpegOperation_Lossless	= 0,
        JpegOperation_AllowLossy	= 1
    } ;
#endif /* end if !defined(__cplusplus) */

#endif
#if !defined(__cplusplus)
struct __x_ABI_CLumia_CImaging_CMargins
    {
    UINT32 Left;
    UINT32 Top;
    UINT32 Right;
    UINT32 Bottom;
    } ;
#endif
#if !defined(__cplusplus)
struct __x_ABI_CLumia_CImaging_CGradientStop
    {
    DOUBLE Offset;
    __x_ABI_CWindows_CUI_CColor Color;
    } ;
#endif
#if !defined(__cplusplus)
struct __x_ABI_CLumia_CImaging_CRampedRange
    {
    DOUBLE BeginRamp;
    DOUBLE BeginSustain;
    DOUBLE EndSustain;
    DOUBLE EndRamp;
    } ;
#endif


/* interface __MIDL_itf_Lumia2EImaging_0000_0062 */
/* [local] */ 

#ifdef __cplusplus
} /* end extern "C" */
namespace ABI {
    namespace Lumia {
        namespace Imaging {
            
            /* [v1_enum] */ 
            enum ColorMode
                {
                    ColorMode_Ayuv4444	= 0,
                    ColorMode_Rgb565	= 1,
                    ColorMode_Rgb565D	= 2,
                    ColorMode_Argb8888	= 3,
                    ColorMode_Bgra8888	= 4,
                    ColorMode_Pbgra8888	= 5,
                    ColorMode_Gray8	= 6,
                    ColorMode_Gray16	= 7,
                    ColorMode_Gray32	= 8,
                    ColorMode_Yuv422P	= 9,
                    ColorMode_Yuv420Sp	= 10,
                    ColorMode_Yvu420Sp	= 11,
                    ColorMode_Yuv422Sp	= 12,
                    ColorMode_Yvu422Sp	= 13,
                    ColorMode_Yuv420P	= 14,
                    ColorMode_Yuv444P	= 15,
                    ColorMode_Yuv422_Y1UY2V	= 16,
                    ColorMode_Y	= 17,
                    ColorMode_U	= 18,
                    ColorMode_V	= 19,
                    ColorMode_Uv	= 20,
                    ColorMode_Vu	= 21,
                    ColorMode_Float16	= 22,
                    ColorMode_Float32	= 23
                } ;
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
            
            /* [v1_enum] */ 
            enum OutputOption
                {
                    OutputOption_PreserveAspectRatio	= 0,
                    OutputOption_Stretch	= 1,
                    OutputOption_PreserveSize	= 2
                } ;
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
            
            /* [v1_enum] */ 
            enum AnimationFrameDithering
                {
                    AnimationFrameDithering_UseRendererSetting	= 0,
                    AnimationFrameDithering_On	= 1,
                    AnimationFrameDithering_Off	= 2
                } ;
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
            
            /* [v1_enum] */ 
            enum ColorSpace
                {
                    ColorSpace_Undefined	= 0,
                    ColorSpace_Yuv420	= 1,
                    ColorSpace_Yuv422	= 2,
                    ColorSpace_Yuv422ROT	= 3,
                    ColorSpace_Yuv444	= 4,
                    ColorSpace_Yuv400	= 5
                } ;
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
            
            /* [v1_enum] */ 
            enum AutoResizeMode
                {
                    AutoResizeMode_Automatic	= 0,
                    AutoResizeMode_PreserveSourceEncodingQuality	= 1,
                    AutoResizeMode_PrioritizeLargeImageSize	= 2,
                    AutoResizeMode_PrioritizeHighEncodingQuality	= 3
                } ;
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
            
            /* [v1_enum] */ 
            enum ImageFormat
                {
                    ImageFormat_Undefined	= 0,
                    ImageFormat_Jpeg	= 1,
                    ImageFormat_Png	= 2,
                    ImageFormat_Gif	= 3,
                    ImageFormat_Bmp	= 4,
                    ImageFormat_Wbmp	= 5,
                    ImageFormat_Tiff	= 6
                } ;
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
            
            /* [v1_enum] */ 
            enum MaskAnnotationType
                {
                    MaskAnnotationType_Foreground	= 0,
                    MaskAnnotationType_Background	= 1
                } ;
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
            
            /* [v1_enum] */ 
            enum JpegOutputColorMode
                {
                    JpegOutputColorMode_Yuv420	= 0,
                    JpegOutputColorMode_Yuv422	= 1,
                    JpegOutputColorMode_Grayscale	= 2
                } ;
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
            
            /* [v1_enum] */ 
            enum Rotation
                {
                    Rotation_Rotate0	= 0,
                    Rotation_Rotate90	= 1,
                    Rotation_Rotate180	= 2,
                    Rotation_Rotate270	= 3
                } ;
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
            
            /* [v1_enum] */ 
            enum JpegOperation
                {
                    JpegOperation_Lossless	= 0,
                    JpegOperation_AllowLossy	= 1
                } ;
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
            
            struct Margins
                {
                UINT32 Left;
                UINT32 Top;
                UINT32 Right;
                UINT32 Bottom;
                } ;
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
            
            struct GradientStop
                {
                DOUBLE Offset;
                ABI::Windows::UI::Color Color;
                } ;
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
            
            struct RampedRange
                {
                DOUBLE BeginRamp;
                DOUBLE BeginSustain;
                DOUBLE EndSustain;
                DOUBLE EndRamp;
                } ;
        } /* end namespace */
    } /* end namespace */
} /* end namespace */

extern "C" { 
#endif



extern RPC_IF_HANDLE __MIDL_itf_Lumia2EImaging_0000_0062_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_Lumia2EImaging_0000_0062_v0_0_s_ifspec;

#ifndef ____x_ABI_CLumia_CImaging_CIPreviewFrameAvailableDelegate_INTERFACE_DEFINED__
#define ____x_ABI_CLumia_CImaging_CIPreviewFrameAvailableDelegate_INTERFACE_DEFINED__

/* interface __x_ABI_CLumia_CImaging_CIPreviewFrameAvailableDelegate */
/* [uuid][object] */ 



/* interface ABI::Lumia::Imaging::IPreviewFrameAvailableDelegate */
/* [uuid][object] */ 


EXTERN_C const IID IID___x_ABI_CLumia_CImaging_CIPreviewFrameAvailableDelegate;

#if defined(__cplusplus) && !defined(CINTERFACE)
    } /* end extern "C" */
    namespace ABI {
        namespace Lumia {
            namespace Imaging {
                
                MIDL_INTERFACE("9783F5CC-161F-3B0C-B1CD-AA04DCC227A4")
                IPreviewFrameAvailableDelegate : public IUnknown
                {
                public:
                    virtual HRESULT STDMETHODCALLTYPE Invoke( 
                        /* [in] */ __RPC__in_opt ABI::Lumia::Imaging::IImageSize *imageSize) = 0;
                    
                };

                extern const __declspec(selectany) IID & IID_IPreviewFrameAvailableDelegate = __uuidof(IPreviewFrameAvailableDelegate);

                
            }  /* end namespace */
        }  /* end namespace */
    }  /* end namespace */
    extern "C" { 
    
#else 	/* C style interface */

    typedef struct __x_ABI_CLumia_CImaging_CIPreviewFrameAvailableDelegateVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            __RPC__in __x_ABI_CLumia_CImaging_CIPreviewFrameAvailableDelegate * This,
            /* [in] */ __RPC__in REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            __RPC__in __x_ABI_CLumia_CImaging_CIPreviewFrameAvailableDelegate * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            __RPC__in __x_ABI_CLumia_CImaging_CIPreviewFrameAvailableDelegate * This);
        
        HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            __RPC__in __x_ABI_CLumia_CImaging_CIPreviewFrameAvailableDelegate * This,
            /* [in] */ __RPC__in_opt __x_ABI_CLumia_CImaging_CIImageSize *imageSize);
        
        END_INTERFACE
    } __x_ABI_CLumia_CImaging_CIPreviewFrameAvailableDelegateVtbl;

    interface __x_ABI_CLumia_CImaging_CIPreviewFrameAvailableDelegate
    {
        CONST_VTBL struct __x_ABI_CLumia_CImaging_CIPreviewFrameAvailableDelegateVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define __x_ABI_CLumia_CImaging_CIPreviewFrameAvailableDelegate_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __x_ABI_CLumia_CImaging_CIPreviewFrameAvailableDelegate_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __x_ABI_CLumia_CImaging_CIPreviewFrameAvailableDelegate_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __x_ABI_CLumia_CImaging_CIPreviewFrameAvailableDelegate_Invoke(This,imageSize)	\
    ( (This)->lpVtbl -> Invoke(This,imageSize) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* ____x_ABI_CLumia_CImaging_CIPreviewFrameAvailableDelegate_INTERFACE_DEFINED__ */


/* interface __MIDL_itf_Lumia2EImaging_0000_0063 */
/* [local] */ 

#if !defined(____x_ABI_CLumia_CImaging_CIPixelBufferInfo_INTERFACE_DEFINED__)
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Lumia_Imaging_IPixelBufferInfo[] = L"Lumia.Imaging.IPixelBufferInfo";
#endif /* !defined(____x_ABI_CLumia_CImaging_CIPixelBufferInfo_INTERFACE_DEFINED__) */


/* interface __MIDL_itf_Lumia2EImaging_0000_0063 */
/* [local] */ 



extern RPC_IF_HANDLE __MIDL_itf_Lumia2EImaging_0000_0063_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_Lumia2EImaging_0000_0063_v0_0_s_ifspec;

#ifndef ____x_ABI_CLumia_CImaging_CIPixelBufferInfo_INTERFACE_DEFINED__
#define ____x_ABI_CLumia_CImaging_CIPixelBufferInfo_INTERFACE_DEFINED__

/* interface __x_ABI_CLumia_CImaging_CIPixelBufferInfo */
/* [uuid][object] */ 



/* interface ABI::Lumia::Imaging::IPixelBufferInfo */
/* [uuid][object] */ 


EXTERN_C const IID IID___x_ABI_CLumia_CImaging_CIPixelBufferInfo;

#if defined(__cplusplus) && !defined(CINTERFACE)
    } /* end extern "C" */
    namespace ABI {
        namespace Lumia {
            namespace Imaging {
                
                MIDL_INTERFACE("3782CBCC-2E26-3766-9071-8D1DFFE2525B")
                IPixelBufferInfo : public IInspectable
                {
                public:
                    virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_Buffer( 
                        /* [out][retval] */ __RPC__deref_out_opt ABI::Windows::Storage::Streams::IBuffer **__returnValue) = 0;
                    
                    virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_ColorMode( 
                        /* [out][retval] */ __RPC__out ABI::Lumia::Imaging::ColorMode *__returnValue) = 0;
                    
                    virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_Pitch( 
                        /* [out][retval] */ __RPC__out UINT32 *__returnValue) = 0;
                    
                };

                extern const __declspec(selectany) IID & IID_IPixelBufferInfo = __uuidof(IPixelBufferInfo);

                
            }  /* end namespace */
        }  /* end namespace */
    }  /* end namespace */
    extern "C" { 
    
#else 	/* C style interface */

    typedef struct __x_ABI_CLumia_CImaging_CIPixelBufferInfoVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            __RPC__in __x_ABI_CLumia_CImaging_CIPixelBufferInfo * This,
            /* [in] */ __RPC__in REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            __RPC__in __x_ABI_CLumia_CImaging_CIPixelBufferInfo * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            __RPC__in __x_ABI_CLumia_CImaging_CIPixelBufferInfo * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetIids )( 
            __RPC__in __x_ABI_CLumia_CImaging_CIPixelBufferInfo * This,
            /* [out] */ __RPC__out ULONG *iidCount,
            /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
        
        HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )( 
            __RPC__in __x_ABI_CLumia_CImaging_CIPixelBufferInfo * This,
            /* [out] */ __RPC__deref_out_opt HSTRING *className);
        
        HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )( 
            __RPC__in __x_ABI_CLumia_CImaging_CIPixelBufferInfo * This,
            /* [out] */ __RPC__out TrustLevel *trustLevel);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_Buffer )( 
            __RPC__in __x_ABI_CLumia_CImaging_CIPixelBufferInfo * This,
            /* [out][retval] */ __RPC__deref_out_opt __x_ABI_CWindows_CStorage_CStreams_CIBuffer **__returnValue);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_ColorMode )( 
            __RPC__in __x_ABI_CLumia_CImaging_CIPixelBufferInfo * This,
            /* [out][retval] */ __RPC__out __x_ABI_CLumia_CImaging_CColorMode *__returnValue);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_Pitch )( 
            __RPC__in __x_ABI_CLumia_CImaging_CIPixelBufferInfo * This,
            /* [out][retval] */ __RPC__out UINT32 *__returnValue);
        
        END_INTERFACE
    } __x_ABI_CLumia_CImaging_CIPixelBufferInfoVtbl;

    interface __x_ABI_CLumia_CImaging_CIPixelBufferInfo
    {
        CONST_VTBL struct __x_ABI_CLumia_CImaging_CIPixelBufferInfoVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define __x_ABI_CLumia_CImaging_CIPixelBufferInfo_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __x_ABI_CLumia_CImaging_CIPixelBufferInfo_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __x_ABI_CLumia_CImaging_CIPixelBufferInfo_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __x_ABI_CLumia_CImaging_CIPixelBufferInfo_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 

#define __x_ABI_CLumia_CImaging_CIPixelBufferInfo_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 

#define __x_ABI_CLumia_CImaging_CIPixelBufferInfo_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 


#define __x_ABI_CLumia_CImaging_CIPixelBufferInfo_get_Buffer(This,__returnValue)	\
    ( (This)->lpVtbl -> get_Buffer(This,__returnValue) ) 

#define __x_ABI_CLumia_CImaging_CIPixelBufferInfo_get_ColorMode(This,__returnValue)	\
    ( (This)->lpVtbl -> get_ColorMode(This,__returnValue) ) 

#define __x_ABI_CLumia_CImaging_CIPixelBufferInfo_get_Pitch(This,__returnValue)	\
    ( (This)->lpVtbl -> get_Pitch(This,__returnValue) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* ____x_ABI_CLumia_CImaging_CIPixelBufferInfo_INTERFACE_DEFINED__ */


/* interface __MIDL_itf_Lumia2EImaging_0000_0064 */
/* [local] */ 

#if !defined(____x_ABI_CLumia_CImaging_CIReadableBitmap_INTERFACE_DEFINED__)
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Lumia_Imaging_IReadableBitmap[] = L"Lumia.Imaging.IReadableBitmap";
#endif /* !defined(____x_ABI_CLumia_CImaging_CIReadableBitmap_INTERFACE_DEFINED__) */


/* interface __MIDL_itf_Lumia2EImaging_0000_0064 */
/* [local] */ 



extern RPC_IF_HANDLE __MIDL_itf_Lumia2EImaging_0000_0064_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_Lumia2EImaging_0000_0064_v0_0_s_ifspec;

#ifndef ____x_ABI_CLumia_CImaging_CIReadableBitmap_INTERFACE_DEFINED__
#define ____x_ABI_CLumia_CImaging_CIReadableBitmap_INTERFACE_DEFINED__

/* interface __x_ABI_CLumia_CImaging_CIReadableBitmap */
/* [uuid][object] */ 



/* interface ABI::Lumia::Imaging::IReadableBitmap */
/* [uuid][object] */ 


EXTERN_C const IID IID___x_ABI_CLumia_CImaging_CIReadableBitmap;

#if defined(__cplusplus) && !defined(CINTERFACE)
    } /* end extern "C" */
    namespace ABI {
        namespace Lumia {
            namespace Imaging {
                
                MIDL_INTERFACE("6D2C6FEF-009A-3008-85E5-2C866F548488")
                IReadableBitmap : public IInspectable
                {
                public:
                    virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_Dimensions( 
                        /* [out][retval] */ __RPC__out ABI::Windows::Foundation::Size *__returnValue) = 0;
                    
                    virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_ColorMode( 
                        /* [out][retval] */ __RPC__out ABI::Lumia::Imaging::ColorMode *__returnValue) = 0;
                    
                };

                extern const __declspec(selectany) IID & IID_IReadableBitmap = __uuidof(IReadableBitmap);

                
            }  /* end namespace */
        }  /* end namespace */
    }  /* end namespace */
    extern "C" { 
    
#else 	/* C style interface */

    typedef struct __x_ABI_CLumia_CImaging_CIReadableBitmapVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            __RPC__in __x_ABI_CLumia_CImaging_CIReadableBitmap * This,
            /* [in] */ __RPC__in REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            __RPC__in __x_ABI_CLumia_CImaging_CIReadableBitmap * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            __RPC__in __x_ABI_CLumia_CImaging_CIReadableBitmap * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetIids )( 
            __RPC__in __x_ABI_CLumia_CImaging_CIReadableBitmap * This,
            /* [out] */ __RPC__out ULONG *iidCount,
            /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
        
        HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )( 
            __RPC__in __x_ABI_CLumia_CImaging_CIReadableBitmap * This,
            /* [out] */ __RPC__deref_out_opt HSTRING *className);
        
        HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )( 
            __RPC__in __x_ABI_CLumia_CImaging_CIReadableBitmap * This,
            /* [out] */ __RPC__out TrustLevel *trustLevel);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_Dimensions )( 
            __RPC__in __x_ABI_CLumia_CImaging_CIReadableBitmap * This,
            /* [out][retval] */ __RPC__out __x_ABI_CWindows_CFoundation_CSize *__returnValue);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_ColorMode )( 
            __RPC__in __x_ABI_CLumia_CImaging_CIReadableBitmap * This,
            /* [out][retval] */ __RPC__out __x_ABI_CLumia_CImaging_CColorMode *__returnValue);
        
        END_INTERFACE
    } __x_ABI_CLumia_CImaging_CIReadableBitmapVtbl;

    interface __x_ABI_CLumia_CImaging_CIReadableBitmap
    {
        CONST_VTBL struct __x_ABI_CLumia_CImaging_CIReadableBitmapVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define __x_ABI_CLumia_CImaging_CIReadableBitmap_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __x_ABI_CLumia_CImaging_CIReadableBitmap_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __x_ABI_CLumia_CImaging_CIReadableBitmap_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __x_ABI_CLumia_CImaging_CIReadableBitmap_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 

#define __x_ABI_CLumia_CImaging_CIReadableBitmap_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 

#define __x_ABI_CLumia_CImaging_CIReadableBitmap_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 


#define __x_ABI_CLumia_CImaging_CIReadableBitmap_get_Dimensions(This,__returnValue)	\
    ( (This)->lpVtbl -> get_Dimensions(This,__returnValue) ) 

#define __x_ABI_CLumia_CImaging_CIReadableBitmap_get_ColorMode(This,__returnValue)	\
    ( (This)->lpVtbl -> get_ColorMode(This,__returnValue) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* ____x_ABI_CLumia_CImaging_CIReadableBitmap_INTERFACE_DEFINED__ */


/* interface __MIDL_itf_Lumia2EImaging_0000_0065 */
/* [local] */ 

#if !defined(____x_ABI_CLumia_CImaging_CIBitmap_INTERFACE_DEFINED__)
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Lumia_Imaging_IBitmap[] = L"Lumia.Imaging.IBitmap";
#endif /* !defined(____x_ABI_CLumia_CImaging_CIBitmap_INTERFACE_DEFINED__) */


/* interface __MIDL_itf_Lumia2EImaging_0000_0065 */
/* [local] */ 



extern RPC_IF_HANDLE __MIDL_itf_Lumia2EImaging_0000_0065_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_Lumia2EImaging_0000_0065_v0_0_s_ifspec;

#ifndef ____x_ABI_CLumia_CImaging_CIBitmap_INTERFACE_DEFINED__
#define ____x_ABI_CLumia_CImaging_CIBitmap_INTERFACE_DEFINED__

/* interface __x_ABI_CLumia_CImaging_CIBitmap */
/* [uuid][object] */ 



/* interface ABI::Lumia::Imaging::IBitmap */
/* [uuid][object] */ 


EXTERN_C const IID IID___x_ABI_CLumia_CImaging_CIBitmap;

#if defined(__cplusplus) && !defined(CINTERFACE)
    } /* end extern "C" */
    namespace ABI {
        namespace Lumia {
            namespace Imaging {
                
                MIDL_INTERFACE("515FB43C-7354-3197-BFE4-357B51DE9DB4")
                IBitmap : public IInspectable
                {
                public:
                    virtual HRESULT STDMETHODCALLTYPE CopyDataFrom( 
                        /* [in] */ __RPC__in_opt ABI::Lumia::Imaging::IReadableBitmap *sourceBitmap) = 0;
                    
                    virtual HRESULT STDMETHODCALLTYPE ConvertFrom( 
                        /* [in] */ __RPC__in_opt ABI::Lumia::Imaging::IBitmap *sourceBitmap) = 0;
                    
                    virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_Buffers( 
                        /* [out] */ __RPC__out UINT32 *____returnValueSize,
                        /* [out][retval][size_is][size_is] */ __RPC__deref_out_ecount_full_opt(*____returnValueSize) ABI::Lumia::Imaging::IPixelBufferInfo ***__returnValue) = 0;
                    
                };

                extern const __declspec(selectany) IID & IID_IBitmap = __uuidof(IBitmap);

                
            }  /* end namespace */
        }  /* end namespace */
    }  /* end namespace */
    extern "C" { 
    
#else 	/* C style interface */

    typedef struct __x_ABI_CLumia_CImaging_CIBitmapVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            __RPC__in __x_ABI_CLumia_CImaging_CIBitmap * This,
            /* [in] */ __RPC__in REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            __RPC__in __x_ABI_CLumia_CImaging_CIBitmap * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            __RPC__in __x_ABI_CLumia_CImaging_CIBitmap * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetIids )( 
            __RPC__in __x_ABI_CLumia_CImaging_CIBitmap * This,
            /* [out] */ __RPC__out ULONG *iidCount,
            /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
        
        HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )( 
            __RPC__in __x_ABI_CLumia_CImaging_CIBitmap * This,
            /* [out] */ __RPC__deref_out_opt HSTRING *className);
        
        HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )( 
            __RPC__in __x_ABI_CLumia_CImaging_CIBitmap * This,
            /* [out] */ __RPC__out TrustLevel *trustLevel);
        
        HRESULT ( STDMETHODCALLTYPE *CopyDataFrom )( 
            __RPC__in __x_ABI_CLumia_CImaging_CIBitmap * This,
            /* [in] */ __RPC__in_opt __x_ABI_CLumia_CImaging_CIReadableBitmap *sourceBitmap);
        
        HRESULT ( STDMETHODCALLTYPE *ConvertFrom )( 
            __RPC__in __x_ABI_CLumia_CImaging_CIBitmap * This,
            /* [in] */ __RPC__in_opt __x_ABI_CLumia_CImaging_CIBitmap *sourceBitmap);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_Buffers )( 
            __RPC__in __x_ABI_CLumia_CImaging_CIBitmap * This,
            /* [out] */ __RPC__out UINT32 *____returnValueSize,
            /* [out][retval][size_is][size_is] */ __RPC__deref_out_ecount_full_opt(*____returnValueSize) __x_ABI_CLumia_CImaging_CIPixelBufferInfo ***__returnValue);
        
        END_INTERFACE
    } __x_ABI_CLumia_CImaging_CIBitmapVtbl;

    interface __x_ABI_CLumia_CImaging_CIBitmap
    {
        CONST_VTBL struct __x_ABI_CLumia_CImaging_CIBitmapVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define __x_ABI_CLumia_CImaging_CIBitmap_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __x_ABI_CLumia_CImaging_CIBitmap_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __x_ABI_CLumia_CImaging_CIBitmap_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __x_ABI_CLumia_CImaging_CIBitmap_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 

#define __x_ABI_CLumia_CImaging_CIBitmap_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 

#define __x_ABI_CLumia_CImaging_CIBitmap_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 


#define __x_ABI_CLumia_CImaging_CIBitmap_CopyDataFrom(This,sourceBitmap)	\
    ( (This)->lpVtbl -> CopyDataFrom(This,sourceBitmap) ) 

#define __x_ABI_CLumia_CImaging_CIBitmap_ConvertFrom(This,sourceBitmap)	\
    ( (This)->lpVtbl -> ConvertFrom(This,sourceBitmap) ) 

#define __x_ABI_CLumia_CImaging_CIBitmap_get_Buffers(This,____returnValueSize,__returnValue)	\
    ( (This)->lpVtbl -> get_Buffers(This,____returnValueSize,__returnValue) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* ____x_ABI_CLumia_CImaging_CIBitmap_INTERFACE_DEFINED__ */


/* interface __MIDL_itf_Lumia2EImaging_0000_0066 */
/* [local] */ 

#if !defined(____x_ABI_CLumia_CImaging_CIBitmapFactory_INTERFACE_DEFINED__)
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Lumia_Imaging_IBitmapFactory[] = L"Lumia.Imaging.IBitmapFactory";
#endif /* !defined(____x_ABI_CLumia_CImaging_CIBitmapFactory_INTERFACE_DEFINED__) */


/* interface __MIDL_itf_Lumia2EImaging_0000_0066 */
/* [local] */ 



extern RPC_IF_HANDLE __MIDL_itf_Lumia2EImaging_0000_0066_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_Lumia2EImaging_0000_0066_v0_0_s_ifspec;

#ifndef ____x_ABI_CLumia_CImaging_CIBitmapFactory_INTERFACE_DEFINED__
#define ____x_ABI_CLumia_CImaging_CIBitmapFactory_INTERFACE_DEFINED__

/* interface __x_ABI_CLumia_CImaging_CIBitmapFactory */
/* [uuid][object] */ 



/* interface ABI::Lumia::Imaging::IBitmapFactory */
/* [uuid][object] */ 


EXTERN_C const IID IID___x_ABI_CLumia_CImaging_CIBitmapFactory;

#if defined(__cplusplus) && !defined(CINTERFACE)
    } /* end extern "C" */
    namespace ABI {
        namespace Lumia {
            namespace Imaging {
                
                MIDL_INTERFACE("97D713B7-762F-3354-90D6-4C6CF4EE0A25")
                IBitmapFactory : public IInspectable
                {
                public:
                    virtual HRESULT STDMETHODCALLTYPE Create( 
                        /* [in] */ ABI::Windows::Foundation::Size size,
                        /* [in] */ ABI::Lumia::Imaging::ColorMode colorMode,
                        /* [out][retval] */ __RPC__deref_out_opt ABI::Lumia::Imaging::IBitmap **__returnValue) = 0;
                    
                    virtual HRESULT STDMETHODCALLTYPE CreateFromBuffer( 
                        /* [in] */ ABI::Windows::Foundation::Size size,
                        /* [in] */ ABI::Lumia::Imaging::ColorMode colorMode,
                        /* [in] */ UINT32 scanlineByteSize,
                        /* [in] */ __RPC__in_opt ABI::Windows::Storage::Streams::IBuffer *pixels,
                        /* [out][retval] */ __RPC__deref_out_opt ABI::Lumia::Imaging::IBitmap **__returnValue) = 0;
                    
                    virtual HRESULT STDMETHODCALLTYPE CreatePlanarFromBuffer( 
                        /* [in] */ ABI::Windows::Foundation::Size size,
                        /* [in] */ ABI::Lumia::Imaging::ColorMode colorMode,
                        /* [in] */ UINT32 __scanlineByteSizesSize,
                        /* [in][size_is] */ __RPC__in_ecount_full(__scanlineByteSizesSize) UINT32 *scanlineByteSizes,
                        /* [in] */ UINT32 __colorPlanesSize,
                        /* [in][size_is] */ __RPC__in_ecount_full(__colorPlanesSize) ABI::Windows::Storage::Streams::IBuffer **colorPlanes,
                        /* [out][retval] */ __RPC__deref_out_opt ABI::Lumia::Imaging::IBitmap **__returnValue) = 0;
                    
                    virtual HRESULT STDMETHODCALLTYPE CreateCropped( 
                        /* [in] */ __RPC__in_opt ABI::Lumia::Imaging::IBitmap *sourceBitmap,
                        /* [in] */ ABI::Windows::Foundation::Rect cropArea,
                        /* [out][retval] */ __RPC__deref_out_opt ABI::Lumia::Imaging::IBitmap **__returnValue) = 0;
                    
                };

                extern const __declspec(selectany) IID & IID_IBitmapFactory = __uuidof(IBitmapFactory);

                
            }  /* end namespace */
        }  /* end namespace */
    }  /* end namespace */
    extern "C" { 
    
#else 	/* C style interface */

    typedef struct __x_ABI_CLumia_CImaging_CIBitmapFactoryVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            __RPC__in __x_ABI_CLumia_CImaging_CIBitmapFactory * This,
            /* [in] */ __RPC__in REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            __RPC__in __x_ABI_CLumia_CImaging_CIBitmapFactory * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            __RPC__in __x_ABI_CLumia_CImaging_CIBitmapFactory * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetIids )( 
            __RPC__in __x_ABI_CLumia_CImaging_CIBitmapFactory * This,
            /* [out] */ __RPC__out ULONG *iidCount,
            /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
        
        HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )( 
            __RPC__in __x_ABI_CLumia_CImaging_CIBitmapFactory * This,
            /* [out] */ __RPC__deref_out_opt HSTRING *className);
        
        HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )( 
            __RPC__in __x_ABI_CLumia_CImaging_CIBitmapFactory * This,
            /* [out] */ __RPC__out TrustLevel *trustLevel);
        
        HRESULT ( STDMETHODCALLTYPE *Create )( 
            __RPC__in __x_ABI_CLumia_CImaging_CIBitmapFactory * This,
            /* [in] */ __x_ABI_CWindows_CFoundation_CSize size,
            /* [in] */ __x_ABI_CLumia_CImaging_CColorMode colorMode,
            /* [out][retval] */ __RPC__deref_out_opt __x_ABI_CLumia_CImaging_CIBitmap **__returnValue);
        
        HRESULT ( STDMETHODCALLTYPE *CreateFromBuffer )( 
            __RPC__in __x_ABI_CLumia_CImaging_CIBitmapFactory * This,
            /* [in] */ __x_ABI_CWindows_CFoundation_CSize size,
            /* [in] */ __x_ABI_CLumia_CImaging_CColorMode colorMode,
            /* [in] */ UINT32 scanlineByteSize,
            /* [in] */ __RPC__in_opt __x_ABI_CWindows_CStorage_CStreams_CIBuffer *pixels,
            /* [out][retval] */ __RPC__deref_out_opt __x_ABI_CLumia_CImaging_CIBitmap **__returnValue);
        
        HRESULT ( STDMETHODCALLTYPE *CreatePlanarFromBuffer )( 
            __RPC__in __x_ABI_CLumia_CImaging_CIBitmapFactory * This,
            /* [in] */ __x_ABI_CWindows_CFoundation_CSize size,
            /* [in] */ __x_ABI_CLumia_CImaging_CColorMode colorMode,
            /* [in] */ UINT32 __scanlineByteSizesSize,
            /* [in][size_is] */ __RPC__in_ecount_full(__scanlineByteSizesSize) UINT32 *scanlineByteSizes,
            /* [in] */ UINT32 __colorPlanesSize,
            /* [in][size_is] */ __RPC__in_ecount_full(__colorPlanesSize) __x_ABI_CWindows_CStorage_CStreams_CIBuffer **colorPlanes,
            /* [out][retval] */ __RPC__deref_out_opt __x_ABI_CLumia_CImaging_CIBitmap **__returnValue);
        
        HRESULT ( STDMETHODCALLTYPE *CreateCropped )( 
            __RPC__in __x_ABI_CLumia_CImaging_CIBitmapFactory * This,
            /* [in] */ __RPC__in_opt __x_ABI_CLumia_CImaging_CIBitmap *sourceBitmap,
            /* [in] */ __x_ABI_CWindows_CFoundation_CRect cropArea,
            /* [out][retval] */ __RPC__deref_out_opt __x_ABI_CLumia_CImaging_CIBitmap **__returnValue);
        
        END_INTERFACE
    } __x_ABI_CLumia_CImaging_CIBitmapFactoryVtbl;

    interface __x_ABI_CLumia_CImaging_CIBitmapFactory
    {
        CONST_VTBL struct __x_ABI_CLumia_CImaging_CIBitmapFactoryVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define __x_ABI_CLumia_CImaging_CIBitmapFactory_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __x_ABI_CLumia_CImaging_CIBitmapFactory_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __x_ABI_CLumia_CImaging_CIBitmapFactory_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __x_ABI_CLumia_CImaging_CIBitmapFactory_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 

#define __x_ABI_CLumia_CImaging_CIBitmapFactory_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 

#define __x_ABI_CLumia_CImaging_CIBitmapFactory_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 


#define __x_ABI_CLumia_CImaging_CIBitmapFactory_Create(This,size,colorMode,__returnValue)	\
    ( (This)->lpVtbl -> Create(This,size,colorMode,__returnValue) ) 

#define __x_ABI_CLumia_CImaging_CIBitmapFactory_CreateFromBuffer(This,size,colorMode,scanlineByteSize,pixels,__returnValue)	\
    ( (This)->lpVtbl -> CreateFromBuffer(This,size,colorMode,scanlineByteSize,pixels,__returnValue) ) 

#define __x_ABI_CLumia_CImaging_CIBitmapFactory_CreatePlanarFromBuffer(This,size,colorMode,__scanlineByteSizesSize,scanlineByteSizes,__colorPlanesSize,colorPlanes,__returnValue)	\
    ( (This)->lpVtbl -> CreatePlanarFromBuffer(This,size,colorMode,__scanlineByteSizesSize,scanlineByteSizes,__colorPlanesSize,colorPlanes,__returnValue) ) 

#define __x_ABI_CLumia_CImaging_CIBitmapFactory_CreateCropped(This,sourceBitmap,cropArea,__returnValue)	\
    ( (This)->lpVtbl -> CreateCropped(This,sourceBitmap,cropArea,__returnValue) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* ____x_ABI_CLumia_CImaging_CIBitmapFactory_INTERFACE_DEFINED__ */


/* interface __MIDL_itf_Lumia2EImaging_0000_0067 */
/* [local] */ 

#if !defined(____x_ABI_CLumia_CImaging_CIImageProvider_INTERFACE_DEFINED__)
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Lumia_Imaging_IImageProvider[] = L"Lumia.Imaging.IImageProvider";
#endif /* !defined(____x_ABI_CLumia_CImaging_CIImageProvider_INTERFACE_DEFINED__) */


/* interface __MIDL_itf_Lumia2EImaging_0000_0067 */
/* [local] */ 



extern RPC_IF_HANDLE __MIDL_itf_Lumia2EImaging_0000_0067_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_Lumia2EImaging_0000_0067_v0_0_s_ifspec;

#ifndef ____x_ABI_CLumia_CImaging_CIImageProvider_INTERFACE_DEFINED__
#define ____x_ABI_CLumia_CImaging_CIImageProvider_INTERFACE_DEFINED__

/* interface __x_ABI_CLumia_CImaging_CIImageProvider */
/* [uuid][object] */ 



/* interface ABI::Lumia::Imaging::IImageProvider */
/* [uuid][object] */ 


EXTERN_C const IID IID___x_ABI_CLumia_CImaging_CIImageProvider;

#if defined(__cplusplus) && !defined(CINTERFACE)
    } /* end extern "C" */
    namespace ABI {
        namespace Lumia {
            namespace Imaging {
                
                MIDL_INTERFACE("4717AFFE-A0FC-39B0-8292-B80C8E3C39A8")
                IImageProvider : public IInspectable
                {
                public:
                    virtual HRESULT STDMETHODCALLTYPE PreloadAsync( 
                        /* [out][retval] */ __RPC__deref_out_opt ABI::Windows::Foundation::IAsyncAction **__returnValue) = 0;
                    
                    virtual HRESULT STDMETHODCALLTYPE GetBitmapAsync( 
                        /* [in] */ __RPC__in_opt ABI::Lumia::Imaging::IBitmap *bitmap,
                        /* [in] */ ABI::Lumia::Imaging::OutputOption outputOption,
                        /* [out][retval] */ __RPC__deref_out_opt __FIAsyncOperation_1_Lumia__CImaging__CBitmap **__returnValue) = 0;
                    
                    virtual HRESULT STDMETHODCALLTYPE GetInfoAsync( 
                        /* [out][retval] */ __RPC__deref_out_opt __FIAsyncOperation_1_Lumia__CImaging__CImageProviderInfo **__returnValue) = 0;
                    
                    virtual HRESULT STDMETHODCALLTYPE Lock( 
                        /* [in] */ __RPC__in_opt ABI::Lumia::Imaging::IRenderRequest *renderRequest,
                        /* [out][retval] */ __RPC__out boolean *__returnValue) = 0;
                    
                };

                extern const __declspec(selectany) IID & IID_IImageProvider = __uuidof(IImageProvider);

                
            }  /* end namespace */
        }  /* end namespace */
    }  /* end namespace */
    extern "C" { 
    
#else 	/* C style interface */

    typedef struct __x_ABI_CLumia_CImaging_CIImageProviderVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            __RPC__in __x_ABI_CLumia_CImaging_CIImageProvider * This,
            /* [in] */ __RPC__in REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            __RPC__in __x_ABI_CLumia_CImaging_CIImageProvider * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            __RPC__in __x_ABI_CLumia_CImaging_CIImageProvider * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetIids )( 
            __RPC__in __x_ABI_CLumia_CImaging_CIImageProvider * This,
            /* [out] */ __RPC__out ULONG *iidCount,
            /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
        
        HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )( 
            __RPC__in __x_ABI_CLumia_CImaging_CIImageProvider * This,
            /* [out] */ __RPC__deref_out_opt HSTRING *className);
        
        HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )( 
            __RPC__in __x_ABI_CLumia_CImaging_CIImageProvider * This,
            /* [out] */ __RPC__out TrustLevel *trustLevel);
        
        HRESULT ( STDMETHODCALLTYPE *PreloadAsync )( 
            __RPC__in __x_ABI_CLumia_CImaging_CIImageProvider * This,
            /* [out][retval] */ __RPC__deref_out_opt __x_ABI_CWindows_CFoundation_CIAsyncAction **__returnValue);
        
        HRESULT ( STDMETHODCALLTYPE *GetBitmapAsync )( 
            __RPC__in __x_ABI_CLumia_CImaging_CIImageProvider * This,
            /* [in] */ __RPC__in_opt __x_ABI_CLumia_CImaging_CIBitmap *bitmap,
            /* [in] */ __x_ABI_CLumia_CImaging_COutputOption outputOption,
            /* [out][retval] */ __RPC__deref_out_opt __FIAsyncOperation_1_Lumia__CImaging__CBitmap **__returnValue);
        
        HRESULT ( STDMETHODCALLTYPE *GetInfoAsync )( 
            __RPC__in __x_ABI_CLumia_CImaging_CIImageProvider * This,
            /* [out][retval] */ __RPC__deref_out_opt __FIAsyncOperation_1_Lumia__CImaging__CImageProviderInfo **__returnValue);
        
        HRESULT ( STDMETHODCALLTYPE *Lock )( 
            __RPC__in __x_ABI_CLumia_CImaging_CIImageProvider * This,
            /* [in] */ __RPC__in_opt __x_ABI_CLumia_CImaging_CIRenderRequest *renderRequest,
            /* [out][retval] */ __RPC__out boolean *__returnValue);
        
        END_INTERFACE
    } __x_ABI_CLumia_CImaging_CIImageProviderVtbl;

    interface __x_ABI_CLumia_CImaging_CIImageProvider
    {
        CONST_VTBL struct __x_ABI_CLumia_CImaging_CIImageProviderVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define __x_ABI_CLumia_CImaging_CIImageProvider_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __x_ABI_CLumia_CImaging_CIImageProvider_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __x_ABI_CLumia_CImaging_CIImageProvider_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __x_ABI_CLumia_CImaging_CIImageProvider_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 

#define __x_ABI_CLumia_CImaging_CIImageProvider_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 

#define __x_ABI_CLumia_CImaging_CIImageProvider_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 


#define __x_ABI_CLumia_CImaging_CIImageProvider_PreloadAsync(This,__returnValue)	\
    ( (This)->lpVtbl -> PreloadAsync(This,__returnValue) ) 

#define __x_ABI_CLumia_CImaging_CIImageProvider_GetBitmapAsync(This,bitmap,outputOption,__returnValue)	\
    ( (This)->lpVtbl -> GetBitmapAsync(This,bitmap,outputOption,__returnValue) ) 

#define __x_ABI_CLumia_CImaging_CIImageProvider_GetInfoAsync(This,__returnValue)	\
    ( (This)->lpVtbl -> GetInfoAsync(This,__returnValue) ) 

#define __x_ABI_CLumia_CImaging_CIImageProvider_Lock(This,renderRequest,__returnValue)	\
    ( (This)->lpVtbl -> Lock(This,renderRequest,__returnValue) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* ____x_ABI_CLumia_CImaging_CIImageProvider_INTERFACE_DEFINED__ */


/* interface __MIDL_itf_Lumia2EImaging_0000_0068 */
/* [local] */ 

#if !defined(____x_ABI_CLumia_CImaging_CIRenderRequest_INTERFACE_DEFINED__)
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Lumia_Imaging_IRenderRequest[] = L"Lumia.Imaging.IRenderRequest";
#endif /* !defined(____x_ABI_CLumia_CImaging_CIRenderRequest_INTERFACE_DEFINED__) */


/* interface __MIDL_itf_Lumia2EImaging_0000_0068 */
/* [local] */ 



extern RPC_IF_HANDLE __MIDL_itf_Lumia2EImaging_0000_0068_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_Lumia2EImaging_0000_0068_v0_0_s_ifspec;

#ifndef ____x_ABI_CLumia_CImaging_CIRenderRequest_INTERFACE_DEFINED__
#define ____x_ABI_CLumia_CImaging_CIRenderRequest_INTERFACE_DEFINED__

/* interface __x_ABI_CLumia_CImaging_CIRenderRequest */
/* [uuid][object] */ 



/* interface ABI::Lumia::Imaging::IRenderRequest */
/* [uuid][object] */ 


EXTERN_C const IID IID___x_ABI_CLumia_CImaging_CIRenderRequest;

#if defined(__cplusplus) && !defined(CINTERFACE)
    } /* end extern "C" */
    namespace ABI {
        namespace Lumia {
            namespace Imaging {
                
                MIDL_INTERFACE("1E600B15-AC58-36DA-A465-58E09317B4B2")
                IRenderRequest : public IInspectable
                {
                public:
                };

                extern const __declspec(selectany) IID & IID_IRenderRequest = __uuidof(IRenderRequest);

                
            }  /* end namespace */
        }  /* end namespace */
    }  /* end namespace */
    extern "C" { 
    
#else 	/* C style interface */

    typedef struct __x_ABI_CLumia_CImaging_CIRenderRequestVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            __RPC__in __x_ABI_CLumia_CImaging_CIRenderRequest * This,
            /* [in] */ __RPC__in REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            __RPC__in __x_ABI_CLumia_CImaging_CIRenderRequest * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            __RPC__in __x_ABI_CLumia_CImaging_CIRenderRequest * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetIids )( 
            __RPC__in __x_ABI_CLumia_CImaging_CIRenderRequest * This,
            /* [out] */ __RPC__out ULONG *iidCount,
            /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
        
        HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )( 
            __RPC__in __x_ABI_CLumia_CImaging_CIRenderRequest * This,
            /* [out] */ __RPC__deref_out_opt HSTRING *className);
        
        HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )( 
            __RPC__in __x_ABI_CLumia_CImaging_CIRenderRequest * This,
            /* [out] */ __RPC__out TrustLevel *trustLevel);
        
        END_INTERFACE
    } __x_ABI_CLumia_CImaging_CIRenderRequestVtbl;

    interface __x_ABI_CLumia_CImaging_CIRenderRequest
    {
        CONST_VTBL struct __x_ABI_CLumia_CImaging_CIRenderRequestVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define __x_ABI_CLumia_CImaging_CIRenderRequest_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __x_ABI_CLumia_CImaging_CIRenderRequest_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __x_ABI_CLumia_CImaging_CIRenderRequest_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __x_ABI_CLumia_CImaging_CIRenderRequest_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 

#define __x_ABI_CLumia_CImaging_CIRenderRequest_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 

#define __x_ABI_CLumia_CImaging_CIRenderRequest_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 


#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* ____x_ABI_CLumia_CImaging_CIRenderRequest_INTERFACE_DEFINED__ */


/* interface __MIDL_itf_Lumia2EImaging_0000_0069 */
/* [local] */ 

#if !defined(____x_ABI_CLumia_CImaging_CIFilter_INTERFACE_DEFINED__)
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Lumia_Imaging_IFilter[] = L"Lumia.Imaging.IFilter";
#endif /* !defined(____x_ABI_CLumia_CImaging_CIFilter_INTERFACE_DEFINED__) */


/* interface __MIDL_itf_Lumia2EImaging_0000_0069 */
/* [local] */ 



extern RPC_IF_HANDLE __MIDL_itf_Lumia2EImaging_0000_0069_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_Lumia2EImaging_0000_0069_v0_0_s_ifspec;

#ifndef ____x_ABI_CLumia_CImaging_CIFilter_INTERFACE_DEFINED__
#define ____x_ABI_CLumia_CImaging_CIFilter_INTERFACE_DEFINED__

/* interface __x_ABI_CLumia_CImaging_CIFilter */
/* [uuid][object] */ 



/* interface ABI::Lumia::Imaging::IFilter */
/* [uuid][object] */ 


EXTERN_C const IID IID___x_ABI_CLumia_CImaging_CIFilter;

#if defined(__cplusplus) && !defined(CINTERFACE)
    } /* end extern "C" */
    namespace ABI {
        namespace Lumia {
            namespace Imaging {
                
                MIDL_INTERFACE("D70D4275-9BC7-3DF4-824B-9BA1734C273C")
                IFilter : public IInspectable
                {
                public:
                    virtual HRESULT STDMETHODCALLTYPE PrepareAsync( 
                        /* [out][retval] */ __RPC__deref_out_opt ABI::Windows::Foundation::IAsyncAction **__returnValue) = 0;
                    
                    virtual HRESULT STDMETHODCALLTYPE Apply( 
                        /* [in] */ __RPC__in_opt ABI::Lumia::Imaging::IFilterEffect *filterEffect) = 0;
                    
                    virtual HRESULT STDMETHODCALLTYPE Lock( 
                        /* [in] */ __RPC__in_opt ABI::Lumia::Imaging::IRenderRequest *renderRequest,
                        /* [out][retval] */ __RPC__out boolean *__returnValue) = 0;
                    
                };

                extern const __declspec(selectany) IID & IID_IFilter = __uuidof(IFilter);

                
            }  /* end namespace */
        }  /* end namespace */
    }  /* end namespace */
    extern "C" { 
    
#else 	/* C style interface */

    typedef struct __x_ABI_CLumia_CImaging_CIFilterVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            __RPC__in __x_ABI_CLumia_CImaging_CIFilter * This,
            /* [in] */ __RPC__in REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            __RPC__in __x_ABI_CLumia_CImaging_CIFilter * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            __RPC__in __x_ABI_CLumia_CImaging_CIFilter * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetIids )( 
            __RPC__in __x_ABI_CLumia_CImaging_CIFilter * This,
            /* [out] */ __RPC__out ULONG *iidCount,
            /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
        
        HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )( 
            __RPC__in __x_ABI_CLumia_CImaging_CIFilter * This,
            /* [out] */ __RPC__deref_out_opt HSTRING *className);
        
        HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )( 
            __RPC__in __x_ABI_CLumia_CImaging_CIFilter * This,
            /* [out] */ __RPC__out TrustLevel *trustLevel);
        
        HRESULT ( STDMETHODCALLTYPE *PrepareAsync )( 
            __RPC__in __x_ABI_CLumia_CImaging_CIFilter * This,
            /* [out][retval] */ __RPC__deref_out_opt __x_ABI_CWindows_CFoundation_CIAsyncAction **__returnValue);
        
        HRESULT ( STDMETHODCALLTYPE *Apply )( 
            __RPC__in __x_ABI_CLumia_CImaging_CIFilter * This,
            /* [in] */ __RPC__in_opt __x_ABI_CLumia_CImaging_CIFilterEffect *filterEffect);
        
        HRESULT ( STDMETHODCALLTYPE *Lock )( 
            __RPC__in __x_ABI_CLumia_CImaging_CIFilter * This,
            /* [in] */ __RPC__in_opt __x_ABI_CLumia_CImaging_CIRenderRequest *renderRequest,
            /* [out][retval] */ __RPC__out boolean *__returnValue);
        
        END_INTERFACE
    } __x_ABI_CLumia_CImaging_CIFilterVtbl;

    interface __x_ABI_CLumia_CImaging_CIFilter
    {
        CONST_VTBL struct __x_ABI_CLumia_CImaging_CIFilterVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define __x_ABI_CLumia_CImaging_CIFilter_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __x_ABI_CLumia_CImaging_CIFilter_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __x_ABI_CLumia_CImaging_CIFilter_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __x_ABI_CLumia_CImaging_CIFilter_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 

#define __x_ABI_CLumia_CImaging_CIFilter_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 

#define __x_ABI_CLumia_CImaging_CIFilter_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 


#define __x_ABI_CLumia_CImaging_CIFilter_PrepareAsync(This,__returnValue)	\
    ( (This)->lpVtbl -> PrepareAsync(This,__returnValue) ) 

#define __x_ABI_CLumia_CImaging_CIFilter_Apply(This,filterEffect)	\
    ( (This)->lpVtbl -> Apply(This,filterEffect) ) 

#define __x_ABI_CLumia_CImaging_CIFilter_Lock(This,renderRequest,__returnValue)	\
    ( (This)->lpVtbl -> Lock(This,renderRequest,__returnValue) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* ____x_ABI_CLumia_CImaging_CIFilter_INTERFACE_DEFINED__ */


/* interface __MIDL_itf_Lumia2EImaging_0000_0070 */
/* [local] */ 

#if !defined(____x_ABI_CLumia_CImaging_CIImageConsumer_INTERFACE_DEFINED__)
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Lumia_Imaging_IImageConsumer[] = L"Lumia.Imaging.IImageConsumer";
#endif /* !defined(____x_ABI_CLumia_CImaging_CIImageConsumer_INTERFACE_DEFINED__) */


/* interface __MIDL_itf_Lumia2EImaging_0000_0070 */
/* [local] */ 



extern RPC_IF_HANDLE __MIDL_itf_Lumia2EImaging_0000_0070_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_Lumia2EImaging_0000_0070_v0_0_s_ifspec;

#ifndef ____x_ABI_CLumia_CImaging_CIImageConsumer_INTERFACE_DEFINED__
#define ____x_ABI_CLumia_CImaging_CIImageConsumer_INTERFACE_DEFINED__

/* interface __x_ABI_CLumia_CImaging_CIImageConsumer */
/* [uuid][object] */ 



/* interface ABI::Lumia::Imaging::IImageConsumer */
/* [uuid][object] */ 


EXTERN_C const IID IID___x_ABI_CLumia_CImaging_CIImageConsumer;

#if defined(__cplusplus) && !defined(CINTERFACE)
    } /* end extern "C" */
    namespace ABI {
        namespace Lumia {
            namespace Imaging {
                
                MIDL_INTERFACE("290055B7-81BE-3F41-A2DF-ACF0C60871FD")
                IImageConsumer : public IInspectable
                {
                public:
                    virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_Source( 
                        /* [out][retval] */ __RPC__deref_out_opt ABI::Lumia::Imaging::IImageProvider **__returnValue) = 0;
                    
                    virtual /* [propput] */ HRESULT STDMETHODCALLTYPE put_Source( 
                        /* [in] */ __RPC__in_opt ABI::Lumia::Imaging::IImageProvider *imageProvider) = 0;
                    
                };

                extern const __declspec(selectany) IID & IID_IImageConsumer = __uuidof(IImageConsumer);

                
            }  /* end namespace */
        }  /* end namespace */
    }  /* end namespace */
    extern "C" { 
    
#else 	/* C style interface */

    typedef struct __x_ABI_CLumia_CImaging_CIImageConsumerVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            __RPC__in __x_ABI_CLumia_CImaging_CIImageConsumer * This,
            /* [in] */ __RPC__in REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            __RPC__in __x_ABI_CLumia_CImaging_CIImageConsumer * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            __RPC__in __x_ABI_CLumia_CImaging_CIImageConsumer * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetIids )( 
            __RPC__in __x_ABI_CLumia_CImaging_CIImageConsumer * This,
            /* [out] */ __RPC__out ULONG *iidCount,
            /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
        
        HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )( 
            __RPC__in __x_ABI_CLumia_CImaging_CIImageConsumer * This,
            /* [out] */ __RPC__deref_out_opt HSTRING *className);
        
        HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )( 
            __RPC__in __x_ABI_CLumia_CImaging_CIImageConsumer * This,
            /* [out] */ __RPC__out TrustLevel *trustLevel);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_Source )( 
            __RPC__in __x_ABI_CLumia_CImaging_CIImageConsumer * This,
            /* [out][retval] */ __RPC__deref_out_opt __x_ABI_CLumia_CImaging_CIImageProvider **__returnValue);
        
        /* [propput] */ HRESULT ( STDMETHODCALLTYPE *put_Source )( 
            __RPC__in __x_ABI_CLumia_CImaging_CIImageConsumer * This,
            /* [in] */ __RPC__in_opt __x_ABI_CLumia_CImaging_CIImageProvider *imageProvider);
        
        END_INTERFACE
    } __x_ABI_CLumia_CImaging_CIImageConsumerVtbl;

    interface __x_ABI_CLumia_CImaging_CIImageConsumer
    {
        CONST_VTBL struct __x_ABI_CLumia_CImaging_CIImageConsumerVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define __x_ABI_CLumia_CImaging_CIImageConsumer_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __x_ABI_CLumia_CImaging_CIImageConsumer_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __x_ABI_CLumia_CImaging_CIImageConsumer_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __x_ABI_CLumia_CImaging_CIImageConsumer_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 

#define __x_ABI_CLumia_CImaging_CIImageConsumer_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 

#define __x_ABI_CLumia_CImaging_CIImageConsumer_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 


#define __x_ABI_CLumia_CImaging_CIImageConsumer_get_Source(This,__returnValue)	\
    ( (This)->lpVtbl -> get_Source(This,__returnValue) ) 

#define __x_ABI_CLumia_CImaging_CIImageConsumer_put_Source(This,imageProvider)	\
    ( (This)->lpVtbl -> put_Source(This,imageProvider) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* ____x_ABI_CLumia_CImaging_CIImageConsumer_INTERFACE_DEFINED__ */


/* interface __MIDL_itf_Lumia2EImaging_0000_0071 */
/* [local] */ 

#if !defined(____x_ABI_CLumia_CImaging_CIFilterEffect_INTERFACE_DEFINED__)
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Lumia_Imaging_IFilterEffect[] = L"Lumia.Imaging.IFilterEffect";
#endif /* !defined(____x_ABI_CLumia_CImaging_CIFilterEffect_INTERFACE_DEFINED__) */


/* interface __MIDL_itf_Lumia2EImaging_0000_0071 */
/* [local] */ 



extern RPC_IF_HANDLE __MIDL_itf_Lumia2EImaging_0000_0071_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_Lumia2EImaging_0000_0071_v0_0_s_ifspec;

#ifndef ____x_ABI_CLumia_CImaging_CIFilterEffect_INTERFACE_DEFINED__
#define ____x_ABI_CLumia_CImaging_CIFilterEffect_INTERFACE_DEFINED__

/* interface __x_ABI_CLumia_CImaging_CIFilterEffect */
/* [uuid][object] */ 



/* interface ABI::Lumia::Imaging::IFilterEffect */
/* [uuid][object] */ 


EXTERN_C const IID IID___x_ABI_CLumia_CImaging_CIFilterEffect;

#if defined(__cplusplus) && !defined(CINTERFACE)
    } /* end extern "C" */
    namespace ABI {
        namespace Lumia {
            namespace Imaging {
                
                MIDL_INTERFACE("72CB0DF5-687A-3091-9BF3-EEFE62F72466")
                IFilterEffect : public IInspectable
                {
                public:
                    virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_Filters( 
                        /* [out][retval] */ __RPC__deref_out_opt __FIIterable_1_Lumia__CImaging__CIFilter **__returnValue) = 0;
                    
                    virtual /* [propput] */ HRESULT STDMETHODCALLTYPE put_Filters( 
                        /* [in] */ __RPC__in_opt __FIIterable_1_Lumia__CImaging__CIFilter *value) = 0;
                    
                };

                extern const __declspec(selectany) IID & IID_IFilterEffect = __uuidof(IFilterEffect);

                
            }  /* end namespace */
        }  /* end namespace */
    }  /* end namespace */
    extern "C" { 
    
#else 	/* C style interface */

    typedef struct __x_ABI_CLumia_CImaging_CIFilterEffectVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            __RPC__in __x_ABI_CLumia_CImaging_CIFilterEffect * This,
            /* [in] */ __RPC__in REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            __RPC__in __x_ABI_CLumia_CImaging_CIFilterEffect * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            __RPC__in __x_ABI_CLumia_CImaging_CIFilterEffect * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetIids )( 
            __RPC__in __x_ABI_CLumia_CImaging_CIFilterEffect * This,
            /* [out] */ __RPC__out ULONG *iidCount,
            /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
        
        HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )( 
            __RPC__in __x_ABI_CLumia_CImaging_CIFilterEffect * This,
            /* [out] */ __RPC__deref_out_opt HSTRING *className);
        
        HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )( 
            __RPC__in __x_ABI_CLumia_CImaging_CIFilterEffect * This,
            /* [out] */ __RPC__out TrustLevel *trustLevel);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_Filters )( 
            __RPC__in __x_ABI_CLumia_CImaging_CIFilterEffect * This,
            /* [out][retval] */ __RPC__deref_out_opt __FIIterable_1_Lumia__CImaging__CIFilter **__returnValue);
        
        /* [propput] */ HRESULT ( STDMETHODCALLTYPE *put_Filters )( 
            __RPC__in __x_ABI_CLumia_CImaging_CIFilterEffect * This,
            /* [in] */ __RPC__in_opt __FIIterable_1_Lumia__CImaging__CIFilter *value);
        
        END_INTERFACE
    } __x_ABI_CLumia_CImaging_CIFilterEffectVtbl;

    interface __x_ABI_CLumia_CImaging_CIFilterEffect
    {
        CONST_VTBL struct __x_ABI_CLumia_CImaging_CIFilterEffectVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define __x_ABI_CLumia_CImaging_CIFilterEffect_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __x_ABI_CLumia_CImaging_CIFilterEffect_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __x_ABI_CLumia_CImaging_CIFilterEffect_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __x_ABI_CLumia_CImaging_CIFilterEffect_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 

#define __x_ABI_CLumia_CImaging_CIFilterEffect_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 

#define __x_ABI_CLumia_CImaging_CIFilterEffect_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 


#define __x_ABI_CLumia_CImaging_CIFilterEffect_get_Filters(This,__returnValue)	\
    ( (This)->lpVtbl -> get_Filters(This,__returnValue) ) 

#define __x_ABI_CLumia_CImaging_CIFilterEffect_put_Filters(This,value)	\
    ( (This)->lpVtbl -> put_Filters(This,value) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* ____x_ABI_CLumia_CImaging_CIFilterEffect_INTERFACE_DEFINED__ */


/* interface __MIDL_itf_Lumia2EImaging_0000_0072 */
/* [local] */ 

#if !defined(____x_ABI_CLumia_CImaging_CIAnimationFrame_INTERFACE_DEFINED__)
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Lumia_Imaging_IAnimationFrame[] = L"Lumia.Imaging.IAnimationFrame";
#endif /* !defined(____x_ABI_CLumia_CImaging_CIAnimationFrame_INTERFACE_DEFINED__) */


/* interface __MIDL_itf_Lumia2EImaging_0000_0072 */
/* [local] */ 



extern RPC_IF_HANDLE __MIDL_itf_Lumia2EImaging_0000_0072_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_Lumia2EImaging_0000_0072_v0_0_s_ifspec;

#ifndef ____x_ABI_CLumia_CImaging_CIAnimationFrame_INTERFACE_DEFINED__
#define ____x_ABI_CLumia_CImaging_CIAnimationFrame_INTERFACE_DEFINED__

/* interface __x_ABI_CLumia_CImaging_CIAnimationFrame */
/* [uuid][object] */ 



/* interface ABI::Lumia::Imaging::IAnimationFrame */
/* [uuid][object] */ 


EXTERN_C const IID IID___x_ABI_CLumia_CImaging_CIAnimationFrame;

#if defined(__cplusplus) && !defined(CINTERFACE)
    } /* end extern "C" */
    namespace ABI {
        namespace Lumia {
            namespace Imaging {
                
                MIDL_INTERFACE("B895FC0F-C3C0-3E75-8229-B6343E5F83AB")
                IAnimationFrame : public IInspectable
                {
                public:
                    virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_Position( 
                        /* [out][retval] */ __RPC__out ABI::Windows::Foundation::Point *__returnValue) = 0;
                    
                    virtual /* [propput] */ HRESULT STDMETHODCALLTYPE put_Position( 
                        /* [in] */ ABI::Windows::Foundation::Point position) = 0;
                    
                    virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_Dithering( 
                        /* [out][retval] */ __RPC__out ABI::Lumia::Imaging::AnimationFrameDithering *__returnValue) = 0;
                    
                    virtual /* [propput] */ HRESULT STDMETHODCALLTYPE put_Dithering( 
                        /* [in] */ ABI::Lumia::Imaging::AnimationFrameDithering value) = 0;
                    
                    virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_Duration( 
                        /* [out][retval] */ __RPC__out INT32 *__returnValue) = 0;
                    
                    virtual /* [propput] */ HRESULT STDMETHODCALLTYPE put_Duration( 
                        /* [in] */ INT32 duration) = 0;
                    
                };

                extern const __declspec(selectany) IID & IID_IAnimationFrame = __uuidof(IAnimationFrame);

                
            }  /* end namespace */
        }  /* end namespace */
    }  /* end namespace */
    extern "C" { 
    
#else 	/* C style interface */

    typedef struct __x_ABI_CLumia_CImaging_CIAnimationFrameVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            __RPC__in __x_ABI_CLumia_CImaging_CIAnimationFrame * This,
            /* [in] */ __RPC__in REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            __RPC__in __x_ABI_CLumia_CImaging_CIAnimationFrame * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            __RPC__in __x_ABI_CLumia_CImaging_CIAnimationFrame * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetIids )( 
            __RPC__in __x_ABI_CLumia_CImaging_CIAnimationFrame * This,
            /* [out] */ __RPC__out ULONG *iidCount,
            /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
        
        HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )( 
            __RPC__in __x_ABI_CLumia_CImaging_CIAnimationFrame * This,
            /* [out] */ __RPC__deref_out_opt HSTRING *className);
        
        HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )( 
            __RPC__in __x_ABI_CLumia_CImaging_CIAnimationFrame * This,
            /* [out] */ __RPC__out TrustLevel *trustLevel);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_Position )( 
            __RPC__in __x_ABI_CLumia_CImaging_CIAnimationFrame * This,
            /* [out][retval] */ __RPC__out __x_ABI_CWindows_CFoundation_CPoint *__returnValue);
        
        /* [propput] */ HRESULT ( STDMETHODCALLTYPE *put_Position )( 
            __RPC__in __x_ABI_CLumia_CImaging_CIAnimationFrame * This,
            /* [in] */ __x_ABI_CWindows_CFoundation_CPoint position);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_Dithering )( 
            __RPC__in __x_ABI_CLumia_CImaging_CIAnimationFrame * This,
            /* [out][retval] */ __RPC__out __x_ABI_CLumia_CImaging_CAnimationFrameDithering *__returnValue);
        
        /* [propput] */ HRESULT ( STDMETHODCALLTYPE *put_Dithering )( 
            __RPC__in __x_ABI_CLumia_CImaging_CIAnimationFrame * This,
            /* [in] */ __x_ABI_CLumia_CImaging_CAnimationFrameDithering value);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_Duration )( 
            __RPC__in __x_ABI_CLumia_CImaging_CIAnimationFrame * This,
            /* [out][retval] */ __RPC__out INT32 *__returnValue);
        
        /* [propput] */ HRESULT ( STDMETHODCALLTYPE *put_Duration )( 
            __RPC__in __x_ABI_CLumia_CImaging_CIAnimationFrame * This,
            /* [in] */ INT32 duration);
        
        END_INTERFACE
    } __x_ABI_CLumia_CImaging_CIAnimationFrameVtbl;

    interface __x_ABI_CLumia_CImaging_CIAnimationFrame
    {
        CONST_VTBL struct __x_ABI_CLumia_CImaging_CIAnimationFrameVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define __x_ABI_CLumia_CImaging_CIAnimationFrame_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __x_ABI_CLumia_CImaging_CIAnimationFrame_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __x_ABI_CLumia_CImaging_CIAnimationFrame_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __x_ABI_CLumia_CImaging_CIAnimationFrame_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 

#define __x_ABI_CLumia_CImaging_CIAnimationFrame_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 

#define __x_ABI_CLumia_CImaging_CIAnimationFrame_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 


#define __x_ABI_CLumia_CImaging_CIAnimationFrame_get_Position(This,__returnValue)	\
    ( (This)->lpVtbl -> get_Position(This,__returnValue) ) 

#define __x_ABI_CLumia_CImaging_CIAnimationFrame_put_Position(This,position)	\
    ( (This)->lpVtbl -> put_Position(This,position) ) 

#define __x_ABI_CLumia_CImaging_CIAnimationFrame_get_Dithering(This,__returnValue)	\
    ( (This)->lpVtbl -> get_Dithering(This,__returnValue) ) 

#define __x_ABI_CLumia_CImaging_CIAnimationFrame_put_Dithering(This,value)	\
    ( (This)->lpVtbl -> put_Dithering(This,value) ) 

#define __x_ABI_CLumia_CImaging_CIAnimationFrame_get_Duration(This,__returnValue)	\
    ( (This)->lpVtbl -> get_Duration(This,__returnValue) ) 

#define __x_ABI_CLumia_CImaging_CIAnimationFrame_put_Duration(This,duration)	\
    ( (This)->lpVtbl -> put_Duration(This,duration) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* ____x_ABI_CLumia_CImaging_CIAnimationFrame_INTERFACE_DEFINED__ */


/* interface __MIDL_itf_Lumia2EImaging_0000_0073 */
/* [local] */ 

#if !defined(____x_ABI_CLumia_CImaging_CIAnimationFrameFactory_INTERFACE_DEFINED__)
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Lumia_Imaging_IAnimationFrameFactory[] = L"Lumia.Imaging.IAnimationFrameFactory";
#endif /* !defined(____x_ABI_CLumia_CImaging_CIAnimationFrameFactory_INTERFACE_DEFINED__) */


/* interface __MIDL_itf_Lumia2EImaging_0000_0073 */
/* [local] */ 



extern RPC_IF_HANDLE __MIDL_itf_Lumia2EImaging_0000_0073_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_Lumia2EImaging_0000_0073_v0_0_s_ifspec;

#ifndef ____x_ABI_CLumia_CImaging_CIAnimationFrameFactory_INTERFACE_DEFINED__
#define ____x_ABI_CLumia_CImaging_CIAnimationFrameFactory_INTERFACE_DEFINED__

/* interface __x_ABI_CLumia_CImaging_CIAnimationFrameFactory */
/* [uuid][object] */ 



/* interface ABI::Lumia::Imaging::IAnimationFrameFactory */
/* [uuid][object] */ 


EXTERN_C const IID IID___x_ABI_CLumia_CImaging_CIAnimationFrameFactory;

#if defined(__cplusplus) && !defined(CINTERFACE)
    } /* end extern "C" */
    namespace ABI {
        namespace Lumia {
            namespace Imaging {
                
                MIDL_INTERFACE("5AF2043C-E4A4-349C-89E4-AB51F3C4E031")
                IAnimationFrameFactory : public IInspectable
                {
                public:
                    virtual HRESULT STDMETHODCALLTYPE Create( 
                        /* [in] */ __RPC__in_opt ABI::Lumia::Imaging::IImageProvider *imageSource,
                        /* [out][retval] */ __RPC__deref_out_opt ABI::Lumia::Imaging::IAnimationFrame **__returnValue) = 0;
                    
                    virtual HRESULT STDMETHODCALLTYPE CreateWithDuration( 
                        /* [in] */ __RPC__in_opt ABI::Lumia::Imaging::IImageProvider *imageSource,
                        /* [in] */ INT32 duration,
                        /* [out][retval] */ __RPC__deref_out_opt ABI::Lumia::Imaging::IAnimationFrame **__returnValue) = 0;
                    
                    virtual HRESULT STDMETHODCALLTYPE CreateWithDurationAndPosition( 
                        /* [in] */ __RPC__in_opt ABI::Lumia::Imaging::IImageProvider *imageSource,
                        /* [in] */ INT32 duration,
                        /* [in] */ ABI::Windows::Foundation::Point position,
                        /* [out][retval] */ __RPC__deref_out_opt ABI::Lumia::Imaging::IAnimationFrame **__returnValue) = 0;
                    
                };

                extern const __declspec(selectany) IID & IID_IAnimationFrameFactory = __uuidof(IAnimationFrameFactory);

                
            }  /* end namespace */
        }  /* end namespace */
    }  /* end namespace */
    extern "C" { 
    
#else 	/* C style interface */

    typedef struct __x_ABI_CLumia_CImaging_CIAnimationFrameFactoryVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            __RPC__in __x_ABI_CLumia_CImaging_CIAnimationFrameFactory * This,
            /* [in] */ __RPC__in REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            __RPC__in __x_ABI_CLumia_CImaging_CIAnimationFrameFactory * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            __RPC__in __x_ABI_CLumia_CImaging_CIAnimationFrameFactory * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetIids )( 
            __RPC__in __x_ABI_CLumia_CImaging_CIAnimationFrameFactory * This,
            /* [out] */ __RPC__out ULONG *iidCount,
            /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
        
        HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )( 
            __RPC__in __x_ABI_CLumia_CImaging_CIAnimationFrameFactory * This,
            /* [out] */ __RPC__deref_out_opt HSTRING *className);
        
        HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )( 
            __RPC__in __x_ABI_CLumia_CImaging_CIAnimationFrameFactory * This,
            /* [out] */ __RPC__out TrustLevel *trustLevel);
        
        HRESULT ( STDMETHODCALLTYPE *Create )( 
            __RPC__in __x_ABI_CLumia_CImaging_CIAnimationFrameFactory * This,
            /* [in] */ __RPC__in_opt __x_ABI_CLumia_CImaging_CIImageProvider *imageSource,
            /* [out][retval] */ __RPC__deref_out_opt __x_ABI_CLumia_CImaging_CIAnimationFrame **__returnValue);
        
        HRESULT ( STDMETHODCALLTYPE *CreateWithDuration )( 
            __RPC__in __x_ABI_CLumia_CImaging_CIAnimationFrameFactory * This,
            /* [in] */ __RPC__in_opt __x_ABI_CLumia_CImaging_CIImageProvider *imageSource,
            /* [in] */ INT32 duration,
            /* [out][retval] */ __RPC__deref_out_opt __x_ABI_CLumia_CImaging_CIAnimationFrame **__returnValue);
        
        HRESULT ( STDMETHODCALLTYPE *CreateWithDurationAndPosition )( 
            __RPC__in __x_ABI_CLumia_CImaging_CIAnimationFrameFactory * This,
            /* [in] */ __RPC__in_opt __x_ABI_CLumia_CImaging_CIImageProvider *imageSource,
            /* [in] */ INT32 duration,
            /* [in] */ __x_ABI_CWindows_CFoundation_CPoint position,
            /* [out][retval] */ __RPC__deref_out_opt __x_ABI_CLumia_CImaging_CIAnimationFrame **__returnValue);
        
        END_INTERFACE
    } __x_ABI_CLumia_CImaging_CIAnimationFrameFactoryVtbl;

    interface __x_ABI_CLumia_CImaging_CIAnimationFrameFactory
    {
        CONST_VTBL struct __x_ABI_CLumia_CImaging_CIAnimationFrameFactoryVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define __x_ABI_CLumia_CImaging_CIAnimationFrameFactory_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __x_ABI_CLumia_CImaging_CIAnimationFrameFactory_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __x_ABI_CLumia_CImaging_CIAnimationFrameFactory_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __x_ABI_CLumia_CImaging_CIAnimationFrameFactory_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 

#define __x_ABI_CLumia_CImaging_CIAnimationFrameFactory_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 

#define __x_ABI_CLumia_CImaging_CIAnimationFrameFactory_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 


#define __x_ABI_CLumia_CImaging_CIAnimationFrameFactory_Create(This,imageSource,__returnValue)	\
    ( (This)->lpVtbl -> Create(This,imageSource,__returnValue) ) 

#define __x_ABI_CLumia_CImaging_CIAnimationFrameFactory_CreateWithDuration(This,imageSource,duration,__returnValue)	\
    ( (This)->lpVtbl -> CreateWithDuration(This,imageSource,duration,__returnValue) ) 

#define __x_ABI_CLumia_CImaging_CIAnimationFrameFactory_CreateWithDurationAndPosition(This,imageSource,duration,position,__returnValue)	\
    ( (This)->lpVtbl -> CreateWithDurationAndPosition(This,imageSource,duration,position,__returnValue) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* ____x_ABI_CLumia_CImaging_CIAnimationFrameFactory_INTERFACE_DEFINED__ */


/* interface __MIDL_itf_Lumia2EImaging_0000_0074 */
/* [local] */ 

#if !defined(____x_ABI_CLumia_CImaging_CIAutoResizeConfiguration_INTERFACE_DEFINED__)
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Lumia_Imaging_IAutoResizeConfiguration[] = L"Lumia.Imaging.IAutoResizeConfiguration";
#endif /* !defined(____x_ABI_CLumia_CImaging_CIAutoResizeConfiguration_INTERFACE_DEFINED__) */


/* interface __MIDL_itf_Lumia2EImaging_0000_0074 */
/* [local] */ 



extern RPC_IF_HANDLE __MIDL_itf_Lumia2EImaging_0000_0074_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_Lumia2EImaging_0000_0074_v0_0_s_ifspec;

#ifndef ____x_ABI_CLumia_CImaging_CIAutoResizeConfiguration_INTERFACE_DEFINED__
#define ____x_ABI_CLumia_CImaging_CIAutoResizeConfiguration_INTERFACE_DEFINED__

/* interface __x_ABI_CLumia_CImaging_CIAutoResizeConfiguration */
/* [uuid][object] */ 



/* interface ABI::Lumia::Imaging::IAutoResizeConfiguration */
/* [uuid][object] */ 


EXTERN_C const IID IID___x_ABI_CLumia_CImaging_CIAutoResizeConfiguration;

#if defined(__cplusplus) && !defined(CINTERFACE)
    } /* end extern "C" */
    namespace ABI {
        namespace Lumia {
            namespace Imaging {
                
                MIDL_INTERFACE("2951FFAB-22EE-3096-9B1F-38387B714D5E")
                IAutoResizeConfiguration : public IInspectable
                {
                public:
                    virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_MaxBufferSize( 
                        /* [out][retval] */ __RPC__out UINT32 *__returnValue) = 0;
                    
                    virtual /* [propput] */ HRESULT STDMETHODCALLTYPE put_MaxBufferSize( 
                        /* [in] */ UINT32 maxBufferSize) = 0;
                    
                    virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_MaxImageSize( 
                        /* [out][retval] */ __RPC__out ABI::Windows::Foundation::Size *__returnValue) = 0;
                    
                    virtual /* [propput] */ HRESULT STDMETHODCALLTYPE put_MaxImageSize( 
                        /* [in] */ ABI::Windows::Foundation::Size maxImageSize) = 0;
                    
                    virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_MinImageSize( 
                        /* [out][retval] */ __RPC__out ABI::Windows::Foundation::Size *__returnValue) = 0;
                    
                    virtual /* [propput] */ HRESULT STDMETHODCALLTYPE put_MinImageSize( 
                        /* [in] */ ABI::Windows::Foundation::Size minImageSize) = 0;
                    
                    virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_ResizeMode( 
                        /* [out][retval] */ __RPC__out ABI::Lumia::Imaging::AutoResizeMode *__returnValue) = 0;
                    
                    virtual /* [propput] */ HRESULT STDMETHODCALLTYPE put_ResizeMode( 
                        /* [in] */ ABI::Lumia::Imaging::AutoResizeMode resizeMode) = 0;
                    
                    virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_MinEncodingQuality( 
                        /* [out][retval] */ __RPC__out DOUBLE *__returnValue) = 0;
                    
                    virtual /* [propput] */ HRESULT STDMETHODCALLTYPE put_MinEncodingQuality( 
                        /* [in] */ DOUBLE minEncodingQuality) = 0;
                    
                    virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_ColorSpacing( 
                        /* [out][retval] */ __RPC__out ABI::Lumia::Imaging::ColorSpace *__returnValue) = 0;
                    
                    virtual /* [propput] */ HRESULT STDMETHODCALLTYPE put_ColorSpacing( 
                        /* [in] */ ABI::Lumia::Imaging::ColorSpace colorSpace) = 0;
                    
                };

                extern const __declspec(selectany) IID & IID_IAutoResizeConfiguration = __uuidof(IAutoResizeConfiguration);

                
            }  /* end namespace */
        }  /* end namespace */
    }  /* end namespace */
    extern "C" { 
    
#else 	/* C style interface */

    typedef struct __x_ABI_CLumia_CImaging_CIAutoResizeConfigurationVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            __RPC__in __x_ABI_CLumia_CImaging_CIAutoResizeConfiguration * This,
            /* [in] */ __RPC__in REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            __RPC__in __x_ABI_CLumia_CImaging_CIAutoResizeConfiguration * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            __RPC__in __x_ABI_CLumia_CImaging_CIAutoResizeConfiguration * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetIids )( 
            __RPC__in __x_ABI_CLumia_CImaging_CIAutoResizeConfiguration * This,
            /* [out] */ __RPC__out ULONG *iidCount,
            /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
        
        HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )( 
            __RPC__in __x_ABI_CLumia_CImaging_CIAutoResizeConfiguration * This,
            /* [out] */ __RPC__deref_out_opt HSTRING *className);
        
        HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )( 
            __RPC__in __x_ABI_CLumia_CImaging_CIAutoResizeConfiguration * This,
            /* [out] */ __RPC__out TrustLevel *trustLevel);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_MaxBufferSize )( 
            __RPC__in __x_ABI_CLumia_CImaging_CIAutoResizeConfiguration * This,
            /* [out][retval] */ __RPC__out UINT32 *__returnValue);
        
        /* [propput] */ HRESULT ( STDMETHODCALLTYPE *put_MaxBufferSize )( 
            __RPC__in __x_ABI_CLumia_CImaging_CIAutoResizeConfiguration * This,
            /* [in] */ UINT32 maxBufferSize);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_MaxImageSize )( 
            __RPC__in __x_ABI_CLumia_CImaging_CIAutoResizeConfiguration * This,
            /* [out][retval] */ __RPC__out __x_ABI_CWindows_CFoundation_CSize *__returnValue);
        
        /* [propput] */ HRESULT ( STDMETHODCALLTYPE *put_MaxImageSize )( 
            __RPC__in __x_ABI_CLumia_CImaging_CIAutoResizeConfiguration * This,
            /* [in] */ __x_ABI_CWindows_CFoundation_CSize maxImageSize);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_MinImageSize )( 
            __RPC__in __x_ABI_CLumia_CImaging_CIAutoResizeConfiguration * This,
            /* [out][retval] */ __RPC__out __x_ABI_CWindows_CFoundation_CSize *__returnValue);
        
        /* [propput] */ HRESULT ( STDMETHODCALLTYPE *put_MinImageSize )( 
            __RPC__in __x_ABI_CLumia_CImaging_CIAutoResizeConfiguration * This,
            /* [in] */ __x_ABI_CWindows_CFoundation_CSize minImageSize);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_ResizeMode )( 
            __RPC__in __x_ABI_CLumia_CImaging_CIAutoResizeConfiguration * This,
            /* [out][retval] */ __RPC__out __x_ABI_CLumia_CImaging_CAutoResizeMode *__returnValue);
        
        /* [propput] */ HRESULT ( STDMETHODCALLTYPE *put_ResizeMode )( 
            __RPC__in __x_ABI_CLumia_CImaging_CIAutoResizeConfiguration * This,
            /* [in] */ __x_ABI_CLumia_CImaging_CAutoResizeMode resizeMode);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_MinEncodingQuality )( 
            __RPC__in __x_ABI_CLumia_CImaging_CIAutoResizeConfiguration * This,
            /* [out][retval] */ __RPC__out DOUBLE *__returnValue);
        
        /* [propput] */ HRESULT ( STDMETHODCALLTYPE *put_MinEncodingQuality )( 
            __RPC__in __x_ABI_CLumia_CImaging_CIAutoResizeConfiguration * This,
            /* [in] */ DOUBLE minEncodingQuality);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_ColorSpacing )( 
            __RPC__in __x_ABI_CLumia_CImaging_CIAutoResizeConfiguration * This,
            /* [out][retval] */ __RPC__out __x_ABI_CLumia_CImaging_CColorSpace *__returnValue);
        
        /* [propput] */ HRESULT ( STDMETHODCALLTYPE *put_ColorSpacing )( 
            __RPC__in __x_ABI_CLumia_CImaging_CIAutoResizeConfiguration * This,
            /* [in] */ __x_ABI_CLumia_CImaging_CColorSpace colorSpace);
        
        END_INTERFACE
    } __x_ABI_CLumia_CImaging_CIAutoResizeConfigurationVtbl;

    interface __x_ABI_CLumia_CImaging_CIAutoResizeConfiguration
    {
        CONST_VTBL struct __x_ABI_CLumia_CImaging_CIAutoResizeConfigurationVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define __x_ABI_CLumia_CImaging_CIAutoResizeConfiguration_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __x_ABI_CLumia_CImaging_CIAutoResizeConfiguration_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __x_ABI_CLumia_CImaging_CIAutoResizeConfiguration_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __x_ABI_CLumia_CImaging_CIAutoResizeConfiguration_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 

#define __x_ABI_CLumia_CImaging_CIAutoResizeConfiguration_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 

#define __x_ABI_CLumia_CImaging_CIAutoResizeConfiguration_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 


#define __x_ABI_CLumia_CImaging_CIAutoResizeConfiguration_get_MaxBufferSize(This,__returnValue)	\
    ( (This)->lpVtbl -> get_MaxBufferSize(This,__returnValue) ) 

#define __x_ABI_CLumia_CImaging_CIAutoResizeConfiguration_put_MaxBufferSize(This,maxBufferSize)	\
    ( (This)->lpVtbl -> put_MaxBufferSize(This,maxBufferSize) ) 

#define __x_ABI_CLumia_CImaging_CIAutoResizeConfiguration_get_MaxImageSize(This,__returnValue)	\
    ( (This)->lpVtbl -> get_MaxImageSize(This,__returnValue) ) 

#define __x_ABI_CLumia_CImaging_CIAutoResizeConfiguration_put_MaxImageSize(This,maxImageSize)	\
    ( (This)->lpVtbl -> put_MaxImageSize(This,maxImageSize) ) 

#define __x_ABI_CLumia_CImaging_CIAutoResizeConfiguration_get_MinImageSize(This,__returnValue)	\
    ( (This)->lpVtbl -> get_MinImageSize(This,__returnValue) ) 

#define __x_ABI_CLumia_CImaging_CIAutoResizeConfiguration_put_MinImageSize(This,minImageSize)	\
    ( (This)->lpVtbl -> put_MinImageSize(This,minImageSize) ) 

#define __x_ABI_CLumia_CImaging_CIAutoResizeConfiguration_get_ResizeMode(This,__returnValue)	\
    ( (This)->lpVtbl -> get_ResizeMode(This,__returnValue) ) 

#define __x_ABI_CLumia_CImaging_CIAutoResizeConfiguration_put_ResizeMode(This,resizeMode)	\
    ( (This)->lpVtbl -> put_ResizeMode(This,resizeMode) ) 

#define __x_ABI_CLumia_CImaging_CIAutoResizeConfiguration_get_MinEncodingQuality(This,__returnValue)	\
    ( (This)->lpVtbl -> get_MinEncodingQuality(This,__returnValue) ) 

#define __x_ABI_CLumia_CImaging_CIAutoResizeConfiguration_put_MinEncodingQuality(This,minEncodingQuality)	\
    ( (This)->lpVtbl -> put_MinEncodingQuality(This,minEncodingQuality) ) 

#define __x_ABI_CLumia_CImaging_CIAutoResizeConfiguration_get_ColorSpacing(This,__returnValue)	\
    ( (This)->lpVtbl -> get_ColorSpacing(This,__returnValue) ) 

#define __x_ABI_CLumia_CImaging_CIAutoResizeConfiguration_put_ColorSpacing(This,colorSpace)	\
    ( (This)->lpVtbl -> put_ColorSpacing(This,colorSpace) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* ____x_ABI_CLumia_CImaging_CIAutoResizeConfiguration_INTERFACE_DEFINED__ */


/* interface __MIDL_itf_Lumia2EImaging_0000_0075 */
/* [local] */ 

#if !defined(____x_ABI_CLumia_CImaging_CIAutoResizeConfigurationFactory_INTERFACE_DEFINED__)
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Lumia_Imaging_IAutoResizeConfigurationFactory[] = L"Lumia.Imaging.IAutoResizeConfigurationFactory";
#endif /* !defined(____x_ABI_CLumia_CImaging_CIAutoResizeConfigurationFactory_INTERFACE_DEFINED__) */


/* interface __MIDL_itf_Lumia2EImaging_0000_0075 */
/* [local] */ 



extern RPC_IF_HANDLE __MIDL_itf_Lumia2EImaging_0000_0075_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_Lumia2EImaging_0000_0075_v0_0_s_ifspec;

#ifndef ____x_ABI_CLumia_CImaging_CIAutoResizeConfigurationFactory_INTERFACE_DEFINED__
#define ____x_ABI_CLumia_CImaging_CIAutoResizeConfigurationFactory_INTERFACE_DEFINED__

/* interface __x_ABI_CLumia_CImaging_CIAutoResizeConfigurationFactory */
/* [uuid][object] */ 



/* interface ABI::Lumia::Imaging::IAutoResizeConfigurationFactory */
/* [uuid][object] */ 


EXTERN_C const IID IID___x_ABI_CLumia_CImaging_CIAutoResizeConfigurationFactory;

#if defined(__cplusplus) && !defined(CINTERFACE)
    } /* end extern "C" */
    namespace ABI {
        namespace Lumia {
            namespace Imaging {
                
                MIDL_INTERFACE("EB7D6F46-3FED-3DCC-B8FA-C414FBF5CBF1")
                IAutoResizeConfigurationFactory : public IInspectable
                {
                public:
                    virtual HRESULT STDMETHODCALLTYPE CreateWithSettings( 
                        /* [in] */ UINT32 maxBufferSize,
                        /* [in] */ ABI::Windows::Foundation::Size maxImageSize,
                        /* [in] */ ABI::Windows::Foundation::Size minImageSize,
                        /* [in] */ ABI::Lumia::Imaging::AutoResizeMode resizeMode,
                        /* [in] */ DOUBLE minEncodingQuality,
                        /* [in] */ ABI::Lumia::Imaging::ColorSpace colorSpacing,
                        /* [out][retval] */ __RPC__deref_out_opt ABI::Lumia::Imaging::IAutoResizeConfiguration **__returnValue) = 0;
                    
                };

                extern const __declspec(selectany) IID & IID_IAutoResizeConfigurationFactory = __uuidof(IAutoResizeConfigurationFactory);

                
            }  /* end namespace */
        }  /* end namespace */
    }  /* end namespace */
    extern "C" { 
    
#else 	/* C style interface */

    typedef struct __x_ABI_CLumia_CImaging_CIAutoResizeConfigurationFactoryVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            __RPC__in __x_ABI_CLumia_CImaging_CIAutoResizeConfigurationFactory * This,
            /* [in] */ __RPC__in REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            __RPC__in __x_ABI_CLumia_CImaging_CIAutoResizeConfigurationFactory * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            __RPC__in __x_ABI_CLumia_CImaging_CIAutoResizeConfigurationFactory * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetIids )( 
            __RPC__in __x_ABI_CLumia_CImaging_CIAutoResizeConfigurationFactory * This,
            /* [out] */ __RPC__out ULONG *iidCount,
            /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
        
        HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )( 
            __RPC__in __x_ABI_CLumia_CImaging_CIAutoResizeConfigurationFactory * This,
            /* [out] */ __RPC__deref_out_opt HSTRING *className);
        
        HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )( 
            __RPC__in __x_ABI_CLumia_CImaging_CIAutoResizeConfigurationFactory * This,
            /* [out] */ __RPC__out TrustLevel *trustLevel);
        
        HRESULT ( STDMETHODCALLTYPE *CreateWithSettings )( 
            __RPC__in __x_ABI_CLumia_CImaging_CIAutoResizeConfigurationFactory * This,
            /* [in] */ UINT32 maxBufferSize,
            /* [in] */ __x_ABI_CWindows_CFoundation_CSize maxImageSize,
            /* [in] */ __x_ABI_CWindows_CFoundation_CSize minImageSize,
            /* [in] */ __x_ABI_CLumia_CImaging_CAutoResizeMode resizeMode,
            /* [in] */ DOUBLE minEncodingQuality,
            /* [in] */ __x_ABI_CLumia_CImaging_CColorSpace colorSpacing,
            /* [out][retval] */ __RPC__deref_out_opt __x_ABI_CLumia_CImaging_CIAutoResizeConfiguration **__returnValue);
        
        END_INTERFACE
    } __x_ABI_CLumia_CImaging_CIAutoResizeConfigurationFactoryVtbl;

    interface __x_ABI_CLumia_CImaging_CIAutoResizeConfigurationFactory
    {
        CONST_VTBL struct __x_ABI_CLumia_CImaging_CIAutoResizeConfigurationFactoryVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define __x_ABI_CLumia_CImaging_CIAutoResizeConfigurationFactory_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __x_ABI_CLumia_CImaging_CIAutoResizeConfigurationFactory_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __x_ABI_CLumia_CImaging_CIAutoResizeConfigurationFactory_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __x_ABI_CLumia_CImaging_CIAutoResizeConfigurationFactory_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 

#define __x_ABI_CLumia_CImaging_CIAutoResizeConfigurationFactory_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 

#define __x_ABI_CLumia_CImaging_CIAutoResizeConfigurationFactory_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 


#define __x_ABI_CLumia_CImaging_CIAutoResizeConfigurationFactory_CreateWithSettings(This,maxBufferSize,maxImageSize,minImageSize,resizeMode,minEncodingQuality,colorSpacing,__returnValue)	\
    ( (This)->lpVtbl -> CreateWithSettings(This,maxBufferSize,maxImageSize,minImageSize,resizeMode,minEncodingQuality,colorSpacing,__returnValue) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* ____x_ABI_CLumia_CImaging_CIAutoResizeConfigurationFactory_INTERFACE_DEFINED__ */


/* interface __MIDL_itf_Lumia2EImaging_0000_0076 */
/* [local] */ 

#if !defined(____x_ABI_CLumia_CImaging_CIColorModeDescriptor_INTERFACE_DEFINED__)
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Lumia_Imaging_IColorModeDescriptor[] = L"Lumia.Imaging.IColorModeDescriptor";
#endif /* !defined(____x_ABI_CLumia_CImaging_CIColorModeDescriptor_INTERFACE_DEFINED__) */


/* interface __MIDL_itf_Lumia2EImaging_0000_0076 */
/* [local] */ 



extern RPC_IF_HANDLE __MIDL_itf_Lumia2EImaging_0000_0076_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_Lumia2EImaging_0000_0076_v0_0_s_ifspec;

#ifndef ____x_ABI_CLumia_CImaging_CIColorModeDescriptor_INTERFACE_DEFINED__
#define ____x_ABI_CLumia_CImaging_CIColorModeDescriptor_INTERFACE_DEFINED__

/* interface __x_ABI_CLumia_CImaging_CIColorModeDescriptor */
/* [uuid][object] */ 



/* interface ABI::Lumia::Imaging::IColorModeDescriptor */
/* [uuid][object] */ 


EXTERN_C const IID IID___x_ABI_CLumia_CImaging_CIColorModeDescriptor;

#if defined(__cplusplus) && !defined(CINTERFACE)
    } /* end extern "C" */
    namespace ABI {
        namespace Lumia {
            namespace Imaging {
                
                MIDL_INTERFACE("E0F06EF0-0C19-3FCB-8EC4-6624D8FEB72E")
                IColorModeDescriptor : public IInspectable
                {
                public:
                    virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_BitsPerPixel( 
                        /* [out][retval] */ __RPC__out INT32 *__returnValue) = 0;
                    
                    virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_BytesPerPixel( 
                        /* [out][retval] */ __RPC__out INT32 *__returnValue) = 0;
                    
                    virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_PlaneDescriptors( 
                        /* [out][retval] */ __RPC__deref_out_opt __FIVectorView_1_Lumia__CImaging__CColorPlaneDescriptor **__returnValue) = 0;
                    
                };

                extern const __declspec(selectany) IID & IID_IColorModeDescriptor = __uuidof(IColorModeDescriptor);

                
            }  /* end namespace */
        }  /* end namespace */
    }  /* end namespace */
    extern "C" { 
    
#else 	/* C style interface */

    typedef struct __x_ABI_CLumia_CImaging_CIColorModeDescriptorVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            __RPC__in __x_ABI_CLumia_CImaging_CIColorModeDescriptor * This,
            /* [in] */ __RPC__in REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            __RPC__in __x_ABI_CLumia_CImaging_CIColorModeDescriptor * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            __RPC__in __x_ABI_CLumia_CImaging_CIColorModeDescriptor * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetIids )( 
            __RPC__in __x_ABI_CLumia_CImaging_CIColorModeDescriptor * This,
            /* [out] */ __RPC__out ULONG *iidCount,
            /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
        
        HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )( 
            __RPC__in __x_ABI_CLumia_CImaging_CIColorModeDescriptor * This,
            /* [out] */ __RPC__deref_out_opt HSTRING *className);
        
        HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )( 
            __RPC__in __x_ABI_CLumia_CImaging_CIColorModeDescriptor * This,
            /* [out] */ __RPC__out TrustLevel *trustLevel);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_BitsPerPixel )( 
            __RPC__in __x_ABI_CLumia_CImaging_CIColorModeDescriptor * This,
            /* [out][retval] */ __RPC__out INT32 *__returnValue);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_BytesPerPixel )( 
            __RPC__in __x_ABI_CLumia_CImaging_CIColorModeDescriptor * This,
            /* [out][retval] */ __RPC__out INT32 *__returnValue);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_PlaneDescriptors )( 
            __RPC__in __x_ABI_CLumia_CImaging_CIColorModeDescriptor * This,
            /* [out][retval] */ __RPC__deref_out_opt __FIVectorView_1_Lumia__CImaging__CColorPlaneDescriptor **__returnValue);
        
        END_INTERFACE
    } __x_ABI_CLumia_CImaging_CIColorModeDescriptorVtbl;

    interface __x_ABI_CLumia_CImaging_CIColorModeDescriptor
    {
        CONST_VTBL struct __x_ABI_CLumia_CImaging_CIColorModeDescriptorVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define __x_ABI_CLumia_CImaging_CIColorModeDescriptor_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __x_ABI_CLumia_CImaging_CIColorModeDescriptor_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __x_ABI_CLumia_CImaging_CIColorModeDescriptor_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __x_ABI_CLumia_CImaging_CIColorModeDescriptor_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 

#define __x_ABI_CLumia_CImaging_CIColorModeDescriptor_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 

#define __x_ABI_CLumia_CImaging_CIColorModeDescriptor_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 


#define __x_ABI_CLumia_CImaging_CIColorModeDescriptor_get_BitsPerPixel(This,__returnValue)	\
    ( (This)->lpVtbl -> get_BitsPerPixel(This,__returnValue) ) 

#define __x_ABI_CLumia_CImaging_CIColorModeDescriptor_get_BytesPerPixel(This,__returnValue)	\
    ( (This)->lpVtbl -> get_BytesPerPixel(This,__returnValue) ) 

#define __x_ABI_CLumia_CImaging_CIColorModeDescriptor_get_PlaneDescriptors(This,__returnValue)	\
    ( (This)->lpVtbl -> get_PlaneDescriptors(This,__returnValue) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* ____x_ABI_CLumia_CImaging_CIColorModeDescriptor_INTERFACE_DEFINED__ */


/* interface __MIDL_itf_Lumia2EImaging_0000_0077 */
/* [local] */ 

#if !defined(____x_ABI_CLumia_CImaging_CIColorModeDescriptorFactory_INTERFACE_DEFINED__)
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Lumia_Imaging_IColorModeDescriptorFactory[] = L"Lumia.Imaging.IColorModeDescriptorFactory";
#endif /* !defined(____x_ABI_CLumia_CImaging_CIColorModeDescriptorFactory_INTERFACE_DEFINED__) */


/* interface __MIDL_itf_Lumia2EImaging_0000_0077 */
/* [local] */ 



extern RPC_IF_HANDLE __MIDL_itf_Lumia2EImaging_0000_0077_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_Lumia2EImaging_0000_0077_v0_0_s_ifspec;

#ifndef ____x_ABI_CLumia_CImaging_CIColorModeDescriptorFactory_INTERFACE_DEFINED__
#define ____x_ABI_CLumia_CImaging_CIColorModeDescriptorFactory_INTERFACE_DEFINED__

/* interface __x_ABI_CLumia_CImaging_CIColorModeDescriptorFactory */
/* [uuid][object] */ 



/* interface ABI::Lumia::Imaging::IColorModeDescriptorFactory */
/* [uuid][object] */ 


EXTERN_C const IID IID___x_ABI_CLumia_CImaging_CIColorModeDescriptorFactory;

#if defined(__cplusplus) && !defined(CINTERFACE)
    } /* end extern "C" */
    namespace ABI {
        namespace Lumia {
            namespace Imaging {
                
                MIDL_INTERFACE("E184B648-517C-398E-BE62-BD78AF0281C6")
                IColorModeDescriptorFactory : public IInspectable
                {
                public:
                    virtual HRESULT STDMETHODCALLTYPE Create( 
                        /* [in] */ ABI::Lumia::Imaging::ColorMode colorMode,
                        /* [out][retval] */ __RPC__deref_out_opt ABI::Lumia::Imaging::IColorModeDescriptor **__returnValue) = 0;
                    
                };

                extern const __declspec(selectany) IID & IID_IColorModeDescriptorFactory = __uuidof(IColorModeDescriptorFactory);

                
            }  /* end namespace */
        }  /* end namespace */
    }  /* end namespace */
    extern "C" { 
    
#else 	/* C style interface */

    typedef struct __x_ABI_CLumia_CImaging_CIColorModeDescriptorFactoryVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            __RPC__in __x_ABI_CLumia_CImaging_CIColorModeDescriptorFactory * This,
            /* [in] */ __RPC__in REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            __RPC__in __x_ABI_CLumia_CImaging_CIColorModeDescriptorFactory * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            __RPC__in __x_ABI_CLumia_CImaging_CIColorModeDescriptorFactory * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetIids )( 
            __RPC__in __x_ABI_CLumia_CImaging_CIColorModeDescriptorFactory * This,
            /* [out] */ __RPC__out ULONG *iidCount,
            /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
        
        HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )( 
            __RPC__in __x_ABI_CLumia_CImaging_CIColorModeDescriptorFactory * This,
            /* [out] */ __RPC__deref_out_opt HSTRING *className);
        
        HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )( 
            __RPC__in __x_ABI_CLumia_CImaging_CIColorModeDescriptorFactory * This,
            /* [out] */ __RPC__out TrustLevel *trustLevel);
        
        HRESULT ( STDMETHODCALLTYPE *Create )( 
            __RPC__in __x_ABI_CLumia_CImaging_CIColorModeDescriptorFactory * This,
            /* [in] */ __x_ABI_CLumia_CImaging_CColorMode colorMode,
            /* [out][retval] */ __RPC__deref_out_opt __x_ABI_CLumia_CImaging_CIColorModeDescriptor **__returnValue);
        
        END_INTERFACE
    } __x_ABI_CLumia_CImaging_CIColorModeDescriptorFactoryVtbl;

    interface __x_ABI_CLumia_CImaging_CIColorModeDescriptorFactory
    {
        CONST_VTBL struct __x_ABI_CLumia_CImaging_CIColorModeDescriptorFactoryVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define __x_ABI_CLumia_CImaging_CIColorModeDescriptorFactory_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __x_ABI_CLumia_CImaging_CIColorModeDescriptorFactory_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __x_ABI_CLumia_CImaging_CIColorModeDescriptorFactory_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __x_ABI_CLumia_CImaging_CIColorModeDescriptorFactory_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 

#define __x_ABI_CLumia_CImaging_CIColorModeDescriptorFactory_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 

#define __x_ABI_CLumia_CImaging_CIColorModeDescriptorFactory_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 


#define __x_ABI_CLumia_CImaging_CIColorModeDescriptorFactory_Create(This,colorMode,__returnValue)	\
    ( (This)->lpVtbl -> Create(This,colorMode,__returnValue) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* ____x_ABI_CLumia_CImaging_CIColorModeDescriptorFactory_INTERFACE_DEFINED__ */


/* interface __MIDL_itf_Lumia2EImaging_0000_0078 */
/* [local] */ 

#if !defined(____x_ABI_CLumia_CImaging_CIColorPlaneDescriptor_INTERFACE_DEFINED__)
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Lumia_Imaging_IColorPlaneDescriptor[] = L"Lumia.Imaging.IColorPlaneDescriptor";
#endif /* !defined(____x_ABI_CLumia_CImaging_CIColorPlaneDescriptor_INTERFACE_DEFINED__) */


/* interface __MIDL_itf_Lumia2EImaging_0000_0078 */
/* [local] */ 



extern RPC_IF_HANDLE __MIDL_itf_Lumia2EImaging_0000_0078_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_Lumia2EImaging_0000_0078_v0_0_s_ifspec;

#ifndef ____x_ABI_CLumia_CImaging_CIColorPlaneDescriptor_INTERFACE_DEFINED__
#define ____x_ABI_CLumia_CImaging_CIColorPlaneDescriptor_INTERFACE_DEFINED__

/* interface __x_ABI_CLumia_CImaging_CIColorPlaneDescriptor */
/* [uuid][object] */ 



/* interface ABI::Lumia::Imaging::IColorPlaneDescriptor */
/* [uuid][object] */ 


EXTERN_C const IID IID___x_ABI_CLumia_CImaging_CIColorPlaneDescriptor;

#if defined(__cplusplus) && !defined(CINTERFACE)
    } /* end extern "C" */
    namespace ABI {
        namespace Lumia {
            namespace Imaging {
                
                MIDL_INTERFACE("C9B8AD03-18D2-34AB-8FC3-1631DE946B1D")
                IColorPlaneDescriptor : public IInspectable
                {
                public:
                    virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_ColorMode( 
                        /* [out][retval] */ __RPC__out ABI::Lumia::Imaging::ColorMode *__returnValue) = 0;
                    
                    virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_BitsPerSample( 
                        /* [out][retval] */ __RPC__out INT32 *__returnValue) = 0;
                    
                    virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_BytesPerSample( 
                        /* [out][retval] */ __RPC__out INT32 *__returnValue) = 0;
                    
                    virtual HRESULT STDMETHODCALLTYPE GetSize( 
                        /* [in] */ ABI::Windows::Foundation::Size imageSize,
                        /* [out][retval] */ __RPC__out ABI::Windows::Foundation::Size *__returnValue) = 0;
                    
                };

                extern const __declspec(selectany) IID & IID_IColorPlaneDescriptor = __uuidof(IColorPlaneDescriptor);

                
            }  /* end namespace */
        }  /* end namespace */
    }  /* end namespace */
    extern "C" { 
    
#else 	/* C style interface */

    typedef struct __x_ABI_CLumia_CImaging_CIColorPlaneDescriptorVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            __RPC__in __x_ABI_CLumia_CImaging_CIColorPlaneDescriptor * This,
            /* [in] */ __RPC__in REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            __RPC__in __x_ABI_CLumia_CImaging_CIColorPlaneDescriptor * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            __RPC__in __x_ABI_CLumia_CImaging_CIColorPlaneDescriptor * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetIids )( 
            __RPC__in __x_ABI_CLumia_CImaging_CIColorPlaneDescriptor * This,
            /* [out] */ __RPC__out ULONG *iidCount,
            /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
        
        HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )( 
            __RPC__in __x_ABI_CLumia_CImaging_CIColorPlaneDescriptor * This,
            /* [out] */ __RPC__deref_out_opt HSTRING *className);
        
        HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )( 
            __RPC__in __x_ABI_CLumia_CImaging_CIColorPlaneDescriptor * This,
            /* [out] */ __RPC__out TrustLevel *trustLevel);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_ColorMode )( 
            __RPC__in __x_ABI_CLumia_CImaging_CIColorPlaneDescriptor * This,
            /* [out][retval] */ __RPC__out __x_ABI_CLumia_CImaging_CColorMode *__returnValue);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_BitsPerSample )( 
            __RPC__in __x_ABI_CLumia_CImaging_CIColorPlaneDescriptor * This,
            /* [out][retval] */ __RPC__out INT32 *__returnValue);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_BytesPerSample )( 
            __RPC__in __x_ABI_CLumia_CImaging_CIColorPlaneDescriptor * This,
            /* [out][retval] */ __RPC__out INT32 *__returnValue);
        
        HRESULT ( STDMETHODCALLTYPE *GetSize )( 
            __RPC__in __x_ABI_CLumia_CImaging_CIColorPlaneDescriptor * This,
            /* [in] */ __x_ABI_CWindows_CFoundation_CSize imageSize,
            /* [out][retval] */ __RPC__out __x_ABI_CWindows_CFoundation_CSize *__returnValue);
        
        END_INTERFACE
    } __x_ABI_CLumia_CImaging_CIColorPlaneDescriptorVtbl;

    interface __x_ABI_CLumia_CImaging_CIColorPlaneDescriptor
    {
        CONST_VTBL struct __x_ABI_CLumia_CImaging_CIColorPlaneDescriptorVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define __x_ABI_CLumia_CImaging_CIColorPlaneDescriptor_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __x_ABI_CLumia_CImaging_CIColorPlaneDescriptor_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __x_ABI_CLumia_CImaging_CIColorPlaneDescriptor_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __x_ABI_CLumia_CImaging_CIColorPlaneDescriptor_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 

#define __x_ABI_CLumia_CImaging_CIColorPlaneDescriptor_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 

#define __x_ABI_CLumia_CImaging_CIColorPlaneDescriptor_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 


#define __x_ABI_CLumia_CImaging_CIColorPlaneDescriptor_get_ColorMode(This,__returnValue)	\
    ( (This)->lpVtbl -> get_ColorMode(This,__returnValue) ) 

#define __x_ABI_CLumia_CImaging_CIColorPlaneDescriptor_get_BitsPerSample(This,__returnValue)	\
    ( (This)->lpVtbl -> get_BitsPerSample(This,__returnValue) ) 

#define __x_ABI_CLumia_CImaging_CIColorPlaneDescriptor_get_BytesPerSample(This,__returnValue)	\
    ( (This)->lpVtbl -> get_BytesPerSample(This,__returnValue) ) 

#define __x_ABI_CLumia_CImaging_CIColorPlaneDescriptor_GetSize(This,imageSize,__returnValue)	\
    ( (This)->lpVtbl -> GetSize(This,imageSize,__returnValue) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* ____x_ABI_CLumia_CImaging_CIColorPlaneDescriptor_INTERFACE_DEFINED__ */


/* interface __MIDL_itf_Lumia2EImaging_0000_0079 */
/* [local] */ 

#if !defined(____x_ABI_CLumia_CImaging_CIImageSize_INTERFACE_DEFINED__)
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Lumia_Imaging_IImageSize[] = L"Lumia.Imaging.IImageSize";
#endif /* !defined(____x_ABI_CLumia_CImaging_CIImageSize_INTERFACE_DEFINED__) */


/* interface __MIDL_itf_Lumia2EImaging_0000_0079 */
/* [local] */ 



extern RPC_IF_HANDLE __MIDL_itf_Lumia2EImaging_0000_0079_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_Lumia2EImaging_0000_0079_v0_0_s_ifspec;

#ifndef ____x_ABI_CLumia_CImaging_CIImageSize_INTERFACE_DEFINED__
#define ____x_ABI_CLumia_CImaging_CIImageSize_INTERFACE_DEFINED__

/* interface __x_ABI_CLumia_CImaging_CIImageSize */
/* [uuid][object] */ 



/* interface ABI::Lumia::Imaging::IImageSize */
/* [uuid][object] */ 


EXTERN_C const IID IID___x_ABI_CLumia_CImaging_CIImageSize;

#if defined(__cplusplus) && !defined(CINTERFACE)
    } /* end extern "C" */
    namespace ABI {
        namespace Lumia {
            namespace Imaging {
                
                MIDL_INTERFACE("F92FF97F-2B7B-33AC-BDED-FB931C574B9C")
                IImageSize : public IInspectable
                {
                public:
                    virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_Size( 
                        /* [out][retval] */ __RPC__out ABI::Windows::Foundation::Size *__returnValue) = 0;
                    
                    virtual /* [propput] */ HRESULT STDMETHODCALLTYPE put_Size( 
                        /* [in] */ ABI::Windows::Foundation::Size size) = 0;
                    
                    virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_CanSetSize( 
                        /* [out][retval] */ __RPC__out boolean *__returnValue) = 0;
                    
                };

                extern const __declspec(selectany) IID & IID_IImageSize = __uuidof(IImageSize);

                
            }  /* end namespace */
        }  /* end namespace */
    }  /* end namespace */
    extern "C" { 
    
#else 	/* C style interface */

    typedef struct __x_ABI_CLumia_CImaging_CIImageSizeVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            __RPC__in __x_ABI_CLumia_CImaging_CIImageSize * This,
            /* [in] */ __RPC__in REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            __RPC__in __x_ABI_CLumia_CImaging_CIImageSize * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            __RPC__in __x_ABI_CLumia_CImaging_CIImageSize * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetIids )( 
            __RPC__in __x_ABI_CLumia_CImaging_CIImageSize * This,
            /* [out] */ __RPC__out ULONG *iidCount,
            /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
        
        HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )( 
            __RPC__in __x_ABI_CLumia_CImaging_CIImageSize * This,
            /* [out] */ __RPC__deref_out_opt HSTRING *className);
        
        HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )( 
            __RPC__in __x_ABI_CLumia_CImaging_CIImageSize * This,
            /* [out] */ __RPC__out TrustLevel *trustLevel);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_Size )( 
            __RPC__in __x_ABI_CLumia_CImaging_CIImageSize * This,
            /* [out][retval] */ __RPC__out __x_ABI_CWindows_CFoundation_CSize *__returnValue);
        
        /* [propput] */ HRESULT ( STDMETHODCALLTYPE *put_Size )( 
            __RPC__in __x_ABI_CLumia_CImaging_CIImageSize * This,
            /* [in] */ __x_ABI_CWindows_CFoundation_CSize size);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_CanSetSize )( 
            __RPC__in __x_ABI_CLumia_CImaging_CIImageSize * This,
            /* [out][retval] */ __RPC__out boolean *__returnValue);
        
        END_INTERFACE
    } __x_ABI_CLumia_CImaging_CIImageSizeVtbl;

    interface __x_ABI_CLumia_CImaging_CIImageSize
    {
        CONST_VTBL struct __x_ABI_CLumia_CImaging_CIImageSizeVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define __x_ABI_CLumia_CImaging_CIImageSize_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __x_ABI_CLumia_CImaging_CIImageSize_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __x_ABI_CLumia_CImaging_CIImageSize_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __x_ABI_CLumia_CImaging_CIImageSize_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 

#define __x_ABI_CLumia_CImaging_CIImageSize_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 

#define __x_ABI_CLumia_CImaging_CIImageSize_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 


#define __x_ABI_CLumia_CImaging_CIImageSize_get_Size(This,__returnValue)	\
    ( (This)->lpVtbl -> get_Size(This,__returnValue) ) 

#define __x_ABI_CLumia_CImaging_CIImageSize_put_Size(This,size)	\
    ( (This)->lpVtbl -> put_Size(This,size) ) 

#define __x_ABI_CLumia_CImaging_CIImageSize_get_CanSetSize(This,__returnValue)	\
    ( (This)->lpVtbl -> get_CanSetSize(This,__returnValue) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* ____x_ABI_CLumia_CImaging_CIImageSize_INTERFACE_DEFINED__ */


/* interface __MIDL_itf_Lumia2EImaging_0000_0080 */
/* [local] */ 

#if !defined(____x_ABI_CLumia_CImaging_CIBitmapImageSource_INTERFACE_DEFINED__)
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Lumia_Imaging_IBitmapImageSource[] = L"Lumia.Imaging.IBitmapImageSource";
#endif /* !defined(____x_ABI_CLumia_CImaging_CIBitmapImageSource_INTERFACE_DEFINED__) */


/* interface __MIDL_itf_Lumia2EImaging_0000_0080 */
/* [local] */ 



extern RPC_IF_HANDLE __MIDL_itf_Lumia2EImaging_0000_0080_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_Lumia2EImaging_0000_0080_v0_0_s_ifspec;

#ifndef ____x_ABI_CLumia_CImaging_CIBitmapImageSource_INTERFACE_DEFINED__
#define ____x_ABI_CLumia_CImaging_CIBitmapImageSource_INTERFACE_DEFINED__

/* interface __x_ABI_CLumia_CImaging_CIBitmapImageSource */
/* [uuid][object] */ 



/* interface ABI::Lumia::Imaging::IBitmapImageSource */
/* [uuid][object] */ 


EXTERN_C const IID IID___x_ABI_CLumia_CImaging_CIBitmapImageSource;

#if defined(__cplusplus) && !defined(CINTERFACE)
    } /* end extern "C" */
    namespace ABI {
        namespace Lumia {
            namespace Imaging {
                
                MIDL_INTERFACE("AF533BCB-8D7B-36B1-9213-EB586AA96471")
                IBitmapImageSource : public IInspectable
                {
                public:
                    virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_Bitmap( 
                        /* [out][retval] */ __RPC__deref_out_opt ABI::Lumia::Imaging::IReadableBitmap **__returnValue) = 0;
                    
                    virtual /* [propput] */ HRESULT STDMETHODCALLTYPE put_Bitmap( 
                        /* [in] */ __RPC__in_opt ABI::Lumia::Imaging::IReadableBitmap *value) = 0;
                    
                    virtual HRESULT STDMETHODCALLTYPE Invalidate( void) = 0;
                    
                };

                extern const __declspec(selectany) IID & IID_IBitmapImageSource = __uuidof(IBitmapImageSource);

                
            }  /* end namespace */
        }  /* end namespace */
    }  /* end namespace */
    extern "C" { 
    
#else 	/* C style interface */

    typedef struct __x_ABI_CLumia_CImaging_CIBitmapImageSourceVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            __RPC__in __x_ABI_CLumia_CImaging_CIBitmapImageSource * This,
            /* [in] */ __RPC__in REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            __RPC__in __x_ABI_CLumia_CImaging_CIBitmapImageSource * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            __RPC__in __x_ABI_CLumia_CImaging_CIBitmapImageSource * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetIids )( 
            __RPC__in __x_ABI_CLumia_CImaging_CIBitmapImageSource * This,
            /* [out] */ __RPC__out ULONG *iidCount,
            /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
        
        HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )( 
            __RPC__in __x_ABI_CLumia_CImaging_CIBitmapImageSource * This,
            /* [out] */ __RPC__deref_out_opt HSTRING *className);
        
        HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )( 
            __RPC__in __x_ABI_CLumia_CImaging_CIBitmapImageSource * This,
            /* [out] */ __RPC__out TrustLevel *trustLevel);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_Bitmap )( 
            __RPC__in __x_ABI_CLumia_CImaging_CIBitmapImageSource * This,
            /* [out][retval] */ __RPC__deref_out_opt __x_ABI_CLumia_CImaging_CIReadableBitmap **__returnValue);
        
        /* [propput] */ HRESULT ( STDMETHODCALLTYPE *put_Bitmap )( 
            __RPC__in __x_ABI_CLumia_CImaging_CIBitmapImageSource * This,
            /* [in] */ __RPC__in_opt __x_ABI_CLumia_CImaging_CIReadableBitmap *value);
        
        HRESULT ( STDMETHODCALLTYPE *Invalidate )( 
            __RPC__in __x_ABI_CLumia_CImaging_CIBitmapImageSource * This);
        
        END_INTERFACE
    } __x_ABI_CLumia_CImaging_CIBitmapImageSourceVtbl;

    interface __x_ABI_CLumia_CImaging_CIBitmapImageSource
    {
        CONST_VTBL struct __x_ABI_CLumia_CImaging_CIBitmapImageSourceVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define __x_ABI_CLumia_CImaging_CIBitmapImageSource_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __x_ABI_CLumia_CImaging_CIBitmapImageSource_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __x_ABI_CLumia_CImaging_CIBitmapImageSource_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __x_ABI_CLumia_CImaging_CIBitmapImageSource_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 

#define __x_ABI_CLumia_CImaging_CIBitmapImageSource_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 

#define __x_ABI_CLumia_CImaging_CIBitmapImageSource_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 


#define __x_ABI_CLumia_CImaging_CIBitmapImageSource_get_Bitmap(This,__returnValue)	\
    ( (This)->lpVtbl -> get_Bitmap(This,__returnValue) ) 

#define __x_ABI_CLumia_CImaging_CIBitmapImageSource_put_Bitmap(This,value)	\
    ( (This)->lpVtbl -> put_Bitmap(This,value) ) 

#define __x_ABI_CLumia_CImaging_CIBitmapImageSource_Invalidate(This)	\
    ( (This)->lpVtbl -> Invalidate(This) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* ____x_ABI_CLumia_CImaging_CIBitmapImageSource_INTERFACE_DEFINED__ */


/* interface __MIDL_itf_Lumia2EImaging_0000_0081 */
/* [local] */ 

#if !defined(____x_ABI_CLumia_CImaging_CIBitmapImageSourceFactory_INTERFACE_DEFINED__)
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Lumia_Imaging_IBitmapImageSourceFactory[] = L"Lumia.Imaging.IBitmapImageSourceFactory";
#endif /* !defined(____x_ABI_CLumia_CImaging_CIBitmapImageSourceFactory_INTERFACE_DEFINED__) */


/* interface __MIDL_itf_Lumia2EImaging_0000_0081 */
/* [local] */ 



extern RPC_IF_HANDLE __MIDL_itf_Lumia2EImaging_0000_0081_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_Lumia2EImaging_0000_0081_v0_0_s_ifspec;

#ifndef ____x_ABI_CLumia_CImaging_CIBitmapImageSourceFactory_INTERFACE_DEFINED__
#define ____x_ABI_CLumia_CImaging_CIBitmapImageSourceFactory_INTERFACE_DEFINED__

/* interface __x_ABI_CLumia_CImaging_CIBitmapImageSourceFactory */
/* [uuid][object] */ 



/* interface ABI::Lumia::Imaging::IBitmapImageSourceFactory */
/* [uuid][object] */ 


EXTERN_C const IID IID___x_ABI_CLumia_CImaging_CIBitmapImageSourceFactory;

#if defined(__cplusplus) && !defined(CINTERFACE)
    } /* end extern "C" */
    namespace ABI {
        namespace Lumia {
            namespace Imaging {
                
                MIDL_INTERFACE("D4F69192-B242-3591-9A8E-03DD846BD0B1")
                IBitmapImageSourceFactory : public IInspectable
                {
                public:
                    virtual HRESULT STDMETHODCALLTYPE Create( 
                        /* [in] */ __RPC__in_opt ABI::Lumia::Imaging::IReadableBitmap *bitmap,
                        /* [out][retval] */ __RPC__deref_out_opt ABI::Lumia::Imaging::IBitmapImageSource **__returnValue) = 0;
                    
                };

                extern const __declspec(selectany) IID & IID_IBitmapImageSourceFactory = __uuidof(IBitmapImageSourceFactory);

                
            }  /* end namespace */
        }  /* end namespace */
    }  /* end namespace */
    extern "C" { 
    
#else 	/* C style interface */

    typedef struct __x_ABI_CLumia_CImaging_CIBitmapImageSourceFactoryVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            __RPC__in __x_ABI_CLumia_CImaging_CIBitmapImageSourceFactory * This,
            /* [in] */ __RPC__in REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            __RPC__in __x_ABI_CLumia_CImaging_CIBitmapImageSourceFactory * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            __RPC__in __x_ABI_CLumia_CImaging_CIBitmapImageSourceFactory * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetIids )( 
            __RPC__in __x_ABI_CLumia_CImaging_CIBitmapImageSourceFactory * This,
            /* [out] */ __RPC__out ULONG *iidCount,
            /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
        
        HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )( 
            __RPC__in __x_ABI_CLumia_CImaging_CIBitmapImageSourceFactory * This,
            /* [out] */ __RPC__deref_out_opt HSTRING *className);
        
        HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )( 
            __RPC__in __x_ABI_CLumia_CImaging_CIBitmapImageSourceFactory * This,
            /* [out] */ __RPC__out TrustLevel *trustLevel);
        
        HRESULT ( STDMETHODCALLTYPE *Create )( 
            __RPC__in __x_ABI_CLumia_CImaging_CIBitmapImageSourceFactory * This,
            /* [in] */ __RPC__in_opt __x_ABI_CLumia_CImaging_CIReadableBitmap *bitmap,
            /* [out][retval] */ __RPC__deref_out_opt __x_ABI_CLumia_CImaging_CIBitmapImageSource **__returnValue);
        
        END_INTERFACE
    } __x_ABI_CLumia_CImaging_CIBitmapImageSourceFactoryVtbl;

    interface __x_ABI_CLumia_CImaging_CIBitmapImageSourceFactory
    {
        CONST_VTBL struct __x_ABI_CLumia_CImaging_CIBitmapImageSourceFactoryVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define __x_ABI_CLumia_CImaging_CIBitmapImageSourceFactory_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __x_ABI_CLumia_CImaging_CIBitmapImageSourceFactory_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __x_ABI_CLumia_CImaging_CIBitmapImageSourceFactory_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __x_ABI_CLumia_CImaging_CIBitmapImageSourceFactory_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 

#define __x_ABI_CLumia_CImaging_CIBitmapImageSourceFactory_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 

#define __x_ABI_CLumia_CImaging_CIBitmapImageSourceFactory_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 


#define __x_ABI_CLumia_CImaging_CIBitmapImageSourceFactory_Create(This,bitmap,__returnValue)	\
    ( (This)->lpVtbl -> Create(This,bitmap,__returnValue) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* ____x_ABI_CLumia_CImaging_CIBitmapImageSourceFactory_INTERFACE_DEFINED__ */


/* interface __MIDL_itf_Lumia2EImaging_0000_0082 */
/* [local] */ 

#if !defined(____x_ABI_CLumia_CImaging_CIBitmapProviderImageSource_INTERFACE_DEFINED__)
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Lumia_Imaging_IBitmapProviderImageSource[] = L"Lumia.Imaging.IBitmapProviderImageSource";
#endif /* !defined(____x_ABI_CLumia_CImaging_CIBitmapProviderImageSource_INTERFACE_DEFINED__) */


/* interface __MIDL_itf_Lumia2EImaging_0000_0082 */
/* [local] */ 



extern RPC_IF_HANDLE __MIDL_itf_Lumia2EImaging_0000_0082_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_Lumia2EImaging_0000_0082_v0_0_s_ifspec;

#ifndef ____x_ABI_CLumia_CImaging_CIBitmapProviderImageSource_INTERFACE_DEFINED__
#define ____x_ABI_CLumia_CImaging_CIBitmapProviderImageSource_INTERFACE_DEFINED__

/* interface __x_ABI_CLumia_CImaging_CIBitmapProviderImageSource */
/* [uuid][object] */ 



/* interface ABI::Lumia::Imaging::IBitmapProviderImageSource */
/* [uuid][object] */ 


EXTERN_C const IID IID___x_ABI_CLumia_CImaging_CIBitmapProviderImageSource;

#if defined(__cplusplus) && !defined(CINTERFACE)
    } /* end extern "C" */
    namespace ABI {
        namespace Lumia {
            namespace Imaging {
                
                MIDL_INTERFACE("EBCA5203-EFE2-3F6C-8263-358AA5796AAA")
                IBitmapProviderImageSource : public IInspectable
                {
                public:
                    virtual HRESULT STDMETHODCALLTYPE Invalidate( void) = 0;
                    
                };

                extern const __declspec(selectany) IID & IID_IBitmapProviderImageSource = __uuidof(IBitmapProviderImageSource);

                
            }  /* end namespace */
        }  /* end namespace */
    }  /* end namespace */
    extern "C" { 
    
#else 	/* C style interface */

    typedef struct __x_ABI_CLumia_CImaging_CIBitmapProviderImageSourceVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            __RPC__in __x_ABI_CLumia_CImaging_CIBitmapProviderImageSource * This,
            /* [in] */ __RPC__in REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            __RPC__in __x_ABI_CLumia_CImaging_CIBitmapProviderImageSource * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            __RPC__in __x_ABI_CLumia_CImaging_CIBitmapProviderImageSource * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetIids )( 
            __RPC__in __x_ABI_CLumia_CImaging_CIBitmapProviderImageSource * This,
            /* [out] */ __RPC__out ULONG *iidCount,
            /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
        
        HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )( 
            __RPC__in __x_ABI_CLumia_CImaging_CIBitmapProviderImageSource * This,
            /* [out] */ __RPC__deref_out_opt HSTRING *className);
        
        HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )( 
            __RPC__in __x_ABI_CLumia_CImaging_CIBitmapProviderImageSource * This,
            /* [out] */ __RPC__out TrustLevel *trustLevel);
        
        HRESULT ( STDMETHODCALLTYPE *Invalidate )( 
            __RPC__in __x_ABI_CLumia_CImaging_CIBitmapProviderImageSource * This);
        
        END_INTERFACE
    } __x_ABI_CLumia_CImaging_CIBitmapProviderImageSourceVtbl;

    interface __x_ABI_CLumia_CImaging_CIBitmapProviderImageSource
    {
        CONST_VTBL struct __x_ABI_CLumia_CImaging_CIBitmapProviderImageSourceVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define __x_ABI_CLumia_CImaging_CIBitmapProviderImageSource_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __x_ABI_CLumia_CImaging_CIBitmapProviderImageSource_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __x_ABI_CLumia_CImaging_CIBitmapProviderImageSource_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __x_ABI_CLumia_CImaging_CIBitmapProviderImageSource_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 

#define __x_ABI_CLumia_CImaging_CIBitmapProviderImageSource_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 

#define __x_ABI_CLumia_CImaging_CIBitmapProviderImageSource_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 


#define __x_ABI_CLumia_CImaging_CIBitmapProviderImageSource_Invalidate(This)	\
    ( (This)->lpVtbl -> Invalidate(This) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* ____x_ABI_CLumia_CImaging_CIBitmapProviderImageSource_INTERFACE_DEFINED__ */


/* interface __MIDL_itf_Lumia2EImaging_0000_0083 */
/* [local] */ 

#if !defined(____x_ABI_CLumia_CImaging_CIBitmapProviderImageSourceFactory_INTERFACE_DEFINED__)
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Lumia_Imaging_IBitmapProviderImageSourceFactory[] = L"Lumia.Imaging.IBitmapProviderImageSourceFactory";
#endif /* !defined(____x_ABI_CLumia_CImaging_CIBitmapProviderImageSourceFactory_INTERFACE_DEFINED__) */


/* interface __MIDL_itf_Lumia2EImaging_0000_0083 */
/* [local] */ 



extern RPC_IF_HANDLE __MIDL_itf_Lumia2EImaging_0000_0083_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_Lumia2EImaging_0000_0083_v0_0_s_ifspec;

#ifndef ____x_ABI_CLumia_CImaging_CIBitmapProviderImageSourceFactory_INTERFACE_DEFINED__
#define ____x_ABI_CLumia_CImaging_CIBitmapProviderImageSourceFactory_INTERFACE_DEFINED__

/* interface __x_ABI_CLumia_CImaging_CIBitmapProviderImageSourceFactory */
/* [uuid][object] */ 



/* interface ABI::Lumia::Imaging::IBitmapProviderImageSourceFactory */
/* [uuid][object] */ 


EXTERN_C const IID IID___x_ABI_CLumia_CImaging_CIBitmapProviderImageSourceFactory;

#if defined(__cplusplus) && !defined(CINTERFACE)
    } /* end extern "C" */
    namespace ABI {
        namespace Lumia {
            namespace Imaging {
                
                MIDL_INTERFACE("31C1577D-C69A-3D82-A414-DE554A31B276")
                IBitmapProviderImageSourceFactory : public IInspectable
                {
                public:
                    virtual HRESULT STDMETHODCALLTYPE Create( 
                        /* [in] */ __RPC__in_opt ABI::Lumia::Imaging::IReadableBitmapProvider *readableBitmapProvider,
                        /* [out][retval] */ __RPC__deref_out_opt ABI::Lumia::Imaging::IBitmapProviderImageSource **__returnValue) = 0;
                    
                };

                extern const __declspec(selectany) IID & IID_IBitmapProviderImageSourceFactory = __uuidof(IBitmapProviderImageSourceFactory);

                
            }  /* end namespace */
        }  /* end namespace */
    }  /* end namespace */
    extern "C" { 
    
#else 	/* C style interface */

    typedef struct __x_ABI_CLumia_CImaging_CIBitmapProviderImageSourceFactoryVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            __RPC__in __x_ABI_CLumia_CImaging_CIBitmapProviderImageSourceFactory * This,
            /* [in] */ __RPC__in REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            __RPC__in __x_ABI_CLumia_CImaging_CIBitmapProviderImageSourceFactory * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            __RPC__in __x_ABI_CLumia_CImaging_CIBitmapProviderImageSourceFactory * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetIids )( 
            __RPC__in __x_ABI_CLumia_CImaging_CIBitmapProviderImageSourceFactory * This,
            /* [out] */ __RPC__out ULONG *iidCount,
            /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
        
        HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )( 
            __RPC__in __x_ABI_CLumia_CImaging_CIBitmapProviderImageSourceFactory * This,
            /* [out] */ __RPC__deref_out_opt HSTRING *className);
        
        HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )( 
            __RPC__in __x_ABI_CLumia_CImaging_CIBitmapProviderImageSourceFactory * This,
            /* [out] */ __RPC__out TrustLevel *trustLevel);
        
        HRESULT ( STDMETHODCALLTYPE *Create )( 
            __RPC__in __x_ABI_CLumia_CImaging_CIBitmapProviderImageSourceFactory * This,
            /* [in] */ __RPC__in_opt __x_ABI_CLumia_CImaging_CIReadableBitmapProvider *readableBitmapProvider,
            /* [out][retval] */ __RPC__deref_out_opt __x_ABI_CLumia_CImaging_CIBitmapProviderImageSource **__returnValue);
        
        END_INTERFACE
    } __x_ABI_CLumia_CImaging_CIBitmapProviderImageSourceFactoryVtbl;

    interface __x_ABI_CLumia_CImaging_CIBitmapProviderImageSourceFactory
    {
        CONST_VTBL struct __x_ABI_CLumia_CImaging_CIBitmapProviderImageSourceFactoryVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define __x_ABI_CLumia_CImaging_CIBitmapProviderImageSourceFactory_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __x_ABI_CLumia_CImaging_CIBitmapProviderImageSourceFactory_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __x_ABI_CLumia_CImaging_CIBitmapProviderImageSourceFactory_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __x_ABI_CLumia_CImaging_CIBitmapProviderImageSourceFactory_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 

#define __x_ABI_CLumia_CImaging_CIBitmapProviderImageSourceFactory_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 

#define __x_ABI_CLumia_CImaging_CIBitmapProviderImageSourceFactory_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 


#define __x_ABI_CLumia_CImaging_CIBitmapProviderImageSourceFactory_Create(This,readableBitmapProvider,__returnValue)	\
    ( (This)->lpVtbl -> Create(This,readableBitmapProvider,__returnValue) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* ____x_ABI_CLumia_CImaging_CIBitmapProviderImageSourceFactory_INTERFACE_DEFINED__ */


/* interface __MIDL_itf_Lumia2EImaging_0000_0084 */
/* [local] */ 

#if !defined(____x_ABI_CLumia_CImaging_CIReadableBitmapProvider_INTERFACE_DEFINED__)
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Lumia_Imaging_IReadableBitmapProvider[] = L"Lumia.Imaging.IReadableBitmapProvider";
#endif /* !defined(____x_ABI_CLumia_CImaging_CIReadableBitmapProvider_INTERFACE_DEFINED__) */


/* interface __MIDL_itf_Lumia2EImaging_0000_0084 */
/* [local] */ 



extern RPC_IF_HANDLE __MIDL_itf_Lumia2EImaging_0000_0084_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_Lumia2EImaging_0000_0084_v0_0_s_ifspec;

#ifndef ____x_ABI_CLumia_CImaging_CIReadableBitmapProvider_INTERFACE_DEFINED__
#define ____x_ABI_CLumia_CImaging_CIReadableBitmapProvider_INTERFACE_DEFINED__

/* interface __x_ABI_CLumia_CImaging_CIReadableBitmapProvider */
/* [uuid][object] */ 



/* interface ABI::Lumia::Imaging::IReadableBitmapProvider */
/* [uuid][object] */ 


EXTERN_C const IID IID___x_ABI_CLumia_CImaging_CIReadableBitmapProvider;

#if defined(__cplusplus) && !defined(CINTERFACE)
    } /* end extern "C" */
    namespace ABI {
        namespace Lumia {
            namespace Imaging {
                
                MIDL_INTERFACE("38633070-6FC8-37FC-8F57-06C1C7F188B8")
                IReadableBitmapProvider : public IInspectable
                {
                public:
                    virtual HRESULT STDMETHODCALLTYPE GetAsync( 
                        /* [out][retval] */ __RPC__deref_out_opt __FIAsyncOperation_1_Lumia__CImaging__CIReadableBitmap **__returnValue) = 0;
                    
                };

                extern const __declspec(selectany) IID & IID_IReadableBitmapProvider = __uuidof(IReadableBitmapProvider);

                
            }  /* end namespace */
        }  /* end namespace */
    }  /* end namespace */
    extern "C" { 
    
#else 	/* C style interface */

    typedef struct __x_ABI_CLumia_CImaging_CIReadableBitmapProviderVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            __RPC__in __x_ABI_CLumia_CImaging_CIReadableBitmapProvider * This,
            /* [in] */ __RPC__in REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            __RPC__in __x_ABI_CLumia_CImaging_CIReadableBitmapProvider * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            __RPC__in __x_ABI_CLumia_CImaging_CIReadableBitmapProvider * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetIids )( 
            __RPC__in __x_ABI_CLumia_CImaging_CIReadableBitmapProvider * This,
            /* [out] */ __RPC__out ULONG *iidCount,
            /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
        
        HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )( 
            __RPC__in __x_ABI_CLumia_CImaging_CIReadableBitmapProvider * This,
            /* [out] */ __RPC__deref_out_opt HSTRING *className);
        
        HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )( 
            __RPC__in __x_ABI_CLumia_CImaging_CIReadableBitmapProvider * This,
            /* [out] */ __RPC__out TrustLevel *trustLevel);
        
        HRESULT ( STDMETHODCALLTYPE *GetAsync )( 
            __RPC__in __x_ABI_CLumia_CImaging_CIReadableBitmapProvider * This,
            /* [out][retval] */ __RPC__deref_out_opt __FIAsyncOperation_1_Lumia__CImaging__CIReadableBitmap **__returnValue);
        
        END_INTERFACE
    } __x_ABI_CLumia_CImaging_CIReadableBitmapProviderVtbl;

    interface __x_ABI_CLumia_CImaging_CIReadableBitmapProvider
    {
        CONST_VTBL struct __x_ABI_CLumia_CImaging_CIReadableBitmapProviderVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define __x_ABI_CLumia_CImaging_CIReadableBitmapProvider_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __x_ABI_CLumia_CImaging_CIReadableBitmapProvider_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __x_ABI_CLumia_CImaging_CIReadableBitmapProvider_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __x_ABI_CLumia_CImaging_CIReadableBitmapProvider_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 

#define __x_ABI_CLumia_CImaging_CIReadableBitmapProvider_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 

#define __x_ABI_CLumia_CImaging_CIReadableBitmapProvider_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 


#define __x_ABI_CLumia_CImaging_CIReadableBitmapProvider_GetAsync(This,__returnValue)	\
    ( (This)->lpVtbl -> GetAsync(This,__returnValue) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* ____x_ABI_CLumia_CImaging_CIReadableBitmapProvider_INTERFACE_DEFINED__ */


/* interface __MIDL_itf_Lumia2EImaging_0000_0085 */
/* [local] */ 

#if !defined(____x_ABI_CLumia_CImaging_CIBitmapRenderer_INTERFACE_DEFINED__)
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Lumia_Imaging_IBitmapRenderer[] = L"Lumia.Imaging.IBitmapRenderer";
#endif /* !defined(____x_ABI_CLumia_CImaging_CIBitmapRenderer_INTERFACE_DEFINED__) */


/* interface __MIDL_itf_Lumia2EImaging_0000_0085 */
/* [local] */ 



extern RPC_IF_HANDLE __MIDL_itf_Lumia2EImaging_0000_0085_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_Lumia2EImaging_0000_0085_v0_0_s_ifspec;

#ifndef ____x_ABI_CLumia_CImaging_CIBitmapRenderer_INTERFACE_DEFINED__
#define ____x_ABI_CLumia_CImaging_CIBitmapRenderer_INTERFACE_DEFINED__

/* interface __x_ABI_CLumia_CImaging_CIBitmapRenderer */
/* [uuid][object] */ 



/* interface ABI::Lumia::Imaging::IBitmapRenderer */
/* [uuid][object] */ 


EXTERN_C const IID IID___x_ABI_CLumia_CImaging_CIBitmapRenderer;

#if defined(__cplusplus) && !defined(CINTERFACE)
    } /* end extern "C" */
    namespace ABI {
        namespace Lumia {
            namespace Imaging {
                
                MIDL_INTERFACE("E8028D24-38D1-3CB8-B55B-2560952847CB")
                IBitmapRenderer : public IInspectable
                {
                public:
                    virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_OutputOption( 
                        /* [out][retval] */ __RPC__out ABI::Lumia::Imaging::OutputOption *__returnValue) = 0;
                    
                    virtual /* [propput] */ HRESULT STDMETHODCALLTYPE put_OutputOption( 
                        /* [in] */ ABI::Lumia::Imaging::OutputOption outputOption) = 0;
                    
                    virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_Bitmap( 
                        /* [out][retval] */ __RPC__deref_out_opt ABI::Lumia::Imaging::IBitmap **__returnValue) = 0;
                    
                    virtual /* [propput] */ HRESULT STDMETHODCALLTYPE put_Bitmap( 
                        /* [in] */ __RPC__in_opt ABI::Lumia::Imaging::IBitmap *bitmap) = 0;
                    
                    virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_Size( 
                        /* [out][retval] */ __RPC__out ABI::Windows::Foundation::Size *__returnValue) = 0;
                    
                    virtual /* [propput] */ HRESULT STDMETHODCALLTYPE put_Size( 
                        /* [in] */ ABI::Windows::Foundation::Size size) = 0;
                    
                    virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_ColorMode( 
                        /* [out][retval] */ __RPC__out ABI::Lumia::Imaging::ColorMode *__returnValue) = 0;
                    
                    virtual /* [propput] */ HRESULT STDMETHODCALLTYPE put_ColorMode( 
                        /* [in] */ ABI::Lumia::Imaging::ColorMode colorMode) = 0;
                    
                    virtual HRESULT STDMETHODCALLTYPE RenderAsync( 
                        /* [out][retval] */ __RPC__deref_out_opt __FIAsyncOperation_1_Lumia__CImaging__CBitmap **__returnValue) = 0;
                    
                };

                extern const __declspec(selectany) IID & IID_IBitmapRenderer = __uuidof(IBitmapRenderer);

                
            }  /* end namespace */
        }  /* end namespace */
    }  /* end namespace */
    extern "C" { 
    
#else 	/* C style interface */

    typedef struct __x_ABI_CLumia_CImaging_CIBitmapRendererVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            __RPC__in __x_ABI_CLumia_CImaging_CIBitmapRenderer * This,
            /* [in] */ __RPC__in REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            __RPC__in __x_ABI_CLumia_CImaging_CIBitmapRenderer * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            __RPC__in __x_ABI_CLumia_CImaging_CIBitmapRenderer * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetIids )( 
            __RPC__in __x_ABI_CLumia_CImaging_CIBitmapRenderer * This,
            /* [out] */ __RPC__out ULONG *iidCount,
            /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
        
        HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )( 
            __RPC__in __x_ABI_CLumia_CImaging_CIBitmapRenderer * This,
            /* [out] */ __RPC__deref_out_opt HSTRING *className);
        
        HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )( 
            __RPC__in __x_ABI_CLumia_CImaging_CIBitmapRenderer * This,
            /* [out] */ __RPC__out TrustLevel *trustLevel);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_OutputOption )( 
            __RPC__in __x_ABI_CLumia_CImaging_CIBitmapRenderer * This,
            /* [out][retval] */ __RPC__out __x_ABI_CLumia_CImaging_COutputOption *__returnValue);
        
        /* [propput] */ HRESULT ( STDMETHODCALLTYPE *put_OutputOption )( 
            __RPC__in __x_ABI_CLumia_CImaging_CIBitmapRenderer * This,
            /* [in] */ __x_ABI_CLumia_CImaging_COutputOption outputOption);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_Bitmap )( 
            __RPC__in __x_ABI_CLumia_CImaging_CIBitmapRenderer * This,
            /* [out][retval] */ __RPC__deref_out_opt __x_ABI_CLumia_CImaging_CIBitmap **__returnValue);
        
        /* [propput] */ HRESULT ( STDMETHODCALLTYPE *put_Bitmap )( 
            __RPC__in __x_ABI_CLumia_CImaging_CIBitmapRenderer * This,
            /* [in] */ __RPC__in_opt __x_ABI_CLumia_CImaging_CIBitmap *bitmap);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_Size )( 
            __RPC__in __x_ABI_CLumia_CImaging_CIBitmapRenderer * This,
            /* [out][retval] */ __RPC__out __x_ABI_CWindows_CFoundation_CSize *__returnValue);
        
        /* [propput] */ HRESULT ( STDMETHODCALLTYPE *put_Size )( 
            __RPC__in __x_ABI_CLumia_CImaging_CIBitmapRenderer * This,
            /* [in] */ __x_ABI_CWindows_CFoundation_CSize size);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_ColorMode )( 
            __RPC__in __x_ABI_CLumia_CImaging_CIBitmapRenderer * This,
            /* [out][retval] */ __RPC__out __x_ABI_CLumia_CImaging_CColorMode *__returnValue);
        
        /* [propput] */ HRESULT ( STDMETHODCALLTYPE *put_ColorMode )( 
            __RPC__in __x_ABI_CLumia_CImaging_CIBitmapRenderer * This,
            /* [in] */ __x_ABI_CLumia_CImaging_CColorMode colorMode);
        
        HRESULT ( STDMETHODCALLTYPE *RenderAsync )( 
            __RPC__in __x_ABI_CLumia_CImaging_CIBitmapRenderer * This,
            /* [out][retval] */ __RPC__deref_out_opt __FIAsyncOperation_1_Lumia__CImaging__CBitmap **__returnValue);
        
        END_INTERFACE
    } __x_ABI_CLumia_CImaging_CIBitmapRendererVtbl;

    interface __x_ABI_CLumia_CImaging_CIBitmapRenderer
    {
        CONST_VTBL struct __x_ABI_CLumia_CImaging_CIBitmapRendererVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define __x_ABI_CLumia_CImaging_CIBitmapRenderer_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __x_ABI_CLumia_CImaging_CIBitmapRenderer_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __x_ABI_CLumia_CImaging_CIBitmapRenderer_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __x_ABI_CLumia_CImaging_CIBitmapRenderer_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 

#define __x_ABI_CLumia_CImaging_CIBitmapRenderer_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 

#define __x_ABI_CLumia_CImaging_CIBitmapRenderer_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 


#define __x_ABI_CLumia_CImaging_CIBitmapRenderer_get_OutputOption(This,__returnValue)	\
    ( (This)->lpVtbl -> get_OutputOption(This,__returnValue) ) 

#define __x_ABI_CLumia_CImaging_CIBitmapRenderer_put_OutputOption(This,outputOption)	\
    ( (This)->lpVtbl -> put_OutputOption(This,outputOption) ) 

#define __x_ABI_CLumia_CImaging_CIBitmapRenderer_get_Bitmap(This,__returnValue)	\
    ( (This)->lpVtbl -> get_Bitmap(This,__returnValue) ) 

#define __x_ABI_CLumia_CImaging_CIBitmapRenderer_put_Bitmap(This,bitmap)	\
    ( (This)->lpVtbl -> put_Bitmap(This,bitmap) ) 

#define __x_ABI_CLumia_CImaging_CIBitmapRenderer_get_Size(This,__returnValue)	\
    ( (This)->lpVtbl -> get_Size(This,__returnValue) ) 

#define __x_ABI_CLumia_CImaging_CIBitmapRenderer_put_Size(This,size)	\
    ( (This)->lpVtbl -> put_Size(This,size) ) 

#define __x_ABI_CLumia_CImaging_CIBitmapRenderer_get_ColorMode(This,__returnValue)	\
    ( (This)->lpVtbl -> get_ColorMode(This,__returnValue) ) 

#define __x_ABI_CLumia_CImaging_CIBitmapRenderer_put_ColorMode(This,colorMode)	\
    ( (This)->lpVtbl -> put_ColorMode(This,colorMode) ) 

#define __x_ABI_CLumia_CImaging_CIBitmapRenderer_RenderAsync(This,__returnValue)	\
    ( (This)->lpVtbl -> RenderAsync(This,__returnValue) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* ____x_ABI_CLumia_CImaging_CIBitmapRenderer_INTERFACE_DEFINED__ */


/* interface __MIDL_itf_Lumia2EImaging_0000_0086 */
/* [local] */ 

#if !defined(____x_ABI_CLumia_CImaging_CIBitmapRendererFactory_INTERFACE_DEFINED__)
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Lumia_Imaging_IBitmapRendererFactory[] = L"Lumia.Imaging.IBitmapRendererFactory";
#endif /* !defined(____x_ABI_CLumia_CImaging_CIBitmapRendererFactory_INTERFACE_DEFINED__) */


/* interface __MIDL_itf_Lumia2EImaging_0000_0086 */
/* [local] */ 



extern RPC_IF_HANDLE __MIDL_itf_Lumia2EImaging_0000_0086_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_Lumia2EImaging_0000_0086_v0_0_s_ifspec;

#ifndef ____x_ABI_CLumia_CImaging_CIBitmapRendererFactory_INTERFACE_DEFINED__
#define ____x_ABI_CLumia_CImaging_CIBitmapRendererFactory_INTERFACE_DEFINED__

/* interface __x_ABI_CLumia_CImaging_CIBitmapRendererFactory */
/* [uuid][object] */ 



/* interface ABI::Lumia::Imaging::IBitmapRendererFactory */
/* [uuid][object] */ 


EXTERN_C const IID IID___x_ABI_CLumia_CImaging_CIBitmapRendererFactory;

#if defined(__cplusplus) && !defined(CINTERFACE)
    } /* end extern "C" */
    namespace ABI {
        namespace Lumia {
            namespace Imaging {
                
                MIDL_INTERFACE("E422C18A-1B42-3630-91A0-972F51A833CF")
                IBitmapRendererFactory : public IInspectable
                {
                public:
                    virtual HRESULT STDMETHODCALLTYPE CreateWithSource( 
                        /* [in] */ __RPC__in_opt ABI::Lumia::Imaging::IImageProvider *imageSource,
                        /* [out][retval] */ __RPC__deref_out_opt ABI::Lumia::Imaging::IBitmapRenderer **__returnValue) = 0;
                    
                    virtual HRESULT STDMETHODCALLTYPE CreateWithSourceAndColorMode( 
                        /* [in] */ __RPC__in_opt ABI::Lumia::Imaging::IImageProvider *imageSource,
                        /* [in] */ ABI::Lumia::Imaging::ColorMode colorMode,
                        /* [out][retval] */ __RPC__deref_out_opt ABI::Lumia::Imaging::IBitmapRenderer **__returnValue) = 0;
                    
                    virtual HRESULT STDMETHODCALLTYPE CreateWithSourceAndBitmap( 
                        /* [in] */ __RPC__in_opt ABI::Lumia::Imaging::IImageProvider *imageSource,
                        /* [in] */ __RPC__in_opt ABI::Lumia::Imaging::IBitmap *bitmap,
                        /* [out][retval] */ __RPC__deref_out_opt ABI::Lumia::Imaging::IBitmapRenderer **__returnValue) = 0;
                    
                    virtual HRESULT STDMETHODCALLTYPE CreateWithSourceAndBitmapAndOutputOption( 
                        /* [in] */ __RPC__in_opt ABI::Lumia::Imaging::IImageProvider *imageSource,
                        /* [in] */ __RPC__in_opt ABI::Lumia::Imaging::IBitmap *bitmap,
                        /* [in] */ ABI::Lumia::Imaging::OutputOption outputOption,
                        /* [out][retval] */ __RPC__deref_out_opt ABI::Lumia::Imaging::IBitmapRenderer **__returnValue) = 0;
                    
                };

                extern const __declspec(selectany) IID & IID_IBitmapRendererFactory = __uuidof(IBitmapRendererFactory);

                
            }  /* end namespace */
        }  /* end namespace */
    }  /* end namespace */
    extern "C" { 
    
#else 	/* C style interface */

    typedef struct __x_ABI_CLumia_CImaging_CIBitmapRendererFactoryVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            __RPC__in __x_ABI_CLumia_CImaging_CIBitmapRendererFactory * This,
            /* [in] */ __RPC__in REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            __RPC__in __x_ABI_CLumia_CImaging_CIBitmapRendererFactory * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            __RPC__in __x_ABI_CLumia_CImaging_CIBitmapRendererFactory * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetIids )( 
            __RPC__in __x_ABI_CLumia_CImaging_CIBitmapRendererFactory * This,
            /* [out] */ __RPC__out ULONG *iidCount,
            /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
        
        HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )( 
            __RPC__in __x_ABI_CLumia_CImaging_CIBitmapRendererFactory * This,
            /* [out] */ __RPC__deref_out_opt HSTRING *className);
        
        HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )( 
            __RPC__in __x_ABI_CLumia_CImaging_CIBitmapRendererFactory * This,
            /* [out] */ __RPC__out TrustLevel *trustLevel);
        
        HRESULT ( STDMETHODCALLTYPE *CreateWithSource )( 
            __RPC__in __x_ABI_CLumia_CImaging_CIBitmapRendererFactory * This,
            /* [in] */ __RPC__in_opt __x_ABI_CLumia_CImaging_CIImageProvider *imageSource,
            /* [out][retval] */ __RPC__deref_out_opt __x_ABI_CLumia_CImaging_CIBitmapRenderer **__returnValue);
        
        HRESULT ( STDMETHODCALLTYPE *CreateWithSourceAndColorMode )( 
            __RPC__in __x_ABI_CLumia_CImaging_CIBitmapRendererFactory * This,
            /* [in] */ __RPC__in_opt __x_ABI_CLumia_CImaging_CIImageProvider *imageSource,
            /* [in] */ __x_ABI_CLumia_CImaging_CColorMode colorMode,
            /* [out][retval] */ __RPC__deref_out_opt __x_ABI_CLumia_CImaging_CIBitmapRenderer **__returnValue);
        
        HRESULT ( STDMETHODCALLTYPE *CreateWithSourceAndBitmap )( 
            __RPC__in __x_ABI_CLumia_CImaging_CIBitmapRendererFactory * This,
            /* [in] */ __RPC__in_opt __x_ABI_CLumia_CImaging_CIImageProvider *imageSource,
            /* [in] */ __RPC__in_opt __x_ABI_CLumia_CImaging_CIBitmap *bitmap,
            /* [out][retval] */ __RPC__deref_out_opt __x_ABI_CLumia_CImaging_CIBitmapRenderer **__returnValue);
        
        HRESULT ( STDMETHODCALLTYPE *CreateWithSourceAndBitmapAndOutputOption )( 
            __RPC__in __x_ABI_CLumia_CImaging_CIBitmapRendererFactory * This,
            /* [in] */ __RPC__in_opt __x_ABI_CLumia_CImaging_CIImageProvider *imageSource,
            /* [in] */ __RPC__in_opt __x_ABI_CLumia_CImaging_CIBitmap *bitmap,
            /* [in] */ __x_ABI_CLumia_CImaging_COutputOption outputOption,
            /* [out][retval] */ __RPC__deref_out_opt __x_ABI_CLumia_CImaging_CIBitmapRenderer **__returnValue);
        
        END_INTERFACE
    } __x_ABI_CLumia_CImaging_CIBitmapRendererFactoryVtbl;

    interface __x_ABI_CLumia_CImaging_CIBitmapRendererFactory
    {
        CONST_VTBL struct __x_ABI_CLumia_CImaging_CIBitmapRendererFactoryVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define __x_ABI_CLumia_CImaging_CIBitmapRendererFactory_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __x_ABI_CLumia_CImaging_CIBitmapRendererFactory_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __x_ABI_CLumia_CImaging_CIBitmapRendererFactory_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __x_ABI_CLumia_CImaging_CIBitmapRendererFactory_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 

#define __x_ABI_CLumia_CImaging_CIBitmapRendererFactory_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 

#define __x_ABI_CLumia_CImaging_CIBitmapRendererFactory_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 


#define __x_ABI_CLumia_CImaging_CIBitmapRendererFactory_CreateWithSource(This,imageSource,__returnValue)	\
    ( (This)->lpVtbl -> CreateWithSource(This,imageSource,__returnValue) ) 

#define __x_ABI_CLumia_CImaging_CIBitmapRendererFactory_CreateWithSourceAndColorMode(This,imageSource,colorMode,__returnValue)	\
    ( (This)->lpVtbl -> CreateWithSourceAndColorMode(This,imageSource,colorMode,__returnValue) ) 

#define __x_ABI_CLumia_CImaging_CIBitmapRendererFactory_CreateWithSourceAndBitmap(This,imageSource,bitmap,__returnValue)	\
    ( (This)->lpVtbl -> CreateWithSourceAndBitmap(This,imageSource,bitmap,__returnValue) ) 

#define __x_ABI_CLumia_CImaging_CIBitmapRendererFactory_CreateWithSourceAndBitmapAndOutputOption(This,imageSource,bitmap,outputOption,__returnValue)	\
    ( (This)->lpVtbl -> CreateWithSourceAndBitmapAndOutputOption(This,imageSource,bitmap,outputOption,__returnValue) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* ____x_ABI_CLumia_CImaging_CIBitmapRendererFactory_INTERFACE_DEFINED__ */


/* interface __MIDL_itf_Lumia2EImaging_0000_0087 */
/* [local] */ 

#if !defined(____x_ABI_CLumia_CImaging_CIDiagnosticsReport_INTERFACE_DEFINED__)
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Lumia_Imaging_IDiagnosticsReport[] = L"Lumia.Imaging.IDiagnosticsReport";
#endif /* !defined(____x_ABI_CLumia_CImaging_CIDiagnosticsReport_INTERFACE_DEFINED__) */


/* interface __MIDL_itf_Lumia2EImaging_0000_0087 */
/* [local] */ 



extern RPC_IF_HANDLE __MIDL_itf_Lumia2EImaging_0000_0087_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_Lumia2EImaging_0000_0087_v0_0_s_ifspec;

#ifndef ____x_ABI_CLumia_CImaging_CIDiagnosticsReport_INTERFACE_DEFINED__
#define ____x_ABI_CLumia_CImaging_CIDiagnosticsReport_INTERFACE_DEFINED__

/* interface __x_ABI_CLumia_CImaging_CIDiagnosticsReport */
/* [uuid][object] */ 



/* interface ABI::Lumia::Imaging::IDiagnosticsReport */
/* [uuid][object] */ 


EXTERN_C const IID IID___x_ABI_CLumia_CImaging_CIDiagnosticsReport;

#if defined(__cplusplus) && !defined(CINTERFACE)
    } /* end extern "C" */
    namespace ABI {
        namespace Lumia {
            namespace Imaging {
                
                MIDL_INTERFACE("2B717B72-82BF-3603-8C79-1E619B7258D2")
                IDiagnosticsReport : public IInspectable
                {
                public:
                    virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_Properties( 
                        /* [out][retval] */ __RPC__deref_out_opt ABI::Windows::Foundation::Collections::IPropertySet **__returnValue) = 0;
                    
                    virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_Text( 
                        /* [out][retval] */ __RPC__deref_out_opt HSTRING *__returnValue) = 0;
                    
                };

                extern const __declspec(selectany) IID & IID_IDiagnosticsReport = __uuidof(IDiagnosticsReport);

                
            }  /* end namespace */
        }  /* end namespace */
    }  /* end namespace */
    extern "C" { 
    
#else 	/* C style interface */

    typedef struct __x_ABI_CLumia_CImaging_CIDiagnosticsReportVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            __RPC__in __x_ABI_CLumia_CImaging_CIDiagnosticsReport * This,
            /* [in] */ __RPC__in REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            __RPC__in __x_ABI_CLumia_CImaging_CIDiagnosticsReport * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            __RPC__in __x_ABI_CLumia_CImaging_CIDiagnosticsReport * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetIids )( 
            __RPC__in __x_ABI_CLumia_CImaging_CIDiagnosticsReport * This,
            /* [out] */ __RPC__out ULONG *iidCount,
            /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
        
        HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )( 
            __RPC__in __x_ABI_CLumia_CImaging_CIDiagnosticsReport * This,
            /* [out] */ __RPC__deref_out_opt HSTRING *className);
        
        HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )( 
            __RPC__in __x_ABI_CLumia_CImaging_CIDiagnosticsReport * This,
            /* [out] */ __RPC__out TrustLevel *trustLevel);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_Properties )( 
            __RPC__in __x_ABI_CLumia_CImaging_CIDiagnosticsReport * This,
            /* [out][retval] */ __RPC__deref_out_opt __x_ABI_CWindows_CFoundation_CCollections_CIPropertySet **__returnValue);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_Text )( 
            __RPC__in __x_ABI_CLumia_CImaging_CIDiagnosticsReport * This,
            /* [out][retval] */ __RPC__deref_out_opt HSTRING *__returnValue);
        
        END_INTERFACE
    } __x_ABI_CLumia_CImaging_CIDiagnosticsReportVtbl;

    interface __x_ABI_CLumia_CImaging_CIDiagnosticsReport
    {
        CONST_VTBL struct __x_ABI_CLumia_CImaging_CIDiagnosticsReportVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define __x_ABI_CLumia_CImaging_CIDiagnosticsReport_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __x_ABI_CLumia_CImaging_CIDiagnosticsReport_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __x_ABI_CLumia_CImaging_CIDiagnosticsReport_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __x_ABI_CLumia_CImaging_CIDiagnosticsReport_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 

#define __x_ABI_CLumia_CImaging_CIDiagnosticsReport_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 

#define __x_ABI_CLumia_CImaging_CIDiagnosticsReport_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 


#define __x_ABI_CLumia_CImaging_CIDiagnosticsReport_get_Properties(This,__returnValue)	\
    ( (This)->lpVtbl -> get_Properties(This,__returnValue) ) 

#define __x_ABI_CLumia_CImaging_CIDiagnosticsReport_get_Text(This,__returnValue)	\
    ( (This)->lpVtbl -> get_Text(This,__returnValue) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* ____x_ABI_CLumia_CImaging_CIDiagnosticsReport_INTERFACE_DEFINED__ */


/* interface __MIDL_itf_Lumia2EImaging_0000_0088 */
/* [local] */ 

#if !defined(____x_ABI_CLumia_CImaging_CIDiagnosticsReportStatics_INTERFACE_DEFINED__)
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Lumia_Imaging_IDiagnosticsReportStatics[] = L"Lumia.Imaging.IDiagnosticsReportStatics";
#endif /* !defined(____x_ABI_CLumia_CImaging_CIDiagnosticsReportStatics_INTERFACE_DEFINED__) */


/* interface __MIDL_itf_Lumia2EImaging_0000_0088 */
/* [local] */ 



extern RPC_IF_HANDLE __MIDL_itf_Lumia2EImaging_0000_0088_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_Lumia2EImaging_0000_0088_v0_0_s_ifspec;

#ifndef ____x_ABI_CLumia_CImaging_CIDiagnosticsReportStatics_INTERFACE_DEFINED__
#define ____x_ABI_CLumia_CImaging_CIDiagnosticsReportStatics_INTERFACE_DEFINED__

/* interface __x_ABI_CLumia_CImaging_CIDiagnosticsReportStatics */
/* [uuid][object] */ 



/* interface ABI::Lumia::Imaging::IDiagnosticsReportStatics */
/* [uuid][object] */ 


EXTERN_C const IID IID___x_ABI_CLumia_CImaging_CIDiagnosticsReportStatics;

#if defined(__cplusplus) && !defined(CINTERFACE)
    } /* end extern "C" */
    namespace ABI {
        namespace Lumia {
            namespace Imaging {
                
                MIDL_INTERFACE("2B99BECD-FFA7-396F-BF90-54A1B4C71F3B")
                IDiagnosticsReportStatics : public IInspectable
                {
                public:
                    virtual HRESULT STDMETHODCALLTYPE CreateAsync( 
                        /* [out][retval] */ __RPC__deref_out_opt __FIAsyncOperation_1_Lumia__CImaging__CDiagnosticsReport **__returnValue) = 0;
                    
                    virtual HRESULT STDMETHODCALLTYPE BeginProbe( 
                        /* [in] */ __RPC__in_opt ABI::Lumia::Imaging::IImageProvider *imageProvider) = 0;
                    
                    virtual HRESULT STDMETHODCALLTYPE EndProbeAsync( 
                        /* [in] */ __RPC__in_opt ABI::Lumia::Imaging::IImageProvider *imageProvider,
                        /* [out][retval] */ __RPC__deref_out_opt __FIAsyncOperation_1_Lumia__CImaging__CDiagnosticsReport **__returnValue) = 0;
                    
                };

                extern const __declspec(selectany) IID & IID_IDiagnosticsReportStatics = __uuidof(IDiagnosticsReportStatics);

                
            }  /* end namespace */
        }  /* end namespace */
    }  /* end namespace */
    extern "C" { 
    
#else 	/* C style interface */

    typedef struct __x_ABI_CLumia_CImaging_CIDiagnosticsReportStaticsVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            __RPC__in __x_ABI_CLumia_CImaging_CIDiagnosticsReportStatics * This,
            /* [in] */ __RPC__in REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            __RPC__in __x_ABI_CLumia_CImaging_CIDiagnosticsReportStatics * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            __RPC__in __x_ABI_CLumia_CImaging_CIDiagnosticsReportStatics * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetIids )( 
            __RPC__in __x_ABI_CLumia_CImaging_CIDiagnosticsReportStatics * This,
            /* [out] */ __RPC__out ULONG *iidCount,
            /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
        
        HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )( 
            __RPC__in __x_ABI_CLumia_CImaging_CIDiagnosticsReportStatics * This,
            /* [out] */ __RPC__deref_out_opt HSTRING *className);
        
        HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )( 
            __RPC__in __x_ABI_CLumia_CImaging_CIDiagnosticsReportStatics * This,
            /* [out] */ __RPC__out TrustLevel *trustLevel);
        
        HRESULT ( STDMETHODCALLTYPE *CreateAsync )( 
            __RPC__in __x_ABI_CLumia_CImaging_CIDiagnosticsReportStatics * This,
            /* [out][retval] */ __RPC__deref_out_opt __FIAsyncOperation_1_Lumia__CImaging__CDiagnosticsReport **__returnValue);
        
        HRESULT ( STDMETHODCALLTYPE *BeginProbe )( 
            __RPC__in __x_ABI_CLumia_CImaging_CIDiagnosticsReportStatics * This,
            /* [in] */ __RPC__in_opt __x_ABI_CLumia_CImaging_CIImageProvider *imageProvider);
        
        HRESULT ( STDMETHODCALLTYPE *EndProbeAsync )( 
            __RPC__in __x_ABI_CLumia_CImaging_CIDiagnosticsReportStatics * This,
            /* [in] */ __RPC__in_opt __x_ABI_CLumia_CImaging_CIImageProvider *imageProvider,
            /* [out][retval] */ __RPC__deref_out_opt __FIAsyncOperation_1_Lumia__CImaging__CDiagnosticsReport **__returnValue);
        
        END_INTERFACE
    } __x_ABI_CLumia_CImaging_CIDiagnosticsReportStaticsVtbl;

    interface __x_ABI_CLumia_CImaging_CIDiagnosticsReportStatics
    {
        CONST_VTBL struct __x_ABI_CLumia_CImaging_CIDiagnosticsReportStaticsVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define __x_ABI_CLumia_CImaging_CIDiagnosticsReportStatics_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __x_ABI_CLumia_CImaging_CIDiagnosticsReportStatics_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __x_ABI_CLumia_CImaging_CIDiagnosticsReportStatics_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __x_ABI_CLumia_CImaging_CIDiagnosticsReportStatics_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 

#define __x_ABI_CLumia_CImaging_CIDiagnosticsReportStatics_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 

#define __x_ABI_CLumia_CImaging_CIDiagnosticsReportStatics_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 


#define __x_ABI_CLumia_CImaging_CIDiagnosticsReportStatics_CreateAsync(This,__returnValue)	\
    ( (This)->lpVtbl -> CreateAsync(This,__returnValue) ) 

#define __x_ABI_CLumia_CImaging_CIDiagnosticsReportStatics_BeginProbe(This,imageProvider)	\
    ( (This)->lpVtbl -> BeginProbe(This,imageProvider) ) 

#define __x_ABI_CLumia_CImaging_CIDiagnosticsReportStatics_EndProbeAsync(This,imageProvider,__returnValue)	\
    ( (This)->lpVtbl -> EndProbeAsync(This,imageProvider,__returnValue) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* ____x_ABI_CLumia_CImaging_CIDiagnosticsReportStatics_INTERFACE_DEFINED__ */


/* interface __MIDL_itf_Lumia2EImaging_0000_0089 */
/* [local] */ 

#if !defined(____x_ABI_CLumia_CImaging_CIActiveFrame_INTERFACE_DEFINED__)
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Lumia_Imaging_IActiveFrame[] = L"Lumia.Imaging.IActiveFrame";
#endif /* !defined(____x_ABI_CLumia_CImaging_CIActiveFrame_INTERFACE_DEFINED__) */


/* interface __MIDL_itf_Lumia2EImaging_0000_0089 */
/* [local] */ 



extern RPC_IF_HANDLE __MIDL_itf_Lumia2EImaging_0000_0089_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_Lumia2EImaging_0000_0089_v0_0_s_ifspec;

#ifndef ____x_ABI_CLumia_CImaging_CIActiveFrame_INTERFACE_DEFINED__
#define ____x_ABI_CLumia_CImaging_CIActiveFrame_INTERFACE_DEFINED__

/* interface __x_ABI_CLumia_CImaging_CIActiveFrame */
/* [uuid][object] */ 



/* interface ABI::Lumia::Imaging::IActiveFrame */
/* [uuid][object] */ 


EXTERN_C const IID IID___x_ABI_CLumia_CImaging_CIActiveFrame;

#if defined(__cplusplus) && !defined(CINTERFACE)
    } /* end extern "C" */
    namespace ABI {
        namespace Lumia {
            namespace Imaging {
                
                MIDL_INTERFACE("EA16A818-CE32-35E0-9A29-DF22B90B0EEB")
                IActiveFrame : public IInspectable
                {
                public:
                    virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_FrameIndex( 
                        /* [out][retval] */ __RPC__out UINT32 *__returnValue) = 0;
                    
                    virtual /* [propput] */ HRESULT STDMETHODCALLTYPE put_FrameIndex( 
                        /* [in] */ UINT32 size) = 0;
                    
                };

                extern const __declspec(selectany) IID & IID_IActiveFrame = __uuidof(IActiveFrame);

                
            }  /* end namespace */
        }  /* end namespace */
    }  /* end namespace */
    extern "C" { 
    
#else 	/* C style interface */

    typedef struct __x_ABI_CLumia_CImaging_CIActiveFrameVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            __RPC__in __x_ABI_CLumia_CImaging_CIActiveFrame * This,
            /* [in] */ __RPC__in REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            __RPC__in __x_ABI_CLumia_CImaging_CIActiveFrame * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            __RPC__in __x_ABI_CLumia_CImaging_CIActiveFrame * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetIids )( 
            __RPC__in __x_ABI_CLumia_CImaging_CIActiveFrame * This,
            /* [out] */ __RPC__out ULONG *iidCount,
            /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
        
        HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )( 
            __RPC__in __x_ABI_CLumia_CImaging_CIActiveFrame * This,
            /* [out] */ __RPC__deref_out_opt HSTRING *className);
        
        HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )( 
            __RPC__in __x_ABI_CLumia_CImaging_CIActiveFrame * This,
            /* [out] */ __RPC__out TrustLevel *trustLevel);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_FrameIndex )( 
            __RPC__in __x_ABI_CLumia_CImaging_CIActiveFrame * This,
            /* [out][retval] */ __RPC__out UINT32 *__returnValue);
        
        /* [propput] */ HRESULT ( STDMETHODCALLTYPE *put_FrameIndex )( 
            __RPC__in __x_ABI_CLumia_CImaging_CIActiveFrame * This,
            /* [in] */ UINT32 size);
        
        END_INTERFACE
    } __x_ABI_CLumia_CImaging_CIActiveFrameVtbl;

    interface __x_ABI_CLumia_CImaging_CIActiveFrame
    {
        CONST_VTBL struct __x_ABI_CLumia_CImaging_CIActiveFrameVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define __x_ABI_CLumia_CImaging_CIActiveFrame_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __x_ABI_CLumia_CImaging_CIActiveFrame_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __x_ABI_CLumia_CImaging_CIActiveFrame_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __x_ABI_CLumia_CImaging_CIActiveFrame_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 

#define __x_ABI_CLumia_CImaging_CIActiveFrame_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 

#define __x_ABI_CLumia_CImaging_CIActiveFrame_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 


#define __x_ABI_CLumia_CImaging_CIActiveFrame_get_FrameIndex(This,__returnValue)	\
    ( (This)->lpVtbl -> get_FrameIndex(This,__returnValue) ) 

#define __x_ABI_CLumia_CImaging_CIActiveFrame_put_FrameIndex(This,size)	\
    ( (This)->lpVtbl -> put_FrameIndex(This,size) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* ____x_ABI_CLumia_CImaging_CIActiveFrame_INTERFACE_DEFINED__ */


/* interface __MIDL_itf_Lumia2EImaging_0000_0090 */
/* [local] */ 

#if !defined(____x_ABI_CLumia_CImaging_CIBufferImageSource_INTERFACE_DEFINED__)
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Lumia_Imaging_IBufferImageSource[] = L"Lumia.Imaging.IBufferImageSource";
#endif /* !defined(____x_ABI_CLumia_CImaging_CIBufferImageSource_INTERFACE_DEFINED__) */


/* interface __MIDL_itf_Lumia2EImaging_0000_0090 */
/* [local] */ 



extern RPC_IF_HANDLE __MIDL_itf_Lumia2EImaging_0000_0090_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_Lumia2EImaging_0000_0090_v0_0_s_ifspec;

#ifndef ____x_ABI_CLumia_CImaging_CIBufferImageSource_INTERFACE_DEFINED__
#define ____x_ABI_CLumia_CImaging_CIBufferImageSource_INTERFACE_DEFINED__

/* interface __x_ABI_CLumia_CImaging_CIBufferImageSource */
/* [uuid][object] */ 



/* interface ABI::Lumia::Imaging::IBufferImageSource */
/* [uuid][object] */ 


EXTERN_C const IID IID___x_ABI_CLumia_CImaging_CIBufferImageSource;

#if defined(__cplusplus) && !defined(CINTERFACE)
    } /* end extern "C" */
    namespace ABI {
        namespace Lumia {
            namespace Imaging {
                
                MIDL_INTERFACE("32625C35-267B-3D29-AF65-6C62BCACB19B")
                IBufferImageSource : public IInspectable
                {
                public:
                    virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_Buffer( 
                        /* [out][retval] */ __RPC__deref_out_opt ABI::Windows::Storage::Streams::IBuffer **__returnValue) = 0;
                    
                    virtual /* [propput] */ HRESULT STDMETHODCALLTYPE put_Buffer( 
                        /* [in] */ __RPC__in_opt ABI::Windows::Storage::Streams::IBuffer *buffer) = 0;
                    
                    virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_ImageFormat( 
                        /* [out][retval] */ __RPC__out ABI::Lumia::Imaging::ImageFormat *__returnValue) = 0;
                    
                    virtual /* [propput] */ HRESULT STDMETHODCALLTYPE put_ImageFormat( 
                        /* [in] */ ABI::Lumia::Imaging::ImageFormat imageFormat) = 0;
                    
                    virtual HRESULT STDMETHODCALLTYPE Invalidate( void) = 0;
                    
                };

                extern const __declspec(selectany) IID & IID_IBufferImageSource = __uuidof(IBufferImageSource);

                
            }  /* end namespace */
        }  /* end namespace */
    }  /* end namespace */
    extern "C" { 
    
#else 	/* C style interface */

    typedef struct __x_ABI_CLumia_CImaging_CIBufferImageSourceVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            __RPC__in __x_ABI_CLumia_CImaging_CIBufferImageSource * This,
            /* [in] */ __RPC__in REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            __RPC__in __x_ABI_CLumia_CImaging_CIBufferImageSource * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            __RPC__in __x_ABI_CLumia_CImaging_CIBufferImageSource * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetIids )( 
            __RPC__in __x_ABI_CLumia_CImaging_CIBufferImageSource * This,
            /* [out] */ __RPC__out ULONG *iidCount,
            /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
        
        HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )( 
            __RPC__in __x_ABI_CLumia_CImaging_CIBufferImageSource * This,
            /* [out] */ __RPC__deref_out_opt HSTRING *className);
        
        HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )( 
            __RPC__in __x_ABI_CLumia_CImaging_CIBufferImageSource * This,
            /* [out] */ __RPC__out TrustLevel *trustLevel);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_Buffer )( 
            __RPC__in __x_ABI_CLumia_CImaging_CIBufferImageSource * This,
            /* [out][retval] */ __RPC__deref_out_opt __x_ABI_CWindows_CStorage_CStreams_CIBuffer **__returnValue);
        
        /* [propput] */ HRESULT ( STDMETHODCALLTYPE *put_Buffer )( 
            __RPC__in __x_ABI_CLumia_CImaging_CIBufferImageSource * This,
            /* [in] */ __RPC__in_opt __x_ABI_CWindows_CStorage_CStreams_CIBuffer *buffer);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_ImageFormat )( 
            __RPC__in __x_ABI_CLumia_CImaging_CIBufferImageSource * This,
            /* [out][retval] */ __RPC__out __x_ABI_CLumia_CImaging_CImageFormat *__returnValue);
        
        /* [propput] */ HRESULT ( STDMETHODCALLTYPE *put_ImageFormat )( 
            __RPC__in __x_ABI_CLumia_CImaging_CIBufferImageSource * This,
            /* [in] */ __x_ABI_CLumia_CImaging_CImageFormat imageFormat);
        
        HRESULT ( STDMETHODCALLTYPE *Invalidate )( 
            __RPC__in __x_ABI_CLumia_CImaging_CIBufferImageSource * This);
        
        END_INTERFACE
    } __x_ABI_CLumia_CImaging_CIBufferImageSourceVtbl;

    interface __x_ABI_CLumia_CImaging_CIBufferImageSource
    {
        CONST_VTBL struct __x_ABI_CLumia_CImaging_CIBufferImageSourceVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define __x_ABI_CLumia_CImaging_CIBufferImageSource_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __x_ABI_CLumia_CImaging_CIBufferImageSource_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __x_ABI_CLumia_CImaging_CIBufferImageSource_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __x_ABI_CLumia_CImaging_CIBufferImageSource_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 

#define __x_ABI_CLumia_CImaging_CIBufferImageSource_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 

#define __x_ABI_CLumia_CImaging_CIBufferImageSource_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 


#define __x_ABI_CLumia_CImaging_CIBufferImageSource_get_Buffer(This,__returnValue)	\
    ( (This)->lpVtbl -> get_Buffer(This,__returnValue) ) 

#define __x_ABI_CLumia_CImaging_CIBufferImageSource_put_Buffer(This,buffer)	\
    ( (This)->lpVtbl -> put_Buffer(This,buffer) ) 

#define __x_ABI_CLumia_CImaging_CIBufferImageSource_get_ImageFormat(This,__returnValue)	\
    ( (This)->lpVtbl -> get_ImageFormat(This,__returnValue) ) 

#define __x_ABI_CLumia_CImaging_CIBufferImageSource_put_ImageFormat(This,imageFormat)	\
    ( (This)->lpVtbl -> put_ImageFormat(This,imageFormat) ) 

#define __x_ABI_CLumia_CImaging_CIBufferImageSource_Invalidate(This)	\
    ( (This)->lpVtbl -> Invalidate(This) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* ____x_ABI_CLumia_CImaging_CIBufferImageSource_INTERFACE_DEFINED__ */


/* interface __MIDL_itf_Lumia2EImaging_0000_0091 */
/* [local] */ 

#if !defined(____x_ABI_CLumia_CImaging_CIBufferImageSourceFactory_INTERFACE_DEFINED__)
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Lumia_Imaging_IBufferImageSourceFactory[] = L"Lumia.Imaging.IBufferImageSourceFactory";
#endif /* !defined(____x_ABI_CLumia_CImaging_CIBufferImageSourceFactory_INTERFACE_DEFINED__) */


/* interface __MIDL_itf_Lumia2EImaging_0000_0091 */
/* [local] */ 



extern RPC_IF_HANDLE __MIDL_itf_Lumia2EImaging_0000_0091_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_Lumia2EImaging_0000_0091_v0_0_s_ifspec;

#ifndef ____x_ABI_CLumia_CImaging_CIBufferImageSourceFactory_INTERFACE_DEFINED__
#define ____x_ABI_CLumia_CImaging_CIBufferImageSourceFactory_INTERFACE_DEFINED__

/* interface __x_ABI_CLumia_CImaging_CIBufferImageSourceFactory */
/* [uuid][object] */ 



/* interface ABI::Lumia::Imaging::IBufferImageSourceFactory */
/* [uuid][object] */ 


EXTERN_C const IID IID___x_ABI_CLumia_CImaging_CIBufferImageSourceFactory;

#if defined(__cplusplus) && !defined(CINTERFACE)
    } /* end extern "C" */
    namespace ABI {
        namespace Lumia {
            namespace Imaging {
                
                MIDL_INTERFACE("195F0E30-5BAB-30DE-98D1-CDE2474D9DB7")
                IBufferImageSourceFactory : public IInspectable
                {
                public:
                    virtual HRESULT STDMETHODCALLTYPE Create( 
                        /* [in] */ __RPC__in_opt ABI::Windows::Storage::Streams::IBuffer *buffer,
                        /* [out][retval] */ __RPC__deref_out_opt ABI::Lumia::Imaging::IBufferImageSource **__returnValue) = 0;
                    
                    virtual HRESULT STDMETHODCALLTYPE CreateWithImageFormat( 
                        /* [in] */ __RPC__in_opt ABI::Windows::Storage::Streams::IBuffer *buffer,
                        /* [in] */ ABI::Lumia::Imaging::ImageFormat imageFormat,
                        /* [out][retval] */ __RPC__deref_out_opt ABI::Lumia::Imaging::IBufferImageSource **__returnValue) = 0;
                    
                };

                extern const __declspec(selectany) IID & IID_IBufferImageSourceFactory = __uuidof(IBufferImageSourceFactory);

                
            }  /* end namespace */
        }  /* end namespace */
    }  /* end namespace */
    extern "C" { 
    
#else 	/* C style interface */

    typedef struct __x_ABI_CLumia_CImaging_CIBufferImageSourceFactoryVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            __RPC__in __x_ABI_CLumia_CImaging_CIBufferImageSourceFactory * This,
            /* [in] */ __RPC__in REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            __RPC__in __x_ABI_CLumia_CImaging_CIBufferImageSourceFactory * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            __RPC__in __x_ABI_CLumia_CImaging_CIBufferImageSourceFactory * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetIids )( 
            __RPC__in __x_ABI_CLumia_CImaging_CIBufferImageSourceFactory * This,
            /* [out] */ __RPC__out ULONG *iidCount,
            /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
        
        HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )( 
            __RPC__in __x_ABI_CLumia_CImaging_CIBufferImageSourceFactory * This,
            /* [out] */ __RPC__deref_out_opt HSTRING *className);
        
        HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )( 
            __RPC__in __x_ABI_CLumia_CImaging_CIBufferImageSourceFactory * This,
            /* [out] */ __RPC__out TrustLevel *trustLevel);
        
        HRESULT ( STDMETHODCALLTYPE *Create )( 
            __RPC__in __x_ABI_CLumia_CImaging_CIBufferImageSourceFactory * This,
            /* [in] */ __RPC__in_opt __x_ABI_CWindows_CStorage_CStreams_CIBuffer *buffer,
            /* [out][retval] */ __RPC__deref_out_opt __x_ABI_CLumia_CImaging_CIBufferImageSource **__returnValue);
        
        HRESULT ( STDMETHODCALLTYPE *CreateWithImageFormat )( 
            __RPC__in __x_ABI_CLumia_CImaging_CIBufferImageSourceFactory * This,
            /* [in] */ __RPC__in_opt __x_ABI_CWindows_CStorage_CStreams_CIBuffer *buffer,
            /* [in] */ __x_ABI_CLumia_CImaging_CImageFormat imageFormat,
            /* [out][retval] */ __RPC__deref_out_opt __x_ABI_CLumia_CImaging_CIBufferImageSource **__returnValue);
        
        END_INTERFACE
    } __x_ABI_CLumia_CImaging_CIBufferImageSourceFactoryVtbl;

    interface __x_ABI_CLumia_CImaging_CIBufferImageSourceFactory
    {
        CONST_VTBL struct __x_ABI_CLumia_CImaging_CIBufferImageSourceFactoryVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define __x_ABI_CLumia_CImaging_CIBufferImageSourceFactory_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __x_ABI_CLumia_CImaging_CIBufferImageSourceFactory_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __x_ABI_CLumia_CImaging_CIBufferImageSourceFactory_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __x_ABI_CLumia_CImaging_CIBufferImageSourceFactory_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 

#define __x_ABI_CLumia_CImaging_CIBufferImageSourceFactory_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 

#define __x_ABI_CLumia_CImaging_CIBufferImageSourceFactory_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 


#define __x_ABI_CLumia_CImaging_CIBufferImageSourceFactory_Create(This,buffer,__returnValue)	\
    ( (This)->lpVtbl -> Create(This,buffer,__returnValue) ) 

#define __x_ABI_CLumia_CImaging_CIBufferImageSourceFactory_CreateWithImageFormat(This,buffer,imageFormat,__returnValue)	\
    ( (This)->lpVtbl -> CreateWithImageFormat(This,buffer,imageFormat,__returnValue) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* ____x_ABI_CLumia_CImaging_CIBufferImageSourceFactory_INTERFACE_DEFINED__ */


/* interface __MIDL_itf_Lumia2EImaging_0000_0092 */
/* [local] */ 

#if !defined(____x_ABI_CLumia_CImaging_CIBufferProviderImageSource_INTERFACE_DEFINED__)
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Lumia_Imaging_IBufferProviderImageSource[] = L"Lumia.Imaging.IBufferProviderImageSource";
#endif /* !defined(____x_ABI_CLumia_CImaging_CIBufferProviderImageSource_INTERFACE_DEFINED__) */


/* interface __MIDL_itf_Lumia2EImaging_0000_0092 */
/* [local] */ 



extern RPC_IF_HANDLE __MIDL_itf_Lumia2EImaging_0000_0092_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_Lumia2EImaging_0000_0092_v0_0_s_ifspec;

#ifndef ____x_ABI_CLumia_CImaging_CIBufferProviderImageSource_INTERFACE_DEFINED__
#define ____x_ABI_CLumia_CImaging_CIBufferProviderImageSource_INTERFACE_DEFINED__

/* interface __x_ABI_CLumia_CImaging_CIBufferProviderImageSource */
/* [uuid][object] */ 



/* interface ABI::Lumia::Imaging::IBufferProviderImageSource */
/* [uuid][object] */ 


EXTERN_C const IID IID___x_ABI_CLumia_CImaging_CIBufferProviderImageSource;

#if defined(__cplusplus) && !defined(CINTERFACE)
    } /* end extern "C" */
    namespace ABI {
        namespace Lumia {
            namespace Imaging {
                
                MIDL_INTERFACE("36B9DD7D-7BAB-32DC-A56D-2C4BE04BB402")
                IBufferProviderImageSource : public IInspectable
                {
                public:
                    virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_ImageFormat( 
                        /* [out][retval] */ __RPC__out ABI::Lumia::Imaging::ImageFormat *__returnValue) = 0;
                    
                    virtual /* [propput] */ HRESULT STDMETHODCALLTYPE put_ImageFormat( 
                        /* [in] */ ABI::Lumia::Imaging::ImageFormat imageFormat) = 0;
                    
                    virtual HRESULT STDMETHODCALLTYPE Invalidate( void) = 0;
                    
                };

                extern const __declspec(selectany) IID & IID_IBufferProviderImageSource = __uuidof(IBufferProviderImageSource);

                
            }  /* end namespace */
        }  /* end namespace */
    }  /* end namespace */
    extern "C" { 
    
#else 	/* C style interface */

    typedef struct __x_ABI_CLumia_CImaging_CIBufferProviderImageSourceVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            __RPC__in __x_ABI_CLumia_CImaging_CIBufferProviderImageSource * This,
            /* [in] */ __RPC__in REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            __RPC__in __x_ABI_CLumia_CImaging_CIBufferProviderImageSource * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            __RPC__in __x_ABI_CLumia_CImaging_CIBufferProviderImageSource * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetIids )( 
            __RPC__in __x_ABI_CLumia_CImaging_CIBufferProviderImageSource * This,
            /* [out] */ __RPC__out ULONG *iidCount,
            /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
        
        HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )( 
            __RPC__in __x_ABI_CLumia_CImaging_CIBufferProviderImageSource * This,
            /* [out] */ __RPC__deref_out_opt HSTRING *className);
        
        HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )( 
            __RPC__in __x_ABI_CLumia_CImaging_CIBufferProviderImageSource * This,
            /* [out] */ __RPC__out TrustLevel *trustLevel);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_ImageFormat )( 
            __RPC__in __x_ABI_CLumia_CImaging_CIBufferProviderImageSource * This,
            /* [out][retval] */ __RPC__out __x_ABI_CLumia_CImaging_CImageFormat *__returnValue);
        
        /* [propput] */ HRESULT ( STDMETHODCALLTYPE *put_ImageFormat )( 
            __RPC__in __x_ABI_CLumia_CImaging_CIBufferProviderImageSource * This,
            /* [in] */ __x_ABI_CLumia_CImaging_CImageFormat imageFormat);
        
        HRESULT ( STDMETHODCALLTYPE *Invalidate )( 
            __RPC__in __x_ABI_CLumia_CImaging_CIBufferProviderImageSource * This);
        
        END_INTERFACE
    } __x_ABI_CLumia_CImaging_CIBufferProviderImageSourceVtbl;

    interface __x_ABI_CLumia_CImaging_CIBufferProviderImageSource
    {
        CONST_VTBL struct __x_ABI_CLumia_CImaging_CIBufferProviderImageSourceVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define __x_ABI_CLumia_CImaging_CIBufferProviderImageSource_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __x_ABI_CLumia_CImaging_CIBufferProviderImageSource_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __x_ABI_CLumia_CImaging_CIBufferProviderImageSource_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __x_ABI_CLumia_CImaging_CIBufferProviderImageSource_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 

#define __x_ABI_CLumia_CImaging_CIBufferProviderImageSource_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 

#define __x_ABI_CLumia_CImaging_CIBufferProviderImageSource_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 


#define __x_ABI_CLumia_CImaging_CIBufferProviderImageSource_get_ImageFormat(This,__returnValue)	\
    ( (This)->lpVtbl -> get_ImageFormat(This,__returnValue) ) 

#define __x_ABI_CLumia_CImaging_CIBufferProviderImageSource_put_ImageFormat(This,imageFormat)	\
    ( (This)->lpVtbl -> put_ImageFormat(This,imageFormat) ) 

#define __x_ABI_CLumia_CImaging_CIBufferProviderImageSource_Invalidate(This)	\
    ( (This)->lpVtbl -> Invalidate(This) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* ____x_ABI_CLumia_CImaging_CIBufferProviderImageSource_INTERFACE_DEFINED__ */


/* interface __MIDL_itf_Lumia2EImaging_0000_0093 */
/* [local] */ 

#if !defined(____x_ABI_CLumia_CImaging_CIBufferProviderImageSourceFactory_INTERFACE_DEFINED__)
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Lumia_Imaging_IBufferProviderImageSourceFactory[] = L"Lumia.Imaging.IBufferProviderImageSourceFactory";
#endif /* !defined(____x_ABI_CLumia_CImaging_CIBufferProviderImageSourceFactory_INTERFACE_DEFINED__) */


/* interface __MIDL_itf_Lumia2EImaging_0000_0093 */
/* [local] */ 



extern RPC_IF_HANDLE __MIDL_itf_Lumia2EImaging_0000_0093_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_Lumia2EImaging_0000_0093_v0_0_s_ifspec;

#ifndef ____x_ABI_CLumia_CImaging_CIBufferProviderImageSourceFactory_INTERFACE_DEFINED__
#define ____x_ABI_CLumia_CImaging_CIBufferProviderImageSourceFactory_INTERFACE_DEFINED__

/* interface __x_ABI_CLumia_CImaging_CIBufferProviderImageSourceFactory */
/* [uuid][object] */ 



/* interface ABI::Lumia::Imaging::IBufferProviderImageSourceFactory */
/* [uuid][object] */ 


EXTERN_C const IID IID___x_ABI_CLumia_CImaging_CIBufferProviderImageSourceFactory;

#if defined(__cplusplus) && !defined(CINTERFACE)
    } /* end extern "C" */
    namespace ABI {
        namespace Lumia {
            namespace Imaging {
                
                MIDL_INTERFACE("AD17EF14-92FF-39F9-94A7-A5D5774109DA")
                IBufferProviderImageSourceFactory : public IInspectable
                {
                public:
                    virtual HRESULT STDMETHODCALLTYPE Create( 
                        /* [in] */ __RPC__in_opt ABI::Lumia::Imaging::IBufferProvider *bufferProvider,
                        /* [out][retval] */ __RPC__deref_out_opt ABI::Lumia::Imaging::IBufferProviderImageSource **__returnValue) = 0;
                    
                };

                extern const __declspec(selectany) IID & IID_IBufferProviderImageSourceFactory = __uuidof(IBufferProviderImageSourceFactory);

                
            }  /* end namespace */
        }  /* end namespace */
    }  /* end namespace */
    extern "C" { 
    
#else 	/* C style interface */

    typedef struct __x_ABI_CLumia_CImaging_CIBufferProviderImageSourceFactoryVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            __RPC__in __x_ABI_CLumia_CImaging_CIBufferProviderImageSourceFactory * This,
            /* [in] */ __RPC__in REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            __RPC__in __x_ABI_CLumia_CImaging_CIBufferProviderImageSourceFactory * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            __RPC__in __x_ABI_CLumia_CImaging_CIBufferProviderImageSourceFactory * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetIids )( 
            __RPC__in __x_ABI_CLumia_CImaging_CIBufferProviderImageSourceFactory * This,
            /* [out] */ __RPC__out ULONG *iidCount,
            /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
        
        HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )( 
            __RPC__in __x_ABI_CLumia_CImaging_CIBufferProviderImageSourceFactory * This,
            /* [out] */ __RPC__deref_out_opt HSTRING *className);
        
        HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )( 
            __RPC__in __x_ABI_CLumia_CImaging_CIBufferProviderImageSourceFactory * This,
            /* [out] */ __RPC__out TrustLevel *trustLevel);
        
        HRESULT ( STDMETHODCALLTYPE *Create )( 
            __RPC__in __x_ABI_CLumia_CImaging_CIBufferProviderImageSourceFactory * This,
            /* [in] */ __RPC__in_opt __x_ABI_CLumia_CImaging_CIBufferProvider *bufferProvider,
            /* [out][retval] */ __RPC__deref_out_opt __x_ABI_CLumia_CImaging_CIBufferProviderImageSource **__returnValue);
        
        END_INTERFACE
    } __x_ABI_CLumia_CImaging_CIBufferProviderImageSourceFactoryVtbl;

    interface __x_ABI_CLumia_CImaging_CIBufferProviderImageSourceFactory
    {
        CONST_VTBL struct __x_ABI_CLumia_CImaging_CIBufferProviderImageSourceFactoryVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define __x_ABI_CLumia_CImaging_CIBufferProviderImageSourceFactory_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __x_ABI_CLumia_CImaging_CIBufferProviderImageSourceFactory_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __x_ABI_CLumia_CImaging_CIBufferProviderImageSourceFactory_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __x_ABI_CLumia_CImaging_CIBufferProviderImageSourceFactory_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 

#define __x_ABI_CLumia_CImaging_CIBufferProviderImageSourceFactory_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 

#define __x_ABI_CLumia_CImaging_CIBufferProviderImageSourceFactory_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 


#define __x_ABI_CLumia_CImaging_CIBufferProviderImageSourceFactory_Create(This,bufferProvider,__returnValue)	\
    ( (This)->lpVtbl -> Create(This,bufferProvider,__returnValue) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* ____x_ABI_CLumia_CImaging_CIBufferProviderImageSourceFactory_INTERFACE_DEFINED__ */


/* interface __MIDL_itf_Lumia2EImaging_0000_0094 */
/* [local] */ 

#if !defined(____x_ABI_CLumia_CImaging_CIBufferProvider_INTERFACE_DEFINED__)
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Lumia_Imaging_IBufferProvider[] = L"Lumia.Imaging.IBufferProvider";
#endif /* !defined(____x_ABI_CLumia_CImaging_CIBufferProvider_INTERFACE_DEFINED__) */


/* interface __MIDL_itf_Lumia2EImaging_0000_0094 */
/* [local] */ 



extern RPC_IF_HANDLE __MIDL_itf_Lumia2EImaging_0000_0094_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_Lumia2EImaging_0000_0094_v0_0_s_ifspec;

#ifndef ____x_ABI_CLumia_CImaging_CIBufferProvider_INTERFACE_DEFINED__
#define ____x_ABI_CLumia_CImaging_CIBufferProvider_INTERFACE_DEFINED__

/* interface __x_ABI_CLumia_CImaging_CIBufferProvider */
/* [uuid][object] */ 



/* interface ABI::Lumia::Imaging::IBufferProvider */
/* [uuid][object] */ 


EXTERN_C const IID IID___x_ABI_CLumia_CImaging_CIBufferProvider;

#if defined(__cplusplus) && !defined(CINTERFACE)
    } /* end extern "C" */
    namespace ABI {
        namespace Lumia {
            namespace Imaging {
                
                MIDL_INTERFACE("BED10A2F-9816-3B86-B15C-D3CB344187A6")
                IBufferProvider : public IInspectable
                {
                public:
                    virtual HRESULT STDMETHODCALLTYPE GetAsync( 
                        /* [out][retval] */ __RPC__deref_out_opt __FIAsyncOperation_1_Windows__CStorage__CStreams__CIBuffer **__returnValue) = 0;
                    
                };

                extern const __declspec(selectany) IID & IID_IBufferProvider = __uuidof(IBufferProvider);

                
            }  /* end namespace */
        }  /* end namespace */
    }  /* end namespace */
    extern "C" { 
    
#else 	/* C style interface */

    typedef struct __x_ABI_CLumia_CImaging_CIBufferProviderVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            __RPC__in __x_ABI_CLumia_CImaging_CIBufferProvider * This,
            /* [in] */ __RPC__in REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            __RPC__in __x_ABI_CLumia_CImaging_CIBufferProvider * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            __RPC__in __x_ABI_CLumia_CImaging_CIBufferProvider * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetIids )( 
            __RPC__in __x_ABI_CLumia_CImaging_CIBufferProvider * This,
            /* [out] */ __RPC__out ULONG *iidCount,
            /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
        
        HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )( 
            __RPC__in __x_ABI_CLumia_CImaging_CIBufferProvider * This,
            /* [out] */ __RPC__deref_out_opt HSTRING *className);
        
        HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )( 
            __RPC__in __x_ABI_CLumia_CImaging_CIBufferProvider * This,
            /* [out] */ __RPC__out TrustLevel *trustLevel);
        
        HRESULT ( STDMETHODCALLTYPE *GetAsync )( 
            __RPC__in __x_ABI_CLumia_CImaging_CIBufferProvider * This,
            /* [out][retval] */ __RPC__deref_out_opt __FIAsyncOperation_1_Windows__CStorage__CStreams__CIBuffer **__returnValue);
        
        END_INTERFACE
    } __x_ABI_CLumia_CImaging_CIBufferProviderVtbl;

    interface __x_ABI_CLumia_CImaging_CIBufferProvider
    {
        CONST_VTBL struct __x_ABI_CLumia_CImaging_CIBufferProviderVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define __x_ABI_CLumia_CImaging_CIBufferProvider_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __x_ABI_CLumia_CImaging_CIBufferProvider_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __x_ABI_CLumia_CImaging_CIBufferProvider_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __x_ABI_CLumia_CImaging_CIBufferProvider_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 

#define __x_ABI_CLumia_CImaging_CIBufferProvider_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 

#define __x_ABI_CLumia_CImaging_CIBufferProvider_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 


#define __x_ABI_CLumia_CImaging_CIBufferProvider_GetAsync(This,__returnValue)	\
    ( (This)->lpVtbl -> GetAsync(This,__returnValue) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* ____x_ABI_CLumia_CImaging_CIBufferProvider_INTERFACE_DEFINED__ */


/* interface __MIDL_itf_Lumia2EImaging_0000_0095 */
/* [local] */ 

#if !defined(____x_ABI_CLumia_CImaging_CICachingEffect_INTERFACE_DEFINED__)
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Lumia_Imaging_ICachingEffect[] = L"Lumia.Imaging.ICachingEffect";
#endif /* !defined(____x_ABI_CLumia_CImaging_CICachingEffect_INTERFACE_DEFINED__) */


/* interface __MIDL_itf_Lumia2EImaging_0000_0095 */
/* [local] */ 



extern RPC_IF_HANDLE __MIDL_itf_Lumia2EImaging_0000_0095_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_Lumia2EImaging_0000_0095_v0_0_s_ifspec;

#ifndef ____x_ABI_CLumia_CImaging_CICachingEffect_INTERFACE_DEFINED__
#define ____x_ABI_CLumia_CImaging_CICachingEffect_INTERFACE_DEFINED__

/* interface __x_ABI_CLumia_CImaging_CICachingEffect */
/* [uuid][object] */ 



/* interface ABI::Lumia::Imaging::ICachingEffect */
/* [uuid][object] */ 


EXTERN_C const IID IID___x_ABI_CLumia_CImaging_CICachingEffect;

#if defined(__cplusplus) && !defined(CINTERFACE)
    } /* end extern "C" */
    namespace ABI {
        namespace Lumia {
            namespace Imaging {
                
                MIDL_INTERFACE("783F04A4-2D49-31CE-BA8D-5513DD3E028B")
                ICachingEffect : public IInspectable
                {
                public:
                    virtual HRESULT STDMETHODCALLTYPE Invalidate( void) = 0;
                    
                    virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_OutputOption( 
                        /* [out][retval] */ __RPC__out ABI::Lumia::Imaging::OutputOption *__returnValue) = 0;
                    
                    virtual /* [propput] */ HRESULT STDMETHODCALLTYPE put_OutputOption( 
                        /* [in] */ ABI::Lumia::Imaging::OutputOption outputOption) = 0;
                    
                    virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_ColorMode( 
                        /* [out][retval] */ __RPC__out ABI::Lumia::Imaging::ColorMode *__returnValue) = 0;
                    
                    virtual /* [propput] */ HRESULT STDMETHODCALLTYPE put_ColorMode( 
                        /* [in] */ ABI::Lumia::Imaging::ColorMode colorMode) = 0;
                    
                };

                extern const __declspec(selectany) IID & IID_ICachingEffect = __uuidof(ICachingEffect);

                
            }  /* end namespace */
        }  /* end namespace */
    }  /* end namespace */
    extern "C" { 
    
#else 	/* C style interface */

    typedef struct __x_ABI_CLumia_CImaging_CICachingEffectVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            __RPC__in __x_ABI_CLumia_CImaging_CICachingEffect * This,
            /* [in] */ __RPC__in REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            __RPC__in __x_ABI_CLumia_CImaging_CICachingEffect * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            __RPC__in __x_ABI_CLumia_CImaging_CICachingEffect * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetIids )( 
            __RPC__in __x_ABI_CLumia_CImaging_CICachingEffect * This,
            /* [out] */ __RPC__out ULONG *iidCount,
            /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
        
        HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )( 
            __RPC__in __x_ABI_CLumia_CImaging_CICachingEffect * This,
            /* [out] */ __RPC__deref_out_opt HSTRING *className);
        
        HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )( 
            __RPC__in __x_ABI_CLumia_CImaging_CICachingEffect * This,
            /* [out] */ __RPC__out TrustLevel *trustLevel);
        
        HRESULT ( STDMETHODCALLTYPE *Invalidate )( 
            __RPC__in __x_ABI_CLumia_CImaging_CICachingEffect * This);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_OutputOption )( 
            __RPC__in __x_ABI_CLumia_CImaging_CICachingEffect * This,
            /* [out][retval] */ __RPC__out __x_ABI_CLumia_CImaging_COutputOption *__returnValue);
        
        /* [propput] */ HRESULT ( STDMETHODCALLTYPE *put_OutputOption )( 
            __RPC__in __x_ABI_CLumia_CImaging_CICachingEffect * This,
            /* [in] */ __x_ABI_CLumia_CImaging_COutputOption outputOption);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_ColorMode )( 
            __RPC__in __x_ABI_CLumia_CImaging_CICachingEffect * This,
            /* [out][retval] */ __RPC__out __x_ABI_CLumia_CImaging_CColorMode *__returnValue);
        
        /* [propput] */ HRESULT ( STDMETHODCALLTYPE *put_ColorMode )( 
            __RPC__in __x_ABI_CLumia_CImaging_CICachingEffect * This,
            /* [in] */ __x_ABI_CLumia_CImaging_CColorMode colorMode);
        
        END_INTERFACE
    } __x_ABI_CLumia_CImaging_CICachingEffectVtbl;

    interface __x_ABI_CLumia_CImaging_CICachingEffect
    {
        CONST_VTBL struct __x_ABI_CLumia_CImaging_CICachingEffectVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define __x_ABI_CLumia_CImaging_CICachingEffect_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __x_ABI_CLumia_CImaging_CICachingEffect_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __x_ABI_CLumia_CImaging_CICachingEffect_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __x_ABI_CLumia_CImaging_CICachingEffect_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 

#define __x_ABI_CLumia_CImaging_CICachingEffect_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 

#define __x_ABI_CLumia_CImaging_CICachingEffect_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 


#define __x_ABI_CLumia_CImaging_CICachingEffect_Invalidate(This)	\
    ( (This)->lpVtbl -> Invalidate(This) ) 

#define __x_ABI_CLumia_CImaging_CICachingEffect_get_OutputOption(This,__returnValue)	\
    ( (This)->lpVtbl -> get_OutputOption(This,__returnValue) ) 

#define __x_ABI_CLumia_CImaging_CICachingEffect_put_OutputOption(This,outputOption)	\
    ( (This)->lpVtbl -> put_OutputOption(This,outputOption) ) 

#define __x_ABI_CLumia_CImaging_CICachingEffect_get_ColorMode(This,__returnValue)	\
    ( (This)->lpVtbl -> get_ColorMode(This,__returnValue) ) 

#define __x_ABI_CLumia_CImaging_CICachingEffect_put_ColorMode(This,colorMode)	\
    ( (This)->lpVtbl -> put_ColorMode(This,colorMode) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* ____x_ABI_CLumia_CImaging_CICachingEffect_INTERFACE_DEFINED__ */


/* interface __MIDL_itf_Lumia2EImaging_0000_0096 */
/* [local] */ 

#if !defined(____x_ABI_CLumia_CImaging_CICachingEffectFactory_INTERFACE_DEFINED__)
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Lumia_Imaging_ICachingEffectFactory[] = L"Lumia.Imaging.ICachingEffectFactory";
#endif /* !defined(____x_ABI_CLumia_CImaging_CICachingEffectFactory_INTERFACE_DEFINED__) */


/* interface __MIDL_itf_Lumia2EImaging_0000_0096 */
/* [local] */ 



extern RPC_IF_HANDLE __MIDL_itf_Lumia2EImaging_0000_0096_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_Lumia2EImaging_0000_0096_v0_0_s_ifspec;

#ifndef ____x_ABI_CLumia_CImaging_CICachingEffectFactory_INTERFACE_DEFINED__
#define ____x_ABI_CLumia_CImaging_CICachingEffectFactory_INTERFACE_DEFINED__

/* interface __x_ABI_CLumia_CImaging_CICachingEffectFactory */
/* [uuid][object] */ 



/* interface ABI::Lumia::Imaging::ICachingEffectFactory */
/* [uuid][object] */ 


EXTERN_C const IID IID___x_ABI_CLumia_CImaging_CICachingEffectFactory;

#if defined(__cplusplus) && !defined(CINTERFACE)
    } /* end extern "C" */
    namespace ABI {
        namespace Lumia {
            namespace Imaging {
                
                MIDL_INTERFACE("91EBE4EB-E066-31C3-B60D-C769769CF041")
                ICachingEffectFactory : public IInspectable
                {
                public:
                    virtual HRESULT STDMETHODCALLTYPE Create( 
                        /* [in] */ __RPC__in_opt ABI::Lumia::Imaging::IImageProvider *imageSource,
                        /* [out][retval] */ __RPC__deref_out_opt ABI::Lumia::Imaging::ICachingEffect **__returnValue) = 0;
                    
                };

                extern const __declspec(selectany) IID & IID_ICachingEffectFactory = __uuidof(ICachingEffectFactory);

                
            }  /* end namespace */
        }  /* end namespace */
    }  /* end namespace */
    extern "C" { 
    
#else 	/* C style interface */

    typedef struct __x_ABI_CLumia_CImaging_CICachingEffectFactoryVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            __RPC__in __x_ABI_CLumia_CImaging_CICachingEffectFactory * This,
            /* [in] */ __RPC__in REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            __RPC__in __x_ABI_CLumia_CImaging_CICachingEffectFactory * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            __RPC__in __x_ABI_CLumia_CImaging_CICachingEffectFactory * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetIids )( 
            __RPC__in __x_ABI_CLumia_CImaging_CICachingEffectFactory * This,
            /* [out] */ __RPC__out ULONG *iidCount,
            /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
        
        HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )( 
            __RPC__in __x_ABI_CLumia_CImaging_CICachingEffectFactory * This,
            /* [out] */ __RPC__deref_out_opt HSTRING *className);
        
        HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )( 
            __RPC__in __x_ABI_CLumia_CImaging_CICachingEffectFactory * This,
            /* [out] */ __RPC__out TrustLevel *trustLevel);
        
        HRESULT ( STDMETHODCALLTYPE *Create )( 
            __RPC__in __x_ABI_CLumia_CImaging_CICachingEffectFactory * This,
            /* [in] */ __RPC__in_opt __x_ABI_CLumia_CImaging_CIImageProvider *imageSource,
            /* [out][retval] */ __RPC__deref_out_opt __x_ABI_CLumia_CImaging_CICachingEffect **__returnValue);
        
        END_INTERFACE
    } __x_ABI_CLumia_CImaging_CICachingEffectFactoryVtbl;

    interface __x_ABI_CLumia_CImaging_CICachingEffectFactory
    {
        CONST_VTBL struct __x_ABI_CLumia_CImaging_CICachingEffectFactoryVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define __x_ABI_CLumia_CImaging_CICachingEffectFactory_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __x_ABI_CLumia_CImaging_CICachingEffectFactory_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __x_ABI_CLumia_CImaging_CICachingEffectFactory_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __x_ABI_CLumia_CImaging_CICachingEffectFactory_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 

#define __x_ABI_CLumia_CImaging_CICachingEffectFactory_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 

#define __x_ABI_CLumia_CImaging_CICachingEffectFactory_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 


#define __x_ABI_CLumia_CImaging_CICachingEffectFactory_Create(This,imageSource,__returnValue)	\
    ( (This)->lpVtbl -> Create(This,imageSource,__returnValue) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* ____x_ABI_CLumia_CImaging_CICachingEffectFactory_INTERFACE_DEFINED__ */


/* interface __MIDL_itf_Lumia2EImaging_0000_0097 */
/* [local] */ 

#if !defined(____x_ABI_CLumia_CImaging_CIGradient_INTERFACE_DEFINED__)
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Lumia_Imaging_IGradient[] = L"Lumia.Imaging.IGradient";
#endif /* !defined(____x_ABI_CLumia_CImaging_CIGradient_INTERFACE_DEFINED__) */


/* interface __MIDL_itf_Lumia2EImaging_0000_0097 */
/* [local] */ 



extern RPC_IF_HANDLE __MIDL_itf_Lumia2EImaging_0000_0097_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_Lumia2EImaging_0000_0097_v0_0_s_ifspec;

#ifndef ____x_ABI_CLumia_CImaging_CIGradient_INTERFACE_DEFINED__
#define ____x_ABI_CLumia_CImaging_CIGradient_INTERFACE_DEFINED__

/* interface __x_ABI_CLumia_CImaging_CIGradient */
/* [uuid][object] */ 



/* interface ABI::Lumia::Imaging::IGradient */
/* [uuid][object] */ 


EXTERN_C const IID IID___x_ABI_CLumia_CImaging_CIGradient;

#if defined(__cplusplus) && !defined(CINTERFACE)
    } /* end extern "C" */
    namespace ABI {
        namespace Lumia {
            namespace Imaging {
                
                MIDL_INTERFACE("48E8DAE0-A08A-3CE3-8A73-B3D49EE447A6")
                IGradient : public IInspectable
                {
                public:
                    virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_Stops( 
                        /* [out] */ __RPC__out UINT32 *____returnValueSize,
                        /* [out][retval][size_is][size_is] */ __RPC__deref_out_ecount_full_opt(*____returnValueSize) ABI::Lumia::Imaging::GradientStop **__returnValue) = 0;
                    
                    virtual /* [propput] */ HRESULT STDMETHODCALLTYPE put_Stops( 
                        /* [in] */ UINT32 __stopsSize,
                        /* [in][size_is] */ __RPC__in_ecount_full(__stopsSize) ABI::Lumia::Imaging::GradientStop *stops) = 0;
                    
                };

                extern const __declspec(selectany) IID & IID_IGradient = __uuidof(IGradient);

                
            }  /* end namespace */
        }  /* end namespace */
    }  /* end namespace */
    extern "C" { 
    
#else 	/* C style interface */

    typedef struct __x_ABI_CLumia_CImaging_CIGradientVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            __RPC__in __x_ABI_CLumia_CImaging_CIGradient * This,
            /* [in] */ __RPC__in REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            __RPC__in __x_ABI_CLumia_CImaging_CIGradient * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            __RPC__in __x_ABI_CLumia_CImaging_CIGradient * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetIids )( 
            __RPC__in __x_ABI_CLumia_CImaging_CIGradient * This,
            /* [out] */ __RPC__out ULONG *iidCount,
            /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
        
        HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )( 
            __RPC__in __x_ABI_CLumia_CImaging_CIGradient * This,
            /* [out] */ __RPC__deref_out_opt HSTRING *className);
        
        HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )( 
            __RPC__in __x_ABI_CLumia_CImaging_CIGradient * This,
            /* [out] */ __RPC__out TrustLevel *trustLevel);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_Stops )( 
            __RPC__in __x_ABI_CLumia_CImaging_CIGradient * This,
            /* [out] */ __RPC__out UINT32 *____returnValueSize,
            /* [out][retval][size_is][size_is] */ __RPC__deref_out_ecount_full_opt(*____returnValueSize) __x_ABI_CLumia_CImaging_CGradientStop **__returnValue);
        
        /* [propput] */ HRESULT ( STDMETHODCALLTYPE *put_Stops )( 
            __RPC__in __x_ABI_CLumia_CImaging_CIGradient * This,
            /* [in] */ UINT32 __stopsSize,
            /* [in][size_is] */ __RPC__in_ecount_full(__stopsSize) __x_ABI_CLumia_CImaging_CGradientStop *stops);
        
        END_INTERFACE
    } __x_ABI_CLumia_CImaging_CIGradientVtbl;

    interface __x_ABI_CLumia_CImaging_CIGradient
    {
        CONST_VTBL struct __x_ABI_CLumia_CImaging_CIGradientVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define __x_ABI_CLumia_CImaging_CIGradient_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __x_ABI_CLumia_CImaging_CIGradient_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __x_ABI_CLumia_CImaging_CIGradient_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __x_ABI_CLumia_CImaging_CIGradient_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 

#define __x_ABI_CLumia_CImaging_CIGradient_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 

#define __x_ABI_CLumia_CImaging_CIGradient_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 


#define __x_ABI_CLumia_CImaging_CIGradient_get_Stops(This,____returnValueSize,__returnValue)	\
    ( (This)->lpVtbl -> get_Stops(This,____returnValueSize,__returnValue) ) 

#define __x_ABI_CLumia_CImaging_CIGradient_put_Stops(This,__stopsSize,stops)	\
    ( (This)->lpVtbl -> put_Stops(This,__stopsSize,stops) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* ____x_ABI_CLumia_CImaging_CIGradient_INTERFACE_DEFINED__ */


/* interface __MIDL_itf_Lumia2EImaging_0000_0098 */
/* [local] */ 

#if !defined(____x_ABI_CLumia_CImaging_CIColorImageSource_INTERFACE_DEFINED__)
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Lumia_Imaging_IColorImageSource[] = L"Lumia.Imaging.IColorImageSource";
#endif /* !defined(____x_ABI_CLumia_CImaging_CIColorImageSource_INTERFACE_DEFINED__) */


/* interface __MIDL_itf_Lumia2EImaging_0000_0098 */
/* [local] */ 



extern RPC_IF_HANDLE __MIDL_itf_Lumia2EImaging_0000_0098_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_Lumia2EImaging_0000_0098_v0_0_s_ifspec;

#ifndef ____x_ABI_CLumia_CImaging_CIColorImageSource_INTERFACE_DEFINED__
#define ____x_ABI_CLumia_CImaging_CIColorImageSource_INTERFACE_DEFINED__

/* interface __x_ABI_CLumia_CImaging_CIColorImageSource */
/* [uuid][object] */ 



/* interface ABI::Lumia::Imaging::IColorImageSource */
/* [uuid][object] */ 


EXTERN_C const IID IID___x_ABI_CLumia_CImaging_CIColorImageSource;

#if defined(__cplusplus) && !defined(CINTERFACE)
    } /* end extern "C" */
    namespace ABI {
        namespace Lumia {
            namespace Imaging {
                
                MIDL_INTERFACE("980CECE6-D3AF-3FB0-BAB6-5B067CA46668")
                IColorImageSource : public IInspectable
                {
                public:
                    virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_Color( 
                        /* [out][retval] */ __RPC__out ABI::Windows::UI::Color *__returnValue) = 0;
                    
                    virtual /* [propput] */ HRESULT STDMETHODCALLTYPE put_Color( 
                        /* [in] */ ABI::Windows::UI::Color color) = 0;
                    
                };

                extern const __declspec(selectany) IID & IID_IColorImageSource = __uuidof(IColorImageSource);

                
            }  /* end namespace */
        }  /* end namespace */
    }  /* end namespace */
    extern "C" { 
    
#else 	/* C style interface */

    typedef struct __x_ABI_CLumia_CImaging_CIColorImageSourceVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            __RPC__in __x_ABI_CLumia_CImaging_CIColorImageSource * This,
            /* [in] */ __RPC__in REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            __RPC__in __x_ABI_CLumia_CImaging_CIColorImageSource * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            __RPC__in __x_ABI_CLumia_CImaging_CIColorImageSource * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetIids )( 
            __RPC__in __x_ABI_CLumia_CImaging_CIColorImageSource * This,
            /* [out] */ __RPC__out ULONG *iidCount,
            /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
        
        HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )( 
            __RPC__in __x_ABI_CLumia_CImaging_CIColorImageSource * This,
            /* [out] */ __RPC__deref_out_opt HSTRING *className);
        
        HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )( 
            __RPC__in __x_ABI_CLumia_CImaging_CIColorImageSource * This,
            /* [out] */ __RPC__out TrustLevel *trustLevel);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_Color )( 
            __RPC__in __x_ABI_CLumia_CImaging_CIColorImageSource * This,
            /* [out][retval] */ __RPC__out __x_ABI_CWindows_CUI_CColor *__returnValue);
        
        /* [propput] */ HRESULT ( STDMETHODCALLTYPE *put_Color )( 
            __RPC__in __x_ABI_CLumia_CImaging_CIColorImageSource * This,
            /* [in] */ __x_ABI_CWindows_CUI_CColor color);
        
        END_INTERFACE
    } __x_ABI_CLumia_CImaging_CIColorImageSourceVtbl;

    interface __x_ABI_CLumia_CImaging_CIColorImageSource
    {
        CONST_VTBL struct __x_ABI_CLumia_CImaging_CIColorImageSourceVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define __x_ABI_CLumia_CImaging_CIColorImageSource_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __x_ABI_CLumia_CImaging_CIColorImageSource_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __x_ABI_CLumia_CImaging_CIColorImageSource_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __x_ABI_CLumia_CImaging_CIColorImageSource_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 

#define __x_ABI_CLumia_CImaging_CIColorImageSource_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 

#define __x_ABI_CLumia_CImaging_CIColorImageSource_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 


#define __x_ABI_CLumia_CImaging_CIColorImageSource_get_Color(This,__returnValue)	\
    ( (This)->lpVtbl -> get_Color(This,__returnValue) ) 

#define __x_ABI_CLumia_CImaging_CIColorImageSource_put_Color(This,color)	\
    ( (This)->lpVtbl -> put_Color(This,color) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* ____x_ABI_CLumia_CImaging_CIColorImageSource_INTERFACE_DEFINED__ */


/* interface __MIDL_itf_Lumia2EImaging_0000_0099 */
/* [local] */ 

#if !defined(____x_ABI_CLumia_CImaging_CIColorImageSourceFactory_INTERFACE_DEFINED__)
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Lumia_Imaging_IColorImageSourceFactory[] = L"Lumia.Imaging.IColorImageSourceFactory";
#endif /* !defined(____x_ABI_CLumia_CImaging_CIColorImageSourceFactory_INTERFACE_DEFINED__) */


/* interface __MIDL_itf_Lumia2EImaging_0000_0099 */
/* [local] */ 



extern RPC_IF_HANDLE __MIDL_itf_Lumia2EImaging_0000_0099_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_Lumia2EImaging_0000_0099_v0_0_s_ifspec;

#ifndef ____x_ABI_CLumia_CImaging_CIColorImageSourceFactory_INTERFACE_DEFINED__
#define ____x_ABI_CLumia_CImaging_CIColorImageSourceFactory_INTERFACE_DEFINED__

/* interface __x_ABI_CLumia_CImaging_CIColorImageSourceFactory */
/* [uuid][object] */ 



/* interface ABI::Lumia::Imaging::IColorImageSourceFactory */
/* [uuid][object] */ 


EXTERN_C const IID IID___x_ABI_CLumia_CImaging_CIColorImageSourceFactory;

#if defined(__cplusplus) && !defined(CINTERFACE)
    } /* end extern "C" */
    namespace ABI {
        namespace Lumia {
            namespace Imaging {
                
                MIDL_INTERFACE("0E8927C7-5D2E-384B-9DE9-839A76F40322")
                IColorImageSourceFactory : public IInspectable
                {
                public:
                    virtual HRESULT STDMETHODCALLTYPE Create( 
                        /* [in] */ ABI::Windows::Foundation::Size size,
                        /* [in] */ ABI::Windows::UI::Color color,
                        /* [out][retval] */ __RPC__deref_out_opt ABI::Lumia::Imaging::IColorImageSource **__returnValue) = 0;
                    
                };

                extern const __declspec(selectany) IID & IID_IColorImageSourceFactory = __uuidof(IColorImageSourceFactory);

                
            }  /* end namespace */
        }  /* end namespace */
    }  /* end namespace */
    extern "C" { 
    
#else 	/* C style interface */

    typedef struct __x_ABI_CLumia_CImaging_CIColorImageSourceFactoryVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            __RPC__in __x_ABI_CLumia_CImaging_CIColorImageSourceFactory * This,
            /* [in] */ __RPC__in REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            __RPC__in __x_ABI_CLumia_CImaging_CIColorImageSourceFactory * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            __RPC__in __x_ABI_CLumia_CImaging_CIColorImageSourceFactory * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetIids )( 
            __RPC__in __x_ABI_CLumia_CImaging_CIColorImageSourceFactory * This,
            /* [out] */ __RPC__out ULONG *iidCount,
            /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
        
        HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )( 
            __RPC__in __x_ABI_CLumia_CImaging_CIColorImageSourceFactory * This,
            /* [out] */ __RPC__deref_out_opt HSTRING *className);
        
        HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )( 
            __RPC__in __x_ABI_CLumia_CImaging_CIColorImageSourceFactory * This,
            /* [out] */ __RPC__out TrustLevel *trustLevel);
        
        HRESULT ( STDMETHODCALLTYPE *Create )( 
            __RPC__in __x_ABI_CLumia_CImaging_CIColorImageSourceFactory * This,
            /* [in] */ __x_ABI_CWindows_CFoundation_CSize size,
            /* [in] */ __x_ABI_CWindows_CUI_CColor color,
            /* [out][retval] */ __RPC__deref_out_opt __x_ABI_CLumia_CImaging_CIColorImageSource **__returnValue);
        
        END_INTERFACE
    } __x_ABI_CLumia_CImaging_CIColorImageSourceFactoryVtbl;

    interface __x_ABI_CLumia_CImaging_CIColorImageSourceFactory
    {
        CONST_VTBL struct __x_ABI_CLumia_CImaging_CIColorImageSourceFactoryVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define __x_ABI_CLumia_CImaging_CIColorImageSourceFactory_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __x_ABI_CLumia_CImaging_CIColorImageSourceFactory_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __x_ABI_CLumia_CImaging_CIColorImageSourceFactory_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __x_ABI_CLumia_CImaging_CIColorImageSourceFactory_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 

#define __x_ABI_CLumia_CImaging_CIColorImageSourceFactory_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 

#define __x_ABI_CLumia_CImaging_CIColorImageSourceFactory_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 


#define __x_ABI_CLumia_CImaging_CIColorImageSourceFactory_Create(This,size,color,__returnValue)	\
    ( (This)->lpVtbl -> Create(This,size,color,__returnValue) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* ____x_ABI_CLumia_CImaging_CIColorImageSourceFactory_INTERFACE_DEFINED__ */


/* interface __MIDL_itf_Lumia2EImaging_0000_0100 */
/* [local] */ 

#if !defined(____x_ABI_CLumia_CImaging_CIVersion_INTERFACE_DEFINED__)
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Lumia_Imaging_IVersion[] = L"Lumia.Imaging.IVersion";
#endif /* !defined(____x_ABI_CLumia_CImaging_CIVersion_INTERFACE_DEFINED__) */


/* interface __MIDL_itf_Lumia2EImaging_0000_0100 */
/* [local] */ 



extern RPC_IF_HANDLE __MIDL_itf_Lumia2EImaging_0000_0100_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_Lumia2EImaging_0000_0100_v0_0_s_ifspec;

#ifndef ____x_ABI_CLumia_CImaging_CIVersion_INTERFACE_DEFINED__
#define ____x_ABI_CLumia_CImaging_CIVersion_INTERFACE_DEFINED__

/* interface __x_ABI_CLumia_CImaging_CIVersion */
/* [uuid][object] */ 



/* interface ABI::Lumia::Imaging::IVersion */
/* [uuid][object] */ 


EXTERN_C const IID IID___x_ABI_CLumia_CImaging_CIVersion;

#if defined(__cplusplus) && !defined(CINTERFACE)
    } /* end extern "C" */
    namespace ABI {
        namespace Lumia {
            namespace Imaging {
                
                MIDL_INTERFACE("9CBDCD12-05F2-3784-9FAA-8E30CBCE82D7")
                IVersion : public IInspectable
                {
                public:
                    virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_Major( 
                        /* [out][retval] */ __RPC__out INT32 *__returnValue) = 0;
                    
                    virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_Minor( 
                        /* [out][retval] */ __RPC__out INT32 *__returnValue) = 0;
                    
                    virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_Build( 
                        /* [out][retval] */ __RPC__out INT32 *__returnValue) = 0;
                    
                    virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_Revision( 
                        /* [out][retval] */ __RPC__out INT32 *__returnValue) = 0;
                    
                    virtual HRESULT STDMETHODCALLTYPE ToShortVersionString( 
                        /* [out][retval] */ __RPC__deref_out_opt HSTRING *__returnValue) = 0;
                    
                    virtual HRESULT STDMETHODCALLTYPE ToLongVersionString( 
                        /* [out][retval] */ __RPC__deref_out_opt HSTRING *__returnValue) = 0;
                    
                };

                extern const __declspec(selectany) IID & IID_IVersion = __uuidof(IVersion);

                
            }  /* end namespace */
        }  /* end namespace */
    }  /* end namespace */
    extern "C" { 
    
#else 	/* C style interface */

    typedef struct __x_ABI_CLumia_CImaging_CIVersionVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            __RPC__in __x_ABI_CLumia_CImaging_CIVersion * This,
            /* [in] */ __RPC__in REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            __RPC__in __x_ABI_CLumia_CImaging_CIVersion * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            __RPC__in __x_ABI_CLumia_CImaging_CIVersion * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetIids )( 
            __RPC__in __x_ABI_CLumia_CImaging_CIVersion * This,
            /* [out] */ __RPC__out ULONG *iidCount,
            /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
        
        HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )( 
            __RPC__in __x_ABI_CLumia_CImaging_CIVersion * This,
            /* [out] */ __RPC__deref_out_opt HSTRING *className);
        
        HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )( 
            __RPC__in __x_ABI_CLumia_CImaging_CIVersion * This,
            /* [out] */ __RPC__out TrustLevel *trustLevel);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_Major )( 
            __RPC__in __x_ABI_CLumia_CImaging_CIVersion * This,
            /* [out][retval] */ __RPC__out INT32 *__returnValue);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_Minor )( 
            __RPC__in __x_ABI_CLumia_CImaging_CIVersion * This,
            /* [out][retval] */ __RPC__out INT32 *__returnValue);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_Build )( 
            __RPC__in __x_ABI_CLumia_CImaging_CIVersion * This,
            /* [out][retval] */ __RPC__out INT32 *__returnValue);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_Revision )( 
            __RPC__in __x_ABI_CLumia_CImaging_CIVersion * This,
            /* [out][retval] */ __RPC__out INT32 *__returnValue);
        
        HRESULT ( STDMETHODCALLTYPE *ToShortVersionString )( 
            __RPC__in __x_ABI_CLumia_CImaging_CIVersion * This,
            /* [out][retval] */ __RPC__deref_out_opt HSTRING *__returnValue);
        
        HRESULT ( STDMETHODCALLTYPE *ToLongVersionString )( 
            __RPC__in __x_ABI_CLumia_CImaging_CIVersion * This,
            /* [out][retval] */ __RPC__deref_out_opt HSTRING *__returnValue);
        
        END_INTERFACE
    } __x_ABI_CLumia_CImaging_CIVersionVtbl;

    interface __x_ABI_CLumia_CImaging_CIVersion
    {
        CONST_VTBL struct __x_ABI_CLumia_CImaging_CIVersionVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define __x_ABI_CLumia_CImaging_CIVersion_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __x_ABI_CLumia_CImaging_CIVersion_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __x_ABI_CLumia_CImaging_CIVersion_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __x_ABI_CLumia_CImaging_CIVersion_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 

#define __x_ABI_CLumia_CImaging_CIVersion_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 

#define __x_ABI_CLumia_CImaging_CIVersion_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 


#define __x_ABI_CLumia_CImaging_CIVersion_get_Major(This,__returnValue)	\
    ( (This)->lpVtbl -> get_Major(This,__returnValue) ) 

#define __x_ABI_CLumia_CImaging_CIVersion_get_Minor(This,__returnValue)	\
    ( (This)->lpVtbl -> get_Minor(This,__returnValue) ) 

#define __x_ABI_CLumia_CImaging_CIVersion_get_Build(This,__returnValue)	\
    ( (This)->lpVtbl -> get_Build(This,__returnValue) ) 

#define __x_ABI_CLumia_CImaging_CIVersion_get_Revision(This,__returnValue)	\
    ( (This)->lpVtbl -> get_Revision(This,__returnValue) ) 

#define __x_ABI_CLumia_CImaging_CIVersion_ToShortVersionString(This,__returnValue)	\
    ( (This)->lpVtbl -> ToShortVersionString(This,__returnValue) ) 

#define __x_ABI_CLumia_CImaging_CIVersion_ToLongVersionString(This,__returnValue)	\
    ( (This)->lpVtbl -> ToLongVersionString(This,__returnValue) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* ____x_ABI_CLumia_CImaging_CIVersion_INTERFACE_DEFINED__ */


/* interface __MIDL_itf_Lumia2EImaging_0000_0101 */
/* [local] */ 

#if !defined(____x_ABI_CLumia_CImaging_CIVersionFactory_INTERFACE_DEFINED__)
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Lumia_Imaging_IVersionFactory[] = L"Lumia.Imaging.IVersionFactory";
#endif /* !defined(____x_ABI_CLumia_CImaging_CIVersionFactory_INTERFACE_DEFINED__) */


/* interface __MIDL_itf_Lumia2EImaging_0000_0101 */
/* [local] */ 



extern RPC_IF_HANDLE __MIDL_itf_Lumia2EImaging_0000_0101_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_Lumia2EImaging_0000_0101_v0_0_s_ifspec;

#ifndef ____x_ABI_CLumia_CImaging_CIVersionFactory_INTERFACE_DEFINED__
#define ____x_ABI_CLumia_CImaging_CIVersionFactory_INTERFACE_DEFINED__

/* interface __x_ABI_CLumia_CImaging_CIVersionFactory */
/* [uuid][object] */ 



/* interface ABI::Lumia::Imaging::IVersionFactory */
/* [uuid][object] */ 


EXTERN_C const IID IID___x_ABI_CLumia_CImaging_CIVersionFactory;

#if defined(__cplusplus) && !defined(CINTERFACE)
    } /* end extern "C" */
    namespace ABI {
        namespace Lumia {
            namespace Imaging {
                
                MIDL_INTERFACE("A44E0055-EE40-33ED-B23A-9EC91E2F3B30")
                IVersionFactory : public IInspectable
                {
                public:
                    virtual HRESULT STDMETHODCALLTYPE Create( 
                        /* [in] */ INT32 major,
                        /* [in] */ INT32 minor,
                        /* [in] */ INT32 build,
                        /* [in] */ INT32 revision,
                        /* [out][retval] */ __RPC__deref_out_opt ABI::Lumia::Imaging::IVersion **__returnValue) = 0;
                    
                    virtual HRESULT STDMETHODCALLTYPE CreateFromString( 
                        /* [in] */ __RPC__in HSTRING version,
                        /* [out][retval] */ __RPC__deref_out_opt ABI::Lumia::Imaging::IVersion **__returnValue) = 0;
                    
                };

                extern const __declspec(selectany) IID & IID_IVersionFactory = __uuidof(IVersionFactory);

                
            }  /* end namespace */
        }  /* end namespace */
    }  /* end namespace */
    extern "C" { 
    
#else 	/* C style interface */

    typedef struct __x_ABI_CLumia_CImaging_CIVersionFactoryVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            __RPC__in __x_ABI_CLumia_CImaging_CIVersionFactory * This,
            /* [in] */ __RPC__in REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            __RPC__in __x_ABI_CLumia_CImaging_CIVersionFactory * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            __RPC__in __x_ABI_CLumia_CImaging_CIVersionFactory * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetIids )( 
            __RPC__in __x_ABI_CLumia_CImaging_CIVersionFactory * This,
            /* [out] */ __RPC__out ULONG *iidCount,
            /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
        
        HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )( 
            __RPC__in __x_ABI_CLumia_CImaging_CIVersionFactory * This,
            /* [out] */ __RPC__deref_out_opt HSTRING *className);
        
        HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )( 
            __RPC__in __x_ABI_CLumia_CImaging_CIVersionFactory * This,
            /* [out] */ __RPC__out TrustLevel *trustLevel);
        
        HRESULT ( STDMETHODCALLTYPE *Create )( 
            __RPC__in __x_ABI_CLumia_CImaging_CIVersionFactory * This,
            /* [in] */ INT32 major,
            /* [in] */ INT32 minor,
            /* [in] */ INT32 build,
            /* [in] */ INT32 revision,
            /* [out][retval] */ __RPC__deref_out_opt __x_ABI_CLumia_CImaging_CIVersion **__returnValue);
        
        HRESULT ( STDMETHODCALLTYPE *CreateFromString )( 
            __RPC__in __x_ABI_CLumia_CImaging_CIVersionFactory * This,
            /* [in] */ __RPC__in HSTRING version,
            /* [out][retval] */ __RPC__deref_out_opt __x_ABI_CLumia_CImaging_CIVersion **__returnValue);
        
        END_INTERFACE
    } __x_ABI_CLumia_CImaging_CIVersionFactoryVtbl;

    interface __x_ABI_CLumia_CImaging_CIVersionFactory
    {
        CONST_VTBL struct __x_ABI_CLumia_CImaging_CIVersionFactoryVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define __x_ABI_CLumia_CImaging_CIVersionFactory_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __x_ABI_CLumia_CImaging_CIVersionFactory_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __x_ABI_CLumia_CImaging_CIVersionFactory_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __x_ABI_CLumia_CImaging_CIVersionFactory_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 

#define __x_ABI_CLumia_CImaging_CIVersionFactory_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 

#define __x_ABI_CLumia_CImaging_CIVersionFactory_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 


#define __x_ABI_CLumia_CImaging_CIVersionFactory_Create(This,major,minor,build,revision,__returnValue)	\
    ( (This)->lpVtbl -> Create(This,major,minor,build,revision,__returnValue) ) 

#define __x_ABI_CLumia_CImaging_CIVersionFactory_CreateFromString(This,version,__returnValue)	\
    ( (This)->lpVtbl -> CreateFromString(This,version,__returnValue) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* ____x_ABI_CLumia_CImaging_CIVersionFactory_INTERFACE_DEFINED__ */


/* interface __MIDL_itf_Lumia2EImaging_0000_0102 */
/* [local] */ 

#if !defined(____x_ABI_CLumia_CImaging_CISdkInfo_INTERFACE_DEFINED__)
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Lumia_Imaging_ISdkInfo[] = L"Lumia.Imaging.ISdkInfo";
#endif /* !defined(____x_ABI_CLumia_CImaging_CISdkInfo_INTERFACE_DEFINED__) */


/* interface __MIDL_itf_Lumia2EImaging_0000_0102 */
/* [local] */ 



extern RPC_IF_HANDLE __MIDL_itf_Lumia2EImaging_0000_0102_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_Lumia2EImaging_0000_0102_v0_0_s_ifspec;

#ifndef ____x_ABI_CLumia_CImaging_CISdkInfo_INTERFACE_DEFINED__
#define ____x_ABI_CLumia_CImaging_CISdkInfo_INTERFACE_DEFINED__

/* interface __x_ABI_CLumia_CImaging_CISdkInfo */
/* [uuid][object] */ 



/* interface ABI::Lumia::Imaging::ISdkInfo */
/* [uuid][object] */ 


EXTERN_C const IID IID___x_ABI_CLumia_CImaging_CISdkInfo;

#if defined(__cplusplus) && !defined(CINTERFACE)
    } /* end extern "C" */
    namespace ABI {
        namespace Lumia {
            namespace Imaging {
                
                MIDL_INTERFACE("03E5F6CD-85BE-37A5-973E-A3BF8FCA5BA1")
                ISdkInfo : public IInspectable
                {
                public:
                };

                extern const __declspec(selectany) IID & IID_ISdkInfo = __uuidof(ISdkInfo);

                
            }  /* end namespace */
        }  /* end namespace */
    }  /* end namespace */
    extern "C" { 
    
#else 	/* C style interface */

    typedef struct __x_ABI_CLumia_CImaging_CISdkInfoVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            __RPC__in __x_ABI_CLumia_CImaging_CISdkInfo * This,
            /* [in] */ __RPC__in REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            __RPC__in __x_ABI_CLumia_CImaging_CISdkInfo * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            __RPC__in __x_ABI_CLumia_CImaging_CISdkInfo * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetIids )( 
            __RPC__in __x_ABI_CLumia_CImaging_CISdkInfo * This,
            /* [out] */ __RPC__out ULONG *iidCount,
            /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
        
        HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )( 
            __RPC__in __x_ABI_CLumia_CImaging_CISdkInfo * This,
            /* [out] */ __RPC__deref_out_opt HSTRING *className);
        
        HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )( 
            __RPC__in __x_ABI_CLumia_CImaging_CISdkInfo * This,
            /* [out] */ __RPC__out TrustLevel *trustLevel);
        
        END_INTERFACE
    } __x_ABI_CLumia_CImaging_CISdkInfoVtbl;

    interface __x_ABI_CLumia_CImaging_CISdkInfo
    {
        CONST_VTBL struct __x_ABI_CLumia_CImaging_CISdkInfoVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define __x_ABI_CLumia_CImaging_CISdkInfo_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __x_ABI_CLumia_CImaging_CISdkInfo_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __x_ABI_CLumia_CImaging_CISdkInfo_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __x_ABI_CLumia_CImaging_CISdkInfo_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 

#define __x_ABI_CLumia_CImaging_CISdkInfo_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 

#define __x_ABI_CLumia_CImaging_CISdkInfo_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 


#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* ____x_ABI_CLumia_CImaging_CISdkInfo_INTERFACE_DEFINED__ */


/* interface __MIDL_itf_Lumia2EImaging_0000_0103 */
/* [local] */ 

#if !defined(____x_ABI_CLumia_CImaging_CISdkInfoStatics_INTERFACE_DEFINED__)
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Lumia_Imaging_ISdkInfoStatics[] = L"Lumia.Imaging.ISdkInfoStatics";
#endif /* !defined(____x_ABI_CLumia_CImaging_CISdkInfoStatics_INTERFACE_DEFINED__) */


/* interface __MIDL_itf_Lumia2EImaging_0000_0103 */
/* [local] */ 



extern RPC_IF_HANDLE __MIDL_itf_Lumia2EImaging_0000_0103_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_Lumia2EImaging_0000_0103_v0_0_s_ifspec;

#ifndef ____x_ABI_CLumia_CImaging_CISdkInfoStatics_INTERFACE_DEFINED__
#define ____x_ABI_CLumia_CImaging_CISdkInfoStatics_INTERFACE_DEFINED__

/* interface __x_ABI_CLumia_CImaging_CISdkInfoStatics */
/* [uuid][object] */ 



/* interface ABI::Lumia::Imaging::ISdkInfoStatics */
/* [uuid][object] */ 


EXTERN_C const IID IID___x_ABI_CLumia_CImaging_CISdkInfoStatics;

#if defined(__cplusplus) && !defined(CINTERFACE)
    } /* end extern "C" */
    namespace ABI {
        namespace Lumia {
            namespace Imaging {
                
                MIDL_INTERFACE("029BA710-1A50-30A0-B749-6D2C07A86193")
                ISdkInfoStatics : public IInspectable
                {
                public:
                    virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_Version( 
                        /* [out][retval] */ __RPC__deref_out_opt ABI::Lumia::Imaging::IVersion **__returnValue) = 0;
                    
                };

                extern const __declspec(selectany) IID & IID_ISdkInfoStatics = __uuidof(ISdkInfoStatics);

                
            }  /* end namespace */
        }  /* end namespace */
    }  /* end namespace */
    extern "C" { 
    
#else 	/* C style interface */

    typedef struct __x_ABI_CLumia_CImaging_CISdkInfoStaticsVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            __RPC__in __x_ABI_CLumia_CImaging_CISdkInfoStatics * This,
            /* [in] */ __RPC__in REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            __RPC__in __x_ABI_CLumia_CImaging_CISdkInfoStatics * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            __RPC__in __x_ABI_CLumia_CImaging_CISdkInfoStatics * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetIids )( 
            __RPC__in __x_ABI_CLumia_CImaging_CISdkInfoStatics * This,
            /* [out] */ __RPC__out ULONG *iidCount,
            /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
        
        HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )( 
            __RPC__in __x_ABI_CLumia_CImaging_CISdkInfoStatics * This,
            /* [out] */ __RPC__deref_out_opt HSTRING *className);
        
        HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )( 
            __RPC__in __x_ABI_CLumia_CImaging_CISdkInfoStatics * This,
            /* [out] */ __RPC__out TrustLevel *trustLevel);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_Version )( 
            __RPC__in __x_ABI_CLumia_CImaging_CISdkInfoStatics * This,
            /* [out][retval] */ __RPC__deref_out_opt __x_ABI_CLumia_CImaging_CIVersion **__returnValue);
        
        END_INTERFACE
    } __x_ABI_CLumia_CImaging_CISdkInfoStaticsVtbl;

    interface __x_ABI_CLumia_CImaging_CISdkInfoStatics
    {
        CONST_VTBL struct __x_ABI_CLumia_CImaging_CISdkInfoStaticsVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define __x_ABI_CLumia_CImaging_CISdkInfoStatics_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __x_ABI_CLumia_CImaging_CISdkInfoStatics_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __x_ABI_CLumia_CImaging_CISdkInfoStatics_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __x_ABI_CLumia_CImaging_CISdkInfoStatics_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 

#define __x_ABI_CLumia_CImaging_CISdkInfoStatics_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 

#define __x_ABI_CLumia_CImaging_CISdkInfoStatics_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 


#define __x_ABI_CLumia_CImaging_CISdkInfoStatics_get_Version(This,__returnValue)	\
    ( (This)->lpVtbl -> get_Version(This,__returnValue) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* ____x_ABI_CLumia_CImaging_CISdkInfoStatics_INTERFACE_DEFINED__ */


/* interface __MIDL_itf_Lumia2EImaging_0000_0104 */
/* [local] */ 

#if !defined(____x_ABI_CLumia_CImaging_CIEllipseRadius_INTERFACE_DEFINED__)
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Lumia_Imaging_IEllipseRadius[] = L"Lumia.Imaging.IEllipseRadius";
#endif /* !defined(____x_ABI_CLumia_CImaging_CIEllipseRadius_INTERFACE_DEFINED__) */


/* interface __MIDL_itf_Lumia2EImaging_0000_0104 */
/* [local] */ 



extern RPC_IF_HANDLE __MIDL_itf_Lumia2EImaging_0000_0104_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_Lumia2EImaging_0000_0104_v0_0_s_ifspec;

#ifndef ____x_ABI_CLumia_CImaging_CIEllipseRadius_INTERFACE_DEFINED__
#define ____x_ABI_CLumia_CImaging_CIEllipseRadius_INTERFACE_DEFINED__

/* interface __x_ABI_CLumia_CImaging_CIEllipseRadius */
/* [uuid][object] */ 



/* interface ABI::Lumia::Imaging::IEllipseRadius */
/* [uuid][object] */ 


EXTERN_C const IID IID___x_ABI_CLumia_CImaging_CIEllipseRadius;

#if defined(__cplusplus) && !defined(CINTERFACE)
    } /* end extern "C" */
    namespace ABI {
        namespace Lumia {
            namespace Imaging {
                
                MIDL_INTERFACE("CB184472-F106-3C94-A956-7998D305C7BD")
                IEllipseRadius : public IInspectable
                {
                public:
                    virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_X( 
                        /* [out][retval] */ __RPC__out DOUBLE *__returnValue) = 0;
                    
                    virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_Y( 
                        /* [out][retval] */ __RPC__out DOUBLE *__returnValue) = 0;
                    
                };

                extern const __declspec(selectany) IID & IID_IEllipseRadius = __uuidof(IEllipseRadius);

                
            }  /* end namespace */
        }  /* end namespace */
    }  /* end namespace */
    extern "C" { 
    
#else 	/* C style interface */

    typedef struct __x_ABI_CLumia_CImaging_CIEllipseRadiusVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            __RPC__in __x_ABI_CLumia_CImaging_CIEllipseRadius * This,
            /* [in] */ __RPC__in REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            __RPC__in __x_ABI_CLumia_CImaging_CIEllipseRadius * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            __RPC__in __x_ABI_CLumia_CImaging_CIEllipseRadius * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetIids )( 
            __RPC__in __x_ABI_CLumia_CImaging_CIEllipseRadius * This,
            /* [out] */ __RPC__out ULONG *iidCount,
            /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
        
        HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )( 
            __RPC__in __x_ABI_CLumia_CImaging_CIEllipseRadius * This,
            /* [out] */ __RPC__deref_out_opt HSTRING *className);
        
        HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )( 
            __RPC__in __x_ABI_CLumia_CImaging_CIEllipseRadius * This,
            /* [out] */ __RPC__out TrustLevel *trustLevel);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_X )( 
            __RPC__in __x_ABI_CLumia_CImaging_CIEllipseRadius * This,
            /* [out][retval] */ __RPC__out DOUBLE *__returnValue);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_Y )( 
            __RPC__in __x_ABI_CLumia_CImaging_CIEllipseRadius * This,
            /* [out][retval] */ __RPC__out DOUBLE *__returnValue);
        
        END_INTERFACE
    } __x_ABI_CLumia_CImaging_CIEllipseRadiusVtbl;

    interface __x_ABI_CLumia_CImaging_CIEllipseRadius
    {
        CONST_VTBL struct __x_ABI_CLumia_CImaging_CIEllipseRadiusVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define __x_ABI_CLumia_CImaging_CIEllipseRadius_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __x_ABI_CLumia_CImaging_CIEllipseRadius_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __x_ABI_CLumia_CImaging_CIEllipseRadius_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __x_ABI_CLumia_CImaging_CIEllipseRadius_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 

#define __x_ABI_CLumia_CImaging_CIEllipseRadius_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 

#define __x_ABI_CLumia_CImaging_CIEllipseRadius_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 


#define __x_ABI_CLumia_CImaging_CIEllipseRadius_get_X(This,__returnValue)	\
    ( (This)->lpVtbl -> get_X(This,__returnValue) ) 

#define __x_ABI_CLumia_CImaging_CIEllipseRadius_get_Y(This,__returnValue)	\
    ( (This)->lpVtbl -> get_Y(This,__returnValue) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* ____x_ABI_CLumia_CImaging_CIEllipseRadius_INTERFACE_DEFINED__ */


/* interface __MIDL_itf_Lumia2EImaging_0000_0105 */
/* [local] */ 

#if !defined(____x_ABI_CLumia_CImaging_CIEllipseRadiusFactory_INTERFACE_DEFINED__)
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Lumia_Imaging_IEllipseRadiusFactory[] = L"Lumia.Imaging.IEllipseRadiusFactory";
#endif /* !defined(____x_ABI_CLumia_CImaging_CIEllipseRadiusFactory_INTERFACE_DEFINED__) */


/* interface __MIDL_itf_Lumia2EImaging_0000_0105 */
/* [local] */ 



extern RPC_IF_HANDLE __MIDL_itf_Lumia2EImaging_0000_0105_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_Lumia2EImaging_0000_0105_v0_0_s_ifspec;

#ifndef ____x_ABI_CLumia_CImaging_CIEllipseRadiusFactory_INTERFACE_DEFINED__
#define ____x_ABI_CLumia_CImaging_CIEllipseRadiusFactory_INTERFACE_DEFINED__

/* interface __x_ABI_CLumia_CImaging_CIEllipseRadiusFactory */
/* [uuid][object] */ 



/* interface ABI::Lumia::Imaging::IEllipseRadiusFactory */
/* [uuid][object] */ 


EXTERN_C const IID IID___x_ABI_CLumia_CImaging_CIEllipseRadiusFactory;

#if defined(__cplusplus) && !defined(CINTERFACE)
    } /* end extern "C" */
    namespace ABI {
        namespace Lumia {
            namespace Imaging {
                
                MIDL_INTERFACE("027A495E-E2CB-35B8-9625-146FBB291495")
                IEllipseRadiusFactory : public IInspectable
                {
                public:
                    virtual HRESULT STDMETHODCALLTYPE Create( 
                        /* [in] */ DOUBLE x,
                        /* [in] */ DOUBLE y,
                        /* [out][retval] */ __RPC__deref_out_opt ABI::Lumia::Imaging::IEllipseRadius **__returnValue) = 0;
                    
                };

                extern const __declspec(selectany) IID & IID_IEllipseRadiusFactory = __uuidof(IEllipseRadiusFactory);

                
            }  /* end namespace */
        }  /* end namespace */
    }  /* end namespace */
    extern "C" { 
    
#else 	/* C style interface */

    typedef struct __x_ABI_CLumia_CImaging_CIEllipseRadiusFactoryVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            __RPC__in __x_ABI_CLumia_CImaging_CIEllipseRadiusFactory * This,
            /* [in] */ __RPC__in REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            __RPC__in __x_ABI_CLumia_CImaging_CIEllipseRadiusFactory * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            __RPC__in __x_ABI_CLumia_CImaging_CIEllipseRadiusFactory * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetIids )( 
            __RPC__in __x_ABI_CLumia_CImaging_CIEllipseRadiusFactory * This,
            /* [out] */ __RPC__out ULONG *iidCount,
            /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
        
        HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )( 
            __RPC__in __x_ABI_CLumia_CImaging_CIEllipseRadiusFactory * This,
            /* [out] */ __RPC__deref_out_opt HSTRING *className);
        
        HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )( 
            __RPC__in __x_ABI_CLumia_CImaging_CIEllipseRadiusFactory * This,
            /* [out] */ __RPC__out TrustLevel *trustLevel);
        
        HRESULT ( STDMETHODCALLTYPE *Create )( 
            __RPC__in __x_ABI_CLumia_CImaging_CIEllipseRadiusFactory * This,
            /* [in] */ DOUBLE x,
            /* [in] */ DOUBLE y,
            /* [out][retval] */ __RPC__deref_out_opt __x_ABI_CLumia_CImaging_CIEllipseRadius **__returnValue);
        
        END_INTERFACE
    } __x_ABI_CLumia_CImaging_CIEllipseRadiusFactoryVtbl;

    interface __x_ABI_CLumia_CImaging_CIEllipseRadiusFactory
    {
        CONST_VTBL struct __x_ABI_CLumia_CImaging_CIEllipseRadiusFactoryVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define __x_ABI_CLumia_CImaging_CIEllipseRadiusFactory_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __x_ABI_CLumia_CImaging_CIEllipseRadiusFactory_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __x_ABI_CLumia_CImaging_CIEllipseRadiusFactory_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __x_ABI_CLumia_CImaging_CIEllipseRadiusFactory_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 

#define __x_ABI_CLumia_CImaging_CIEllipseRadiusFactory_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 

#define __x_ABI_CLumia_CImaging_CIEllipseRadiusFactory_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 


#define __x_ABI_CLumia_CImaging_CIEllipseRadiusFactory_Create(This,x,y,__returnValue)	\
    ( (This)->lpVtbl -> Create(This,x,y,__returnValue) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* ____x_ABI_CLumia_CImaging_CIEllipseRadiusFactory_INTERFACE_DEFINED__ */


/* interface __MIDL_itf_Lumia2EImaging_0000_0106 */
/* [local] */ 

#if !defined(____x_ABI_CLumia_CImaging_CIFilterEffectFactory_INTERFACE_DEFINED__)
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Lumia_Imaging_IFilterEffectFactory[] = L"Lumia.Imaging.IFilterEffectFactory";
#endif /* !defined(____x_ABI_CLumia_CImaging_CIFilterEffectFactory_INTERFACE_DEFINED__) */


/* interface __MIDL_itf_Lumia2EImaging_0000_0106 */
/* [local] */ 



extern RPC_IF_HANDLE __MIDL_itf_Lumia2EImaging_0000_0106_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_Lumia2EImaging_0000_0106_v0_0_s_ifspec;

#ifndef ____x_ABI_CLumia_CImaging_CIFilterEffectFactory_INTERFACE_DEFINED__
#define ____x_ABI_CLumia_CImaging_CIFilterEffectFactory_INTERFACE_DEFINED__

/* interface __x_ABI_CLumia_CImaging_CIFilterEffectFactory */
/* [uuid][object] */ 



/* interface ABI::Lumia::Imaging::IFilterEffectFactory */
/* [uuid][object] */ 


EXTERN_C const IID IID___x_ABI_CLumia_CImaging_CIFilterEffectFactory;

#if defined(__cplusplus) && !defined(CINTERFACE)
    } /* end extern "C" */
    namespace ABI {
        namespace Lumia {
            namespace Imaging {
                
                MIDL_INTERFACE("D95F9EF3-CABD-32BC-BB95-9FDFE56C5C38")
                IFilterEffectFactory : public IInspectable
                {
                public:
                    virtual HRESULT STDMETHODCALLTYPE Create( 
                        /* [in] */ __RPC__in_opt ABI::Lumia::Imaging::IImageProvider *imageSource,
                        /* [out][retval] */ __RPC__deref_out_opt ABI::Lumia::Imaging::IFilterEffect **__returnValue) = 0;
                    
                };

                extern const __declspec(selectany) IID & IID_IFilterEffectFactory = __uuidof(IFilterEffectFactory);

                
            }  /* end namespace */
        }  /* end namespace */
    }  /* end namespace */
    extern "C" { 
    
#else 	/* C style interface */

    typedef struct __x_ABI_CLumia_CImaging_CIFilterEffectFactoryVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            __RPC__in __x_ABI_CLumia_CImaging_CIFilterEffectFactory * This,
            /* [in] */ __RPC__in REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            __RPC__in __x_ABI_CLumia_CImaging_CIFilterEffectFactory * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            __RPC__in __x_ABI_CLumia_CImaging_CIFilterEffectFactory * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetIids )( 
            __RPC__in __x_ABI_CLumia_CImaging_CIFilterEffectFactory * This,
            /* [out] */ __RPC__out ULONG *iidCount,
            /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
        
        HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )( 
            __RPC__in __x_ABI_CLumia_CImaging_CIFilterEffectFactory * This,
            /* [out] */ __RPC__deref_out_opt HSTRING *className);
        
        HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )( 
            __RPC__in __x_ABI_CLumia_CImaging_CIFilterEffectFactory * This,
            /* [out] */ __RPC__out TrustLevel *trustLevel);
        
        HRESULT ( STDMETHODCALLTYPE *Create )( 
            __RPC__in __x_ABI_CLumia_CImaging_CIFilterEffectFactory * This,
            /* [in] */ __RPC__in_opt __x_ABI_CLumia_CImaging_CIImageProvider *imageSource,
            /* [out][retval] */ __RPC__deref_out_opt __x_ABI_CLumia_CImaging_CIFilterEffect **__returnValue);
        
        END_INTERFACE
    } __x_ABI_CLumia_CImaging_CIFilterEffectFactoryVtbl;

    interface __x_ABI_CLumia_CImaging_CIFilterEffectFactory
    {
        CONST_VTBL struct __x_ABI_CLumia_CImaging_CIFilterEffectFactoryVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define __x_ABI_CLumia_CImaging_CIFilterEffectFactory_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __x_ABI_CLumia_CImaging_CIFilterEffectFactory_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __x_ABI_CLumia_CImaging_CIFilterEffectFactory_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __x_ABI_CLumia_CImaging_CIFilterEffectFactory_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 

#define __x_ABI_CLumia_CImaging_CIFilterEffectFactory_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 

#define __x_ABI_CLumia_CImaging_CIFilterEffectFactory_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 


#define __x_ABI_CLumia_CImaging_CIFilterEffectFactory_Create(This,imageSource,__returnValue)	\
    ( (This)->lpVtbl -> Create(This,imageSource,__returnValue) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* ____x_ABI_CLumia_CImaging_CIFilterEffectFactory_INTERFACE_DEFINED__ */


/* interface __MIDL_itf_Lumia2EImaging_0000_0107 */
/* [local] */ 

#if !defined(____x_ABI_CLumia_CImaging_CIGifRenderer_INTERFACE_DEFINED__)
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Lumia_Imaging_IGifRenderer[] = L"Lumia.Imaging.IGifRenderer";
#endif /* !defined(____x_ABI_CLumia_CImaging_CIGifRenderer_INTERFACE_DEFINED__) */


/* interface __MIDL_itf_Lumia2EImaging_0000_0107 */
/* [local] */ 



extern RPC_IF_HANDLE __MIDL_itf_Lumia2EImaging_0000_0107_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_Lumia2EImaging_0000_0107_v0_0_s_ifspec;

#ifndef ____x_ABI_CLumia_CImaging_CIGifRenderer_INTERFACE_DEFINED__
#define ____x_ABI_CLumia_CImaging_CIGifRenderer_INTERFACE_DEFINED__

/* interface __x_ABI_CLumia_CImaging_CIGifRenderer */
/* [uuid][object] */ 



/* interface ABI::Lumia::Imaging::IGifRenderer */
/* [uuid][object] */ 


EXTERN_C const IID IID___x_ABI_CLumia_CImaging_CIGifRenderer;

#if defined(__cplusplus) && !defined(CINTERFACE)
    } /* end extern "C" */
    namespace ABI {
        namespace Lumia {
            namespace Imaging {
                
                MIDL_INTERFACE("84D6EFC8-ACC5-3A53-89E2-0564F0A79821")
                IGifRenderer : public IInspectable
                {
                public:
                    virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_Sources( 
                        /* [out][retval] */ __RPC__deref_out_opt __FIVectorView_1_Lumia__CImaging__CIImageProvider **__returnValue) = 0;
                    
                    virtual /* [propput] */ HRESULT STDMETHODCALLTYPE put_Sources( 
                        /* [in] */ __RPC__in_opt __FIVectorView_1_Lumia__CImaging__CIImageProvider *imageSources) = 0;
                    
                    virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_Size( 
                        /* [out][retval] */ __RPC__out ABI::Windows::Foundation::Size *__returnValue) = 0;
                    
                    virtual /* [propput] */ HRESULT STDMETHODCALLTYPE put_Size( 
                        /* [in] */ ABI::Windows::Foundation::Size size) = 0;
                    
                    virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_Duration( 
                        /* [out][retval] */ __RPC__out INT32 *__returnValue) = 0;
                    
                    virtual /* [propput] */ HRESULT STDMETHODCALLTYPE put_Duration( 
                        /* [in] */ INT32 duration) = 0;
                    
                    virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_NumberOfAnimationLoops( 
                        /* [out][retval] */ __RPC__out INT32 *__returnValue) = 0;
                    
                    virtual /* [propput] */ HRESULT STDMETHODCALLTYPE put_NumberOfAnimationLoops( 
                        /* [in] */ INT32 numberOfAnimationLoops) = 0;
                    
                    virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_ApplyDithering( 
                        /* [out][retval] */ __RPC__out boolean *__returnValue) = 0;
                    
                    virtual /* [propput] */ HRESULT STDMETHODCALLTYPE put_ApplyDithering( 
                        /* [in] */ boolean value) = 0;
                    
                    virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_UseGlobalPalette( 
                        /* [out][retval] */ __RPC__out boolean *__returnValue) = 0;
                    
                    virtual /* [propput] */ HRESULT STDMETHODCALLTYPE put_UseGlobalPalette( 
                        /* [in] */ boolean value) = 0;
                    
                    virtual HRESULT STDMETHODCALLTYPE RenderAsync( 
                        /* [out][retval] */ __RPC__deref_out_opt __FIAsyncOperation_1_Windows__CStorage__CStreams__CIBuffer **__returnValue) = 0;
                    
                };

                extern const __declspec(selectany) IID & IID_IGifRenderer = __uuidof(IGifRenderer);

                
            }  /* end namespace */
        }  /* end namespace */
    }  /* end namespace */
    extern "C" { 
    
#else 	/* C style interface */

    typedef struct __x_ABI_CLumia_CImaging_CIGifRendererVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            __RPC__in __x_ABI_CLumia_CImaging_CIGifRenderer * This,
            /* [in] */ __RPC__in REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            __RPC__in __x_ABI_CLumia_CImaging_CIGifRenderer * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            __RPC__in __x_ABI_CLumia_CImaging_CIGifRenderer * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetIids )( 
            __RPC__in __x_ABI_CLumia_CImaging_CIGifRenderer * This,
            /* [out] */ __RPC__out ULONG *iidCount,
            /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
        
        HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )( 
            __RPC__in __x_ABI_CLumia_CImaging_CIGifRenderer * This,
            /* [out] */ __RPC__deref_out_opt HSTRING *className);
        
        HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )( 
            __RPC__in __x_ABI_CLumia_CImaging_CIGifRenderer * This,
            /* [out] */ __RPC__out TrustLevel *trustLevel);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_Sources )( 
            __RPC__in __x_ABI_CLumia_CImaging_CIGifRenderer * This,
            /* [out][retval] */ __RPC__deref_out_opt __FIVectorView_1_Lumia__CImaging__CIImageProvider **__returnValue);
        
        /* [propput] */ HRESULT ( STDMETHODCALLTYPE *put_Sources )( 
            __RPC__in __x_ABI_CLumia_CImaging_CIGifRenderer * This,
            /* [in] */ __RPC__in_opt __FIVectorView_1_Lumia__CImaging__CIImageProvider *imageSources);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_Size )( 
            __RPC__in __x_ABI_CLumia_CImaging_CIGifRenderer * This,
            /* [out][retval] */ __RPC__out __x_ABI_CWindows_CFoundation_CSize *__returnValue);
        
        /* [propput] */ HRESULT ( STDMETHODCALLTYPE *put_Size )( 
            __RPC__in __x_ABI_CLumia_CImaging_CIGifRenderer * This,
            /* [in] */ __x_ABI_CWindows_CFoundation_CSize size);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_Duration )( 
            __RPC__in __x_ABI_CLumia_CImaging_CIGifRenderer * This,
            /* [out][retval] */ __RPC__out INT32 *__returnValue);
        
        /* [propput] */ HRESULT ( STDMETHODCALLTYPE *put_Duration )( 
            __RPC__in __x_ABI_CLumia_CImaging_CIGifRenderer * This,
            /* [in] */ INT32 duration);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_NumberOfAnimationLoops )( 
            __RPC__in __x_ABI_CLumia_CImaging_CIGifRenderer * This,
            /* [out][retval] */ __RPC__out INT32 *__returnValue);
        
        /* [propput] */ HRESULT ( STDMETHODCALLTYPE *put_NumberOfAnimationLoops )( 
            __RPC__in __x_ABI_CLumia_CImaging_CIGifRenderer * This,
            /* [in] */ INT32 numberOfAnimationLoops);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_ApplyDithering )( 
            __RPC__in __x_ABI_CLumia_CImaging_CIGifRenderer * This,
            /* [out][retval] */ __RPC__out boolean *__returnValue);
        
        /* [propput] */ HRESULT ( STDMETHODCALLTYPE *put_ApplyDithering )( 
            __RPC__in __x_ABI_CLumia_CImaging_CIGifRenderer * This,
            /* [in] */ boolean value);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_UseGlobalPalette )( 
            __RPC__in __x_ABI_CLumia_CImaging_CIGifRenderer * This,
            /* [out][retval] */ __RPC__out boolean *__returnValue);
        
        /* [propput] */ HRESULT ( STDMETHODCALLTYPE *put_UseGlobalPalette )( 
            __RPC__in __x_ABI_CLumia_CImaging_CIGifRenderer * This,
            /* [in] */ boolean value);
        
        HRESULT ( STDMETHODCALLTYPE *RenderAsync )( 
            __RPC__in __x_ABI_CLumia_CImaging_CIGifRenderer * This,
            /* [out][retval] */ __RPC__deref_out_opt __FIAsyncOperation_1_Windows__CStorage__CStreams__CIBuffer **__returnValue);
        
        END_INTERFACE
    } __x_ABI_CLumia_CImaging_CIGifRendererVtbl;

    interface __x_ABI_CLumia_CImaging_CIGifRenderer
    {
        CONST_VTBL struct __x_ABI_CLumia_CImaging_CIGifRendererVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define __x_ABI_CLumia_CImaging_CIGifRenderer_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __x_ABI_CLumia_CImaging_CIGifRenderer_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __x_ABI_CLumia_CImaging_CIGifRenderer_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __x_ABI_CLumia_CImaging_CIGifRenderer_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 

#define __x_ABI_CLumia_CImaging_CIGifRenderer_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 

#define __x_ABI_CLumia_CImaging_CIGifRenderer_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 


#define __x_ABI_CLumia_CImaging_CIGifRenderer_get_Sources(This,__returnValue)	\
    ( (This)->lpVtbl -> get_Sources(This,__returnValue) ) 

#define __x_ABI_CLumia_CImaging_CIGifRenderer_put_Sources(This,imageSources)	\
    ( (This)->lpVtbl -> put_Sources(This,imageSources) ) 

#define __x_ABI_CLumia_CImaging_CIGifRenderer_get_Size(This,__returnValue)	\
    ( (This)->lpVtbl -> get_Size(This,__returnValue) ) 

#define __x_ABI_CLumia_CImaging_CIGifRenderer_put_Size(This,size)	\
    ( (This)->lpVtbl -> put_Size(This,size) ) 

#define __x_ABI_CLumia_CImaging_CIGifRenderer_get_Duration(This,__returnValue)	\
    ( (This)->lpVtbl -> get_Duration(This,__returnValue) ) 

#define __x_ABI_CLumia_CImaging_CIGifRenderer_put_Duration(This,duration)	\
    ( (This)->lpVtbl -> put_Duration(This,duration) ) 

#define __x_ABI_CLumia_CImaging_CIGifRenderer_get_NumberOfAnimationLoops(This,__returnValue)	\
    ( (This)->lpVtbl -> get_NumberOfAnimationLoops(This,__returnValue) ) 

#define __x_ABI_CLumia_CImaging_CIGifRenderer_put_NumberOfAnimationLoops(This,numberOfAnimationLoops)	\
    ( (This)->lpVtbl -> put_NumberOfAnimationLoops(This,numberOfAnimationLoops) ) 

#define __x_ABI_CLumia_CImaging_CIGifRenderer_get_ApplyDithering(This,__returnValue)	\
    ( (This)->lpVtbl -> get_ApplyDithering(This,__returnValue) ) 

#define __x_ABI_CLumia_CImaging_CIGifRenderer_put_ApplyDithering(This,value)	\
    ( (This)->lpVtbl -> put_ApplyDithering(This,value) ) 

#define __x_ABI_CLumia_CImaging_CIGifRenderer_get_UseGlobalPalette(This,__returnValue)	\
    ( (This)->lpVtbl -> get_UseGlobalPalette(This,__returnValue) ) 

#define __x_ABI_CLumia_CImaging_CIGifRenderer_put_UseGlobalPalette(This,value)	\
    ( (This)->lpVtbl -> put_UseGlobalPalette(This,value) ) 

#define __x_ABI_CLumia_CImaging_CIGifRenderer_RenderAsync(This,__returnValue)	\
    ( (This)->lpVtbl -> RenderAsync(This,__returnValue) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* ____x_ABI_CLumia_CImaging_CIGifRenderer_INTERFACE_DEFINED__ */


/* interface __MIDL_itf_Lumia2EImaging_0000_0108 */
/* [local] */ 

#if !defined(____x_ABI_CLumia_CImaging_CIGifRendererFactory_INTERFACE_DEFINED__)
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Lumia_Imaging_IGifRendererFactory[] = L"Lumia.Imaging.IGifRendererFactory";
#endif /* !defined(____x_ABI_CLumia_CImaging_CIGifRendererFactory_INTERFACE_DEFINED__) */


/* interface __MIDL_itf_Lumia2EImaging_0000_0108 */
/* [local] */ 



extern RPC_IF_HANDLE __MIDL_itf_Lumia2EImaging_0000_0108_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_Lumia2EImaging_0000_0108_v0_0_s_ifspec;

#ifndef ____x_ABI_CLumia_CImaging_CIGifRendererFactory_INTERFACE_DEFINED__
#define ____x_ABI_CLumia_CImaging_CIGifRendererFactory_INTERFACE_DEFINED__

/* interface __x_ABI_CLumia_CImaging_CIGifRendererFactory */
/* [uuid][object] */ 



/* interface ABI::Lumia::Imaging::IGifRendererFactory */
/* [uuid][object] */ 


EXTERN_C const IID IID___x_ABI_CLumia_CImaging_CIGifRendererFactory;

#if defined(__cplusplus) && !defined(CINTERFACE)
    } /* end extern "C" */
    namespace ABI {
        namespace Lumia {
            namespace Imaging {
                
                MIDL_INTERFACE("5FD7A98F-AB2A-3F7A-AAA8-621F8A9C5416")
                IGifRendererFactory : public IInspectable
                {
                public:
                    virtual HRESULT STDMETHODCALLTYPE Create( 
                        /* [in] */ __RPC__in_opt ABI::Lumia::Imaging::IImageProvider *imageSource,
                        /* [out][retval] */ __RPC__deref_out_opt ABI::Lumia::Imaging::IGifRenderer **__returnValue) = 0;
                    
                    virtual HRESULT STDMETHODCALLTYPE CreateFromMultipleSources( 
                        /* [in] */ __RPC__in_opt __FIVectorView_1_Lumia__CImaging__CIImageProvider *imageSources,
                        /* [out][retval] */ __RPC__deref_out_opt ABI::Lumia::Imaging::IGifRenderer **__returnValue) = 0;
                    
                    virtual HRESULT STDMETHODCALLTYPE CreateFromMultipleSourcesWithSettings( 
                        /* [in] */ __RPC__in_opt __FIVectorView_1_Lumia__CImaging__CIImageProvider *imageSources,
                        /* [in] */ INT32 duration,
                        /* [in] */ INT32 numberOfAnimationLoops,
                        /* [out][retval] */ __RPC__deref_out_opt ABI::Lumia::Imaging::IGifRenderer **__returnValue) = 0;
                    
                };

                extern const __declspec(selectany) IID & IID_IGifRendererFactory = __uuidof(IGifRendererFactory);

                
            }  /* end namespace */
        }  /* end namespace */
    }  /* end namespace */
    extern "C" { 
    
#else 	/* C style interface */

    typedef struct __x_ABI_CLumia_CImaging_CIGifRendererFactoryVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            __RPC__in __x_ABI_CLumia_CImaging_CIGifRendererFactory * This,
            /* [in] */ __RPC__in REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            __RPC__in __x_ABI_CLumia_CImaging_CIGifRendererFactory * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            __RPC__in __x_ABI_CLumia_CImaging_CIGifRendererFactory * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetIids )( 
            __RPC__in __x_ABI_CLumia_CImaging_CIGifRendererFactory * This,
            /* [out] */ __RPC__out ULONG *iidCount,
            /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
        
        HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )( 
            __RPC__in __x_ABI_CLumia_CImaging_CIGifRendererFactory * This,
            /* [out] */ __RPC__deref_out_opt HSTRING *className);
        
        HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )( 
            __RPC__in __x_ABI_CLumia_CImaging_CIGifRendererFactory * This,
            /* [out] */ __RPC__out TrustLevel *trustLevel);
        
        HRESULT ( STDMETHODCALLTYPE *Create )( 
            __RPC__in __x_ABI_CLumia_CImaging_CIGifRendererFactory * This,
            /* [in] */ __RPC__in_opt __x_ABI_CLumia_CImaging_CIImageProvider *imageSource,
            /* [out][retval] */ __RPC__deref_out_opt __x_ABI_CLumia_CImaging_CIGifRenderer **__returnValue);
        
        HRESULT ( STDMETHODCALLTYPE *CreateFromMultipleSources )( 
            __RPC__in __x_ABI_CLumia_CImaging_CIGifRendererFactory * This,
            /* [in] */ __RPC__in_opt __FIVectorView_1_Lumia__CImaging__CIImageProvider *imageSources,
            /* [out][retval] */ __RPC__deref_out_opt __x_ABI_CLumia_CImaging_CIGifRenderer **__returnValue);
        
        HRESULT ( STDMETHODCALLTYPE *CreateFromMultipleSourcesWithSettings )( 
            __RPC__in __x_ABI_CLumia_CImaging_CIGifRendererFactory * This,
            /* [in] */ __RPC__in_opt __FIVectorView_1_Lumia__CImaging__CIImageProvider *imageSources,
            /* [in] */ INT32 duration,
            /* [in] */ INT32 numberOfAnimationLoops,
            /* [out][retval] */ __RPC__deref_out_opt __x_ABI_CLumia_CImaging_CIGifRenderer **__returnValue);
        
        END_INTERFACE
    } __x_ABI_CLumia_CImaging_CIGifRendererFactoryVtbl;

    interface __x_ABI_CLumia_CImaging_CIGifRendererFactory
    {
        CONST_VTBL struct __x_ABI_CLumia_CImaging_CIGifRendererFactoryVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define __x_ABI_CLumia_CImaging_CIGifRendererFactory_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __x_ABI_CLumia_CImaging_CIGifRendererFactory_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __x_ABI_CLumia_CImaging_CIGifRendererFactory_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __x_ABI_CLumia_CImaging_CIGifRendererFactory_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 

#define __x_ABI_CLumia_CImaging_CIGifRendererFactory_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 

#define __x_ABI_CLumia_CImaging_CIGifRendererFactory_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 


#define __x_ABI_CLumia_CImaging_CIGifRendererFactory_Create(This,imageSource,__returnValue)	\
    ( (This)->lpVtbl -> Create(This,imageSource,__returnValue) ) 

#define __x_ABI_CLumia_CImaging_CIGifRendererFactory_CreateFromMultipleSources(This,imageSources,__returnValue)	\
    ( (This)->lpVtbl -> CreateFromMultipleSources(This,imageSources,__returnValue) ) 

#define __x_ABI_CLumia_CImaging_CIGifRendererFactory_CreateFromMultipleSourcesWithSettings(This,imageSources,duration,numberOfAnimationLoops,__returnValue)	\
    ( (This)->lpVtbl -> CreateFromMultipleSourcesWithSettings(This,imageSources,duration,numberOfAnimationLoops,__returnValue) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* ____x_ABI_CLumia_CImaging_CIGifRendererFactory_INTERFACE_DEFINED__ */


/* interface __MIDL_itf_Lumia2EImaging_0000_0109 */
/* [local] */ 

#if !defined(____x_ABI_CLumia_CImaging_CILinearGradient_INTERFACE_DEFINED__)
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Lumia_Imaging_ILinearGradient[] = L"Lumia.Imaging.ILinearGradient";
#endif /* !defined(____x_ABI_CLumia_CImaging_CILinearGradient_INTERFACE_DEFINED__) */


/* interface __MIDL_itf_Lumia2EImaging_0000_0109 */
/* [local] */ 



extern RPC_IF_HANDLE __MIDL_itf_Lumia2EImaging_0000_0109_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_Lumia2EImaging_0000_0109_v0_0_s_ifspec;

#ifndef ____x_ABI_CLumia_CImaging_CILinearGradient_INTERFACE_DEFINED__
#define ____x_ABI_CLumia_CImaging_CILinearGradient_INTERFACE_DEFINED__

/* interface __x_ABI_CLumia_CImaging_CILinearGradient */
/* [uuid][object] */ 



/* interface ABI::Lumia::Imaging::ILinearGradient */
/* [uuid][object] */ 


EXTERN_C const IID IID___x_ABI_CLumia_CImaging_CILinearGradient;

#if defined(__cplusplus) && !defined(CINTERFACE)
    } /* end extern "C" */
    namespace ABI {
        namespace Lumia {
            namespace Imaging {
                
                MIDL_INTERFACE("F9DC3577-0082-3E84-B81A-50FB3E20A0F3")
                ILinearGradient : public IInspectable
                {
                public:
                    virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_StartPoint( 
                        /* [out][retval] */ __RPC__out ABI::Windows::Foundation::Point *__returnValue) = 0;
                    
                    virtual /* [propput] */ HRESULT STDMETHODCALLTYPE put_StartPoint( 
                        /* [in] */ ABI::Windows::Foundation::Point startPoint) = 0;
                    
                    virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_EndPoint( 
                        /* [out][retval] */ __RPC__out ABI::Windows::Foundation::Point *__returnValue) = 0;
                    
                    virtual /* [propput] */ HRESULT STDMETHODCALLTYPE put_EndPoint( 
                        /* [in] */ ABI::Windows::Foundation::Point endPoint) = 0;
                    
                };

                extern const __declspec(selectany) IID & IID_ILinearGradient = __uuidof(ILinearGradient);

                
            }  /* end namespace */
        }  /* end namespace */
    }  /* end namespace */
    extern "C" { 
    
#else 	/* C style interface */

    typedef struct __x_ABI_CLumia_CImaging_CILinearGradientVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            __RPC__in __x_ABI_CLumia_CImaging_CILinearGradient * This,
            /* [in] */ __RPC__in REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            __RPC__in __x_ABI_CLumia_CImaging_CILinearGradient * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            __RPC__in __x_ABI_CLumia_CImaging_CILinearGradient * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetIids )( 
            __RPC__in __x_ABI_CLumia_CImaging_CILinearGradient * This,
            /* [out] */ __RPC__out ULONG *iidCount,
            /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
        
        HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )( 
            __RPC__in __x_ABI_CLumia_CImaging_CILinearGradient * This,
            /* [out] */ __RPC__deref_out_opt HSTRING *className);
        
        HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )( 
            __RPC__in __x_ABI_CLumia_CImaging_CILinearGradient * This,
            /* [out] */ __RPC__out TrustLevel *trustLevel);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_StartPoint )( 
            __RPC__in __x_ABI_CLumia_CImaging_CILinearGradient * This,
            /* [out][retval] */ __RPC__out __x_ABI_CWindows_CFoundation_CPoint *__returnValue);
        
        /* [propput] */ HRESULT ( STDMETHODCALLTYPE *put_StartPoint )( 
            __RPC__in __x_ABI_CLumia_CImaging_CILinearGradient * This,
            /* [in] */ __x_ABI_CWindows_CFoundation_CPoint startPoint);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_EndPoint )( 
            __RPC__in __x_ABI_CLumia_CImaging_CILinearGradient * This,
            /* [out][retval] */ __RPC__out __x_ABI_CWindows_CFoundation_CPoint *__returnValue);
        
        /* [propput] */ HRESULT ( STDMETHODCALLTYPE *put_EndPoint )( 
            __RPC__in __x_ABI_CLumia_CImaging_CILinearGradient * This,
            /* [in] */ __x_ABI_CWindows_CFoundation_CPoint endPoint);
        
        END_INTERFACE
    } __x_ABI_CLumia_CImaging_CILinearGradientVtbl;

    interface __x_ABI_CLumia_CImaging_CILinearGradient
    {
        CONST_VTBL struct __x_ABI_CLumia_CImaging_CILinearGradientVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define __x_ABI_CLumia_CImaging_CILinearGradient_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __x_ABI_CLumia_CImaging_CILinearGradient_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __x_ABI_CLumia_CImaging_CILinearGradient_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __x_ABI_CLumia_CImaging_CILinearGradient_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 

#define __x_ABI_CLumia_CImaging_CILinearGradient_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 

#define __x_ABI_CLumia_CImaging_CILinearGradient_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 


#define __x_ABI_CLumia_CImaging_CILinearGradient_get_StartPoint(This,__returnValue)	\
    ( (This)->lpVtbl -> get_StartPoint(This,__returnValue) ) 

#define __x_ABI_CLumia_CImaging_CILinearGradient_put_StartPoint(This,startPoint)	\
    ( (This)->lpVtbl -> put_StartPoint(This,startPoint) ) 

#define __x_ABI_CLumia_CImaging_CILinearGradient_get_EndPoint(This,__returnValue)	\
    ( (This)->lpVtbl -> get_EndPoint(This,__returnValue) ) 

#define __x_ABI_CLumia_CImaging_CILinearGradient_put_EndPoint(This,endPoint)	\
    ( (This)->lpVtbl -> put_EndPoint(This,endPoint) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* ____x_ABI_CLumia_CImaging_CILinearGradient_INTERFACE_DEFINED__ */


/* interface __MIDL_itf_Lumia2EImaging_0000_0110 */
/* [local] */ 

#if !defined(____x_ABI_CLumia_CImaging_CILinearGradientFactory_INTERFACE_DEFINED__)
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Lumia_Imaging_ILinearGradientFactory[] = L"Lumia.Imaging.ILinearGradientFactory";
#endif /* !defined(____x_ABI_CLumia_CImaging_CILinearGradientFactory_INTERFACE_DEFINED__) */


/* interface __MIDL_itf_Lumia2EImaging_0000_0110 */
/* [local] */ 



extern RPC_IF_HANDLE __MIDL_itf_Lumia2EImaging_0000_0110_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_Lumia2EImaging_0000_0110_v0_0_s_ifspec;

#ifndef ____x_ABI_CLumia_CImaging_CILinearGradientFactory_INTERFACE_DEFINED__
#define ____x_ABI_CLumia_CImaging_CILinearGradientFactory_INTERFACE_DEFINED__

/* interface __x_ABI_CLumia_CImaging_CILinearGradientFactory */
/* [uuid][object] */ 



/* interface ABI::Lumia::Imaging::ILinearGradientFactory */
/* [uuid][object] */ 


EXTERN_C const IID IID___x_ABI_CLumia_CImaging_CILinearGradientFactory;

#if defined(__cplusplus) && !defined(CINTERFACE)
    } /* end extern "C" */
    namespace ABI {
        namespace Lumia {
            namespace Imaging {
                
                MIDL_INTERFACE("96A42F3D-5C32-34AD-8740-B30E3715E089")
                ILinearGradientFactory : public IInspectable
                {
                public:
                    virtual HRESULT STDMETHODCALLTYPE Create( 
                        /* [in] */ ABI::Windows::Foundation::Point startPoint,
                        /* [in] */ ABI::Windows::Foundation::Point endPoint,
                        /* [out][retval] */ __RPC__deref_out_opt ABI::Lumia::Imaging::ILinearGradient **__returnValue) = 0;
                    
                    virtual HRESULT STDMETHODCALLTYPE CreateWithGradientStops( 
                        /* [in] */ ABI::Windows::Foundation::Point startPoint,
                        /* [in] */ ABI::Windows::Foundation::Point endPoint,
                        /* [in] */ UINT32 __stopsSize,
                        /* [in][size_is] */ __RPC__in_ecount_full(__stopsSize) ABI::Lumia::Imaging::GradientStop *stops,
                        /* [out][retval] */ __RPC__deref_out_opt ABI::Lumia::Imaging::ILinearGradient **__returnValue) = 0;
                    
                };

                extern const __declspec(selectany) IID & IID_ILinearGradientFactory = __uuidof(ILinearGradientFactory);

                
            }  /* end namespace */
        }  /* end namespace */
    }  /* end namespace */
    extern "C" { 
    
#else 	/* C style interface */

    typedef struct __x_ABI_CLumia_CImaging_CILinearGradientFactoryVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            __RPC__in __x_ABI_CLumia_CImaging_CILinearGradientFactory * This,
            /* [in] */ __RPC__in REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            __RPC__in __x_ABI_CLumia_CImaging_CILinearGradientFactory * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            __RPC__in __x_ABI_CLumia_CImaging_CILinearGradientFactory * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetIids )( 
            __RPC__in __x_ABI_CLumia_CImaging_CILinearGradientFactory * This,
            /* [out] */ __RPC__out ULONG *iidCount,
            /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
        
        HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )( 
            __RPC__in __x_ABI_CLumia_CImaging_CILinearGradientFactory * This,
            /* [out] */ __RPC__deref_out_opt HSTRING *className);
        
        HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )( 
            __RPC__in __x_ABI_CLumia_CImaging_CILinearGradientFactory * This,
            /* [out] */ __RPC__out TrustLevel *trustLevel);
        
        HRESULT ( STDMETHODCALLTYPE *Create )( 
            __RPC__in __x_ABI_CLumia_CImaging_CILinearGradientFactory * This,
            /* [in] */ __x_ABI_CWindows_CFoundation_CPoint startPoint,
            /* [in] */ __x_ABI_CWindows_CFoundation_CPoint endPoint,
            /* [out][retval] */ __RPC__deref_out_opt __x_ABI_CLumia_CImaging_CILinearGradient **__returnValue);
        
        HRESULT ( STDMETHODCALLTYPE *CreateWithGradientStops )( 
            __RPC__in __x_ABI_CLumia_CImaging_CILinearGradientFactory * This,
            /* [in] */ __x_ABI_CWindows_CFoundation_CPoint startPoint,
            /* [in] */ __x_ABI_CWindows_CFoundation_CPoint endPoint,
            /* [in] */ UINT32 __stopsSize,
            /* [in][size_is] */ __RPC__in_ecount_full(__stopsSize) __x_ABI_CLumia_CImaging_CGradientStop *stops,
            /* [out][retval] */ __RPC__deref_out_opt __x_ABI_CLumia_CImaging_CILinearGradient **__returnValue);
        
        END_INTERFACE
    } __x_ABI_CLumia_CImaging_CILinearGradientFactoryVtbl;

    interface __x_ABI_CLumia_CImaging_CILinearGradientFactory
    {
        CONST_VTBL struct __x_ABI_CLumia_CImaging_CILinearGradientFactoryVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define __x_ABI_CLumia_CImaging_CILinearGradientFactory_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __x_ABI_CLumia_CImaging_CILinearGradientFactory_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __x_ABI_CLumia_CImaging_CILinearGradientFactory_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __x_ABI_CLumia_CImaging_CILinearGradientFactory_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 

#define __x_ABI_CLumia_CImaging_CILinearGradientFactory_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 

#define __x_ABI_CLumia_CImaging_CILinearGradientFactory_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 


#define __x_ABI_CLumia_CImaging_CILinearGradientFactory_Create(This,startPoint,endPoint,__returnValue)	\
    ( (This)->lpVtbl -> Create(This,startPoint,endPoint,__returnValue) ) 

#define __x_ABI_CLumia_CImaging_CILinearGradientFactory_CreateWithGradientStops(This,startPoint,endPoint,__stopsSize,stops,__returnValue)	\
    ( (This)->lpVtbl -> CreateWithGradientStops(This,startPoint,endPoint,__stopsSize,stops,__returnValue) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* ____x_ABI_CLumia_CImaging_CILinearGradientFactory_INTERFACE_DEFINED__ */


/* interface __MIDL_itf_Lumia2EImaging_0000_0111 */
/* [local] */ 

#if !defined(____x_ABI_CLumia_CImaging_CIRadialGradient_INTERFACE_DEFINED__)
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Lumia_Imaging_IRadialGradient[] = L"Lumia.Imaging.IRadialGradient";
#endif /* !defined(____x_ABI_CLumia_CImaging_CIRadialGradient_INTERFACE_DEFINED__) */


/* interface __MIDL_itf_Lumia2EImaging_0000_0111 */
/* [local] */ 



extern RPC_IF_HANDLE __MIDL_itf_Lumia2EImaging_0000_0111_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_Lumia2EImaging_0000_0111_v0_0_s_ifspec;

#ifndef ____x_ABI_CLumia_CImaging_CIRadialGradient_INTERFACE_DEFINED__
#define ____x_ABI_CLumia_CImaging_CIRadialGradient_INTERFACE_DEFINED__

/* interface __x_ABI_CLumia_CImaging_CIRadialGradient */
/* [uuid][object] */ 



/* interface ABI::Lumia::Imaging::IRadialGradient */
/* [uuid][object] */ 


EXTERN_C const IID IID___x_ABI_CLumia_CImaging_CIRadialGradient;

#if defined(__cplusplus) && !defined(CINTERFACE)
    } /* end extern "C" */
    namespace ABI {
        namespace Lumia {
            namespace Imaging {
                
                MIDL_INTERFACE("49FF64AF-B803-3A32-BE1F-362C210FDFFF")
                IRadialGradient : public IInspectable
                {
                public:
                    virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_CenterPoint( 
                        /* [out][retval] */ __RPC__out ABI::Windows::Foundation::Point *__returnValue) = 0;
                    
                    virtual /* [propput] */ HRESULT STDMETHODCALLTYPE put_CenterPoint( 
                        /* [in] */ ABI::Windows::Foundation::Point centerPoint) = 0;
                    
                    virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_EllipseRadius( 
                        /* [out][retval] */ __RPC__deref_out_opt ABI::Lumia::Imaging::IEllipseRadius **__returnValue) = 0;
                    
                    virtual /* [propput] */ HRESULT STDMETHODCALLTYPE put_EllipseRadius( 
                        /* [in] */ __RPC__in_opt ABI::Lumia::Imaging::IEllipseRadius *size) = 0;
                    
                };

                extern const __declspec(selectany) IID & IID_IRadialGradient = __uuidof(IRadialGradient);

                
            }  /* end namespace */
        }  /* end namespace */
    }  /* end namespace */
    extern "C" { 
    
#else 	/* C style interface */

    typedef struct __x_ABI_CLumia_CImaging_CIRadialGradientVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            __RPC__in __x_ABI_CLumia_CImaging_CIRadialGradient * This,
            /* [in] */ __RPC__in REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            __RPC__in __x_ABI_CLumia_CImaging_CIRadialGradient * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            __RPC__in __x_ABI_CLumia_CImaging_CIRadialGradient * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetIids )( 
            __RPC__in __x_ABI_CLumia_CImaging_CIRadialGradient * This,
            /* [out] */ __RPC__out ULONG *iidCount,
            /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
        
        HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )( 
            __RPC__in __x_ABI_CLumia_CImaging_CIRadialGradient * This,
            /* [out] */ __RPC__deref_out_opt HSTRING *className);
        
        HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )( 
            __RPC__in __x_ABI_CLumia_CImaging_CIRadialGradient * This,
            /* [out] */ __RPC__out TrustLevel *trustLevel);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_CenterPoint )( 
            __RPC__in __x_ABI_CLumia_CImaging_CIRadialGradient * This,
            /* [out][retval] */ __RPC__out __x_ABI_CWindows_CFoundation_CPoint *__returnValue);
        
        /* [propput] */ HRESULT ( STDMETHODCALLTYPE *put_CenterPoint )( 
            __RPC__in __x_ABI_CLumia_CImaging_CIRadialGradient * This,
            /* [in] */ __x_ABI_CWindows_CFoundation_CPoint centerPoint);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_EllipseRadius )( 
            __RPC__in __x_ABI_CLumia_CImaging_CIRadialGradient * This,
            /* [out][retval] */ __RPC__deref_out_opt __x_ABI_CLumia_CImaging_CIEllipseRadius **__returnValue);
        
        /* [propput] */ HRESULT ( STDMETHODCALLTYPE *put_EllipseRadius )( 
            __RPC__in __x_ABI_CLumia_CImaging_CIRadialGradient * This,
            /* [in] */ __RPC__in_opt __x_ABI_CLumia_CImaging_CIEllipseRadius *size);
        
        END_INTERFACE
    } __x_ABI_CLumia_CImaging_CIRadialGradientVtbl;

    interface __x_ABI_CLumia_CImaging_CIRadialGradient
    {
        CONST_VTBL struct __x_ABI_CLumia_CImaging_CIRadialGradientVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define __x_ABI_CLumia_CImaging_CIRadialGradient_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __x_ABI_CLumia_CImaging_CIRadialGradient_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __x_ABI_CLumia_CImaging_CIRadialGradient_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __x_ABI_CLumia_CImaging_CIRadialGradient_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 

#define __x_ABI_CLumia_CImaging_CIRadialGradient_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 

#define __x_ABI_CLumia_CImaging_CIRadialGradient_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 


#define __x_ABI_CLumia_CImaging_CIRadialGradient_get_CenterPoint(This,__returnValue)	\
    ( (This)->lpVtbl -> get_CenterPoint(This,__returnValue) ) 

#define __x_ABI_CLumia_CImaging_CIRadialGradient_put_CenterPoint(This,centerPoint)	\
    ( (This)->lpVtbl -> put_CenterPoint(This,centerPoint) ) 

#define __x_ABI_CLumia_CImaging_CIRadialGradient_get_EllipseRadius(This,__returnValue)	\
    ( (This)->lpVtbl -> get_EllipseRadius(This,__returnValue) ) 

#define __x_ABI_CLumia_CImaging_CIRadialGradient_put_EllipseRadius(This,size)	\
    ( (This)->lpVtbl -> put_EllipseRadius(This,size) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* ____x_ABI_CLumia_CImaging_CIRadialGradient_INTERFACE_DEFINED__ */


/* interface __MIDL_itf_Lumia2EImaging_0000_0112 */
/* [local] */ 

#if !defined(____x_ABI_CLumia_CImaging_CIRadialGradientFactory_INTERFACE_DEFINED__)
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Lumia_Imaging_IRadialGradientFactory[] = L"Lumia.Imaging.IRadialGradientFactory";
#endif /* !defined(____x_ABI_CLumia_CImaging_CIRadialGradientFactory_INTERFACE_DEFINED__) */


/* interface __MIDL_itf_Lumia2EImaging_0000_0112 */
/* [local] */ 



extern RPC_IF_HANDLE __MIDL_itf_Lumia2EImaging_0000_0112_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_Lumia2EImaging_0000_0112_v0_0_s_ifspec;

#ifndef ____x_ABI_CLumia_CImaging_CIRadialGradientFactory_INTERFACE_DEFINED__
#define ____x_ABI_CLumia_CImaging_CIRadialGradientFactory_INTERFACE_DEFINED__

/* interface __x_ABI_CLumia_CImaging_CIRadialGradientFactory */
/* [uuid][object] */ 



/* interface ABI::Lumia::Imaging::IRadialGradientFactory */
/* [uuid][object] */ 


EXTERN_C const IID IID___x_ABI_CLumia_CImaging_CIRadialGradientFactory;

#if defined(__cplusplus) && !defined(CINTERFACE)
    } /* end extern "C" */
    namespace ABI {
        namespace Lumia {
            namespace Imaging {
                
                MIDL_INTERFACE("B62B7025-C07E-329F-BB2E-1B52099657E0")
                IRadialGradientFactory : public IInspectable
                {
                public:
                    virtual HRESULT STDMETHODCALLTYPE Create( 
                        /* [in] */ ABI::Windows::Foundation::Point centerPoint,
                        /* [in] */ __RPC__in_opt ABI::Lumia::Imaging::IEllipseRadius *radius,
                        /* [out][retval] */ __RPC__deref_out_opt ABI::Lumia::Imaging::IRadialGradient **__returnValue) = 0;
                    
                    virtual HRESULT STDMETHODCALLTYPE CreateWithGradientStops( 
                        /* [in] */ ABI::Windows::Foundation::Point centerPoint,
                        /* [in] */ __RPC__in_opt ABI::Lumia::Imaging::IEllipseRadius *radius,
                        /* [in] */ UINT32 __stopsSize,
                        /* [in][size_is] */ __RPC__in_ecount_full(__stopsSize) ABI::Lumia::Imaging::GradientStop *stops,
                        /* [out][retval] */ __RPC__deref_out_opt ABI::Lumia::Imaging::IRadialGradient **__returnValue) = 0;
                    
                };

                extern const __declspec(selectany) IID & IID_IRadialGradientFactory = __uuidof(IRadialGradientFactory);

                
            }  /* end namespace */
        }  /* end namespace */
    }  /* end namespace */
    extern "C" { 
    
#else 	/* C style interface */

    typedef struct __x_ABI_CLumia_CImaging_CIRadialGradientFactoryVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            __RPC__in __x_ABI_CLumia_CImaging_CIRadialGradientFactory * This,
            /* [in] */ __RPC__in REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            __RPC__in __x_ABI_CLumia_CImaging_CIRadialGradientFactory * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            __RPC__in __x_ABI_CLumia_CImaging_CIRadialGradientFactory * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetIids )( 
            __RPC__in __x_ABI_CLumia_CImaging_CIRadialGradientFactory * This,
            /* [out] */ __RPC__out ULONG *iidCount,
            /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
        
        HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )( 
            __RPC__in __x_ABI_CLumia_CImaging_CIRadialGradientFactory * This,
            /* [out] */ __RPC__deref_out_opt HSTRING *className);
        
        HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )( 
            __RPC__in __x_ABI_CLumia_CImaging_CIRadialGradientFactory * This,
            /* [out] */ __RPC__out TrustLevel *trustLevel);
        
        HRESULT ( STDMETHODCALLTYPE *Create )( 
            __RPC__in __x_ABI_CLumia_CImaging_CIRadialGradientFactory * This,
            /* [in] */ __x_ABI_CWindows_CFoundation_CPoint centerPoint,
            /* [in] */ __RPC__in_opt __x_ABI_CLumia_CImaging_CIEllipseRadius *radius,
            /* [out][retval] */ __RPC__deref_out_opt __x_ABI_CLumia_CImaging_CIRadialGradient **__returnValue);
        
        HRESULT ( STDMETHODCALLTYPE *CreateWithGradientStops )( 
            __RPC__in __x_ABI_CLumia_CImaging_CIRadialGradientFactory * This,
            /* [in] */ __x_ABI_CWindows_CFoundation_CPoint centerPoint,
            /* [in] */ __RPC__in_opt __x_ABI_CLumia_CImaging_CIEllipseRadius *radius,
            /* [in] */ UINT32 __stopsSize,
            /* [in][size_is] */ __RPC__in_ecount_full(__stopsSize) __x_ABI_CLumia_CImaging_CGradientStop *stops,
            /* [out][retval] */ __RPC__deref_out_opt __x_ABI_CLumia_CImaging_CIRadialGradient **__returnValue);
        
        END_INTERFACE
    } __x_ABI_CLumia_CImaging_CIRadialGradientFactoryVtbl;

    interface __x_ABI_CLumia_CImaging_CIRadialGradientFactory
    {
        CONST_VTBL struct __x_ABI_CLumia_CImaging_CIRadialGradientFactoryVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define __x_ABI_CLumia_CImaging_CIRadialGradientFactory_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __x_ABI_CLumia_CImaging_CIRadialGradientFactory_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __x_ABI_CLumia_CImaging_CIRadialGradientFactory_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __x_ABI_CLumia_CImaging_CIRadialGradientFactory_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 

#define __x_ABI_CLumia_CImaging_CIRadialGradientFactory_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 

#define __x_ABI_CLumia_CImaging_CIRadialGradientFactory_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 


#define __x_ABI_CLumia_CImaging_CIRadialGradientFactory_Create(This,centerPoint,radius,__returnValue)	\
    ( (This)->lpVtbl -> Create(This,centerPoint,radius,__returnValue) ) 

#define __x_ABI_CLumia_CImaging_CIRadialGradientFactory_CreateWithGradientStops(This,centerPoint,radius,__stopsSize,stops,__returnValue)	\
    ( (This)->lpVtbl -> CreateWithGradientStops(This,centerPoint,radius,__stopsSize,stops,__returnValue) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* ____x_ABI_CLumia_CImaging_CIRadialGradientFactory_INTERFACE_DEFINED__ */


/* interface __MIDL_itf_Lumia2EImaging_0000_0113 */
/* [local] */ 

#if !defined(____x_ABI_CLumia_CImaging_CIGradientImageSource_INTERFACE_DEFINED__)
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Lumia_Imaging_IGradientImageSource[] = L"Lumia.Imaging.IGradientImageSource";
#endif /* !defined(____x_ABI_CLumia_CImaging_CIGradientImageSource_INTERFACE_DEFINED__) */


/* interface __MIDL_itf_Lumia2EImaging_0000_0113 */
/* [local] */ 



extern RPC_IF_HANDLE __MIDL_itf_Lumia2EImaging_0000_0113_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_Lumia2EImaging_0000_0113_v0_0_s_ifspec;

#ifndef ____x_ABI_CLumia_CImaging_CIGradientImageSource_INTERFACE_DEFINED__
#define ____x_ABI_CLumia_CImaging_CIGradientImageSource_INTERFACE_DEFINED__

/* interface __x_ABI_CLumia_CImaging_CIGradientImageSource */
/* [uuid][object] */ 



/* interface ABI::Lumia::Imaging::IGradientImageSource */
/* [uuid][object] */ 


EXTERN_C const IID IID___x_ABI_CLumia_CImaging_CIGradientImageSource;

#if defined(__cplusplus) && !defined(CINTERFACE)
    } /* end extern "C" */
    namespace ABI {
        namespace Lumia {
            namespace Imaging {
                
                MIDL_INTERFACE("2DFAAD41-6E7B-3CAB-AC5F-7759DA750921")
                IGradientImageSource : public IInspectable
                {
                public:
                    virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_Gradient( 
                        /* [out][retval] */ __RPC__deref_out_opt ABI::Lumia::Imaging::IGradient **__returnValue) = 0;
                    
                    virtual /* [propput] */ HRESULT STDMETHODCALLTYPE put_Gradient( 
                        /* [in] */ __RPC__in_opt ABI::Lumia::Imaging::IGradient *gradient) = 0;
                    
                };

                extern const __declspec(selectany) IID & IID_IGradientImageSource = __uuidof(IGradientImageSource);

                
            }  /* end namespace */
        }  /* end namespace */
    }  /* end namespace */
    extern "C" { 
    
#else 	/* C style interface */

    typedef struct __x_ABI_CLumia_CImaging_CIGradientImageSourceVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            __RPC__in __x_ABI_CLumia_CImaging_CIGradientImageSource * This,
            /* [in] */ __RPC__in REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            __RPC__in __x_ABI_CLumia_CImaging_CIGradientImageSource * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            __RPC__in __x_ABI_CLumia_CImaging_CIGradientImageSource * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetIids )( 
            __RPC__in __x_ABI_CLumia_CImaging_CIGradientImageSource * This,
            /* [out] */ __RPC__out ULONG *iidCount,
            /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
        
        HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )( 
            __RPC__in __x_ABI_CLumia_CImaging_CIGradientImageSource * This,
            /* [out] */ __RPC__deref_out_opt HSTRING *className);
        
        HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )( 
            __RPC__in __x_ABI_CLumia_CImaging_CIGradientImageSource * This,
            /* [out] */ __RPC__out TrustLevel *trustLevel);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_Gradient )( 
            __RPC__in __x_ABI_CLumia_CImaging_CIGradientImageSource * This,
            /* [out][retval] */ __RPC__deref_out_opt __x_ABI_CLumia_CImaging_CIGradient **__returnValue);
        
        /* [propput] */ HRESULT ( STDMETHODCALLTYPE *put_Gradient )( 
            __RPC__in __x_ABI_CLumia_CImaging_CIGradientImageSource * This,
            /* [in] */ __RPC__in_opt __x_ABI_CLumia_CImaging_CIGradient *gradient);
        
        END_INTERFACE
    } __x_ABI_CLumia_CImaging_CIGradientImageSourceVtbl;

    interface __x_ABI_CLumia_CImaging_CIGradientImageSource
    {
        CONST_VTBL struct __x_ABI_CLumia_CImaging_CIGradientImageSourceVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define __x_ABI_CLumia_CImaging_CIGradientImageSource_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __x_ABI_CLumia_CImaging_CIGradientImageSource_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __x_ABI_CLumia_CImaging_CIGradientImageSource_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __x_ABI_CLumia_CImaging_CIGradientImageSource_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 

#define __x_ABI_CLumia_CImaging_CIGradientImageSource_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 

#define __x_ABI_CLumia_CImaging_CIGradientImageSource_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 


#define __x_ABI_CLumia_CImaging_CIGradientImageSource_get_Gradient(This,__returnValue)	\
    ( (This)->lpVtbl -> get_Gradient(This,__returnValue) ) 

#define __x_ABI_CLumia_CImaging_CIGradientImageSource_put_Gradient(This,gradient)	\
    ( (This)->lpVtbl -> put_Gradient(This,gradient) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* ____x_ABI_CLumia_CImaging_CIGradientImageSource_INTERFACE_DEFINED__ */


/* interface __MIDL_itf_Lumia2EImaging_0000_0114 */
/* [local] */ 

#if !defined(____x_ABI_CLumia_CImaging_CIGradientImageSourceFactory_INTERFACE_DEFINED__)
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Lumia_Imaging_IGradientImageSourceFactory[] = L"Lumia.Imaging.IGradientImageSourceFactory";
#endif /* !defined(____x_ABI_CLumia_CImaging_CIGradientImageSourceFactory_INTERFACE_DEFINED__) */


/* interface __MIDL_itf_Lumia2EImaging_0000_0114 */
/* [local] */ 



extern RPC_IF_HANDLE __MIDL_itf_Lumia2EImaging_0000_0114_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_Lumia2EImaging_0000_0114_v0_0_s_ifspec;

#ifndef ____x_ABI_CLumia_CImaging_CIGradientImageSourceFactory_INTERFACE_DEFINED__
#define ____x_ABI_CLumia_CImaging_CIGradientImageSourceFactory_INTERFACE_DEFINED__

/* interface __x_ABI_CLumia_CImaging_CIGradientImageSourceFactory */
/* [uuid][object] */ 



/* interface ABI::Lumia::Imaging::IGradientImageSourceFactory */
/* [uuid][object] */ 


EXTERN_C const IID IID___x_ABI_CLumia_CImaging_CIGradientImageSourceFactory;

#if defined(__cplusplus) && !defined(CINTERFACE)
    } /* end extern "C" */
    namespace ABI {
        namespace Lumia {
            namespace Imaging {
                
                MIDL_INTERFACE("2F650984-E2BD-3B17-B8DB-014BBB282DEC")
                IGradientImageSourceFactory : public IInspectable
                {
                public:
                    virtual HRESULT STDMETHODCALLTYPE Create( 
                        /* [in] */ ABI::Windows::Foundation::Size size,
                        /* [in] */ __RPC__in_opt ABI::Lumia::Imaging::IGradient *gradient,
                        /* [out][retval] */ __RPC__deref_out_opt ABI::Lumia::Imaging::IGradientImageSource **__returnValue) = 0;
                    
                };

                extern const __declspec(selectany) IID & IID_IGradientImageSourceFactory = __uuidof(IGradientImageSourceFactory);

                
            }  /* end namespace */
        }  /* end namespace */
    }  /* end namespace */
    extern "C" { 
    
#else 	/* C style interface */

    typedef struct __x_ABI_CLumia_CImaging_CIGradientImageSourceFactoryVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            __RPC__in __x_ABI_CLumia_CImaging_CIGradientImageSourceFactory * This,
            /* [in] */ __RPC__in REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            __RPC__in __x_ABI_CLumia_CImaging_CIGradientImageSourceFactory * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            __RPC__in __x_ABI_CLumia_CImaging_CIGradientImageSourceFactory * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetIids )( 
            __RPC__in __x_ABI_CLumia_CImaging_CIGradientImageSourceFactory * This,
            /* [out] */ __RPC__out ULONG *iidCount,
            /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
        
        HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )( 
            __RPC__in __x_ABI_CLumia_CImaging_CIGradientImageSourceFactory * This,
            /* [out] */ __RPC__deref_out_opt HSTRING *className);
        
        HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )( 
            __RPC__in __x_ABI_CLumia_CImaging_CIGradientImageSourceFactory * This,
            /* [out] */ __RPC__out TrustLevel *trustLevel);
        
        HRESULT ( STDMETHODCALLTYPE *Create )( 
            __RPC__in __x_ABI_CLumia_CImaging_CIGradientImageSourceFactory * This,
            /* [in] */ __x_ABI_CWindows_CFoundation_CSize size,
            /* [in] */ __RPC__in_opt __x_ABI_CLumia_CImaging_CIGradient *gradient,
            /* [out][retval] */ __RPC__deref_out_opt __x_ABI_CLumia_CImaging_CIGradientImageSource **__returnValue);
        
        END_INTERFACE
    } __x_ABI_CLumia_CImaging_CIGradientImageSourceFactoryVtbl;

    interface __x_ABI_CLumia_CImaging_CIGradientImageSourceFactory
    {
        CONST_VTBL struct __x_ABI_CLumia_CImaging_CIGradientImageSourceFactoryVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define __x_ABI_CLumia_CImaging_CIGradientImageSourceFactory_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __x_ABI_CLumia_CImaging_CIGradientImageSourceFactory_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __x_ABI_CLumia_CImaging_CIGradientImageSourceFactory_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __x_ABI_CLumia_CImaging_CIGradientImageSourceFactory_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 

#define __x_ABI_CLumia_CImaging_CIGradientImageSourceFactory_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 

#define __x_ABI_CLumia_CImaging_CIGradientImageSourceFactory_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 


#define __x_ABI_CLumia_CImaging_CIGradientImageSourceFactory_Create(This,size,gradient,__returnValue)	\
    ( (This)->lpVtbl -> Create(This,size,gradient,__returnValue) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* ____x_ABI_CLumia_CImaging_CIGradientImageSourceFactory_INTERFACE_DEFINED__ */


/* interface __MIDL_itf_Lumia2EImaging_0000_0115 */
/* [local] */ 

#if !defined(____x_ABI_CLumia_CImaging_CIImageProviderInfo_INTERFACE_DEFINED__)
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Lumia_Imaging_IImageProviderInfo[] = L"Lumia.Imaging.IImageProviderInfo";
#endif /* !defined(____x_ABI_CLumia_CImaging_CIImageProviderInfo_INTERFACE_DEFINED__) */


/* interface __MIDL_itf_Lumia2EImaging_0000_0115 */
/* [local] */ 



extern RPC_IF_HANDLE __MIDL_itf_Lumia2EImaging_0000_0115_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_Lumia2EImaging_0000_0115_v0_0_s_ifspec;

#ifndef ____x_ABI_CLumia_CImaging_CIImageProviderInfo_INTERFACE_DEFINED__
#define ____x_ABI_CLumia_CImaging_CIImageProviderInfo_INTERFACE_DEFINED__

/* interface __x_ABI_CLumia_CImaging_CIImageProviderInfo */
/* [uuid][object] */ 



/* interface ABI::Lumia::Imaging::IImageProviderInfo */
/* [uuid][object] */ 


EXTERN_C const IID IID___x_ABI_CLumia_CImaging_CIImageProviderInfo;

#if defined(__cplusplus) && !defined(CINTERFACE)
    } /* end extern "C" */
    namespace ABI {
        namespace Lumia {
            namespace Imaging {
                
                MIDL_INTERFACE("5B972967-A050-3539-8F65-C6E3C0456DDD")
                IImageProviderInfo : public IInspectable
                {
                public:
                    virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_ImageSize( 
                        /* [out][retval] */ __RPC__out ABI::Windows::Foundation::Size *__returnValue) = 0;
                    
                    virtual /* [propput] */ HRESULT STDMETHODCALLTYPE put_ImageSize( 
                        /* [in] */ ABI::Windows::Foundation::Size imageSize) = 0;
                    
                    virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_FrameCount( 
                        /* [out][retval] */ __RPC__out UINT32 *__returnValue) = 0;
                    
                };

                extern const __declspec(selectany) IID & IID_IImageProviderInfo = __uuidof(IImageProviderInfo);

                
            }  /* end namespace */
        }  /* end namespace */
    }  /* end namespace */
    extern "C" { 
    
#else 	/* C style interface */

    typedef struct __x_ABI_CLumia_CImaging_CIImageProviderInfoVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            __RPC__in __x_ABI_CLumia_CImaging_CIImageProviderInfo * This,
            /* [in] */ __RPC__in REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            __RPC__in __x_ABI_CLumia_CImaging_CIImageProviderInfo * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            __RPC__in __x_ABI_CLumia_CImaging_CIImageProviderInfo * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetIids )( 
            __RPC__in __x_ABI_CLumia_CImaging_CIImageProviderInfo * This,
            /* [out] */ __RPC__out ULONG *iidCount,
            /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
        
        HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )( 
            __RPC__in __x_ABI_CLumia_CImaging_CIImageProviderInfo * This,
            /* [out] */ __RPC__deref_out_opt HSTRING *className);
        
        HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )( 
            __RPC__in __x_ABI_CLumia_CImaging_CIImageProviderInfo * This,
            /* [out] */ __RPC__out TrustLevel *trustLevel);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_ImageSize )( 
            __RPC__in __x_ABI_CLumia_CImaging_CIImageProviderInfo * This,
            /* [out][retval] */ __RPC__out __x_ABI_CWindows_CFoundation_CSize *__returnValue);
        
        /* [propput] */ HRESULT ( STDMETHODCALLTYPE *put_ImageSize )( 
            __RPC__in __x_ABI_CLumia_CImaging_CIImageProviderInfo * This,
            /* [in] */ __x_ABI_CWindows_CFoundation_CSize imageSize);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_FrameCount )( 
            __RPC__in __x_ABI_CLumia_CImaging_CIImageProviderInfo * This,
            /* [out][retval] */ __RPC__out UINT32 *__returnValue);
        
        END_INTERFACE
    } __x_ABI_CLumia_CImaging_CIImageProviderInfoVtbl;

    interface __x_ABI_CLumia_CImaging_CIImageProviderInfo
    {
        CONST_VTBL struct __x_ABI_CLumia_CImaging_CIImageProviderInfoVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define __x_ABI_CLumia_CImaging_CIImageProviderInfo_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __x_ABI_CLumia_CImaging_CIImageProviderInfo_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __x_ABI_CLumia_CImaging_CIImageProviderInfo_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __x_ABI_CLumia_CImaging_CIImageProviderInfo_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 

#define __x_ABI_CLumia_CImaging_CIImageProviderInfo_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 

#define __x_ABI_CLumia_CImaging_CIImageProviderInfo_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 


#define __x_ABI_CLumia_CImaging_CIImageProviderInfo_get_ImageSize(This,__returnValue)	\
    ( (This)->lpVtbl -> get_ImageSize(This,__returnValue) ) 

#define __x_ABI_CLumia_CImaging_CIImageProviderInfo_put_ImageSize(This,imageSize)	\
    ( (This)->lpVtbl -> put_ImageSize(This,imageSize) ) 

#define __x_ABI_CLumia_CImaging_CIImageProviderInfo_get_FrameCount(This,__returnValue)	\
    ( (This)->lpVtbl -> get_FrameCount(This,__returnValue) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* ____x_ABI_CLumia_CImaging_CIImageProviderInfo_INTERFACE_DEFINED__ */


/* interface __MIDL_itf_Lumia2EImaging_0000_0116 */
/* [local] */ 

#if !defined(____x_ABI_CLumia_CImaging_CIJpegRenderer_INTERFACE_DEFINED__)
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Lumia_Imaging_IJpegRenderer[] = L"Lumia.Imaging.IJpegRenderer";
#endif /* !defined(____x_ABI_CLumia_CImaging_CIJpegRenderer_INTERFACE_DEFINED__) */


/* interface __MIDL_itf_Lumia2EImaging_0000_0116 */
/* [local] */ 



extern RPC_IF_HANDLE __MIDL_itf_Lumia2EImaging_0000_0116_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_Lumia2EImaging_0000_0116_v0_0_s_ifspec;

#ifndef ____x_ABI_CLumia_CImaging_CIJpegRenderer_INTERFACE_DEFINED__
#define ____x_ABI_CLumia_CImaging_CIJpegRenderer_INTERFACE_DEFINED__

/* interface __x_ABI_CLumia_CImaging_CIJpegRenderer */
/* [uuid][object] */ 



/* interface ABI::Lumia::Imaging::IJpegRenderer */
/* [uuid][object] */ 


EXTERN_C const IID IID___x_ABI_CLumia_CImaging_CIJpegRenderer;

#if defined(__cplusplus) && !defined(CINTERFACE)
    } /* end extern "C" */
    namespace ABI {
        namespace Lumia {
            namespace Imaging {
                
                MIDL_INTERFACE("3698DB81-3B19-30FA-949E-012B726F4542")
                IJpegRenderer : public IInspectable
                {
                public:
                    virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_Size( 
                        /* [out][retval] */ __RPC__out ABI::Windows::Foundation::Size *__returnValue) = 0;
                    
                    virtual /* [propput] */ HRESULT STDMETHODCALLTYPE put_Size( 
                        /* [in] */ ABI::Windows::Foundation::Size size) = 0;
                    
                    virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_OutputOption( 
                        /* [out][retval] */ __RPC__out ABI::Lumia::Imaging::OutputOption *__returnValue) = 0;
                    
                    virtual /* [propput] */ HRESULT STDMETHODCALLTYPE put_OutputOption( 
                        /* [in] */ ABI::Lumia::Imaging::OutputOption outputOption) = 0;
                    
                    virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_Quality( 
                        /* [out][retval] */ __RPC__out DOUBLE *__returnValue) = 0;
                    
                    virtual /* [propput] */ HRESULT STDMETHODCALLTYPE put_Quality( 
                        /* [in] */ DOUBLE quality) = 0;
                    
                    virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_OutputColorMode( 
                        /* [out][retval] */ __RPC__out ABI::Lumia::Imaging::JpegOutputColorMode *__returnValue) = 0;
                    
                    virtual /* [propput] */ HRESULT STDMETHODCALLTYPE put_OutputColorMode( 
                        /* [in] */ ABI::Lumia::Imaging::JpegOutputColorMode colorMode) = 0;
                    
                    virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_RemoveExif( 
                        /* [out][retval] */ __RPC__out boolean *__returnValue) = 0;
                    
                    virtual /* [propput] */ HRESULT STDMETHODCALLTYPE put_RemoveExif( 
                        /* [in] */ boolean removeExif) = 0;
                    
                    virtual HRESULT STDMETHODCALLTYPE RenderAsync( 
                        /* [out][retval] */ __RPC__deref_out_opt __FIAsyncOperation_1_Windows__CStorage__CStreams__CIBuffer **__returnValue) = 0;
                    
                };

                extern const __declspec(selectany) IID & IID_IJpegRenderer = __uuidof(IJpegRenderer);

                
            }  /* end namespace */
        }  /* end namespace */
    }  /* end namespace */
    extern "C" { 
    
#else 	/* C style interface */

    typedef struct __x_ABI_CLumia_CImaging_CIJpegRendererVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            __RPC__in __x_ABI_CLumia_CImaging_CIJpegRenderer * This,
            /* [in] */ __RPC__in REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            __RPC__in __x_ABI_CLumia_CImaging_CIJpegRenderer * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            __RPC__in __x_ABI_CLumia_CImaging_CIJpegRenderer * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetIids )( 
            __RPC__in __x_ABI_CLumia_CImaging_CIJpegRenderer * This,
            /* [out] */ __RPC__out ULONG *iidCount,
            /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
        
        HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )( 
            __RPC__in __x_ABI_CLumia_CImaging_CIJpegRenderer * This,
            /* [out] */ __RPC__deref_out_opt HSTRING *className);
        
        HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )( 
            __RPC__in __x_ABI_CLumia_CImaging_CIJpegRenderer * This,
            /* [out] */ __RPC__out TrustLevel *trustLevel);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_Size )( 
            __RPC__in __x_ABI_CLumia_CImaging_CIJpegRenderer * This,
            /* [out][retval] */ __RPC__out __x_ABI_CWindows_CFoundation_CSize *__returnValue);
        
        /* [propput] */ HRESULT ( STDMETHODCALLTYPE *put_Size )( 
            __RPC__in __x_ABI_CLumia_CImaging_CIJpegRenderer * This,
            /* [in] */ __x_ABI_CWindows_CFoundation_CSize size);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_OutputOption )( 
            __RPC__in __x_ABI_CLumia_CImaging_CIJpegRenderer * This,
            /* [out][retval] */ __RPC__out __x_ABI_CLumia_CImaging_COutputOption *__returnValue);
        
        /* [propput] */ HRESULT ( STDMETHODCALLTYPE *put_OutputOption )( 
            __RPC__in __x_ABI_CLumia_CImaging_CIJpegRenderer * This,
            /* [in] */ __x_ABI_CLumia_CImaging_COutputOption outputOption);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_Quality )( 
            __RPC__in __x_ABI_CLumia_CImaging_CIJpegRenderer * This,
            /* [out][retval] */ __RPC__out DOUBLE *__returnValue);
        
        /* [propput] */ HRESULT ( STDMETHODCALLTYPE *put_Quality )( 
            __RPC__in __x_ABI_CLumia_CImaging_CIJpegRenderer * This,
            /* [in] */ DOUBLE quality);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_OutputColorMode )( 
            __RPC__in __x_ABI_CLumia_CImaging_CIJpegRenderer * This,
            /* [out][retval] */ __RPC__out __x_ABI_CLumia_CImaging_CJpegOutputColorMode *__returnValue);
        
        /* [propput] */ HRESULT ( STDMETHODCALLTYPE *put_OutputColorMode )( 
            __RPC__in __x_ABI_CLumia_CImaging_CIJpegRenderer * This,
            /* [in] */ __x_ABI_CLumia_CImaging_CJpegOutputColorMode colorMode);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_RemoveExif )( 
            __RPC__in __x_ABI_CLumia_CImaging_CIJpegRenderer * This,
            /* [out][retval] */ __RPC__out boolean *__returnValue);
        
        /* [propput] */ HRESULT ( STDMETHODCALLTYPE *put_RemoveExif )( 
            __RPC__in __x_ABI_CLumia_CImaging_CIJpegRenderer * This,
            /* [in] */ boolean removeExif);
        
        HRESULT ( STDMETHODCALLTYPE *RenderAsync )( 
            __RPC__in __x_ABI_CLumia_CImaging_CIJpegRenderer * This,
            /* [out][retval] */ __RPC__deref_out_opt __FIAsyncOperation_1_Windows__CStorage__CStreams__CIBuffer **__returnValue);
        
        END_INTERFACE
    } __x_ABI_CLumia_CImaging_CIJpegRendererVtbl;

    interface __x_ABI_CLumia_CImaging_CIJpegRenderer
    {
        CONST_VTBL struct __x_ABI_CLumia_CImaging_CIJpegRendererVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define __x_ABI_CLumia_CImaging_CIJpegRenderer_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __x_ABI_CLumia_CImaging_CIJpegRenderer_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __x_ABI_CLumia_CImaging_CIJpegRenderer_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __x_ABI_CLumia_CImaging_CIJpegRenderer_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 

#define __x_ABI_CLumia_CImaging_CIJpegRenderer_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 

#define __x_ABI_CLumia_CImaging_CIJpegRenderer_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 


#define __x_ABI_CLumia_CImaging_CIJpegRenderer_get_Size(This,__returnValue)	\
    ( (This)->lpVtbl -> get_Size(This,__returnValue) ) 

#define __x_ABI_CLumia_CImaging_CIJpegRenderer_put_Size(This,size)	\
    ( (This)->lpVtbl -> put_Size(This,size) ) 

#define __x_ABI_CLumia_CImaging_CIJpegRenderer_get_OutputOption(This,__returnValue)	\
    ( (This)->lpVtbl -> get_OutputOption(This,__returnValue) ) 

#define __x_ABI_CLumia_CImaging_CIJpegRenderer_put_OutputOption(This,outputOption)	\
    ( (This)->lpVtbl -> put_OutputOption(This,outputOption) ) 

#define __x_ABI_CLumia_CImaging_CIJpegRenderer_get_Quality(This,__returnValue)	\
    ( (This)->lpVtbl -> get_Quality(This,__returnValue) ) 

#define __x_ABI_CLumia_CImaging_CIJpegRenderer_put_Quality(This,quality)	\
    ( (This)->lpVtbl -> put_Quality(This,quality) ) 

#define __x_ABI_CLumia_CImaging_CIJpegRenderer_get_OutputColorMode(This,__returnValue)	\
    ( (This)->lpVtbl -> get_OutputColorMode(This,__returnValue) ) 

#define __x_ABI_CLumia_CImaging_CIJpegRenderer_put_OutputColorMode(This,colorMode)	\
    ( (This)->lpVtbl -> put_OutputColorMode(This,colorMode) ) 

#define __x_ABI_CLumia_CImaging_CIJpegRenderer_get_RemoveExif(This,__returnValue)	\
    ( (This)->lpVtbl -> get_RemoveExif(This,__returnValue) ) 

#define __x_ABI_CLumia_CImaging_CIJpegRenderer_put_RemoveExif(This,removeExif)	\
    ( (This)->lpVtbl -> put_RemoveExif(This,removeExif) ) 

#define __x_ABI_CLumia_CImaging_CIJpegRenderer_RenderAsync(This,__returnValue)	\
    ( (This)->lpVtbl -> RenderAsync(This,__returnValue) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* ____x_ABI_CLumia_CImaging_CIJpegRenderer_INTERFACE_DEFINED__ */


/* interface __MIDL_itf_Lumia2EImaging_0000_0117 */
/* [local] */ 

#if !defined(____x_ABI_CLumia_CImaging_CIJpegRendererFactory_INTERFACE_DEFINED__)
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Lumia_Imaging_IJpegRendererFactory[] = L"Lumia.Imaging.IJpegRendererFactory";
#endif /* !defined(____x_ABI_CLumia_CImaging_CIJpegRendererFactory_INTERFACE_DEFINED__) */


/* interface __MIDL_itf_Lumia2EImaging_0000_0117 */
/* [local] */ 



extern RPC_IF_HANDLE __MIDL_itf_Lumia2EImaging_0000_0117_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_Lumia2EImaging_0000_0117_v0_0_s_ifspec;

#ifndef ____x_ABI_CLumia_CImaging_CIJpegRendererFactory_INTERFACE_DEFINED__
#define ____x_ABI_CLumia_CImaging_CIJpegRendererFactory_INTERFACE_DEFINED__

/* interface __x_ABI_CLumia_CImaging_CIJpegRendererFactory */
/* [uuid][object] */ 



/* interface ABI::Lumia::Imaging::IJpegRendererFactory */
/* [uuid][object] */ 


EXTERN_C const IID IID___x_ABI_CLumia_CImaging_CIJpegRendererFactory;

#if defined(__cplusplus) && !defined(CINTERFACE)
    } /* end extern "C" */
    namespace ABI {
        namespace Lumia {
            namespace Imaging {
                
                MIDL_INTERFACE("E953A123-68C2-3278-828A-ADB4921A0704")
                IJpegRendererFactory : public IInspectable
                {
                public:
                    virtual HRESULT STDMETHODCALLTYPE Create( 
                        /* [in] */ __RPC__in_opt ABI::Lumia::Imaging::IImageProvider *source,
                        /* [out][retval] */ __RPC__deref_out_opt ABI::Lumia::Imaging::IJpegRenderer **__returnValue) = 0;
                    
                };

                extern const __declspec(selectany) IID & IID_IJpegRendererFactory = __uuidof(IJpegRendererFactory);

                
            }  /* end namespace */
        }  /* end namespace */
    }  /* end namespace */
    extern "C" { 
    
#else 	/* C style interface */

    typedef struct __x_ABI_CLumia_CImaging_CIJpegRendererFactoryVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            __RPC__in __x_ABI_CLumia_CImaging_CIJpegRendererFactory * This,
            /* [in] */ __RPC__in REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            __RPC__in __x_ABI_CLumia_CImaging_CIJpegRendererFactory * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            __RPC__in __x_ABI_CLumia_CImaging_CIJpegRendererFactory * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetIids )( 
            __RPC__in __x_ABI_CLumia_CImaging_CIJpegRendererFactory * This,
            /* [out] */ __RPC__out ULONG *iidCount,
            /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
        
        HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )( 
            __RPC__in __x_ABI_CLumia_CImaging_CIJpegRendererFactory * This,
            /* [out] */ __RPC__deref_out_opt HSTRING *className);
        
        HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )( 
            __RPC__in __x_ABI_CLumia_CImaging_CIJpegRendererFactory * This,
            /* [out] */ __RPC__out TrustLevel *trustLevel);
        
        HRESULT ( STDMETHODCALLTYPE *Create )( 
            __RPC__in __x_ABI_CLumia_CImaging_CIJpegRendererFactory * This,
            /* [in] */ __RPC__in_opt __x_ABI_CLumia_CImaging_CIImageProvider *source,
            /* [out][retval] */ __RPC__deref_out_opt __x_ABI_CLumia_CImaging_CIJpegRenderer **__returnValue);
        
        END_INTERFACE
    } __x_ABI_CLumia_CImaging_CIJpegRendererFactoryVtbl;

    interface __x_ABI_CLumia_CImaging_CIJpegRendererFactory
    {
        CONST_VTBL struct __x_ABI_CLumia_CImaging_CIJpegRendererFactoryVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define __x_ABI_CLumia_CImaging_CIJpegRendererFactory_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __x_ABI_CLumia_CImaging_CIJpegRendererFactory_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __x_ABI_CLumia_CImaging_CIJpegRendererFactory_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __x_ABI_CLumia_CImaging_CIJpegRendererFactory_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 

#define __x_ABI_CLumia_CImaging_CIJpegRendererFactory_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 

#define __x_ABI_CLumia_CImaging_CIJpegRendererFactory_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 


#define __x_ABI_CLumia_CImaging_CIJpegRendererFactory_Create(This,source,__returnValue)	\
    ( (This)->lpVtbl -> Create(This,source,__returnValue) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* ____x_ABI_CLumia_CImaging_CIJpegRendererFactory_INTERFACE_DEFINED__ */


/* interface __MIDL_itf_Lumia2EImaging_0000_0118 */
/* [local] */ 

#if !defined(____x_ABI_CLumia_CImaging_CIJpegTools_INTERFACE_DEFINED__)
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Lumia_Imaging_IJpegTools[] = L"Lumia.Imaging.IJpegTools";
#endif /* !defined(____x_ABI_CLumia_CImaging_CIJpegTools_INTERFACE_DEFINED__) */


/* interface __MIDL_itf_Lumia2EImaging_0000_0118 */
/* [local] */ 



extern RPC_IF_HANDLE __MIDL_itf_Lumia2EImaging_0000_0118_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_Lumia2EImaging_0000_0118_v0_0_s_ifspec;

#ifndef ____x_ABI_CLumia_CImaging_CIJpegTools_INTERFACE_DEFINED__
#define ____x_ABI_CLumia_CImaging_CIJpegTools_INTERFACE_DEFINED__

/* interface __x_ABI_CLumia_CImaging_CIJpegTools */
/* [uuid][object] */ 



/* interface ABI::Lumia::Imaging::IJpegTools */
/* [uuid][object] */ 


EXTERN_C const IID IID___x_ABI_CLumia_CImaging_CIJpegTools;

#if defined(__cplusplus) && !defined(CINTERFACE)
    } /* end extern "C" */
    namespace ABI {
        namespace Lumia {
            namespace Imaging {
                
                MIDL_INTERFACE("E0966F98-DF60-357D-8F3F-4824696B85D1")
                IJpegTools : public IInspectable
                {
                public:
                };

                extern const __declspec(selectany) IID & IID_IJpegTools = __uuidof(IJpegTools);

                
            }  /* end namespace */
        }  /* end namespace */
    }  /* end namespace */
    extern "C" { 
    
#else 	/* C style interface */

    typedef struct __x_ABI_CLumia_CImaging_CIJpegToolsVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            __RPC__in __x_ABI_CLumia_CImaging_CIJpegTools * This,
            /* [in] */ __RPC__in REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            __RPC__in __x_ABI_CLumia_CImaging_CIJpegTools * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            __RPC__in __x_ABI_CLumia_CImaging_CIJpegTools * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetIids )( 
            __RPC__in __x_ABI_CLumia_CImaging_CIJpegTools * This,
            /* [out] */ __RPC__out ULONG *iidCount,
            /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
        
        HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )( 
            __RPC__in __x_ABI_CLumia_CImaging_CIJpegTools * This,
            /* [out] */ __RPC__deref_out_opt HSTRING *className);
        
        HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )( 
            __RPC__in __x_ABI_CLumia_CImaging_CIJpegTools * This,
            /* [out] */ __RPC__out TrustLevel *trustLevel);
        
        END_INTERFACE
    } __x_ABI_CLumia_CImaging_CIJpegToolsVtbl;

    interface __x_ABI_CLumia_CImaging_CIJpegTools
    {
        CONST_VTBL struct __x_ABI_CLumia_CImaging_CIJpegToolsVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define __x_ABI_CLumia_CImaging_CIJpegTools_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __x_ABI_CLumia_CImaging_CIJpegTools_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __x_ABI_CLumia_CImaging_CIJpegTools_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __x_ABI_CLumia_CImaging_CIJpegTools_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 

#define __x_ABI_CLumia_CImaging_CIJpegTools_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 

#define __x_ABI_CLumia_CImaging_CIJpegTools_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 


#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* ____x_ABI_CLumia_CImaging_CIJpegTools_INTERFACE_DEFINED__ */


/* interface __MIDL_itf_Lumia2EImaging_0000_0119 */
/* [local] */ 

#if !defined(____x_ABI_CLumia_CImaging_CIJpegToolsStatics_INTERFACE_DEFINED__)
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Lumia_Imaging_IJpegToolsStatics[] = L"Lumia.Imaging.IJpegToolsStatics";
#endif /* !defined(____x_ABI_CLumia_CImaging_CIJpegToolsStatics_INTERFACE_DEFINED__) */


/* interface __MIDL_itf_Lumia2EImaging_0000_0119 */
/* [local] */ 



extern RPC_IF_HANDLE __MIDL_itf_Lumia2EImaging_0000_0119_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_Lumia2EImaging_0000_0119_v0_0_s_ifspec;

#ifndef ____x_ABI_CLumia_CImaging_CIJpegToolsStatics_INTERFACE_DEFINED__
#define ____x_ABI_CLumia_CImaging_CIJpegToolsStatics_INTERFACE_DEFINED__

/* interface __x_ABI_CLumia_CImaging_CIJpegToolsStatics */
/* [uuid][object] */ 



/* interface ABI::Lumia::Imaging::IJpegToolsStatics */
/* [uuid][object] */ 


EXTERN_C const IID IID___x_ABI_CLumia_CImaging_CIJpegToolsStatics;

#if defined(__cplusplus) && !defined(CINTERFACE)
    } /* end extern "C" */
    namespace ABI {
        namespace Lumia {
            namespace Imaging {
                
                MIDL_INTERFACE("7A4457C6-05C8-31A9-B406-4CF9AF49F8EF")
                IJpegToolsStatics : public IInspectable
                {
                public:
                    virtual HRESULT STDMETHODCALLTYPE FlipAndRotateAsync( 
                        /* [in] */ __RPC__in_opt ABI::Windows::Storage::Streams::IBuffer *jpegSource,
                        /* [in] */ ABI::Lumia::Imaging::Transforms::FlipMode flipMode,
                        /* [in] */ ABI::Lumia::Imaging::Rotation rotation,
                        /* [in] */ ABI::Lumia::Imaging::JpegOperation jpegOperation,
                        /* [out][retval] */ __RPC__deref_out_opt __FIAsyncOperation_1_Windows__CStorage__CStreams__CIBuffer **__returnValue) = 0;
                    
                    virtual HRESULT STDMETHODCALLTYPE BlendAsync( 
                        /* [in] */ __RPC__in_opt ABI::Windows::Storage::Streams::IBuffer *jpegSource,
                        /* [in] */ __RPC__in_opt ABI::Lumia::Imaging::IReadableBitmap *bitmapSource,
                        /* [in] */ ABI::Windows::Foundation::Point blendPosition,
                        /* [out][retval] */ __RPC__deref_out_opt __FIAsyncOperation_1_Windows__CStorage__CStreams__CIBuffer **__returnValue) = 0;
                    
                    virtual HRESULT STDMETHODCALLTYPE SqueezeAsync( 
                        /* [in] */ __RPC__in_opt ABI::Windows::Storage::Streams::IBuffer *jpegSource,
                        /* [in] */ UINT32 toSize,
                        /* [out][retval] */ __RPC__deref_out_opt __FIAsyncOperation_1_Windows__CStorage__CStreams__CIBuffer **__returnValue) = 0;
                    
                    virtual HRESULT STDMETHODCALLTYPE AutoResizeAsync( 
                        /* [in] */ __RPC__in_opt ABI::Windows::Storage::Streams::IBuffer *jpegSource,
                        /* [in] */ __RPC__in_opt ABI::Lumia::Imaging::IAutoResizeConfiguration *autoConfiguration,
                        /* [out][retval] */ __RPC__deref_out_opt __FIAsyncOperation_1_Windows__CStorage__CStreams__CIBuffer **__returnValue) = 0;
                    
                };

                extern const __declspec(selectany) IID & IID_IJpegToolsStatics = __uuidof(IJpegToolsStatics);

                
            }  /* end namespace */
        }  /* end namespace */
    }  /* end namespace */
    extern "C" { 
    
#else 	/* C style interface */

    typedef struct __x_ABI_CLumia_CImaging_CIJpegToolsStaticsVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            __RPC__in __x_ABI_CLumia_CImaging_CIJpegToolsStatics * This,
            /* [in] */ __RPC__in REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            __RPC__in __x_ABI_CLumia_CImaging_CIJpegToolsStatics * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            __RPC__in __x_ABI_CLumia_CImaging_CIJpegToolsStatics * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetIids )( 
            __RPC__in __x_ABI_CLumia_CImaging_CIJpegToolsStatics * This,
            /* [out] */ __RPC__out ULONG *iidCount,
            /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
        
        HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )( 
            __RPC__in __x_ABI_CLumia_CImaging_CIJpegToolsStatics * This,
            /* [out] */ __RPC__deref_out_opt HSTRING *className);
        
        HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )( 
            __RPC__in __x_ABI_CLumia_CImaging_CIJpegToolsStatics * This,
            /* [out] */ __RPC__out TrustLevel *trustLevel);
        
        HRESULT ( STDMETHODCALLTYPE *FlipAndRotateAsync )( 
            __RPC__in __x_ABI_CLumia_CImaging_CIJpegToolsStatics * This,
            /* [in] */ __RPC__in_opt __x_ABI_CWindows_CStorage_CStreams_CIBuffer *jpegSource,
            /* [in] */ __x_ABI_CLumia_CImaging_CTransforms_CFlipMode flipMode,
            /* [in] */ __x_ABI_CLumia_CImaging_CRotation rotation,
            /* [in] */ __x_ABI_CLumia_CImaging_CJpegOperation jpegOperation,
            /* [out][retval] */ __RPC__deref_out_opt __FIAsyncOperation_1_Windows__CStorage__CStreams__CIBuffer **__returnValue);
        
        HRESULT ( STDMETHODCALLTYPE *BlendAsync )( 
            __RPC__in __x_ABI_CLumia_CImaging_CIJpegToolsStatics * This,
            /* [in] */ __RPC__in_opt __x_ABI_CWindows_CStorage_CStreams_CIBuffer *jpegSource,
            /* [in] */ __RPC__in_opt __x_ABI_CLumia_CImaging_CIReadableBitmap *bitmapSource,
            /* [in] */ __x_ABI_CWindows_CFoundation_CPoint blendPosition,
            /* [out][retval] */ __RPC__deref_out_opt __FIAsyncOperation_1_Windows__CStorage__CStreams__CIBuffer **__returnValue);
        
        HRESULT ( STDMETHODCALLTYPE *SqueezeAsync )( 
            __RPC__in __x_ABI_CLumia_CImaging_CIJpegToolsStatics * This,
            /* [in] */ __RPC__in_opt __x_ABI_CWindows_CStorage_CStreams_CIBuffer *jpegSource,
            /* [in] */ UINT32 toSize,
            /* [out][retval] */ __RPC__deref_out_opt __FIAsyncOperation_1_Windows__CStorage__CStreams__CIBuffer **__returnValue);
        
        HRESULT ( STDMETHODCALLTYPE *AutoResizeAsync )( 
            __RPC__in __x_ABI_CLumia_CImaging_CIJpegToolsStatics * This,
            /* [in] */ __RPC__in_opt __x_ABI_CWindows_CStorage_CStreams_CIBuffer *jpegSource,
            /* [in] */ __RPC__in_opt __x_ABI_CLumia_CImaging_CIAutoResizeConfiguration *autoConfiguration,
            /* [out][retval] */ __RPC__deref_out_opt __FIAsyncOperation_1_Windows__CStorage__CStreams__CIBuffer **__returnValue);
        
        END_INTERFACE
    } __x_ABI_CLumia_CImaging_CIJpegToolsStaticsVtbl;

    interface __x_ABI_CLumia_CImaging_CIJpegToolsStatics
    {
        CONST_VTBL struct __x_ABI_CLumia_CImaging_CIJpegToolsStaticsVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define __x_ABI_CLumia_CImaging_CIJpegToolsStatics_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __x_ABI_CLumia_CImaging_CIJpegToolsStatics_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __x_ABI_CLumia_CImaging_CIJpegToolsStatics_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __x_ABI_CLumia_CImaging_CIJpegToolsStatics_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 

#define __x_ABI_CLumia_CImaging_CIJpegToolsStatics_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 

#define __x_ABI_CLumia_CImaging_CIJpegToolsStatics_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 


#define __x_ABI_CLumia_CImaging_CIJpegToolsStatics_FlipAndRotateAsync(This,jpegSource,flipMode,rotation,jpegOperation,__returnValue)	\
    ( (This)->lpVtbl -> FlipAndRotateAsync(This,jpegSource,flipMode,rotation,jpegOperation,__returnValue) ) 

#define __x_ABI_CLumia_CImaging_CIJpegToolsStatics_BlendAsync(This,jpegSource,bitmapSource,blendPosition,__returnValue)	\
    ( (This)->lpVtbl -> BlendAsync(This,jpegSource,bitmapSource,blendPosition,__returnValue) ) 

#define __x_ABI_CLumia_CImaging_CIJpegToolsStatics_SqueezeAsync(This,jpegSource,toSize,__returnValue)	\
    ( (This)->lpVtbl -> SqueezeAsync(This,jpegSource,toSize,__returnValue) ) 

#define __x_ABI_CLumia_CImaging_CIJpegToolsStatics_AutoResizeAsync(This,jpegSource,autoConfiguration,__returnValue)	\
    ( (This)->lpVtbl -> AutoResizeAsync(This,jpegSource,autoConfiguration,__returnValue) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* ____x_ABI_CLumia_CImaging_CIJpegToolsStatics_INTERFACE_DEFINED__ */


/* interface __MIDL_itf_Lumia2EImaging_0000_0120 */
/* [local] */ 

#if !defined(____x_ABI_CLumia_CImaging_CIRandomAccessStreamImageSource_INTERFACE_DEFINED__)
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Lumia_Imaging_IRandomAccessStreamImageSource[] = L"Lumia.Imaging.IRandomAccessStreamImageSource";
#endif /* !defined(____x_ABI_CLumia_CImaging_CIRandomAccessStreamImageSource_INTERFACE_DEFINED__) */


/* interface __MIDL_itf_Lumia2EImaging_0000_0120 */
/* [local] */ 



extern RPC_IF_HANDLE __MIDL_itf_Lumia2EImaging_0000_0120_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_Lumia2EImaging_0000_0120_v0_0_s_ifspec;

#ifndef ____x_ABI_CLumia_CImaging_CIRandomAccessStreamImageSource_INTERFACE_DEFINED__
#define ____x_ABI_CLumia_CImaging_CIRandomAccessStreamImageSource_INTERFACE_DEFINED__

/* interface __x_ABI_CLumia_CImaging_CIRandomAccessStreamImageSource */
/* [uuid][object] */ 



/* interface ABI::Lumia::Imaging::IRandomAccessStreamImageSource */
/* [uuid][object] */ 


EXTERN_C const IID IID___x_ABI_CLumia_CImaging_CIRandomAccessStreamImageSource;

#if defined(__cplusplus) && !defined(CINTERFACE)
    } /* end extern "C" */
    namespace ABI {
        namespace Lumia {
            namespace Imaging {
                
                MIDL_INTERFACE("69EF1FDA-C7AF-3E00-A9E7-0EBB5BD4CD94")
                IRandomAccessStreamImageSource : public IInspectable
                {
                public:
                    virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_Stream( 
                        /* [out][retval] */ __RPC__deref_out_opt ABI::Windows::Storage::Streams::IRandomAccessStream **__returnValue) = 0;
                    
                    virtual /* [propput] */ HRESULT STDMETHODCALLTYPE put_Stream( 
                        /* [in] */ __RPC__in_opt ABI::Windows::Storage::Streams::IRandomAccessStream *stream) = 0;
                    
                    virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_ImageFormat( 
                        /* [out][retval] */ __RPC__out ABI::Lumia::Imaging::ImageFormat *__returnValue) = 0;
                    
                    virtual /* [propput] */ HRESULT STDMETHODCALLTYPE put_ImageFormat( 
                        /* [in] */ ABI::Lumia::Imaging::ImageFormat imageFormat) = 0;
                    
                };

                extern const __declspec(selectany) IID & IID_IRandomAccessStreamImageSource = __uuidof(IRandomAccessStreamImageSource);

                
            }  /* end namespace */
        }  /* end namespace */
    }  /* end namespace */
    extern "C" { 
    
#else 	/* C style interface */

    typedef struct __x_ABI_CLumia_CImaging_CIRandomAccessStreamImageSourceVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            __RPC__in __x_ABI_CLumia_CImaging_CIRandomAccessStreamImageSource * This,
            /* [in] */ __RPC__in REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            __RPC__in __x_ABI_CLumia_CImaging_CIRandomAccessStreamImageSource * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            __RPC__in __x_ABI_CLumia_CImaging_CIRandomAccessStreamImageSource * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetIids )( 
            __RPC__in __x_ABI_CLumia_CImaging_CIRandomAccessStreamImageSource * This,
            /* [out] */ __RPC__out ULONG *iidCount,
            /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
        
        HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )( 
            __RPC__in __x_ABI_CLumia_CImaging_CIRandomAccessStreamImageSource * This,
            /* [out] */ __RPC__deref_out_opt HSTRING *className);
        
        HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )( 
            __RPC__in __x_ABI_CLumia_CImaging_CIRandomAccessStreamImageSource * This,
            /* [out] */ __RPC__out TrustLevel *trustLevel);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_Stream )( 
            __RPC__in __x_ABI_CLumia_CImaging_CIRandomAccessStreamImageSource * This,
            /* [out][retval] */ __RPC__deref_out_opt __x_ABI_CWindows_CStorage_CStreams_CIRandomAccessStream **__returnValue);
        
        /* [propput] */ HRESULT ( STDMETHODCALLTYPE *put_Stream )( 
            __RPC__in __x_ABI_CLumia_CImaging_CIRandomAccessStreamImageSource * This,
            /* [in] */ __RPC__in_opt __x_ABI_CWindows_CStorage_CStreams_CIRandomAccessStream *stream);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_ImageFormat )( 
            __RPC__in __x_ABI_CLumia_CImaging_CIRandomAccessStreamImageSource * This,
            /* [out][retval] */ __RPC__out __x_ABI_CLumia_CImaging_CImageFormat *__returnValue);
        
        /* [propput] */ HRESULT ( STDMETHODCALLTYPE *put_ImageFormat )( 
            __RPC__in __x_ABI_CLumia_CImaging_CIRandomAccessStreamImageSource * This,
            /* [in] */ __x_ABI_CLumia_CImaging_CImageFormat imageFormat);
        
        END_INTERFACE
    } __x_ABI_CLumia_CImaging_CIRandomAccessStreamImageSourceVtbl;

    interface __x_ABI_CLumia_CImaging_CIRandomAccessStreamImageSource
    {
        CONST_VTBL struct __x_ABI_CLumia_CImaging_CIRandomAccessStreamImageSourceVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define __x_ABI_CLumia_CImaging_CIRandomAccessStreamImageSource_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __x_ABI_CLumia_CImaging_CIRandomAccessStreamImageSource_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __x_ABI_CLumia_CImaging_CIRandomAccessStreamImageSource_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __x_ABI_CLumia_CImaging_CIRandomAccessStreamImageSource_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 

#define __x_ABI_CLumia_CImaging_CIRandomAccessStreamImageSource_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 

#define __x_ABI_CLumia_CImaging_CIRandomAccessStreamImageSource_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 


#define __x_ABI_CLumia_CImaging_CIRandomAccessStreamImageSource_get_Stream(This,__returnValue)	\
    ( (This)->lpVtbl -> get_Stream(This,__returnValue) ) 

#define __x_ABI_CLumia_CImaging_CIRandomAccessStreamImageSource_put_Stream(This,stream)	\
    ( (This)->lpVtbl -> put_Stream(This,stream) ) 

#define __x_ABI_CLumia_CImaging_CIRandomAccessStreamImageSource_get_ImageFormat(This,__returnValue)	\
    ( (This)->lpVtbl -> get_ImageFormat(This,__returnValue) ) 

#define __x_ABI_CLumia_CImaging_CIRandomAccessStreamImageSource_put_ImageFormat(This,imageFormat)	\
    ( (This)->lpVtbl -> put_ImageFormat(This,imageFormat) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* ____x_ABI_CLumia_CImaging_CIRandomAccessStreamImageSource_INTERFACE_DEFINED__ */


/* interface __MIDL_itf_Lumia2EImaging_0000_0121 */
/* [local] */ 

#if !defined(____x_ABI_CLumia_CImaging_CIRandomAccessStreamImageSourceFactory_INTERFACE_DEFINED__)
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Lumia_Imaging_IRandomAccessStreamImageSourceFactory[] = L"Lumia.Imaging.IRandomAccessStreamImageSourceFactory";
#endif /* !defined(____x_ABI_CLumia_CImaging_CIRandomAccessStreamImageSourceFactory_INTERFACE_DEFINED__) */


/* interface __MIDL_itf_Lumia2EImaging_0000_0121 */
/* [local] */ 



extern RPC_IF_HANDLE __MIDL_itf_Lumia2EImaging_0000_0121_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_Lumia2EImaging_0000_0121_v0_0_s_ifspec;

#ifndef ____x_ABI_CLumia_CImaging_CIRandomAccessStreamImageSourceFactory_INTERFACE_DEFINED__
#define ____x_ABI_CLumia_CImaging_CIRandomAccessStreamImageSourceFactory_INTERFACE_DEFINED__

/* interface __x_ABI_CLumia_CImaging_CIRandomAccessStreamImageSourceFactory */
/* [uuid][object] */ 



/* interface ABI::Lumia::Imaging::IRandomAccessStreamImageSourceFactory */
/* [uuid][object] */ 


EXTERN_C const IID IID___x_ABI_CLumia_CImaging_CIRandomAccessStreamImageSourceFactory;

#if defined(__cplusplus) && !defined(CINTERFACE)
    } /* end extern "C" */
    namespace ABI {
        namespace Lumia {
            namespace Imaging {
                
                MIDL_INTERFACE("500D56B0-7EC3-31F4-8CC0-104474927B4D")
                IRandomAccessStreamImageSourceFactory : public IInspectable
                {
                public:
                    virtual HRESULT STDMETHODCALLTYPE Create( 
                        /* [in] */ __RPC__in_opt ABI::Windows::Storage::Streams::IRandomAccessStream *stream,
                        /* [out][retval] */ __RPC__deref_out_opt ABI::Lumia::Imaging::IRandomAccessStreamImageSource **__returnValue) = 0;
                    
                    virtual HRESULT STDMETHODCALLTYPE CreateWithImageFormat( 
                        /* [in] */ __RPC__in_opt ABI::Windows::Storage::Streams::IRandomAccessStream *stream,
                        /* [in] */ ABI::Lumia::Imaging::ImageFormat imageFormat,
                        /* [out][retval] */ __RPC__deref_out_opt ABI::Lumia::Imaging::IRandomAccessStreamImageSource **__returnValue) = 0;
                    
                };

                extern const __declspec(selectany) IID & IID_IRandomAccessStreamImageSourceFactory = __uuidof(IRandomAccessStreamImageSourceFactory);

                
            }  /* end namespace */
        }  /* end namespace */
    }  /* end namespace */
    extern "C" { 
    
#else 	/* C style interface */

    typedef struct __x_ABI_CLumia_CImaging_CIRandomAccessStreamImageSourceFactoryVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            __RPC__in __x_ABI_CLumia_CImaging_CIRandomAccessStreamImageSourceFactory * This,
            /* [in] */ __RPC__in REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            __RPC__in __x_ABI_CLumia_CImaging_CIRandomAccessStreamImageSourceFactory * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            __RPC__in __x_ABI_CLumia_CImaging_CIRandomAccessStreamImageSourceFactory * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetIids )( 
            __RPC__in __x_ABI_CLumia_CImaging_CIRandomAccessStreamImageSourceFactory * This,
            /* [out] */ __RPC__out ULONG *iidCount,
            /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
        
        HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )( 
            __RPC__in __x_ABI_CLumia_CImaging_CIRandomAccessStreamImageSourceFactory * This,
            /* [out] */ __RPC__deref_out_opt HSTRING *className);
        
        HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )( 
            __RPC__in __x_ABI_CLumia_CImaging_CIRandomAccessStreamImageSourceFactory * This,
            /* [out] */ __RPC__out TrustLevel *trustLevel);
        
        HRESULT ( STDMETHODCALLTYPE *Create )( 
            __RPC__in __x_ABI_CLumia_CImaging_CIRandomAccessStreamImageSourceFactory * This,
            /* [in] */ __RPC__in_opt __x_ABI_CWindows_CStorage_CStreams_CIRandomAccessStream *stream,
            /* [out][retval] */ __RPC__deref_out_opt __x_ABI_CLumia_CImaging_CIRandomAccessStreamImageSource **__returnValue);
        
        HRESULT ( STDMETHODCALLTYPE *CreateWithImageFormat )( 
            __RPC__in __x_ABI_CLumia_CImaging_CIRandomAccessStreamImageSourceFactory * This,
            /* [in] */ __RPC__in_opt __x_ABI_CWindows_CStorage_CStreams_CIRandomAccessStream *stream,
            /* [in] */ __x_ABI_CLumia_CImaging_CImageFormat imageFormat,
            /* [out][retval] */ __RPC__deref_out_opt __x_ABI_CLumia_CImaging_CIRandomAccessStreamImageSource **__returnValue);
        
        END_INTERFACE
    } __x_ABI_CLumia_CImaging_CIRandomAccessStreamImageSourceFactoryVtbl;

    interface __x_ABI_CLumia_CImaging_CIRandomAccessStreamImageSourceFactory
    {
        CONST_VTBL struct __x_ABI_CLumia_CImaging_CIRandomAccessStreamImageSourceFactoryVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define __x_ABI_CLumia_CImaging_CIRandomAccessStreamImageSourceFactory_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __x_ABI_CLumia_CImaging_CIRandomAccessStreamImageSourceFactory_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __x_ABI_CLumia_CImaging_CIRandomAccessStreamImageSourceFactory_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __x_ABI_CLumia_CImaging_CIRandomAccessStreamImageSourceFactory_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 

#define __x_ABI_CLumia_CImaging_CIRandomAccessStreamImageSourceFactory_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 

#define __x_ABI_CLumia_CImaging_CIRandomAccessStreamImageSourceFactory_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 


#define __x_ABI_CLumia_CImaging_CIRandomAccessStreamImageSourceFactory_Create(This,stream,__returnValue)	\
    ( (This)->lpVtbl -> Create(This,stream,__returnValue) ) 

#define __x_ABI_CLumia_CImaging_CIRandomAccessStreamImageSourceFactory_CreateWithImageFormat(This,stream,imageFormat,__returnValue)	\
    ( (This)->lpVtbl -> CreateWithImageFormat(This,stream,imageFormat,__returnValue) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* ____x_ABI_CLumia_CImaging_CIRandomAccessStreamImageSourceFactory_INTERFACE_DEFINED__ */


/* interface __MIDL_itf_Lumia2EImaging_0000_0122 */
/* [local] */ 

#if !defined(____x_ABI_CLumia_CImaging_CIStorageFileImageSource_INTERFACE_DEFINED__)
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Lumia_Imaging_IStorageFileImageSource[] = L"Lumia.Imaging.IStorageFileImageSource";
#endif /* !defined(____x_ABI_CLumia_CImaging_CIStorageFileImageSource_INTERFACE_DEFINED__) */


/* interface __MIDL_itf_Lumia2EImaging_0000_0122 */
/* [local] */ 



extern RPC_IF_HANDLE __MIDL_itf_Lumia2EImaging_0000_0122_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_Lumia2EImaging_0000_0122_v0_0_s_ifspec;

#ifndef ____x_ABI_CLumia_CImaging_CIStorageFileImageSource_INTERFACE_DEFINED__
#define ____x_ABI_CLumia_CImaging_CIStorageFileImageSource_INTERFACE_DEFINED__

/* interface __x_ABI_CLumia_CImaging_CIStorageFileImageSource */
/* [uuid][object] */ 



/* interface ABI::Lumia::Imaging::IStorageFileImageSource */
/* [uuid][object] */ 


EXTERN_C const IID IID___x_ABI_CLumia_CImaging_CIStorageFileImageSource;

#if defined(__cplusplus) && !defined(CINTERFACE)
    } /* end extern "C" */
    namespace ABI {
        namespace Lumia {
            namespace Imaging {
                
                MIDL_INTERFACE("6BC46E72-6AD4-3E33-9ED7-502F8F1CA906")
                IStorageFileImageSource : public IInspectable
                {
                public:
                    virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_StorageFile( 
                        /* [out][retval] */ __RPC__deref_out_opt ABI::Windows::Storage::IStorageFile **__returnValue) = 0;
                    
                    virtual /* [propput] */ HRESULT STDMETHODCALLTYPE put_StorageFile( 
                        /* [in] */ __RPC__in_opt ABI::Windows::Storage::IStorageFile *storageFile) = 0;
                    
                    virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_ImageFormat( 
                        /* [out][retval] */ __RPC__out ABI::Lumia::Imaging::ImageFormat *__returnValue) = 0;
                    
                    virtual /* [propput] */ HRESULT STDMETHODCALLTYPE put_ImageFormat( 
                        /* [in] */ ABI::Lumia::Imaging::ImageFormat imageFormat) = 0;
                    
                };

                extern const __declspec(selectany) IID & IID_IStorageFileImageSource = __uuidof(IStorageFileImageSource);

                
            }  /* end namespace */
        }  /* end namespace */
    }  /* end namespace */
    extern "C" { 
    
#else 	/* C style interface */

    typedef struct __x_ABI_CLumia_CImaging_CIStorageFileImageSourceVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            __RPC__in __x_ABI_CLumia_CImaging_CIStorageFileImageSource * This,
            /* [in] */ __RPC__in REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            __RPC__in __x_ABI_CLumia_CImaging_CIStorageFileImageSource * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            __RPC__in __x_ABI_CLumia_CImaging_CIStorageFileImageSource * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetIids )( 
            __RPC__in __x_ABI_CLumia_CImaging_CIStorageFileImageSource * This,
            /* [out] */ __RPC__out ULONG *iidCount,
            /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
        
        HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )( 
            __RPC__in __x_ABI_CLumia_CImaging_CIStorageFileImageSource * This,
            /* [out] */ __RPC__deref_out_opt HSTRING *className);
        
        HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )( 
            __RPC__in __x_ABI_CLumia_CImaging_CIStorageFileImageSource * This,
            /* [out] */ __RPC__out TrustLevel *trustLevel);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_StorageFile )( 
            __RPC__in __x_ABI_CLumia_CImaging_CIStorageFileImageSource * This,
            /* [out][retval] */ __RPC__deref_out_opt __x_ABI_CWindows_CStorage_CIStorageFile **__returnValue);
        
        /* [propput] */ HRESULT ( STDMETHODCALLTYPE *put_StorageFile )( 
            __RPC__in __x_ABI_CLumia_CImaging_CIStorageFileImageSource * This,
            /* [in] */ __RPC__in_opt __x_ABI_CWindows_CStorage_CIStorageFile *storageFile);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_ImageFormat )( 
            __RPC__in __x_ABI_CLumia_CImaging_CIStorageFileImageSource * This,
            /* [out][retval] */ __RPC__out __x_ABI_CLumia_CImaging_CImageFormat *__returnValue);
        
        /* [propput] */ HRESULT ( STDMETHODCALLTYPE *put_ImageFormat )( 
            __RPC__in __x_ABI_CLumia_CImaging_CIStorageFileImageSource * This,
            /* [in] */ __x_ABI_CLumia_CImaging_CImageFormat imageFormat);
        
        END_INTERFACE
    } __x_ABI_CLumia_CImaging_CIStorageFileImageSourceVtbl;

    interface __x_ABI_CLumia_CImaging_CIStorageFileImageSource
    {
        CONST_VTBL struct __x_ABI_CLumia_CImaging_CIStorageFileImageSourceVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define __x_ABI_CLumia_CImaging_CIStorageFileImageSource_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __x_ABI_CLumia_CImaging_CIStorageFileImageSource_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __x_ABI_CLumia_CImaging_CIStorageFileImageSource_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __x_ABI_CLumia_CImaging_CIStorageFileImageSource_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 

#define __x_ABI_CLumia_CImaging_CIStorageFileImageSource_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 

#define __x_ABI_CLumia_CImaging_CIStorageFileImageSource_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 


#define __x_ABI_CLumia_CImaging_CIStorageFileImageSource_get_StorageFile(This,__returnValue)	\
    ( (This)->lpVtbl -> get_StorageFile(This,__returnValue) ) 

#define __x_ABI_CLumia_CImaging_CIStorageFileImageSource_put_StorageFile(This,storageFile)	\
    ( (This)->lpVtbl -> put_StorageFile(This,storageFile) ) 

#define __x_ABI_CLumia_CImaging_CIStorageFileImageSource_get_ImageFormat(This,__returnValue)	\
    ( (This)->lpVtbl -> get_ImageFormat(This,__returnValue) ) 

#define __x_ABI_CLumia_CImaging_CIStorageFileImageSource_put_ImageFormat(This,imageFormat)	\
    ( (This)->lpVtbl -> put_ImageFormat(This,imageFormat) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* ____x_ABI_CLumia_CImaging_CIStorageFileImageSource_INTERFACE_DEFINED__ */


/* interface __MIDL_itf_Lumia2EImaging_0000_0123 */
/* [local] */ 

#if !defined(____x_ABI_CLumia_CImaging_CIStorageFileImageSourceFactory_INTERFACE_DEFINED__)
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Lumia_Imaging_IStorageFileImageSourceFactory[] = L"Lumia.Imaging.IStorageFileImageSourceFactory";
#endif /* !defined(____x_ABI_CLumia_CImaging_CIStorageFileImageSourceFactory_INTERFACE_DEFINED__) */


/* interface __MIDL_itf_Lumia2EImaging_0000_0123 */
/* [local] */ 



extern RPC_IF_HANDLE __MIDL_itf_Lumia2EImaging_0000_0123_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_Lumia2EImaging_0000_0123_v0_0_s_ifspec;

#ifndef ____x_ABI_CLumia_CImaging_CIStorageFileImageSourceFactory_INTERFACE_DEFINED__
#define ____x_ABI_CLumia_CImaging_CIStorageFileImageSourceFactory_INTERFACE_DEFINED__

/* interface __x_ABI_CLumia_CImaging_CIStorageFileImageSourceFactory */
/* [uuid][object] */ 



/* interface ABI::Lumia::Imaging::IStorageFileImageSourceFactory */
/* [uuid][object] */ 


EXTERN_C const IID IID___x_ABI_CLumia_CImaging_CIStorageFileImageSourceFactory;

#if defined(__cplusplus) && !defined(CINTERFACE)
    } /* end extern "C" */
    namespace ABI {
        namespace Lumia {
            namespace Imaging {
                
                MIDL_INTERFACE("3F4EA5C5-DE6F-3B91-92D7-1A315DAD2044")
                IStorageFileImageSourceFactory : public IInspectable
                {
                public:
                    virtual HRESULT STDMETHODCALLTYPE Create( 
                        /* [in] */ __RPC__in_opt ABI::Windows::Storage::IStorageFile *storageFile,
                        /* [out][retval] */ __RPC__deref_out_opt ABI::Lumia::Imaging::IStorageFileImageSource **__returnValue) = 0;
                    
                    virtual HRESULT STDMETHODCALLTYPE CreateWithImageFormat( 
                        /* [in] */ __RPC__in_opt ABI::Windows::Storage::IStorageFile *storageFile,
                        /* [in] */ ABI::Lumia::Imaging::ImageFormat imageFormat,
                        /* [out][retval] */ __RPC__deref_out_opt ABI::Lumia::Imaging::IStorageFileImageSource **__returnValue) = 0;
                    
                };

                extern const __declspec(selectany) IID & IID_IStorageFileImageSourceFactory = __uuidof(IStorageFileImageSourceFactory);

                
            }  /* end namespace */
        }  /* end namespace */
    }  /* end namespace */
    extern "C" { 
    
#else 	/* C style interface */

    typedef struct __x_ABI_CLumia_CImaging_CIStorageFileImageSourceFactoryVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            __RPC__in __x_ABI_CLumia_CImaging_CIStorageFileImageSourceFactory * This,
            /* [in] */ __RPC__in REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            __RPC__in __x_ABI_CLumia_CImaging_CIStorageFileImageSourceFactory * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            __RPC__in __x_ABI_CLumia_CImaging_CIStorageFileImageSourceFactory * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetIids )( 
            __RPC__in __x_ABI_CLumia_CImaging_CIStorageFileImageSourceFactory * This,
            /* [out] */ __RPC__out ULONG *iidCount,
            /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
        
        HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )( 
            __RPC__in __x_ABI_CLumia_CImaging_CIStorageFileImageSourceFactory * This,
            /* [out] */ __RPC__deref_out_opt HSTRING *className);
        
        HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )( 
            __RPC__in __x_ABI_CLumia_CImaging_CIStorageFileImageSourceFactory * This,
            /* [out] */ __RPC__out TrustLevel *trustLevel);
        
        HRESULT ( STDMETHODCALLTYPE *Create )( 
            __RPC__in __x_ABI_CLumia_CImaging_CIStorageFileImageSourceFactory * This,
            /* [in] */ __RPC__in_opt __x_ABI_CWindows_CStorage_CIStorageFile *storageFile,
            /* [out][retval] */ __RPC__deref_out_opt __x_ABI_CLumia_CImaging_CIStorageFileImageSource **__returnValue);
        
        HRESULT ( STDMETHODCALLTYPE *CreateWithImageFormat )( 
            __RPC__in __x_ABI_CLumia_CImaging_CIStorageFileImageSourceFactory * This,
            /* [in] */ __RPC__in_opt __x_ABI_CWindows_CStorage_CIStorageFile *storageFile,
            /* [in] */ __x_ABI_CLumia_CImaging_CImageFormat imageFormat,
            /* [out][retval] */ __RPC__deref_out_opt __x_ABI_CLumia_CImaging_CIStorageFileImageSource **__returnValue);
        
        END_INTERFACE
    } __x_ABI_CLumia_CImaging_CIStorageFileImageSourceFactoryVtbl;

    interface __x_ABI_CLumia_CImaging_CIStorageFileImageSourceFactory
    {
        CONST_VTBL struct __x_ABI_CLumia_CImaging_CIStorageFileImageSourceFactoryVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define __x_ABI_CLumia_CImaging_CIStorageFileImageSourceFactory_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __x_ABI_CLumia_CImaging_CIStorageFileImageSourceFactory_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __x_ABI_CLumia_CImaging_CIStorageFileImageSourceFactory_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __x_ABI_CLumia_CImaging_CIStorageFileImageSourceFactory_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 

#define __x_ABI_CLumia_CImaging_CIStorageFileImageSourceFactory_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 

#define __x_ABI_CLumia_CImaging_CIStorageFileImageSourceFactory_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 


#define __x_ABI_CLumia_CImaging_CIStorageFileImageSourceFactory_Create(This,storageFile,__returnValue)	\
    ( (This)->lpVtbl -> Create(This,storageFile,__returnValue) ) 

#define __x_ABI_CLumia_CImaging_CIStorageFileImageSourceFactory_CreateWithImageFormat(This,storageFile,imageFormat,__returnValue)	\
    ( (This)->lpVtbl -> CreateWithImageFormat(This,storageFile,imageFormat,__returnValue) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* ____x_ABI_CLumia_CImaging_CIStorageFileImageSourceFactory_INTERFACE_DEFINED__ */


/* interface __MIDL_itf_Lumia2EImaging_0000_0124 */
/* [local] */ 

#if !defined(____x_ABI_CLumia_CImaging_CIMediaCapture_INTERFACE_DEFINED__)
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Lumia_Imaging_IMediaCapture[] = L"Lumia.Imaging.IMediaCapture";
#endif /* !defined(____x_ABI_CLumia_CImaging_CIMediaCapture_INTERFACE_DEFINED__) */


/* interface __MIDL_itf_Lumia2EImaging_0000_0124 */
/* [local] */ 



extern RPC_IF_HANDLE __MIDL_itf_Lumia2EImaging_0000_0124_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_Lumia2EImaging_0000_0124_v0_0_s_ifspec;

#ifndef ____x_ABI_CLumia_CImaging_CIMediaCapture_INTERFACE_DEFINED__
#define ____x_ABI_CLumia_CImaging_CIMediaCapture_INTERFACE_DEFINED__

/* interface __x_ABI_CLumia_CImaging_CIMediaCapture */
/* [uuid][object] */ 



/* interface ABI::Lumia::Imaging::IMediaCapture */
/* [uuid][object] */ 


EXTERN_C const IID IID___x_ABI_CLumia_CImaging_CIMediaCapture;

#if defined(__cplusplus) && !defined(CINTERFACE)
    } /* end extern "C" */
    namespace ABI {
        namespace Lumia {
            namespace Imaging {
                
                MIDL_INTERFACE("2285217E-DECB-3578-BC82-54D38AA06F1A")
                IMediaCapture : public IInspectable
                {
                public:
                    virtual HRESULT STDMETHODCALLTYPE InitializeAsync1( 
                        /* [in] */ __RPC__in_opt ABI::Windows::Media::Capture::IMediaCaptureInitializationSettings *mediaCaptureInitializationSettings,
                        /* [out][retval] */ __RPC__deref_out_opt ABI::Windows::Foundation::IAsyncAction **__returnValue) = 0;
                    
                    virtual HRESULT STDMETHODCALLTYPE InitializeAsync2( 
                        /* [out][retval] */ __RPC__deref_out_opt ABI::Windows::Foundation::IAsyncAction **__returnValue) = 0;
                    
                    virtual HRESULT STDMETHODCALLTYPE StartPreviewAsync( 
                        /* [out][retval] */ __RPC__deref_out_opt ABI::Windows::Foundation::IAsyncAction **__returnValue) = 0;
                    
                    virtual HRESULT STDMETHODCALLTYPE StartPreviewToCustomSinkAsync( 
                        /* [in] */ __RPC__in_opt ABI::Windows::Media::MediaProperties::IMediaEncodingProfile *encodingProfile,
                        /* [in] */ __RPC__in_opt ABI::Windows::Media::IMediaExtension *customMediaSink,
                        /* [out][retval] */ __RPC__deref_out_opt ABI::Windows::Foundation::IAsyncAction **__returnValue) = 0;
                    
                    virtual HRESULT STDMETHODCALLTYPE StopPreviewAsync( 
                        /* [out][retval] */ __RPC__deref_out_opt ABI::Windows::Foundation::IAsyncAction **__returnValue) = 0;
                    
                    virtual HRESULT STDMETHODCALLTYPE SupportsVideoPreview( 
                        /* [out][retval] */ __RPC__out boolean *__returnValue) = 0;
                    
                    virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_VideoDeviceController( 
                        /* [out][retval] */ __RPC__deref_out_opt ABI::Windows::Media::Devices::IMediaDeviceController **__returnValue) = 0;
                    
                };

                extern const __declspec(selectany) IID & IID_IMediaCapture = __uuidof(IMediaCapture);

                
            }  /* end namespace */
        }  /* end namespace */
    }  /* end namespace */
    extern "C" { 
    
#else 	/* C style interface */

    typedef struct __x_ABI_CLumia_CImaging_CIMediaCaptureVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            __RPC__in __x_ABI_CLumia_CImaging_CIMediaCapture * This,
            /* [in] */ __RPC__in REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            __RPC__in __x_ABI_CLumia_CImaging_CIMediaCapture * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            __RPC__in __x_ABI_CLumia_CImaging_CIMediaCapture * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetIids )( 
            __RPC__in __x_ABI_CLumia_CImaging_CIMediaCapture * This,
            /* [out] */ __RPC__out ULONG *iidCount,
            /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
        
        HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )( 
            __RPC__in __x_ABI_CLumia_CImaging_CIMediaCapture * This,
            /* [out] */ __RPC__deref_out_opt HSTRING *className);
        
        HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )( 
            __RPC__in __x_ABI_CLumia_CImaging_CIMediaCapture * This,
            /* [out] */ __RPC__out TrustLevel *trustLevel);
        
        HRESULT ( STDMETHODCALLTYPE *InitializeAsync1 )( 
            __RPC__in __x_ABI_CLumia_CImaging_CIMediaCapture * This,
            /* [in] */ __RPC__in_opt __x_ABI_CWindows_CMedia_CCapture_CIMediaCaptureInitializationSettings *mediaCaptureInitializationSettings,
            /* [out][retval] */ __RPC__deref_out_opt __x_ABI_CWindows_CFoundation_CIAsyncAction **__returnValue);
        
        HRESULT ( STDMETHODCALLTYPE *InitializeAsync2 )( 
            __RPC__in __x_ABI_CLumia_CImaging_CIMediaCapture * This,
            /* [out][retval] */ __RPC__deref_out_opt __x_ABI_CWindows_CFoundation_CIAsyncAction **__returnValue);
        
        HRESULT ( STDMETHODCALLTYPE *StartPreviewAsync )( 
            __RPC__in __x_ABI_CLumia_CImaging_CIMediaCapture * This,
            /* [out][retval] */ __RPC__deref_out_opt __x_ABI_CWindows_CFoundation_CIAsyncAction **__returnValue);
        
        HRESULT ( STDMETHODCALLTYPE *StartPreviewToCustomSinkAsync )( 
            __RPC__in __x_ABI_CLumia_CImaging_CIMediaCapture * This,
            /* [in] */ __RPC__in_opt __x_ABI_CWindows_CMedia_CMediaProperties_CIMediaEncodingProfile *encodingProfile,
            /* [in] */ __RPC__in_opt __x_ABI_CWindows_CMedia_CIMediaExtension *customMediaSink,
            /* [out][retval] */ __RPC__deref_out_opt __x_ABI_CWindows_CFoundation_CIAsyncAction **__returnValue);
        
        HRESULT ( STDMETHODCALLTYPE *StopPreviewAsync )( 
            __RPC__in __x_ABI_CLumia_CImaging_CIMediaCapture * This,
            /* [out][retval] */ __RPC__deref_out_opt __x_ABI_CWindows_CFoundation_CIAsyncAction **__returnValue);
        
        HRESULT ( STDMETHODCALLTYPE *SupportsVideoPreview )( 
            __RPC__in __x_ABI_CLumia_CImaging_CIMediaCapture * This,
            /* [out][retval] */ __RPC__out boolean *__returnValue);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_VideoDeviceController )( 
            __RPC__in __x_ABI_CLumia_CImaging_CIMediaCapture * This,
            /* [out][retval] */ __RPC__deref_out_opt __x_ABI_CWindows_CMedia_CDevices_CIMediaDeviceController **__returnValue);
        
        END_INTERFACE
    } __x_ABI_CLumia_CImaging_CIMediaCaptureVtbl;

    interface __x_ABI_CLumia_CImaging_CIMediaCapture
    {
        CONST_VTBL struct __x_ABI_CLumia_CImaging_CIMediaCaptureVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define __x_ABI_CLumia_CImaging_CIMediaCapture_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __x_ABI_CLumia_CImaging_CIMediaCapture_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __x_ABI_CLumia_CImaging_CIMediaCapture_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __x_ABI_CLumia_CImaging_CIMediaCapture_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 

#define __x_ABI_CLumia_CImaging_CIMediaCapture_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 

#define __x_ABI_CLumia_CImaging_CIMediaCapture_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 


#define __x_ABI_CLumia_CImaging_CIMediaCapture_InitializeAsync1(This,mediaCaptureInitializationSettings,__returnValue)	\
    ( (This)->lpVtbl -> InitializeAsync1(This,mediaCaptureInitializationSettings,__returnValue) ) 

#define __x_ABI_CLumia_CImaging_CIMediaCapture_InitializeAsync2(This,__returnValue)	\
    ( (This)->lpVtbl -> InitializeAsync2(This,__returnValue) ) 

#define __x_ABI_CLumia_CImaging_CIMediaCapture_StartPreviewAsync(This,__returnValue)	\
    ( (This)->lpVtbl -> StartPreviewAsync(This,__returnValue) ) 

#define __x_ABI_CLumia_CImaging_CIMediaCapture_StartPreviewToCustomSinkAsync(This,encodingProfile,customMediaSink,__returnValue)	\
    ( (This)->lpVtbl -> StartPreviewToCustomSinkAsync(This,encodingProfile,customMediaSink,__returnValue) ) 

#define __x_ABI_CLumia_CImaging_CIMediaCapture_StopPreviewAsync(This,__returnValue)	\
    ( (This)->lpVtbl -> StopPreviewAsync(This,__returnValue) ) 

#define __x_ABI_CLumia_CImaging_CIMediaCapture_SupportsVideoPreview(This,__returnValue)	\
    ( (This)->lpVtbl -> SupportsVideoPreview(This,__returnValue) ) 

#define __x_ABI_CLumia_CImaging_CIMediaCapture_get_VideoDeviceController(This,__returnValue)	\
    ( (This)->lpVtbl -> get_VideoDeviceController(This,__returnValue) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* ____x_ABI_CLumia_CImaging_CIMediaCapture_INTERFACE_DEFINED__ */


/* interface __MIDL_itf_Lumia2EImaging_0000_2005 */




/* interface __MIDL_itf_Lumia2EImaging_0000_2005 */




extern RPC_IF_HANDLE __MIDL_itf_Lumia2EImaging_0000_2005_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_Lumia2EImaging_0000_2005_v0_0_s_ifspec;

/* interface __MIDL_itf_Lumia2EImaging_0000_0126 */
/* [local] */ 

#ifndef DEF___FIAsyncOperationCompletedHandler_1_Windows__CMedia__CMediaProperties__CVideoEncodingProperties
#define DEF___FIAsyncOperationCompletedHandler_1_Windows__CMedia__CMediaProperties__CVideoEncodingProperties
#if !defined(__cplusplus) || defined(RO_NO_TEMPLATE_NAME)



/* interface __MIDL_itf_Lumia2EImaging_0000_0126 */
/* [local] */ 




extern RPC_IF_HANDLE __MIDL_itf_Lumia2EImaging_0000_0126_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_Lumia2EImaging_0000_0126_v0_0_s_ifspec;

#ifndef ____FIAsyncOperationCompletedHandler_1_Windows__CMedia__CMediaProperties__CVideoEncodingProperties_INTERFACE_DEFINED__
#define ____FIAsyncOperationCompletedHandler_1_Windows__CMedia__CMediaProperties__CVideoEncodingProperties_INTERFACE_DEFINED__

/* interface __FIAsyncOperationCompletedHandler_1_Windows__CMedia__CMediaProperties__CVideoEncodingProperties */
/* [unique][uuid][object] */ 



/* interface __FIAsyncOperationCompletedHandler_1_Windows__CMedia__CMediaProperties__CVideoEncodingProperties */
/* [unique][uuid][object] */ 


EXTERN_C const IID IID___FIAsyncOperationCompletedHandler_1_Windows__CMedia__CMediaProperties__CVideoEncodingProperties;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("878c77a6-4733-5120-af0a-0f7cbe9f983a")
    __FIAsyncOperationCompletedHandler_1_Windows__CMedia__CMediaProperties__CVideoEncodingProperties : public IUnknown
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE Invoke( 
            /* [in] */ __RPC__in_opt __FIAsyncOperation_1_Windows__CMedia__CMediaProperties__CVideoEncodingProperties *asyncInfo,
            /* [in] */ AsyncStatus status) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct __FIAsyncOperationCompletedHandler_1_Windows__CMedia__CMediaProperties__CVideoEncodingPropertiesVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            __RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CMedia__CMediaProperties__CVideoEncodingProperties * This,
            /* [in] */ __RPC__in REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            __RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CMedia__CMediaProperties__CVideoEncodingProperties * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            __RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CMedia__CMediaProperties__CVideoEncodingProperties * This);
        
        HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            __RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CMedia__CMediaProperties__CVideoEncodingProperties * This,
            /* [in] */ __RPC__in_opt __FIAsyncOperation_1_Windows__CMedia__CMediaProperties__CVideoEncodingProperties *asyncInfo,
            /* [in] */ AsyncStatus status);
        
        END_INTERFACE
    } __FIAsyncOperationCompletedHandler_1_Windows__CMedia__CMediaProperties__CVideoEncodingPropertiesVtbl;

    interface __FIAsyncOperationCompletedHandler_1_Windows__CMedia__CMediaProperties__CVideoEncodingProperties
    {
        CONST_VTBL struct __FIAsyncOperationCompletedHandler_1_Windows__CMedia__CMediaProperties__CVideoEncodingPropertiesVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define __FIAsyncOperationCompletedHandler_1_Windows__CMedia__CMediaProperties__CVideoEncodingProperties_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __FIAsyncOperationCompletedHandler_1_Windows__CMedia__CMediaProperties__CVideoEncodingProperties_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __FIAsyncOperationCompletedHandler_1_Windows__CMedia__CMediaProperties__CVideoEncodingProperties_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __FIAsyncOperationCompletedHandler_1_Windows__CMedia__CMediaProperties__CVideoEncodingProperties_Invoke(This,asyncInfo,status)	\
    ( (This)->lpVtbl -> Invoke(This,asyncInfo,status) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* ____FIAsyncOperationCompletedHandler_1_Windows__CMedia__CMediaProperties__CVideoEncodingProperties_INTERFACE_DEFINED__ */


/* interface __MIDL_itf_Lumia2EImaging_0000_0127 */
/* [local] */ 

#endif /* pinterface */
#endif /* DEF___FIAsyncOperationCompletedHandler_1_Windows__CMedia__CMediaProperties__CVideoEncodingProperties */


/* interface __MIDL_itf_Lumia2EImaging_0000_0127 */
/* [local] */ 



extern RPC_IF_HANDLE __MIDL_itf_Lumia2EImaging_0000_0127_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_Lumia2EImaging_0000_0127_v0_0_s_ifspec;

/* interface __MIDL_itf_Lumia2EImaging_0000_2006 */




/* interface __MIDL_itf_Lumia2EImaging_0000_2006 */




extern RPC_IF_HANDLE __MIDL_itf_Lumia2EImaging_0000_2006_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_Lumia2EImaging_0000_2006_v0_0_s_ifspec;

/* interface __MIDL_itf_Lumia2EImaging_0000_0128 */
/* [local] */ 

#ifndef DEF___FIAsyncOperation_1_Windows__CMedia__CMediaProperties__CVideoEncodingProperties
#define DEF___FIAsyncOperation_1_Windows__CMedia__CMediaProperties__CVideoEncodingProperties
#if !defined(__cplusplus) || defined(RO_NO_TEMPLATE_NAME)


/* interface __MIDL_itf_Lumia2EImaging_0000_0128 */
/* [local] */ 



extern RPC_IF_HANDLE __MIDL_itf_Lumia2EImaging_0000_0128_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_Lumia2EImaging_0000_0128_v0_0_s_ifspec;

#ifndef ____FIAsyncOperation_1_Windows__CMedia__CMediaProperties__CVideoEncodingProperties_INTERFACE_DEFINED__
#define ____FIAsyncOperation_1_Windows__CMedia__CMediaProperties__CVideoEncodingProperties_INTERFACE_DEFINED__

/* interface __FIAsyncOperation_1_Windows__CMedia__CMediaProperties__CVideoEncodingProperties */
/* [unique][uuid][object] */ 



/* interface __FIAsyncOperation_1_Windows__CMedia__CMediaProperties__CVideoEncodingProperties */
/* [unique][uuid][object] */ 


EXTERN_C const IID IID___FIAsyncOperation_1_Windows__CMedia__CMediaProperties__CVideoEncodingProperties;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("e09a1117-e2cc-5452-a6d1-fb392fecf049")
    __FIAsyncOperation_1_Windows__CMedia__CMediaProperties__CVideoEncodingProperties : public IInspectable
    {
    public:
        virtual /* [propput] */ HRESULT STDMETHODCALLTYPE put_Completed( 
            /* [in] */ __RPC__in_opt __FIAsyncOperationCompletedHandler_1_Windows__CMedia__CMediaProperties__CVideoEncodingProperties *handler) = 0;
        
        virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_Completed( 
            /* [retval][out] */ __RPC__deref_out_opt __FIAsyncOperationCompletedHandler_1_Windows__CMedia__CMediaProperties__CVideoEncodingProperties **handler) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetResults( 
            /* [retval][out] */ __RPC__deref_out_opt ABI::Windows::Media::MediaProperties::IVideoEncodingProperties **results) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct __FIAsyncOperation_1_Windows__CMedia__CMediaProperties__CVideoEncodingPropertiesVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            __RPC__in __FIAsyncOperation_1_Windows__CMedia__CMediaProperties__CVideoEncodingProperties * This,
            /* [in] */ __RPC__in REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            __RPC__in __FIAsyncOperation_1_Windows__CMedia__CMediaProperties__CVideoEncodingProperties * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            __RPC__in __FIAsyncOperation_1_Windows__CMedia__CMediaProperties__CVideoEncodingProperties * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetIids )( 
            __RPC__in __FIAsyncOperation_1_Windows__CMedia__CMediaProperties__CVideoEncodingProperties * This,
            /* [out] */ __RPC__out ULONG *iidCount,
            /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
        
        HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )( 
            __RPC__in __FIAsyncOperation_1_Windows__CMedia__CMediaProperties__CVideoEncodingProperties * This,
            /* [out] */ __RPC__deref_out_opt HSTRING *className);
        
        HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )( 
            __RPC__in __FIAsyncOperation_1_Windows__CMedia__CMediaProperties__CVideoEncodingProperties * This,
            /* [out] */ __RPC__out TrustLevel *trustLevel);
        
        /* [propput] */ HRESULT ( STDMETHODCALLTYPE *put_Completed )( 
            __RPC__in __FIAsyncOperation_1_Windows__CMedia__CMediaProperties__CVideoEncodingProperties * This,
            /* [in] */ __RPC__in_opt __FIAsyncOperationCompletedHandler_1_Windows__CMedia__CMediaProperties__CVideoEncodingProperties *handler);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_Completed )( 
            __RPC__in __FIAsyncOperation_1_Windows__CMedia__CMediaProperties__CVideoEncodingProperties * This,
            /* [retval][out] */ __RPC__deref_out_opt __FIAsyncOperationCompletedHandler_1_Windows__CMedia__CMediaProperties__CVideoEncodingProperties **handler);
        
        HRESULT ( STDMETHODCALLTYPE *GetResults )( 
            __RPC__in __FIAsyncOperation_1_Windows__CMedia__CMediaProperties__CVideoEncodingProperties * This,
            /* [retval][out] */ __RPC__deref_out_opt __x_ABI_CWindows_CMedia_CMediaProperties_CIVideoEncodingProperties **results);
        
        END_INTERFACE
    } __FIAsyncOperation_1_Windows__CMedia__CMediaProperties__CVideoEncodingPropertiesVtbl;

    interface __FIAsyncOperation_1_Windows__CMedia__CMediaProperties__CVideoEncodingProperties
    {
        CONST_VTBL struct __FIAsyncOperation_1_Windows__CMedia__CMediaProperties__CVideoEncodingPropertiesVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define __FIAsyncOperation_1_Windows__CMedia__CMediaProperties__CVideoEncodingProperties_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __FIAsyncOperation_1_Windows__CMedia__CMediaProperties__CVideoEncodingProperties_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __FIAsyncOperation_1_Windows__CMedia__CMediaProperties__CVideoEncodingProperties_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __FIAsyncOperation_1_Windows__CMedia__CMediaProperties__CVideoEncodingProperties_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 

#define __FIAsyncOperation_1_Windows__CMedia__CMediaProperties__CVideoEncodingProperties_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 

#define __FIAsyncOperation_1_Windows__CMedia__CMediaProperties__CVideoEncodingProperties_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 


#define __FIAsyncOperation_1_Windows__CMedia__CMediaProperties__CVideoEncodingProperties_put_Completed(This,handler)	\
    ( (This)->lpVtbl -> put_Completed(This,handler) ) 

#define __FIAsyncOperation_1_Windows__CMedia__CMediaProperties__CVideoEncodingProperties_get_Completed(This,handler)	\
    ( (This)->lpVtbl -> get_Completed(This,handler) ) 

#define __FIAsyncOperation_1_Windows__CMedia__CMediaProperties__CVideoEncodingProperties_GetResults(This,results)	\
    ( (This)->lpVtbl -> GetResults(This,results) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* ____FIAsyncOperation_1_Windows__CMedia__CMediaProperties__CVideoEncodingProperties_INTERFACE_DEFINED__ */


/* interface __MIDL_itf_Lumia2EImaging_0000_0129 */
/* [local] */ 

#endif /* pinterface */
#endif /* DEF___FIAsyncOperation_1_Windows__CMedia__CMediaProperties__CVideoEncodingProperties */


/* interface __MIDL_itf_Lumia2EImaging_0000_0129 */
/* [local] */ 



extern RPC_IF_HANDLE __MIDL_itf_Lumia2EImaging_0000_0129_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_Lumia2EImaging_0000_0129_v0_0_s_ifspec;

/* interface __MIDL_itf_Lumia2EImaging_0000_2007 */




/* interface __MIDL_itf_Lumia2EImaging_0000_2007 */




extern RPC_IF_HANDLE __MIDL_itf_Lumia2EImaging_0000_2007_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_Lumia2EImaging_0000_2007_v0_0_s_ifspec;

/* interface __MIDL_itf_Lumia2EImaging_0000_0130 */
/* [local] */ 

#ifndef DEF___FIIterator_1_Windows__CMedia__CMediaProperties__CVideoEncodingProperties
#define DEF___FIIterator_1_Windows__CMedia__CMediaProperties__CVideoEncodingProperties
#if !defined(__cplusplus) || defined(RO_NO_TEMPLATE_NAME)


/* interface __MIDL_itf_Lumia2EImaging_0000_0130 */
/* [local] */ 



extern RPC_IF_HANDLE __MIDL_itf_Lumia2EImaging_0000_0130_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_Lumia2EImaging_0000_0130_v0_0_s_ifspec;

#ifndef ____FIIterator_1_Windows__CMedia__CMediaProperties__CVideoEncodingProperties_INTERFACE_DEFINED__
#define ____FIIterator_1_Windows__CMedia__CMediaProperties__CVideoEncodingProperties_INTERFACE_DEFINED__

/* interface __FIIterator_1_Windows__CMedia__CMediaProperties__CVideoEncodingProperties */
/* [unique][uuid][object] */ 



/* interface __FIIterator_1_Windows__CMedia__CMediaProperties__CVideoEncodingProperties */
/* [unique][uuid][object] */ 


EXTERN_C const IID IID___FIIterator_1_Windows__CMedia__CMediaProperties__CVideoEncodingProperties;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("094166ef-ae5f-5315-a3bf-fe54e8c35fcd")
    __FIIterator_1_Windows__CMedia__CMediaProperties__CVideoEncodingProperties : public IInspectable
    {
    public:
        virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_Current( 
            /* [retval][out] */ __RPC__deref_out_opt ABI::Windows::Media::MediaProperties::IVideoEncodingProperties **current) = 0;
        
        virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_HasCurrent( 
            /* [retval][out] */ __RPC__out boolean *hasCurrent) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE MoveNext( 
            /* [retval][out] */ __RPC__out boolean *hasCurrent) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetMany( 
            /* [in] */ unsigned int capacity,
            /* [size_is][length_is][out] */ __RPC__out_ecount_part(capacity, *actual) ABI::Windows::Media::MediaProperties::IVideoEncodingProperties **items,
            /* [retval][out] */ __RPC__out unsigned int *actual) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct __FIIterator_1_Windows__CMedia__CMediaProperties__CVideoEncodingPropertiesVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            __RPC__in __FIIterator_1_Windows__CMedia__CMediaProperties__CVideoEncodingProperties * This,
            /* [in] */ __RPC__in REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            __RPC__in __FIIterator_1_Windows__CMedia__CMediaProperties__CVideoEncodingProperties * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            __RPC__in __FIIterator_1_Windows__CMedia__CMediaProperties__CVideoEncodingProperties * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetIids )( 
            __RPC__in __FIIterator_1_Windows__CMedia__CMediaProperties__CVideoEncodingProperties * This,
            /* [out] */ __RPC__out ULONG *iidCount,
            /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
        
        HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )( 
            __RPC__in __FIIterator_1_Windows__CMedia__CMediaProperties__CVideoEncodingProperties * This,
            /* [out] */ __RPC__deref_out_opt HSTRING *className);
        
        HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )( 
            __RPC__in __FIIterator_1_Windows__CMedia__CMediaProperties__CVideoEncodingProperties * This,
            /* [out] */ __RPC__out TrustLevel *trustLevel);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_Current )( 
            __RPC__in __FIIterator_1_Windows__CMedia__CMediaProperties__CVideoEncodingProperties * This,
            /* [retval][out] */ __RPC__deref_out_opt __x_ABI_CWindows_CMedia_CMediaProperties_CIVideoEncodingProperties **current);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_HasCurrent )( 
            __RPC__in __FIIterator_1_Windows__CMedia__CMediaProperties__CVideoEncodingProperties * This,
            /* [retval][out] */ __RPC__out boolean *hasCurrent);
        
        HRESULT ( STDMETHODCALLTYPE *MoveNext )( 
            __RPC__in __FIIterator_1_Windows__CMedia__CMediaProperties__CVideoEncodingProperties * This,
            /* [retval][out] */ __RPC__out boolean *hasCurrent);
        
        HRESULT ( STDMETHODCALLTYPE *GetMany )( 
            __RPC__in __FIIterator_1_Windows__CMedia__CMediaProperties__CVideoEncodingProperties * This,
            /* [in] */ unsigned int capacity,
            /* [size_is][length_is][out] */ __RPC__out_ecount_part(capacity, *actual) __x_ABI_CWindows_CMedia_CMediaProperties_CIVideoEncodingProperties **items,
            /* [retval][out] */ __RPC__out unsigned int *actual);
        
        END_INTERFACE
    } __FIIterator_1_Windows__CMedia__CMediaProperties__CVideoEncodingPropertiesVtbl;

    interface __FIIterator_1_Windows__CMedia__CMediaProperties__CVideoEncodingProperties
    {
        CONST_VTBL struct __FIIterator_1_Windows__CMedia__CMediaProperties__CVideoEncodingPropertiesVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define __FIIterator_1_Windows__CMedia__CMediaProperties__CVideoEncodingProperties_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __FIIterator_1_Windows__CMedia__CMediaProperties__CVideoEncodingProperties_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __FIIterator_1_Windows__CMedia__CMediaProperties__CVideoEncodingProperties_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __FIIterator_1_Windows__CMedia__CMediaProperties__CVideoEncodingProperties_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 

#define __FIIterator_1_Windows__CMedia__CMediaProperties__CVideoEncodingProperties_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 

#define __FIIterator_1_Windows__CMedia__CMediaProperties__CVideoEncodingProperties_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 


#define __FIIterator_1_Windows__CMedia__CMediaProperties__CVideoEncodingProperties_get_Current(This,current)	\
    ( (This)->lpVtbl -> get_Current(This,current) ) 

#define __FIIterator_1_Windows__CMedia__CMediaProperties__CVideoEncodingProperties_get_HasCurrent(This,hasCurrent)	\
    ( (This)->lpVtbl -> get_HasCurrent(This,hasCurrent) ) 

#define __FIIterator_1_Windows__CMedia__CMediaProperties__CVideoEncodingProperties_MoveNext(This,hasCurrent)	\
    ( (This)->lpVtbl -> MoveNext(This,hasCurrent) ) 

#define __FIIterator_1_Windows__CMedia__CMediaProperties__CVideoEncodingProperties_GetMany(This,capacity,items,actual)	\
    ( (This)->lpVtbl -> GetMany(This,capacity,items,actual) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* ____FIIterator_1_Windows__CMedia__CMediaProperties__CVideoEncodingProperties_INTERFACE_DEFINED__ */


/* interface __MIDL_itf_Lumia2EImaging_0000_0131 */
/* [local] */ 

#endif /* pinterface */
#endif /* DEF___FIIterator_1_Windows__CMedia__CMediaProperties__CVideoEncodingProperties */


/* interface __MIDL_itf_Lumia2EImaging_0000_0131 */
/* [local] */ 



extern RPC_IF_HANDLE __MIDL_itf_Lumia2EImaging_0000_0131_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_Lumia2EImaging_0000_0131_v0_0_s_ifspec;

/* interface __MIDL_itf_Lumia2EImaging_0000_2008 */




/* interface __MIDL_itf_Lumia2EImaging_0000_2008 */




extern RPC_IF_HANDLE __MIDL_itf_Lumia2EImaging_0000_2008_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_Lumia2EImaging_0000_2008_v0_0_s_ifspec;

/* interface __MIDL_itf_Lumia2EImaging_0000_0132 */
/* [local] */ 

#ifndef DEF___FIIterable_1_Windows__CMedia__CMediaProperties__CVideoEncodingProperties
#define DEF___FIIterable_1_Windows__CMedia__CMediaProperties__CVideoEncodingProperties
#if !defined(__cplusplus) || defined(RO_NO_TEMPLATE_NAME)


/* interface __MIDL_itf_Lumia2EImaging_0000_0132 */
/* [local] */ 



extern RPC_IF_HANDLE __MIDL_itf_Lumia2EImaging_0000_0132_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_Lumia2EImaging_0000_0132_v0_0_s_ifspec;

#ifndef ____FIIterable_1_Windows__CMedia__CMediaProperties__CVideoEncodingProperties_INTERFACE_DEFINED__
#define ____FIIterable_1_Windows__CMedia__CMediaProperties__CVideoEncodingProperties_INTERFACE_DEFINED__

/* interface __FIIterable_1_Windows__CMedia__CMediaProperties__CVideoEncodingProperties */
/* [unique][uuid][object] */ 



/* interface __FIIterable_1_Windows__CMedia__CMediaProperties__CVideoEncodingProperties */
/* [unique][uuid][object] */ 


EXTERN_C const IID IID___FIIterable_1_Windows__CMedia__CMediaProperties__CVideoEncodingProperties;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("73c7317c-8682-5f81-84a2-30c425fa2d24")
    __FIIterable_1_Windows__CMedia__CMediaProperties__CVideoEncodingProperties : public IInspectable
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE First( 
            /* [retval][out] */ __RPC__deref_out_opt __FIIterator_1_Windows__CMedia__CMediaProperties__CVideoEncodingProperties **first) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct __FIIterable_1_Windows__CMedia__CMediaProperties__CVideoEncodingPropertiesVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            __RPC__in __FIIterable_1_Windows__CMedia__CMediaProperties__CVideoEncodingProperties * This,
            /* [in] */ __RPC__in REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            __RPC__in __FIIterable_1_Windows__CMedia__CMediaProperties__CVideoEncodingProperties * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            __RPC__in __FIIterable_1_Windows__CMedia__CMediaProperties__CVideoEncodingProperties * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetIids )( 
            __RPC__in __FIIterable_1_Windows__CMedia__CMediaProperties__CVideoEncodingProperties * This,
            /* [out] */ __RPC__out ULONG *iidCount,
            /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
        
        HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )( 
            __RPC__in __FIIterable_1_Windows__CMedia__CMediaProperties__CVideoEncodingProperties * This,
            /* [out] */ __RPC__deref_out_opt HSTRING *className);
        
        HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )( 
            __RPC__in __FIIterable_1_Windows__CMedia__CMediaProperties__CVideoEncodingProperties * This,
            /* [out] */ __RPC__out TrustLevel *trustLevel);
        
        HRESULT ( STDMETHODCALLTYPE *First )( 
            __RPC__in __FIIterable_1_Windows__CMedia__CMediaProperties__CVideoEncodingProperties * This,
            /* [retval][out] */ __RPC__deref_out_opt __FIIterator_1_Windows__CMedia__CMediaProperties__CVideoEncodingProperties **first);
        
        END_INTERFACE
    } __FIIterable_1_Windows__CMedia__CMediaProperties__CVideoEncodingPropertiesVtbl;

    interface __FIIterable_1_Windows__CMedia__CMediaProperties__CVideoEncodingProperties
    {
        CONST_VTBL struct __FIIterable_1_Windows__CMedia__CMediaProperties__CVideoEncodingPropertiesVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define __FIIterable_1_Windows__CMedia__CMediaProperties__CVideoEncodingProperties_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __FIIterable_1_Windows__CMedia__CMediaProperties__CVideoEncodingProperties_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __FIIterable_1_Windows__CMedia__CMediaProperties__CVideoEncodingProperties_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __FIIterable_1_Windows__CMedia__CMediaProperties__CVideoEncodingProperties_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 

#define __FIIterable_1_Windows__CMedia__CMediaProperties__CVideoEncodingProperties_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 

#define __FIIterable_1_Windows__CMedia__CMediaProperties__CVideoEncodingProperties_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 


#define __FIIterable_1_Windows__CMedia__CMediaProperties__CVideoEncodingProperties_First(This,first)	\
    ( (This)->lpVtbl -> First(This,first) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* ____FIIterable_1_Windows__CMedia__CMediaProperties__CVideoEncodingProperties_INTERFACE_DEFINED__ */


/* interface __MIDL_itf_Lumia2EImaging_0000_0133 */
/* [local] */ 

#endif /* pinterface */
#endif /* DEF___FIIterable_1_Windows__CMedia__CMediaProperties__CVideoEncodingProperties */
#if !defined(____x_ABI_CLumia_CImaging_CICameraPreviewImageSource_INTERFACE_DEFINED__)
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Lumia_Imaging_ICameraPreviewImageSource[] = L"Lumia.Imaging.ICameraPreviewImageSource";
#endif /* !defined(____x_ABI_CLumia_CImaging_CICameraPreviewImageSource_INTERFACE_DEFINED__) */


/* interface __MIDL_itf_Lumia2EImaging_0000_0133 */
/* [local] */ 



extern RPC_IF_HANDLE __MIDL_itf_Lumia2EImaging_0000_0133_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_Lumia2EImaging_0000_0133_v0_0_s_ifspec;

#ifndef ____x_ABI_CLumia_CImaging_CICameraPreviewImageSource_INTERFACE_DEFINED__
#define ____x_ABI_CLumia_CImaging_CICameraPreviewImageSource_INTERFACE_DEFINED__

/* interface __x_ABI_CLumia_CImaging_CICameraPreviewImageSource */
/* [uuid][object] */ 



/* interface ABI::Lumia::Imaging::ICameraPreviewImageSource */
/* [uuid][object] */ 


EXTERN_C const IID IID___x_ABI_CLumia_CImaging_CICameraPreviewImageSource;

#if defined(__cplusplus) && !defined(CINTERFACE)
    } /* end extern "C" */
    namespace ABI {
        namespace Lumia {
            namespace Imaging {
                
                MIDL_INTERFACE("EE7157B4-1C98-34BD-8B96-6CE7CA470B28")
                ICameraPreviewImageSource : public IInspectable
                {
                public:
                    virtual HRESULT STDMETHODCALLTYPE add_PreviewFrameAvailable( 
                        /* [in] */ __RPC__in_opt ABI::Lumia::Imaging::IPreviewFrameAvailableDelegate *__param0,
                        /* [out][retval] */ __RPC__out EventRegistrationToken *__returnValue) = 0;
                    
                    virtual HRESULT STDMETHODCALLTYPE remove_PreviewFrameAvailable( 
                        /* [in] */ EventRegistrationToken __param0) = 0;
                    
                    virtual HRESULT STDMETHODCALLTYPE InitializeAsync( 
                        /* [in] */ __RPC__in HSTRING preferedDeviceId,
                        /* [out][retval] */ __RPC__deref_out_opt ABI::Windows::Foundation::IAsyncAction **__returnValue) = 0;
                    
                    virtual HRESULT STDMETHODCALLTYPE StartPreviewAsync2( 
                        /* [out][retval] */ __RPC__deref_out_opt __FIAsyncOperation_1_Windows__CMedia__CMediaProperties__CVideoEncodingProperties **__returnValue) = 0;
                    
                    virtual HRESULT STDMETHODCALLTYPE StartPreviewAsync1( 
                        /* [in] */ __RPC__in_opt ABI::Windows::Media::MediaProperties::IVideoEncodingProperties *videoEncodingProperties,
                        /* [out][retval] */ __RPC__deref_out_opt __FIAsyncOperation_1_Windows__CMedia__CMediaProperties__CVideoEncodingProperties **__returnValue) = 0;
                    
                    virtual HRESULT STDMETHODCALLTYPE StopPreviewAsync( 
                        /* [out][retval] */ __RPC__deref_out_opt ABI::Windows::Foundation::IAsyncAction **__returnValue) = 0;
                    
                    virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_IsPreviewing( 
                        /* [out][retval] */ __RPC__out boolean *__returnValue) = 0;
                    
                    virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_VideoDeviceController( 
                        /* [out][retval] */ __RPC__deref_out_opt ABI::Windows::Media::Devices::IMediaDeviceController **__returnValue) = 0;
                    
                    virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_AvailablePreviewVideoEncodingProperties( 
                        /* [out][retval] */ __RPC__deref_out_opt __FIIterable_1_Windows__CMedia__CMediaProperties__CVideoEncodingProperties **__returnValue) = 0;
                    
                };

                extern const __declspec(selectany) IID & IID_ICameraPreviewImageSource = __uuidof(ICameraPreviewImageSource);

                
            }  /* end namespace */
        }  /* end namespace */
    }  /* end namespace */
    extern "C" { 
    
#else 	/* C style interface */

    typedef struct __x_ABI_CLumia_CImaging_CICameraPreviewImageSourceVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            __RPC__in __x_ABI_CLumia_CImaging_CICameraPreviewImageSource * This,
            /* [in] */ __RPC__in REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            __RPC__in __x_ABI_CLumia_CImaging_CICameraPreviewImageSource * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            __RPC__in __x_ABI_CLumia_CImaging_CICameraPreviewImageSource * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetIids )( 
            __RPC__in __x_ABI_CLumia_CImaging_CICameraPreviewImageSource * This,
            /* [out] */ __RPC__out ULONG *iidCount,
            /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
        
        HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )( 
            __RPC__in __x_ABI_CLumia_CImaging_CICameraPreviewImageSource * This,
            /* [out] */ __RPC__deref_out_opt HSTRING *className);
        
        HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )( 
            __RPC__in __x_ABI_CLumia_CImaging_CICameraPreviewImageSource * This,
            /* [out] */ __RPC__out TrustLevel *trustLevel);
        
        HRESULT ( STDMETHODCALLTYPE *add_PreviewFrameAvailable )( 
            __RPC__in __x_ABI_CLumia_CImaging_CICameraPreviewImageSource * This,
            /* [in] */ __RPC__in_opt __x_ABI_CLumia_CImaging_CIPreviewFrameAvailableDelegate *__param0,
            /* [out][retval] */ __RPC__out EventRegistrationToken *__returnValue);
        
        HRESULT ( STDMETHODCALLTYPE *remove_PreviewFrameAvailable )( 
            __RPC__in __x_ABI_CLumia_CImaging_CICameraPreviewImageSource * This,
            /* [in] */ EventRegistrationToken __param0);
        
        HRESULT ( STDMETHODCALLTYPE *InitializeAsync )( 
            __RPC__in __x_ABI_CLumia_CImaging_CICameraPreviewImageSource * This,
            /* [in] */ __RPC__in HSTRING preferedDeviceId,
            /* [out][retval] */ __RPC__deref_out_opt __x_ABI_CWindows_CFoundation_CIAsyncAction **__returnValue);
        
        HRESULT ( STDMETHODCALLTYPE *StartPreviewAsync2 )( 
            __RPC__in __x_ABI_CLumia_CImaging_CICameraPreviewImageSource * This,
            /* [out][retval] */ __RPC__deref_out_opt __FIAsyncOperation_1_Windows__CMedia__CMediaProperties__CVideoEncodingProperties **__returnValue);
        
        HRESULT ( STDMETHODCALLTYPE *StartPreviewAsync1 )( 
            __RPC__in __x_ABI_CLumia_CImaging_CICameraPreviewImageSource * This,
            /* [in] */ __RPC__in_opt __x_ABI_CWindows_CMedia_CMediaProperties_CIVideoEncodingProperties *videoEncodingProperties,
            /* [out][retval] */ __RPC__deref_out_opt __FIAsyncOperation_1_Windows__CMedia__CMediaProperties__CVideoEncodingProperties **__returnValue);
        
        HRESULT ( STDMETHODCALLTYPE *StopPreviewAsync )( 
            __RPC__in __x_ABI_CLumia_CImaging_CICameraPreviewImageSource * This,
            /* [out][retval] */ __RPC__deref_out_opt __x_ABI_CWindows_CFoundation_CIAsyncAction **__returnValue);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_IsPreviewing )( 
            __RPC__in __x_ABI_CLumia_CImaging_CICameraPreviewImageSource * This,
            /* [out][retval] */ __RPC__out boolean *__returnValue);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_VideoDeviceController )( 
            __RPC__in __x_ABI_CLumia_CImaging_CICameraPreviewImageSource * This,
            /* [out][retval] */ __RPC__deref_out_opt __x_ABI_CWindows_CMedia_CDevices_CIMediaDeviceController **__returnValue);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_AvailablePreviewVideoEncodingProperties )( 
            __RPC__in __x_ABI_CLumia_CImaging_CICameraPreviewImageSource * This,
            /* [out][retval] */ __RPC__deref_out_opt __FIIterable_1_Windows__CMedia__CMediaProperties__CVideoEncodingProperties **__returnValue);
        
        END_INTERFACE
    } __x_ABI_CLumia_CImaging_CICameraPreviewImageSourceVtbl;

    interface __x_ABI_CLumia_CImaging_CICameraPreviewImageSource
    {
        CONST_VTBL struct __x_ABI_CLumia_CImaging_CICameraPreviewImageSourceVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define __x_ABI_CLumia_CImaging_CICameraPreviewImageSource_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __x_ABI_CLumia_CImaging_CICameraPreviewImageSource_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __x_ABI_CLumia_CImaging_CICameraPreviewImageSource_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __x_ABI_CLumia_CImaging_CICameraPreviewImageSource_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 

#define __x_ABI_CLumia_CImaging_CICameraPreviewImageSource_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 

#define __x_ABI_CLumia_CImaging_CICameraPreviewImageSource_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 


#define __x_ABI_CLumia_CImaging_CICameraPreviewImageSource_add_PreviewFrameAvailable(This,__param0,__returnValue)	\
    ( (This)->lpVtbl -> add_PreviewFrameAvailable(This,__param0,__returnValue) ) 

#define __x_ABI_CLumia_CImaging_CICameraPreviewImageSource_remove_PreviewFrameAvailable(This,__param0)	\
    ( (This)->lpVtbl -> remove_PreviewFrameAvailable(This,__param0) ) 

#define __x_ABI_CLumia_CImaging_CICameraPreviewImageSource_InitializeAsync(This,preferedDeviceId,__returnValue)	\
    ( (This)->lpVtbl -> InitializeAsync(This,preferedDeviceId,__returnValue) ) 

#define __x_ABI_CLumia_CImaging_CICameraPreviewImageSource_StartPreviewAsync2(This,__returnValue)	\
    ( (This)->lpVtbl -> StartPreviewAsync2(This,__returnValue) ) 

#define __x_ABI_CLumia_CImaging_CICameraPreviewImageSource_StartPreviewAsync1(This,videoEncodingProperties,__returnValue)	\
    ( (This)->lpVtbl -> StartPreviewAsync1(This,videoEncodingProperties,__returnValue) ) 

#define __x_ABI_CLumia_CImaging_CICameraPreviewImageSource_StopPreviewAsync(This,__returnValue)	\
    ( (This)->lpVtbl -> StopPreviewAsync(This,__returnValue) ) 

#define __x_ABI_CLumia_CImaging_CICameraPreviewImageSource_get_IsPreviewing(This,__returnValue)	\
    ( (This)->lpVtbl -> get_IsPreviewing(This,__returnValue) ) 

#define __x_ABI_CLumia_CImaging_CICameraPreviewImageSource_get_VideoDeviceController(This,__returnValue)	\
    ( (This)->lpVtbl -> get_VideoDeviceController(This,__returnValue) ) 

#define __x_ABI_CLumia_CImaging_CICameraPreviewImageSource_get_AvailablePreviewVideoEncodingProperties(This,__returnValue)	\
    ( (This)->lpVtbl -> get_AvailablePreviewVideoEncodingProperties(This,__returnValue) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* ____x_ABI_CLumia_CImaging_CICameraPreviewImageSource_INTERFACE_DEFINED__ */


/* interface __MIDL_itf_Lumia2EImaging_0000_0134 */
/* [local] */ 

#if !defined(____x_ABI_CLumia_CImaging_CICameraPreviewImageSourceProtectedNonVirtuals_INTERFACE_DEFINED__)
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Lumia_Imaging_ICameraPreviewImageSourceProtectedNonVirtuals[] = L"Lumia.Imaging.ICameraPreviewImageSourceProtectedNonVirtuals";
#endif /* !defined(____x_ABI_CLumia_CImaging_CICameraPreviewImageSourceProtectedNonVirtuals_INTERFACE_DEFINED__) */


/* interface __MIDL_itf_Lumia2EImaging_0000_0134 */
/* [local] */ 



extern RPC_IF_HANDLE __MIDL_itf_Lumia2EImaging_0000_0134_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_Lumia2EImaging_0000_0134_v0_0_s_ifspec;

#ifndef ____x_ABI_CLumia_CImaging_CICameraPreviewImageSourceProtectedNonVirtuals_INTERFACE_DEFINED__
#define ____x_ABI_CLumia_CImaging_CICameraPreviewImageSourceProtectedNonVirtuals_INTERFACE_DEFINED__

/* interface __x_ABI_CLumia_CImaging_CICameraPreviewImageSourceProtectedNonVirtuals */
/* [uuid][object] */ 



/* interface ABI::Lumia::Imaging::ICameraPreviewImageSourceProtectedNonVirtuals */
/* [uuid][object] */ 


EXTERN_C const IID IID___x_ABI_CLumia_CImaging_CICameraPreviewImageSourceProtectedNonVirtuals;

#if defined(__cplusplus) && !defined(CINTERFACE)
    } /* end extern "C" */
    namespace ABI {
        namespace Lumia {
            namespace Imaging {
                
                MIDL_INTERFACE("EFD3D1FC-BDF9-3709-A634-B0E1FE4C87FD")
                ICameraPreviewImageSourceProtectedNonVirtuals : public IInspectable
                {
                public:
                    virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_MediaCaptureDevice( 
                        /* [out][retval] */ __RPC__deref_out_opt ABI::Lumia::Imaging::IMediaCapture **__returnValue) = 0;
                    
                    virtual /* [propput] */ HRESULT STDMETHODCALLTYPE put_MediaCaptureDevice( 
                        /* [in] */ __RPC__in_opt ABI::Lumia::Imaging::IMediaCapture *value) = 0;
                    
                    virtual HRESULT STDMETHODCALLTYPE CreateTestSample( 
                        /* [in] */ __RPC__in_opt ABI::Windows::Storage::Streams::IBuffer *buffer) = 0;
                    
                };

                extern const __declspec(selectany) IID & IID_ICameraPreviewImageSourceProtectedNonVirtuals = __uuidof(ICameraPreviewImageSourceProtectedNonVirtuals);

                
            }  /* end namespace */
        }  /* end namespace */
    }  /* end namespace */
    extern "C" { 
    
#else 	/* C style interface */

    typedef struct __x_ABI_CLumia_CImaging_CICameraPreviewImageSourceProtectedNonVirtualsVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            __RPC__in __x_ABI_CLumia_CImaging_CICameraPreviewImageSourceProtectedNonVirtuals * This,
            /* [in] */ __RPC__in REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            __RPC__in __x_ABI_CLumia_CImaging_CICameraPreviewImageSourceProtectedNonVirtuals * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            __RPC__in __x_ABI_CLumia_CImaging_CICameraPreviewImageSourceProtectedNonVirtuals * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetIids )( 
            __RPC__in __x_ABI_CLumia_CImaging_CICameraPreviewImageSourceProtectedNonVirtuals * This,
            /* [out] */ __RPC__out ULONG *iidCount,
            /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
        
        HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )( 
            __RPC__in __x_ABI_CLumia_CImaging_CICameraPreviewImageSourceProtectedNonVirtuals * This,
            /* [out] */ __RPC__deref_out_opt HSTRING *className);
        
        HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )( 
            __RPC__in __x_ABI_CLumia_CImaging_CICameraPreviewImageSourceProtectedNonVirtuals * This,
            /* [out] */ __RPC__out TrustLevel *trustLevel);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_MediaCaptureDevice )( 
            __RPC__in __x_ABI_CLumia_CImaging_CICameraPreviewImageSourceProtectedNonVirtuals * This,
            /* [out][retval] */ __RPC__deref_out_opt __x_ABI_CLumia_CImaging_CIMediaCapture **__returnValue);
        
        /* [propput] */ HRESULT ( STDMETHODCALLTYPE *put_MediaCaptureDevice )( 
            __RPC__in __x_ABI_CLumia_CImaging_CICameraPreviewImageSourceProtectedNonVirtuals * This,
            /* [in] */ __RPC__in_opt __x_ABI_CLumia_CImaging_CIMediaCapture *value);
        
        HRESULT ( STDMETHODCALLTYPE *CreateTestSample )( 
            __RPC__in __x_ABI_CLumia_CImaging_CICameraPreviewImageSourceProtectedNonVirtuals * This,
            /* [in] */ __RPC__in_opt __x_ABI_CWindows_CStorage_CStreams_CIBuffer *buffer);
        
        END_INTERFACE
    } __x_ABI_CLumia_CImaging_CICameraPreviewImageSourceProtectedNonVirtualsVtbl;

    interface __x_ABI_CLumia_CImaging_CICameraPreviewImageSourceProtectedNonVirtuals
    {
        CONST_VTBL struct __x_ABI_CLumia_CImaging_CICameraPreviewImageSourceProtectedNonVirtualsVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define __x_ABI_CLumia_CImaging_CICameraPreviewImageSourceProtectedNonVirtuals_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __x_ABI_CLumia_CImaging_CICameraPreviewImageSourceProtectedNonVirtuals_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __x_ABI_CLumia_CImaging_CICameraPreviewImageSourceProtectedNonVirtuals_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __x_ABI_CLumia_CImaging_CICameraPreviewImageSourceProtectedNonVirtuals_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 

#define __x_ABI_CLumia_CImaging_CICameraPreviewImageSourceProtectedNonVirtuals_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 

#define __x_ABI_CLumia_CImaging_CICameraPreviewImageSourceProtectedNonVirtuals_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 


#define __x_ABI_CLumia_CImaging_CICameraPreviewImageSourceProtectedNonVirtuals_get_MediaCaptureDevice(This,__returnValue)	\
    ( (This)->lpVtbl -> get_MediaCaptureDevice(This,__returnValue) ) 

#define __x_ABI_CLumia_CImaging_CICameraPreviewImageSourceProtectedNonVirtuals_put_MediaCaptureDevice(This,value)	\
    ( (This)->lpVtbl -> put_MediaCaptureDevice(This,value) ) 

#define __x_ABI_CLumia_CImaging_CICameraPreviewImageSourceProtectedNonVirtuals_CreateTestSample(This,buffer)	\
    ( (This)->lpVtbl -> CreateTestSample(This,buffer) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* ____x_ABI_CLumia_CImaging_CICameraPreviewImageSourceProtectedNonVirtuals_INTERFACE_DEFINED__ */


/* interface __MIDL_itf_Lumia2EImaging_0000_2009 */




/* interface __MIDL_itf_Lumia2EImaging_0000_2009 */




extern RPC_IF_HANDLE __MIDL_itf_Lumia2EImaging_0000_2009_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_Lumia2EImaging_0000_2009_v0_0_s_ifspec;

/* interface __MIDL_itf_Lumia2EImaging_0000_0136 */
/* [local] */ 

#ifndef DEF___FIAsyncOperationCompletedHandler_1_Windows__CUI__CXaml__CMedia__CImaging__CWriteableBitmap
#define DEF___FIAsyncOperationCompletedHandler_1_Windows__CUI__CXaml__CMedia__CImaging__CWriteableBitmap
#if !defined(__cplusplus) || defined(RO_NO_TEMPLATE_NAME)



/* interface __MIDL_itf_Lumia2EImaging_0000_0136 */
/* [local] */ 




extern RPC_IF_HANDLE __MIDL_itf_Lumia2EImaging_0000_0136_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_Lumia2EImaging_0000_0136_v0_0_s_ifspec;

#ifndef ____FIAsyncOperationCompletedHandler_1_Windows__CUI__CXaml__CMedia__CImaging__CWriteableBitmap_INTERFACE_DEFINED__
#define ____FIAsyncOperationCompletedHandler_1_Windows__CUI__CXaml__CMedia__CImaging__CWriteableBitmap_INTERFACE_DEFINED__

/* interface __FIAsyncOperationCompletedHandler_1_Windows__CUI__CXaml__CMedia__CImaging__CWriteableBitmap */
/* [unique][uuid][object] */ 



/* interface __FIAsyncOperationCompletedHandler_1_Windows__CUI__CXaml__CMedia__CImaging__CWriteableBitmap */
/* [unique][uuid][object] */ 


EXTERN_C const IID IID___FIAsyncOperationCompletedHandler_1_Windows__CUI__CXaml__CMedia__CImaging__CWriteableBitmap;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("768bce8e-0635-554c-9bd0-533cb2da3bf7")
    __FIAsyncOperationCompletedHandler_1_Windows__CUI__CXaml__CMedia__CImaging__CWriteableBitmap : public IUnknown
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE Invoke( 
            /* [in] */ __RPC__in_opt __FIAsyncOperation_1_Windows__CUI__CXaml__CMedia__CImaging__CWriteableBitmap *asyncInfo,
            /* [in] */ AsyncStatus status) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct __FIAsyncOperationCompletedHandler_1_Windows__CUI__CXaml__CMedia__CImaging__CWriteableBitmapVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            __RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CUI__CXaml__CMedia__CImaging__CWriteableBitmap * This,
            /* [in] */ __RPC__in REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            __RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CUI__CXaml__CMedia__CImaging__CWriteableBitmap * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            __RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CUI__CXaml__CMedia__CImaging__CWriteableBitmap * This);
        
        HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            __RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CUI__CXaml__CMedia__CImaging__CWriteableBitmap * This,
            /* [in] */ __RPC__in_opt __FIAsyncOperation_1_Windows__CUI__CXaml__CMedia__CImaging__CWriteableBitmap *asyncInfo,
            /* [in] */ AsyncStatus status);
        
        END_INTERFACE
    } __FIAsyncOperationCompletedHandler_1_Windows__CUI__CXaml__CMedia__CImaging__CWriteableBitmapVtbl;

    interface __FIAsyncOperationCompletedHandler_1_Windows__CUI__CXaml__CMedia__CImaging__CWriteableBitmap
    {
        CONST_VTBL struct __FIAsyncOperationCompletedHandler_1_Windows__CUI__CXaml__CMedia__CImaging__CWriteableBitmapVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define __FIAsyncOperationCompletedHandler_1_Windows__CUI__CXaml__CMedia__CImaging__CWriteableBitmap_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __FIAsyncOperationCompletedHandler_1_Windows__CUI__CXaml__CMedia__CImaging__CWriteableBitmap_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __FIAsyncOperationCompletedHandler_1_Windows__CUI__CXaml__CMedia__CImaging__CWriteableBitmap_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __FIAsyncOperationCompletedHandler_1_Windows__CUI__CXaml__CMedia__CImaging__CWriteableBitmap_Invoke(This,asyncInfo,status)	\
    ( (This)->lpVtbl -> Invoke(This,asyncInfo,status) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* ____FIAsyncOperationCompletedHandler_1_Windows__CUI__CXaml__CMedia__CImaging__CWriteableBitmap_INTERFACE_DEFINED__ */


/* interface __MIDL_itf_Lumia2EImaging_0000_0137 */
/* [local] */ 

#endif /* pinterface */
#endif /* DEF___FIAsyncOperationCompletedHandler_1_Windows__CUI__CXaml__CMedia__CImaging__CWriteableBitmap */


/* interface __MIDL_itf_Lumia2EImaging_0000_0137 */
/* [local] */ 



extern RPC_IF_HANDLE __MIDL_itf_Lumia2EImaging_0000_0137_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_Lumia2EImaging_0000_0137_v0_0_s_ifspec;

/* interface __MIDL_itf_Lumia2EImaging_0000_2010 */




/* interface __MIDL_itf_Lumia2EImaging_0000_2010 */




extern RPC_IF_HANDLE __MIDL_itf_Lumia2EImaging_0000_2010_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_Lumia2EImaging_0000_2010_v0_0_s_ifspec;

/* interface __MIDL_itf_Lumia2EImaging_0000_0138 */
/* [local] */ 

#ifndef DEF___FIAsyncOperation_1_Windows__CUI__CXaml__CMedia__CImaging__CWriteableBitmap
#define DEF___FIAsyncOperation_1_Windows__CUI__CXaml__CMedia__CImaging__CWriteableBitmap
#if !defined(__cplusplus) || defined(RO_NO_TEMPLATE_NAME)


/* interface __MIDL_itf_Lumia2EImaging_0000_0138 */
/* [local] */ 



extern RPC_IF_HANDLE __MIDL_itf_Lumia2EImaging_0000_0138_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_Lumia2EImaging_0000_0138_v0_0_s_ifspec;

#ifndef ____FIAsyncOperation_1_Windows__CUI__CXaml__CMedia__CImaging__CWriteableBitmap_INTERFACE_DEFINED__
#define ____FIAsyncOperation_1_Windows__CUI__CXaml__CMedia__CImaging__CWriteableBitmap_INTERFACE_DEFINED__

/* interface __FIAsyncOperation_1_Windows__CUI__CXaml__CMedia__CImaging__CWriteableBitmap */
/* [unique][uuid][object] */ 



/* interface __FIAsyncOperation_1_Windows__CUI__CXaml__CMedia__CImaging__CWriteableBitmap */
/* [unique][uuid][object] */ 


EXTERN_C const IID IID___FIAsyncOperation_1_Windows__CUI__CXaml__CMedia__CImaging__CWriteableBitmap;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("a26b59f5-e5ce-56a4-9a17-fe38dd93744b")
    __FIAsyncOperation_1_Windows__CUI__CXaml__CMedia__CImaging__CWriteableBitmap : public IInspectable
    {
    public:
        virtual /* [propput] */ HRESULT STDMETHODCALLTYPE put_Completed( 
            /* [in] */ __RPC__in_opt __FIAsyncOperationCompletedHandler_1_Windows__CUI__CXaml__CMedia__CImaging__CWriteableBitmap *handler) = 0;
        
        virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_Completed( 
            /* [retval][out] */ __RPC__deref_out_opt __FIAsyncOperationCompletedHandler_1_Windows__CUI__CXaml__CMedia__CImaging__CWriteableBitmap **handler) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetResults( 
            /* [retval][out] */ __RPC__deref_out_opt ABI::Windows::UI::Xaml::Media::Imaging::IWriteableBitmap **results) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct __FIAsyncOperation_1_Windows__CUI__CXaml__CMedia__CImaging__CWriteableBitmapVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            __RPC__in __FIAsyncOperation_1_Windows__CUI__CXaml__CMedia__CImaging__CWriteableBitmap * This,
            /* [in] */ __RPC__in REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            __RPC__in __FIAsyncOperation_1_Windows__CUI__CXaml__CMedia__CImaging__CWriteableBitmap * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            __RPC__in __FIAsyncOperation_1_Windows__CUI__CXaml__CMedia__CImaging__CWriteableBitmap * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetIids )( 
            __RPC__in __FIAsyncOperation_1_Windows__CUI__CXaml__CMedia__CImaging__CWriteableBitmap * This,
            /* [out] */ __RPC__out ULONG *iidCount,
            /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
        
        HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )( 
            __RPC__in __FIAsyncOperation_1_Windows__CUI__CXaml__CMedia__CImaging__CWriteableBitmap * This,
            /* [out] */ __RPC__deref_out_opt HSTRING *className);
        
        HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )( 
            __RPC__in __FIAsyncOperation_1_Windows__CUI__CXaml__CMedia__CImaging__CWriteableBitmap * This,
            /* [out] */ __RPC__out TrustLevel *trustLevel);
        
        /* [propput] */ HRESULT ( STDMETHODCALLTYPE *put_Completed )( 
            __RPC__in __FIAsyncOperation_1_Windows__CUI__CXaml__CMedia__CImaging__CWriteableBitmap * This,
            /* [in] */ __RPC__in_opt __FIAsyncOperationCompletedHandler_1_Windows__CUI__CXaml__CMedia__CImaging__CWriteableBitmap *handler);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_Completed )( 
            __RPC__in __FIAsyncOperation_1_Windows__CUI__CXaml__CMedia__CImaging__CWriteableBitmap * This,
            /* [retval][out] */ __RPC__deref_out_opt __FIAsyncOperationCompletedHandler_1_Windows__CUI__CXaml__CMedia__CImaging__CWriteableBitmap **handler);
        
        HRESULT ( STDMETHODCALLTYPE *GetResults )( 
            __RPC__in __FIAsyncOperation_1_Windows__CUI__CXaml__CMedia__CImaging__CWriteableBitmap * This,
            /* [retval][out] */ __RPC__deref_out_opt __x_ABI_CWindows_CUI_CXaml_CMedia_CImaging_CIWriteableBitmap **results);
        
        END_INTERFACE
    } __FIAsyncOperation_1_Windows__CUI__CXaml__CMedia__CImaging__CWriteableBitmapVtbl;

    interface __FIAsyncOperation_1_Windows__CUI__CXaml__CMedia__CImaging__CWriteableBitmap
    {
        CONST_VTBL struct __FIAsyncOperation_1_Windows__CUI__CXaml__CMedia__CImaging__CWriteableBitmapVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define __FIAsyncOperation_1_Windows__CUI__CXaml__CMedia__CImaging__CWriteableBitmap_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __FIAsyncOperation_1_Windows__CUI__CXaml__CMedia__CImaging__CWriteableBitmap_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __FIAsyncOperation_1_Windows__CUI__CXaml__CMedia__CImaging__CWriteableBitmap_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __FIAsyncOperation_1_Windows__CUI__CXaml__CMedia__CImaging__CWriteableBitmap_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 

#define __FIAsyncOperation_1_Windows__CUI__CXaml__CMedia__CImaging__CWriteableBitmap_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 

#define __FIAsyncOperation_1_Windows__CUI__CXaml__CMedia__CImaging__CWriteableBitmap_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 


#define __FIAsyncOperation_1_Windows__CUI__CXaml__CMedia__CImaging__CWriteableBitmap_put_Completed(This,handler)	\
    ( (This)->lpVtbl -> put_Completed(This,handler) ) 

#define __FIAsyncOperation_1_Windows__CUI__CXaml__CMedia__CImaging__CWriteableBitmap_get_Completed(This,handler)	\
    ( (This)->lpVtbl -> get_Completed(This,handler) ) 

#define __FIAsyncOperation_1_Windows__CUI__CXaml__CMedia__CImaging__CWriteableBitmap_GetResults(This,results)	\
    ( (This)->lpVtbl -> GetResults(This,results) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* ____FIAsyncOperation_1_Windows__CUI__CXaml__CMedia__CImaging__CWriteableBitmap_INTERFACE_DEFINED__ */


/* interface __MIDL_itf_Lumia2EImaging_0000_0139 */
/* [local] */ 

#endif /* pinterface */
#endif /* DEF___FIAsyncOperation_1_Windows__CUI__CXaml__CMedia__CImaging__CWriteableBitmap */
#if !defined(____x_ABI_CLumia_CImaging_CIWriteableBitmapRenderer_INTERFACE_DEFINED__)
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Lumia_Imaging_IWriteableBitmapRenderer[] = L"Lumia.Imaging.IWriteableBitmapRenderer";
#endif /* !defined(____x_ABI_CLumia_CImaging_CIWriteableBitmapRenderer_INTERFACE_DEFINED__) */


/* interface __MIDL_itf_Lumia2EImaging_0000_0139 */
/* [local] */ 



extern RPC_IF_HANDLE __MIDL_itf_Lumia2EImaging_0000_0139_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_Lumia2EImaging_0000_0139_v0_0_s_ifspec;

#ifndef ____x_ABI_CLumia_CImaging_CIWriteableBitmapRenderer_INTERFACE_DEFINED__
#define ____x_ABI_CLumia_CImaging_CIWriteableBitmapRenderer_INTERFACE_DEFINED__

/* interface __x_ABI_CLumia_CImaging_CIWriteableBitmapRenderer */
/* [uuid][object] */ 



/* interface ABI::Lumia::Imaging::IWriteableBitmapRenderer */
/* [uuid][object] */ 


EXTERN_C const IID IID___x_ABI_CLumia_CImaging_CIWriteableBitmapRenderer;

#if defined(__cplusplus) && !defined(CINTERFACE)
    } /* end extern "C" */
    namespace ABI {
        namespace Lumia {
            namespace Imaging {
                
                MIDL_INTERFACE("DB5E6CC0-0CB6-3882-AE92-07C77FE06961")
                IWriteableBitmapRenderer : public IInspectable
                {
                public:
                    virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_OutputOption( 
                        /* [out][retval] */ __RPC__out ABI::Lumia::Imaging::OutputOption *__returnValue) = 0;
                    
                    virtual /* [propput] */ HRESULT STDMETHODCALLTYPE put_OutputOption( 
                        /* [in] */ ABI::Lumia::Imaging::OutputOption outputOption) = 0;
                    
                    virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_WriteableBitmap( 
                        /* [out][retval] */ __RPC__deref_out_opt ABI::Windows::UI::Xaml::Media::Imaging::IWriteableBitmap **__returnValue) = 0;
                    
                    virtual /* [propput] */ HRESULT STDMETHODCALLTYPE put_WriteableBitmap( 
                        /* [in] */ __RPC__in_opt ABI::Windows::UI::Xaml::Media::Imaging::IWriteableBitmap *writeableBitmap) = 0;
                    
                    virtual HRESULT STDMETHODCALLTYPE RenderAsync( 
                        /* [out][retval] */ __RPC__deref_out_opt __FIAsyncOperation_1_Windows__CUI__CXaml__CMedia__CImaging__CWriteableBitmap **__returnValue) = 0;
                    
                };

                extern const __declspec(selectany) IID & IID_IWriteableBitmapRenderer = __uuidof(IWriteableBitmapRenderer);

                
            }  /* end namespace */
        }  /* end namespace */
    }  /* end namespace */
    extern "C" { 
    
#else 	/* C style interface */

    typedef struct __x_ABI_CLumia_CImaging_CIWriteableBitmapRendererVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            __RPC__in __x_ABI_CLumia_CImaging_CIWriteableBitmapRenderer * This,
            /* [in] */ __RPC__in REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            __RPC__in __x_ABI_CLumia_CImaging_CIWriteableBitmapRenderer * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            __RPC__in __x_ABI_CLumia_CImaging_CIWriteableBitmapRenderer * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetIids )( 
            __RPC__in __x_ABI_CLumia_CImaging_CIWriteableBitmapRenderer * This,
            /* [out] */ __RPC__out ULONG *iidCount,
            /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
        
        HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )( 
            __RPC__in __x_ABI_CLumia_CImaging_CIWriteableBitmapRenderer * This,
            /* [out] */ __RPC__deref_out_opt HSTRING *className);
        
        HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )( 
            __RPC__in __x_ABI_CLumia_CImaging_CIWriteableBitmapRenderer * This,
            /* [out] */ __RPC__out TrustLevel *trustLevel);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_OutputOption )( 
            __RPC__in __x_ABI_CLumia_CImaging_CIWriteableBitmapRenderer * This,
            /* [out][retval] */ __RPC__out __x_ABI_CLumia_CImaging_COutputOption *__returnValue);
        
        /* [propput] */ HRESULT ( STDMETHODCALLTYPE *put_OutputOption )( 
            __RPC__in __x_ABI_CLumia_CImaging_CIWriteableBitmapRenderer * This,
            /* [in] */ __x_ABI_CLumia_CImaging_COutputOption outputOption);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_WriteableBitmap )( 
            __RPC__in __x_ABI_CLumia_CImaging_CIWriteableBitmapRenderer * This,
            /* [out][retval] */ __RPC__deref_out_opt __x_ABI_CWindows_CUI_CXaml_CMedia_CImaging_CIWriteableBitmap **__returnValue);
        
        /* [propput] */ HRESULT ( STDMETHODCALLTYPE *put_WriteableBitmap )( 
            __RPC__in __x_ABI_CLumia_CImaging_CIWriteableBitmapRenderer * This,
            /* [in] */ __RPC__in_opt __x_ABI_CWindows_CUI_CXaml_CMedia_CImaging_CIWriteableBitmap *writeableBitmap);
        
        HRESULT ( STDMETHODCALLTYPE *RenderAsync )( 
            __RPC__in __x_ABI_CLumia_CImaging_CIWriteableBitmapRenderer * This,
            /* [out][retval] */ __RPC__deref_out_opt __FIAsyncOperation_1_Windows__CUI__CXaml__CMedia__CImaging__CWriteableBitmap **__returnValue);
        
        END_INTERFACE
    } __x_ABI_CLumia_CImaging_CIWriteableBitmapRendererVtbl;

    interface __x_ABI_CLumia_CImaging_CIWriteableBitmapRenderer
    {
        CONST_VTBL struct __x_ABI_CLumia_CImaging_CIWriteableBitmapRendererVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define __x_ABI_CLumia_CImaging_CIWriteableBitmapRenderer_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __x_ABI_CLumia_CImaging_CIWriteableBitmapRenderer_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __x_ABI_CLumia_CImaging_CIWriteableBitmapRenderer_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __x_ABI_CLumia_CImaging_CIWriteableBitmapRenderer_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 

#define __x_ABI_CLumia_CImaging_CIWriteableBitmapRenderer_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 

#define __x_ABI_CLumia_CImaging_CIWriteableBitmapRenderer_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 


#define __x_ABI_CLumia_CImaging_CIWriteableBitmapRenderer_get_OutputOption(This,__returnValue)	\
    ( (This)->lpVtbl -> get_OutputOption(This,__returnValue) ) 

#define __x_ABI_CLumia_CImaging_CIWriteableBitmapRenderer_put_OutputOption(This,outputOption)	\
    ( (This)->lpVtbl -> put_OutputOption(This,outputOption) ) 

#define __x_ABI_CLumia_CImaging_CIWriteableBitmapRenderer_get_WriteableBitmap(This,__returnValue)	\
    ( (This)->lpVtbl -> get_WriteableBitmap(This,__returnValue) ) 

#define __x_ABI_CLumia_CImaging_CIWriteableBitmapRenderer_put_WriteableBitmap(This,writeableBitmap)	\
    ( (This)->lpVtbl -> put_WriteableBitmap(This,writeableBitmap) ) 

#define __x_ABI_CLumia_CImaging_CIWriteableBitmapRenderer_RenderAsync(This,__returnValue)	\
    ( (This)->lpVtbl -> RenderAsync(This,__returnValue) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* ____x_ABI_CLumia_CImaging_CIWriteableBitmapRenderer_INTERFACE_DEFINED__ */


/* interface __MIDL_itf_Lumia2EImaging_0000_0140 */
/* [local] */ 

#if !defined(____x_ABI_CLumia_CImaging_CIWriteableBitmapRendererFactory_INTERFACE_DEFINED__)
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Lumia_Imaging_IWriteableBitmapRendererFactory[] = L"Lumia.Imaging.IWriteableBitmapRendererFactory";
#endif /* !defined(____x_ABI_CLumia_CImaging_CIWriteableBitmapRendererFactory_INTERFACE_DEFINED__) */


/* interface __MIDL_itf_Lumia2EImaging_0000_0140 */
/* [local] */ 



extern RPC_IF_HANDLE __MIDL_itf_Lumia2EImaging_0000_0140_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_Lumia2EImaging_0000_0140_v0_0_s_ifspec;

#ifndef ____x_ABI_CLumia_CImaging_CIWriteableBitmapRendererFactory_INTERFACE_DEFINED__
#define ____x_ABI_CLumia_CImaging_CIWriteableBitmapRendererFactory_INTERFACE_DEFINED__

/* interface __x_ABI_CLumia_CImaging_CIWriteableBitmapRendererFactory */
/* [uuid][object] */ 



/* interface ABI::Lumia::Imaging::IWriteableBitmapRendererFactory */
/* [uuid][object] */ 


EXTERN_C const IID IID___x_ABI_CLumia_CImaging_CIWriteableBitmapRendererFactory;

#if defined(__cplusplus) && !defined(CINTERFACE)
    } /* end extern "C" */
    namespace ABI {
        namespace Lumia {
            namespace Imaging {
                
                MIDL_INTERFACE("76F2C710-AF45-3754-96BE-35131E083785")
                IWriteableBitmapRendererFactory : public IInspectable
                {
                public:
                    virtual HRESULT STDMETHODCALLTYPE Create( 
                        /* [in] */ __RPC__in_opt ABI::Lumia::Imaging::IImageProvider *imageSource,
                        /* [out][retval] */ __RPC__deref_out_opt ABI::Lumia::Imaging::IWriteableBitmapRenderer **__returnValue) = 0;
                    
                    virtual HRESULT STDMETHODCALLTYPE CreateWithWriteableBitmap( 
                        /* [in] */ __RPC__in_opt ABI::Lumia::Imaging::IImageProvider *imageSource,
                        /* [in] */ __RPC__in_opt ABI::Windows::UI::Xaml::Media::Imaging::IWriteableBitmap *writeableBitmap,
                        /* [out][retval] */ __RPC__deref_out_opt ABI::Lumia::Imaging::IWriteableBitmapRenderer **__returnValue) = 0;
                    
                    virtual HRESULT STDMETHODCALLTYPE CreateWithWriteableBitmapAndOutputOption( 
                        /* [in] */ __RPC__in_opt ABI::Lumia::Imaging::IImageProvider *imageSource,
                        /* [in] */ __RPC__in_opt ABI::Windows::UI::Xaml::Media::Imaging::IWriteableBitmap *writeableBitmap,
                        /* [in] */ ABI::Lumia::Imaging::OutputOption outputOption,
                        /* [out][retval] */ __RPC__deref_out_opt ABI::Lumia::Imaging::IWriteableBitmapRenderer **__returnValue) = 0;
                    
                };

                extern const __declspec(selectany) IID & IID_IWriteableBitmapRendererFactory = __uuidof(IWriteableBitmapRendererFactory);

                
            }  /* end namespace */
        }  /* end namespace */
    }  /* end namespace */
    extern "C" { 
    
#else 	/* C style interface */

    typedef struct __x_ABI_CLumia_CImaging_CIWriteableBitmapRendererFactoryVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            __RPC__in __x_ABI_CLumia_CImaging_CIWriteableBitmapRendererFactory * This,
            /* [in] */ __RPC__in REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            __RPC__in __x_ABI_CLumia_CImaging_CIWriteableBitmapRendererFactory * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            __RPC__in __x_ABI_CLumia_CImaging_CIWriteableBitmapRendererFactory * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetIids )( 
            __RPC__in __x_ABI_CLumia_CImaging_CIWriteableBitmapRendererFactory * This,
            /* [out] */ __RPC__out ULONG *iidCount,
            /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
        
        HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )( 
            __RPC__in __x_ABI_CLumia_CImaging_CIWriteableBitmapRendererFactory * This,
            /* [out] */ __RPC__deref_out_opt HSTRING *className);
        
        HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )( 
            __RPC__in __x_ABI_CLumia_CImaging_CIWriteableBitmapRendererFactory * This,
            /* [out] */ __RPC__out TrustLevel *trustLevel);
        
        HRESULT ( STDMETHODCALLTYPE *Create )( 
            __RPC__in __x_ABI_CLumia_CImaging_CIWriteableBitmapRendererFactory * This,
            /* [in] */ __RPC__in_opt __x_ABI_CLumia_CImaging_CIImageProvider *imageSource,
            /* [out][retval] */ __RPC__deref_out_opt __x_ABI_CLumia_CImaging_CIWriteableBitmapRenderer **__returnValue);
        
        HRESULT ( STDMETHODCALLTYPE *CreateWithWriteableBitmap )( 
            __RPC__in __x_ABI_CLumia_CImaging_CIWriteableBitmapRendererFactory * This,
            /* [in] */ __RPC__in_opt __x_ABI_CLumia_CImaging_CIImageProvider *imageSource,
            /* [in] */ __RPC__in_opt __x_ABI_CWindows_CUI_CXaml_CMedia_CImaging_CIWriteableBitmap *writeableBitmap,
            /* [out][retval] */ __RPC__deref_out_opt __x_ABI_CLumia_CImaging_CIWriteableBitmapRenderer **__returnValue);
        
        HRESULT ( STDMETHODCALLTYPE *CreateWithWriteableBitmapAndOutputOption )( 
            __RPC__in __x_ABI_CLumia_CImaging_CIWriteableBitmapRendererFactory * This,
            /* [in] */ __RPC__in_opt __x_ABI_CLumia_CImaging_CIImageProvider *imageSource,
            /* [in] */ __RPC__in_opt __x_ABI_CWindows_CUI_CXaml_CMedia_CImaging_CIWriteableBitmap *writeableBitmap,
            /* [in] */ __x_ABI_CLumia_CImaging_COutputOption outputOption,
            /* [out][retval] */ __RPC__deref_out_opt __x_ABI_CLumia_CImaging_CIWriteableBitmapRenderer **__returnValue);
        
        END_INTERFACE
    } __x_ABI_CLumia_CImaging_CIWriteableBitmapRendererFactoryVtbl;

    interface __x_ABI_CLumia_CImaging_CIWriteableBitmapRendererFactory
    {
        CONST_VTBL struct __x_ABI_CLumia_CImaging_CIWriteableBitmapRendererFactoryVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define __x_ABI_CLumia_CImaging_CIWriteableBitmapRendererFactory_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __x_ABI_CLumia_CImaging_CIWriteableBitmapRendererFactory_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __x_ABI_CLumia_CImaging_CIWriteableBitmapRendererFactory_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __x_ABI_CLumia_CImaging_CIWriteableBitmapRendererFactory_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 

#define __x_ABI_CLumia_CImaging_CIWriteableBitmapRendererFactory_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 

#define __x_ABI_CLumia_CImaging_CIWriteableBitmapRendererFactory_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 


#define __x_ABI_CLumia_CImaging_CIWriteableBitmapRendererFactory_Create(This,imageSource,__returnValue)	\
    ( (This)->lpVtbl -> Create(This,imageSource,__returnValue) ) 

#define __x_ABI_CLumia_CImaging_CIWriteableBitmapRendererFactory_CreateWithWriteableBitmap(This,imageSource,writeableBitmap,__returnValue)	\
    ( (This)->lpVtbl -> CreateWithWriteableBitmap(This,imageSource,writeableBitmap,__returnValue) ) 

#define __x_ABI_CLumia_CImaging_CIWriteableBitmapRendererFactory_CreateWithWriteableBitmapAndOutputOption(This,imageSource,writeableBitmap,outputOption,__returnValue)	\
    ( (This)->lpVtbl -> CreateWithWriteableBitmapAndOutputOption(This,imageSource,writeableBitmap,outputOption,__returnValue) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* ____x_ABI_CLumia_CImaging_CIWriteableBitmapRendererFactory_INTERFACE_DEFINED__ */


/* interface __MIDL_itf_Lumia2EImaging_0000_0141 */
/* [local] */ 

#ifndef RUNTIMECLASS_Lumia_Imaging_PixelBufferInfo_DEFINED
#define RUNTIMECLASS_Lumia_Imaging_PixelBufferInfo_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Lumia_Imaging_PixelBufferInfo[] = L"Lumia.Imaging.PixelBufferInfo";
#endif
#ifndef RUNTIMECLASS_Lumia_Imaging_Bitmap_DEFINED
#define RUNTIMECLASS_Lumia_Imaging_Bitmap_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Lumia_Imaging_Bitmap[] = L"Lumia.Imaging.Bitmap";
#endif
#ifndef RUNTIMECLASS_Lumia_Imaging_RenderRequest_DEFINED
#define RUNTIMECLASS_Lumia_Imaging_RenderRequest_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Lumia_Imaging_RenderRequest[] = L"Lumia.Imaging.RenderRequest";
#endif
#ifndef RUNTIMECLASS_Lumia_Imaging_AnimationFrame_DEFINED
#define RUNTIMECLASS_Lumia_Imaging_AnimationFrame_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Lumia_Imaging_AnimationFrame[] = L"Lumia.Imaging.AnimationFrame";
#endif
#ifndef RUNTIMECLASS_Lumia_Imaging_AutoResizeConfiguration_DEFINED
#define RUNTIMECLASS_Lumia_Imaging_AutoResizeConfiguration_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Lumia_Imaging_AutoResizeConfiguration[] = L"Lumia.Imaging.AutoResizeConfiguration";
#endif
#ifndef RUNTIMECLASS_Lumia_Imaging_ColorModeDescriptor_DEFINED
#define RUNTIMECLASS_Lumia_Imaging_ColorModeDescriptor_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Lumia_Imaging_ColorModeDescriptor[] = L"Lumia.Imaging.ColorModeDescriptor";
#endif
#ifndef RUNTIMECLASS_Lumia_Imaging_ColorPlaneDescriptor_DEFINED
#define RUNTIMECLASS_Lumia_Imaging_ColorPlaneDescriptor_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Lumia_Imaging_ColorPlaneDescriptor[] = L"Lumia.Imaging.ColorPlaneDescriptor";
#endif
#ifndef RUNTIMECLASS_Lumia_Imaging_BitmapImageSource_DEFINED
#define RUNTIMECLASS_Lumia_Imaging_BitmapImageSource_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Lumia_Imaging_BitmapImageSource[] = L"Lumia.Imaging.BitmapImageSource";
#endif
#ifndef RUNTIMECLASS_Lumia_Imaging_BitmapProviderImageSource_DEFINED
#define RUNTIMECLASS_Lumia_Imaging_BitmapProviderImageSource_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Lumia_Imaging_BitmapProviderImageSource[] = L"Lumia.Imaging.BitmapProviderImageSource";
#endif
#ifndef RUNTIMECLASS_Lumia_Imaging_BitmapRenderer_DEFINED
#define RUNTIMECLASS_Lumia_Imaging_BitmapRenderer_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Lumia_Imaging_BitmapRenderer[] = L"Lumia.Imaging.BitmapRenderer";
#endif
#ifndef RUNTIMECLASS_Lumia_Imaging_DiagnosticsReport_DEFINED
#define RUNTIMECLASS_Lumia_Imaging_DiagnosticsReport_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Lumia_Imaging_DiagnosticsReport[] = L"Lumia.Imaging.DiagnosticsReport";
#endif
#ifndef RUNTIMECLASS_Lumia_Imaging_BufferImageSource_DEFINED
#define RUNTIMECLASS_Lumia_Imaging_BufferImageSource_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Lumia_Imaging_BufferImageSource[] = L"Lumia.Imaging.BufferImageSource";
#endif
#ifndef RUNTIMECLASS_Lumia_Imaging_BufferProviderImageSource_DEFINED
#define RUNTIMECLASS_Lumia_Imaging_BufferProviderImageSource_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Lumia_Imaging_BufferProviderImageSource[] = L"Lumia.Imaging.BufferProviderImageSource";
#endif
#ifndef RUNTIMECLASS_Lumia_Imaging_CachingEffect_DEFINED
#define RUNTIMECLASS_Lumia_Imaging_CachingEffect_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Lumia_Imaging_CachingEffect[] = L"Lumia.Imaging.CachingEffect";
#endif
#ifndef RUNTIMECLASS_Lumia_Imaging_ColorImageSource_DEFINED
#define RUNTIMECLASS_Lumia_Imaging_ColorImageSource_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Lumia_Imaging_ColorImageSource[] = L"Lumia.Imaging.ColorImageSource";
#endif
#ifndef RUNTIMECLASS_Lumia_Imaging_Version_DEFINED
#define RUNTIMECLASS_Lumia_Imaging_Version_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Lumia_Imaging_Version[] = L"Lumia.Imaging.Version";
#endif
#ifndef RUNTIMECLASS_Lumia_Imaging_SdkInfo_DEFINED
#define RUNTIMECLASS_Lumia_Imaging_SdkInfo_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Lumia_Imaging_SdkInfo[] = L"Lumia.Imaging.SdkInfo";
#endif
#ifndef RUNTIMECLASS_Lumia_Imaging_EllipseRadius_DEFINED
#define RUNTIMECLASS_Lumia_Imaging_EllipseRadius_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Lumia_Imaging_EllipseRadius[] = L"Lumia.Imaging.EllipseRadius";
#endif
#ifndef RUNTIMECLASS_Lumia_Imaging_FilterEffect_DEFINED
#define RUNTIMECLASS_Lumia_Imaging_FilterEffect_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Lumia_Imaging_FilterEffect[] = L"Lumia.Imaging.FilterEffect";
#endif
#ifndef RUNTIMECLASS_Lumia_Imaging_GifRenderer_DEFINED
#define RUNTIMECLASS_Lumia_Imaging_GifRenderer_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Lumia_Imaging_GifRenderer[] = L"Lumia.Imaging.GifRenderer";
#endif
#ifndef RUNTIMECLASS_Lumia_Imaging_LinearGradient_DEFINED
#define RUNTIMECLASS_Lumia_Imaging_LinearGradient_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Lumia_Imaging_LinearGradient[] = L"Lumia.Imaging.LinearGradient";
#endif
#ifndef RUNTIMECLASS_Lumia_Imaging_RadialGradient_DEFINED
#define RUNTIMECLASS_Lumia_Imaging_RadialGradient_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Lumia_Imaging_RadialGradient[] = L"Lumia.Imaging.RadialGradient";
#endif
#ifndef RUNTIMECLASS_Lumia_Imaging_GradientImageSource_DEFINED
#define RUNTIMECLASS_Lumia_Imaging_GradientImageSource_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Lumia_Imaging_GradientImageSource[] = L"Lumia.Imaging.GradientImageSource";
#endif
#ifndef RUNTIMECLASS_Lumia_Imaging_ImageProviderInfo_DEFINED
#define RUNTIMECLASS_Lumia_Imaging_ImageProviderInfo_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Lumia_Imaging_ImageProviderInfo[] = L"Lumia.Imaging.ImageProviderInfo";
#endif
#ifndef RUNTIMECLASS_Lumia_Imaging_JpegRenderer_DEFINED
#define RUNTIMECLASS_Lumia_Imaging_JpegRenderer_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Lumia_Imaging_JpegRenderer[] = L"Lumia.Imaging.JpegRenderer";
#endif
#ifndef RUNTIMECLASS_Lumia_Imaging_JpegTools_DEFINED
#define RUNTIMECLASS_Lumia_Imaging_JpegTools_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Lumia_Imaging_JpegTools[] = L"Lumia.Imaging.JpegTools";
#endif
#ifndef RUNTIMECLASS_Lumia_Imaging_RandomAccessStreamImageSource_DEFINED
#define RUNTIMECLASS_Lumia_Imaging_RandomAccessStreamImageSource_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Lumia_Imaging_RandomAccessStreamImageSource[] = L"Lumia.Imaging.RandomAccessStreamImageSource";
#endif
#ifndef RUNTIMECLASS_Lumia_Imaging_StorageFileImageSource_DEFINED
#define RUNTIMECLASS_Lumia_Imaging_StorageFileImageSource_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Lumia_Imaging_StorageFileImageSource[] = L"Lumia.Imaging.StorageFileImageSource";
#endif
#ifndef RUNTIMECLASS_Lumia_Imaging_CameraPreviewImageSource_DEFINED
#define RUNTIMECLASS_Lumia_Imaging_CameraPreviewImageSource_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Lumia_Imaging_CameraPreviewImageSource[] = L"Lumia.Imaging.CameraPreviewImageSource";
#endif
#ifndef RUNTIMECLASS_Lumia_Imaging_WriteableBitmapRenderer_DEFINED
#define RUNTIMECLASS_Lumia_Imaging_WriteableBitmapRenderer_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Lumia_Imaging_WriteableBitmapRenderer[] = L"Lumia.Imaging.WriteableBitmapRenderer";
#endif


/* interface __MIDL_itf_Lumia2EImaging_0000_0141 */
/* [local] */ 



extern RPC_IF_HANDLE __MIDL_itf_Lumia2EImaging_0000_0141_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_Lumia2EImaging_0000_0141_v0_0_s_ifspec;

/* Additional Prototypes for ALL interfaces */

unsigned long             __RPC_USER  HSTRING_UserSize(     __RPC__in unsigned long *, unsigned long            , __RPC__in HSTRING * ); 
unsigned char * __RPC_USER  HSTRING_UserMarshal(  __RPC__in unsigned long *, __RPC__inout_xcount(0) unsigned char *, __RPC__in HSTRING * ); 
unsigned char * __RPC_USER  HSTRING_UserUnmarshal(__RPC__in unsigned long *, __RPC__in_xcount(0) unsigned char *, __RPC__out HSTRING * ); 
void                      __RPC_USER  HSTRING_UserFree(     __RPC__in unsigned long *, __RPC__in HSTRING * ); 

/* end of Additional Prototypes */

#ifdef __cplusplus
}
#endif

#endif


