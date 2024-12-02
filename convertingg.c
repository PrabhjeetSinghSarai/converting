// Converting Module Source
#define _CRT_SECURE_NO_WARNINGS
#define BUFFER_SIZE 80
#include "converting.h" // Include the header file

void converting() {
	/* Version 1
	Author: Prabhjeet Sarai, psarai@myseneca.ca, 107649246, Nov 28, 2024, CPR, Final Project
	[executable filename] : [converting]
	Purpose: This program demonstrates how to convert a string representing a 
	numeric value into an integer and prints the converted result. */
    printf("*** Start of Converting Strings to int Demo ***\n");
    char intString[BUFFER_SIZE];
    int intNumber;
    do {
        printf("Type an int numeric string (q - to quit):\n");
        fgets(intString, BUFFER_SIZE, stdin);
        intString[strlen(intString) - 1] = '\0';
        if (strcmp(intString, "q") != 0) {
            intNumber = atoi(intString);
            printf("Converted number is %d\n", intNumber);
        }
    } while (strcmp(intString, "q") != 0);
    printf("*** End of Converting Strings to int Demo ***\n");


	/* Version 2
    Author: Prabhjeet Sarai, psarai@myseneca.ca, 107649246, Dec 1, 2024, CPR, Final Project
	[executable filename] : [converting]
	Purpose: */
    // V2
    printf("*** Start of Converting Strings to double Demo ***\n");
    char doubleString[BUFFER_SIZE];
    double doubleNumber;
    do {
        printf("Type the double numeric string (q - to quit):\n");
        fgets(doubleString, BUFFER_SIZE, stdin);
        doubleString[strlen(doubleString) - 1] = '\0';
        if ((strcmp(doubleString, "q") != 0)) {
            doubleNumber = atof(doubleString);
            printf("Converted number is %f\n", doubleNumber);
        }
    } while (strcmp(doubleString, "q") != 0);
    printf("*** End of Converting Strings to double Demo ***\n\n");






}
