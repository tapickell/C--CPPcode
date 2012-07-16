#include <stdio.h>
#include "queue.h"



int main()
{
	struct queue q;
	initQueue(&q);
	for(int i = 0; i < 26; i++)
		pushQueue(&q, i + 65);
		
	char* pValue = popQueue(&q);
	while(pValue != NULL)
	{
		printf("%c", *pValue);
		pValue = popQueue(&q);
	}
	printf("\n");

	return 0;
}