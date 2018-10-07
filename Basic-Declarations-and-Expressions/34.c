#include <stdio.h>

int main() {
    int v1 = 0, v2 = 0;
    int min = 0, max = 0, sum = 0;

    printf("Input a pair of integers (e.g., 10,2): \n");
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
        printf("%i\n", i);
        sum += i;
    }

    printf("Sum of the consective integer is: %i\n", sum);

    return 0;
}
