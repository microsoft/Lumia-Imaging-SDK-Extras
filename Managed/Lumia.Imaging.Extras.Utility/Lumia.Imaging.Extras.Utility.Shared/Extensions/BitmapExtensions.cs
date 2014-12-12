using System;
using System.Runtime.InteropServices.WindowsRuntime;
using Windows.UI.Xaml.Media.Imaging;

namespace Lumia.Imaging.Extras.Extensions
{
    public static class BitmapExtensions
    {
        /// <summary>
        /// Copies the bitmap contents into an existing WriteableBitmap. This method can only be called in the CoreDispatcher synchronization context.
        /// </summary>
        /// <param name="bitmap">Source Bitmap. Must have ColorMode.Bgra8888.</param>
        /// <param name="writeableBitmap">Target WriteableBitmap. Must be the same dimensions as the source Bitmap.</param>
        /// <returns></returns>
        /// <remarks>
        /// This special case operation can be useful when the time spent in the dispatcher thread should be kept to a minimum, at the cost of the memory consumed by two copies of the image.
        /// <para>
        /// For example: a number of thumbnails must be generated and displayed in a XAML UI. BitmapRenderers are to generate the Bitmaps, doing all the actual rendering in the ThreadPool.
        /// The final conversions from Bitmaps to WriteableBitmaps are done using CoreDispatcher.RunAsync and calling this method.
        /// </para>
        /// </remarks>
        public static void CopyTo(this Bitmap bitmap, WriteableBitmap writeableBitmap)
        {
            var firstBuffer = bitmap.Buffers[0];

            var bitmapWidth = (int)bitmap.Dimensions.Width;
            var bitmapHeight = (int)bitmap.Dimensions.Height;

            if (bitmapWidth != writeableBitmap.PixelWidth ||
                bitmapHeight != writeableBitmap.PixelHeight)
            {
                throw new ArgumentException("The WriteableBitmap must have the same dimensions as the Bitmap.");
            }

            if (bitmap.ColorMode != ColorMode.Bgra8888)
            {
                throw new ArgumentException("The source Bitmap must have ColorMode.Bgra8888.");
            }

            var bitmapWidthBytes = (uint)(4 * bitmapWidth);

            var sourcePixels = firstBuffer.Buffer;

            var writeableBitmapBuffer = writeableBitmap.PixelBuffer;
            uint pitch = firstBuffer.Pitch;

            if (pitch == bitmapWidthBytes)
            {
                sourcePixels.CopyTo(0U, writeableBitmapBuffer, 0U, (uint) (bitmapWidthBytes*bitmapHeight));
            }
            else
            {
                for (int y = 0; y < bitmapHeight; ++y)
                {
                    sourcePixels.CopyTo((uint) (y*pitch), writeableBitmapBuffer, (uint) (y*bitmapWidthBytes), bitmapWidthBytes);
                }
            }
            writeableBitmap.Invalidate();
        }


        /// <summary>
        /// Copies the bitmap into a new WriteableBitmap. This method can only be called in the CoreDispatcher synchronization context.
        /// </summary>
        /// <param name="bitmap">Source bitmap. Must have ColorMode.Bgra8888.</param>
        /// <returns></returns>
        /// <remarks>
        /// This special case operation can be useful when the time spent in the dispatcher thread should be kept to a minimum, at the cost of the memory consumed by two copies of the image.
        /// <para>
        /// For example: a number of thumbnails must be generated and displayed in a XAML UI. BitmapRenderers are to generate the Bitmaps, doing all the actual rendering in the ThreadPool.
        /// The final conversions from Bitmaps to WriteableBitmaps are done using CoreDispatcher.RunAsync and calling this method.
        /// </para>
        /// </remarks>
        public static WriteableBitmap ToWriteableBitmap(this Bitmap bitmap)
        {
            var firstBuffer = bitmap.Buffers[0];

            var sourcePixels = firstBuffer.Buffer;

            var bitmapWidth = (int)bitmap.Dimensions.Width;
            var bitmapHeight = (int)bitmap.Dimensions.Height;

            var writeableBitmap = new WriteableBitmap(bitmapWidth, bitmapHeight);

            if (bitmap.ColorMode != ColorMode.Bgra8888)
            {
                throw new ArgumentException("The source Bitmap must have ColorMode.Bgra8888.");
            }

            var bitmapWidthBytes = (uint)(4 * bitmapWidth);

            var writeableBitmapBuffer = writeableBitmap.PixelBuffer;
            uint pitch = firstBuffer.Pitch;

            if (pitch == bitmapWidthBytes)
            {
                sourcePixels.CopyTo(0U, writeableBitmapBuffer, 0U, (uint)(bitmapWidthBytes*bitmapHeight));                
            }
            else
            {
                for (int y = 0; y < bitmapHeight; ++y)
                {
                    sourcePixels.CopyTo((uint)(y * pitch), writeableBitmapBuffer, (uint)(y * bitmapWidthBytes), bitmapWidthBytes);
                }
                
            }


            writeableBitmap.Invalidate();

            return writeableBitmap;
        }

    }
}
