#include <stdio.h>
#include <limits.h>

int main() {
    int input = 1;
    int sum = 0, num = 0;
    float avg = 0;
    int  max = INT_MIN, min = INT_MAX;

    printf("Input integers. Until you input non-positive integer, the integers will be summed.\n");
    while ( input > 0 ) {
        printf("Input integer: ");
        scanf("%i", &input);

        if ( input > 0 ) {
            sum += input;
            num++;

            if ( input >= max ) {
                max = input;
            }
            if ( input < min ) {
                min = input;
            }
        }

    }

    avg = sum / num;
    printf("Average value of the positive integers: %f\n", avg);
    printf("Maximum value of the positive integers: %i\n", max);
    printf("Minimum value of the positive integers: %i\n", min);

    return 0;
}
