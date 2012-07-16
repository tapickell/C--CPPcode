/* ***************************************************************************

Programmer: Todd Pickell

Filename: TrackClass.h

Requirements: None

Includes: "Form1.h", "stdafx.h"

Course: CISS 241 Introduction to Programming I

Date: January 31, 2012

Assignment: C++ Programming MidTerm Project

Description: Description of the program and objectives met

************************************************************************* */
#include <string>



class Track
{
public:
	Track();
	void setTrackName();
	void setTrackLength();
	void setSlowDownLane();
	void getTrackName();
	bool getTrackLength();
	bool getSlowDownLane();

private:
	/* TrackName;*/
	bool TrackLength;
	bool SlowDownLane;
};

	