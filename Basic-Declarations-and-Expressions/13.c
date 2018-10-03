#include <stdio.h>
#include <stdlib.h>

int main() {
    int v1=0, v2=0, v3=0;
    int v_max_12=0, v_max_123=0;

    printf("Please input 1st int: ");
    scanf("%i", &v1);
    printf("Please input 2nd int: ");
    scanf("%i", &v2);
    printf("Please input 3rd int: ");
    scanf("%i", &v3);

    v_max_12 = (v1 + v2 + abs(v1 - v2)) / 2;
    v_max_123 = (v_max_12 + v3 + abs(v_max_12 - v3)) / 2;

    printf("The maximum value: %i\n" , v_max_123);

    return 0;
}
