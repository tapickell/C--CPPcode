/**
***************************************************************************

Programmer: Todd Pickell

Filename: MyFinalProject.cpp

Requirements: User enters choices for game actions

Includes: tank.h battleFunctions.h stdafx.h

Course: CISS 241 Introduction to Programming I

Date: Febuary 22, 2012

Assignment: C++ Programming Tank Combat Game Final Project

Description: This program takes in user input at the command line
and creates new game objects using the tank class file.
It uses a menu system to let the user choose what they would like to do.
The game is 1 player vs 1 ai opponent.
The objective is to destroy the other tank before it destroys the player tank.

There is a hidden cheat mode that is not presented to the user called Root Tank.
This mode calls the rootTank() method of the tank class.
This method sets the fuelLevel, numRounds and armor to 10000.

*************************************************************************
*/

/**
	I placed all of my other includes into the "stdafx.h" file
	it works out well that way and cleans up the main files
*/
#include "stdafx.h"

/** my includes for the tank class and my battle functions */
#include "tank.h"
#include "battleFunctions.h"

/** so I dont have to type std:: anymore :) */
using namespace std;

void displayTurnStats(Tank, Tank);

int restartFlag = 1;

int _tmain(int argc, _TCHAR* argv[])
{
	while(restartFlag == 1) // when set to anything other than 1 exits program
	{
		showIntro();
		// create tanks
		Tank playerTank;
		Tank enemyTank;

/**
	using x axis from 0 - 600 as playing field
	tanks start 50 units from end and are not allowed
	to move off field. xpos is the center of tank
	and 0 on y axis, turret is 6 units up on y.
	I gave the tanks 30 units on either side of xpos 
	for tank length and to add arcade fun factor, 
*/
		/*setupPlayer(playerTank, enemyTank);*/
		string nameString = getInput <string> ("Enter your name: ");
		playerTank.setplayerName(nameString);
		playerTank.setxpos(50);
		if(nameString == "pickle")
		{
			playerTank.rootTank();// cheat mode settings
			superSecretMenu();// fake menu for dramatic effect
		}
		enemyTank.setplayerName("General Morden");
		enemyTank.setxpos(550);

/**
	I originally tried using this as a seperate function 
	and passing the tank objects to it, but that would 
	reset the values of the objects like they were new again
*/
		/*monkeyEngine(playerTank, enemyTank);*/
		int turnCounter = 1;
		bool gameOn = true;
		while(gameOn == true)
		{
			cout << "        ******METAL  TANK****** " << endl;
			cout << endl;
			cout << "Turn: " << turnCounter << endl;
			cout << playerTank.getmessage() << endl;
			displayTurnStats(playerTank, enemyTank);
			cout << endl;
/**
	This is the menu that allows the user to choose what 
	move they want to make, Fwd, Back, Fire or Exit
*/
			int menu = showBattleMenu();
			switch(menu)
			{
			case 1:	
				//	player selects move forward from menu
				if(playerTank.getfuelLevel()>0 && playerTank.getxpos()<300)
				{
					playerTank.moveFwd();
				}
				else
				{
					playerTank.setmessage("You can't move that way!");
				}
				break;
			case 2:
				//	player selects move backward from menu
				if(playerTank.getfuelLevel()>0 && playerTank.getxpos()>playerTank.getmoveDist())
				{
					playerTank.moveBack();
				}
				else
				{
					playerTank.setmessage("You can't move that way!");
				}
				break;
			case 3:	
				//	player selects fire round from menu
				if(playerTank.getnumRounds()>0)
				{
					int angleInt = getInput <int>("Enter angle (12-65): ");// angles are from M1-Abrams tank
					playerTank.setbarrelAngle(angleInt);
					int velInt = getInput <int>("Enter velocity (60-80): ");// the 60-80 are to keep the player within range
					playerTank.setroundVelocity(velInt);
					playerTank.fireRound();
					double myRound = calcRoundTrajectory(playerTank.getbarrelAngle(), playerTank.getroundVelocity());
					playerTank.setroundDist(myRound);
					double finalRoundPos = (playerTank.getxpos() + playerTank.getroundDist());
					if(finalRoundPos > (enemyTank.getxpos() - 30) && finalRoundPos < (enemyTank.getxpos() + 30))
					{
						playerTank.setlastShot("Direct Hit!");
						enemyTank.setarmor(enemyTank.getarmor() - 4);
						playerTank.sethitsScored(playerTank.gethitsScored()+1);
					}
					else if(finalRoundPos > (enemyTank.getxpos() + 30))
					{
						playerTank.setlastShot("Over Shot!");
					}
					else
					{
						playerTank.setlastShot("Fell Short!");
					}
				}
				else
				{
					playerTank.setmessage("You have run out of Ammo!");
				}
				break;
			case 4:	
				//	player selects exit from menu
				restartFlag = 0;
				gameOn = false;
           
				break;
			default:
				//anything else, displays this and the player loses a turn, choose wisely they must.
				cout << "System Error!" << endl;
			}
			turnCounter++; // increments turn indicator display

/**
	checks to see if player won yet
	I placed it here instead of at the end
	of the ai tanks turn so that if player 
	won there is no need to run ai code
*/
			if(enemyTank.getarmor() <= 0 || enemyTank.getnumRounds() <= 0)
			{
				cout << "******************************" << endl;
				cout << "*         Player 1           *" << endl;
				cout << "*           WINS!            *" << endl;
				cout << "******************************" << endl;
				cout << endl;
				int answer = getInput <int> ("1-Play Again.\n2-Exit Game\n");
				if(answer == 1)
				{
					gameOn = false;
					
				}
				else
				{
					gameOn = false;
					restartFlag = 0;
				}
			}
/**
	Enemy tank ai turn
	does same thing as players turn selection
	except uses random number to select menu
	choice for ai player. not very intelligent 
	ai but seems to work good for this game.
*/
			int randNum = rand() % 3 + 1;
			switch(randNum)
			{
			case 1:	
				//	ai selects move forward from menu
				if(enemyTank.getfuelLevel()>0 && enemyTank.getxpos()>300)
				{
					enemyTank.moveBack();
				}
				else
				{
					enemyTank.setmessage("You can't move that way!");
				}
				break;
			case 2:
				//	ai selects move backward from menu
				if(enemyTank.getfuelLevel()>0 && enemyTank.getxpos()<600)
				{
					enemyTank.moveFwd();
				}
				else
				{
					enemyTank.setmessage("You can't move that way!");
				}
				break;
			case 3:	
				//	ai selects fire round from menu
				if(enemyTank.getnumRounds()>0)
				{
					int angleInt = rand() % 65 + 30;
					enemyTank.setbarrelAngle(angleInt);
					int velInt = rand() % 80 + 65;
					enemyTank.setroundVelocity(velInt);
					enemyTank.fireRound();
					double myRound = calcRoundTrajectory(enemyTank.getbarrelAngle(), enemyTank.getroundVelocity());
					enemyTank.setroundDist(myRound);
					double finalRoundPos = (enemyTank.getxpos() - enemyTank.getroundDist());
					if(finalRoundPos > (playerTank.getxpos() - 30) && finalRoundPos < (playerTank.getxpos() + 30))
					{
						enemyTank.setlastShot("Direct Hit!");
						playerTank.setarmor(playerTank.getarmor() - 4);
						enemyTank.sethitsScored(enemyTank.gethitsScored()+1);
					}
					else if(finalRoundPos < (playerTank.getxpos() + 30))
					{
						enemyTank.setlastShot("Over Shot!");
					}
					else
					{
						enemyTank.setlastShot("Fell Short!");
					}
				}
				else
				{
					enemyTank.setmessage("You have run out of Ammo!");
				}
				break;
			default:
				//anything else, displays this and the player loses a turn, choose wisely they must.
				cout << "User Error!" << endl;
			}
/**
	checks to see if player lost
*/
			if(playerTank.getarmor() <= 0 || playerTank.getnumRounds() <= 0)
			{
				cout << "******************************" << endl;
				cout << "*         Player 1           *" << endl;
				cout << "*           loses            *" << endl;
				cout << "******************************" << endl;
				cout << endl;
				int answer = getInput <int> ("1-Play Again.\n2-Exit Game\n");
				if(answer == 1)
				{
					gameOn = false;
					
				}
				else
				{
					gameOn = false;
					restartFlag = 0;
				}
			}
		}
	}
/**
	this sequence is displayed upon exiting the game
	it provides self-promoting information about my next release
	and legal disclosure
*/
	cout << "Ending Game Sequence" << endl;
		cout << endl;
		cout << "Thank you for playing Metal Tank v1.0" << endl;
		cout << endl;
		cout << "Metal Tank Qt v2.0 coming this fall" << endl;
		cout << endl;
		cout << "*No actual hacking is done by this program,\nall percieved hacking is just an illusion of gameplay\nand not to be percieved as a threat. This program doesn't\nactaully gain root access to the host system. User of this software\nassumes all responsibilty for anything entered at the powershell\nprompt from the secret menu. Shhh, that's a secret.\nThank you." << endl;
    cout << endl;
	system("pause"); // pause so you can actully see the ending before exit
	return 0;
}// end main

/**  
	stat menu displayed every turn, the only function 
	that I could get passing objects to work with
	tried to make the stat menu seem as if it was a static 
	screen that updated each turn instead of a scrolling display
*/
void displayTurnStats(Tank tank1, Tank tank2)
{
    cout << tank1.getplayerName() << "          vs          " << tank2.getplayerName() << endl;
	cout << tank1.getbarrelAngle() << "/" << tank1.getroundVelocity() << " " << tank1.getlastShot() << "              " << tank2.getlastShot() << endl;
    cout << "MyPos: " << tank1.getxpos() << endl;
    cout << "Armor: " << tank1.getarmor()     << "                    " << "Armor: " << tank2.getarmor() << endl;
    cout << "Ammo:  " << tank1.getnumRounds() << "                     " << "Ammo: " << tank2.getnumRounds()<< endl;
    cout << "Fuel:  " << tank1.getfuelLevel() << "                   " << "Fuel: " << tank2.getfuelLevel()<< endl;
    cout << tank1.gethitsScored() << "                             " << tank2.gethitsScored() << endl;
    cout << endl;
    cout << endl;
    cout << endl;
    cout << "   __q--                          --p__   " << endl;
    cout << "___0o-o0__________________________0o-o0___" << endl;
    cout << endl;
    cout << endl;
}//end displayTurnStats