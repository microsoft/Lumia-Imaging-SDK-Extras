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
using System;
using System.Runtime.CompilerServices;
using System.Threading.Tasks;
using Windows.Foundation;

namespace Lumia.Imaging.Extras.Tests.Shared.Effects.DepthOfField
{
    [TestClass]
    public class LensTiltDepthOfFieldEffectTest
    {
        private readonly FocusBand VerticalBand = new FocusBand(new Point(0.4, 0.5), new Point(0.6, 0.5));
        private readonly FocusBand HorizontalBand = new FocusBand(new Point(0.5, 0.4), new Point(0.5, 0.6));
        private readonly FocusBand A45Band = new FocusBand(new Point(0.4, 0.4), new Point(0.6, 0.6));
        private readonly FocusBand A135Band = new FocusBand(new Point(0.6, 0.4), new Point(0.4, 0.6));

        [TestMethod]
        public async Task RenderVerticalTiltPreviewImage()
        {
            await RenderEffect(VerticalBand, DepthOfFieldQuality.Preview);
        }

        [TestMethod]
        public async Task RenderVerticalTiltFullQualityImage()
        {
            await RenderEffect(VerticalBand, DepthOfFieldQuality.Full);
        }

        [TestMethod]
        public async Task RenderHorizontalTiltPreviewImage()
        {
            await RenderEffect(HorizontalBand, DepthOfFieldQuality.Preview);
        }

        [TestMethod]
        public async Task RenderHorizontalTiltFullQualityImage()
        {
            await RenderEffect(HorizontalBand, DepthOfFieldQuality.Full);
        }

        [TestMethod]
        public async Task RenderA45TiltPreviewImage()
        {
            await RenderEffect(A45Band, DepthOfFieldQuality.Preview);
        }

        [TestMethod]
        public async Task RenderA45TiltFullQualityImage()
        {
            await RenderEffect(A45Band, DepthOfFieldQuality.Full);
        }

        [TestMethod]
        public async Task RenderA135TiltPreviewImage()
        {
            await RenderEffect(A135Band, DepthOfFieldQuality.Preview);
        }

        [TestMethod]
        public async Task RenderA135TiltFullQualityImage()
        {
            await RenderEffect(A135Band, DepthOfFieldQuality.Full);
        }

        private static async Task RenderEffect(FocusBand focusBand, DepthOfFieldQuality quality, [CallerMemberName] string testName = "")
        {
            using (var source = KnownImages.Nurse.ImageSource)
            using (var effect = new LensTiltDepthOfFieldEffect(source, focusBand, 1.0, 1.0, quality))
            using (var renderer = new JpegRenderer(effect))
            {
                var buffer = await renderer.RenderAsync();

                ImageResults.Instance.SaveToPicturesLibrary(buffer, testName);
            }
        }
    }
}
