#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

char* numbers[10] = {"zero", "one", "two", "three", "four", "five", "six", "seven", "eight", "nine"};

int main() 
{
	int a, b, i;
	scanf("%d\n%d", &a, &b);
	// Complete the code.
	for (i = a; i <= b; i++) {
		if (i < 10) {
			printf("%s\n", numbers[i]);
		} else {
			if ((i & 1) == 0) {
				printf("even\n");
			} else {
				printf("odd\n");
			}
		}
	}

	return 0;
}
