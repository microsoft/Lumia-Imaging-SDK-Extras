using Lumia.Imaging.Adjustments;
using System;
using Windows.Foundation;

namespace Lumia.Imaging.Extras.Effects.DepthOfField
{
	/// <summary>
	/// A depth-of-field effect that creates the illusion of a photograph taken using lens tilt by way of letting the user specify a band representing the focus area in the image. 
	/// In high quality mode, the blurring of the background gets progressively stronger outward from this band.
	/// </summary>
	public class LensTiltDepthOfFieldEffect : FocusBandDepthOfFieldEffect
	{
		private readonly ChangeTracker<FocusBand> m_focusBand = new ChangeTracker<FocusBand>();
		private readonly ChangeTracker<double> m_strengthAtEdge1 = new ChangeTracker<double>();
		private readonly ChangeTracker<double> m_strengthAtEdge2 = new ChangeTracker<double>();
		private KernelGenerator m_edge1KernelGenerator = null;
		private KernelGenerator m_edge2KernelGenerator = null;

		/// <summary>
		/// Creates and initializes a new lens tilt depth-of-field effect.
		/// </summary>
		/// <param name="source">The source image to be blurred.</param>
		/// <param name="focusBand">The band that represents the focus area in the image. Pixels within this band won't be blurred. 
		/// Areas outside of the area will be progressively more blurred as the distance from the focus band increases..</param>
		/// <param name="blurStrengthAtEdge1">Strength of the blur on the Edge1 side of the focus band.</param>
		/// <param name="blurStrengthAtEdge2">Strength of the blur on the Edge2 side of the focus band.</param>
		public LensTiltDepthOfFieldEffect(IImageProvider source, FocusBand focusBand, double strengthAtEdge1, double strengthAtEdge2, DepthOfFieldQuality quality)
			: base(source, quality)
		{
			FocusBand = focusBand;
			StrengthAtEdge1 = strengthAtEdge1;
			StrengthAtEdge2 = strengthAtEdge2;
		}
		public FocusBand FocusBand
		{
			get { return m_focusBand.Value; }
			set
			{
				m_focusBand.Value = value;
			}
		}

		public double StrengthAtEdge1
		{
			get { return m_strengthAtEdge1.Value; }
			set
			{
				m_strengthAtEdge1.Value = value;
			}
		}

		public double StrengthAtEdge2
		{
			get { return m_strengthAtEdge2.Value; }
			set
			{
				m_strengthAtEdge2.Value = value;
			}
		}

		protected override void SetUp()
		{
			if (IsDirty || m_strengthAtEdge1.IsDirty || m_strengthAtEdge2.IsDirty)
			{
				var sourceSize = GetSourceSize();
				m_edge1KernelGenerator = Quality == DepthOfFieldQuality.Full
					? (KernelGenerator)new HighQualityKernelGenerator(sourceSize, m_strengthAtEdge1.Value)
					: (KernelGenerator)new PreviewQualityKernelGenerator(sourceSize, m_strengthAtEdge1.Value);

				m_edge2KernelGenerator = Quality == DepthOfFieldQuality.Full
					? (KernelGenerator)new HighQualityKernelGenerator(sourceSize, m_strengthAtEdge2.Value)
					: (KernelGenerator)new PreviewQualityKernelGenerator(sourceSize, m_strengthAtEdge2.Value);

                var kernels = Concatenate(m_edge1KernelGenerator.GetKernels(), m_edge2KernelGenerator.GetKernels());

                if (kernels.Count < 1)
                    throw new ArgumentOutOfRangeException("No blur required");

                LensBlurEffect.Kernels = kernels;
			}

			if (IsDirty || m_strengthAtEdge1.IsDirty || m_strengthAtEdge2.IsDirty || m_focusBand.IsDirty)
			{
				var sourceSize = GetSourceSize();
				var gradient = LensTiltFocusGradientGenerator.GenerateGradient(FocusBand, sourceSize, m_edge1KernelGenerator, m_edge2KernelGenerator, false);
				MaskSource = new GradientImageSource(GetKernelMapSize(), gradient);
			}

			LensBlurEffect.KernelMapType = LensBlurKernelMapType.Continuous;
			LensBlurEffect.FocusAreaEdgeMirroring = LensBlurFocusAreaEdgeMirroring.Off;

			m_focusBand.Reset();
			m_strengthAtEdge1.Reset();
			m_strengthAtEdge2.Reset();
		}

		private Size GetKernelMapSize()
		{
			var sourceSize = GetSourceSize();

			return new Size(sourceSize.Width / 2, sourceSize.Height / 2);
		}
	}
}