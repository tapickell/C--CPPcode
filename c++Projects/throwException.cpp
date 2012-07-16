#include <iostream>

using namespace std;

int main(int argc, const char* argv[])
{
	try
	{
		throw new string("I am throwing an exception!!");
	}
	catch (string *e)
	{
		cout << "An exception occurred: " << *e << endl;
	}


	return 0;	
}