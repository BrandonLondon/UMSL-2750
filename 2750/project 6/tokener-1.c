#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#define MAX_LINE_LENGTH 80

/* Shows an optional error message, show usage, and exit with failure. */
void terminate(const char* exeName, const char* message)
{
	if (message != NULL) fprintf(stdout, "%s\n", message); // Display optional error message
	fprintf(stdout, "Usage: %s [-i inputFileName] [-o outputFileName]\n", exeName); // Display usage message
	exit(EXIT_FAILURE); // Exit with failure
}

void tokenize(const char *inputFileName, const char *outputFileName, char exeName[])
{
	FILE *inputFile = fopen(inputFileName, "r");//open inputfile
	FILE *outputFile = fopen(outputFileName, "a");//open output file
	if (inputFile != NULL) // check if input file object exists
	{
		char line[MAX_LINE_LENGTH + 1];// create line buffer with max value
		char foo[2];
		foo[1]='\0';
		while(fgets(line,sizeof(line), inputFile) != NULL) // read line
		{
		foo[0] = line[0];
		printf("%s", foo);
		char *token = strtok(line, foo);
		while (token != NULL) {
			fprintf(outputFile,"%s \n", token);
			token = strtok(NULL, foo);
			}
		}
	}
	


}

int main(const int argc, char* const argv[])
{
	char* inputFileName = "input.txt"; // Initialize with default input file
	char* outputFileName = "output.txt"; // Initialize with default output file
	
	/* get options */
	int opt;
	while ((opt = getopt(argc, argv, "hi:o:")) != -1) // Get options using getopt
		switch (opt) // Switch statement for option
		{
			case 'h': // Print and exit before setting input and outputs
				fprintf(stdout, "Usage: %s [-i inputFileName] [-o outputFileName]\n", argv[0]); // Display usage message
				exit(EXIT_SUCCESS); // Exit with success
				break;
			case 'i':
				inputFileName = optarg; // If i chosen then inputFileName = that argument value
				break;
			case 'o':
				outputFileName = optarg; // If o chosen then outputFileName = that argument value
				break;
			default: /* ? */
				terminate(argv[0], "Unknown argument!"); // When an unknown argument is found, display usage message and terminate
				break;
		}
	
	if (access(inputFileName, F_OK) == -1) terminate(argv[0], "Input file does not exist!"); // Display usage message and terminate if input file doesn't exist
	
	if (optind != argc) terminate(argv[0], "Incorrect number of arguments!"); // Check if there are an incorrect amount of arguments and that they're mapped, if not, display usage message and terminate
	
	tokenize(inputFileName, outputFileName, argv[0]);	
	exit(EXIT_SUCCESS); // Exit with success
}
