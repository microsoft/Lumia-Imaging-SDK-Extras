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
using System;
using Windows.Foundation;
using Windows.UI;
using Lumia.Imaging.Transforms;

namespace Lumia.Imaging.Extras.Tests.Effects.DepthOfField
{

	[TestClass]
	public class EllipticFocusDepthOfFieldEffectTest
	{

		[TestMethod]
		public async Task RenderStrength1()
		{
			using (var source = await KnownImages.CPH.GetImageSourceAsync())
			using (var effect = new EllipticFocusDepthOfFieldEffect(source, new FocusEllipse(1640.0 / 3072.0, 615.0 / 1728.0, 200.0 / 3072.0, 200.0 / 1728.0), 1.0, DepthOfFieldQuality.Full))
			using (var renderer = new JpegRenderer(effect))
			{
				var buffer = await renderer.RenderAsync();
				await FileUtilities.SaveToPicturesLibraryAsync(buffer, "CPH_EllipticFocus_1.jpg");

			}
		}

		[TestMethod]
		public async Task RenderVariousStrengths()
		{
			using (var source = /* new ColorImageSource(new Size(3072, 1728), Color.FromArgb(255, 1, 1, 1))) */ await KnownImages.CPH.GetImageSourceAsync())
			using (var effect = new EllipticFocusDepthOfFieldEffect(source, new FocusEllipse(1640.0 / 3072.0, 615.0 / 1728.0, 200.0 / 3072.0, 200.0 / 1728.0), 1.0, DepthOfFieldQuality.Full) { Strength = 0.1 })
			using (var renderer = new JpegRenderer(effect))
			{
                foreach (var strength in new double[] { /* 0.01, 0.05, */ 0.0, 0.1, 0.2, 0.5, 0.75, 1.0 })
				{
					effect.Strength = strength;
					var buffer = await renderer.RenderAsync();
					await FileUtilities.SaveToPicturesLibraryAsync(buffer, String.Format("CPH_EllipticFocus_{0}.jpg", effect.Strength));
				}

			}
		}

		[TestMethod]
		public async Task RenderVariousStrengthsAndScales()
		{
			using (var source = /* new ColorImageSource(new Size(3072, 1728), Color.FromArgb(255, 1, 1, 1))) */ await KnownImages.CPH.GetImageSourceAsync())
			using (var filterEffect = new FilterEffect(source))
			using (var depthOfFieldEffect = new EllipticFocusDepthOfFieldEffect(filterEffect, new FocusEllipse(1640.0 / 3072.0, 615.0 / 1728.0, 200.0 / 3072.0, 200.0 / 1728.0), 1.0, DepthOfFieldQuality.Full) { Strength = 0.1 })
			using (var renderer = new JpegRenderer(depthOfFieldEffect))
			{
				foreach (var scale in new double[] { 1.0, 0.5, 0.2 })
				{
                    foreach (var strength in new double[] { /* 0.01, 0.05, */ /* 0.1, 0.2, 0.5, 0.75, 1.0 */ 0.0, 0.25, 0.5, 0.75, 1.0 })
					{
						filterEffect.Filters = new[] { new ScaleFilter(scale) };
						depthOfFieldEffect.Strength = strength;
						var buffer = await renderer.RenderAsync();
						await FileUtilities.SaveToPicturesLibraryAsync(buffer, String.Format("CPH_EllipticFocus_{0}_{1}.jpg", scale, strength));
					}
				}

			}
		}

		[TestMethod]
		public async Task RenderPreviewAtVariousStrengths()
		{
			using (var source = await KnownImages.CPH.GetImageSourceAsync())
			using (var effect = new EllipticFocusDepthOfFieldEffect(source, new FocusEllipse(1640.0 / 3072.0, 615.0 / 1728.0, 200.0 / 3072.0, 200.0 / 1728.0), 1.0, DepthOfFieldQuality.Preview) { Strength = 0.1 })
			using (var renderer = new JpegRenderer(effect))
			{
                foreach (var strength in new double[] { /* 0.01, 0.05, */ 0.0, 0.1, 0.2, 0.5, 0.75, 1.0 })
				{
					effect.Strength = strength;
					var buffer = await renderer.RenderAsync();
					await FileUtilities.SaveToPicturesLibraryAsync(buffer, String.Format("CPH_EllipticFocus_Preview_{0}.jpg", effect.Strength));
				}

			}
		}

	}
}