#include <iostream>
#include <fstream>

using namespace std;

int main(int argc, const char* argv[])
{
	ifstream inFile;
	string fileLine;
	inFile.open(argv[1]);
	while(!inFile.eof())
	{
		getline(inFile, fileLine);
		cout << fileLine << endl;
	}
	inFile.close();
	return 0;	
}