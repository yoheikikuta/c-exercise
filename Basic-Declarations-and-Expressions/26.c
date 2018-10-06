#include <stdio.h>

int main() {
    int v=0;

    printf("All even numbers between 1 to 50\n");

    for (int i=1; i<=50; i++) {
        if (i%2==0) {
            printf("%i ", i);
        }
    }
    printf("\n");

    return 0;
}
