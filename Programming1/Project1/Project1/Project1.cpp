//***************************************************************************

//Programmer: Todd Pickell

//Filename: Project1.cpp

//Requirements: <iostream>

//Includes: stdafx.h which includes targetver.h

//these are added by Visual Studio on project creation.

//Course: CISS 241 Introduction to Programming I

//Date: January 14, 2012

//Assignment: C++ Programming Project #1

//Description: Project1 Due 1-22, Prompts user for 2 numbers then do 

//arithmetic operations and display output to the screen. 

//Using Global variables for the user input.

//Watch out for the foot!

//*************************************************************************


#include "stdafx.h"
#include <iostream>

using namespace std;			 // so I don't have to do std::cout redundantly 

// function declaratioins
void printTitle();
void getInput();
void printOutput();
void printTest();
void greaterThan();
void getSum();
void getDiff();
void getProd();
void getQuot();
void fin();
void foot();

/* global variables to keep it simple, 
dont want to overcomplicate with passing 
variables on all the different functions */
int userNum1;
int userNum2;

int _tmain(int argc, _TCHAR* argv[]) // main function that everything else runs from
{
	printTitle();			// prints title & author
	getInput();				// gets the user input and stores it to global variables
	printOutput();			// calls math functions and prints output
	fin();					// ends program with a outro title & option to exit, option to exit isn't very good coding but works for now will try to create better option
	return 0;
}

void printTitle(){
	cout << "C++ Programming Project #1 \nby Todd Pickell \n"; // by Todd, thats me :)
}
void getInput(){
	cout << "Please enter first number:  "; 
	cin >> userNum1;			// Gets first number from user & store in userNum1
	cout << "Please enter second number:  ";
	cin >> userNum2;			 // Gets second number from user & store in userNum2
}

void printOutput(){				 // I stacked all of the math functions into one output function so the main looks cleaner
	printTest();
	greaterThan();
	getSum();
	getDiff();
	getProd();
	getQuot();
}

void printTest(){
	cout << "You entered " << userNum1 << " and " << userNum2 << endl;  // called this function printTest because i always print out to verify input for testing then remark it out later
}

/* I created a seperate function for each thing that needed to be performed on the variables
I learned that from working through a bunch of diferent programming books
I believe its for code portability purposes */

void greaterThan(){                       // and now for something logical (bad joke)
	if (userNum1 > userNum2)
		cout << userNum1 << " is greater than " << userNum2 << endl; // if its not greater than...
	else
		cout << userNum2 << " is greater than " << userNum1 << endl; //...it must be less than
}

void getSum(){
	cout << "The sum of these numbers is: " << userNum1 + userNum2 << endl;
}

void getDiff(){
	cout << "The difference of these numbers is: " << userNum1 - userNum2 << endl;
}

void getProd(){
	cout << "The product of these numbers is: " << userNum1 * userNum2 << endl;
}

void getQuot(){
	double dbl1 = userNum1;			//copying values over to local floating point variables to produce answer w/ decimal point
	double dbl2 = userNum2;
	double quotient = dbl1 / dbl2;
	cout << "The quotient of these numbers is: " << quotient << endl;
}

void fin(){   
	/* if this were a window based application, 
	 this is the point I would try to program in a 
	 killer bunny from Monty Python to jump out and go rawr! */
	bool yesNo;					// keepin it local
	cout << "This ends C++ Programming Project #1" << endl << "by Todd Pickell" << endl << "Press 1 to Exit " << endl;
	cin >> yesNo;
	foot();						// how about a foot instead ?!?!
	cout << "Hah, got ya. Ok, now you can press 1 to exit.";
	cin >> yesNo;
}

void foot(){
		cout << "                             :            :"<< endl;
		cout << "                             :            :"<< endl;
		cout << "                             :            :"<< endl;
		cout << "                             :            :"<< endl;
		cout << "                             :            :"<< endl;
		cout << "                            .'            :"<< endl;
		cout << "                        _.-\"              :"<< endl;
		cout << "                    _.-\"                  '."<< endl;
		cout << "    ..__...____...-\"                       :"<< endl;
		cout << "   : \_\                                    :"<< endl;
		cout << "   :    .--\"                                 :"<< endl;
		cout << "   `.__/  .-\" _                               :"<< endl;
		cout << "      /  /  ,\" ,-                            .'"<< endl;
		cout << "     (_)(`,(_,'L_,_____       ____....__   _.'"<< endl;
		cout << "      \"' \"             \"\"\"\"\"\"\"          \"\"\"       "<< endl; 
		/* obviously this makes a lovely Monty Python foot in ascii art
		btw, I ripped the ascii from master mitch's ascii art page
		http://www.cgarbs.de/ascii-art.en.html 
		just thought I should cite that */

}