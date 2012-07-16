using System;

namespace CarpetCalc
{
	class MainClass
	{
		public static void Main (string[] args)
		{
			const int SQFTPERSQYD = 9;
			const int INCHPERFT = 12;
			const string BESTCARPET = "Berber";
			const string ECONOMYCARPET = "Pile";
			const double BERBERPRICE = 27.95;
			const double PILEPRICE = 15.95;
			
			int roomLenghtFeet = 12;
			int	roomLengthInches = 2;
			int	roomWidthFeet = 14;
			int	roomWidthInches = 7;
			
			double roomLength, roomWidth, numOfSqFt, numOfSqYds, berberCost, pileCost;
			
			roomLength = roomLenghtFeet + roomLengthInches / INCHPERFT;
			roomWidth = roomWidthFeet + roomWidthInches / INCHPERFT;
			numOfSqFt = roomLength * roomWidth;
			numOfSqYds = numOfSqFt / SQFTPERSQYD;
			berberCost = numOfSqYds * BERBERPRICE;
			pileCost = numOfSqYds * PILEPRICE;
			
			Console.WriteLine ("The {0} carpet is {1:C}; The {2} carpet is {3:C}", BESTCARPET, berberCost, ECONOMYCARPET, pileCost);
			
		}
	}
}
