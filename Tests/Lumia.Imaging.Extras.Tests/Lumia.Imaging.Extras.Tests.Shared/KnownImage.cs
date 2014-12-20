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

using System;
using System.IO;
using System.Runtime.InteropServices.WindowsRuntime;
using System.Text.RegularExpressions;
using System.Threading;
using System.Threading.Tasks;
using Windows.ApplicationModel;
using Windows.Foundation;
using Windows.Storage;
using Windows.Storage.Streams;

namespace Lumia.Imaging.Extras.Tests
{
	public class KnownImage : IBufferProvider
	{
	    private Task<StorageFile> m_fileTask;
	    private Task<IBuffer> m_bufferTask;

	    public KnownImage(string path, Size size, ImageFormat imageFormat = ImageFormat.Jpeg)
		{
			Path = path;
			Size = size;
			ImageFormat = imageFormat;
		
			var regex = new Regex(@"(?<name>\w+)\.\w+?$", RegexOptions.IgnoreCase);
			var matches = regex.Matches(Path);
			Name = matches[0].Groups["name"].Value;

            m_fileTask = Package.Current.InstalledLocation.GetFileAsync(Path).AsTask();
            m_bufferTask = m_fileTask.ContinueWith(fileTask => FileIO.ReadBufferAsync(fileTask.Result).AsTask(), TaskContinuationOptions.OnlyOnRanToCompletion).Unwrap();
		}

		public Task<StorageFile> GetFileAsync()
		{
			return m_fileTask;
		}

        public Task<IBuffer> GetBufferAsync()
        {
            return m_bufferTask;
        }

        public BufferProviderImageSource ImageSource
	    {
            get { return new BufferProviderImageSource(this); }
	    }

	    public string Path { get; private set; }
		public Size Size { get; private set; }
		public ImageFormat ImageFormat { get; private set; }
		public string Name { get; private set; }
	    
        public IAsyncOperation<IBuffer> GetAsync()
        {
            return m_bufferTask.AsAsyncOperation();
        }
	}
}
