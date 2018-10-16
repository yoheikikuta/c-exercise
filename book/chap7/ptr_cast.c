#include <stdio.h>

int main(int argc, char *argv[]) {
    int i;
    unsigned char *ptr;

    int num_1 = 2147483647;
    long long num_2 = 9223372036854775807;
    double num_3 = 1.797693e+308;

    printf("num_1 = %d\n", num_1);
    ptr = (unsigned char *) &num_1;

    for (i=0; i< (int) sizeof(num_1); i++) {
        printf("0x%X ", *ptr);
        ptr++;
    }
    printf("\n");

    printf("num_2 = %lld\n", num_2);
    ptr = (unsigned char *) &num_2;

    for (i=0; i< (int) sizeof(num_2); i++) {
        printf("0x%X ", *ptr);
        ptr++;
    }
    printf("\n");

    printf("num_3 = %f\n", num_3);
    ptr = (unsigned char *) &num_3;

    for (i=0; i< (int) sizeof(num_3); i++) {
        printf("0x%X ", *ptr);
        ptr++;
    }
    printf("\n");

    return 0;
}
