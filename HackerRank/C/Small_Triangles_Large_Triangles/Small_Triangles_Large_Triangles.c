#include <stdio.h>
#include <stdlib.h>
#include <math.h>

struct triangle
{
	int a;
	int b;
	int c;
};

typedef struct triangle triangle;
void sort_by_area(triangle* tr, int n) {
	/**
	* Sort an array a of the length n
	*/
	double trWidthTemp, pTemp;
	double *trWidth = (double*)malloc(sizeof(double) * n);
	double *p = (double*)malloc(sizeof(double) * n);
	triangle trTemp;
	int i, j;

	for (i = 0; i < n; i++) {
		*(p + i) = ((double)((tr + i)->a + (tr + i)->b + (tr + i)->c)) / (double)2;
		*(trWidth + i) = sqrt(*(p + i) * (*(p + i) - (tr + i)->a) * (*(p + i) - (tr + i)->b) * (*(p + i) - (tr + i)->c));
	}

	for (i = 1; i < n; i++) {
		for (j = 0; j < n - i; j++) {
			if (*(trWidth + j) > *(trWidth + j + 1)) {
				trWidthTemp = *(trWidth + j + 1);
				*(trWidth + j + 1) = *(trWidth + j);
				*(trWidth + j) = trWidthTemp;

				pTemp = *(p + j + 1);
				*(p + j + 1) = *(p + j);
				*(p + j) = pTemp;

				trTemp = *(tr + j + 1);
				*(tr + j + 1) = *(tr + j);
				*(tr + j) = trTemp;
			} else {

			}
		}
	}

	free(trWidth);
	free(p);
}

int main()
{
	int n;
	scanf("%d", &n);
	triangle *tr = malloc(n * sizeof(triangle));
	for (int i = 0; i < n; i++) {
		scanf("%d%d%d", &tr[i].a, &tr[i].b, &tr[i].c);
	}
	sort_by_area(tr, n);
	for (int i = 0; i < n; i++) {
		printf("%d %d %d\n", tr[i].a, tr[i].b, tr[i].c);
	}

	return 0;
}
