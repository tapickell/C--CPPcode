// DragOOD.cpp : main project file.

#include "stdafx.h"
#include "Form1.h"
#include "MainClass.h"
#include "Car.h"
#include "Race.h"

using namespace DragOOD;

[STAThreadAttribute]
int main(array<System::String ^> ^args)
{
	// Enabling Windows XP visual effects before any controls are created
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false); 

	static bool wannaRace = true;

	while(wannaRace == true)
	{
		MainClass mainInstance;
		Race thisRace;
		Car car1;
		Car car2;
		// Create the main window and run it
		Application::Run(gcnew Form1());
	}
	return 0;
}
