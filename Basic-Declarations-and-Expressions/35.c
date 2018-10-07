#include <stdio.h>

int main() {
    int v1 = 0, v2 = 0;

    printf("Input a pair of integers (e.g., 10,2): \n");
    printf("First integer: ");
    scanf("%i", &v1);
    printf("Second integer: ");
    scanf("%i", &v2);

    if ( v1 < v2 ) {
        printf("The input pair is ascending order.\n");
    } else if ( v1 > v2 ) {
        printf("The input pair is descending order.\n");
    } else if ( v1 == v2 ) {
        printf("The input pair is equal numbers.\n");
    }

    return 0;
}
