#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() 
{
	int n, i, j, start = 0, end, pivot, printedNumber;
	int** pattern;

	scanf("%d", &n);
	// Complete the code to print the pattern.
	end = 2 * (n - 1);
	pivot = n - 1;
	printedNumber = n;
	pattern = (int**)malloc(sizeof(int*) * (2 * n - 1));
	for (i = 0; i < 2 * n - 1; i++) {
		*(pattern + i) = (int*)malloc(sizeof(int) * 2 * n - 1);
	}

	while (start <= pivot) {
		for (i = start; i <= end; i++) {
			for (j = start; j <= end; j++) {
				*(*(pattern + i) + j) = printedNumber;
			}
		}

		start++;
		end--;
		printedNumber--;
	}

	for (i = 0; i < 2 * n - 1; i++) {
		for (j = 0; j < 2 * n - 1; j++) {
			if (j != (n - 1) * 2) {
				printf("%d ", *(*(pattern + i) + j));
			} else {
				printf("%d\n", *(*(pattern + i) + j));
			}
		}
	}

	for (i = 0; i < 2 * n - 1; i++) {
		free(*(pattern + i));
	}
	free(pattern);

	return 0;
}
