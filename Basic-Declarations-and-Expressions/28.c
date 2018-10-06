#include <stdio.h>

int main() {
    float v[5];
    int pos_num=0 ;
    float sum_pos_num=0;
    float avg_pos_num=0;

    for (int i = 0; i < 5; i++) {
        printf("Input %ith number: ", i);
        scanf("%f", &v[i]);

        if (v[i] >= 0) {
            pos_num++;
            sum_pos_num += v[i];
        }

    }

    avg_pos_num = sum_pos_num / pos_num;

    printf("Number of postive numbers: %i\n", pos_num);
    printf("Average value of the positive numbers: %f\n", avg_pos_num);

    return 0;
}
