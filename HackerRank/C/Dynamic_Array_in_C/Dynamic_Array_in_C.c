#include <stdio.h>
#include <stdlib.h>

/*
 * This stores the total number of books in each shelf.
*/
int* total_number_of_books;

/*
 * This stores the total number of pages in each book of each shelf.
 * The rows represent the shelves and the columns represent the books.
*/
int** total_number_of_pages;

int main()
{
	int total_number_of_shelves, idx;
	scanf("%d", &total_number_of_shelves);
	total_number_of_books = (int*)calloc(total_number_of_shelves, sizeof(int));
	total_number_of_pages = (int**)malloc(sizeof(int*) * total_number_of_shelves);
	for(idx = 0; idx < total_number_of_shelves; idx++) {
		*(total_number_of_pages + idx) = (int*)malloc(sizeof(int) * 1100);
	}

	int total_number_of_queries;
	scanf("%d", &total_number_of_queries);

	while (total_number_of_queries--) {
		int type_of_query;
		scanf("%d", &type_of_query);

		if (type_of_query == 1) {
			/*
			* Process the query of first type here.
			*/
			int x, y, shelves_pointer;
			scanf("%d %d", &x, &y);
			(*(total_number_of_books + x))++;
			shelves_pointer = *(total_number_of_books + x) - 1;
			*(*(total_number_of_pages + x) + shelves_pointer) = y;
		} else if (type_of_query == 2) {
			int x, y;
			scanf("%d %d", &x, &y);
			printf("%d\n", *(*(total_number_of_pages + x) + y));
		} else {
			int x;
			scanf("%d", &x);
			printf("%d\n", *(total_number_of_books + x));
		}
	}

	if (total_number_of_books) {
		free(total_number_of_books);
	}

	for (int i = 0; i < total_number_of_shelves; i++) {
		if (*(total_number_of_pages + i)) {
			free(*(total_number_of_pages + i));
		}
	}

	if (total_number_of_pages) {
		free(total_number_of_pages);
	}

	return 0;
}
