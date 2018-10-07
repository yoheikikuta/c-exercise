#include <stdio.h>

int main() {
    int input;

    printf("Input an integer: ");
    scanf("%i", &input);

    if ( input > 0 ) {
        if ( input % 2 == 0 ) {
            printf("The input number is positive even.\n");
        } else {
            printf("The input number is positive odd.\n");
        }
    } else if ( input < 0 ) {
        if ( input % 2 == 0 ) {
            printf("The input number is negative even.\n");
        } else {
            printf("The input number is negative odd.\n");
        }
    } else if ( input == 0 ){
        printf("The input number is 0.\n");
    }

    return 0;
}
