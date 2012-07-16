/* ***************************************************************************

Programmer: Todd Pickell

Filename: CarClass.h

Requirements: None

Includes: "Form1.h", "stdafx.h"

Course: CISS 241 Introduction to Programming I

Date: January 31, 2012

Assignment: C++ Programming MidTerm Project

Description: Description of the program and objectives met

************************************************************************* */



class Car
{
public:
	Car();
	void setTopSpeed();
	void setBrakingSpeed();
	void setAccelerationRate();
	void setCarHealth();
	void setCarMileage();
	int getTopSpeed();
	int getBrakingSpeed();
	int getAccelerationRate();
	bool getCarHealth();
	int getCarMileage();

private:
	int TopSpeed;
	int BrakingSpeed;
	int AccelerationRate;
	bool CarHealth;
	int CarMileage;
};
