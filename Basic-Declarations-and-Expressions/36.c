#include <stdio.h>

int main() {
    int password = 1234;
    int input = 0;

    printf("Input password: \n");
    scanf("%i", &input);

    while ( input != password ) {
        printf("Incorrect password...\n");
        printf("Input password: \n");
        scanf("%i", &input);
    }

    printf("Correct password!\n");

    return 0;
}
