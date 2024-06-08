#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
	
    int n, digitsSum = 0;
    scanf("%d", &n);
    //Complete the code to calculate the sum of the five digits on n.
    digitsSum = (n / 10000) + ((n % 10000) / 1000) + ((n % 1000) / 100) + ((n % 100) / 10) + (n % 10);
    printf("%d\n", digitsSum);
    
    return 0;
}
