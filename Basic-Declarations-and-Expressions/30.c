#include <stdio.h>
#include <math.h>

int main() {
    unsigned input;

    printf("Compute squares of even numbers from 1 to N\n");
    printf("Input N : ");
    scanf("%u", &input);

    for (int i = 2; i <= input; i+=2) {
        printf("%i^2 = %.0f\n", i, pow(i,2));
    }

    return 0;
}
