#include <stdio.h>

int main() {
    float v[5];
    int pos_num=0, neg_num=0;

    for (int i = 0; i < 5; i++) {
        printf("Input %ith number: ", i);
        scanf("%f", &v[i]);

        if (v[i] >= 0) {
            pos_num++;
        } else {
            neg_num++;
        }

    }

    printf("Number of postive numbers: %i\n", pos_num);
    printf("Number of negative numbers: %i\n", neg_num);

    return 0;
}
