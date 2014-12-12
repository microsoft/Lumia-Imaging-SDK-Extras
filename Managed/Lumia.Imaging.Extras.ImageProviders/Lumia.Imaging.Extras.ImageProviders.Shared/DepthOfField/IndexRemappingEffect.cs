using Lumia.Imaging.Custom;

namespace Lumia.Imaging.Extras.Effects.DepthOfField
{
	class IndexRemappingEffect : CustomEffectBase
	{
		uint m_whiteThreshold;

		public IndexRemappingEffect(IImageProvider source, int whiteThreshold)
			: base(source, false)
		{
			m_whiteThreshold = (uint)whiteThreshold;
		}

		protected override void OnProcess(PixelRegion sourcePixelRegion, PixelRegion targetPixelRegion)
		{
			for (int i = 0; i < sourcePixelRegion.ImagePixels.Length; i++)
			{
				uint newPixelValue = 0;

				for (int j = 0; j < 3; j++)
				{
					uint pixelValue = (sourcePixelRegion.ImagePixels[i] & (255u << (8 * j))) >> (8 * j);

					if (pixelValue > m_whiteThreshold)
					{
						pixelValue = 0;
					}

					newPixelValue += pixelValue << (8 * j);
				}

				targetPixelRegion.ImagePixels[i] = newPixelValue + (255u << 24);
			}
		}
	}
}