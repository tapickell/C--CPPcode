
//
//  Player.cpp
//  craps
//
//  Created by Todd Pickell on 3/29/12.
//  Copyright (c) 2012 Columbia College. All rights reserved.
//
//  Includes: "Functions.h" "Player.h"
//
//  Course: CISS 242A Programming II
//
//  Description:
//  This is the Implementation for the Player class.
//
//***************************************************************************

#include "StdAfx.h"
#include "Player.h"

using namespace std;


/*
 * Constructor
 */
Player::Player()
{
    bank = 1000;
    wager = 0;
    Taunts newTaunts = Taunts();
    name = getInput<string>("Enter first name: ");
    cout << "Welcome " << name << endl;
    displayBalance();    
}


    // returns bank
int Player::getBank()
{
    return bank;
}

    //returns name
string Player::getName()
{
    return name;
}

    //displays the bank balance with descriptive text
void Player::displayBalance()
{
    cout << "\n" << name << "'s Bank Balance: " << bank << endl; 
}

/*
 * makeWager function takes in an integer and then checks it
 * against the bank to make sure player has enough credits to make 
 * that wager, then sets wager.
 */
void Player::makeWager(int intIn)
{
    while (intIn > bank) {
        getBank();
        intIn = getInput<int>("Please enter valid wager: ");
    }
    wager = intIn;
}

    //called when player wins a game
void Player::win()
{
    bank += wager;
    cout << "\n" << name << " wins" << endl;
    newTaunts.getGood();
    displayBalance();
}

    //called when player loses a game
void Player::lose()
{
    bank -= wager;
    cout << "\n" << name << " loses" << endl;
    newTaunts.getBad();
    displayBalance();
}


void Player::busted()
{
    newTaunts.getBusted();
    cout << "\nSorry. You busted!\nThank you for playing, " << name << endl;
}
