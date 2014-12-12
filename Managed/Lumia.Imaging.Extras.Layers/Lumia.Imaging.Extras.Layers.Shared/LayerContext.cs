using System.Runtime.CompilerServices;
using System.Threading.Tasks;
using Windows.Foundation;

namespace Lumia.Imaging.Extras.Layers
{
    /// <summary>
    /// Contextual information passed to a resolver delegate when converting a <see cref="LayerList" /> to an IImageProvider.
    /// </summary>
    public class LayerContext
    {
        internal class Invariants
        {
            internal Invariants(Layer backgroundLayer, MaybeTask<IImageProvider> backgroundImage, Size renderSizeHint)
            {
                BackgroundLayer = backgroundLayer;
                BackgroundImage = backgroundImage;
                HintedRenderSize = renderSizeHint;
            }

            internal readonly Layer BackgroundLayer;
            internal MaybeTask<IImageProvider> BackgroundImage;
            internal readonly Size HintedRenderSize;
        }

        // Single reference to data that is common for all layers.
        private readonly Invariants m_invariants;

        internal LayerContext(Invariants invariants, Layer previousLayer, Layer currentLayer, int currentLayerIndex)
        {
            m_invariants = invariants;
            PreviousLayer = previousLayer;
            CurrentLayer = currentLayer;
            CurrentLayerIndex = currentLayerIndex;
        }

        /// <summary>
        /// The background layer.
        /// </summary>
        public Layer BackgroundLayer 
        {
            [MethodImpl(MethodImplOptions.AggressiveInlining)] get
            {
                return m_invariants.BackgroundLayer;
            } 
        }

        /// <summary>
        /// The image provider resolved from the background layer, as an asynchronous result.
        /// </summary>
        public MaybeTask<IImageProvider> BackgroundImage
        {
            [MethodImpl(MethodImplOptions.AggressiveInlining)] get
            {
                return m_invariants.BackgroundImage;
            }           
            [MethodImpl(MethodImplOptions.AggressiveInlining)] internal set
            {
                m_invariants.BackgroundImage = value;
            }
        }

        /// <summary>
        /// The hinted size of the rendered image, if one was specified in the LayerList.ToImageProvider call.
        /// </summary>
        public Size HintedRenderSize
        {
            [MethodImpl(MethodImplOptions.AggressiveInlining)]
            get
            {
                return m_invariants.HintedRenderSize;
            }
        }

        /// <summary>
        /// The previous layer.
        /// </summary>
        public Layer PreviousLayer { get; internal set; }

        /// <summary>
        /// The image provider resolved from the previous layer.
        /// </summary>
        public MaybeTask<IImageProvider> PreviousImage { get; internal set; }

        /// <summary>
        /// The current layer.
        /// </summary>
        public Layer CurrentLayer { get; internal set; }

        /// <summary>
        /// The index of the current layer in the LayerList that's being resolved.
        /// </summary>
        public int CurrentLayerIndex { get; internal set; }
    }
}
