#include <stdio.h>

int main() {
    int input1=0;
    int input2=0;
    int input3=0;
    int input4=0;
    int input5=0;
    int sum=0;

    printf("Input 1st interger: ");
    scanf("%i", &input1);
    printf("Input 2nd interger: ");
    scanf("%i", &input2);
    printf("Input 3rd interger: ");
    scanf("%i", &input3);
    printf("Input 4th interger: ");
    scanf("%i", &input4);
    printf("Input 5th interger: ");
    scanf("%i", &input5);

    if (input1 % 2 !=0) {
        sum += input1;
    }
    if (input2 % 2 !=0) {
        sum += input2;
    }
    if (input3 % 2 !=0) {
        sum += input3;
    }
    if (input4 % 2 !=0) {
        sum += input4;
    }
    if (input5 % 2 !=0) {
        sum += input5;
    }

    printf("The sum of all odd values is %i.\n", sum);

    return 0;
}
