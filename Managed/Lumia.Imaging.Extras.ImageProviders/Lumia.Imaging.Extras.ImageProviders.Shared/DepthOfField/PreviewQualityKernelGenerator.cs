using Lumia.Imaging.Adjustments;
using System.Collections.Generic;
using Windows.Foundation;

namespace Lumia.Imaging.Extras.Effects.DepthOfField
{

	public class PreviewQualityKernelGenerator : KernelGenerator
	{
		public PreviewQualityKernelGenerator(Size sourceSize = default(Size), double strength = 0.5) : base(sourceSize, strength)
		{
		}

		public override List<ILensBlurKernel> GetKernels()
		{
			var kernelSize = (uint)(GetMaxKernelSize() * 0.75);
			var shape = kernelSize > 20 ? LensBlurPredefinedKernelShape.Hexagon : LensBlurPredefinedKernelShape.Circle;
            return kernelSize >= 1 ? new List<ILensBlurKernel>() { new LensBlurPredefinedKernel(shape, kernelSize) } : new List<ILensBlurKernel>();
		}
	}
}