#include <stdio.h>

int main() {
    int input_sec=0;
    int hours=0, mins=0, secs=0;

    printf("Input seconds: ");
    scanf("%i", &input_sec);

    hours = input_sec / (60 * 60);
    input_sec -= hours * (60 * 60);
    mins = input_sec / 60;
    input_sec -= mins * 60;
    secs = input_sec;

    printf("H:M:S - %i:%i:%i\n", hours, mins, secs);

    return 0;
}
