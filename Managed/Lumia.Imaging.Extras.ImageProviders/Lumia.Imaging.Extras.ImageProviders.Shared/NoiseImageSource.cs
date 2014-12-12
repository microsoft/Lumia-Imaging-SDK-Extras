using Lumia.Imaging.Adjustments;
using System;
using Windows.Foundation;
using Windows.UI;

namespace Lumia.Imaging.Extras.ImageSources
{
    /// <summary>
    /// A procedural image source providing a noise distribution suitable for standard 5 MPixel images. 
    /// The noise is monochromatic and centered around gray (128,128,128).
    /// </summary>
    public class NoiseImageSource : IImageProvider, IDisposable
    {
        private IImageProvider m_imageProvider;

        /// <summary>
        /// Constructs a noise image source.
        /// </summary>
        /// <param name="renderSize">The dimensions of the target image that this noise will be used for. The actual grain size is proportional to a standardized ~5 MP image with the same aspect ratio.</param>
        /// <param name="amplitude">Noise amplitude.</param>
        public NoiseImageSource(Size renderSize, int amplitude)
        {
            m_imageProvider = CreateSource(renderSize, amplitude);
        }

        ~NoiseImageSource()
        {
            Dispose(false);
        }

        public void Dispose()
        {
            Dispose(true);
            GC.SuppressFinalize(this);
        }

        protected virtual void Dispose(bool disposing)
        {
            var disposable = m_imageProvider as IDisposable;

            if (disposable != null)
            {
                disposable.Dispose();
            }

            m_imageProvider = null;
        }

        private static IImageProvider CreateSource(Size renderSize, int grainSize)
        {
            if ((int)Math.Min(renderSize.Width, renderSize.Height) <= 0)
            {
                throw new ArgumentOutOfRangeException("renderSize");
            }

            const int smallerAxisFor5MPixels = 1728;

            double scaleFactor = smallerAxisFor5MPixels / Math.Min(renderSize.Width, renderSize.Height);
            var noiseImageSize = new Size(renderSize.Width * scaleFactor, renderSize.Height * scaleFactor);

            var limitedScaleFactor = Math.Max(1.0, scaleFactor);

            var filterEffect = new FilterEffect(new ColorImageSource(noiseImageSize, Color.FromArgb(255, 128, 128, 128)))
            {
                Filters = new[]
                {
                    new GaussianNoiseFilter(Math.Max(1, grainSize/limitedScaleFactor))
                }
            };

            return filterEffect;
        }

        public IAsyncOperation<Bitmap> GetBitmapAsync(Bitmap bitmap, OutputOption outputOption)
        {
            return m_imageProvider.GetBitmapAsync(bitmap, outputOption);
        }

        public IAsyncOperation<ImageProviderInfo> GetInfoAsync()
        {
            return m_imageProvider.GetInfoAsync();
        }

        public bool Lock(RenderRequest renderRequest)
        {
            return m_imageProvider.Lock(renderRequest);
        }

        public IAsyncAction PreloadAsync()
        {
            return m_imageProvider.PreloadAsync();
        }

    }

}
