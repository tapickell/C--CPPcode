//
//  Game.h
//  moredice
//
//  Created by Todd Pickell on 4/4/12.
//  Copyright (c) 2012 Columbia College. All rights reserved.
//
//  Includes: <iostream> <time.h> <cstdlib>
//
//  Course: CISS 242A Programming II
//
//  Description:
//  This is the Interface for the Game class.
//
//***************************************************************************
#include <iostream>
#include <time.h>
#include <cstdlib>

#ifndef craps_Game_h
#define craps_Game_h

class Game {
    
private:
    void loop();
    int rollDice();
    
public:
    Game();
};
#endif
