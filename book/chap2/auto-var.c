#include <stdio.h>

char * func(void) {
    static char one_string[14] = "hello, world\n";
    printf("from func: %s", one_string);

    return one_string;
}

int main(int argc, char *argv[]) {
    printf("from main: %s", func());

    return 0;
}
