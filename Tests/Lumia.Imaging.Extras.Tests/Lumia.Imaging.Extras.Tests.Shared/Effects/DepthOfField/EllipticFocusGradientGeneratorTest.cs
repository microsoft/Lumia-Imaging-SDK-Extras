/*
* Copyright (c) 2014 Microsoft Mobile
* 
* Permission is hereby granted, free of charge, to any person obtaining a copy
* of this software and associated documentation files (the "Software"), to deal
* in the Software without restriction, including without limitation the rights
* to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
* copies of the Software, and to permit persons to whom the Software is
* furnished to do so, subject to the following conditions:
* The above copyright notice and this permission notice shall be included in
* all copies or substantial portions of the Software.
* 
* THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
* IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
* FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
* AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
* LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
* OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN
* THE SOFTWARE.
*/

using Lumia.Imaging.Extras.Effects.DepthOfField;
using Microsoft.VisualStudio.TestPlatform.UnitTestFramework;
using System.Threading.Tasks;
using Windows.Foundation;
using System;

namespace Lumia.Imaging.Extras.Tests.Effects.DepthOfField
{

	[TestClass]
	public class EllipticFocusGradientGeneratorTest
	{

		[TestMethod]
		public void LastStopHasCorrectColorForManyKernels()
		{
			var gradient = EllipticFocusGradientGenerator.GenerateGradient(new FocusEllipse(0.5, 0.5, 0.25, 0.25), new MockKernelGenerator(25));
			Assert.AreEqual(25, gradient.Stops[gradient.Stops.Length - 1].Color.R);
		}

		[TestMethod]
		public void LastStopHasCorrectColorForSingleKernel()
		{
			var gradient = EllipticFocusGradientGenerator.GenerateGradient(new FocusEllipse(0.5, 0.5, 0.25, 0.25), new MockKernelGenerator(1));
			Assert.AreEqual(1, gradient.Stops[gradient.Stops.Length - 1].Color.R);
		}

		[TestMethod]
		public void NoGradientIsReturnedForZeroKernels()
		{
			var gradient = EllipticFocusGradientGenerator.GenerateGradient(new FocusEllipse(0.5, 0.5, 0.25, 0.25), new MockKernelGenerator(0));
			Assert.IsNull(gradient);
		}

		[TestMethod]
		public void NoGradientIsReturnedForNullKernels()
		{
			var gradient = EllipticFocusGradientGenerator.GenerateGradient(new FocusEllipse(0.5, 0.5, 0.25, 0.25), new MockKernelGenerator(-1));
			Assert.IsNull(gradient);
		}

		[TestMethod]
		public async Task RenderGradient()
		{
			var sourceSize = new Size(3072.0, 1728.0);
			var kernelGenerator = new HighQualityKernelGenerator(sourceSize, 0.1);
			var gradient = EllipticFocusGradientGenerator.GenerateGradient(new FocusEllipse(1640.0 / 3072.0, 615.0 / 1728.0, 200.0 / 3072.0, 200.0 / 1728.0), kernelGenerator);

			using (var source = new GradientImageSource(sourceSize, gradient))
			using (var bitmapRenderer = new BitmapRenderer(source, ColorMode.Gray8))
			{
				var bitmap = await bitmapRenderer.RenderAsync();

				using (var bitmapSource = new BitmapImageSource(bitmap))
				using (var renderer = new JpegRenderer(bitmapSource))
				{
					renderer.Quality = 1.0;
					var buffer = await renderer.RenderAsync();
					await FileUtilities.SaveToPicturesLibraryAsync(buffer, String.Format("EllipticFocusGradient_{0}.jpg", kernelGenerator.Strength));
				}
			}
		}

		[TestMethod]
		public async Task RenderGradientsAtVariousStrength()
		{
			var sourceSize = new Size(3072.0, 1728.0);
			var kernelGenerator = new HighQualityKernelGenerator(sourceSize, 0.1);

			foreach (var strength in new double[] { 0.01, 0.05, 0.1, 0.2, 0.5, 0.75, 1.0 })
			{
				kernelGenerator.Strength = strength;
				var gradient = EllipticFocusGradientGenerator.GenerateGradient(new FocusEllipse(1640.0 / 3072.0, 615.0 / 1728.0, 200.0 / 3072.0, 200.0 / 1728.0), kernelGenerator);

				using (var source = new GradientImageSource(sourceSize, gradient))
				using (var renderer = new JpegRenderer(source))
				{
					renderer.Quality = 1.0;
					var buffer = await renderer.RenderAsync();
					await FileUtilities.SaveToPicturesLibraryAsync(buffer, String.Format("EllipticFocusGradient_{0}.jpg", kernelGenerator.Strength));

				}
			}
		}
	}
}