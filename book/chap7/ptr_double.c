#include <stdio.h>

int main(int argc, char *argv[]) {
    char array[4] = {'A', 'B', 'C', '\0'};
    char *ptr = array;
    char **ptr_double = &ptr;

    printf("array %p\n", array);
    printf("array %s\n", array);
    printf("array[0] %c\n", array[0]);
    printf("array[1] %c\n", array[1]);
    printf("array[2] %c\n", array[2]);

    printf("ptr %p\n", ptr);
    printf("&ptr %p\n", &ptr);
    printf("ptr %s\n", ptr);
    printf("*ptr %c\n", *ptr);
    printf("*(ptr+1) %c\n", *(ptr+1));
    printf("*(ptr+2) %c\n", *(ptr+2));

    printf("ptr_double %p\n", ptr_double);
    printf("*ptr_double %p\n", *ptr_double);
    printf("&ptr_double %p\n", &ptr_double);
    printf("*ptr_double %s\n", *ptr_double);
    printf("**ptr_double %c\n", **ptr_double);
    printf("*(*ptr_double+1) %c\n", *(*ptr_double+1));
    printf("*(*ptr_double+2) %c\n", *(*ptr_double+2));

    return 0;
}
