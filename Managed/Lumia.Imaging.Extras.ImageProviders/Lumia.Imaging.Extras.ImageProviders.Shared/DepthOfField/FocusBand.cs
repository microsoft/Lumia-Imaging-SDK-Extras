using Windows.Foundation;

namespace Lumia.Imaging.Extras.Effects.DepthOfField
{
    /// <summary>
    /// Defines the focus area within the image that will be blurred.
    /// Defined by two points. The distance between the points defines the width of the band.
    /// The focus band within the band is then perpendicular to the line defines by the BandEdge1 and BandEdge2.
    /// </summary>
    public class FocusBand
    {
        public Point Edge1 { get; private set; }
        public Point Edge2 { get; private set; }

        /// <summary>
        /// Creates and initializes a new FocusBand given the two points.
        /// The distance between the points defines the width of the band.
        /// The focus band within the band is then perpendicular to the line defines by the BandEdge1 and BandEdge2.
        /// </summary>
        /// <param name="edge1">The first point. Expressed in the unit coordinate space of the image area,
        /// i.e., the top left corner of the image is at (0.0), and the bottom right corner is at (1, 1).param>
        /// <param name="edge2">The second point. Expressed in the unit coordinate space of the image area,
        /// i.e., the top left corner of the image is at (0.0), and the bottom right corner is at (1, 1).param>
        public FocusBand(Point edge1, Point edge2)
        {
            Edge1 = edge1;
            Edge2 = edge2;
        }
    }
}