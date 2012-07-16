//
//  Game.h
//  SubHunter
//
//  Created by Todd Pickell on 4/8/12.
//  Copyright (c) 2012 Columbia College. All rights reserved.
//

#ifndef SubHunter_Game_h
#define SubHunter_Game_h

#include <iostream>
#include <math.h>
#include <time.h>
#include "MyPoint.h"
#include "Destroyer.h"
#include "Sub.h"
//#include "Functions.h"

using namespace std;

typedef enum {Win, Lose, Draw, Playing} Status;

#pragma once
class Game
{
private:
    int gameBoard[10][10];
	int bannerVar;
	string banner[8];
    int turnNumber;
	int ping;
    MyPoint subLastSighting;
    MyPoint destroyerLastSighting;
    Status gameStatus;
    MyPoint getStartPoint();
    int getStartDirection();
    void gameLoop(Destroyer&, Sub&);
    void setupBoard();
    void playerTurn(Destroyer&, Sub&);
	void turnDestroyer( int turning, Destroyer &d );
	void moveDestroyerForward( Destroyer &d );
	void pingSonar( Destroyer &d, Sub &s );
	void dropDepthCharge( Destroyer &d, Sub &s, int x );
	void enemyTurn(Destroyer&, Sub&);
public:
	Game(void);
	~Game(void);
	void updateDisplay(Destroyer&, Sub&);
    void runAway();
    void checkWinLose(Destroyer&, Sub&);
    bool enemySpotted(Destroyer&, Sub&);
    bool subSpotted(Destroyer&, Sub&, int);
	void showBillboard();
	void setBannerVar(int);
};

#endif