using Lumia.Imaging.Adjustments;
using System;
using System.Collections.Generic;
using Windows.Foundation;

namespace Lumia.Imaging.Extras.Effects.DepthOfField
{
	public abstract class KernelGenerator
	{
		private readonly static uint minPixelCountForMaxKernelSize = 8 * 1024 * 1024;
		public KernelGenerator(Size sourceSize, double strength)
		{
			SourceSize = sourceSize;
			Strength = strength;
		}
		public abstract List<ILensBlurKernel> GetKernels();
		public Size SourceSize { get; set; }
		public double Strength { get; set; }

		protected int GetMaxKernelSize()
		{
			var pixelCount = SourceSize.Width * SourceSize.Height;
			return (int)(Math.Min(Math.Sqrt(pixelCount / minPixelCountForMaxKernelSize) * 255, 255) * Strength);
		}

	}
}
