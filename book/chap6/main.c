#include <stdio.h>
#include "functions.h"

int main(int argc, char *argv[]) {
    int num_1;
    int num_2;
    int answer;

    num_1 = 1;
    num_2 = 2;

    answer = sum(num_1, num_2);
    printf("answer = %d\n", answer);

    answer = sub(num_1, num_2);
    printf("answer = %d\n", answer);

    answer = mul(num_1, num_2);
    printf("answer = %d\n", answer);

    answer = div(num_1, num_2);
    printf("answer = %d\n", answer);

    return 0;
}
