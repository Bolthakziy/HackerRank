#include <assert.h>
#include <ctype.h>
#include <limits.h>
#include <math.h>
#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char* readline();
char* ltrim(char*);
char* rtrim(char*);
char** split_string(char*);
int parse_int(char*);

int main()
{
	int sum = 0, max, row, col;
	int** arr = malloc(6 * sizeof(int*));

	for (int i = 0; i < 6; i++) {
		*(arr + i) = malloc(6 * (sizeof(int)));
		char** arr_item_temp = split_string(rtrim(readline()));

		for (int j = 0; j < 6; j++) {
        		int arr_item = parse_int(*(arr_item_temp + j));
			*(*(arr + i) + j) = arr_item;
        	}
	}
	max = *(*(arr + 0) + 0) + *(*(arr + 0) + 1) + *(*(arr + 0) + 2) + *(*(arr + 1) + 1) + \
              *(*(arr + 2) + 0) + *(*(arr + 2) + 1) + *(*(arr + 2) + 2);

	for (row = 0; row < 4; row++) {
        	for (col = 0; col < 4; col++) {
        		sum = *(*(arr + row) + col) + *(*(arr + row) + col + 1) + *(*(arr + row) + col + 2) + \
                	      *(*(arr + row + 1) + col + 1) + *(*(arr + row + 2) + col) + \
                	      *(*(arr + row + 2) + col + 1) + *(*(arr + row + 2) + col + 2);

			if (sum > max) {
                		max = sum;
        		} else {

			}
		}
	}
	printf("%d\n", max);

	return 0;
}

char* readline() {
	size_t alloc_length = 1024;
	size_t data_length = 0;
	char* data = malloc(alloc_length);

	while (true) {
		char* cursor = data + data_length;
        	char* line = fgets(cursor, alloc_length - data_length, stdin);

		if (!line) {
        		break;
        	}
		data_length += strlen(cursor);

		if (data_length < alloc_length - 1 || data[data_length - 1] == '\n') {
        		break;
        	}

        	alloc_length <<= 1;
		data = realloc(data, alloc_length);

        	if (!data) {
        		data = '\0';
			break;
		}
	}

	if (data[data_length - 1] == '\n') {
        	data[data_length - 1] = '\0';
		data = realloc(data, data_length);

		if (!data) {
        		data = '\0';
		}
	} else {
        	data = realloc(data, data_length + 1);

        	if (!data) {
        		data = '\0';
        	} else {
        		data[data_length] = '\0';
        	}
	}

	return data;
}

char* ltrim(char* str) {
	if (!str) {
        	return '\0';
	}

	if (!*str) {
        	return str;
	}

	while (*str != '\0' && isspace(*str)) {
        	str++;
	}

	return str;
}

char* rtrim(char* str) {
	if (!str) {
        	return '\0';
	}

	if (!*str) {
        	return str;
	}
	char* end = str + strlen(str) - 1;

	while (end >= str && isspace(*end)) {
        	end--;
	}
	*(end + 1) = '\0';

	return str;
}

char** split_string(char* str) {
	char** splits = NULL;
	char* token = strtok(str, " ");
	int spaces = 0;

	while (token) {
        	splits = realloc(splits, sizeof(char*) * ++spaces);

        	if (!splits) {
        		return splits;
        	}

		splits[spaces - 1] = token;
		token = strtok(NULL, " ");
	}

	return splits;
}

int parse_int(char* str) {
	char* endptr;
	int value = strtol(str, &endptr, 10);

	if (endptr == str || *endptr != '\0') {
        	exit(EXIT_FAILURE);
	}

	return value;
}
