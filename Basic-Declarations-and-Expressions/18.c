#include <stdio.h>

int main() {
    int input_days=0;
    int years=0, months=0, days=0;

    printf("Input no. of days: ");
    scanf("%i", &input_days);

    years = input_days / 365;
    input_days -= years * 365;
    months = input_days / 30;
    input_days -= months * 30;
    days = input_days;

    printf("%i Year(s)\n", years);
    printf("%i Month(s)\n", months);
    printf("%i Day(s)\n", days);

    return 0;
}
