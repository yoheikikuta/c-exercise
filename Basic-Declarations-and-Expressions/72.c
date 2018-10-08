#include <stdio.h>

int main(){
    int input = 0;
    int abs_input = 0;

    printf("Input (negative) integer: ");
    scanf("%i", &input);

    if (input < 0) {
        abs_input = -input;
    } else {
        abs_input = input;
    }

    printf("Absolute value = %i\n", abs_input);

    return 0;
}
