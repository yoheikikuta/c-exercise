#include <stdio.h>
#include <stdlib.h>

int main() {
    int num = 50;
    float rand_max = RAND_MAX;
    srand(2321);

    FILE *outputfile;
    outputfile = fopen("rand.dat", "w");
    if (outputfile == NULL) {
        printf("cannot open\n");
        exit(1);
    }

    fprintf(outputfile, "%i\n", num);

    for (int i = 1; i <= num; i++){
        float normalized_rand = (rand() / rand_max) - 0.5;
        fprintf(outputfile, "%f\n", normalized_rand);
    }

    fclose(outputfile);

    return 0;
}
