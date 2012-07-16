#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>
#include "wibitLib.h"

int main(int argc, char* argv[])
{
	printf("%d\n", fileExists(argv[1]));
	return 0;	
}