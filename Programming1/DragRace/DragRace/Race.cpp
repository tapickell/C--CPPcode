//Race class implementation file
#include "StdAfx.h"
#include <string>
#include "Race.h"


Race::Race()
{
	setTrackName("  ");
	setTrackLength("long");
	setSlowLength("long");
}
//	setters **************************************
void Race::setRaceRunning(bool boolIn)
{
	raceRunning = boolIn;
}// end method

void Race::setTrackName(string stringIn)
{
	*trackName = stringIn;
}// end method

void Race::setTrackLength(string stringIn)
{
	*trackLength = stringIn;
}// end method

void Race::setSlowLength(string stringIn)
{
	*slowLength = stringIn;
}// end method

void Race::setWinner(string stringIn)
{
	*winner = stringIn;
}// end method

//	getters ************************************
bool Race::getRaceRunning()
{
	return raceRunning;
}// end method

string* Race::getTrackName()
{
	return trackName;
}// end method

string* Race::getTrackLength()
{
	return trackLength;
}// end method

string* Race::getSlowLength()
{
	return slowLength;
}// end method

string* Race::getWinner()
{
	return winner;
}// end method