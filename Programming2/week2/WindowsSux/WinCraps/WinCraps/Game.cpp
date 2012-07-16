//
//  Game.cpp
//  craps
//
//  Created by Todd Pickell on 3/29/12.
//  Copyright (c) 2012 Columbia College. All rights reserved.
//
//  Includes: "Functions.h" "Player.h" "Game.h"
//
//  Course: CISS 242A Programming II
//
//  Description:
//  This is the Implementation for the Game class.
//
//***************************************************************************

#include "StdAfx.h"
#include "Game.h"

using namespace std;

/*
 * Constructor
 */
Game::Game(Player & playerIn)
{
    playerIn.makeWager(getInput<int>("\nPlease enter your wager: "));
    gameLoop(playerIn);
}

/*
 * gameLoop function starts the actual game and contains
 * all of the logic for the game from the original main function
 */
void Game::gameLoop(Player & playerIn){
    srand(time(0));
    int sumOfDice = rollDice();

    switch (sumOfDice) {
        case 7:
        case 11:
            gameStatus = WON;
            break;
        case 2:
        case 3:
        case 12:
            gameStatus = LOST;
            break;
        default:
            gameStatus = CONTINUE;
            myPoint = sumOfDice;
            cout << "Point is " << myPoint << endl;
            break;
    }//end switch

    while (gameStatus == CONTINUE) {
        sumOfDice = rollDice();
        
        if(sumOfDice == myPoint)
            gameStatus = WON;
        else if(sumOfDice == 7)
            gameStatus = LOST;
    }//end while

    if(gameStatus == WON) {
        playerIn.win();
    }
    else {
        playerIn.lose();
    }//end else
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
    cout << "Player rolled " << die1 << " + " << die2 << " = " << sum << endl;
    
    return sum;
}//end rollDice

