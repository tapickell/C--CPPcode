/* ***************************************************************************

Programmer: Todd Pickell

Filename: testing.cpp

Requirements: 

Includes: "Form1.h" "stdafx.h"

Course: CISS 241 Introduction to Programming I

Date: Feb 12, 2012

Assignment: C++ Programming MidTerm Project

Description: A drag race simulator using C++ and forms fo user interface and simple animation

************************************************************************* */

#include "stdafx.h"
#include "Form1.h"

using namespace testing;

[STAThreadAttribute]
int main(array<System::String ^> ^args)
{
	// Enabling Windows XP visual effects before any controls are created
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false); 
	
	while(wannaRace == true)
	{
		// Create the main window and run it
		Application::Run(gcnew Form1());
	}
	return 0;
}
