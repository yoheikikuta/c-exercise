#include <stdio.h>

int main(int argc, char *argv[]) {
    int i;
    int *i_ptr;
    i = 1;
    int j = 2;
    i_ptr = &j;
    // *i_ptr = 2; // This does not work (warning)

    printf("int i is: %i\n", i);
    printf("address of int i is: %p\n", &i);
    printf("size of address of int i is: %lu (automatically converted into long unsigned int)\n", sizeof &i);
    // printf("pointer of int i is: %i\n", *i); // This does not work since pointer of variable does not return address.
    printf("value of int poiner i_ptr is: %i\n", *i_ptr);
    printf("address of int pointer i_ptr is: %p\n", i_ptr);
    printf("address of int j is: %p\n", &j);
    printf("size of pointer of int pointer i_ptr is: %lu\n", sizeof *i_ptr);

    printf("\n");

    // char str = "test"; // This does not work since array is required.
    char str[] = "test";
    char *str_ptr = "check";

    printf("array of characters str is: %s\n", str);
    printf("address of the first character &str[0] is formatted: %s\n", &str[0]);
    printf("address of the second character &str[0] is formatted: %s\n", &str[1]);
    printf("address of the first character &str[0] returns: %p\n", &str[0]);
    printf("address of the first character &str[1] returns: %p\n", &str[1]);
    // printf("pointer of the first character &str[1] returns: %p\n", *str[1]); // This does not work.
    printf("pointer varialbe str_ptr returns: %s\n", str_ptr);
    printf("address of the first pointer variable &str_ptr[0] is formatted: %s\n", &str_ptr[0]);
    printf("address of str_ptr is: %p\n", str_ptr);
    printf("address of the first pointer variable &str_ptr[0] is: %p\n", &str_ptr[0]);
    printf("address of the incremented pointer ++str_ptr is formatted: %s\n", ++str_ptr);
    printf("address of the incremented pointer ++str_ptr: %p\n", ++str_ptr);

    return 0;
}
