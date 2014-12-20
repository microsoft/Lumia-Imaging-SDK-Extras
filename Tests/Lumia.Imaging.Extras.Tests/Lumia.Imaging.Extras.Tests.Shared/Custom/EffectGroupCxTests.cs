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

using CustomCx;
using Lumia.Imaging.Compositing;
using Microsoft.VisualStudio.TestPlatform.UnitTestFramework;
using System;
using System.Threading.Tasks;

namespace Lumia.Imaging.Extras.Tests.Custom
{
    [TestClass]
    public class EffectGroupCxTests
    {
        [TestMethod]
        public void CreateEmptyEffectGroup()
        {
            new EmptyEffectGroup();
        }

        [TestMethod]
        public async Task RenderEmptyEffectGroup()
        {
            using (var source = KnownImages.MikikoLynn.ImageSource)
            using (var effectGroup = new EmptyEffectGroup(source))
            using (var renderer = new JpegRenderer(effectGroup))
            {
                var buffer = await renderer.RenderAsync();
                ImageResults.Instance.SaveToPicturesLibrary(buffer);
            }
        }

        [TestMethod]
        public void CreateHighpassEffectGroup()
        {
            new HighpassEffectGroup(10, true, 3);
        }

        [TestMethod]
        public async Task RenderHighpassEffectGroup()
        {
            using (var source = KnownImages.MikikoLynn.ImageSource)
            using (var highpassEffect = new HighpassEffectGroup(8, false, 1) { Source = source })
            using (var renderer = new JpegRenderer(highpassEffect))
            {
                var buffer = await renderer.RenderAsync();
                ImageResults.Instance.SaveToPicturesLibrary(buffer);
            }
        }

        [TestMethod]
        public async Task RenderHighpassEffectGroupWithGrayscaleEnabled()
        {
            using (var source = KnownImages.MikikoLynn.ImageSource)
            using (var highpassEffect = new HighpassEffectGroup(8, true, 1) { Source = source })
            using (var renderer = new JpegRenderer(highpassEffect))
            {
                var buffer = await renderer.RenderAsync();
                ImageResults.Instance.SaveToPicturesLibrary(buffer);
            }
        }

        [TestMethod]
        public async Task RenderHighpassEffectGroupAndAmplifyEdges()
        {
            using (var source = KnownImages.MikikoLynn.ImageSource)
            using (var highpassEffect = new HighpassEffectGroup(14, true, 2) { Source = source })
            using (var sourceWithAmplifiedEdges = new BlendEffect(source, highpassEffect, BlendFunction.Hardlight, 0.4))
            using (var renderer = new JpegRenderer(sourceWithAmplifiedEdges))
            {
                DiagnosticsReport.BeginProbe(sourceWithAmplifiedEdges);

                var buffer = await renderer.RenderAsync();

                // This should hit the inline blending (fast) path, make sure it did.
                var blendEffectReport = await DiagnosticsReport.EndProbeAsync(sourceWithAmplifiedEdges);
                Assert.AreEqual(1, (int)blendEffectReport.Properties["inlineblend_count"]);

                ImageResults.Instance.SaveToPicturesLibrary(buffer);
            }
        }
    }
}
