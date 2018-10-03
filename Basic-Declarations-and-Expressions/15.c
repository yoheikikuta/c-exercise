#include <stdio.h>
#include <math.h>

int main() {
    float x1=0, y1=0, x2=0, y2=0;
    float dist=0;

    printf("x1: ");
    scanf("%f", &x1);
    printf("y1: ");
    scanf("%f", &y1);
    printf("x2: ");
    scanf("%f", &x2);
    printf("y2: ");
    scanf("%f", &y2);

    dist = sqrt( pow(x1 - x2, 2) + pow(y1 - y2, 2) );

    printf("Distance between two points: %f\n" , dist);

    return 0;
}
