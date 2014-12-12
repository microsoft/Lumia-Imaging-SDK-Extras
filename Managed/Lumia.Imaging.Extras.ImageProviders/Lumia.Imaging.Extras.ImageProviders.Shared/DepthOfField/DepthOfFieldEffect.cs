using Lumia.Imaging.Adjustments;
using Lumia.Imaging.Custom;
using System;
using System.Linq;
using Windows.Foundation;

namespace Lumia.Imaging.Extras.Effects.DepthOfField
{
	/// <summary>
	/// A depth-of-field effect.
	/// </summary>
	public abstract class DepthOfFieldEffect : EffectGroupBase
	{
		private readonly ChangeTracker<DepthOfFieldQuality> m_quality = new ChangeTracker<DepthOfFieldQuality>(DepthOfFieldQuality.Preview, true);

		protected DepthOfFieldEffect(IImageProvider source, DepthOfFieldQuality quality) : base(source)
		{
			LensBlurEffect = new LensBlurEffect(source);
			Quality = quality;
		}

        protected bool IsDirty
        {
            get { return m_quality.IsDirty; }
        }

		public DepthOfFieldQuality Quality
		{
			get { return m_quality.Value; }
			set { m_quality.Value = value; }
		}

		protected LensBlurEffect LensBlurEffect { get; set; }

		public IImageProvider MaskSource { get; set; }

        private bool m_mustGetNewSize;
        private Size m_sourceSize;

        protected abstract void SetUp();

		protected sealed override IImageProvider PrepareGroup(IImageProvider groupSource)
		{
            m_mustGetNewSize = true;
            
            try
            {
                SetUp();
            }
            catch (ArgumentOutOfRangeException)
            {
                return Source;
            }
            
            LensBlurEffect.Source = groupSource;
            LensBlurEffect.KernelMap = MaskSource;
            LensBlurEffect.BlendKernelWidth = LensBlurEffect.Kernels.Max(w => w.Size) / 2;

            switch (Quality)
            {
                case DepthOfFieldQuality.Preview:
                    LensBlurEffect.Quality = GetQualityForPreview();
                    break;

                case DepthOfFieldQuality.Full:
                    LensBlurEffect.Quality = GetQualityForFull();
                    break;

                default:
                    throw new NotImplementedException(String.Format("Quality {0} currently unsupported", Quality.ToString()));
            }

            m_quality.Reset();

            return LensBlurEffect;
		}

        private static double GetQualityForPreview()
        {
            return 0.5;
        }

        private static double GetQualityForFull()
        {
            return 1.0;
        }
        
        protected Size GetSourceSize()
        {
            if (m_mustGetNewSize)
            {
                var sourceInfo = Source.GetInfoAsync().AsTask().Result;
                m_sourceSize = sourceInfo.ImageSize;

                m_mustGetNewSize = false;
            }

            return m_sourceSize;
        }

	}
}