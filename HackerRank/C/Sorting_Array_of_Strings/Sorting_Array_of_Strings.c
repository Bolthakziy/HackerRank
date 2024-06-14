#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int lexicographic_sort(const char* a, const char* b) {
	int flag = strcmp(b, a);

	return flag;
}

int lexicographic_sort_reverse(const char* a, const char* b) {
	int flag = strcmp(a, b);

	return flag;
}

int sort_by_number_of_distinct_characters(const char* a, const char* b) {
	int flag, i, j, aDistinctNumber, bDistinctNumber, isItThere = 0, idx = 0;
	char* aTemp = (char*)calloc(2500, sizeof(char));
	char* bTemp = (char*)calloc(2500, sizeof(char));
	for (i = 0; i < strlen(a); i++) {
		for (j = 0; j < 2500; j++) {
			if (*(a + i) != *(aTemp + j)) {
				isItThere = 0;
			} else {
				isItThere = 1;
				break;
			}
		}

		if (isItThere == 0) {
			*(aTemp + idx) = *(a + i);
			idx++;
		} else {

		}
	}
	*(aTemp + idx) = '\0';
	aDistinctNumber = strlen(aTemp);

	idx = 0;
	isItThere = 0;
	for (i = 0; i < strlen(b); i++) {
		for (j = 0; j < 2500; j++) {
			if (*(b + i) != *(bTemp + j)) {
				isItThere = 0;
			} else {
				isItThere = 1;
				break;
			}
		}

		if (isItThere == 0) {
			*(bTemp + idx) = *(b + i);
			idx++;
		} else {

		}
	}
	*(bTemp + idx) = '\0';
	bDistinctNumber = strlen(bTemp);

	if (aDistinctNumber < bDistinctNumber) {
		flag = 1;
	} else if (aDistinctNumber > bDistinctNumber) {
		flag = -1;
	} else {
		flag = strcmp(b, a);
	}

	free(aTemp);
	free(bTemp);

	return flag;
}

int sort_by_length(const char* a, const char* b) {
	int flag;

	if (strlen(a) > strlen(b)) {
		flag = -1;
	} else if (strlen(a) < strlen(b)) {
		flag = 1;
	} else {
		flag = strcmp(b, a);
	}

	return flag;
}

void string_sort(char** arr,const int len,int (*cmp_func)(const char* a, const char* b)){
	int i, j;
	char* temp;

	for (i = 1; i < len; i++) {
		for (j = 0; j < len - i; j++) {
			if (cmp_func(*(arr + j), *(arr + j + 1)) < 0) {
				temp = *(arr + j);
				*(arr + j) = *(arr + j + 1);
				*(arr + j + 1) = temp;
			} else {

			}
		}
	}
}

int main() 
{
	int n;
	scanf("%d", &n);

	char** arr;
	arr = (char**)malloc(n * sizeof(char*));

	for(int i = 0; i < n; i++){
		*(arr + i) = malloc(1024 * sizeof(char));
		scanf("%s", *(arr + i));
		*(arr + i) = realloc(*(arr + i), strlen(*(arr + i)) + 1);
	}

	string_sort(arr, n, lexicographic_sort);
	for(int i = 0; i < n; i++)
		printf("%s\n", arr[i]);
	printf("\n");

	string_sort(arr, n, lexicographic_sort_reverse);
	for(int i = 0; i < n; i++)
		printf("%s\n", arr[i]); 
	printf("\n");

	string_sort(arr, n, sort_by_length);
	for(int i = 0; i < n; i++)
		printf("%s\n", arr[i]);    
	printf("\n");

	string_sort(arr, n, sort_by_number_of_distinct_characters);
	for(int i = 0; i < n; i++)
		printf("%s\n", arr[i]); 
	printf("\n");

	return 0;
}
