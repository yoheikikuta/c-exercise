#include <stdio.h>

int main(int argc, char *argv[]) {
    int year;
    int month;
    int day;
    int week_of_day;

    year = 2018;
    month = 8;
    day = 17;

    week_of_day = (year + year / 4 - year / 100 + year / 400 + (13 * month + 8) / 5 + day) % 7;

    printf("%d/%d/%d is %d\n", year, month, day, week_of_day);

    return 0;
}
