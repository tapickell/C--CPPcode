/* ***************************************************************************

Programmer: Todd Pickell

Filename: MidtermProject.cpp

Requirements: None

Includes: 

Course: Programming II

Date: 4/9/12

Assignment: C++ Programming MidTerm Project

Description: MidTerm Project Sub Hunter game

************************************************************************* */
//
//  MyPoint.h
//  SubHunter
//
//  Created by Todd Pickell on 4/8/12.
//  Copyright (c) 2012 Columbia College. All rights reserved.
//

#ifndef SubHunter_MyPoint_h
#define SubHunter_MyPoint_h

#pragma once
class MyPoint
{
private:
    int row, coll;
public:
	MyPoint(void);
	~MyPoint(void);
	int getRow();
    int getColl();
    void setPoint(int, int);
};

#endif