/* ***************************************************************************

Programmer: Todd Pickell

Filename: MidtermProject.cpp

Requirements: None

Includes: "Form1.h", "stdafx.h"

Course: CISS 241 Introduction to Programming I

Date: January 31, 2012

Assignment: C++ Programming MidTerm Project

Description: Description of the program and objectives met

************************************************************************* */

#include "stdafx.h"
#include "Form1.h"
/*#include "Car.h"
#include "Track.h"*/



[STAThreadAttribute]
int main(array<System::String ^> ^args)
{
	// Enabling Windows XP visual effects before any controls are created
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false); 

	// Create the main window and run it
	Application::Run(gcnew Form1());
	return 0;
}
