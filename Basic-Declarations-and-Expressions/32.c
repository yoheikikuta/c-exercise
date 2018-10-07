#include <stdio.h>

int main() {
    int divisor;
    int total = 100;

    printf("Input an integer which will be the divisor: ");
    scanf("%i", &divisor);

    for (int i = 1; i <= total; i++) {
        if ( i % divisor == 3 ) {
            printf("The number of remider 3 is %i.\n", i);
        }
    }

    return 0;
}
