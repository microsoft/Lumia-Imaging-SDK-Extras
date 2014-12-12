using Lumia.Imaging.Adjustments;
using Lumia.Imaging.Compositing;
using Lumia.Imaging.Transforms;
using System;
using System.Collections.Generic;
using System.Linq;
using System.Reflection;

namespace Lumia.Imaging.Extras.Extensions
{
    public static class DotVisualizationExtensions
    {
        private const string graphFormatString = "digraph {0} {{ graph [fontname = \"helvetica\", fontsize=10]; node [fontname = \"helvetica\", fontsize=10]; edge [fontname = \"helvetica\", fontsize=10]; {1} }}";

        // Returns a string that can be used as input to Dot, part of graphviz.
        // Graphviz can be found here: http://www.graphviz.org/Download..php
        // To generate a processing graph in PDF-format, save the returned string to a file graph.dot, and do:
        // C:>dot -Tpdf graph.dot > graph.pdf
        public static string ToDotString(this IImageConsumer imageConsumer, string graphName = "graph")
        {
            var dotGen = new DotVisualizer(graphName, imageConsumer);
            return dotGen.DotString;
        }

        public static string ToDotString(this ImageAligner imageAligner, string graphName = "graph")
        {
            var dotGen = new DotVisualizer(graphName, imageAligner);
            return dotGen.DotString;
        }

        private class DotVisualizer
        {

            [Flags]
            private enum NodePart
            {
                None = 0x00,
                GeneralProperties = 0x01,
                ImageProviderProperties = 0x02,
                All = 0x03
            };

            private string m_dotString = "";
            private Dictionary<object, NodePart> m_visitedNodes = new Dictionary<object, NodePart>();

            internal DotVisualizer(string graphName, IImageConsumer imageConsumer)
            {
                Dot(imageConsumer);
                DotString = String.Format(graphFormatString, graphName, m_dotString);
            }
            internal DotVisualizer(string graphName, ImageAligner imageAligner)
            {
                Node(imageAligner);
                DotString = String.Format(graphFormatString, graphName, m_dotString);
            }

            internal string DotString { get; private set; }

            private void Dot(IImageConsumer imageConsumer)
            {
                if (imageConsumer == null)
                {
                    return;
                }

                if (imageConsumer is FilterEffect) 
                {
                    Dot(imageConsumer as FilterEffect);
                }
                else if (imageConsumer is LensBlurEffect)
                {
                    Dot(imageConsumer as LensBlurEffect);
                }
                else
                {
                    Node(imageConsumer);
                }
            }

            private void Dot(IImageProvider imageProvider)
            {
                if (imageProvider == null)
                {
                    return;
                }

                if (imageProvider is IImageConsumer)
                {
                    Dot(imageProvider as IImageConsumer);
                }
                else
                {
                    Node(imageProvider);
                }
            }

            #region LensBlurEffect
            private void Dot(LensBlurEffect lensBlurEffect)
            {
                Subgraph(lensBlurEffect);

                if (lensBlurEffect.Kernels != null)
                {
                    Dot(lensBlurEffect, lensBlurEffect.Kernels);
                }
            }

            private void Dot(LensBlurEffect lensBlurEffect, IReadOnlyList<ILensBlurKernel> kernels)
            {
                foreach (var kernel in kernels)
                {
                    if (kernel is LensBlurCustomKernel)
                    {
                        var customKernel = kernel as LensBlurCustomKernel;
                        Dot(customKernel.Shape);
                    }
                }
            }

            private void Subgraph(LensBlurEffect lensBlurEffect)
            {
                Node(lensBlurEffect, "parallelogram", NodePart.ImageProviderProperties);

                m_dotString += String.Format("subgraph cluster_{0} {{ rank = same; label=\"LensBlurEffect with Kernels\"; graph[style=dotted]", NodeId(lensBlurEffect));

                Node(lensBlurEffect, "parallelogram", NodePart.GeneralProperties);

                foreach (var kernel in lensBlurEffect.Kernels)
                {
                    Node(kernel, "box", NodePart.GeneralProperties);
                }

                m_dotString += " } ";

                foreach (var kernel in lensBlurEffect.Kernels)
                {
                    Node(kernel, "box", NodePart.ImageProviderProperties);
                }
            }
            #endregion // LensBlurEffect

            #region FilterEffect
            private void Dot(FilterEffect filterEffect)
            {
                Subgraph(filterEffect);

                if (filterEffect.Filters != null)
                {
                    Dot(filterEffect.Filters);
                }
            }

            private void Dot(IEnumerable<IFilter> filters)
            {
                foreach (var filter in filters)
                {
                    if (filter is BlendFilter)
                    {
                        var blendFilter = filter as BlendFilter;

                        if (blendFilter.MaskSource != null)
                        {
                            Edge(blendFilter.MaskSource, blendFilter);
                            Dot(blendFilter.MaskSource);
                        }

                        if (blendFilter.ForegroundSource != null)
                        {
                            Edge(blendFilter.ForegroundSource, blendFilter);
                            Dot(blendFilter.ForegroundSource);
                        }
                    }
                }
            }

            private void Subgraph(FilterEffect filterEffect)
            {
                Node(filterEffect, "parallelogram", NodePart.ImageProviderProperties);

                m_dotString += String.Format("subgraph cluster_{0} {{ rank = same; label=\"FilterEffect with filters\"; graph[style=dotted]", NodeId(filterEffect));

                Node(filterEffect, "parallelogram", NodePart.GeneralProperties);
                
                foreach (var filter in filterEffect.Filters)
                {
                    Node(filter, "box");
                }

                m_dotString += " } ";
            }
            #endregion // FilterEffect

            private void Node(object obj, string shape = "oval", NodePart propertyCategory = NodePart.All)
            {
                NodePart visitedPart = NodePart.None;

                if (m_visitedNodes.TryGetValue(obj, out visitedPart))
                {
                    if ((visitedPart & propertyCategory) != 0)
                    {
                        return;
                    }

                    m_visitedNodes.Remove(obj);
                }

                m_visitedNodes.Add(obj, visitedPart | propertyCategory);

                string propertiesString = "";

                var properties = GetProperties(obj);

                foreach (var property in properties)
                {
                    var type = GetPropertyType(property);

                    if ((propertyCategory & NodePart.GeneralProperties) != 0 && type.IsPrimitive || type.IsValueType)
                    {
                        propertiesString += String.Format("\\n{0}: {1}", property.Name, property.GetValue(obj));
                    }

                    var enumerableTypes = GetGenericIEnumerables(type);
                    foreach (var enumerableType in enumerableTypes)
                    {
                        if (enumerableType == typeof(IImageProvider))
                        {
                            var imageProviders = property.GetValue(obj) as IEnumerable<IImageProvider>;
                            var i = 0;
                            foreach (var imageProvider in imageProviders)
                            {
                                Edge(imageProvider, obj, String.Format("{0}[{1}]", property.Name, i++));
                                Dot(imageProvider);
                            }
                        }
                    }

                    if ((propertyCategory & NodePart.ImageProviderProperties) != 0 && property.GetValue(obj) is IImageProvider)
                    {
                        Edge(property.GetValue(obj), obj, property.Name);
                        Dot(property.GetValue(obj) as IImageProvider);
                    }
                }

                if ((propertyCategory & NodePart.GeneralProperties) != 0)
                {
                    m_dotString += String.Format("{0} [label=\"{1}{2}\", shape=\"{3}\"]; ", NodeId(obj), obj.GetType().Name, propertiesString, shape);
                }
            }

            public List<Type> GetGenericIEnumerables(TypeInfo typeInfo)
            {                
                return typeInfo.ImplementedInterfaces
                        .Where(t => IntrospectionExtensions.GetTypeInfo(t).IsGenericType == true && t.GetGenericTypeDefinition() == typeof(IEnumerable<>))
                        .Select(t => t.GenericTypeArguments[0]).ToList();
            }

#if WINDOWS_PHONE

            private IEnumerable<System.Reflection.PropertyInfo> GetProperties(object obj)
            {
                return obj.GetType().GetProperties();
            }

            private System.Type GetPropertyType(System.Reflection.PropertyInfo property)
            {
                return property.PropertyType;
            }

#else

            private IEnumerable<System.Reflection.PropertyInfo> GetProperties(object obj)
            {
                return System.Reflection.IntrospectionExtensions.GetTypeInfo(obj.GetType()).DeclaredProperties;
            }

            private System.Reflection.TypeInfo GetPropertyType(System.Reflection.PropertyInfo property)
            {
                return System.Reflection.IntrospectionExtensions.GetTypeInfo(property.PropertyType);
            }

#endif
            private void Edge(object srcObj, object sinkObj, string label = "")
            {
                if (srcObj == null || sinkObj == null)
                {
                    return;
                }

                m_dotString += String.Format("{0} -> {1} [label=\"{2}\"]; ", NodeId(srcObj), NodeId(sinkObj), label);
            }


            private static string NodeId(object obj)
            {
                return obj.GetType().Name + obj.GetHashCode();
            }
        }
    }
}
