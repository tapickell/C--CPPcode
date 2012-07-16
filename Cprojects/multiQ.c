#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <unistd.h>
#include <process.h>
#include "multiQ.h"

bool fillThreadRunning = false;
bool queueIsProcessing = false;

/* ************************************* */
void fillQThread(struct queue* localQ)
{
	fillThreadRunning = true;
	FILE* codeFile = fopen(__FILE__, "r");
	
	int c = 0, b;
	b = getc(codeFile);
	while(c < localQ->max || b != EOF)
	{
		//Sleep(1);
		while(queueIsProcessing) {  }
		queueIsProcessing = true;
		pushQueue(localQ, b);
		c++;
		b = getc(codeFile);
		queueIsProcessing = false;
	}
	
	fclose(codeFile); 
	fillThreadRunning = false;
}
/* ************************************* */
void popQThread(struct queue* localQ)
{
	//Sleep(10);
	QUEUE_DATATYPE* popPtr = NULL;
	while(fillThreadRunning || localQ->count > 0)
	{  
		while(queueIsProcessing)  {  }
		queueIsProcessing = true;
		popPtr = popQueue(localQ);
		if(popPtr != NULL) putchar(*popPtr);
		queueIsProcessing = false;
		
	}
}
/* ************************************* */
int main()
{
	system("clear");
	struct queue q;
	initQueue(&q);
	HANDLE fillThread = (HANDLE)_beginthread(fillQThread, 0, &q);
	HANDLE popThread = (HANDLE)_beginthread(popQThread, 0, &q);
	WaitForSingleObject(fillThread, 1000 * 300);
	WaitForSingleObject(popThread, 1000 * 300);

	return 0;
}