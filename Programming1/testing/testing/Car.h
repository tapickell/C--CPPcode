/* ***************************************************************************

Programmer: Todd Pickell

Filename: Car.h

Requirements: 

Includes: <string>

Course: CISS 241 Introduction to Programming I

Date: Feb 12, 2012

Assignment: C++ Programming MidTerm Project

Description: A drag race simulator using C++ and forms fo user interface and simple animation

************************************************************************* */
// Car class header file
#include <string>

using namespace std;

class Car
	{
	public:
		Car();	//	default constructor no params
		Car(string, int, int, int, int);	//	constructor w/ params
		void setupNewCar(string, int, int, int, int);	//setup to add params after default constructor
		//	Setters
		void setCarName(string);
		void setTopSpeed(int);
		void setBrakeSpeed(int);
		void setAccelRate(int);
		void setCurrentSpeed(int);
		void setStatus(bool);
		void setHealth(bool);
		void setStartPoint(int);
		void setEndPoint(int);
		//	Getters
		string getCarName();
		int getTopSpeed();
		int getBrakeSpeed();
		int getAccelRate();
		bool getStatus();
		bool getHealth();
		int getDistance();
		int getCurrentSpeed();
		//	Methods
		void accel();
		void brake();
	private:
		string carName;
		int topSpeed;
		int brakeSpeed;
		int accelRate;
		bool status;
		bool health;
		int distance;
		int curSpeed;
		int startPoint;
		int endPoint;
	};