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
using Windows.UI;
using System.Linq;

namespace Lumia.Imaging.Extras.Tests.Effects.DepthOfField
{
    [TestClass]
    public class LensTiltFocusGradientGeneratorTest
    {
		[TestMethod]
		public void BlockFocusGeneratorReturnsValidGradient()
		{
			FocusBand band = new FocusBand(new Point(0.3, 0.5), new Point(0.5, 0.5));

			var gradient = LensTiltFocusGradientGenerator.GenerateGradient(band, new Size(1024, 768), new MockKernelGenerator(20), new MockKernelGenerator(25), false);

			Assert.IsNotNull(gradient);
		}

		[TestMethod]
		public void VerticalGradientPointsAreOnVerticalExtremes()
		{
			FocusBand band = new FocusBand(new Point(0.5, 0.3), new Point(0.5, 0.5));

			var gradient = LensTiltFocusGradientGenerator.GenerateGradient(band, new Size(1024, 768), new MockKernelGenerator(20), new MockKernelGenerator(25), false);

			Assert.AreEqual(gradient.StartPoint.Y, 0);
			Assert.AreEqual(gradient.EndPoint.Y, 1.0);
		}

		[TestMethod]
		public void HorizontalGradientPointsAreOnHorizontalExtremes()
		{
			FocusBand band = new FocusBand(new Point(0.3, 0.5), new Point(0.5, 0.5));

			var gradient = LensTiltFocusGradientGenerator.GenerateGradient(band, new Size(1024, 768), new MockKernelGenerator(20), new MockKernelGenerator(25), false);

			Assert.AreEqual(gradient.StartPoint.X, 0);
			Assert.AreEqual(gradient.EndPoint.X, 1.0);
		}

		[TestMethod]
		public void FallingSlopeGradientHasPointsOnExtremes()
		{
			FocusBand band = new FocusBand(new Point(0.1, 0.1), new Point(0.9, 0.9));

			var gradient = LensTiltFocusGradientGenerator.GenerateGradient(band, new Size(1024, 768), new MockKernelGenerator(20), new MockKernelGenerator(25), false);

			Assert.AreEqual(gradient.StartPoint.X, 0);
			Assert.AreEqual(gradient.StartPoint.Y, 0);
			Assert.AreEqual(gradient.EndPoint.X, 1.0);
			Assert.AreEqual(gradient.EndPoint.Y, 1.0);
		}

		[TestMethod]
		public void RisingSlopeGradientHasPointsOnExtremes()
		{
			FocusBand band = new FocusBand(new Point(0.1, 0.9), new Point(0.9, 0.1));

			var gradient = LensTiltFocusGradientGenerator.GenerateGradient(band, new Size(1024, 768), new MockKernelGenerator(20), new MockKernelGenerator(25), false);

			Assert.AreEqual(0, gradient.StartPoint.X, 1e-3);
			Assert.AreEqual(1.0, gradient.StartPoint.Y, 1e-3);
			Assert.AreEqual(1.0, gradient.EndPoint.X, 1e-3);
			Assert.AreEqual(0, gradient.EndPoint.Y, 1e-3);
		}

		[TestMethod]
		public void StopsAreWithinZeroToOneRange()
		{
			FocusBand band = new FocusBand(new Point(0.1, 0.9), new Point(0.9, 0.1));

			var gradient = LensTiltFocusGradientGenerator.GenerateGradient(band, new Size(1024, 768), new MockKernelGenerator(20), new MockKernelGenerator(25), false);

			Assert.IsTrue(gradient.Stops.Where(stop => stop.Offset < 0 || stop.Offset > 1).Count() == 0);
		}


    }
}