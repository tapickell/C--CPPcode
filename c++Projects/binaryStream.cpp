#include <iostream>
#include <fstream>

using namespace std;

int main(int argc, const char* argv[])
{
	ifstream inBinaryFile;
	inBinaryFile.open(argv[0], ios_base::binary);
	int currentByte = inBinaryFile.get();
	while(currentByte >= 0)
	{
		printf("%d = %x\n", currentByte, currentByte);
		currentByte = inBinaryFile.get();
	}
	inBinaryFile.close();
	return 0;
}