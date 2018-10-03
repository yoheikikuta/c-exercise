#include <stdio.h>
#include <assert.h>

int main() {
    int p=0, q=0, r=0, s=0;

    printf("Input p: ");
    scanf("%i", &p);
    printf("Input q: ");
    scanf("%i", &q);
    printf("Input r: ");
    scanf("%i", &r);
    printf("Input s: ");
    scanf("%i", &s);

    assert( r >= 0 );
    assert( s >= 0 );
    assert( p%2 == 0 );

    if ( (q > r) && (s > p) ) {
        printf("Correct values!\n");
    } else {
        printf("Wrong values!\n");
    }

    return 0;
}
