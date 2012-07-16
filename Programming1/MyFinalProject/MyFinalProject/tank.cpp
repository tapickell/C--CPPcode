/**
***************************************************************************

Programmer: Todd Pickell

Filename: tank.cpp

Requirements: User enters choices for game actions

Includes: tank.h stdafx.h

Course: CISS 241 Introduction to Programming I

Date: Febuary 22, 2012

Assignment: C++ Programming Tank Combat Game Final Project

Description: This program takes in user input at the command line
and creates new game objects using the tank class file.
It uses a menu system to let the user choose what they would like to do.
The game is 1 player vs 1 ai opponent.
The objective is to destroy the other tank before it destroys the player tank.

There is a hidden cheat mode that is not presented to the user called Root Tank.
This mode calls the rootTank() method of the tank class.
This method sets the fuelLevel, numRounds and armor to 10000.

*************************************************************************
*/
#include "stdafx.h"

#include "tank.h"


/**
	constructor
*/
Tank::Tank()
{
    rootName= "pickle";
	setplayerName("none");
	setxpos(25);
    setfuelLevel(100);
    setnumRounds(10);
    setarmor(10);
    setmoveDist(10);
    setroundVelocity(0);
    sethitsScored(0);
    setbarrelAngle(12);
    setlastShot(" ");
}//end constructor

/**
	renews tank settings, called when play again is selected from menu
*/
void Tank::newTank()
{
    setfuelLevel(100);
    setnumRounds(10);
    setarmor(10);
    setmoveDist(10);
    setroundVelocity(0);
    sethitsScored(0);
    setbarrelAngle(12);
    setlastShot(" ");
}// end newTank

/**
	my cheat mode settings, called when user enters "pickle" for name
*/
void Tank::rootTank()
{
	setxpos(25);
    setfuelLevel(10000);
    setnumRounds(10000);
    setarmor(10000);
    setmoveDist(10);
    setroundVelocity(0);
    sethitsScored(0);
    setbarrelAngle(12);
    setlastShot(" ");
}//end rootTank

/**
	moves the tank positive on the x axis
*/
void Tank::moveFwd()
{
    setmessage("Moving Forward");
	setxpos(getxpos()+getmoveDist());
	setfuelLevel(getfuelLevel()-1);
}//end moveFwd

/**
	moves the tank negative on the x axis
*/
void Tank::moveBack()
{
    setmessage("Moving Backward");
	setxpos(getxpos()-getmoveDist());
	setfuelLevel(getfuelLevel()-1);
}//end moveBack

/**
	simulates firing a round and reduces number of rounds by 1
*/
void Tank::fireRound()
{
	setmessage("Fire Round");
	setnumRounds(getnumRounds()-1);
}//end fireRound

/**
	setters
*/
void Tank::setmessage(string stringIn){message = stringIn;}

/**
	setplayerName uses string validation for player name, 
	it can only be letters and can contain spaces.
	so no " Robert'); DROP TABLE Students;-- "
	not that I use a database but still...
*/
void Tank::setplayerName(string stringIn)
{
	bool nameIsString = true;
	for(unsigned int i = 0; i < stringIn.length() && nameIsString == true; i++)
	{
		if(isalpha(stringIn[i]))
			continue;

		if(stringIn[i] == ' ')
			continue;

		nameIsString = false;
			break;
	}
	if(nameIsString == false)
	{
		playerName = "bob"; //just because I can
	}
	else
	{
		playerName = stringIn;
	}
}
void Tank::setxpos(int intIn){xpos = intIn;}

/**
	if user entered angle is out of range 
	it is set to min if higher or max if lower
*/
void Tank::setbarrelAngle(double dblIn)
{
	if(dblIn > 65)
	{
		barrelAngle = 65.00;
	}
	else if(dblIn < 12)
	{
		barrelAngle = 12.00;
	}
	else
	{
		barrelAngle = dblIn;
	}
}//end setbarrelAngle

/**
	if user entered velocity is out of range 
	it is set to min if higher or max if lower
*/
void Tank::setroundVelocity(double dblIn)
{
	if(roundVelocity > 80)
	{
		roundVelocity = 80;
	}
	else if(roundVelocity < 60)
	{
		roundVelocity = 60;
	}
	else
	{
		roundVelocity = dblIn;
	}
}//end setroundVelocity
void Tank::setroundDist(double dblIn){roundDist = dblIn;}
void Tank::setlastShot(string stringIn){lastShot = stringIn;}
void Tank::setarmor(int intIn){armor = intIn;}
void Tank::setmoveDist(int intIn){moveDist = intIn;}
void Tank::setnumRounds(int intIn){numRounds = intIn;}
void Tank::setfuelLevel(int intIn){fuelLevel = intIn;}
void Tank::sethitsScored(int intIn){hitsScored = intIn;}
/**
	getters
*/
string Tank::getmessage(){return message;}
string Tank::getplayerName(){return playerName;}
string Tank::getrootName(){return rootName;}
int Tank::getxpos(){return xpos;}
double Tank::getbarrelAngle(){return barrelAngle;}
double Tank::getroundVelocity(){return roundVelocity;}
double Tank::getroundDist(){return roundDist;}
string Tank::getlastShot(){return lastShot;}
int Tank::getarmor(){return armor;}
int Tank::getmoveDist(){return moveDist;}
int Tank::getnumRounds(){return numRounds;}
int Tank::getfuelLevel(){return fuelLevel;}
int Tank::gethitsScored(){return hitsScored;}
