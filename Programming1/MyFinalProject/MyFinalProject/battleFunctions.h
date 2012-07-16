/**
***************************************************************************

Programmer: Todd Pickell

Filename: battleFunctions.h

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

/**  sexy template for getting user input from prompt
    usage: getInput <myReturnDataTypeIwantBack> (myStringImPassingIn);
    myStringImPassingIn is the question you want to ask the user 
*/
template <class returnDataType>
returnDataType getInput(string stringIn)
{
    returnDataType userInput;// var to store user input
    cout<<stringIn;//   display prompt
    cin>>userInput;//   get input from prompt
    cout<<endl;//   endLine
    return userInput;// return the user input
}//end getInput


/** 
	my snazzy intro, I made the ascii tanks myself
    can't wait to get time to work on 2D graphic version 
*/
void showIntro()
{
    cout << "*********************************" << endl;
    cout << "*        Metal Tank v1.0        *" << endl;
    cout << "*                               *" << endl;
    cout << "*      _(@)_         _(@)_      *" << endl;
    cout << "*      X---X         X---X      *" << endl;
    cout << "*  Programming I Final Project  *" << endl;
    cout << "*        by Todd Pickell        *" << endl;
    cout << "*           02/24/12            *" << endl;
    cout << "*                               *" << endl;
    cout << "*       Metal Tank Qt v2.0      *" << endl;
    cout << "*         Coming Soon...        *" << endl;
    cout << "*********************************" << endl;
    cout << endl;
    cout << "Initializing Game" << endl;
    cout << endl;
}//end showIntro



/** 
	SSHHH!!! it's a secret...
	This is the menu accessed by entering 
	"pickle" as player name from initialization
*/
void superSecretMenu()
{
    string fakePass;
    cout << "Accessing Hidden System" << endl;
    cout << "Password:" << endl;
    cin >> fakePass;
    cout << endl;
    cout << "Access Granted!" << endl;
    cout << endl;
    cout << "Welcome Super User: " << endl;
    cout << endl;
    int choose1 = getInput <int> ("1. Play Game\n2. Root Prompt\n");
    if(choose1 == 2)
    {
        cout << endl;
        cout << "Getting Root Access to Host System" << endl;
        cout << endl;
        cout << "Access Granted!" << endl;
        cout << "type exit to return to game" << endl;
        cout << endl;
        system("powershell");// just to freak people out
    }
}//end superSercretMenu



/**  
	my 3 line menu system
	player can choose what the tank should do during that turn
*/
int showBattleMenu()
{
    string myMenu = "Tank Controls:\n1-Forward\n2-Back\n3-Fire\n4-Surrender\nEnter Choice: ";
    int userChoice = getInput <int> (myMenu);// using sexy template code
    return userChoice;// returning the users menu selection
}//end showBattleMenu


/**  
	calulates the flight path of the round and 
	displays hieght and distance at intervals
*/
double calcRoundTrajectory(double angleIn, double velocityIn)
{
    // setup variables for function
    double gravity = 9.80656;
    int myCounter = 0;
    double myDistance = 0;
    double myHeight = 6;
    angleIn *= 3.1415926536 / 180; //   converts degrees to radians

    cout << "__Distance__" << "    " <<"__Height__" << endl;
    cout << " [" << myDistance << "]    [" << myHeight << "]" << endl;

/** 
	This function simulates the round trajectory during flight
    I know that displaying the round hieght is not neccasary but
    Since I didn't get a GUI finished like I wanted
    this is the next best thing to seeing the round fly
*/
    while(myHeight >= 0)
    {
        // simulates time passing during round flight
        myCounter++;
        //  calculates distance the round travels
        myDistance = velocityIn * cos(angleIn) * myCounter;
        //  calculates height of round during flight
        myHeight = (velocityIn * sin(angleIn) * myCounter)-(gravity * (myCounter * myCounter))/2;
        cout << " [" << myDistance << "]    [" << myHeight << "]" << endl;
    }
    return myDistance;//    returns the last value for distance, where the round landed
}//end calcRoundTrajectory


