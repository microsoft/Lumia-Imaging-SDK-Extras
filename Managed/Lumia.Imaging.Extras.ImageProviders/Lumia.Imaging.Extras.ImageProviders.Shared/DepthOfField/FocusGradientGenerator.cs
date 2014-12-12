using System;
using System.Collections.Generic;
using System.Linq;

namespace Lumia.Imaging.Extras.Effects
{
    public abstract class FocusGradientGenerator
    {
        protected const double minDiffBetweenStops = 1e-7;
        protected const double transitionBandFactor = 0.5;

        protected static List<GradientStop> EnsureMinDiffBetweenPoints(List<GradientStop> stops)
        {
            stops = stops.OrderBy(w => w.Offset).ToList();

            var newList = new List<GradientStop>();
            newList.Add(stops[0]);

            var lower = stops[0];
            for (int i = 1; i < stops.Count; i++)
            {
                var higher = stops[i];

                if ((higher.Offset - lower.Offset) < minDiffBetweenStops)
                {
                    var replacement = new GradientStop() { Offset = Math.Max(higher.Offset, lower.Offset) + minDiffBetweenStops, Color = higher.Color };

                    newList.Add(replacement);
                    lower = replacement;
                }
                else
                {
                    newList.Add(higher);
                    lower = higher;
                }
            }

            return newList;
        }
    }
}
