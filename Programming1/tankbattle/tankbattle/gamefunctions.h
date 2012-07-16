#include <iostream>
;using namespace std;

//Handy Functions
string getString(string myVal)
{
	string returnVal;//return value
	cout<<myVal;//display prompt
	cin>>returnVal;//collect information
	cout<<endl;//end the line
	return returnVal;//return the value
}//end getString

int getInt(string myVal)
{
	int returnVal;//return value
	cout<<myVal;//display prompt
	cin >> returnVal;//collect information
	cout<<endl;//end the line
	return returnVal;//return the value
}//end getInt

double getDouble(string myVal)
{
	double returnVal;//return value
	cout<<myVal;//display prompt
	cin>>returnVal;//collect information
	cout<<endl;//end the line
	return returnVal;//return the value
}//end getDouble

//Univeral Game Functions

void displayIntro()
{
	cout<<"/---\\===   Tank Battle    ===/---\\"<<endl;
	cout<<"OoooO                        OoooO"<<endl;
	cout<<endl;
	cout<<"By Michael Deslongchamps"<<endl;
	system("pause");
	cout << string( 100, '\n' );//clears the screen
}//end function

void displayCurrentStats(Tank myVal)
{
	string rangeestimate;
	if(myVal.getRange()==-1)
	{
		rangeestimate="Unknown";
	}
	else
	{
		rangeestimate=myVal.getRange();
	}//end if
	cout<<myVal.getName()<<"\n Armor:"<<myVal.getArmor()<<" Ammo:"<<myVal.getAmmo()<<" Fuel:"<<myVal.getFuel()<<" Last Shot Hit:"<<myVal.getlastShotHit()<<"\n"<<endl;
}//end function

int displayMenu()
{
	int myInt;
	cout<<"Use number to select command:"<<endl;
	cout<<"1. Move Forward"<<endl;
	cout<<"2. Move Backward"<<endl;
	cout<<"3. Get Range Estimate"<<endl;
	cout<<"4. Fire Gun"<<endl;
	cout<<"5. View Stats"<<endl;
	cout<<"6. Exit Game"<<endl;
	myInt=getInt("Commander, what is your order? ");
	return myInt;
}//end function

