/*
* Copyright (c) 2014 Microsoft Mobile
* 
* Permission is hereby granted, free of charge, to any person obtaining a copy
* of this software and associated documentation files (the "Software"), to deal
* in the Software without restriction, including without limitation the rights
* to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
* copies of the Software, and to permit persons to whom the Software is
* furnished to do so, subject to the following conditions:
* The above copyright notice and this permission notice shall be included in
* all copies or substantial portions of the Software.
* 
* THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
* IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
* FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
* AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
* LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
* OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN
* THE SOFTWARE.
*/

using System.Diagnostics;
using System.Runtime.CompilerServices;
using System.Threading;
#if WINDOWS_PHONE
using System.Windows.Media.Imaging;
using Microsoft.Xna.Framework.Media;
#else
#endif
using System;
using System.IO;
using System.Threading.Tasks;
using Windows.Storage;
using Windows.Storage.Streams;

namespace Lumia.Imaging.Extras.Tests
{
    public class ImageResults
    {
        static ImageResults()
        {
            Instance = new ImageResults();
        }

        public static ImageResults Instance { get; private set; }

        private readonly object m_lockObject;
        private bool m_isClosed;
        private Task m_saveTask;
        private Stopwatch m_stopwatch;
        private IStorageFolder m_folder;

        private ImageResults()
        {
            m_lockObject = new object();
            m_stopwatch = new Stopwatch();

            m_saveTask = KnownFolders.PicturesLibrary.CreateFolderAsync("LumiaImagingExtrasTestResults", CreationCollisionOption.OpenIfExists)
                .AsTask()
                .ContinueWith(folderTask =>
                {
                    m_folder = folderTask.Result;

                }, TaskContinuationOptions.OnlyOnRanToCompletion);
        }

        public void CloseAndWait()
        {
            lock (m_lockObject)
            {
                m_isClosed = true;
            }

            m_saveTask.Wait();

            Debug.WriteLine("ImageResults: Saving pictures complete, spent " + m_stopwatch.Elapsed.TotalSeconds + " seconds on I/O.");
        }

        public void SaveToPicturesLibrary(IBuffer imageBuffer, [CallerMemberName] string fileName = "", [CallerFilePath]string callerFilePath = "")
        {
            fileName = Path.GetFileNameWithoutExtension(callerFilePath) + "_" + fileName;

            if (!Path.HasExtension(fileName))
            {
                fileName = Path.ChangeExtension(fileName, "jpg");
            }

            lock (m_lockObject)
            {
                if (m_isClosed)
                {
                    throw new InvalidOperationException("ImageResults closed, cannot queue more operations.");
                }

                m_saveTask = m_saveTask.ContinueWith(async _ =>
                {
                    m_stopwatch.Start();

                    var file = await m_folder.CreateFileAsync(fileName, CreationCollisionOption.ReplaceExisting).AsTask().ConfigureAwait(false);

                    await FileIO.WriteBufferAsync(file, imageBuffer).AsTask().ConfigureAwait(false);

                    m_stopwatch.Stop();

                });
            }
        }
    }
}
