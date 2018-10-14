#include <stdio.h>

#define INTEGER_NUM_1 100
#define FLOAT_NUM_1 3.14
#define STRING_1 "%s"
#define STRING_2 "hello, world\n"


int main(int argc, char *argv[]) {
#define INTEGER_NUM_2 200
#define FLOAT_NUM_2 2.71

    int a = INTEGER_NUM_1;
    printf("%d %d\n", a, INTEGER_NUM_2);

    float b = FLOAT_NUM_1;
    float c = FLOAT_NUM_2;

    printf("%f %f\n", b, c);

    printf(STRING_1, STRING_2);

    return 0;
}
