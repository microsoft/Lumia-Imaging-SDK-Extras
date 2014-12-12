using Lumia.Imaging.Adjustments;
using Lumia.Imaging.Compositing;
using Lumia.Imaging.Custom;
using Lumia.Imaging.Transforms;
using System;

namespace Lumia.Imaging.Extras.Effects
{
    /// <summary>
    /// An effect that approximates a high-pass filter over the image, preserving high frequencies (edges).
    /// </summary>
    public class HighpassEffect : EffectGroupBase
    {
        private BlendEffect m_highPassBlendEffect;
        private FilterEffect m_highPassGrayscaleFilterEffect;
        private FilterEffect m_downscaleFilterEffect;
        private CachingEffect m_downscaleCachingEffect;
        private FilterEffect m_blurredFilterEffect;
        private BlurFilter m_blurFilter;

        private uint m_kernelSize;
        private readonly uint m_downscaleDivisor;
        private readonly bool m_isGrayscale;

        /// <summary>
        /// Constructs a high pass effect with the specified parameters.
        /// </summary>
        /// <param name="kernelSize">The size of the filter kernel. A larger size preserves more of lower frequencies.</param>
        /// <param name="isGrayscale">True if the highpass effect should give a grayscale result. Otherwise the individual R, G, B channels are treated separately.</param>
        /// <param name="downscaleDivisor">How much to downscale the image to reduce the cost of the internal blur operation, trading speed for some fidelity. Suitable value depends on the kernelSize.</param>
        public HighpassEffect(uint kernelSize, bool isGrayscale = false, uint downscaleDivisor = 1)
        {
            m_kernelSize = kernelSize;
            m_downscaleDivisor = downscaleDivisor;
            m_isGrayscale = isGrayscale;
            
            if (m_downscaleDivisor > 1)
            {
                m_downscaleFilterEffect = new FilterEffect(/*source*/) { Filters = new IFilter[] { new ScaleFilter(1.0 / m_downscaleDivisor) } };
                m_downscaleCachingEffect = new CachingEffect(m_downscaleFilterEffect);

                int blurKernelSize = Math.Max(1, (int)(3.0 * m_kernelSize / m_downscaleDivisor));

                m_blurFilter = new BlurFilter(blurKernelSize);
                m_blurredFilterEffect = new FilterEffect(m_downscaleCachingEffect)
                {
                    Filters = new IFilter[] { m_blurFilter }
                };

                m_highPassBlendEffect = new BlendEffect( /*source*/)
                {
                    ForegroundSource = m_blurredFilterEffect,
                    BlendFunction = BlendFunction.SignedDifference
                };
            }
            else
            {
                int blurKernelSize = Math.Max(1, (int)(3.0 * m_kernelSize));

                m_blurFilter = new BlurFilter(blurKernelSize);
                m_blurredFilterEffect = new FilterEffect(/*source*/)
                {
                    Filters = new IFilter[] { m_blurFilter }
                };

                m_highPassBlendEffect = new BlendEffect( /*source*/)
                {
                    ForegroundSource = m_blurredFilterEffect,
                    BlendFunction = BlendFunction.SignedDifference
                };
            }
                 
            if (m_isGrayscale)
            {
                m_highPassGrayscaleFilterEffect = new FilterEffect(m_highPassBlendEffect)
                {     
                    Filters = new IFilter[] { new GrayscaleFilter() }
                };
            }
        }

        protected override IImageProvider PrepareGroup(IImageProvider groupSource)
        {
            if (m_downscaleDivisor > 1)
            {
                m_downscaleFilterEffect.Source = groupSource;
            }
            else
            {
                m_blurredFilterEffect.Source = groupSource;
            }

            m_highPassBlendEffect.Source = groupSource;

            return m_isGrayscale ? (IImageProvider)m_highPassGrayscaleFilterEffect : (IImageProvider)m_highPassBlendEffect;
        }

        [System.Diagnostics.CodeAnalysis.SuppressMessage("Microsoft.Usage", "CA2213:DisposableFieldsShouldBeDisposed", MessageId = "m_downscaleCachingEffect")]
        protected override void Dispose(bool disposing)
        {
            base.Dispose(disposing);

            DisposeAndSetNull(ref m_blurredFilterEffect);
            DisposeAndSetNull(ref m_downscaleFilterEffect);
            DisposeAndSetNull(ref m_downscaleCachingEffect);
            DisposeAndSetNull(ref m_highPassBlendEffect);
            DisposeAndSetNull(ref m_highPassGrayscaleFilterEffect);
        }

        /// <summary>
        /// True if the highpass effect gives a grayscale result. Otherwise the individual R, G, B channels are treated separately.
        /// </summary>
        public bool IsGrayscale
        {
            get
            {
                return m_isGrayscale;
            }
        }

        /// <summary>
        /// The size of the filter kernel. A larger kernel size preserves more of lower frequencies.
        /// </summary>
        public uint KernelSize
        {
            get
            {
                return m_kernelSize;
            }
            set
            {
                if (value == m_kernelSize)
                {
                    return;
                }

                m_kernelSize = value;

                m_blurFilter.KernelSize = Math.Max(1, (int)(3.0 * m_kernelSize / m_downscaleDivisor));
            }
        }

        /// <summary>
        /// Controls quality/speed by determinining whether the image should be downscaled internally or not, and by how much. The default value is 1, which means don't downscale.
        /// The user is advised to find the lowest possible value that performs well enough.
        /// </summary>
        public uint DownscaleDivisor
        {
            get
            {
                return m_downscaleDivisor;
            }
        }
    }
}
