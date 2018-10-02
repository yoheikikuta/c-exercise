#include <stdio.h>

int main() {
    int radius = 6;
    float pi = 3.14;

    float perimeter = 2 * pi  * radius;
    float area = pi * radius * radius;

    printf("Perimeter of the circle = %f inches\n", perimeter);
    printf("Area of the circle = %f inches\n", area);

    return 0;
}
