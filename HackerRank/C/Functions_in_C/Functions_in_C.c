#include <stdio.h>

/*
Add `int max_of_four(int a, int b, int c, int d)` here.
*/
int max_of_four(int a, int b, int c, int d);

int main() {
	int a, b, c, d;
	scanf("%d %d %d %d", &a, &b, &c, &d);
	int ans = max_of_four(a, b, c, d);
	printf("%d", ans);

	return 0;
}

int max_of_four(int a, int b, int c, int d)
{
	int numbers[4] = {a, b, c, d};
	int i, max = 0;

	for (i = 0; i < 4; i++) {
		if (max < numbers[i]) {
			max = numbers[i];
		} else {

		}
	}

	return max;
}
