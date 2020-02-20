#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>
#include "function.h"
int *reverse(int arr[], int size)
{
	int* arr3;
	arr3 = (int*)calloc(size,sizeof(int));		
	int c;
	int d;

	for (c = size-1, d = 0; c >= 0; c--, d++)
	{
		if (arr[c]!=0)
		{	
			arr3[d] = arr[c];
		}
	}
	return arr3;
}
