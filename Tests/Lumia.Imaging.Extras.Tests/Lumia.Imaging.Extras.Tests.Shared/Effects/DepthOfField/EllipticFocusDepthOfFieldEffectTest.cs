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

namespace Lumia.Imaging.Extras.Tests.Shared.Effects.DepthOfField
{
    [TestClass]
    public class EllipticFocusDepthOfFieldEffectTest
    {
        [TestMethod]
        public async Task RenderPreviewImage()
        {
            using (var source = await KnownImages.Nurse.GetImageSourceAsync())
            using (var effect = new EllipticFocusDepthOfFieldEffect(source, new FocusEllipse(new Point(0.5, 0.3), new EllipseRadius(0.2, 0.2)), 1.0, DepthOfFieldQuality.Preview))
            using (var renderer = new JpegRenderer(effect))
            {
                var buffer = await renderer.RenderAsync();
                
                await FileUtilities.SaveToPicturesLibraryAsync(buffer, "EllipticFocusDepthOfFieldEffectTest_Preview.jpg");
            }
        }

        [TestMethod]
        public async Task RenderFullQualityImage()
        {
            using (var source = await KnownImages.Nurse.GetImageSourceAsync())
            using (var effect = new EllipticFocusDepthOfFieldEffect(source, new FocusEllipse(new Point(0.5, 0.3), new EllipseRadius(0.2, 0.2)), 1.0, DepthOfFieldQuality.Full))
            using (var renderer = new JpegRenderer(effect))
            {
                var buffer = await renderer.RenderAsync();

                await FileUtilities.SaveToPicturesLibraryAsync(buffer, "EllipticFocusDepthOfFieldEffectTest_Full.jpg");
            }
        }

        [TestMethod]
        public async Task RenderWithFullFocusAreaSuccedes()
        {
            using (var source = await KnownImages.Nurse.GetImageSourceAsync())
            using (var effect = new EllipticFocusDepthOfFieldEffect(source, new FocusEllipse(new Point(0.5, 0.3), new EllipseRadius(1.0, 1.0)), 1.0, DepthOfFieldQuality.Full))
            using (var renderer = new JpegRenderer(effect))
            {
                var buffer = await renderer.RenderAsync();

                await FileUtilities.SaveToPicturesLibraryAsync(buffer, "EllipticFocusDepthOfFieldEffectTest_FullFocusArea.jpg");
            }
        }

        [TestMethod]
        public async Task RenderWithZeroWidthFocusAreaSuccedes()
        {
            using (var source = await KnownImages.Nurse.GetImageSourceAsync())
            using (var effect = new EllipticFocusDepthOfFieldEffect(source, new FocusEllipse(new Point(0.5, 0.3), new EllipseRadius(0.0, 0.0)), 1.0, DepthOfFieldQuality.Full))
            using (var renderer = new JpegRenderer(effect))
            {
                var buffer = await renderer.RenderAsync();

                await FileUtilities.SaveToPicturesLibraryAsync(buffer, "EllipticFocusDepthOfFieldEffectTest_ZeroWidthFocusArea.jpg");
            }
        }
    }
}
