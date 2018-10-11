#include <stdio.h>

void func(void) {
    //int count = 0;
    static int count = 0;
    count++;
    printf("count = %d\n", count);

    return;
}

int main(int argc, char *argv[]) {
    func();
    func();
    func();

    return 0;
}
