#include <stdio.h>

int main() {
    int height = 7;
    int width = 5;

    int perimeter = 2 * height + 2 * width;
    int area = height * width;

    printf("Perimeter of the rectangle = %d inches\n", perimeter);
    printf("Area of the rectangle = %d inches\n", area);

    return 0;
}
