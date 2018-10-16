#include <stdio.h>

int sum(int *, int *, int *);

int sum(int *a, int *b, int *ans) {
    *ans = *a + *b;
    return 0;
}

int main(int argc, char *argv[]) {
    int num_1 = 1;
    int num_2 = 2;
    int *answer;
    int ans;
    answer = &ans; // Need this initialization.

    if (sum(&num_1, &num_2, answer) != 0) {
        printf("error\n");
    }

    printf("The answer is ...\n");
    printf("answer = %d\n", *answer);

    return 0;
}
