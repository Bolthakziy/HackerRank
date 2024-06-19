#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
	char *s;
	int i;
	s = (char*)malloc(1024 * sizeof(char));
	scanf("%[^\n]", s);
	s = (char*)realloc(s, strlen(s) + 1);

	//Write your logic to print the tokens of the sentence here.
	for (i = 0; *(s + i) != '\0'; i++) {
		if (*(s + i) != ' ') {
			printf("%c", *(s + i));
		} else {
			printf("\n");
		}
	}
	free(s);

	return 0;
}
