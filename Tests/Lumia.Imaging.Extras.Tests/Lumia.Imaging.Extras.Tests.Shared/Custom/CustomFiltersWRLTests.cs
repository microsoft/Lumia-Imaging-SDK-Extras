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

using CustomWRL;
using Microsoft.VisualStudio.TestPlatform.UnitTestFramework;
using System;
using System.Runtime.InteropServices.WindowsRuntime;
using System.Threading.Tasks;
using Windows.Foundation;
using Windows.UI;

namespace Lumia.Imaging.Extras.Tests.Custom
{
    [TestClass]
    public class CustomFiltersWRLTests
    {
        [TestMethod]
        public void EmptyCustomFilterCanBeCreated()
        {
            new EmptyCustomFilter();
        }

        [TestMethod]
        public void RgbGainCustomFilterCanBeCreated()
        {
            new RgbGainCustomFilter();
        }

        [TestMethod]
        public async Task EmptyCustomFilterCanBeUsedInRendering()
        {
            var customFilter = new EmptyCustomFilter();

            using (var source = new ColorImageSource(new Size(100, 100), Color.FromArgb(255, 128, 128, 128)))
            using (var filterEffect = new FilterEffect(source) { Filters = new[] { customFilter } })
            using (var bitmapRenderer = new BitmapRenderer(filterEffect))
            {
                var bitmap = await bitmapRenderer.RenderAsync();
                var pixelArray = bitmap.Buffers[0].Buffer.ToArray();

                Assert.AreEqual(128, pixelArray[0]);
                Assert.AreEqual(128, pixelArray[1]);
                Assert.AreEqual(128, pixelArray[2]);
                Assert.AreEqual(255, pixelArray[3]);
            }
        }

        [TestMethod]
        public async Task RgbGainCustomFilterCanBeUsedInRendering()
        {
            var customFilter = new RgbGainCustomFilter()
            {
                RedLevel = 1.5f,
                GreenLevel = 1.0f,
                BlueLevel = 0.75f
            };

            using (var source = new ColorImageSource(new Size(100, 100), Color.FromArgb(255, 128, 128, 128)))
            using (var filterEffect = new FilterEffect(source) { Filters = new[] { customFilter } })
            using (var bitmapRenderer = new BitmapRenderer(filterEffect))
            {
                var bitmap = await bitmapRenderer.RenderAsync();
                var pixelArray = bitmap.Buffers[0].Buffer.ToArray();

                Assert.AreEqual(96, pixelArray[0]);
                Assert.AreEqual(128, pixelArray[1]);
                Assert.AreEqual(193, pixelArray[2]);
                Assert.AreEqual(255, pixelArray[3]);
            }
        }
    }
}
