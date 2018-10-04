#include <stdio.h>

int main() {
    float input[3];
    float v_max, v_mid, v_min;
    float perimeter;

    for (int i=0; i < 3; i++){
        printf("Input %ith interger: ", i);
        scanf("%f", &input[i]);
    }

    if ( input[0] < (input[1]+input[2]) || input[1] < (input[0]+input[2]) || input[2] < (input[1]+input[0]) ) {
        perimeter = input[0] + input[1] + input[2];
        printf("Valid input values and the perimeter is %f.\n", perimeter);
    } else {
        printf("Invalid input values.\n");
    }

    return 0;
}
