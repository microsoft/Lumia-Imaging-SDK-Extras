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

using System;
using System.Threading.Tasks;
using Microsoft.VisualStudio.TestPlatform.UnitTestFramework;
using Lumia.Imaging;
using Lumia.Imaging.Extras.Effects.DepthOfField;
using Windows.Foundation;
using System.Runtime.CompilerServices;
using Windows.UI;

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
            using (var source = await KnownImages.Nurse.GetImageSourceAsync())
            using (var effect = new LensTiltDepthOfFieldEffect(source, focusBand, 1.0, 1.0, quality))
            using (var renderer = new JpegRenderer(effect))
            {
                var buffer = await renderer.RenderAsync();

                await FileUtilities.SaveToPicturesLibraryAsync(buffer, "LensTiltDepthOfFieldEffectTest_" + testName + ".jpg");
            }
        }

        [TestMethod]
        public async Task RenderWithFullFocusAreaSuccedes()
        {
            var verticalFullBand = new FocusBand(new Point(0.0, 0.5), new Point(1.0, 0.5));
            await RenderEffect(verticalFullBand, DepthOfFieldQuality.Full);

            var horizontalFullBand = new FocusBand(new Point(0.5, 0.0), new Point(0.5, 1.0));
            await RenderEffect(horizontalFullBand, DepthOfFieldQuality.Full);
        }

        [TestMethod]
        public async Task RenderWithZeroWidthFocusAreaSuccedes()
        {
            var verticalZeroBand = new FocusBand(new Point(0.3, 0.5), new Point(0.3, 0.5));
            await RenderEffect(verticalZeroBand, DepthOfFieldQuality.Full);

            var horizontalZeroBand = new FocusBand(new Point(0.5, 0.7), new Point(0.5, 0.7));
            await RenderEffect(horizontalZeroBand, DepthOfFieldQuality.Full);
        }
    }
}
