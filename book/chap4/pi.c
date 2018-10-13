#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(int argc, char *argv[]) {
    double x, y, insect_cnt;
    int i;

    insect_cnt = 0.0;
    i = 0;

    srand(time(NULL));

    while (i < 100000000) {
        x = (double) rand() / RAND_MAX;
        y = (double) rand() / RAND_MAX;
        if ( x * x + y * y < 1.0) {
            insect_cnt += 1.0;
        }
        i++;
    }

    printf("%f\n", insect_cnt / i * 4.0);

    return 0;
}
