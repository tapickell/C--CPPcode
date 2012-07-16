// Chapter 2.7 1st program using login in c++
// This program compares integers using if statements, relational operators and equality

#include <iostream>

//using std namespace
using namespace std;

int main()
{
	int num1, num2; // declare variables
	
	cout << "Enter 2 integers to compare: "; // prompt user for input
	cin >> num1 >> num2; // read in 2 integers
	
	if(num1 == num2)
		cout << num1 << " == " << num2 << endl;
	if(num1 != num2)
		cout << num1 << " != " << num2 << endl;
	if(num1 < num2)
		cout << num1 << " < " << num2 << endl;
	if(num1 > num2)
		cout << num1 << " > " << num2 << endl;
	if(num1 <= num2)
		cout << num1 << " <= " << num2 << endl;
	if(num1 >= num2)
		cout << num1 << " >= " << num2 << endl;
		
	return 0;
}