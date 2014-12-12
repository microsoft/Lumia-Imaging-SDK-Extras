using Lumia.Imaging.Adjustments;
using System;
using System.Collections.Generic;
using System.Linq;
using Windows.Foundation;
using Windows.UI;

namespace Lumia.Imaging.Extras.Effects.DepthOfField
{
	/// <summary>
	/// LensTiltFocusGradientGenerator provides a gradient for LensBlur with a focus band area.
	/// </summary>
	public class LensTiltFocusGradientGenerator : FocusGradientGenerator
	{
		/// <summary>
		/// Provides a configured LinearGradient that can be used in combination with a GradientImageSource to provide a mask for the LensBlurEffect.
		/// Generates a map for BlendEffect.
		/// </summary>
		/// <param name="band">The band that represents the focus area in the image. Pixels within this band won't be blurred. 
		/// Areas outside of the area will be progressively more blurred as the distance from the focus band increases.</param>
		/// <param name="kernelSpanFromEdge1">Strength at Edge1.</param>
		/// <param name="kernelSpanFromEdge2">Strength at Edge2.</param>
		/// <returns>A LinearGradient that can be used in combination with a GradientImageSource to be used by LensBlur.</returns>

		public static LinearGradient GenerateGradient(FocusBand band, Size sourceSize, KernelGenerator edge1KernelGenerator, KernelGenerator edge2KernelGenerator, bool applySmallBlurFocusArea)
		{
			var gradient = new LinearGradient();

			var lineFunction = GradientLine.CreateFunction(band);

			SetGradientPoints(gradient, lineFunction);
			SetGradientStops(gradient, band, sourceSize, edge1KernelGenerator, edge2KernelGenerator, applySmallBlurFocusArea);

			return gradient;
		}


		private static void SetGradientPoints(LinearGradient gradient, Func<double, Point> pointFunction)
		{
			gradient.StartPoint = pointFunction(0);
			gradient.EndPoint = pointFunction(1);
		}

		private static void SetGradientStops(LinearGradient gradient, FocusBand focusBand, Size sourceSize, KernelGenerator edge1KernelGenerator, KernelGenerator edge2KernelGenerator, bool applySmallBlurFocusArea)
		{
			var blurArea1FirstOffset = GetOffset(gradient, focusBand.Edge1);
			var blurArea2FirstOffset = GetOffset(gradient, focusBand.Edge2);

			var focusBandEdge1Pixels = new Point(focusBand.Edge1.X * sourceSize.Width, focusBand.Edge1.Y * sourceSize.Height);
			var focusBandEdge2Pixels = new Point(focusBand.Edge2.X * sourceSize.Width, focusBand.Edge2.Y * sourceSize.Height);

			var focusBandWidth = Math.Abs(blurArea1FirstOffset - blurArea2FirstOffset);

            var focusBandWidthPixels = Distance(focusBandEdge1Pixels, focusBandEdge2Pixels);

            var scaleFactor = focusBandWidthPixels > 0 ? focusBandWidth / focusBandWidthPixels : 1.0;

            var blurAreaWidthPixels = (sourceSize.Height - focusBandWidthPixels) / 2 * 0.9;
            var blurAreaWidth = blurAreaWidthPixels * scaleFactor;
            
			double blurArea1LastOffset;
			double blurArea2LastOffset;

			if (blurArea1FirstOffset > blurArea2FirstOffset)
			{
				blurArea1LastOffset = blurArea1FirstOffset + blurAreaWidth;
				blurArea2LastOffset = blurArea2FirstOffset - blurAreaWidth;
			}
			else 
			{
				blurArea1LastOffset = blurArea1FirstOffset - blurAreaWidth;
				blurArea2LastOffset = blurArea2FirstOffset + blurAreaWidth;
			}

			var stops1 = GetGradientStops(gradient, applySmallBlurFocusArea, edge1KernelGenerator, blurArea1FirstOffset, blurArea1LastOffset);
			var stops2 = GetGradientStops(gradient, applySmallBlurFocusArea, edge2KernelGenerator, blurArea2FirstOffset, blurArea2LastOffset, (byte)(edge1KernelGenerator.GetKernels().Count + 1));

			List<GradientStop> stops = new List<GradientStop>();
			stops.AddRange(stops1);
			stops.AddRange(stops2);

			var validStops = EnsureMinDiffBetweenPoints(stops);

			gradient.Stops = validStops.ToArray();
		}

		private static List<GradientStop> GetGradientStops(LinearGradient gradient, bool applySmallBlurFocusArea, KernelGenerator kernelGenerator, double firstStopOffset, double lastStopOffset, byte firstKernelIndex = 1)
		{
			var stops = new List<GradientStop>();

			var powerSizes = kernelGenerator.GetKernels().Select(kernel => (double)Math.Pow(((LensBlurPredefinedKernel)kernel).Size, 0.5)).ToList();
			var sumOfPowerSizes = Enumerable.Sum(powerSizes);

			var focusAreaColor = GetFocusAreaColor(applySmallBlurFocusArea);
			stops.Add(new GradientStop() { Color = Color.FromArgb(255, focusAreaColor, focusAreaColor, focusAreaColor), Offset = firstStopOffset });

            if (kernelGenerator.GetKernels().Count > 0)
            {
                var currentStopOffset = lastStopOffset - firstStopOffset > 0
                ? firstStopOffset + minDiffBetweenStops
                : firstStopOffset - minDiffBetweenStops;

                stops.Add(new GradientStop() { Color = Color.FromArgb(255, firstKernelIndex, firstKernelIndex, firstKernelIndex), Offset = currentStopOffset });

                var kernelCount = kernelGenerator.GetKernels().Count;
                for (int i = 1; i < kernelCount; i++)
                {
                    var kernelIndex = (byte)(1 + i + firstKernelIndex);
                    currentStopOffset = currentStopOffset + (powerSizes[i - 1] / sumOfPowerSizes) * (lastStopOffset - firstStopOffset);
                    stops.Add(new GradientStop() { Color = Color.FromArgb(255, kernelIndex, kernelIndex, kernelIndex), Offset = currentStopOffset });
                }

                stops = EnsureMinDiffBetweenPoints(stops);
            }

            return stops;
		}

		private static byte GetFocusAreaColor(bool applySmallBlurFocusArea)
		{
			return (byte)(applySmallBlurFocusArea ? 1 : 0);
		}

		private static double GetOffset(LinearGradient gradient, Point p)
		{

			var distnacePFromP1 = Distance(p, gradient.StartPoint);
			var distnaceP1FromP2 = Distance(gradient.StartPoint, gradient.EndPoint);

			var offset = distnacePFromP1 / distnaceP1FromP2;
			return offset;
		}

		private static double Distance(Point p1, Point p2)
		{
			return Math.Sqrt(Math.Pow(p1.X - p2.X, 2) + Math.Pow(p1.Y - p2.Y, 2));
		}


	}
}
