#include <stdio.h>
#include <math.h>

int main() {
    int input = 0;
    int target_value = 1;
    int sum = 0;

    printf("Input a positive number less than 100: ");
    scanf("%i", &input);

    for (int i = 1; ; i++) {
        sum += pow(target_value, 4);
        target_value += i;
        if (target_value > input) {
            break;
        }
    }

    printf("Sum of 1^4 + 2^4 + 4^4 + 7^4 ... m^4 is: %i\n", sum);

    return 0;
}
