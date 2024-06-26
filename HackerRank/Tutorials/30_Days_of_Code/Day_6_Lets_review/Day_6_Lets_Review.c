#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
	/* Enter your code here. Read input from STDIN. Print output to STDOUT */
	int T, i;
	char* S;

	scanf("%d", &T);
	while(T--) {
		S = (char*)malloc(sizeof(char) * 10000);
		scanf("%s", S);

		for(i = 0; *(S + i) != '\0'; i++) {
			if((i & 1) == 0) {
				printf("%c", *(S + i));
			} else {

			}
		}
		printf(" ");
		for(i = 0; *(S + i) != '\0'; i++) {
			if((i & 1) != 0) {
				printf("%c", *(S + i));
			} else {

			}
		}
		printf("\n");

		free(S);
	}

	return 0;
}
