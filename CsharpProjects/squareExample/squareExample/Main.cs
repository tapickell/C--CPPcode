using System;

namespace squareExample
{
	class MainClass
	{
		public static void Main (string[] args)
		{
			int aValue = 768;
			int result;
			
			result = aValue * aValue;
			Console.WriteLine ("{0} squared is {1:N0}", aValue, result);
			Console.Read( );
		}
	}
}
