#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
	int n, sum = 0, i;
	int* a;

	/* Enter your code here. Read input from STDIN. Print output to STDOUT */
	scanf("%d", &n);
	a = (int*)malloc(sizeof(int) * n);

	for (i = 0; i < n; i++) {
		scanf("%d", a + i);
		sum += *(a + i);
	}
	printf("%d\n", sum);
	free(a);

	return 0;
}
