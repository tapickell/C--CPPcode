#include <iostream>
#include <fstream>
#include <sstream>

using namespace std;

int main(int argc, const char* argv[])
{
	istringstream iStream;
	iStream.str("Hey there Buddy!");
	while(!iStream.eof())
	{
		string word;
		iStream >> word;
		cout << word << endl;
	}


	return 0;
}