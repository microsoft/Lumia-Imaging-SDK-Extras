
Lumia Imaging SDK Extras
========================

This repository contains extra functionality and sample code for the Lumia Imaging SDK. 

The code is provided under the MIT license, and can therefore be conveniently used and modified. 

Parts contained will typically target the latest release version of the Lumia Imaging SDK, unless otherwise marked.

###Philosophy

- The **projects** (.csproj, .vcxproj etc) collect various classes/features, but are mainly for sample and testing purposes. 
- This repository should be considered as a *set of individual classes*, not as a library.
- New revisions may not be compatible with old ones.
- Therefore, if you find something useful, it may be easier to *isolate the part you want* instead of taking a dependency on all the projects included.

---
Managed (C#/.NET)
==
##Layer system
    Managed/Lumia.Imaging.Extras.Layers/

Allows to describe image processing as a list of layers, like the familiar representation found in photo editing apps. 

After configuring the layers, an IImageProvider endpoint can be easily retrieved and rendered.

###Features
- Layers and Adjustment Layers
- Layer styles (blend function, opacity, transparency mask, scaling/translation)
- Tuned for performance and low GC pressure in interactive scenarios.
- Flexible, construction of actual objects can be deferred etc.

##Image sources/effects
    Managed/Lumia.Imaging.Extras.ImageProviders/

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
    Managed/Lumia.Imaging.Extras.Utility/

####DotVisualizationExtensions
- **ToDotString**: Renders the layout of a Lumia Imaging SDK processing graph into **GraphViz** "dot" format, allowing the developer to visualize the image processing in a diagram.

####ImageProviderExtensions
- **GetBitmapAsync** overloads that help to reuse bitmaps.
- **Rotate** method, making it convenient to rotate an image provider.

####BitmapExtensions
- **CopyTo**/**ToWriteableBitmap**: Conversions to WriteableBitmap. These help in interactive scenarios, and can be useful for keeping work off the UI thread.

####BufferExtensions
- **AsBufferTask**: Conversion from Task&lt;IBuffer&gt; to a Lumia Imaging SDK IBufferProvider that can be passed into a BufferProviderImageSource. This can be useful to avoid having to await the task-of-buffer before setting up an image source.

####MaybeTask
Value type that either holds a result **or** a task-of-result. This helps many app scenarios, keeping Task-proliferation and GC pressure in check when dealing with mixed sync/async operations.


---
Native (C++ with WRL and C++/CX)
==
Support code and samples for writing custom Lumia Imaging SDK components in native code (WRL and C++/CX).

###Headers and IDL files
    Native/Include/
Generated IDL and .h files for the Lumia Imaging SDK. These make it possible to use the Imaging SDK in various lower-level WRL and interop scenarios.

###Custom filter helpers
    Native/CustomFilter/
Makes it easier to write custom block-based filters in both standard C++ with **WRL** and in **C++/CX**. 
The API is similar to CustomFilterBase in Lumia.Imaging.Managed.

###Custom effect helpers
    Native/CustomEffect/
**(Work in progress)** 

Makes it easier to write custom bitmap-based effects in both standard C++ with **WRL** and in **C++/CX**. 
The API is similar to CustomEffectBase in Lumia.Imaging.Managed.

###Custom image source helpers
    Native/CustomImageSource/
**(Work in progress)** 

Makes it easier to write custom bitmap-based image sources in both standard C++ with **WRL** and in **C++/CX**. 
The API is similar to CustomImageSourceBase in Lumia.Imaging.Managed.

###Effect group helpers
    Native/CustomEffect/
**(Work in progress)** 

Makes it easier to write effect groups in both standard C++ with **WRL** and in **C++/CX**. 
The API is similar to EffectGroupBase in Lumia.Imaging.Managed.

##Samples
    Native/Samples/CustomCx/
    Native/Samples/CustomWRL/

Sample library projects showing how to package custom filters/effects/effect groups for use in universal apps (Windows 8.1, Windows Phone 8.1).

**EmptyCustomFilter**:
WRL and C++/CX versions of an example custom filter that passes through the image unchanged.
	
**RgbGainCustomFilter**:
WRL and C++/CX versions of an example custom filter that has parameters and does something interesting.
	

