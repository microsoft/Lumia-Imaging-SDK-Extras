using System;
using System.Threading.Tasks;

namespace Lumia.Imaging.Extras.Layers.Internal
{
    internal static class LayerSource
    {
        private const TaskContinuationOptions ContinuationOptions =
            TaskContinuationOptions.ExecuteSynchronously | TaskContinuationOptions.OnlyOnRanToCompletion;

        private static IImageProvider Bind(IImageProvider currentImage, IImageProvider previousImage)
        {
            var imageConsumer = currentImage as IImageConsumer;

            if (imageConsumer != null)
            {
                imageConsumer.Source = previousImage;
            }

            return currentImage;
        }

        internal static MaybeTask<IImageProvider> Bind(MaybeTask<IImageProvider> currentImage, MaybeTask<IImageProvider> previousImage)
        {
            // Note: the code below is written with static lambdas that don't close over any variables. This avoids heap allocations.

            if (currentImage.IsSynchronous)
            {
                if (previousImage.IsSynchronous)
                {
                    return new MaybeTask<IImageProvider>(Bind(currentImage.Result, previousImage.Result));
                }
                else // previousImage.IsAsynchronous
                {
                    return new MaybeTask<IImageProvider>(previousImage.Task.ContinueWith(BindPreviousAsyncToCurrentSync, currentImage.Result, ContinuationOptions));
                }
            }
            else // currentImage.IsAsynchronous
            {
                if (previousImage.IsSynchronous)
                {
                    return new MaybeTask<IImageProvider>(currentImage.Task.ContinueWith(BindPreviousSyncToCurrentAsync, previousImage.Result, ContinuationOptions));
                }
                else // previousImage.IsAsynchronous
                {
                    return new MaybeTask<IImageProvider>(currentImage.Task.ContinueWith(BindPreviousAsyncToCurrentAsync, previousImage.Task, ContinuationOptions).Unwrap());
                }
            }
        }

        private static readonly Func<Task<IImageProvider>, object, IImageProvider> BindPreviousAsyncToCurrentSync = 
            (previousImageTask, state) => Bind((IImageProvider)state, previousImageTask.Result);

        private static readonly Func<Task<IImageProvider>, object, IImageProvider> BindPreviousSyncToCurrentAsync = 
            (currentImageTask, state) => Bind(currentImageTask.Result, (IImageProvider)state);

        private static readonly Func<Task<IImageProvider>, object, Task<IImageProvider>> BindPreviousAsyncToCurrentAsync = 
            (currentImageTask, previousImageTaskObj) => ((Task<IImageProvider>)previousImageTaskObj).ContinueWith(
                (previousImageTask, state) => Bind((IImageProvider) state, previousImageTask.Result), 
                currentImageTask.Result, 
                ContinuationOptions);

    }
}
