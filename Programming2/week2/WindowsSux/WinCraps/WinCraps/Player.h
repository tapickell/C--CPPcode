//
//  Player.h
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
//  This is the Interface for the Player class.
//
//***************************************************************************

#include "stdafx.h"
#include "Functions.h"
#include "Taunts.h"

#ifndef craps_Player_h
#define craps_Player_h

using namespace std;

class Player {
    
private:
    int bank;
    int wager;
    string name;
    void displayBalance();
    Taunts newTaunts;
    
    
public:
    Player();
    int getBank();
    string getName();
    void makeWager(int);
    void win();
    void lose();
    void busted();
    
};

#endif
