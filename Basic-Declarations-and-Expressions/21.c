#include <stdio.h>

int main() {
    int input=0;
    int min=0, max=0, interval=20;
    max += interval;

    printf("Input an interger: ");
    scanf("%i", &input);

    if (input < 0 || input > 80) {
        printf("Error. Input integer is negative or larger than 80.\n");
    }

    while (max <= 80) {
        if (min <= input && input <= max){
            printf("Input integer is in [%i,%i].\n", min, max);
            break;
        }
        min += interval;
        max += interval;
    }

    return 0;
}
