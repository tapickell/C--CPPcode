#include "StdAfx.h"
#include <string>
#include "Form1.h"
#include "Creator.h"
#include "MainClass.h"
#include "Car.h"
#include "Race.h"

;using namespace DragRace;

MainClass mainInstance;
Race thisRace;	// create new race object
Car car1;		// create new car object
Car car2;		// create new car object


Creator::Creator(void)
{
}

void Creator::Run()
{
	// Enabling Windows XP visual effects before any controls are created
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false); 

	mainInstance.Main();

	// Create the main window and run it
	Application::Run(gcnew Form1());
}// end method