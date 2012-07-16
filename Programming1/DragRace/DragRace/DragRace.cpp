// DragRace.cpp : main project file.

#include "stdafx.h"
#include "Creator.h"


//[STAThreadAttribute]
int main(array<System::String ^> ^args)
{
	// Create MainClass object && call Main method
	//MainClass ^mainInstance = gcnew MainClass();
	//mainInstance->Main();
	/*MainClass mainInstance;*/
	//AlarmEventHandler^ alhandler = gcnew AlarmEventHandler(w, &MainClass::AlarmRang);// Instantiate the event delegate
	//mainInstance.Main();
	bool wannaRace;
	wannaRace = true;
	while(wannaRace = true)
	{
		Creator Genesis;
		Genesis.Run();
	}
	return 0;
}// end main
