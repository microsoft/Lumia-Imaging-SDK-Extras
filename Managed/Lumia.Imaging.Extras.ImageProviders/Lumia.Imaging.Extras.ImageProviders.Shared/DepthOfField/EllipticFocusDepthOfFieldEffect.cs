using Lumia.Imaging.Adjustments;
using System;
using System.Linq;
using Windows.Foundation;

namespace Lumia.Imaging.Extras.Effects.DepthOfField
{
	/// <summary>
	/// A depth-of-field effect with a user defined elliptic focus area. In high quality mode, the blurring of the background gets progressively stronger along the radii of the ellipse.
	/// </summary>
	public class EllipticFocusDepthOfFieldEffect : DepthOfFieldEffect
	{

		private readonly ChangeTracker<FocusEllipse> m_focusArea = new ChangeTracker<FocusEllipse>();
		private readonly ChangeTracker<double> m_strength = new ChangeTracker<double>();

		/// <summary>
		/// Creates and initializes a new elliptic focus depth-of-field effect.
		/// </summary>
		/// <param name="source">The source image to be blurred.</param>
		/// <param name="ellipse">The desired focus area within the image.</param>
		/// <param name="strength">The strength of the blur effect.</param>
		/// <param name="quality">The quality of the effect.</param>
		public EllipticFocusDepthOfFieldEffect(IImageProvider source, FocusEllipse focusArea, double strength, DepthOfFieldQuality quality)
			: base(source, quality)
		{
			FocusArea = focusArea;
			Strength = strength;
		}

		public FocusEllipse FocusArea
		{
			get { return m_focusArea.Value; }
			set
			{
				m_focusArea.Value = value;
			}
		}

		public double Strength
		{
			get { return m_strength.Value; }
			set
			{
				m_strength.Value = value;
			}
		}

		protected override void SetUp()
		{
			KernelGenerator kernelGenerator = null;

			if (IsDirty || m_focusArea.IsDirty || m_strength.IsDirty)
			{
				kernelGenerator = (Quality == DepthOfFieldQuality.Preview)
					? (KernelGenerator)new PreviewQualityKernelGenerator(GetSourceSize(), Strength)
					: (KernelGenerator)new HighQualityKernelGenerator(GetSourceSize(), Strength);

				MaskSource = new GradientImageSource(GetKernelMapSize(), EllipticFocusGradientGenerator.GenerateGradient(m_focusArea.Value, kernelGenerator));
			}


			if (IsDirty || m_strength.IsDirty)
			{
				var kernels = kernelGenerator.GetKernels();;
                
                if (kernels.Count < 1)
                    throw new ArgumentOutOfRangeException("No blur required");

                LensBlurEffect.Kernels = kernels;

				LensBlurEffect.BlendKernelWidth = LensBlurEffect.Kernels.Max(w => w.Size) / 2;
				LensBlurEffect.KernelMapType = LensBlurKernelMapType.Continuous;
				LensBlurEffect.FocusAreaEdgeMirroring = LensBlurFocusAreaEdgeMirroring.Off;
			}

			m_strength.Reset();
			m_focusArea.Reset();
		}

		private Size GetKernelMapSize()
		{
			var sourceSize = GetSourceSize();
			return new Size(sourceSize.Width / 2, sourceSize.Height / 2);
		}
	}
}
