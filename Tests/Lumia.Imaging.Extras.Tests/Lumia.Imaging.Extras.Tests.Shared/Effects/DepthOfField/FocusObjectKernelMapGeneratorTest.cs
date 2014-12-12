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
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using Windows.Foundation;
using Windows.UI;

namespace Lumia.Imaging.Extras.Tests.Effects.DepthOfField
{
	[TestClass]
	public class FocusObjectKernelMapGeneratorTest
	{

		[TestMethod]
		public async Task RenderKernelMap()
		{
			var kernelGenerator1 = new HighQualityKernelGenerator(KnownImages.CFace.Size, 1.0);
			var kernelGenerator2 = new HighQualityKernelGenerator(KnownImages.CFace.Size, 1.0);
			var gradient = LensTiltFocusGradientGenerator.GenerateGradient(new FocusBand(new Point(0.5, 0.4), new Point(0.5, 0.6)), KnownImages.CFace.Size, kernelGenerator1, kernelGenerator2, false);
			var kernels = kernelGenerator1.GetKernels();
			kernels.AddRange(kernelGenerator2.GetKernels());

			using (var source = await KnownImages.CFace.GetImageSourceAsync())
			using (var objectScribbles = await KnownImages.CFaceScribble.GetImageSourceAsync())
			using (var segmenter = new InteractiveForegroundSegmenter(source, Color.FromArgb(255, 255, 255, 255), Color.FromArgb(255, 255, 238, 50), objectScribbles))
			using (var renderer = new JpegRenderer() )
			{
				var kernelMapSource = FocusObjectKernelMapGenerator.Generate(segmenter, gradient, KnownImages.CFace.Size, kernels);
				renderer.Source = kernelMapSource;
				var buffer = await renderer.RenderAsync();
				await FileUtilities.SaveToPicturesLibraryAsync(buffer, "KernelMap.jpg");
			}

			
		}
	}
}
