using System;
using Windows.Foundation;

namespace Lumia.Imaging.Extras.Effects.DepthOfField
{
	public class GradientLine
	{
		private FocusBand m_focusBand;

		public GradientLine(FocusBand band)
		{
			m_focusBand = band;
			IsVertical = (band.Edge1.X - band.Edge2.X) < 1e-3;
			IsHorizontal = (band.Edge1.Y - band.Edge2.Y) < 1e-3;
		}

		public bool IsVertical { get; private set; }
		public bool IsHorizontal { get; private set; }

		public Point PointFromX(double x)
		{
			if (IsVertical)
			{
				throw new InvalidOperationException("PointFromX not valid with a vertical line");
			}

			double slope = (m_focusBand.Edge2.Y - m_focusBand.Edge1.Y) / (m_focusBand.Edge2.X - m_focusBand.Edge1.X);
			double yIntercept = m_focusBand.Edge1.Y - m_focusBand.Edge1.X * slope;

			return new Point(x, slope * x + yIntercept);
		}

		public Point PointFromY(double y)
		{
			if (IsVertical)
			{
				throw new InvalidOperationException("PointFromY not valid with a vertical line");
			}

			double slope = (m_focusBand.Edge2.X - m_focusBand.Edge1.X) / (m_focusBand.Edge2.Y - m_focusBand.Edge1.Y);
			double xIntercept = m_focusBand.Edge1.X - m_focusBand.Edge1.Y * slope;

			return new Point(slope * y + xIntercept, y);
		}

		public static Func<double, Point> CreateFunction(FocusBand band)
		{
			double xDiff = band.Edge1.X - band.Edge2.X;

			Func<double, Point> lineFunction;

			if (Math.Abs(xDiff) < 1e-3)
			{
				//special case to avoid divide by zero
				lineFunction = (x) => new Point(band.Edge1.X, x);
			}
			else
			{
				double slope = (band.Edge2.Y - band.Edge1.Y) / (band.Edge2.X - band.Edge1.X);
				double yIntercept = band.Edge1.Y - band.Edge1.X * slope;

				lineFunction = (x) => new Point(x, slope * x + yIntercept);
			}

			return lineFunction;
		}


	}
}
