using Lumia.Imaging.Adjustments;
using System;
using Windows.Foundation;

namespace Lumia.Imaging.Extras.Effects.DepthOfField
{
    /// <summary>
    /// A depth-of-field effect with an object defined by a mask kept in focus. In high quality mode, the blurring of the background gets progressively stronger outward from a user defined horizon line.
    /// </summary>
    public class FocusObjectDepthOfFieldEffect : FocusBandDepthOfFieldEffect
    {
        private readonly ChangeTracker<Point> m_horizonPoint1 = new ChangeTracker<Point>();
		private readonly ChangeTracker<Point> m_horizonPoint2 = new ChangeTracker<Point>();
        private readonly ChangeTracker<double> m_strengthAboveHorizon = new ChangeTracker<double>();
		private readonly ChangeTracker<double> m_strengthBelowHorizon = new ChangeTracker<double>();
        private readonly ChangeTracker<IImageProvider> m_objectMaskSource = new ChangeTracker<IImageProvider>(null, true);
		private KernelGenerator m_edge1KernelGenerator = null;
		private KernelGenerator m_edge2KernelGenerator = null;

        /// <summary>
        /// Creates and initializes a new focus object depth-of-field effect.
        /// </summary>
        /// <param name="source">The image source to apply the effect to</param>
        /// <param name="objectMaskSource">A grayscale mask that represents the object in the image that shall be kept in focus.</param>
        /// <param name="horizonPoint1">The first point defining the horizon line.</param>
        /// <param name="horizonPoint2">The second point defining the horizon line.</param>
        /// <param name="strengthBelowHorizon">The strength of the blur effect below the horizon line.</param>
        /// <param name="strengthAboveHorizon">The strength of the blur effect above the horizon line.</param>
        public FocusObjectDepthOfFieldEffect(IImageProvider source, IImageProvider objectMaskSource, Point horizonPoint1, Point horizonPoint2, double strengthBelowHorizon, double strengthAboveHorizon, DepthOfFieldQuality quality)
            : base(source, quality)
        {
            ObjectMaskSource = objectMaskSource;
            HorizonPoint1 = horizonPoint1;
            HorizonPoint2 = horizonPoint2;
            StrengthBelowHorizon = strengthBelowHorizon;
            StrengthAboveHorizon = strengthAboveHorizon;
        }

        public IImageProvider ObjectMaskSource
        {
            get { return m_objectMaskSource.Value; }
            set
            {
                m_objectMaskSource.Value = value;
            }
        }

        public Point HorizonPoint1
        {
            get { return m_horizonPoint1.Value; }
            set
            {
                m_horizonPoint1.Value = value;
            }
        }

        public Point HorizonPoint2
        {
            get { return m_horizonPoint2.Value; }
            set
            {
                m_horizonPoint2.Value = value;
            }
        }

        public double StrengthBelowHorizon
        {
            get { return m_strengthBelowHorizon.Value; }
            set
            {
                m_strengthBelowHorizon.Value = value;
            }
        }

        public double StrengthAboveHorizon
        {
            get { return m_strengthAboveHorizon.Value; }
            set
            {
                m_strengthAboveHorizon.Value = value;
            }
        }

        protected override void SetUp()
        {
            var focusBand = GetBandFromHorizonLine(HorizonPoint1, HorizonPoint2);

			if (IsDirty || m_strengthAboveHorizon.IsDirty || m_strengthBelowHorizon.IsDirty)
			{
				var sourceSize = GetSourceSize();
                var generatorBelow = Quality == DepthOfFieldQuality.Full
					? (KernelGenerator)new HighQualityKernelGenerator(sourceSize, m_strengthBelowHorizon.Value)
					: (KernelGenerator)new PreviewQualityKernelGenerator(sourceSize, m_strengthBelowHorizon.Value);

				var generatorAbove = Quality == DepthOfFieldQuality.Full
					? (KernelGenerator)new HighQualityKernelGenerator(sourceSize, m_strengthAboveHorizon.Value)
					: (KernelGenerator)new PreviewQualityKernelGenerator(sourceSize, m_strengthAboveHorizon.Value);

                if (focusBand.Edge1.Y < focusBand.Edge2.Y)
                {
                    m_edge1KernelGenerator = generatorAbove;
                    m_edge2KernelGenerator = generatorBelow;
                }
                else
                {
                    m_edge1KernelGenerator = generatorBelow;
                    m_edge2KernelGenerator = generatorAbove;
                }
			}

			bool applySmallBlurToFocus = m_edge1KernelGenerator.GetKernels() != null && m_edge2KernelGenerator.GetKernels() != null;

			if (IsDirty || m_strengthAboveHorizon.IsDirty || m_strengthBelowHorizon.IsDirty || m_horizonPoint1.IsDirty || m_horizonPoint2.IsDirty || m_objectMaskSource.IsDirty)
			{
				var sourceSize = GetSourceSize();
				var kernels = Concatenate(m_edge1KernelGenerator.GetKernels(), m_edge2KernelGenerator.GetKernels());
				
                if (kernels.Count < 1)
                    throw new ArgumentOutOfRangeException("No blur required");
                
                var gradient = LensTiltFocusGradientGenerator.GenerateGradient(focusBand, sourceSize, m_edge1KernelGenerator, m_edge2KernelGenerator, applySmallBlurToFocus);
				MaskSource = FocusObjectKernelMapGenerator.Generate(ObjectMaskSource, gradient, GetKernelMapSize(), kernels);

				LensBlurEffect.Kernels = kernels;
				LensBlurEffect.KernelMapType = LensBlurKernelMapType.Continuous;
				LensBlurEffect.FocusAreaEdgeMirroring = LensBlurFocusAreaEdgeMirroring.On;
			}

			m_objectMaskSource.Reset();
			m_strengthAboveHorizon.Reset();
			m_strengthBelowHorizon.Reset();
			m_horizonPoint1.Reset();
			m_horizonPoint2.Reset();
			
        }
        
        private Size GetKernelMapSize()
        {
            var sourceSize = GetSourceSize();

            return new Size(sourceSize.Width / 2, sourceSize.Height / 2);
        }

        private FocusBand GetBandFromHorizonLine(Point p1, Point p2)
        {
            double xDiff = p1.X - p2.X;
            double yDiff = p1.Y - p2.Y;

            Point midpoint = new Point((p2.X + p1.X) / 2, (p2.Y + p1.Y) / 2);

            Func<double, Point> lineNormalFunction;

            if (Math.Abs(xDiff) < 1e-3)
            {
                //special case to avoid divide by zero
                lineNormalFunction = (x) => new Point(midpoint.X + x, midpoint.Y);
            }
            else if (Math.Abs(yDiff) < 1e-3)
            {
                //special case to avoid divide by zero
                lineNormalFunction = (y) => new Point(midpoint.X, midpoint.Y + y);
            }
            else
            {
                double slope = (p2.Y - p1.Y) / (p2.X - p1.X);
                double perpSlope = -1 / slope;

                double intercept = midpoint.Y - (perpSlope * midpoint.X);

                lineNormalFunction = (x) => new Point(midpoint.X + x, (perpSlope * (midpoint.X + x)) + intercept);
            }

            FocusBand band = new FocusBand(lineNormalFunction(-1e-5), lineNormalFunction(1e-5));

            return band;
        }

        
    }
}