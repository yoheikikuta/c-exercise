#include <stdio.h>

int main() {
    int v1 = 0, v2 = 0;
    int min = 0, max = 0, sum = 0;
    int divisor = 17;

    printf("Input a pair of integers: \n");
    printf("First integer: ");
    scanf("%i", &v1);
    printf("Second integer: ");
    scanf("%i", &v2);

    if ( v1 < v2 ) {
        min = v1;
        max = v2;
    } else {
        min = v2;
        max = v1;
    }

    for ( int i=min; i<=max; i++) {
        if ( i % divisor != 0 ) {
            sum += i;
        }
    }

    printf("Sum of the numbers which cannot be divided by %i is: %i\n", divisor, sum);

    return 0;
}
