/* ***************************************************************************

Programmer: Todd Pickell

Filename: Race.cpp

Requirements: 

Includes: <string> "stdafx.h" "Race.h"

Course: CISS 241 Introduction to Programming I

Date: Feb 12, 2012

Assignment: C++ Programming MidTerm Project

Description: A drag race simulator using C++ and forms fo user interface and simple animation

************************************************************************* */
//Race class implementation file


#include "stdafx.h"
#include <string>
#include "Race.h"

using namespace std;

Race::Race()	//	default constructor takes no params
{
	setTrackName("  ");
	setTrackLength("long");
	setSlowLength("long");
}
//	setters **************************************
void Race::setTrackName(string stringIn)
{
	trackName = stringIn;
}
void Race::setTrackLength(string stringIn)
{
	trackLength = stringIn;
}
void Race::setSlowLength(string stringIn)
{
	slowLength = stringIn;
}
void Race::setWinner(string stringIn)
{
	winner = stringIn;
}
//	getters ************************************
string Race::getTrackName()
{
	return trackName;
}
string Race::getTrackLength()
{
	return trackLength;
}
string Race::getSlowLength()
{
	return slowLength;
}
string Race::getWinner()
{
	return winner;
}
