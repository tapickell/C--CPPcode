//***************************************************************************

//Programmer: Todd Pickell

//Filename: Project2.cpp

//Requirements: User to select choices from the menu system and to enter employee details

//Includes: stdafx.h Employee.h

//Course: CISS 241 Introduction to Programming I

//Date: January 25, 2012

//Assignment: C++ Programming Project #2

//Description: This program takes in user input and creates new objects using the employee class file. 
//It uses a menu system to let the user choose what they would like to do. 

//The function monkeyEngine is named that because I felt like I was monkeying the code to make it do what I
//wanted and that it was not the best way to return the user to the menu but it was better than using a goto.

// monkeyEngine() is Copyright © 2012 Todd Pickell

//*************************************************************************
#include "stdafx.h"
#include "Employee.h"
#include <iostream>
#include <string>

using namespace std;

//	function declarations
void intro();
void monkeyEngine();
void exiting();
void menu();
void createEmployee();
void myExit();
void checkForInt();

//	Main
int _tmain(int argc, _TCHAR* argv[])
{
	intro();
	monkeyEngine();
	exiting();	//	Just in case program drops to here, (theoretically impossible), so program doesnt exit abruptly
	return 0;	//	^^ see above comment, Program should always exit with code 1337 from monkeyEngine();.
}

//	Displays introduction title
void intro()
{
	cout << "C++ Programming Project #2" << endl;
}

//	Displays exit title and shameless self promotional plug
void exiting()
{
	cout << "This ends C++ Programming Project #2\nby Todd Pickell\nFor this and other awesome projects please visit www.myitpro.info" << endl;
}

/*	Function that calls 2 main parts of program. 
	I seperated this out as its own function with an infinite while loop so that 
	at the end of a record creation process the user has the option to create 
	more records or exit. If user selects to exit from menu exit code 1337 given. */
void monkeyEngine()
{
	while(1 < 2)
	{
		menu();
		createEmployee();
	}
}

//	I made my own exit function to display a message and then exit with my special exit code
void myExit()
{
	cout << "Thank You." << endl;
		exiting();
		exit (1337);	//	because goto causes velociraptors to attack programmers
}

//	Function that determines whether the user wants to exit or create records
void menu()
{
	int selection; //	local variable to store user choice from menu
	cout << "MAIN MENU\nTo create a new employee record press 1.\nTo exit the program press 2." << endl;
	cin >> selection;
	cout << "You have choosen: " << selection << endl;
	if(selection != 1)
	{
		myExit();
	}
}

/*	This is the function that powers the employee creation process.
	User is prompted to add information, then new employee object
	is created using Employee Class. for loop iterates through number
	of employees specified by user in prompt*/
void createEmployee()
{
	int numEmployees;	// local variable for storing number of employees user would like to add

	//	prompts user and stores input
	cout << "How many new employees would you like to add?" << endl;
	cin >> numEmployees;
	//	testing for correct input
	if(numEmployees < 1 || numEmployees > 100)
	{
		cout << "Invalid Entry!" << endl;
		myExit();
	}
	//	verifys input is stored in variable properly
	cout << "You have choosen: " << numEmployees << endl;

	//	iteration loop for creation of the specified number of employees
	for(int i = 1; i <= numEmployees; i++)
	{
		//	local variables for iteration
		string FIRSTname;
		string LASTname;
		int EMPsalary;

		//	prompting user & getting input
		cout << "Please enter employee first name: " << endl;
		cin >> FIRSTname;
		cout << "Please enter employee last name: " << endl;
		cin >> LASTname;
		cout << "Please enter employee salary: " << endl;
		cin >> EMPsalary;
		//	check for invalid user input and boots user out if not an int.
		//	"We don't tolerate any invalid inputs around these parts, Best watch it or you'll get the boot!" lol.
		if(cin.fail())
		{
			cout << "Invalid Entry!" << endl;
			myExit();
		}
		if(EMPsalary < 0)
		{
			EMPsalary = 0;
		}
		//	verifys what user entered is stored in variables properly
		cout << "You entered: " << FIRSTname << " " << LASTname << " makes $" << EMPsalary << " each year." << endl;

		//	creating new employee object using input stored in local variables
		cout << "Please wait while your employee record is created. " << endl;
		Employee myEmployee(FIRSTname, LASTname, EMPsalary);
		//	verifying object was created properly and atributes can be accessed correctly
		cout << myEmployee.getFirstName() << " " << myEmployee.getLastName() << ", Salary $" << myEmployee.getSalary() << " added to ficticious Database I've yet to create." << endl;

		//	logic to test if user is done adding employee records
		if(i == numEmployees)
		{
			cout << "All new employee records added." << endl;
		}
		else
		{
			cout << "Enter information for next employee: " << endl;
		}
	}
}