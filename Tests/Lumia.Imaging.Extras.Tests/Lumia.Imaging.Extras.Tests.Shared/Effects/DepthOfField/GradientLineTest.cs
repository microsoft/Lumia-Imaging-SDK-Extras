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
using Lumia.Imaging.Extras.Effects.DepthOfField;
using Microsoft.VisualStudio.TestPlatform.UnitTestFramework;
using System.Collections.Generic;
using System.Linq;
using Windows.Foundation;

namespace Lumia.Imaging.Extras.Tests.Effects.DepthOfField
{
	[TestClass]
	public class GradientLineTest
	{

		[TestMethod]
		public void Test1()
		{
			var gradientLine1 = new GradientLine(new FocusBand(new Point(0.5, 0.1), new Point(0.5, 0.9)));
			var p1_0 = gradientLine1.PointFromX(0);
			var p1_1 = gradientLine1.PointFromX(1);

			var gradientLine2 = new GradientLine(new FocusBand(new Point(0.5, 0.1), new Point(0.5, 0.9)));
			var p2_0 = gradientLine2.PointFromX(0);
			var p2_1 = gradientLine2.PointFromX(1);

			Assert.AreEqual(p1_0.X, p2_0.X, 0.01);
			Assert.AreEqual(p1_0.Y, p2_0.Y, 0.01);

			Assert.AreEqual(p1_1.X, p2_1.X, 0.01);
			Assert.AreEqual(p1_1.Y, p2_1.Y, 0.01);
		}
	}
}
