using Windows.Foundation;

namespace Lumia.Imaging.Extras.Effects.DepthOfField
{
    /// <summary>
    /// FocusEllipse defines a focus area for EllipticFocusDepthOfFieldEffect.
    /// </summary>
    public class FocusEllipse
    {
        public Point Center { get; private set; }
        public EllipseRadius Radius { get; private set; }

        /// <summary>
        /// Creates and initialized a new FocusEllipse with specified center and radius.
        /// </summary>
        /// <param name="center">The center of the ellipse. Expressed in the unit coordinate space of the image area,
        /// i.e., the top left corner of the image is at (0.0), and the bottom right corner is at (1, 1).</param>
        /// <param name="radius">The radius of the ellipse. Expressed in the unit coordinate space of the image area,
        /// i.e., the top left corner of the image is at (0.0), and the bottom right corner is at (1, 1).</param>
        public FocusEllipse(Point center, EllipseRadius radius)
        {
            Center = center;
            Radius = radius;
        }
		public FocusEllipse(double x, double y, double xRadius, double yRadius)
		{
			Center = new Point(x, y);
			Radius = new EllipseRadius(xRadius, yRadius);
		}
	}
}
