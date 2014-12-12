using Lumia.Imaging.Adjustments;
using System;
using System.Collections.Generic;
using System.Linq;
using Windows.Foundation;

namespace Lumia.Imaging.Extras.Effects.DepthOfField
{

	public class HighQualityKernelGenerator : KernelGenerator
	{
		public HighQualityKernelGenerator(Size sourceSize, double strength)
			: base(sourceSize, strength)
		{
		}

		public override List<ILensBlurKernel> GetKernels()
		{
			var list = new List<ILensBlurKernel>();

			int maxKernelSize = GetMaxKernelSize();

			if (maxKernelSize == 0)
			{
				return new List<ILensBlurKernel>();
			}

			for (int i = 1; i <= Math.Min(20, maxKernelSize); i++)
			{
				list.Add(new LensBlurPredefinedKernel(LensBlurPredefinedKernelShape.Circle, (uint)i));
			}

			if (maxKernelSize > 20)
			{
				var largeKernelSizes = GetLargeKernelSizes(maxKernelSize);
				list.AddRange(largeKernelSizes.Select(kernelSize => new LensBlurPredefinedKernel(LensBlurPredefinedKernelShape.Circle, kernelSize)));
			}

			return list;
		}


		private uint[] GetLargeKernelSizes(int maxKernelSize)
		{
			uint[] sizes;

			var numLargeKernels = Math.Min(5, (maxKernelSize - 20) / 2);

            if (numLargeKernels <= 0)
                return new uint[0];

			var minSize = 22;
			var span = maxKernelSize - minSize;
			var step = Math.Max(span / numLargeKernels, 2);

			sizes = new uint[numLargeKernels];

			for (int i = 1; i <= numLargeKernels; i++)
			{
				sizes[i - 1] = (uint)(minSize + (i * step));
			}
			return sizes;
		}

	}
}