#include <stdio.h>

int main() {
    int input = 1329;
    int year, week, day;

    year = input / 365;
    week = (input -  365 * year) / 7;
    day = (input -  365 * year - 7 * week);

    printf("Years: %i\n" , year);
    printf("Weeks: %i\n" , week);
    printf("Days: %i\n" , day);

    return 0;
}
