#include <stdio.h>

int main() {
    int input = 1;
    int sum = 0;

    printf("Input integers. Until you input non-positive integer, the integers will be summed.\n");
    while ( input > 0 ) {
        printf("Input integer: ");
        scanf("%i", &input);
        if ( input > 0 ) {
            sum += input;
        }
    }

    printf("Sum of the positive integers: %i\n", sum);

    return 0;
}
