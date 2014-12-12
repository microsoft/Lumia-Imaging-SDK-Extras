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

using Microsoft.VisualStudio.TestPlatform.UnitTestFramework;
using System;
using System.Collections.Generic;
using System.Linq;
using System.Runtime.InteropServices.WindowsRuntime;
using System.Text;
using System.Threading.Tasks;
using Windows.Foundation;
using Windows.UI;
using Lumia.Imaging.Extras.Layers;
using Lumia.Imaging.Adjustments;
using Lumia.Imaging.Compositing;
using Lumia.Imaging.Transforms;

namespace Lumia.Imaging.Extras.Tests.Layers
{
    [TestClass]
    public class LayersListTest
    {
        private List<IImageProvider> GetChain(IImageProvider tail)
        {
            List<IImageProvider> chain = new List<IImageProvider>();

            if (tail == null)
                return chain;

            chain.Add(tail);
            var imageConsumer = tail as IImageConsumer;

            while (imageConsumer != null)
            {
                var imageProvider = imageConsumer.Source;

                if (imageProvider == null)
                    break;

                chain.Add(imageProvider);

                imageConsumer = imageProvider as IImageConsumer;
            }

            chain.Reverse();

            return chain;
        }

        [TestMethod]
        public void LayerListCanBeCreated()
        {
            var layerList = new LayerList();
        }

        [TestMethod]
        public void LayerListCanBeCreatedWithLayers()
        {
            var layerList = new LayerList(new Layer[]
            {
                new Layer(LayerStyle.Add(0.5), context => new ColorImageSource(context.BackgroundLayer.ImageSize, Color.FromArgb(255,128,128,128))),
                new AdjustmentLayer(LayerStyle.Normal(), new FilterEffect { Filters = new IFilter[]{new BrightnessFilter(0.9)}})
            });
        }

        [TestMethod]
        public void LayerListCanBeCreatedWithBackgroundImage()
        {
            var backgroundImage = new ColorImageSource(new Size(100, 100), Colors.AliceBlue);
            var layerList = new LayerList(backgroundImage, backgroundImage.Size);
        }

        [TestMethod]
        public void LayerListCanBeCreatedWithBackgroundImageAndLayers()
        {
            var backgroundImage = new ColorImageSource(new Size(100, 100), Colors.AliceBlue);
            var layerList = new LayerList(backgroundImage, backgroundImage.Size, new Layer[]
            {
                new Layer(LayerStyle.Add(0.5), context => new ColorImageSource(context.BackgroundLayer.ImageSize, Color.FromArgb(255,128,128,128))),
                new AdjustmentLayer(LayerStyle.Normal(), new FilterEffect { Filters = new IFilter[]{new BrightnessFilter(0.9)}})
            });
        }

        [TestMethod]
        public void LayersCanBeAddedWithAddRange()
        {
            var layerList = new LayerList();

            layerList.AddRange(new[]
            {
                new Layer(LayerStyle.Add(0.5), context => new ColorImageSource(context.BackgroundLayer.ImageSize, Color.FromArgb(255,128,128,128))),
                new AdjustmentLayer(LayerStyle.Normal(), new FilterEffect { Filters = new IFilter[]{new BrightnessFilter(0.9)}})
            });
        }

        [TestMethod]
        public async Task RenderWithBackgroundPassedInConstructor()
        {
            var backgroundImage = new ColorImageSource(new Size(100, 100), Color.FromArgb(255,128,128,128));
            var layerList = new LayerList(backgroundImage, backgroundImage.Size, new Layer[]
            {
                new Layer(LayerStyle.Add(), context => new ColorImageSource(context.BackgroundLayer.ImageSize, Color.FromArgb(255,32,16,8)))
            });

            var layersEffect = await layerList.ToImageProvider().AsTask();

            var renderedBitmap = await layersEffect.GetBitmapAsync(null, OutputOption.PreserveAspectRatio);

            var pixels = renderedBitmap.Buffers[0].Buffer.ToArray();
            Assert.AreEqual(135, pixels[0]);
            Assert.AreEqual(143, pixels[1]);
            Assert.AreEqual(160, pixels[2]);
            Assert.AreEqual(255, pixels[3]);
        }

        [TestMethod]
        public async Task RenderWithBackgroundPassedInToImageProvider()
        {
            var layerList = new LayerList(new Layer[]
            {
                new Layer(LayerStyle.Add(), context => new ColorImageSource(context.BackgroundLayer.ImageSize, Color.FromArgb(255,32,16,8)))
            });

            var backgroundImage = new ColorImageSource(new Size(100, 100), Color.FromArgb(255, 128, 128, 128));
            var layersEffect = await layerList.ToImageProvider(backgroundImage, backgroundImage.Size).AsTask();

            var renderedBitmap = await layersEffect.GetBitmapAsync(null, OutputOption.PreserveAspectRatio);

            Assert.AreEqual(new Size(100, 100), renderedBitmap.Dimensions);

            var pixels = renderedBitmap.Buffers[0].Buffer.ToArray();
            Assert.AreEqual(135, pixels[0]);
            Assert.AreEqual(143, pixels[1]);
            Assert.AreEqual(160, pixels[2]);
            Assert.AreEqual(255, pixels[3]);
        }

        [TestMethod]
        public async Task RenderWithBackgroundAndDifferentRenderSizePassedInToImageProvider()
        {
            var layerList = new LayerList(new Layer[]
            {
                new Layer(LayerStyle.Add(), context => new ColorImageSource(context.BackgroundLayer.ImageSize, Color.FromArgb(255,32,16,8)))
            });

            var backgroundImage = new ColorImageSource(new Size(100, 100), Color.FromArgb(255, 128, 128, 128));
            var layersEffect = await layerList.ToImageProvider(backgroundImage, backgroundImage.Size, new Size(50,50)).AsTask();

            var bitmap = new Bitmap(new Size(50,50), ColorMode.Bgra8888);
            await layersEffect.GetBitmapAsync(bitmap, OutputOption.PreserveAspectRatio);

            var pixels = bitmap.Buffers[0].Buffer.ToArray();
            Assert.AreEqual(135, pixels[0]);
            Assert.AreEqual(143, pixels[1]);
            Assert.AreEqual(160, pixels[2]);
            Assert.AreEqual(255, pixels[3]);
        }

        [TestMethod]
        public async Task ImageProviderTopology()
        {
            var backgroundImage = new ColorImageSource(new Size(100, 100), Color.FromArgb(255, 128, 128, 128));
            var layerList = new LayerList(backgroundImage, backgroundImage.Size, new Layer[]
            {
                new Layer(LayerStyle.Multiply(), context => new ColorImageSource(context.BackgroundLayer.ImageSize, Color.FromArgb(255,32,16,8))),
                new AdjustmentLayer(LayerStyle.Screen(0.5), new ContrastFilter(0.7)),
                new AdjustmentLayer(LayerStyle.Normal(), new BrightnessFilter(0.7)),
                new AdjustmentLayer(LayerStyle.Normal(), new GrayscaleFilter())
            });

            var layersEffect = await layerList.ToImageProvider(new Size(50,50)).AsTask();

            var chain = GetChain(layersEffect);


            Assert.AreEqual(5, chain.Count);

            Assert.AreSame(backgroundImage, chain.FirstOrDefault());
            
            Assert.IsInstanceOfType(chain[1],typeof(BlendEffect)); // Layer with ColorImageSource
            Assert.IsInstanceOfType(((BlendEffect)chain[1]).ForegroundSource, typeof(ColorImageSource));
            
            Assert.IsInstanceOfType(chain[2], typeof(BlendEffect));
            Assert.IsInstanceOfType(((BlendEffect)chain[2]).ForegroundSource, typeof(FilterEffect));
            Assert.IsInstanceOfType(((FilterEffect)((BlendEffect)chain[2]).ForegroundSource).Filters.Single(), typeof(ContrastFilter));
            
            Assert.IsInstanceOfType(chain[3], typeof(FilterEffect));
            Assert.IsInstanceOfType(((FilterEffect)chain[3]).Filters.Single(), typeof(BrightnessFilter));

            Assert.IsInstanceOfType(chain[4], typeof(FilterEffect));
            Assert.IsInstanceOfType(((FilterEffect)chain[4]).Filters.Single(), typeof(GrayscaleFilter));

//            Assert.IsInstanceOfType(chain[5], typeof(FilterEffect));
  //          Assert.IsInstanceOfType(((FilterEffect)chain[5]).Filters.Single(), typeof(ReframingFilter));
        }

        [TestMethod]
        public async Task ImageProviderTopologyWithNesting()
        {
            var secondaryBackgroundImage = new ColorImageSource(new Size(100, 100), Colors.RosyBrown);
            var secondaryLayerList = new LayerList(secondaryBackgroundImage, secondaryBackgroundImage.Size, new Layer[]
            {
                new AdjustmentLayer(LayerStyle.Normal(), new BrightnessFilter(1.0), new ContrastFilter(0.1))
            });

            var backgroundImage = new ColorImageSource(new Size(100, 100), Color.FromArgb(255, 128, 128, 128));
            var layerList = new LayerList(backgroundImage, backgroundImage.Size, new Layer[]
            {
                new Layer(LayerStyle.Multiply(), context => new ColorImageSource(context.BackgroundLayer.ImageSize, Color.FromArgb(255,32,16,8))),
                new AdjustmentLayer(LayerStyle.Screen(0.5), new ContrastFilter(0.7)),
                new AdjustmentLayer(LayerStyle.Normal(), new BrightnessFilter(0.7)),
                new AdjustmentLayer(LayerStyle.Normal(), new GrayscaleFilter()),
                new AdjustmentLayer(LayerStyle.Overlay(), secondaryLayerList.ToImageProvider())
            });

            var layersEffect = await layerList.ToImageProvider(new Size(50, 50)).AsTask();

            var chain = GetChain(layersEffect);

            Assert.AreEqual(6, chain.Count);

            Assert.AreSame(backgroundImage, chain.FirstOrDefault());

            Assert.IsInstanceOfType(chain[1], typeof(BlendEffect)); // Layer with ColorImageSource
            Assert.IsInstanceOfType(((BlendEffect)chain[1]).ForegroundSource, typeof(ColorImageSource));

            Assert.IsInstanceOfType(chain[2], typeof(BlendEffect));
            Assert.IsInstanceOfType(((BlendEffect)chain[2]).ForegroundSource, typeof(FilterEffect));
            Assert.IsInstanceOfType(((FilterEffect)((BlendEffect)chain[2]).ForegroundSource).Filters.Single(), typeof(ContrastFilter));

            Assert.IsInstanceOfType(chain[3], typeof(FilterEffect));
            Assert.IsInstanceOfType(((FilterEffect)chain[3]).Filters.Single(), typeof(BrightnessFilter));

            Assert.IsInstanceOfType(chain[4], typeof(FilterEffect));
            Assert.IsInstanceOfType(((FilterEffect)chain[4]).Filters.Single(), typeof(GrayscaleFilter));

            Assert.IsInstanceOfType(chain[5], typeof(BlendEffect));
            Assert.IsInstanceOfType(((BlendEffect)chain[5]).ForegroundSource, typeof(FilterEffect));
            var filters = ((FilterEffect)((BlendEffect)chain[5]).ForegroundSource).Filters.ToArray();
            Assert.IsInstanceOfType(filters[0], typeof(BrightnessFilter));
            Assert.IsInstanceOfType(filters[1], typeof(ContrastFilter));

        }
    }
}
