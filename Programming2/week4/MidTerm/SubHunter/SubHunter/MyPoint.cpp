//
//  MyPoint.cpp
//  SubHunter
//
//  Created by Todd Pickell on 4/9/12.
//  Copyright (c) 2012 Columbia College. All rights reserved.
//



#include "StdAfx.h"
#include <iostream>
#include "MyPoint.h"


MyPoint::MyPoint(void)
{
	row = 0;
    coll = 0;
}


MyPoint::~MyPoint(void)
{
}

int MyPoint::getRow() {
    return row;
}

int MyPoint::getColl() {
    return coll;
}

void MyPoint::setPoint(int r, int c) {
    row = r;
    coll = c;
}
