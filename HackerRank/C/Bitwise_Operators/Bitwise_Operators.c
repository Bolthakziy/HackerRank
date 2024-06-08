#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

//Complete the following function.
void calculate_the_maximum(int n, int k)
{
	//Write your code here.
	int i, j, andMax = 0, orMax = 0, xorMax = 0;

	for (i = 1; i < n; i++) {
		for (j = i + 1; j <= n; j++) {
			if ((andMax < (i & j)) && (k > (i & j))) {
				andMax = (i & j);
			} else {

			}

			if ((orMax < (i | j)) && (k > (i | j))) {
				orMax = (i | j);
			} else {

			}

			if ((xorMax < (i ^ j)) && (k > (i ^ j))) {
				xorMax = (i ^ j);
			} else {

			}
		}
	}

	printf("%d\n%d\n%d\n", andMax, orMax, xorMax);
}

int main() {
	int n, k;

	scanf("%d %d", &n, &k);
	calculate_the_maximum(n, k);

	return 0;
}
