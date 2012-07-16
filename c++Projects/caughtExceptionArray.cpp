#include <iostream>
#include <exception>

using namespace std;

int main()
{
	int* intArray1;
	int* intArray2;
	int* intArray3;
	try
	{
		intArray1 = new int[999999999];
		cout << "Array 1 Creation Succeeded" << endl;
		intArray2 = new int[999999999];
		cout << "Array 2 Creation Succeeded" << endl;
		intArray3 = intArray1 + intArray2;
		cout << "Array Cat Succeeded" << endl;
	}
	catch (exception &e)
	{
		cout << "Caught Exception: " << e.what() << endl;
	}

	return 0;
}