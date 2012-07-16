#include <iostream>
#include <fstream>
#include <stdlib.h>

using namespace std;

long getFileSize(ifstream *file)
{
	file->seekg(0, ios::end);
	long length = file->tellg();
	file->seekg(0, ios::beg);
	return length;	
}

int main(int argc, const char* argv[])
{
	ifstream inFile;
	ofstream outFile;
	int *fileData = NULL;
	inFile.open(argv[0], ios_base::binary);
	outFile.open(argv[1], ios_base::binary);
	long fileSize = getFileSize(&inFile);
	fileData = (int*)calloc(fileSize, 8);
	
	int i;
	
	for(i = 0; i < fileSize; i++)
	{
		fileData[i] = inFile.get();
	}
	for(i = 0; i < fileSize; i++)
	{
		outFile.put(fileData[i]);
	}
	inFile.close();
	outFile.close();
	free(fileData);
	return 0;	
}
