#include "stdafx.h"
#include <iostream>
#include "GradeBook.h"

using namespace std;
//using namespace GradeBook;


GradeBook::GradeBook( string name )
{
	setCourseName( name );
}

void GradeBook::setCourseName( string name )
{
	if( name.length() <= 25 )
		courseName = name;
	else
	{
		courseName = name.substr(0,25);
		cout << "Name \"" << name << "\" exceeds maximum length (25).\n" << "Limiting courseName to first 25 characters.\n" << endl;
	}
}

string GradeBook::getCourseName()
{
	return courseName;
}

// displays welcome message
void GradeBook::displayMessage()
{
	cout << "Welcome to the Grade Book for\n" << getCourseName() << endl;
}
