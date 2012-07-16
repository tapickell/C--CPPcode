#include <stdlib.h>
#include "intSortDLL.h"

void bubbleSortArray(int arr[], int SIZE)
{
	int i;
	for (i = 0; i < SIZE; i++)
	{
		if((i < SIZE - 1) && (arr[i] > arr[i + 1]))
		{
			tmp = arr[i];
			arr[i] = arr[i + 1];
			arr[i + 1] = tmp;
			i = -1;
		}
	}
}
/* ************************************************* */
void selectionSortArray(int arr[], int SIZE)
{
	int min, i, j, tmp;
	for(i = 0; i < SIZE; i++)
	{
		min = i;
		for(j = i + 1; j< SIZE; j++)
		{
			if(arr[j] < arr[min]) min = j;
		}
		tmp = arr[i];
		arr[i] = arr[min];
		arr[min] = tmp;
	}	
}
/* ************************************************* */
void selectionSortArray(int arr[], int SIZE)
{
		
}