#include <stdio.h>

int main() {
    int x = 0, y = 0;

    printf("Input a coordinate in Cartesian system (x,y): \n");
    printf("x: ");
    scanf("%i", &x);
    printf("y: ");
    scanf("%i", &y);

    if ( x >= 0 && y >= 0 ) {
        printf("Quadrant-I(+,+)\n");
    } else if (  x < 0 && y >= 0 ) {
        printf("Quadrant-II(-,+)\n");
    } else if (  x < 0 && y < 0 ) {
        printf("Quadrant-III(-,-)\n");
    } else {
        printf("Quadrant-IV(+,-)\n");
    }

    return 0;
}
