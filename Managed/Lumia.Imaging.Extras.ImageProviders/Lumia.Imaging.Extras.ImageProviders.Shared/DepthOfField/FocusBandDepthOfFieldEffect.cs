using Lumia.Imaging.Adjustments;
using System.Collections.Generic;

namespace Lumia.Imaging.Extras.Effects.DepthOfField
{
    public abstract class FocusBandDepthOfFieldEffect : DepthOfFieldEffect
    {
        public FocusBandDepthOfFieldEffect(IImageProvider source, DepthOfFieldQuality quality) : base(source, quality)
        {

        }

		protected IReadOnlyList<ILensBlurKernel> Concatenate(List<ILensBlurKernel> list1, List<ILensBlurKernel> list2)
		{
			var list = new List<ILensBlurKernel>();
			list.AddRange(list1);
			list.AddRange(list2);
			return list;
		}



		//protected ILensBlurKernel[] GetKernelGenerator(DepthOfFieldQuality quality)
		//{
		//	switch (quality)
		//	{
		//		case DepthOfFieldQuality.Preview:
		//			return GetKernelsForPreview(strengthBelowHorizon, strengthAboveHorizon);
		//		case DepthOfFieldQuality.Full:
		//			return GetKernelsForFullEffect(strengthBelowHorizon, strengthAboveHorizon);
		//		default:
		//			throw new NotImplementedException("Unexpected quality value");
		//	}
		//}

		//protected ILensBlurKernel[] GetKernelsForFullEffect(double strengthBelowHorizon, double strengthAboveHorizon)
		//{
		//	if (!ApplyAnyBlurAtStrength(strengthBelowHorizon) && !ApplyAnyBlurAtStrength(strengthAboveHorizon))
		//	{
		//		return new ILensBlurKernel[] { };
		//	}

		//	List<ILensBlurKernel> list = new List<ILensBlurKernel>();

		//	var sourceSize = GetSourceSize();

		//	list.AddRange(GetLensBlurKernels(sourceSize, strengthBelowHorizon));
		//	list.AddRange(GetLensBlurKernels(sourceSize, strengthAboveHorizon));

		//	return list.ToArray();
		//}

		//protected ILensBlurKernel[] GetKernelsForPreview(double strengthBelowHorizon, double strengthAboveHorizon)
		//{
		//	if (!ApplyAnyBlurAtStrength(strengthBelowHorizon) && !ApplyAnyBlurAtStrength(strengthAboveHorizon))
		//	{
		//		return new ILensBlurKernel[] { };
		//	}

		//	List<ILensBlurKernel> list = new List<ILensBlurKernel>();

		//	var sourceSize = GetSourceSize();

		//	if (ApplyAnyBlurAtStrength(strengthBelowHorizon))
		//	{
		//		list.Add(GetLensBlurKernelForPreview(sourceSize, strengthBelowHorizon));
		//	}

		//	if (ApplyAnyBlurAtStrength(strengthAboveHorizon))
		//	{
		//		list.Add(GetLensBlurKernelForPreview(sourceSize, strengthAboveHorizon));
		//	}
            

		//	return list.ToArray();
		//}
    }
}
