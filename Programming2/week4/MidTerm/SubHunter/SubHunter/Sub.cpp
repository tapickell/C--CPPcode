/* ***************************************************************************

Programmer: Todd Pickell

Filename: MidtermProject.cpp

Requirements: None

Includes: 
#include "StdAfx.h"
#include <iostream>
#include "Sub.h"

Course: Programming II

Date: 4/9/12

Assignment: C++ Programming MidTerm Project

Description: MidTerm Project Sub Hunter game

************************************************************************* */
//
//  Sub.cpp
//  SubHunter
//
//  Created by Todd Pickell on 4/9/12.
//  Copyright (c) 2012 Columbia College. All rights reserved.
//


#include "StdAfx.h"
#include <iostream>
#include "Sub.h"

using namespace std;

Sub::Sub(MyPoint p, int h)
{
	firingOnEnemy = false;
    armor = 10;
    ammo = 12;
    moves = 2;
    location = p;
    heading = calcHeading(h);
    enemyLocationKnown = false;
}


Sub::~Sub(void)
{
}


bool Sub::getEnemyLocationKnown() {
    return enemyLocationKnown;
}
void Sub::setEnemyLocationKnown(bool b) {
    enemyLocationKnown = b;
}