#include <iostream>
using namespace std;
#include "person.h"

int main()
{
	person david;
	david.setFirstName("Dave");
	david.setLastName("Huffindick");
	cout << "WTC ";//david.getFirstName() << endl;
	cout << "DUDE " << endl;//david.getLastName() << endl;
	return 0;
}