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
using Lumia.Imaging.Extras.ImageSources;
using Lumia.Imaging.Adjustments;
using Lumia.Imaging.Artistic;

namespace Lumia.Imaging.Extras.Tests.Shared.ImageProviders
{
	[TestClass]
	public class RepeatedTileImageSourceTest
	{
		[TestMethod]
		public async Task RenderProvider()
		{
			var tile = KnownImages.MikikoLynn;

			using (var tileSource = tile.ImageSource)
			using (var source = new RepeatedTileImageSource(new Size(2048, 2048), tileSource, tile.Size))
			using (var renderer = new JpegRenderer(source))
			{
				var buffer = await renderer.RenderAsync();

				ImageResults.Instance.SaveToPicturesLibrary(buffer, "RepeatedTileBasicRender.jpg");
			}
		}

		[TestMethod]
		public async Task RenderProviderAndEffect()
		{
			var tile = KnownImages.MikikoLynn;

			using (var tileSource = tile.ImageSource)
			using (var source = new RepeatedTileImageSource(new Size(3048, 3048), tileSource, tile.Size))
			using (var filterEffect = new FilterEffect(source))
			using (var renderer = new JpegRenderer(filterEffect))
			{
				filterEffect.Filters = new[] { new GrayscaleFilter() };

				var buffer = await renderer.RenderAsync();

				ImageResults.Instance.SaveToPicturesLibrary(buffer, "RepeatedTileGrayscaleRender.jpg");
			}
		}

		[TestMethod]
		public async Task RenderProviderCreatedFromTileSource()
		{
			var tile = KnownImages.MikikoLynn;

			using (var tileSource = tile.ImageSource)
			using (var source = await RepeatedTileImageSource.CreateFromTileSource(new Size(4048, 4048), tileSource))
			using (var filterEffect = new FilterEffect(source))
			using (var renderer = new JpegRenderer(filterEffect))
			{
				filterEffect.Filters = new[] { new CartoonFilter() };

				var buffer = await renderer.RenderAsync();

				ImageResults.Instance.SaveToPicturesLibrary(buffer, "RepeatedTileCartoonRender.jpg");
			}
		}
	}
}
