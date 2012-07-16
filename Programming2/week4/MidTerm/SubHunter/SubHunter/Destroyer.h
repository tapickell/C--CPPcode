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
//  Destroyer.h
//  SubHunter
//
//  Created by Todd Pickell on 4/8/12.
//  Copyright (c) 2012 Columbia College. All rights reserved.
//

#ifndef SubHunter_Destroyer_h
#define SubHunter_Destroyer_h

#include "Ship.h"
#include "MyPoint.h"

using namespace std;

#pragma once
class Destroyer : public Ship
{
public:
	Destroyer(MyPoint, int);
	~Destroyer(void);
	bool fire();
    MyPoint seek(int&);
    void takeTurn();
};

#endif