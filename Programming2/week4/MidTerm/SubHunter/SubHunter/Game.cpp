/* ***************************************************************************

Programmer: Todd Pickell

Filename: MidtermProject.cpp

Requirements: None

Includes: 
#include "StdAfx.h"
#include <iostream>
#include <stdlib.h>
#include "Game.h"

Course: Programming II

Date: 4/9/12

Assignment: C++ Programming MidTerm Project

Description: MidTerm Project Sub Hunter game

************************************************************************* */
//
//  Game.cpp
//  SubHunter
//
//  Created by Todd Pickell on 4/9/12.
//  Copyright (c) 2012 Columbia College. All rights reserved.
//

#include "StdAfx.h"
#include <iostream>
#include <stdlib.h>
#include <string>
#include "Game.h"

using namespace std;

/* Game constructor
 * this initializes and runs the game
 * everything originates and is controlled from here. */
Game::Game(void)
{
	/** setup game variables **/
    srand(time(0)); 
    turnNumber = 1;
	ping = 0;
	bannerVar = 6;
    subLastSighting.setPoint(0, 0);
    destroyerLastSighting.setPoint(0, 0);

    /** create game board **/
    setupBoard();
	showBillboard();
	system("pause");

    /** create player objects **/
    cout << "Destroyer:" << endl;
    Destroyer d = Destroyer(getStartPoint(), getStartDirection());
    cout << "Sub:" << endl;
    Sub s = Sub(getStartPoint(), getStartDirection());

    /** start game loop **/
    gameLoop(d, s);
}

/* Game destructor, 
 * thank you viz studio for adding this for me */
Game::~Game(void)
{
}

// setting up game board, creates a 10 x 10 multi-dimensional array
void Game::setupBoard() 
{
    for (int i = 0; i < 10; i++) 
    {
        for (int j = 0; j < 10; j++) 
        {
            gameBoard[i][j] = 0;
        }
    }
}


void Game::gameLoop(Destroyer& d, Sub& s) 
{
    /** set game status **/
    gameStatus = Playing;
    while (gameStatus == Playing) 
    {
        //run game
        playerTurn(d, s);
        enemyTurn(d, s);
        turnNumber++;
		if (ping > 0)
		{
			ping--;
		}
	}
}

/* method playerTurn takes in Destroyer & Sub objects by reference
 * displays map screen and player choices then gets input from player
 * and executes whatever method the player chooses */
void Game::playerTurn(Destroyer& d, Sub& s) 
{
    if (gameStatus == Playing) {
        int x = d.getMoves();
        int turning = 0;// uninitialized warning
        while (x > 0) {
			// show display
			updateDisplay(d, s);
			// display choices && get input from user
			int choice;
            cout << "****** Player Turn ******\nWhat would you like to do?" << endl;
			cout << "1. Use Sonar\n2. Move Forward\n3. Turn\n4. Drop Depth Charge" << endl;
			cin >> choice;
			// execute players choice
            switch (choice) {
                case 1:
					pingSonar(d, s);
                    x--;
                    break;
                case 2:
					moveDestroyerForward(d);
                    x--;
                    break;
                case 3:
					turnDestroyer(turning, d);
                    x--;
                    break;
                case 4:
					dropDepthCharge(d, s, x);
                    x--;
                    break;
                default:
                    break;
            }//end switch
        }//end while
    }//end if
    checkWinLose(d, s);
}//end player turn


/* method enemyTurn
 * takes in Destroyer and Sub objects by reference
 * returns nothing
 * this controls the enemy sub and does all the ai.*/
void Game::enemyTurn(Destroyer& d, Sub& s) 
{
    if (gameStatus == Playing) {
		/*DEBUG MSG*/
        cout << "\n\n****** Enemy Turn ******" << endl;

        int x = s.getMoves();
        while (x > 0) 
        {
            if (s.getAmmo() > 0) 
            {
                if (s.getEnemyLocationKnown() == false) 
                {
        /*********************** SEEK MODE ***************************/
                    //seek mode, periscope up
                    x--; // takes one turn to look thru periscope

					/*DEBUG MSG*/
					cout << "Periscope Up, looking for Destroyer" << endl;
                    cout << "Moves left: " << x << endl;
                    cout << "Sub Moves allowed: " << s.getMoves() << endl;

                    if (enemySpotted(d, s) == true) 
                    { // can see player
                        s.setEnemyLocationKnown(true);

						/*DEBUG MSG*/
                        cout << "Destroyer in range and seen by sub" << endl;

                        destroyerLastSighting = d.getLocation();  // record last known sighting
                    } 
                    else 
                    {
        /*********************** SEARCH GAME BOARD ******************/
						/*DEBUG MSG*/
                        // can't see player
                        cout << "Destroyer not in range of sub" << endl;
                        /* go into search mode */
                        cout << "Curent Position, X: " << s.getLocation().getRow() << " Y: " << s.getLocation().getColl() << endl;
                        cout << "Curent heading: " << s.getHeading() << endl;
                        
						//move forward one space
						s.setLocation(s.patrolFwd(s.getHeading(), s.getLocation())); 

						/*DEBUG MSG*/
                        cout << "Curent heading: " << s.getHeading() << endl;
                        cout << "New Position, X: " << s.getLocation().getRow() << " Y: " << s.getLocation().getColl() << endl;
                        
						x--; // takes one turn to move

						/*DEBUG MSG*/
                        cout << "Moves left: " << x << endl;
                        cout << "Sub Moves allowed: " << s.getMoves() << endl;
                    }//end if else
                } //end if
                else 
                { //end if (s.getEnemyLocationKnown() == false)
        /********************** SETUP FOR SHOT *****************************/
                    /* If get enemy known location is true */
                    // move to get a good shot
                    //is sub on same row
                    if (d.getLocation().getRow() == s.getLocation().getRow()) 
                    {
                            //is sub facing destroyer
						/*DEBUG MSG*/
                        cout << "Sub is on same row as Destroyer" << endl;

                        if (d.getLocation().getColl() < s.getLocation().getColl()) 
                        {//is d west of sub
							x--;
        /************************** TAKE SHOT ******************************/
                            if (s.getHeading() == West) 
                            {
                                    //take shot
                                s.decrementAmmo();
                                d.decrementArmor();
                                
								bannerVar = 0;
								/*DEBUG MSG*/
                                cout << "Sub Scored Direct Hit!" << endl;
                                cout << "Destroyer Health: " << d.getArmor() << endl;
                                cout << "Moves left: " << x << endl;
                                cout << "Sub Moves allowed: " << s.getMoves() << endl;
                                /* afterwards don't move unless destroyer moves */
                            } 
                            else 
                            { //turn to face destroyer
        /**************************** TURN TO FACE DESTROYER ***************/
                                switch (s.getHeading()) 
                                {
                                    case North:
                                        s.turn(s.getHeading(), Left);
                                        break;
                                    case East:
                                    case South:
                                        s.turn(s.getHeading(), Right);
										break;
                                    default:
                                        break;
                                }//end switch
                            }//end if (s.getHeading() == West) else
                        }//end if (d.getLocation().getColl() < s.getLocation().getColl())
                        else 
                        { 
							x--;//destroyer is east of sub
        /***************************** TAKE SHOT *******************************/
                            if (s.getHeading() == East) 
                            {
                                    //take shot
                                s.decrementAmmo();
                                d.decrementArmor();
                                

								/*DEBUG MSG*/
                                cout << "Sub Scored Direct Hit!" << endl;
                                cout << "Destroyer Health: " << d.getArmor() << endl;
                                cout << "Moves left: " << x << endl;
                                cout << "Sub Moves allowed: " << s.getMoves() << endl;
                            } 
                            else 
                            { //turn to face destroyer
        /**************************** TURN TO FACE DESTROYER ***************/
                                switch (s.getHeading()) 
                                {
                                    case North:
                                        s.turn(s.getHeading(), Right);
                                        break;
                                    case West:
                                    case South:
                                        s.turn(s.getHeading(), Left);
										break;
                                    default:
                                        break;
                                }//end switch 
                            }//end if (s.getHeading() == West) else
                        }//end else
                    }//end if (d.getLocation().getRow() == s.getLocation().getRow())
                    else 
                    {
                            //if not on same row is sub on same coll
                        if (d.getLocation().getColl() == s.getLocation().getColl()) 
                        {
                            cout << "Sub is on same coll as Destroyer" << endl;
                                //is sub facing destroyer
                                // is destroyer north of sub
                            if (d.getLocation().getRow() < s.getLocation().getRow()) 
                            {
								x--;
                                if (s.getHeading() == North) 
                                {
                                        //take shot
                                    s.decrementAmmo();
                                    d.decrementArmor();
                                    

									/*DEBUG MSG*/
                                    cout << "Sub Scored Direct Hit!" << endl;
                                    cout << "Destroyer Health: " << d.getArmor() << endl;
                                    cout << "Moves left: " << x << endl;
                                    cout << "Sub Moves allowed: " << s.getMoves() << endl;
                                    /* afterwards don't move unless destroyer moves */
                                } 
                                else 
                                { //turn to face destroyer
        /**************************** TURN TO FACE DESTROYER ***************/
                                    switch (s.getHeading()) 
                                    {
                                        case East:
                                            s.turn(s.getHeading(), Left);
                                            break;
                                        case West:
                                        case South:
                                            s.turn(s.getHeading(), Right);
											break;
                                        default:
                                            break;
                                    }//end switch
                                }//end else
                            } 
                        }//end if (d.getLocation().getColl() == s.getLocation().getColl())
                    }//end else
        /********************* MOVE INTO SHOOTING POSITION ******************/
                        //is destroyer north of sub
                    if (d.getLocation().getRow() < s.getLocation().getRow()) 
                    {
						x--;
            /************ go north *************/
                        switch (s.getHeading()) 
                        {
                            case North:
                                s.setLocation(s.moveFwd(s.getHeading(), s.getLocation()));
                                break;
                            case East:
                                s.turn(s.getHeading(), Left);
                                break;
                            case South:
							case West:
                                s.turn(s.getHeading(), Right);
								break;
                            default:
                                cout << "Error: Unknown heading" << endl;
                                break;
                        }//end switch
                    } 
                    else if (d.getLocation().getRow() > s.getLocation().getRow()) 
                    {
						x--;
            /************ go south *************/
                        switch (s.getHeading()) 
                        {
                            case South:
                                s.setLocation(s.moveFwd(s.getHeading(), s.getLocation()));
                                break;
                            case West:
                                s.turn(s.getHeading(), Left);
                                break;
                            case North:
								case East:
                                s.turn(s.getHeading(), Right);
								break;
                            default:
                                break;
                        }//end switch
                    }//player is on same row
                }//end else
            }//end if (s.getAmmo() > 0)
            else 
            { //out of ammo
    /************************* RUN AWAY *******************************/
                    //runAway(); never gets here cause never misses when fires...
            }
        }//end while (x > 0)
    }//end if
    checkWinLose(d, s);
}//end enemyTurn

/* method getStartPoint
 * no parameters
 * returns a Point
 * this method is used to get a random point
 * in which to start each ship out on.*/
MyPoint Game::getStartPoint() 
{
	// get 2 random numbers
    int x = rand()%9;
    int y = rand()%9;

	/*DEBUG MSG*/
    cout << "Random X: " << x << " Y: " << y << endl;

	// create new Point and set random numbers as params
    MyPoint temp = MyPoint();
    temp.setPoint(x, y);
	// return new Point
    return temp;
}


/* method getStartDirection
 * no parameters
 * returns an integer
 * this method creates a random number
 * and returns it to be used as a random heading*/
int Game::getStartDirection() 
{
	//create random number
    int d = rand()%4;

	/*DEBUG MSG*/
    cout << "Random heading: " << d << "\n" << endl;

	//return random number
    return d;
}


/* method updateDisplay
 * takes in Destroyer and Sub objects by reference
 * returns nothing
 * this method is used to display the "map"
 * for the game which show ship locations on a grid
 * */
void Game::updateDisplay(Destroyer& d, Sub& s) 
{
	/*DEBUG MSG*/
    //cout << "Updating Display... \n\n" <<endl;
	//clears previous contents of board
    setupBoard();
	banner[0] = "<(+_+)> WEVE BEEN HIT!!! <(+_+)>";
	banner[1] = "/(,-_-) PLAYER LOSES (x_x#)\\";
	banner[2] = "\\('v')/ PLAYER WINS \\('o')/";
	banner[3] = "(>-_-)> YOU MISSED t(-_-t)";
	banner[4] = " (>_<#) \\,(o_O) DIRECT HIT!!!";
	banner[5] = "     (O_o) DRAW (o_O)";
	banner[6] = ".-*-._.-*SUB ATTACK*-._.-*-.";
	banner[7] = ".-*-._.-*[PING>  )))))))))))";
	// gets ship locations and adds them to the game board array
    gameBoard[d.getLocation().getRow()][d.getLocation().getColl()] = 1;
	// using subLastSighting so that the display is just the las position when pinged not current position
	int subxy = gameBoard[subLastSighting.getRow()][subLastSighting.getColl()];
	// if position already has a one from destroyer then 2 is added to make 3
    gameBoard[subLastSighting.getRow()][subLastSighting.getColl()] = subxy + 2;
	//top of display
	cout << banner[bannerVar] << endl;
	cout << endl;
	cout << "    Sub Hunt   Turn:  " << turnNumber << endl;
	cout << "    Destroyer- Heading: " << d.getHeading() << "\n    Health: " << d.getArmor() << " Ammo: " << d.getAmmo() << endl;
	cout << "    Sub-       Heading: " << s.getHeading() << "\n    Health: " << s.getArmor() << " Ammo: " << s.getAmmo() << endl;
    // grid with ship locations
	cout << "   + 0 1 2 3 4 5 6 7 8 9 " << endl;
    for (int i = 0; i < 10; i++) 
        {
        cout << "   " << i << " ";
        for (int j = 0; j < 10; j++) 
            {
				if(gameBoard[i][j] == 1)
				{
					cout << "@ ";
				} else if (gameBoard[i][j] == 2)
				{
					if(ping > 0) {
						cout << "$ ";// if ping saw sub less than 3 turns ago
					}
				} else if(gameBoard[i][j] == 3)
				{
					cout << "% ";// if destroyer and sub occupy the same square
				} else if (gameBoard[i][j] == 0) 
				{
					cout << "  ";
				}
            }
        cout << endl;
        }
}


/* method runAway
 * after some serious thought I didnt
 * actually write anything for this method 
 * as of yet b/c the game never goes here
 * the sub never misses so it will not 
 * run out of ammo b4 killing the destroyer
 * if I could figure out how to make the torpedo
 * only move 1 or 2 squares per turn and keep moving until
 * off screen or hits destroyer then this method would be
 * more useful. then I could adjust the ai to have the 
 * sub take a shot anytime it is on the same row / coll
 * as destroyer, and if more then 2 squares away the destroyer 
 * would have a chance to dodge the torpedo, this may be a
 * feature that shows up in the final product but as for now
 * it's not a priority*/
void Game::runAway() 
{
	/*DEBUG MSG*/
    cout << "Running Away" << endl;
}


/* method enemySpotted
 * takes in Destroyer and Sub objects by reference
 * return a boolean value
 * this method calcualtes if the destroyer is
 *  in periscope range of the sub, if so it returns true
 *  if not then false. */
bool Game::enemySpotted(Destroyer& d, Sub& s) 
{
    if ((d.getLocation().getRow() >= s.getLocation().getRow()-s.getMoves() && 
         d.getLocation().getRow() <= s.getLocation().getRow()+s.getMoves()) && 
        (d.getLocation().getColl() >= s.getLocation().getColl()-s.getMoves() &&
         d.getLocation().getColl() <= s.getLocation().getColl()+s.getMoves())) 
        {
            return true;
        } 
        else 
        {
            return false;
        }
}


/* method subSpotted
 * takes in Destroyer and Sub objects by reference
 * return a boolean value
 * this method calculates if the sub is within
 * ping range of the destroyer, if so returns true
 * if not then false
 * I tried to combine these 2 methods, subSpotted and enemySpotted
 * b/c they basically do the same thing */
bool Game::subSpotted(Destroyer& d, Sub& s, int i)
{
    if ((s.getLocation().getRow() >= d.getLocation().getRow() - i &&
        s.getLocation().getRow() <= d.getLocation().getRow() + i) &&
        (s.getLocation().getColl() >= d.getLocation().getColl() - i &&
        s.getLocation().getColl() <= d.getLocation().getColl() + i)) 
    {
        return true;
    } 
    else
    {
        return false;
    }
}


/* method checkWinLose
 * takes in Destroyer and Sub objects by reference
 * returns nothing
 * this method checks for conditions that would
 * end the game, like a player dying or running out of ammo.*/
void Game::checkWinLose(Destroyer& d, Sub& s)
{
    /** check for win/lose **/
    if (gameStatus == Playing) {
        if (d.getArmor() < 1 || d.getAmmo() < 1) 
            {
            cout << banner[1] << endl;
			
            gameStatus = Lose;
            } 
        else if (s.getArmor() < 1) 
            {
            cout << banner[2] << endl;
			
            gameStatus = Win;
            } 
        else if (d.getAmmo() < 1 && s.getAmmo() < 1) 
            {
            cout << banner[5] << endl;

            gameStatus = Draw;
            }
    }
}


/* method dropDepthCharge
 * takes in Destroyer and Sub objects by reference
 * and an integer that represents moves for debug msg
 * this method drops a depth charge at the destroyers
 * current location and calculates if sub was hit
 * and how much damage done depending on distance
 * from the origin of the blast*/
void Game::dropDepthCharge( Destroyer &d, Sub &s, int x )
{
	/***** drop depth charge *****/
	if (d.getLocation().getRow() == s.getLocation().getRow() && 
		d.getLocation().getColl() == s.getLocation().getColl()) 
	{
		cout << "Direct Hit!" << endl;
		setBannerVar(4);
		d.decrementAmmo();
		for (int i = 0; i < 5; i++) 
		{
			s.decrementArmor();
		}//end for

		/*DEBUG MSG*/
		cout << "Sub health: " << s.getArmor() << endl;
		cout << "Moves left: " << x << endl;
	}//else if (ping 1 radius) then destruction is 3
	else if (subSpotted(d, s, 1)) 
	{
		cout << "Direct Hit!" << endl;
		setBannerVar(4);
		d.decrementAmmo();
		for (int i = 0; i < 3; i++) 
		{
			s.decrementArmor();
		}//end for

		/*DEBUG MSG*/
		cout << "Sub health: " << s.getArmor() << endl;
		cout << "Moves left: " << x << endl;
	} //else if (ping 2 radius) then destruction is 2
	else if (subSpotted(d, s, 2))
	{
		cout << "Good Hit!" << endl;
		setBannerVar(4);
		d.decrementAmmo();
		for (int i = 0; i < 2; i++) 
		{
			s.decrementArmor();
		}//end for

		/*DEBUG MSG*/
		cout << "Sub health: " << s.getArmor() << endl;
		cout << "Moves left: " << x << endl;
	}  //else if (ping 3 radius) then destruction is 1
	else if (subSpotted(d, s, 3))
	{
		cout << "A Hit!" << endl;
		setBannerVar(4);
		d.decrementAmmo();
		s.decrementArmor();

		/*DEBUG MSG*/
		cout << "Sub health: " << s.getArmor() << endl;
		cout << "Moves left: " << x << endl;
	}//end if else
	else
	{
		cout << "Missed Sub" << endl;
		setBannerVar(3);
	}//end else
}


/* method pingSonar
 * takes in Destroyer and Sub objects by reference
 * returns nothing
 * this method checks for the sub to see if its
 * within 4 squares of the destroyer if so
 * it sets the value of ping to 3. this 
 * ping value is used to decide whether to display
 * the sub position on screen or not and it is decremented
 * every turn so a ping only lasts for 3 turns.*/
void Game::pingSonar( Destroyer &d, Sub &s )
{
	/**** sonar *****/   
	cout << "ping...   ping...   ping...\n" << endl;
	if (subSpotted(d, s, 4))
	{
		ping = 3;
		setBannerVar(7);
		subLastSighting = s.getLocation();
	}
}

void Game::moveDestroyerForward( Destroyer &d )
{
	/*** move fwd ***/
	setBannerVar(6);
	cout << "Current Position, X: " << d.getLocation().getRow() << " Y: " << d.getLocation().getColl() << endl;
	d.setLocation(d.moveFwd(d.getHeading(), d.getLocation()));
	cout << "Current heading: " << d.getHeading() << endl;
	cout << "New Position, X: " << d.getLocation().getRow() << " Y: " << d.getLocation().getColl() << endl;
}


/* method turnDestroyer
 * takes in an integer and
 * a destroyer object
 * gets a int from user for direction
 * wanted to turn and then calls the
 * ships turn method to set the new heading */
void Game::turnDestroyer( int turning, Destroyer &d )
{
	/*** turn ***/
	setBannerVar(6);
	cout << "Enter Direction to turn:\n1 = Left\n2 = Right" << endl;
	cin >> turning;
	if (turning > 1) {
		d.turn(d.getHeading(), Right);
		cout << "Turning Right" << endl;

	} else {
		d.turn(d.getHeading(), Left);
		cout << "Turning Left" << endl;
	}
	cout << "Current heading: " << d.getHeading() << endl;
}

/* method setBannerVar
 * takes in an integer
 * returns nothing
 * used to set the value of the
 * banner variable than sets
 * which banner to display*/
void Game::setBannerVar(int a)
{
	bannerVar = a;
}


/* method showBillboard
 * takes in nothing and 
 * returns nothing
 * displays ascii logo */
void Game::showBillboard()
{
	cout << " _______         __ " << endl;   
	cout << "|   _   |.--.--.|  |--." << endl;
	cout << "|   1___||  |  ||  _  |" << endl;
	cout << "|____   ||_____||_____|" << endl;
	cout << "|:  1   |" << endl;                            
	cout << "|::.. . |" << endl;                                             
	cout << "`-------'" << endl;                 
	cout << " _______  __    __                 __ " << endl;   
	cout << "|   _   ||  |_ |  |_ .---.-..----.|  |--." << endl;
	cout << "|.  1   ||   _||   _||  _  ||  __||    < " << endl;
	cout << "|.  _   ||____||____||___._||____||__|__|" << endl;
	cout << "|:  |   |" << endl;  
	cout << "|::.|:. |" << endl;  
	cout << "`--- ---'" << endl; 
}
