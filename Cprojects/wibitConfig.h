#ifndef WIBIT_CFG_FILE
#define WIBIT_CFG_FILE
#define CFG_FILE_BUFFER_SIZE 2048

#include "wibitLib.h"


FILE* _configFilePtr = NULL;
/* ************************************************* */
bool ConfigFileSet(char* filePath)
{
	if(!fileExists(filePath)) return false;
	_configFilePtr = fopen(filePath, "r");
	return true;
}
/* ************************************************* */
bool ConfigFileStore(char* buffer, char* variableName)
{
	if (_configFilePtr == NULL) return false;
	char fileBuffer[CFG_FILE_BUFFER_SIZE];
	char fileVariableName[256];
	int visitIndex, i;
	while(!feof(_configFilePtr))
	{
		fgets(fileBuffer, CFG_FILE_BUFFER_SIZE, _configFilePtr);
		chomp(fileBuffer);
		if(strlen(fileBuffer) == 0) continue;
		if (fileBuffer[0] == '#') continue;
		visitIndex = getIndexOf(fileBuffer, '=');
		if(visitIndex < 0) continue;
		
		for(i = 0; i < visitIndex; i++)
		{
			fileVariableName[i] = fileBuffer[i];
		}
		fileVariableName[i] = '\0';
		if(strcmp(fileVariableName, variableName)) continue;
		int i;
		for (++visitIndex; visitIndex < strlen(fileBuffer); visitIndex++)
		{
			buffer[i] = fileBuffer[visitIndex];
			i++;
		}
		buffer[i] = '\0';
		break;
	}	
	rewind(_configFilePtr);
	return true;
}




#endif