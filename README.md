
Lumia Imaging SDK Extras
========================

This repository contains extra functionality and sample code for the [Lumia Imaging SDK](http://dev.windows.com/en-us/featured/lumia). 

The code is provided under the [MIT license](https://raw.githubusercontent.com/Microsoft/Lumia-Imaging-SDK-Extras/master/License.txt), and can therefore be conveniently used and modified. 

Parts contained will typically target the [latest released version of the Lumia Imaging SDK](https://www.nuget.org/packages/LumiaImagingSDK/), unless otherwise marked.

###Philosophy

- The **projects** (.csproj, .vcxproj etc) collect various classes/features, but are mainly for sample and testing purposes. 
- This repository should be considered as a *set of individual classes*, not as a library.
- New revisions may not be compatible with old ones.
- Therefore, if you find something useful, it may be easier to *isolate the part you want* instead of taking a dependency on all the projects included.

---
Managed (C#/.NET)
==
##Layer system
Folder: [Managed/Lumia.Imaging.Extras.Layers/](https://github.com/Microsoft/Lumia-Imaging-SDK-Extras/tree/master/Managed/Lumia.Imaging.Extras.Layers/Lumia.Imaging.Extras.Layers.Shared)

Allows to describe image processing as a list of layers, like the familiar representation found in photo editing apps. 

After configuring the layers, an IImageProvider endpoint can be easily retrieved and rendered.

###Features
- Layers and Adjustment Layers
- Layer styles (blend function, opacity, transparency mask, scaling/translation)
- Tuned for performance and low GC pressure in interactive scenarios.
- Flexible, construction of actual objects can be deferred etc.

##Image sources/effects
Folder: [Managed/Lumia.Imaging.Extras.ImageProviders/](https://github.com/Microsoft/Lumia-Imaging-SDK-Extras/tree/master/Managed/Lumia.Imaging.Extras.ImageProviders/Lumia.Imaging.Extras.ImageProviders.Shared)

####NoiseImageSource
A noise generator image source. Internally uses a ColorImageSource and a NoiseFilter.

####HighpassEffect 
A "highpass" effect, similar to familiar ones in photo editing apps. 

####DepthofField
A set of high-level scenarios showing how to set up a "DoF" effect.

####HslAdjustmentEffect
Example of an effect that does higher level HSL adjustments, similar to familiar ones in photo editing apps. 
Allows adjustments of saturation and lightness around Master, Red, Green, Blue, Cyan, Magenta and Yellow channels.

##Utility code
Folder: [Managed/Lumia.Imaging.Extras.Utility/](https://github.com/Microsoft/Lumia-Imaging-SDK-Extras/tree/master/Managed/Lumia.Imaging.Extras.Utility/Lumia.Imaging.Extras.Utility.Shared)

####DotVisualizationExtensions
- **ToDotString**: Renders the layout of a Lumia Imaging SDK processing graph into **GraphViz** "dot" format, allowing the developer to visualize the image processing in a diagram.

####ImageProviderExtensions
- **GetBitmapAsync** overloads that help to reuse bitmaps.
- **Rotate** method, making it convenient to rotate an image provider.

####BitmapExtensions
- **CopyTo**/**ToWriteableBitmap**: Conversions to WriteableBitmap. These help in interactive scenarios, and can be useful for keeping work off the UI thread.

####BufferExtensions
- **AsBufferTask**: Conversion from Task&lt;IBuffer&gt; to a Lumia Imaging SDK IBufferProvider that can be passed into a BufferProviderImageSource. This can be useful to avoid having to await the task-of-buffer before setting up an image source.

####MaybeTask&lt;T&gt;
Value type that either holds a result **or** a task-of-result. This helps interactive app scenarios, keeping GC activity in check when dealing with mixed sync/async operations, as otherwise each new Task causes a heap allocation.


---
Native (C++ with WRL and C++/CX)
==
Support code and samples for writing custom Lumia Imaging SDK components in native code (WRL and C++/CX).

###Headers and IDL files
Folder: [Native/Include/](https://github.com/Microsoft/Lumia-Imaging-SDK-Extras/tree/master/Native/Include)

Generated IDL and .h files for the Lumia Imaging SDK. These make it possible to use the Imaging SDK in various lower-level WRL and interop scenarios.

These were generated with the **winmdidl** tool (from the Windows SDK) and then also postprocessed to remove some quirks present in C++/CX .winmd files. The generation scripts may also be published but they're not yet available.

For now, the namespaces from Lumia.Imaging.winmd are covered.
The intention is to keep updating this with files matching the latest released SDK.

###Custom filter helpers
Folder: [Native/CustomFilter/](https://github.com/Microsoft/Lumia-Imaging-SDK-Extras/tree/master/Native/CustomFilter)

Makes it easier to write custom block-based filters in both standard C++ with **WRL** and in **C++/CX**. 
The API is similar to CustomFilterBase in Lumia.Imaging.Managed.

###Custom effect helpers
Folder: [Native/CustomEffect/](https://github.com/Microsoft/Lumia-Imaging-SDK-Extras/tree/master/Native/CustomEffect)
**(WRL version not yet available, C++/CX version available)** 

Makes it easier to write custom bitmap-based effects in both standard C++ with **WRL** and in **C++/CX**. 
The API is similar to CustomEffectBase in Lumia.Imaging.Managed.

###Custom image source helpers
Folder: Native/CustomImageSource/
**(Work in progress, not yet available)** 

Makes it easier to write custom bitmap-based image sources in both standard C++ with **WRL** and in **C++/CX**. 
The API is similar to CustomImageSourceBase in Lumia.Imaging.Managed.

###Effect group helpers
Folder: Native/EffectGroup/
**(Work in progress, not yet available)** 

Makes it easier to write effect groups in both standard C++ with **WRL** and in **C++/CX**. 
The API is similar to EffectGroupBase in Lumia.Imaging.Managed.

##Samples
Folder: (C++/CX) [Native/Samples/CustomCx/](https://github.com/Microsoft/Lumia-Imaging-SDK-Extras/tree/master/Native/Samples/CustomCx) / (WRL) [Native/Samples/CustomWRL/](https://github.com/Microsoft/Lumia-Imaging-SDK-Extras/tree/master/Native/Samples/CustomWRL)

Sample library projects showing how to package custom filters/effects/effect groups for use in universal apps (Windows 8.1, Windows Phone 8.1).

**EmptyCustomFilter**:
WRL and C++/CX versions of an example custom filter that passes through the image unchanged.
	
**RgbGainCustomFilter**:
WRL and C++/CX versions of an example custom filter that has parameters and does something interesting.

**EmptyCustomEffect**:
C++/CX version of an example custom effect that passes through the image unchanged.
	

##Unit tests

All tests are available in the sample solution: "Lumia Imaging SDK Extras.sln".

There are two test projects:

- Lumia.Imaging.Extras.Tests.Windows
- Lumia.Imaging.Extras.Tests.WindowsPhone

You may want to right-click and do "Unload Project" on the one you **don't** want to run, as otherwise they are hard to distinguish in the Test Explorer in Visual Studio.
