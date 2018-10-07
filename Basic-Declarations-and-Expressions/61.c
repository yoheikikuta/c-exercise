#include <stdio.h>
#include <math.h>

int main() {
    float x;

    printf("Input value of x: ");
    scanf("%f", &x);

    printf("The value of sin(1/x) is: %.4f\n", sin(1/x));

    return 0;
}
