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
using Lumia.Imaging.Compositing;

namespace Lumia.Imaging.Extras.Tests.Effects.DepthOfField
{

	[TestClass]
	public class FocusObjectDepthOfFieldEffectTest
	{

		[TestMethod]
		public async Task RenderStrength1()
		{
			using (var source = await KnownImages.CFace.GetImageSourceAsync())
			using (var objectScribbles = await KnownImages.CFaceScribble.GetImageSourceAsync())
			using (var segmenter = new InteractiveForegroundSegmenter(source, Color.FromArgb(255, 255, 255, 255), Color.FromArgb(255, 255, 238, 50), objectScribbles))
			using (var depthOfFieldEffect = new FocusObjectDepthOfFieldEffect(source, segmenter, new Point(0, 0.5), new Point(1, 0.5), 1.0, 1.0, DepthOfFieldQuality.Full))
			using (var renderer = new JpegRenderer(depthOfFieldEffect))
			{
				var buffer = await renderer.RenderAsync();
				await FileUtilities.SaveToPicturesLibraryAsync(buffer, "CFace_FocusObjectDoF.jpg");

				renderer.Source = segmenter;
				buffer = await renderer.RenderAsync();
				await FileUtilities.SaveToPicturesLibraryAsync(buffer, "CFace_FocusObjectDoF_Mask.jpg");

				renderer.Source = depthOfFieldEffect.MaskSource;
				buffer = await renderer.RenderAsync();
				await FileUtilities.SaveToPicturesLibraryAsync(buffer, "CFace_FocusObjectDoF_KernelMap.jpg");
			}
		}

        [TestMethod]
        public async Task RenderVariousStrengths()
        {
            using (var source = await KnownImages.CFace.GetImageSourceAsync())
            using (var objectScribbles = await KnownImages.CFaceScribble.GetImageSourceAsync())
            using (var segmenter = new InteractiveForegroundSegmenter(source, Color.FromArgb(255, 255, 255, 255), Color.FromArgb(255, 255, 238, 50), objectScribbles))
            using (var depthOfFieldEffect = new FocusObjectDepthOfFieldEffect(source, segmenter, new Point(0, 0), new Point(1, 0), 1.0, 1.0, DepthOfFieldQuality.Full))
            using (var renderer = new JpegRenderer(depthOfFieldEffect))
            {
                foreach (var strengthAbove in new double[] { /* 0.01, 0.05, */ 0.0/*, 0.1, 0.2, 0.5*/, 0.75, 1.0 })
                    foreach (var strengthBelow in new double[] { /* 0.01, 0.05, */ 0.0/*, 0.1, 0.2, 0.5*/, 0.75, 1.0 })
                {
                    depthOfFieldEffect.StrengthAboveHorizon = strengthAbove;
                    depthOfFieldEffect.StrengthBelowHorizon = strengthBelow;
                    var buffer = await renderer.RenderAsync();
                    await FileUtilities.SaveToPicturesLibraryAsync(buffer, String.Format("CFace_FocusObjectDoF_{0}_{1}.jpg", depthOfFieldEffect.StrengthAboveHorizon, depthOfFieldEffect.StrengthBelowHorizon));
                }

            }
        }

        [TestMethod]
        public async Task RenderVariousStrengthsAndScales()
        {
            using (var source = await KnownImages.CFace.GetImageSourceAsync())
            using (var objectScribbles = await KnownImages.CFaceScribble.GetImageSourceAsync())
            using (var segmenter = new InteractiveForegroundSegmenter(source, Color.FromArgb(255, 255, 255, 255), Color.FromArgb(255, 255, 238, 50), objectScribbles))
            using (var filterEffect = new FilterEffect(source))
            using (var depthOfFieldEffect = new FocusObjectDepthOfFieldEffect(filterEffect, segmenter, new Point(0, 0), new Point(1, 0), 1.0, 1.0, DepthOfFieldQuality.Full))
            using (var renderer = new JpegRenderer(depthOfFieldEffect))
            {
                foreach (var scale in new double[] { 1.0, 0.5, 0.2 })
                {
                    foreach (var strengthAbove in new double[] { /* 0.01, 0.05, */ 0.0, 0.1, 0.2, 0.5, 0.75, 1.0 })
                        foreach (var strengthBelow in new double[] { /* 0.01, 0.05, */ 0.0, 0.1, 0.2, 0.5, 0.75, 1.0 })
                    {
                        filterEffect.Filters = new[] { new ScaleFilter(scale) };
                        depthOfFieldEffect.StrengthAboveHorizon = strengthAbove;
                        depthOfFieldEffect.StrengthBelowHorizon = strengthBelow;
                        var buffer = await renderer.RenderAsync();
                        await FileUtilities.SaveToPicturesLibraryAsync(buffer, String.Format("CFace_FocusObjectDoF_{0}_{1}_{2}.jpg", scale, depthOfFieldEffect.StrengthAboveHorizon, depthOfFieldEffect.StrengthBelowHorizon));
                    }
                }

            }
        }

        [TestMethod]
        public async Task RenderPreviewAtVariousStrengths()
        {
            using (var source = await KnownImages.CFace.GetImageSourceAsync())
            using (var objectScribbles = await KnownImages.CFaceScribble.GetImageSourceAsync())
            using (var segmenter = new InteractiveForegroundSegmenter(source, Color.FromArgb(255, 255, 255, 255), Color.FromArgb(255, 255, 238, 50), objectScribbles))
            using (var depthOfFieldEffect = new FocusObjectDepthOfFieldEffect(source, segmenter, new Point(0, 0), new Point(1, 0), 1.0, 1.0, DepthOfFieldQuality.Full))
            using (var renderer = new JpegRenderer(depthOfFieldEffect))
            {
                foreach (var strengthAbove in new double[] { /* 0.01, 0.05, */ 0.0, 0.1, 0.2, 0.5, 0.75, 1.0 })
                    foreach (var strengthBelow in new double[] { /* 0.01, 0.05, */ 0.0, 0.1, 0.2, 0.5, 0.75, 1.0 })
                {
                    depthOfFieldEffect.StrengthAboveHorizon = strengthAbove;
                    depthOfFieldEffect.StrengthBelowHorizon = strengthBelow;
                    var buffer = await renderer.RenderAsync();
                    await FileUtilities.SaveToPicturesLibraryAsync(buffer, String.Format("CFace_FocusObjectDoF_Preview_{0}_{1}.jpg", depthOfFieldEffect.StrengthAboveHorizon, depthOfFieldEffect.StrengthBelowHorizon));
                }

            }
        }

	}
}