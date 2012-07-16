// GradeBook.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include "GradeBook.h"

using namespace std;

int _tmain(int argc, _TCHAR* argv[])
{
	GradeBook myGradeBook1("CS101");
	GradeBook myGradeBook2("CS102");
	myGradeBook1.displayMessage();
	myGradeBook2.displayMessage();
	return 0;
}

