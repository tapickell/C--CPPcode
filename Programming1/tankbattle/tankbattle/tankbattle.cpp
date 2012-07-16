// tankbattle.cpp : Defines the entry point for the console application.
//Final Exam Sample by Michael Deslongchamps

#include "stdafx.h"//namespace stuff
#include <string>//needed for string class
#include <iostream>//standard input output functions
#include <math.h>//needed for math funcitions
#include <time.h>//need for randomize functions
#include <iomanip>//needed for input output manipulation
#include <stdio.h>
#include "tank.h"//this is the tank class
#include "gamefunctions.h"
;using namespace std;



int main()
{
	/* initialize random seed: */
	srand( time( 0 ) );//create truly random numbers
	//display title screen
	displayIntro();
	//create game variables
	Tank Player;//create player tank
	Tank Rommel;//create computer tank
	int turn=1;//set turn counter to 1
	bool endgame=false;//track if player wants to quit
	int playercommand;
	int myInt;
	string myString;
	double myDouble;
	double bulletDistance;
	double range;
	int offset;
	int minval;
	int maxval;
	//************************************************************************
	//Setup Other Attributes of Players
	//Setup Computer Player
	Rommel.setName("Rommel");//Set Computer Player Name 
	Rommel.setPosition(rand() % 10 + 1);//Set Computer Starting Position 1 to 10
	//Setup Player
	Player.setName(getString("Commander what is your name? "));//Get and set player name
	Player.setPosition( -1*(rand() % 10 + 1));//Set Player Starting Position -1 to -10
	//************************************************************************
	//Display Head to Head Stats
	cout<<Player.getName()<<" Armor:"<<Player.getArmor()<<" Speed:"<<Player.getSpeed()<<" Gun Power:"<<Player.getGunPower()<<" Gun Accuracy:"<<Player.getGunAccuracy()<<endl;
	cout<<"------------------------------------Versus------------------------------------"<<endl;
	cout<<Rommel.getName()<<" Armor:"<<Rommel.getArmor()<<" Speed:"<<Rommel.getSpeed()<<" Gun Power:"<<Rommel.getGunPower()<<" Gun Accuracy:"<<Rommel.getGunAccuracy()<<endl;
	//************************************************************************
	//Game Loop
	while(endgame==false)
	{
		cout << string( 100, '\n' );//clears the screen
		//display current turn
		cout<<"Turn "<<turn<<endl;
		cout<<"Current Stats:"<<endl;
		//display current stats
		displayCurrentStats(Player);
		displayCurrentStats(Rommel);
		//display player menu
		playercommand=displayMenu();//get and process player command
		//handle player command
		switch(playercommand)
		{
			case 1:
				//handle forward move
				if(Player.getFuel()>0)
				{
					cout<<"Commander we have moved foward at your command!"<<endl;
					Player.setFuel(Player.getFuel()-1);
					Player.setPosition( Player.getPosition()+Player.getSpeed() );
				}
				else
				{
					cout<<"Commander we are out of fuel!"<<endl;
				}
				break;
			case 2:
				//handle backward move
				if(Player.getFuel()>0)
				{
					Player.setFuel(Player.getFuel()-1);
					cout<<"Commander we have moved back at your command!"<<endl;
					Player.setPosition( Player.getPosition()-Player.getSpeed() );
				}
				else
				{
					cout<<"Commander we are out of fuel!"<<endl;
				}
				break;
			case 3:
				//get range estimate
				myDouble=abs(Player.getPosition()-Rommel.getPosition());
				maxval=floor(myDouble+(rand() % 5 + 1));
				minval=floor(myDouble-(rand() % 5 + 1));
				myDouble=rand() % maxval + minval;
				Player.setRange(myDouble);
				cout<<"Commander the estimated range to target is "<<Player.getRange()<<endl;
				break;
			case 4:
				//handle fire gun
				if(Player.getAmmo()>0)
				{
					myDouble=-1;
					while(myDouble==-1)
					{
						myDouble=getDouble("Enter shot angle (0-90):");
						if(myDouble>=0 && myDouble<=90)
						{
							Player.setAmmo(Player.getAmmo()-1);//remove one bullet
							Player.setShotAngle(myDouble);
							range=abs(Player.getPosition()-Rommel.getPosition());//get range
							bulletDistance=(Player.getGunPower()*cos(myDouble));//determine bullet range
							if( abs(bulletDistance-range)<Player.getGunAccuracy())//determine if round hit
							{
								Rommel.setArmor( Rommel.getArmor()-Player.getGunPower() );//damage rommel
								Player.setLastShotHit(true);
								cout<<"Commander we scored a direct hit!"<<endl;
								if(Rommel.getArmor()<=0)
								{
									cout<<"Commander we have destroyed the enemy tank!"<<endl;
								}
							}
							else
							{
								Player.setLastShotHit(false);
								Player.setShotAngle(myDouble);
								if(bulletDistance>range)
								{
									cout<<"Commander we overshot our target"<<endl;
								}
								else
								{
									cout<<"Commander our shot fell short of the target"<<endl;
								}//end if
							}//end if
						}
						else
						{
							cout<<"Enter an angle between 0 and 90: "<<endl;//error prompt
							myDouble=-1;//reset mydouble
							continue;
						}//end if
					}//end while
				}
				else
				{
					cout<<"Commander we are out of ammo!"<<endl;
					system("pause");
				}//end if
				break;
			case 5:
				//handle view stats 
				cout << string( 100, '\n' );//clears the screen
				cout<<"This is the current match up:"<<endl;
				cout<<Player.getName()<<" Armor:"<<Player.getArmor()<<" Speed:"<<Player.getSpeed()<<" Gun Power:"<<Player.getGunPower()<<" Gun Accuracy:"<<Player.getGunAccuracy()<<endl;
				cout<<"------------------------------------Versus------------------------------------"<<endl;
				cout<<Rommel.getName()<<" Armor:"<<Rommel.getArmor()<<" Speed:"<<Rommel.getSpeed()<<" Gun Power:"<<Rommel.getGunPower()<<" Gun Accuracy:"<<Rommel.getGunAccuracy()<<"\n"<<endl;
				system("pause");
				continue;
			case 6:
				//handle game exit 
				endgame=true;
				cout<<"Thank you for playing!"<<endl;
				system("pause");
				continue;
			default:
				//handle default case
				cout<<"Invalid Command! Please try again."<<endl;
				system("pause");
				continue;
		};//end switch
		//handle Rommel turn
		if(Rommel.getArmor()>0)//test to see if rommel has survived player turn
		{
			//test for survival
			if(Player.getlastShotHit()==true)
			{
				//move
				myInt=rand() % 2 + 1;
				if(myInt==1)//move forward
				{
					//handle forward move
					if(Rommel.getFuel()>0)
					{
						cout<<"Commander Rommel is advancing!"<<endl;
						Rommel.setFuel(Rommel.getFuel()-1);
						Rommel.setPosition( Rommel.getPosition()+Rommel.getSpeed() );
					}
					else
					{
						cout<<"Commander Rommel is out of fuel!"<<endl;
					}
				}
				else//move backward
				{
					//handle forward move
					if(Rommel.getFuel()>0)
					{
						cout<<"Commander Rommel is withdrawing!"<<endl;
						Rommel.setFuel(Rommel.getFuel()-1);
						Rommel.setPosition( Rommel.getPosition()-Rommel.getSpeed() );
					}
					else
					{
						cout<<"Commander Rommel is out of fuel!"<<endl;
					}
				}//end if
				continue;
			}//end if

			//fire gun
			if(Rommel.getAmmo()>0)
			{
				Rommel.setAmmo(Rommel.getAmmo()-1);
				range=abs(Player.getPosition()-Rommel.getPosition());
				myInt=rand() % 90 +0;
				bulletDistance=(Player.getGunPower()*cos(myDouble));//determine bullet range
				if( abs(bulletDistance-range)<Rommel.getGunAccuracy())//determine if round hit
				{
					Player.setArmor( Player.getArmor()-Rommel.getGunPower() );//damage rommel
					Player.setLastShotHit(true);
					cout<<"Commander we were hit by Rommel!"<<endl;
					if(Player.getArmor()<=0)
					{
						cout<<"Commander...Commander! NOOOOOOOO!"<<endl;
					}
				}
				else
				{
					Rommel.setLastShotHit(false);
					Rommel.setShotAngle(myDouble);
					if(bulletDistance>range)
					{
						cout<<"Rommel overshot us!"<<endl;
					}
					else
					{
						cout<<"Rommel fired but his shot was short!"<<endl;
					}//end if
				}//end if
			}
			else
			{
				cout<<"Rommel is out of ammo!"<<endl;
			}//end if
		}
		else
		{
			cout<<"Commander we have recieved a message from the enemy commander \"In a man-to-man fight, the winner is he who has one more round in his magazine. As of such, I surrender my sword to you.\""<<endl;

		}//end if
		cout<<"End of Turn "<<turn<<endl;
		//determine if game is over
		if((Player.getAmmo()==0&&Rommel.getAmmo()==0)||(Player.getArmor()<=0||Rommel.getArmor()<=0))//test for game over
		{
			myString=getString("Do you want to play again? Y or N ");
			if(myString=="Y"|| myString=="y")
			{
				turn=0;
				Player.newTank();//recreate Player
				Rommel.newTank();//Recreate Rommel
				Rommel.setPosition(rand() % 10 + 1);//Set Computer Starting Position 1 to 10
				//Setup Player
				Player.setPosition( -1*(rand() % 10 + 1));//Set Player Starting Position -1 to -10
				//************************************************************************
				//Display Head to Head Stats
				cout<<Player.getName()<<" Armor:"<<Player.getArmor()<<" Speed:"<<Player.getSpeed()<<" Gun Power:"<<Player.getGunPower()<<" Gun Accuracy:"<<Player.getGunAccuracy()<<endl;
				cout<<"------------------------------------Versus------------------------------------"<<endl;
				cout<<Rommel.getName()<<" Armor:"<<Rommel.getArmor()<<" Speed:"<<Rommel.getSpeed()<<" Gun Power:"<<Rommel.getGunPower()<<" Gun Accuracy:"<<Rommel.getGunAccuracy()<<endl;
				//************************************************************************
			}
			else
			{
				cout<<"Thank you for playing!"<<endl;
				endgame=true;
			}
		}
		system("pause");
		turn++;
	}//end game loop
	return 0;
}//end main













































































































































//Deslongchamps-This better not be in your file....
