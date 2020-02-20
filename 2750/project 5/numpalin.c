#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>
#include "function.h"
int* arr1;
int size;
int* arr2;
int* arr4;
int* arr5;
int main(const int argc, char* const argv[])
{
	size = argc;
	arr1 = (int*)calloc(size, sizeof(int));
	arr2 = (int*)calloc(size, sizeof(int));
	int n = 100;
	int j;
	int i;
	int flags, opt;
	int nsecs, tfnd;
	nsecs = 0;
	tfnd = 0;
	flags = 0;
	int foo;
	char* yeet;
	int counter;
	int k;
	foo = atoi(argv[2]);
	while ((opt = getopt(argc, argv, "hvn:t:")) != -1)
	{
		switch (opt)
		{
		case 'h':
			fprintf(stdout, "Usage: Please insert only integers using -n");
			exit(EXIT_FAILURE);
		case 'n':
			for (j = 1; j < size; j++)
			{
				arr2[j] = atoi(argv[j]);
				if (arr2[j] >= foo)
				{
					arr1[j] = atoi(argv[j]);
				}
			}
			for (i = 0; i < size; i++)
			{
				counter = 0;
				for (j = i + 1; j < size; j++)
				{
					if (arr1[i] == arr1[j])
					{
						counter++;
						if (counter > 1)
						{
							for (k = j; k < size; k++)
							{
								arr1[k] = arr1[k + 1];
							}
							size--;
							j--;
						}
					}
				}
			}
			break;
		default: /* '?' */
			fprintf(stderr, "Usage: Please insert readable numbers",argv[0]);
			exit(EXIT_FAILURE);
		}
	}

	if (optind >= argc)
	{
		fprintf(stderr, "Expected argument after options\n");
		exit(EXIT_FAILURE);
	}
	int *p = reverse(arr1,size);
	int nozero = 0;
	for (i = 0; i < size-2; i++) {
		if (*p != '0')
		{
			nozero++;
			arr2[i] = *(p + i);
		}
	
	}
	arr4 = (int*)calloc(nozero,sizeof(int));
	arr5 = (int*)calloc(nozero,sizeof(int));
	int x=0;
	for(i=0;i<size;i++)
	{
		if(arr1[i] != 0)
		{
			arr4[x]=arr1[i];
			x++;
		}
	}
	x=0;	
	for(i=0;i<size;i++)
	{
		if(arr2[i]!=0)
		{
		arr5[x]=arr2[i];
		x++;	
		}
	}
	
	printf("\n%s\n","The array you entered with only one duplicate and no numbers smaller than first argument is:" );

	for(i=0;i<nozero;i++)
	{
	printf("%d ",arr4[i]);
	}
	printf("\n%s\n","The array flipped is: " );
	for(i=0;i<nozero;i++)
	{
	printf("%d ",arr5[i]);
	}
	printf("%s\n","");
	
	/* Other code omitted */
	counter = 0;
	for (i = 0;i < nozero;i++)
	{
		if (arr4[i] == arr5[i])
		{
			counter++;
		}
	}
	if (counter == nozero)		
	{
		printf("%s\n", "They are the same forward and backward");
	}
	
	exit(EXIT_SUCCESS);
}
