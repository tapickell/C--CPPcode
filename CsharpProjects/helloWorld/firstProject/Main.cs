using System;

namespace firstProject
{
	class MainClass
	{
		public static void Main (string[] args)
		{
			string lineOne =   "*************************************";
			string lineTwo =   "*    Programming Assignment         *";
			string lineThree = "*    Developer:  Todd Pickell       *";
			string lineFour =  "*    Date Submitted: Sep 15 2011    *";
			string lineFive =  "*                                   *";
			string lineSix =   "*************************************";
			string[] myLines = new string[6] {lineOne, lineTwo, lineThree, lineFour, lineFive, lineSix};			
			foreach (string item in myLines) {
				Console.WriteLine(item);
			}
			Console.WriteLine(myName);
			
			
		}
	}
}
