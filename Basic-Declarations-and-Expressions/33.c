#include <stdio.h>

int main() {
    int v[5];
    int max_v = 0, max_pos = 0;

    printf("Input five integers: ");

    for ( int i=0; i<5; i++) {
        printf("%ith integer :\n", i);
        scanf("%i", &v[i]);

        if ( v[i] >= max_v ) {
            max_v = v[i];
            max_pos = i;
        }
    }

    printf("Max value is %i:\n", max_v);
    printf("Max value's position is %i:\n", max_pos);

    return 0;
}
