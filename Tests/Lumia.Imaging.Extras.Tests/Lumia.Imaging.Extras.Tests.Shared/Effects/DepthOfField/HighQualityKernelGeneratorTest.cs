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
using Windows.Foundation;

namespace Lumia.Imaging.Extras.Tests.Effects.DepthOfField
{
	[TestClass]
	public class HighQualityKernelGeneratorTest
	{

		[TestMethod]
		public void LargeSizeHighStrengthGeneratesManyKernels()
		{
			var kernelGenerator = new HighQualityKernelGenerator(new Size(4096, 4096), 1.0);
			var kernels = kernelGenerator.GetKernels();
			Assert.AreEqual(25, kernels.Count);
		}

		[TestMethod]
		public void LargeSizeLowStrengthGeneratesFewerKernels()
		{
			var kernelGenerator = new HighQualityKernelGenerator(new Size(4096, 4096), 0.1);
			var kernels = kernelGenerator.GetKernels();
			Assert.IsTrue(kernels.Count < 25);
		}

		[TestMethod]
		public void SmallSizeHighStrengthGeneratesFewKernels()
		{
			var kernelGenerator = new HighQualityKernelGenerator(new Size(50, 50), 1.0);
			var kernels = kernelGenerator.GetKernels();

			Assert.IsTrue(kernels.Count < 20);
		}

		[TestMethod]
		public void SmallSizeLowStrengthGeneratesNoKernels()
		{
			var kernelGenerator = new HighQualityKernelGenerator(new Size(50, 50), 0.1);
			var kernels = kernelGenerator.GetKernels();

			Assert.AreEqual(0, kernels.Count);
		}

		[TestMethod]
		public void DifferentSizesGeneratesProportionalKernelSizes()
		{
			var largeKernelGenerator = new HighQualityKernelGenerator(new Size(1000, 1000), 1.0);
			var largeKernels = largeKernelGenerator.GetKernels();

			var smallKernelGenerator = new HighQualityKernelGenerator(new Size(500, 500), 1.0);
			var smallKernels = smallKernelGenerator.GetKernels();

			//Assert.AreEqual(0, kernels.Count);
		}
	}
}
