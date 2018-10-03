#include <stdio.h>
#include <math.h>

int main() {
    float a=0, b=0, c=0;
    float root1=0, root2=0;

    printf("Input the first number(a): ");
    scanf("%f", &a);
    printf("Input the second number(b): ");
    scanf("%f", &b);
    printf("Input the third number(c): ");
    scanf("%f", &c);

    root1 = (- b + sqrt( pow(b,2) - 4*a*c )) / (2 * a);
    root2 = (- b - sqrt( pow(b,2) - 4*a*c )) / (2 * a);

    printf("Root1: %f\n", root1);
    printf("Root2: %f\n", root2);

    return 0;
}
