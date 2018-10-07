#include <stdio.h>

int main() {
    int input = 0, x = 0;
    int sum = 0;

    printf("Input a positive number less than 500: ");
    scanf("%i", &x);

    input = x;

    while ( x != 0 ) {
        sum += x % 10;
        x /= 10;
    }

    printf("Sum of the digit %i is: %i\n", input, sum);

    return 0;
}
