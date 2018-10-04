#include <stdio.h>

int main() {
    int v1=0, v2=0;

    printf("Input 1st interger: ");
    scanf("%i", &v1);
    printf("Input 2nd interger: ");
    scanf("%i", &v2);

    if (v1 % v2 == 0) {
        printf("Multiplied!\n");
    } else {
        printf("Not multiplied.\n");
    }

    return 0;
}
