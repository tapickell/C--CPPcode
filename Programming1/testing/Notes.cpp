keeps variables the same after running the second time
midterm till Sunday
then starting final project
use switch for menus with definite answers
parameter on function header 	getStuff(int x);
argument on calling function	getStuff(5);

make your program smaller
what am i going to do over and over again

input & output
string getString(string stringIn)
{
	string returnString;
	cout << stringIn << endl;
	cin >> returnString;
	return returnString;
}

void createRock()
{
	Rock myRock;
	myRock.setColor(getString("What color is your rock? ");
	myRock.setSize(getString("What size is your rock? ");
	cout << myRock.getColor() << myRock.getSize() << endl;
}
string makeMeAstring(StringIn) // StringIn can be textBox1->Text
{
	string myNewstring;
	myNewstring = marshal_as<string>(textBox2->Text);
	return myNewstring;
}

MainClass ^mainInstance = gcnew MainClass();
mainInstance->Main();