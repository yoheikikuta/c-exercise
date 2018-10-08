#include <stdio.h>
#include <math.h>

int main(){
    int comb_coeff = 0;

    printf("Mx, 0 1 2 3 4 5 6 7 8 9 10\n");
    printf("----------------------------------------------------------\n");
    for (int i = 0; i <= 10; i++) {
        printf("%i,", i);
        for (int j = 0; j <= i; j++) {
            comb_coeff = combination(i,j);
            printf(" %i", comb_coeff);
        }
        printf("\n");
    }
    printf("----------------------------------------------------------\n");

    return 0;
}

int combination(int n, int r) {
    int coeff = 1;

    if ( n == 0 || r == 0 ) {
        return coeff;
    }

    int numerator = 1;
    int denom1 = 1;
    int denom2 = 1;

    for (int i = 1; i <= n; i++){numerator *= i;};
    for (int i = 1; i <= (n-r); i++){denom1 *= i;};
    for (int i = 1; i <= r; i++){denom2 *= i;};

    coeff = numerator / (denom1 * denom2);

    return coeff;
}
