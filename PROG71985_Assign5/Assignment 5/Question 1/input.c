#include "input.h"

//madisont - prog71985 - assign5, q1 - input implementation

//Alphabetical validation function
bool alphaValidation(char* input) {
	
	for (int counter = 0; counter != strlen(input); counter++)
	{
		if (!isalpha(input[counter]))
		{
			return false;
		}
	}
	return true;
}

char* getStringInput(char* stringInput) {
	//Get string input from user
	printf("Please enter a word:\n");
	fgets(stringInput, MAXSTRING, stdin);

	//Remove newline character
	stringInput[strcspn(stringInput, "\n")] = '\0';

	//Validate input
	bool isValid = alphaValidation(stringInput);
	if (!isValid) {
		printf("ERROR: Input must be alphabetical.\nExiting...\n");
		free(stringInput);
		exit(EXIT_FAILURE);
	}
	return stringInput;
}