using Lumia.Imaging.Adjustments;
using System;
using System.Collections.Generic;
using System.Linq;
using Windows.UI;

namespace Lumia.Imaging.Extras.Effects.DepthOfField
{
	/// <summary>
	/// EllipticFocusGradientGenerator provides a mask for LensBlur with an ellipse focus area.
	/// </summary>
	public class EllipticFocusGradientGenerator : FocusGradientGenerator
	{
		/// <summary>
		/// Provides a configured LinearGradient that can be used in combination with a GradientImageSource to provide a mask for the LensBlurEffect.
		/// It will expect the LensBlur will be blurred with 1 kernel when the double is different from None.
		/// </summary>
		/// <param name="ellipse">The band that represents the focus area in the image. Pixels within this band won't be blurred. 
		/// Areas outside of the area will be progressively more blurred as the distance from the focus band increases.</param>
		/// <param name="strength">Strength of the blur.</param>
		/// <returns>A LinearGradient that can be used in combination with a GradientImageSource to be used by LensBlur.</returns>
		public static RadialGradient GenerateGradient(FocusEllipse ellipse, KernelGenerator kernelGenerator)
		{
			if (kernelGenerator.GetKernels() == null)
			{
				return null;
			}

			EllipseRadius maxBlurRadius;

			bool widthGtHight = ellipse.Radius.X > ellipse.Radius.Y;
			double factor = 0.9;

			if (widthGtHight)
			{
				maxBlurRadius = new EllipseRadius(factor, factor * ellipse.Radius.Y / ellipse.Radius.X);
			}
			else
			{
				maxBlurRadius = new EllipseRadius(factor * ellipse.Radius.X / ellipse.Radius.Y, factor);
			}

			var gradient = new RadialGradient(ellipse.Center, maxBlurRadius);
			SetGradientStops(gradient, ellipse, maxBlurRadius, kernelGenerator);

			return gradient;
		}

		private static void SetGradientStops(RadialGradient gradient, FocusEllipse ellipse, EllipseRadius maxBlurRadius, KernelGenerator kernelGenerator)
		{

			var stops = new List<GradientStop>();

			double firstStopOffset = ellipse.Radius.X / maxBlurRadius.X;

			var powerSizes = kernelGenerator.GetKernels().Select(kernel => (double)Math.Pow(((LensBlurPredefinedKernel)kernel).Size, 0.5)).ToList();
			var sumOfPowerSizes = Enumerable.Sum(powerSizes);

			stops.Add(new GradientStop() { Color = Color.FromArgb(255, 0, 0, 0), Offset = 0 });
			stops.Add(new GradientStop() { Color = Color.FromArgb(255, 0, 0, 0), Offset = firstStopOffset });

			var currentStopOffset = firstStopOffset + minDiffBetweenStops;
	
			stops.Add(new GradientStop() { Color = Color.FromArgb(255, 1, 1, 1), Offset = currentStopOffset });

			var kernelCount = kernelGenerator.GetKernels().Count;
			for (int index = 1; index < kernelCount; index++)
			{
				var color = (byte)(index + 1);
				currentStopOffset = currentStopOffset + (powerSizes[index - 1] / sumOfPowerSizes) * (1 - firstStopOffset);
				stops.Add(new GradientStop() { Color = Color.FromArgb(255, color, color, color), Offset = currentStopOffset });
			}

			var validStops = EnsureMinDiffBetweenPoints(stops);

			gradient.Stops = validStops.ToArray();
		}

	}
}
