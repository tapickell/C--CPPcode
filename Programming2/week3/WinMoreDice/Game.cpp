//
//  Game.cpp
//  moredice
//
//  Created by Todd Pickell on 4/4/12.
//  Copyright (c) 2012 Columbia College. All rights reserved.
//
//  Includes: "Game.h"
//
//  Course: CISS 242A Programming II
//
//  Description:
//  This is the Implementation for the Game class.
//
//***************************************************************************


#include "Game.h"

using namespace std;

/*
 * Constructor
 * calls the loop function that iterates through the calculations
 */
Game::Game()
{
    loop();
}

/*
 * loop function initializes the array and iterates 3600
 * calls to rollDice and increments the element at that
 * position in the array. Then outputs in tabular form
 */
void Game::loop(){
    srand(time(0));// seed of time for getting random numbers
    
	int totalRolls = 3600;
    int myArray[] = {0,0,0,0,0,0,0,0,0,0,0};// array for holding totals
    
	/* 
	 * iterates through number of times to roll and 
	 * increments the element at that position in the array.
	 */
    for (int i = 0; i < totalRolls; i++) {
        // cout << "Roll: " << i+1 << "  "; for debugging
        int sumOfDice = rollDice();
        myArray[sumOfDice - 2] += 1;
    }//end for
    
	cout << endl;
	cout << "\t **Dice Rolling**" << endl;
	cout << "**************************************" << endl;
    cout << "   Sum of Dice\t" << "   Times Rolled" << endl;
	cout << "--------------------------------------" << endl;
	
	/* iterates through array and outputs totals in each element */
    for (int i = 0; i < 11; i++) {
        cout << "\t" <<  i+2 << "\t\t" << myArray[i] << endl;
    }//end for
	
	cout << "**************************************" << endl;
	cout << "\tTotal Rolls: " << totalRolls << endl;
	cout << "**************************************" << endl;

}//end loop

/*
 * rollDice function simulates the rolling of 2 dice using random number
 * generation, displays them and then returns the sum of the 2 dice
 */
int Game::rollDice()
{
    int die1 = 1+rand()%6;
    int die2 = 1+rand()%6;
    
    int sum = die1 + die2;
    // cout << die1 << " + " << die2 << " = " << sum << endl; for debugging
    
    return sum;
}//end rollDice

