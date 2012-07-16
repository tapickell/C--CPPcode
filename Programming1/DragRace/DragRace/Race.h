// Race Class header file
#pragma once

#include <string>

;using namespace std;

ref class Race
{
private:
	bool raceRunning;
	string *trackName;
	string *winner;
	string *trackLength;
	string *slowLength;
public:
	Race();
	//	setters
	void setRaceRunning(bool);
	void setTrackName(string);
	void setTrackLength(string);
	void setSlowLength(string);
	void setWinner(string);
	//	getters
	bool getRaceRunning();
	string* getTrackName();
	string* getTrackLength();
	string* getSlowLength();
	string* getWinner();
};

