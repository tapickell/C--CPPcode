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
 */
Game::Game()
{
    loop();
}

/*
 * gameLoop function starts the actual game and contains
 * all of the logic for the game from the original main function
 */
void Game::loop(){
    srand(time(0));
    
    int myArray[] = {0,0,0,0,0,0,0,0,0,0,0};
    
    for (int i = 0; i < 3600; i++) {
        cout << "Roll: " << i+1 << endl;
        int sumOfDice = rollDice();
        myArray[sumOfDice - 2] += 1;
    }
    
    cout << endl;
    
    for (int i = 0; i < 11; i++) {
        cout << i+2 << ": " << myArray[i] << endl;
    }

}

/*
 * rollDice function simulates the rolling of 2 dice using random number
 * generation, displays them and then returns the sum of the 2 dice
 */
int Game::rollDice()
{
    int die1 = 1+rand()%6;
    int die2 = 1+rand()%6;
    
    int sum = die1 + die2;
    cout << die1 << " + " << die2 << " = " << sum << endl;
    
    return sum;
}//end rollDice

