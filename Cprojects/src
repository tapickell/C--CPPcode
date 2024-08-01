#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, const char* argv[])
{
	int shift = atoi(argv[1]);
	char message[256];
	strcpy(message, argv[2]);
	int i;
	for(i = 0; i < strlen(message); i++)
	{
		printf("%c", message[i] + shift);
	}	
	putchar('\n');

	return 0;
}