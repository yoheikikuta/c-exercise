#include <stdio.h>
#include <math.h>

int main(){
    int base = 2;

    printf("=======================================\n");
    printf("n, 2 to power n, 2 to power -n\n");
    printf("=======================================\n");
    for (int i = 0; i <= 10; i++) {
        printf("%i, %.0f, %f\n", i, pow(base, i), pow(base, -i));
    }
    printf("======================================\n");

    return 0;
}
