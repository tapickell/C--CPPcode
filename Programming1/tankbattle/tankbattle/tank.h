#include <string>
#include <iostream>
#include <time.h>

;using namespace std;

class Tank
{
private:
	string name;// This is the player name
	int armor;//This is the “health” of your tank.
	int fuel;//How much fuel the player has left to move.
	int ammo;//How many bullets the player has left.
	int speed;//This is how far your tank “moves”
	bool lastShotHit;//Did the last shot score a hit?
	double shotAngle;//Angle of last shot.
	int position;//Where is the tank located on the X-Axis in our game “world".
	int gunPower;//How much damage is done by the gun. 
	int gunAccuracy;//How close you have to be to target to hit is. 
	double range;//Store range estimate. Default is -1.
	int lastCommand;//Store last command value. Default is -1.

public:
	//constructor
	Tank()
	{
		int randomnumber;//store a random number
		ammo=10;//Give players 10 bullets
		fuel=100;//Give players 100 fuel
		lastShotHit=false;
		shotAngle=-1;
		range=-1;
		lastCommand=-1;
		randomnumber=rand() % 8 + 2;//generate random number between 2 and 8
		armor=randomnumber;//set armor to random number value
		speed=10-armor;//set speed relative to armor
		randomnumber=rand() % 8 + 2;//generate random number between 2 and 8
		gunPower=randomnumber;//set gun power to random number
		gunAccuracy=10-gunPower;//set gun accuracy relative to gun power
	}//end constructor
	//mutators
	void setName(string myVal)
	{
		name=myVal;
	}//end function
	void setArmor(int myVal)
	{
		armor=myVal;
	}//end function
	void setFuel(int myVal)
	{
		fuel=myVal;
	}//end function
	void setAmmo(int myVal)
	{
		ammo=myVal;
	}//end function
	void setSpeed(int myVal)
	{
		speed=myVal;
	}//end function
	void setLastShotHit(bool myVal)
	{
		lastShotHit=myVal;
	}//end function
	void setShotAngle(double myVal)
	{
		shotAngle=myVal;
	}//end function
	void setPosition(int myVal)
	{
		position=myVal;
	}//end function
	void setGunPower(int myVal)
	{
		gunPower=myVal;
	}//end function
	void setGunAccuracy(int myVal)
	{
		gunAccuracy=myVal;
	}//end function
	void setLastCommand(int myVal)
	{
		lastCommand=myVal;
	}//end function

	void setRange(double myVal)
	{
		range=myVal;
	}//end function
	//accessors
	string getName()
	{
		return name;
	}//end function
	int getArmor()
	{
		return armor;
	}//end function
	int getFuel()
	{
		return fuel;
	}//end function
	int getAmmo()
	{
		return ammo;
	}//end function
	int getSpeed()
	{
		return speed;
	}//end function
	bool getlastShotHit()
	{
		return lastShotHit;
	}//end function
	double getShotAngle()
	{
		return shotAngle;
	}//end function
	int getPosition()
	{
		return position;
	}//end function
	int getGunPower()
	{
		return gunPower;
	}//end function
	int getGunAccuracy()
	{
		return gunAccuracy;
	}//end function
	double getRange()
	{
		return range;
	}//end function
	int getlastCommand()
	{
		return lastCommand;
	}//end function

	void newTank()
	{
		int randomnumber;//store a random number
		ammo=10;//Give players 10 bullets
		fuel=100;//Give players 100 fuel
		lastShotHit=false;
		shotAngle=-1;
		range=-1;
		lastCommand=-1;
		randomnumber=rand() % 8 + 2;//generate random number between 2 and 8
		armor=randomnumber;//set armor to random number value
		speed=10-armor;//set speed relative to armor
		randomnumber=rand() % 8 + 2;//generate random number between 2 and 8
		gunPower=randomnumber;//set gun power to random number
		gunAccuracy=10-gunPower;//set gun accuracy relative to gun power
	}//end function
}//end class