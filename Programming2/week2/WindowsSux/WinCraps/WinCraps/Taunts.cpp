
//
//  Taunts.cpp
//  craps
//
//  Created by Todd Pickell on 3/29/12.
//  Copyright (c) 2012 Columbia College. All rights reserved.
//
//  Includes: "Taunts.h"
//
//  Course: CISS 242A Programming II
//
//  Description: 
//  This is the Implemantation for the Taunts class.
//
//***************************************************************************

#include "StdAfx.h"
#include "Taunts.h"

using namespace std;

/*
 * Constructor
 */
Taunts::Taunts()
{
    srand(time(0)); 
    good.push_back("Good Job!");
    good.push_back("Your Winning!");
    good.push_back("Very Nice!");
    good.push_back("Thats how you do it!");
    bad.push_back("What were you thinking?");
    bad.push_back("That hurt");
    bad.push_back("It's ok you can come back from that");
    bad.push_back("Can't win them all");
    ugly.push_back("Is that a L on your forhead?");
    ugly.push_back("Wow, That must suck!");
    ugly.push_back("Did your mom teach you haw to play?");
    ugly.push_back("You do know this is not yahtzee, right?");
    wiener.push_back("Your rollin in the dough");
    wiener.push_back("Awesome");
    wiener.push_back("You've got mad skills");
    wiener.push_back("Your a High Roller now!");
    busted.push_back("I didn't know you were just giving money away");
    busted.push_back("Please come back when you have more to lose");
    busted.push_back("I hope that wasn't your student loan money");
    busted.push_back("Does your boss know you spent everything in the petty cash fund?");
}

/*
 * getGood funtion returns a random string from either good or 
 * wiener array's of strings
 */
void Taunts::getGood()
{
    int c = rand()%2;
    int i = rand()%4;
    if (c > 0) {
        cout << good[i] << endl;
    }
    else {
        cout << wiener[i] << endl;
    }
    
}

/*
 * getBad function returns a random string from either bad
 * or ugly array's of strings
 */
void Taunts::getBad()
{
    int c = rand()%2;
    int i = rand()%4;
    if (c > 0) {
        cout << bad[i] << endl;
    }
    else {
        cout << ugly[i] << endl; 
    }
    
}

/*
 * getBusted function returns a random string from busted array of strings
 * called at very end of game when player is out of credits
 */
void Taunts::getBusted()
{
    int i = rand()%4;
    cout << busted[i] << endl; 

}
