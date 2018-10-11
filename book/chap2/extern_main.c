#include <stdio.h>

extern int global_number;

int main(int argc, char *argv[]) {
    printf("global_number = %d\n", global_number);

    return 0;
}
