#include <stdio.h>

int main() {
    float input[3];
    float v_max, v_mid, v_min;
    float perimeter;

    for (int i=0; i < 3; i++){
        printf("Input %ith interger: ", i);
        scanf("%f", &input[i]);
    }

    if (input[0] > input[1]) {
        if (input[2] > input[0]) {
           v_max = input[2];
           v_mid = input[0];
           v_min = input[1];
        } else if (input[1] > input[2]) {
           v_max = input[0];
           v_mid = input[1];
           v_min = input[2];
        } else {
           v_max = input[0];
           v_mid = input[2];
           v_min = input[1];
        }
    } else {
        if (input[2] > input[1]) {
           v_max = input[2];
           v_mid = input[1];
           v_min = input[0];
        } else if (input[0] > input[2]) {
           v_max = input[1];
           v_mid = input[0];
           v_min = input[2];
        } else {
           v_max = input[1];
           v_mid = input[2];
           v_min = input[0];
        }
    }

    if (v_max < v_mid + v_min) {
        perimeter = v_max + v_mid + v_min;
        printf("Valid input values and the perimeter is %f.\n", perimeter);
    } else {
        printf("Invalid input values.\n");
    }

    return 0;
}
