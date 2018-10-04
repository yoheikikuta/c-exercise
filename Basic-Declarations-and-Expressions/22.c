#include <stdio.h>

int main() {
    int input[5];
    int sum=0;

    for (int i=0; i < 5; i++){
        printf("Input %ith interger: ", i);
        scanf("%i", &input[i]);
        if (input[i] % 2 != 0) {
            sum += input[i];
        }
    }

    printf("The sum of all odd values is %i.\n", sum);

    return 0;
}
