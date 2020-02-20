// Name : Brandon London
// title : reverse
// date : 10/29/2019
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
int main(const int argc, const char *argv[])
{
//Check to see if an argument exists
	if (argc < 2)
	{
		fprintf(stderr, "usage: %s string...\n", argv[0]); // display usage message.
		return EXIT_FAILURE; //exit with a standard error
	}
	char answer;
	int i; // create variable used for indexing
	int smallest = 1; //creates and initializes a variable that will hold the index of the smallest value
	int largest = argc - 1; // create and initializes a variable that will hold the index of the largest value.
	// print argumants in reverse order excluding name of executable and find the smallest and largest arugments.
	

	do { 
		printf("Did You put in only integers, enter Y/N \n");
		printf("capital Y and N only please \n");
		scanf(" %c", &answer);
	} while (answer != 'Y' && answer != 'N');
		
	if (answer == 'Y') //
	{
		for (i = 1; i < argc; i++)
		{
			if (atoi(argv[i]) < atoi(argv[smallest])) smallest = i;
			if (atoi(argv[i]) > atoi(argv[largest])) largest = i;
		}		
	}
	else
	{
		for (i = argc - 1; i > 0; i--)
		{	
			printf("%s", argv[i]);
			if (i > 1) printf(" ");// adds space is its not at the end of the argumants
			else printf("\n"); //adds a new line at the end of the arguments
		
			//finds smallest and largest values
			if (strcmp(argv[i], argv[smallest]) < 0) smallest = i; // compare and store smallest index
			if (strcmp(argv[i], argv[largest]) > 0) largest = i; // compare and store largest value index
		}
	}
	printf("The smallest string was: %s\n", argv[smallest]); // displays the smallest in the array
	printf("The largest string was: %s\n", argv[largest]); // displays the largest value in the array	
	return EXIT_SUCCESS; // exit with success.
}

