#if UNITY_ANDROID || UNITY_IPHONE || UNITY_STANDALONE_OSX || UNITY_TVOS
// WARNING: Do not modify! Generated file.

namespace UnityEngine.Purchasing.Security {
    public class GooglePlayTangle
    {
        private static byte[] data = System.Convert.FromBase64String("mpWstKxUJaJ7B9dzbqNVy6TH4XqdFk+ZbHp2q4Zs8J2z0LhVsT1ec7Fuu+Iu2gtjZqMGlDbmQbv1RIdmbFFox7+dZAfXrvhXgpLdUY/01OjmZWtkVOZlbmbmZWVkscNbuH3ptMdDHbyGMDlW9k30HWcXab9vPNkOZhuDGlVbkPzZR0POK5W7zzXycLMc6uQ1LAEyW6pQaqAAYjqWH2wJdbhNdvSmetcW2eLfHuhGvCjuFjcoZeYWCBKh36DI3uI/7AOQb5BOu3Ni2w7Sd3nFO5q7qQ9YqpklMKYbglTmZUZUaWJtTuIs4pNpZWVlYWRnUwt/5LQNJFV4tTA34TTJFuvoHCoViDKREVXoG7rJch03aeMgNnSB4BuB5ugjVcGr72ZnZWRl");
        private static int[] order = new int[] { 4,10,7,9,10,13,8,9,13,11,13,13,12,13,14 };
        private static int key = 100;

        public static readonly bool IsPopulated = true;

        public static byte[] Data() {
        	if (IsPopulated == false)
        		return null;
            return Obfuscator.DeObfuscate(data, order, key);
        }
    }
}
#endif
