#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
	/* Enter your code here. Read input from STDIN. Print output to STDOUT */
	char* s;
	int frequency[10] = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
	int i;
	
	s = (char*)malloc(1000 * sizeof(char));
	scanf("%s", s);
	s = realloc(s, strlen(s) + 1);
	
	for (i = 0; *(s + i) != '\0'; i++) {
		if (*(s + i) == '0') {
			frequency[0]++;
		} else if (*(s + i) == '1') {
			frequency[1]++;
		} else if (*(s + i) == '2') {
			frequency[2]++;
		} else if (*(s + i) == '3') {
			frequency[3]++;
		} else if (*(s + i) == '4') {
			frequency[4]++;
		} else if (*(s + i) == '5') {
			frequency[5]++;
		} else if (*(s + i) == '6') {
			frequency[6]++;
		} else if (*(s + i) == '7') {
			frequency[7]++;
		} else if (*(s + i) == '8') {
			frequency[8]++;
		} else if (*(s + i) == '9') {
			frequency[9]++;
		} else {

		}
	}

	for (i = 0; i < 10; i++) {
		if (i != 9) {
			printf("%d ", frequency[i]);
		} else {
			printf("%d\n", frequency[i]);
		}
	}

	return 0;
}
