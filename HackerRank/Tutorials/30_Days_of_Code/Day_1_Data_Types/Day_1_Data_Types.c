#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
	int i = 4;
	double d = 4.0;
	char s[] = "HackerRank ";

	// Declare second integer, double, and String variables.
	int secondInt;
	double secondDouble;
	char *strTemp = (char*)malloc(256 * sizeof(char));
	char* secondString = (char*)malloc(512 * sizeof(char));

	// Read and save an integer, double, and String to your variables.
	scanf("%d", &secondInt);
	scanf("%lf", &secondDouble);
	scanf("\n%[^\n]%*c", strTemp);

	// Print the sum of both integer variables on a new line.
	printf("%d\n", i + secondInt);

	// Print the sum of the double variables on a new line.
	printf("%.1lf\n", d + secondDouble);

	// Concatenate and print the String variables on a new line
	// The 's' variable above should be printed first.
	strcpy(secondString, s);
	strcat(secondString, strTemp);
	printf("%s\n", secondString);

	free(strTemp);
	free(secondString);

	return 0;
}
