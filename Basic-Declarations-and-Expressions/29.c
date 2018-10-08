#include <stdio.h>

int main() {
    int v[5];
    float sum_odd_num=0;

    for (int i = 0; i < 5; i++) {
        printf("Input %ith integer: ", i);
        scanf("%i", &v[i]);

        if (v[i] % 2 != 0) {
            sum_odd_num += v[i];
        }

    }

    printf("Sum of the given odd numbers: %i\n", sum_odd_num);

    return 0;
}
