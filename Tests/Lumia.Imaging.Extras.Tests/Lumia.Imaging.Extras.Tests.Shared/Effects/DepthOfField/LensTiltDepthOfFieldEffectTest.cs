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
	public class LensTiltDepthOfFieldEffectTest
	{

		[TestMethod]
		public async Task RenderStrength1()
		{
			using (var source = await KnownImages.CPH.GetImageSourceAsync())
            using (var effect = new LensTiltDepthOfFieldEffect(source, new FocusBand(new Point(0.5, 0.4), new Point(0.5, 0.6)), 1.0, 1.0, DepthOfFieldQuality.Full) { StrengthAtEdge1 = 1.0, StrengthAtEdge2 = 1.0 })
			using (var renderer = new JpegRenderer(effect))
			{
				var buffer = await renderer.RenderAsync();
				await FileUtilities.SaveToPicturesLibraryAsync(buffer, "CPH_LensTiltFocus_1.jpg");

			}
		}

        [TestMethod]
        public async Task RenderVariousStrengths()
        {
            using (var source = /* new ColorImageSource(new Size(3072, 1728), Color.FromArgb(255, 1, 1, 1))) */ await KnownImages.CPH.GetImageSourceAsync())
            using (var effect = new LensTiltDepthOfFieldEffect(source, new FocusBand(new Point(0.5, 0.4), new Point(0.5, 0.6)), 1.0, 1.0, DepthOfFieldQuality.Full))
            using (var renderer = new JpegRenderer(effect))
            {
                foreach (var strength1 in new double[] { /* 0.01, 0.05, */ 0.0, 0.1, 0.2, 0.5, 0.75, 1.0 })
                    foreach (var strength2 in new double[] { /* 0.01, 0.05, */ 0.0, 0.1, 0.2, 0.5, 0.75, 1.0 })
                {
                    effect.StrengthAtEdge1 = strength1;
                    effect.StrengthAtEdge2 = strength2;
                    var buffer = await renderer.RenderAsync();
                    await FileUtilities.SaveToPicturesLibraryAsync(buffer, String.Format("CPH_LensTiltFocus_{0}_{1}.jpg", effect.StrengthAtEdge1, effect.StrengthAtEdge2));
                }

            }
        }

        [TestMethod]
        public async Task RenderVariousStrengthsAndScales()
        {
            using (var source = /* new ColorImageSource(new Size(3072, 1728), Color.FromArgb(255, 1, 1, 1))) */ await KnownImages.CPH.GetImageSourceAsync())
            using (var filterEffect = new FilterEffect(source))
            using (var effect = new LensTiltDepthOfFieldEffect(source, new FocusBand(new Point(0.5, 0.4), new Point(0.5, 0.6)), 1.0, 1.0, DepthOfFieldQuality.Full))
            using (var renderer = new JpegRenderer(effect))
            {
                foreach (var scale in new double[] { 1.0, 0.5, 0.2 })
                {
                    foreach (var strength1 in new double[] { /* 0.01, 0.05, */ 0.0, 0.1, 0.2, 0.5, 0.75, 1.0 })
                        foreach (var strength2 in new double[] { /* 0.01, 0.05, */ 0.0, 0.1, 0.2, 0.5, 0.75, 1.0 })
                    {
                        filterEffect.Filters = new[] { new ScaleFilter(scale) };
                        effect.StrengthAtEdge1 = strength1;
                        effect.StrengthAtEdge2 = strength2;
                        var buffer = await renderer.RenderAsync();
                        await FileUtilities.SaveToPicturesLibraryAsync(buffer, String.Format("CPH_LensTiltFocus_{0}_{1}_{2}.jpg", scale, strength1, strength2));
                    }
                }

            }
        }

        [TestMethod]
        public async Task RenderPreviewAtVariousStrengths()
        {
            using (var source = await KnownImages.CPH.GetImageSourceAsync())
            using (var effect = new LensTiltDepthOfFieldEffect(source, new FocusBand(new Point(0.5, 0.4), new Point(0.5, 0.6)), 1.0, 1.0, DepthOfFieldQuality.Full))
            using (var renderer = new JpegRenderer(effect))
            {
                foreach (var strength1 in new double[] { /* 0.01, 0.05, */ 0.0, 0.1, 0.2, 0.5, 0.75, 1.0 })
                    foreach (var strength2 in new double[] { /* 0.01, 0.05, */ 0.0, 0.1, 0.2, 0.5, 0.75, 1.0 })
                {
                    effect.StrengthAtEdge1 = strength1;
                    effect.StrengthAtEdge2 = strength2;
                    var buffer = await renderer.RenderAsync();
                    await FileUtilities.SaveToPicturesLibraryAsync(buffer, String.Format("CPH_LensTiltFocus_Preview_{0}_{1}.jpg", effect.StrengthAtEdge1, effect.StrengthAtEdge2));
                }

            }
        }

	}
}