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

using Lumia.Imaging.Compositing;
using Lumia.Imaging.Extras.Effects.DepthOfField;
using Microsoft.VisualStudio.TestPlatform.UnitTestFramework;
using System;
using System.Threading.Tasks;
using Windows.Foundation;
using Windows.UI;

namespace Lumia.Imaging.Extras.Tests.Shared.Effects.DepthOfField
{
    [TestClass]
    public class FocusObjectDepthOfFieldEffectTest
    {
        [TestMethod]
        public async Task RenderPreviewImage()
        {
            using (var source = KnownImages.Nurse.ImageSource)
            using (var annotations = KnownImages.NurseScribbles.ImageSource)
            using (var segmenter = new InteractiveForegroundSegmenter(source, Color.FromArgb(255, 255, 255, 255), Color.FromArgb(255, 255, 255, 0), annotations))
            using (var effect = new FocusObjectDepthOfFieldEffect(source, segmenter, new Point(0, 0.8), new Point(1, 0.8), 1.0, 1.0, DepthOfFieldQuality.Preview))
            using (var renderer = new JpegRenderer(effect))
            {
                var buffer = await renderer.RenderAsync().AsTask().ConfigureAwait(false);

                ImageResults.Instance.SaveToPicturesLibrary(buffer);
            }
        }

        [TestMethod]
        public async Task RenderFullQualityImage()
        {
            using (var source = KnownImages.Nurse.ImageSource)
            using (var annotations = KnownImages.NurseScribbles.ImageSource)
            using (var segmenter = new InteractiveForegroundSegmenter(source, Color.FromArgb(255, 255, 255, 255), Color.FromArgb(255, 255, 255, 0), annotations))
            using (var effect = new FocusObjectDepthOfFieldEffect(source, segmenter, new Point(0, 0.8), new Point(1, 0.8), 1.0, 1.0, DepthOfFieldQuality.Full))
            using (var renderer = new JpegRenderer(effect))
            {
                var buffer = await renderer.RenderAsync();

                ImageResults.Instance.SaveToPicturesLibrary(buffer);
            }
        }
    }
}
