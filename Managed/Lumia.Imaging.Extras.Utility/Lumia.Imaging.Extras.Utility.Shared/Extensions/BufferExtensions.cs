using Lumia.Imaging;
using System;
using System.Threading.Tasks;
using Windows.Foundation;
using Windows.Storage.Streams;

namespace Lumia.Imaging.Extras.Extensions
{
    class StartedTaskBufferProvider : IBufferProvider
    {
        private readonly IAsyncOperation<IBuffer> m_bufferAsyncOperation;

        public StartedTaskBufferProvider(IAsyncOperation<IBuffer> bufferAsyncOperation)
        {
            m_bufferAsyncOperation = bufferAsyncOperation;
        }

        public StartedTaskBufferProvider(Task<IBuffer> bufferTask)
        {
            m_bufferAsyncOperation = bufferTask.AsAsyncOperation();
        }

        public IAsyncOperation<IBuffer> GetAsync()
        {
            return m_bufferAsyncOperation;
        }
    }

    public static class BufferExtensions
    {
        /// <summary>
        /// Adapts the Task&lt;IBuffer&gt; to work as an IBufferProvider suitable for BufferProviderImageSource.
        /// </summary>
        /// <param name="bufferTask">An asynchronous task that will result in an IBuffer containing an image.</param>
        /// <returns>An IBufferProvider.</returns>
        public static IBufferProvider AsBufferProvider(this Task<IBuffer> bufferTask)
        {
            return new StartedTaskBufferProvider(bufferTask);
        }

        /// <summary>
        /// Adapts the IAsyncOperation&lt;IBuffer&gt; to work as an IBufferProvider suitable for BufferProviderImageSource.
        /// </summary>
        /// <param name="bufferAsyncOperation">An asynchronous operation that will result in an IBuffer containing an image.</param>
        /// <returns>An IBufferProvider.</returns>
        public static IBufferProvider AsBufferProvider(this IAsyncOperation<IBuffer> bufferAsyncOperation)
        {
            return new StartedTaskBufferProvider(bufferAsyncOperation);
        }
    }
}
