//***************************************************************************

//Programmer: Todd Pickell

//Filename: Project2.cpp

//Requirements: User to select choices from the menu system and to enter employee details

//Includes: stdafx.h employee.h

//Course: CISS 241 Introduction to Programming I

//Date: January 25, 2012

//Assignment: C++ Programming Project #2

//Description: This program takes in user input and creates new objects using the employee class file. 
//It uses a menu system to let the user choose what they would like to do.
//*************************************************************************
#include "stdafx.h"
#include <iostream>
#include "Employee.h"

using namespace std;

Employee::Employee()
{
	cout << "You must initialize this object with (FirstName, LastName, Salary)" << endl;
}
Employee::Employee( string firstName, string lastName, int salary )
{
	setFirstName( firstName );
	setLastName( lastName );
	setSalary( salary );
}

void Employee::setFirstName( string firstName )
{
	if( firstName.length() <= 12 )
		FirstName = firstName;
	else
	{
		FirstName = firstName.substr(0,12);
		cout << "Name \"" << firstName << "\" exceeds maximum length (12).\n" << "Limiting Name to first 12 characters.\n" << endl;
	}
}

void Employee::setLastName( string lastName )
{
	if( lastName.length() <= 16 )
		LastName = lastName;
	else
	{
		LastName = lastName.substr(0,16);
		cout << "Name \"" << lastName << "\" exceeds maximum length (16).\n" << "Limiting Name to first 16 characters.\n" << endl;
	}
}

void Employee::setSalary( int salary )
{
	Salary = salary;
}
string Employee::getFirstName()
{
	return FirstName;
}
string Employee::getLastName()
{
	return LastName;
}
int Employee::getSalary()
{
	return Salary;
}