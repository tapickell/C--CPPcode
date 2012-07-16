/* ***************************************************************************

Programmer: Todd Pickell

Filename: MidtermProject.cpp

Requirements: None

Includes: 
#include "Ship.h"
#include "MyPoint.h"

Course: Programming II

Date: 4/9/12

Assignment: C++ Programming MidTerm Project

Description: MidTerm Project Sub Hunter game

************************************************************************* */
//
//  Sub.h
//  SubHunter
//
//  Created by Todd Pickell on 4/8/12.
//  Copyright (c) 2012 Columbia College. All rights reserved.
//

#ifndef SubHunter_Sub_h
#define SubHunter_Sub_h

#include "Ship.h"
#include "MyPoint.h"

#pragma once
class Sub : public Ship
{
private:
    bool enemyLocationKnown;
public:
	Sub(MyPoint, int);
	~Sub(void);
	bool getEnemyLocationKnown();
    void setEnemyLocationKnown(bool);
};

#endif