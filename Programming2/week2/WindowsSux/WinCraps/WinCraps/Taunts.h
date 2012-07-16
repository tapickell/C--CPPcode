//
//  Taunts.h
//  craps
//
//  Created by Todd Pickell on 3/29/12.
//  Copyright (c) 2012 Columbia College. All rights reserved.
//
//  Includes: "Functions.h"
//
//  Course: CISS 242A Programming II
//
//  Description: 
//  This is the Interface for the Taunts class. It stores taunts and prints 
//  them out randomly when called.
//
//***************************************************************************

#include "stdafx.h"
#include <vector>

#ifndef craps_Taunts_h
#define craps_Taunts_h

class Taunts {

private:
    vector<string> good;
    vector<string> bad;
    vector<string> ugly;
    vector<string> wiener;
    vector<string> busted;
    
public:
    Taunts();
    void getGood();
    void getBad();
    void getBusted();
};


#endif
