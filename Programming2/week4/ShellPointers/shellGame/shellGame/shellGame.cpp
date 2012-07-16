// shellGame.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <time.h>
#include <string.h>

using namespace std;

int myShell = 1;
int notMyShell = 0;

/* method declarations */
int getRandomShell();
void displayResults(bool);
bool getPlayersChoice(int *, int *, int *);
bool testPointer(int *);
void playAgain(bool&);

/* main */
int _tmain(int argc, _TCHAR* argv[])
{
	/* create 3 pointer variables to represent my shells */
	int *ptr1;
	int *ptr2;
	int *ptr3;

	/* booleans to set states of winning and playing */
	bool winnner = false;
	bool playing = true;

	srand(time(0)); // seed for random 

	cout << "Welcome to the shell game" << endl;

	while (playing == true)
	{
		/* set pointers to point at the address of notMyShell */
		ptr1 = &notMyShell;
		ptr2 = &notMyShell;
		ptr3 = &notMyShell;

		/* get random number to represent what shell the pea is under */
		int theShell = getRandomShell();
		switch(theShell){
		case 0:
			ptr1 = &myShell; // set pointer 1 to point at myShell
			break;
		case 1:
			ptr2 = &myShell; // set pointer 2 to point at myShell
			break;
		case 2:
			ptr3 = &myShell; // set pointer 3 to point at myShell
			break;
		}
		/* debug */
		//cout << "ptr1: " << *ptr1 << " ptr2: " << *ptr2 << " ptr3 " << *ptr3 << endl;

		winnner = getPlayersChoice(ptr1, ptr2, ptr3); // get choice from player and set if won or lost
		displayResults(winnner); // display win or lose 
		playAgain(playing); // see if player wants to try again
	}

	cout << "Thank you for playing" << endl;

	system("pause");
	return 0;
}

/*
	returns random number representing random 
	shell choice to hide pea under
*/
int getRandomShell() 
{
	int myChoice = rand()%3;
	cout << endl;
	return myChoice;
}

/*
	takes in boolean value that represents if 
	player won or lost then displays the corresponding
	string of text
*/
void displayResults(bool boolIn)
{
	if (boolIn == true)
	{
		cout << "\nYou win, Lucky pick" << endl;
	} 
	else
	{
		cout << "\nWrong choice, You lose" << endl;
	}
}

/*
	takes in 3 pointers
	asks the player to enter a shell choice
	returns the value of the test pointer function
*/
bool getPlayersChoice(int * ptr1, int * ptr2, int * ptr3 )
{
	int choice = 0;
	cout << "Pick a shell, any shell:" << endl;
	cout << "1, 2, or 3" << endl;
	cin >> choice;
	switch(choice){
	case 1:
		return testPointer(ptr1);
		break;
	case 2:
		return testPointer(ptr2);
		break;
	case 3:
		return testPointer(ptr3);
		break;
	default:
		return false;
		break;
	}
}

/*
	takes in a bool by reference
	asks the player if the want to try again
	sets the playing variable to false if not
*/
void playAgain(bool &boolIn)
{
	int again;
	cout << "\nPlay Again?\n1. yes\n2. no" << endl;
	cin >> again;
	if (again != 1)
	{
		boolIn = false;
	}
}

/*
	takes in a pointer and then
	tests the value it is pointing to
	if it is 1 it returns true to the calling
	method, if not it returns false
*/
bool testPointer(int *ptrIn)
{
	int temp = *ptrIn;
	if (temp == 1)
	{
		return true;
	} 
	else
	{
		return false;
	}

}