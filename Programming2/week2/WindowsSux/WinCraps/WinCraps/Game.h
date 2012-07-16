//
//  Game.h
//  craps
//
//  Created by Todd Pickell on 3/29/12.
//  Copyright (c) 2012 Columbia College. All rights reserved.
//
//  Includes:
//
//  Course: CISS 242A Programming II
//
//  Description:
//  This is the Interface for the Game class.
//
//***************************************************************************

#include "stdafx.h"
#include "Functions.h"
#include "Player.h"

#ifndef craps_Game_h
#define craps_Game_h

class Game {
    
private:
    enum Status { CONTINUE, WON, LOST };
    int myPoint;
    Status gameStatus;
    void gameLoop(Player &);
    int rollDice();
    
public:
    Game(Player &);
};
#endif
