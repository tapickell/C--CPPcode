/**
***************************************************************************

Programmer: Todd Pickell

Filename: tank.h

Requirements: User enters choices for game actions

Includes: stdafx.h

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


using namespace std;

class Tank
{
public:
    //  constructor
    Tank();
	// methods
	void newTank();
    void rootTank(); //  I am Root Tank, all shall fear me.
    void moveFwd();
    void moveBack();
	void fireRound();
    //  setters
	void setmessage(string);
    void setplayerName(string);
	void setlastShot(string);
    void setxpos(int);
    void setbarrelAngle(double);
    void setroundVelocity(double);
	void setroundDist(double);
    void setarmor(int);
    void setmoveDist(int);
    void setnumRounds(int);
    void setfuelLevel(int);
    void sethitsScored(int);
    //  getters
	string getmessage();
    string getplayerName();
    string getrootName();
	string getlastShot();
    int getxpos();
    double getbarrelAngle();
    double getroundVelocity();
	double getroundDist();
    int getarmor();
    int getmoveDist();
    int getnumRounds();
    int getfuelLevel();
    int gethitsScored();

private:
	string message;
    string playerName;
    string rootName;
	string lastShot;
    int xpos;
    double barrelAngle;
    double roundVelocity;
	double roundDist;
    int armor;
    int moveDist;
    int numRounds;
    int fuelLevel;
    int hitsScored;

};


