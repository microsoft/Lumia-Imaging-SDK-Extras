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

using Lumia.Imaging.Adjustments;
using Lumia.Imaging.Artistic;
using Lumia.Imaging.Compositing;
using Lumia.Imaging.Extras.Extensions;
using Lumia.Imaging.Transforms;
using Microsoft.VisualStudio.TestPlatform.UnitTestFramework;
using System.Diagnostics;
using System.Runtime.CompilerServices;
using System.Text.RegularExpressions;
using Windows.Foundation;
using Windows.UI;

namespace Lumia.Imaging.Extras.Tests.Extensions
{
    [TestClass]
    public class DotVisualizationExtensionsTests 
    {

        [TestMethod]
        public void CreatesLensBlurGraph()
        {
            var bitmap = new Bitmap(new Size(10, 10), ColorMode.Argb8888);
            using (var source = new BitmapImageSource(bitmap))
            using (var kernel1 = new BitmapImageSource(bitmap))
            using (var kernel2 = new BitmapImageSource(bitmap))
            using (var kernelMap = new BitmapImageSource(bitmap))
            using (var lensBlur = new LensBlurEffect(source, kernelMap))
            {
                lensBlur.Kernels = new ILensBlurKernel[] { new LensBlurCustomKernel(kernel1, 10), new LensBlurCustomKernel(kernel2, 20), new LensBlurPredefinedKernel(LensBlurPredefinedKernelShape.Circle, 10) };
                string result = CreateGraph(lensBlur);
                Assert.AreEqual(2, new Regex(Regex.Escape(NodeId(source))).Matches(result).Count);
                Assert.AreEqual(2, new Regex(Regex.Escape(NodeId(kernel1))).Matches(result).Count);
                Assert.AreEqual(2, new Regex(Regex.Escape(NodeId(kernel2))).Matches(result).Count);
                Assert.AreEqual(2, new Regex(Regex.Escape(NodeId(kernelMap))).Matches(result).Count);
                Assert.AreEqual(4, new Regex(Regex.Escape(NodeId(lensBlur))).Matches(result).Count);
            }
        }

        [TestMethod]
        public void CreatesSegmenterGraph()
        {
            var bitmap = new Bitmap(new Size(10, 10), ColorMode.Argb8888);
            using (var source = new BitmapImageSource(bitmap))
            using (var source2 = new BitmapImageSource(bitmap))
            using (var kernel2 = new BitmapImageSource(bitmap))
            using (var segmenter = new InteractiveForegroundSegmenter(source))
            {
                segmenter.AnnotationsSource = source2;
                string result = CreateGraph(segmenter);
                Assert.AreEqual(2, new Regex(Regex.Escape(NodeId(source))).Matches(result).Count);
                Assert.AreEqual(2, new Regex(Regex.Escape(NodeId(source2))).Matches(result).Count);
                Assert.AreEqual(0, new Regex(Regex.Escape(NodeId(kernel2))).Matches(result).Count);                
                Assert.AreEqual(3, new Regex(Regex.Escape(NodeId(segmenter))).Matches(result).Count);
            }
        }

        [TestMethod]
        public void CreatesAlignerGraph()
        {
            var bitmap = new Bitmap(new Size(10, 10), ColorMode.Argb8888);
            using (var source1 = new BitmapImageSource(bitmap))
            using (var source2 = new BitmapImageSource(bitmap))
            using (var source3 = new BitmapImageSource(bitmap))
            using (var aligner = new ImageAligner())
            {
                aligner.Sources = new[] { source1, source2, source3 };

                string result = aligner.ToDotString("CreatesAlignerGraph");
                Assert.AreEqual(2, new Regex(Regex.Escape(NodeId(source1))).Matches(result).Count);
                Assert.AreEqual(2, new Regex(Regex.Escape(NodeId(source2))).Matches(result).Count);
                Assert.AreEqual(4, new Regex(Regex.Escape(NodeId(aligner))).Matches(result).Count);
            }
        }

        [TestMethod]
        public void CreatesExtractorGraph()
        {
            var bitmap = new Bitmap(new Size(10, 10), ColorMode.Argb8888);
            using (var source = new BitmapImageSource(bitmap))
            using (var mask = new BitmapImageSource(bitmap))
            using (var extractor = new ObjectExtractor(source, mask))
            {

                string result = CreateGraph(extractor);
                Assert.AreEqual(2, new Regex(Regex.Escape(NodeId(source))).Matches(result).Count);
                Assert.AreEqual(2, new Regex(Regex.Escape(NodeId(mask))).Matches(result).Count);
                Assert.AreEqual(3, new Regex(Regex.Escape(NodeId(extractor))).Matches(result).Count);
            }
        }

        [TestMethod]
        public void CreatesFilterEffectGraph()
            {
            var bitmap = new Bitmap(new Size(10, 10), ColorMode.Argb8888);
            using (var source = new BitmapImageSource(bitmap))
            using (var effect = new FilterEffect(source))
            {
                effect.Filters = new IFilter[] { new BlurFilter(), new MoonlightFilter(), new HueSaturationFilter() };
                string result = CreateGraph(effect);
                Assert.AreEqual(2, new Regex(Regex.Escape(NodeId(source))).Matches(result).Count);                
                Assert.AreEqual(3, new Regex(Regex.Escape(NodeId(effect))).Matches(result).Count);
            }
        }

        [TestMethod]
        public void CreatesBlendEffectGraph()
        {
            var bitmap = new Bitmap(new Size(10, 10), ColorMode.Argb8888);
            using (var fgSource = new BitmapImageSource(bitmap))
            using (var bgSource= new BitmapImageSource(bitmap))
            using (var blendEffect = new BlendEffect(bgSource, fgSource))
            {
                string result = CreateGraph(blendEffect);
                Assert.AreEqual(2, new Regex(Regex.Escape(NodeId(fgSource))).Matches(result).Count);
                Assert.AreEqual(2, new Regex(Regex.Escape(NodeId(bgSource))).Matches(result).Count);
                Assert.AreEqual(3, new Regex(Regex.Escape(NodeId(blendEffect))).Matches(result).Count);
            }
        }

        [TestMethod]
        public void CreatesBlendEffectBlendingWithSelfGraph()
        {
            var bitmap = new Bitmap(new Size(10, 10), ColorMode.Argb8888);
            using (var source = new BitmapImageSource(bitmap))
            using (var blendEffect = new BlendEffect(source, source))
            {                
                string result = CreateGraph(blendEffect);
                Assert.AreEqual(3, new Regex(Regex.Escape(NodeId(source))).Matches(result).Count);
                Assert.AreEqual(3, new Regex(Regex.Escape(NodeId(blendEffect))).Matches(result).Count);
            }
        }

        [TestMethod]
        public void CreatesQuiteComplexGraph()
        {
            var bitmap = new Bitmap(new Size(10, 10), ColorMode.Argb8888);
            using (var source1 = new BitmapImageSource(bitmap))
            using (var source2 = new BitmapImageSource(bitmap))
            using (var source3 = new BitmapImageSource(bitmap))
            using (var source4 = new BitmapImageSource(bitmap))
            using (var segmenter = new InteractiveForegroundSegmenter(source1, Color.FromArgb(255, 255, 0, 0), Color.FromArgb(255, 0, 255, 0), source2))
            using (var bokeh = new LensBlurEffect(source1, segmenter))
            using (var blendEffect = new BlendEffect(bokeh, source3))
            {
                string result = CreateGraph(blendEffect);
                Assert.AreEqual(3, new Regex(Regex.Escape(NodeId(source1))).Matches(result).Count);
                Assert.AreEqual(2, new Regex(Regex.Escape(NodeId(source2))).Matches(result).Count);
                Assert.AreEqual(2, new Regex(Regex.Escape(NodeId(source3))).Matches(result).Count);
                Assert.AreEqual(0, new Regex(Regex.Escape(NodeId(source4))).Matches(result).Count);
                Assert.AreEqual(4, new Regex(Regex.Escape(NodeId(segmenter))).Matches(result).Count);
                Assert.AreEqual(5, new Regex(Regex.Escape(NodeId(bokeh))).Matches(result).Count);
                Assert.AreEqual(3, new Regex(Regex.Escape(NodeId(blendEffect))).Matches(result).Count);
            }
        }

        private string CreateGraph(IImageConsumer imageconsumer, [CallerMemberName] string caller = "")
        {
            string graph = imageconsumer.ToDotString(caller);
            Debug.WriteLine(graph);
            return graph;
        }

        private string NodeId(object obj)
        {
            return obj.GetType().Name + obj.GetHashCode();            
        }
    }
}