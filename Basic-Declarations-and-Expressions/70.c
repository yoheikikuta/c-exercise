#include <stdio.h>

int main(){
    int comb_coeff = 0;

    for (int i = 'A' - 0; i <= 'z' - 0; i++) {
        printf("[%i-%c] ", i, i);
    }
    printf("\n");

    return 0;
}
