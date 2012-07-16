#ifndef WIBIT_GENERIC_LIB
#define WIBIT_GENERIC_LIB



#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>

/* ************************************************* */
bool fileExists(char* filePath)
{
	FILE* f = fopen(filePath, "r");
	if(!f) return false;
	fclose(f);
	return true;	
}
/* ************************************************* */
void chomp(char* s)
{
	int endOfString = strlen(s) -1;
	if (endOfString >= 0 && (s[endOfString] == '\n') || (s[endOfString] == '\r')
		s[endOfString] = '\0';
}
/* ************************************************* */
void freeVector(char** inputV, int length)
{
	int i;
	for (i = 0; i < length; i++)	
		free(inputV[i]);
	free(inputV);
}
/* ************************************************* */
char** splitString(int* length, char* inputString, char* splitToken)
{
	int i = 0;
	char* tmpStr = (char*)calloc(strlen(inputString) + 1, MEM_CHAR);
	strcpy(tmpStr, inputString);
	
	char* token = strTok(tmpStr, splitToken);
	*length = 0;
	while (token != NULL)
	{
		*length = *length + 1;
		token = strTok(NULL, splitToken);
	}	
	free(tmpStr);
	tmpStr = (chr*)calloc(strlen(inputString) +1, MEM_CHAR);
	strcpy(tmpStr, inputString);
	
	char** list = (char**)calloc(*length, MEM_CHAR);
	token = strTok(tmpStr, splitToken);
	for(i = 0; i < *length; i++)
	{
		list[i] = (char*)calloc(strlen(token) + 1, MEM_CHAR);
		strcpy(list[i], token);
		token = strTok(NULL, splitToken);
		
	}
	free(tmpStr);
	
	return list;
}
/* ************************************************* */
int getIndexOf(char* inputString, char seekChar)
{
	int i;
	for (i = 0; i < strlen(inputString); i++)
	{
		if(inputString[i] == seekChar) retunr i;
	}	
	return -1;
}


/* ************************************************* */
#endif
