/* ***************************************************************************

Programmer: Todd Pickell

Filename: Race.h

Requirements: 

Includes: <string>

Course: CISS 241 Introduction to Programming I

Date: Feb 12, 2012

Assignment: C++ Programming MidTerm Project

Description: A drag race simulator using C++ and forms fo user interface and simple animation

************************************************************************* */
// Race Class header file
#include <string>

using namespace std;

class Race
	{
	public:
		Race();	//	default constructor takes no params
		//	setters
		void setTrackName(string);
		void setTrackLength(string);
		void setSlowLength(string);
		void setWinner(string);
		//	getters
		string getTrackName();
		string getTrackLength();
		string getSlowLength();
		string getWinner();

	private:
		string trackName;
		string winner;
		string trackLength;
		string slowLength;
};