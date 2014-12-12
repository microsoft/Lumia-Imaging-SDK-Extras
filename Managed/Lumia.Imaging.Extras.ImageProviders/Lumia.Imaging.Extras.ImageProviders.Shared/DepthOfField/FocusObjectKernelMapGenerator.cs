using Lumia.Imaging.Adjustments;
using Lumia.Imaging.Compositing;
using System.Collections.Generic;
using Windows.Foundation;

namespace Lumia.Imaging.Extras.Effects.DepthOfField
{
	public class FocusObjectKernelMapGenerator
	{
		public static IImageProvider Generate(IImageProvider objectMaskSource, LinearGradient gradient, Size size, IReadOnlyList<ILensBlurKernel> kernels)
		{
			var backgroundSource = new GradientImageSource(size, gradient);
            var blendEffect = new BlendEffect(backgroundSource, objectMaskSource, BlendFunction.Lighten);
            return new IndexRemappingEffect(blendEffect, kernels.Count + 2);
		}
	}
}
