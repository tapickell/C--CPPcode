using System;
namespace Square
{
	public class SquareExample
	{
		public static void Main( )
		{
			int aValue = 768;
			int result;
			
			result = aValue * aValue;
			Console.WriteLine ("{0} ft squared is {1:N0} ft", aValue, result);
			Console.Read( );
		}
	}
}