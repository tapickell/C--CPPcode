#include "StdAfx.h"
#include <string>
#include "Car.h"


Car::Car()
{
	setCarName("  ");
	setTopSpeed(0);
	setBrakeSpeed(0);
	setAccelRate(0);
	setStartPoint(13);
	setFinished(false);
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
	setFinished(false);
	setHealth(true);
	curSpeed = 0;
}// end method

//	Setters ***********************************
void Car::setCarName(string stringIn)
{
	*carName = stringIn;
}// end method

void Car::setTopSpeed(int intIn)
{
	topSpeed = intIn;
}// end method

void Car::setBrakeSpeed(int intIn)
{
	brakeSpeed = intIn;
}// end method

void Car::setAccelRate(int intIn)
{
	accelRate = intIn;
}// end method

void Car::setCurrentSpeed(int intIn)
{
	curSpeed = intIn;
}// end method

void Car::setFinished(bool boolIn)
{
	finished = boolIn;
}// end method

void Car::setHealth(bool boolIn)
{
	health = boolIn;
}// end method

void Car::setStartPoint(int intIn)
{
	startPoint = intIn;
}// end method

void Car::setEndPoint(int intIn)
{
	endPoint = intIn;
}// end method

//	Getters ************************************
string* Car::getCarName()
{
	return carName;
}// end method

int Car::getTopSpeed()
{
	return topSpeed;
}
int Car::getBrakeSpeed()
{
	return brakeSpeed;
}// end method

int Car::getAccelRate()
{
	return accelRate;
}// end method

bool Car::getFinished()	//finished or not finished
{
	return finished;
}// end method

bool Car::getHealth()
{
	return health;
}// end method

int Car::getDistance()
{
	distance = endPoint - startPoint;
	return distance;
}// end method

int Car::getCurrentSpeed()
{
	return curSpeed;
}// end method

//	Methods ************************************
void Car::accel()	// accelerates the car
{
	curSpeed += accelRate;
}// end method

void Car::brake()	//	decelerates the car
{
	curSpeed -= brakeSpeed/2;
}// end method