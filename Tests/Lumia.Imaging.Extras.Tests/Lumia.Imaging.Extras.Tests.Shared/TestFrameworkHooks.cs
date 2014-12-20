using Microsoft.VisualStudio.TestPlatform.UnitTestFramework;

namespace Lumia.Imaging.Extras.Tests
{
    [TestClass]
    public class TestFrameworkHooks
    {
        [AssemblyCleanup]
        static public void WaitForIo()
        {
            ImageResults.Instance.CloseAndWait();
        }
    }
}