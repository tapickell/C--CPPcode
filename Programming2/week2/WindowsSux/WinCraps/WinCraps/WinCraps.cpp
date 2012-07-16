//
//  WinCraps.cpp
//  craps
//
//  Created by Todd Pickell on 3/28/12.
//  Copyright (c) 2012 Columbia College. All rights reserved.
//
//  Includes: "Functions.h" "Player.h" "Game.h"
//
//  Course: CISS 242A Programming II
//
//  Description:
//  This is my main function that runs the craps game.
//
//***************************************************************************

#include "stdafx.h"
#include "Functions.h"
#include "Taunts.h"
#include "Player.h"
#include "Game.h"

using namespace std;

void playGame();

int main ()
{
    playGame();
    
    return 0;
}//end main


void playGame()
{
    cout << "Pickle's Casino\n  Craps Table\n" << endl;
    
    Taunts newTaunts = Taunts();
    Player newPlayer = Player();
    while (newPlayer.getBank() > 0) {
        Game newGame = Game(newPlayer);
    }//end while
    
    newPlayer.busted();
    
}//end playGame
