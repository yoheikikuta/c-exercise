#include <stdio.h>
#include <math.h>

int main() {
    int total=0;
    int n100=0, n50=0, n20=0, n10=0, n5=0, n2=0, n1=0;

    printf("Input the amount: ");
    scanf("%i", &total);

    n100 = total / 100;
    total -= n100*100;
    n50 = total / 50;
    total -= n50*50;
    n20 = total / 20;
    total -= n20*20;
    n10 = total / 10;
    total -= n10*10;
    n5 = total / 5;
    total -= n5*5;
    n2 = total / 2;
    total -= n2*2;
    n1 = total;

    printf("%i Note(s) of 100.00\n", n100);
    printf("%i Note(s) of 50.00\n", n50);
    printf("%i Note(s) of 20.00\n", n20);
    printf("%i Note(s) of 10.00\n", n10);
    printf("%i Note(s) of 5.00\n", n5);
    printf("%i Note(s) of 2.00\n", n2);
    printf("%i Note(s) of 1.00\n", n1);

    return 0;
}
