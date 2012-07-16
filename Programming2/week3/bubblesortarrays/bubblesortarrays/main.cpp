//
//  main.cpp
//  bubblesortarrays
//
//  Created by Todd Pickell on 4/4/12.
//  Copyright (c) 2012 Columbia College. All rights reserved.
//

#include <iostream>
#include <stdlib.h>
#include <vector>

using namespace std;

void bubbleSort(vector<int>&);

int main (int argc, const char * argv[])
{

    cout << "Creating array." << endl;
    int myArray[] = {2, 6, 4, 8, 10, 12, 89, 68, 45, 37};
    cout << "Printing array: " << endl;
    vector<int> myVector;
    for (int i = 0; i < 10; i++) {
        cout << myArray[i] << endl;
        myVector.push_back(myArray[i]);
    }
    cout << "Tansfereing to vector." << endl;
    cout << "Sorting vector using buble sort algorythim" << endl;
    bubbleSort(myVector);
    cout << "Printing vecotr contents after bubble sort: " << endl;
    for (int i = 0; i < myVector.size(); i++) {
        cout << myVector[i] << endl;
    }
    
    
    return 0;
}


void bubbleSort(vector<int> &stack)
{
	int i;
	for (i = 0; i < stack.size(); i++)
        {
		if((i < stack.size() - 1) && (stack[i] > stack[i + 1]))
            {
			int tmp = stack[i];
			stack[i] = stack[i + 1];
			stack[i + 1] = tmp;
			i = -1;
            }
        }
}
