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

//*************************************************************************
#include <string>

using namespace std;

class Employee
	{
	public:
		Employee();
		Employee( string, string, int );
		void setFirstName( string );
		void setLastName( string );
		void setSalary( int );
		string getFirstName();
		string getLastName();
		int getSalary();

	private:
		string FirstName;
		string LastName;
		int Salary;
	};
