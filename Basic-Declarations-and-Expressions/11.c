#include <stdio.h>

int main() {
    float w1, n1, w2, n2;
    float total_w, total_n;
    float average;

    printf("Please input Weight - Item1: ");
    scanf("%f", &w1);
    printf("Please input Number of Item1: ");
    scanf("%f", &n1);
    printf("Please input Weight - Item2: ");
    scanf("%f", &w2);
    printf("Please input Number of Item1: ");
    scanf("%f", &n2);

    total_w = w1 * n1 + w2 * n2;
    total_n = n1 + n2;
    average = total_w / total_n;

    printf("Result: %f\n" , average);

    return 0;
}
