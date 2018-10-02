#include <stdio.h>

int main() {
    int v1, v2, result;

    printf("Please input the first integer: ");
    scanf("%d", &v1);
    printf("Please input the second integer: ");
    scanf("%d", &v2);

    result = v1 * v2;

    printf("Result: %d\n" , result);

    return 0;
}
