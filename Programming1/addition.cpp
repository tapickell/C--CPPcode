// Chapter 2.4 addition program in c++
// This program displays the sum of two numbers

#include <iostream>

int main()
{
	int num1, num2, sum; // variable declarations
		
	std::cout << "Enter first integer: "; // get 1st int 
	std::cin >> num1; // store int to var num1
	
	std::cout << "Enter second integer: "; // get 2nd int
	std::cin >> num2; // store int to var num2
	
	sum = num1 + num2; // add ints stored in vars together and stor in var sum
	
	std::cout << "The sum is: " << sum << std::endl; // print out int stored in sum
	
	return 0;
}