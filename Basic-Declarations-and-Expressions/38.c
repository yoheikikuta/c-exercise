#include <stdio.h>

int main() {
    int divident = 0, divisor = 0;

    printf("Input two numbers (divident, divisor): \n");
    printf("divident: ");
    scanf("%i", &divident);
    printf("divisor: ");
    scanf("%i", &divisor);

    if ( divident % divisor == 0 ) {
        printf("Division possible.\n");
    } else {
        printf("Division impossible.\n");
    }

    return 0;
}
