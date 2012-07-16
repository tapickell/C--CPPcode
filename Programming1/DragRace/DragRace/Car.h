// Car class header file
#pragma once

#include <string>

;using namespace std;

ref class Car
{
private:
	string *carName;
	int topSpeed;
	int brakeSpeed;
	int accelRate;
	bool finished;
	bool health;
	int distance;
	int curSpeed;
	int startPoint;
	int endPoint;
public:
	Car();
	//	setters
	void setCarName(string);
	void setTopSpeed(int);
	void setBrakeSpeed(int);
	void setAccelRate(int);
	void setCurrentSpeed(int);
	void setFinished(bool);
	void setHealth(bool);
	void setStartPoint(int);
	void setEndPoint(int);
	//	getters
	string* getCarName();
	int getTopSpeed();
	int getBrakeSpeed();
	int getAccelRate();
	bool getFinished();
	bool getHealth();
	int getDistance();
	int getCurrentSpeed();
	//	Methods
	void setupNewCar(string, int, int, int, int);
	void accel();
	void brake();
};

