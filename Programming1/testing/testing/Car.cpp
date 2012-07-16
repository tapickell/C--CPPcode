/* ***************************************************************************

Programmer: Todd Pickell

Filename: Car.cpp

Requirements: 

Includes: <string> "stdafx.h" "Car.h"

Course: CISS 241 Introduction to Programming I

Date: Feb 12, 2012

Assignment: C++ Programming MidTerm Project

Description: A drag race simulator using C++ and forms fo user interface and simple animation

************************************************************************* */
// Car class implementation file
#include "stdafx.h"
#include <string>
#include "Car.h"

using namespace std;

Car::Car()	//	default constructor no params
{
	setCarName("  ");
	setTopSpeed(0);
	setBrakeSpeed(0);
	setAccelRate(0);
	setStartPoint(13);
	setStatus(false);
	setHealth(false);
	curSpeed = 0;
}
Car::Car(string carNameIn, int topSpeedIn, int brakeSpeedIn, int accelRateIn, int startPointIn) //	constructor w/ params
{
	setCarName(carNameIn);
	setTopSpeed(topSpeedIn);
	setBrakeSpeed(brakeSpeedIn);
	setAccelRate(accelRateIn);
	setStartPoint(startPointIn);
	setStatus(false);
	setHealth(false);
	curSpeed = 0;
}
void Car::setupNewCar(string stringIn, int intIn1, int intIn2, int intIn3, int intIn4)	 //setup to add params after default constructor
{
	setCarName(stringIn);
	setTopSpeed(intIn1);
	setBrakeSpeed(intIn2);
	setAccelRate(intIn3);
	setStartPoint(intIn4);
	setStatus(false);
	setHealth(true);
	curSpeed = 0;
}
//	Setters ***********************************
void Car::setCarName(string stringIn)
{
	carName = stringIn;
}
void Car::setTopSpeed(int intIn)
{
	topSpeed = intIn;
}
void Car::setBrakeSpeed(int intIn)
{
	brakeSpeed = intIn;
}
void Car::setAccelRate(int intIn)
{
	accelRate = intIn;
}
void Car::setCurrentSpeed(int intIn)
{
	curSpeed = intIn;
}
void Car::setStatus(bool boolIn)
{
	status = boolIn;
}
void Car::setHealth(bool boolIn)
{
	health = boolIn;
}
void Car::setStartPoint(int intIn)
{
	startPoint = intIn;
}
void Car::setEndPoint(int intIn)
{
	endPoint = intIn;
}
//	Getters ************************************
string Car::getCarName()
{
	return carName;
}
int Car::getTopSpeed()
{
	return topSpeed;
}
int Car::getBrakeSpeed()
{
	return brakeSpeed;
}
int Car::getAccelRate()
{
	return accelRate;
}
bool Car::getStatus()	//finished or not finished
{
	return status;
}
bool Car::getHealth()
{
	return health;
}
int Car::getDistance()
{
	distance = endPoint - startPoint;	//	could add * or / by some number to give realistic data numbers / miles, km
	return distance;
}
int Car::getCurrentSpeed()
{
	return curSpeed;
}
//	Methods ************************************
void Car::accel()	// accelerates the car
{
	curSpeed += accelRate;
}
void Car::brake()	//	decelerates the car
{
	curSpeed -= brakeSpeed/2;
}