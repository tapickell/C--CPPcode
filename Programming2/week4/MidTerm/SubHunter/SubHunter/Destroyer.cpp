/* ***************************************************************************

Programmer: Todd Pickell

Filename: MidtermProject.cpp

Requirements: None

Includes: 
#include "StdAfx.h"
#include <iostream>
#include "Destroyer.h"

Course: Programming II

Date: 4/9/12

Assignment: C++ Programming MidTerm Project

Description: MidTerm Project Sub Hunter game

************************************************************************* */
//
//  Destroyer.cpp
//  SubHunter
//
//  Created by Todd Pickell on 4/9/12.
//  Copyright (c) 2012 Columbia College. All rights reserved.
//

#include "StdAfx.h"
#include <iostream>
#include "Destroyer.h"

using namespace std;

Destroyer::Destroyer(MyPoint p, int h)
{
	armor = 10;
    ammo = 12;
    moves = 3;
    location = p;
    heading = calcHeading(h);
}


Destroyer::~Destroyer(void)
{
}


bool Destroyer::fire() {
    bool directHit = true;
    return directHit;
}

MyPoint Destroyer::seek(int& p) {
    MyPoint currentPoint = MyPoint();
    return currentPoint;
}

void Destroyer::takeTurn() {
    cout << "Destroyer turn" << endl;
    
}