#include <stdio.h>
#include <stdlib.h>
#include <errno.h>
#include <limits.h>


int input_number_from_console(const char *prompt, const char *err_msg, long *number) {
    char input_string[16];
    char *endptr;

    if (number==NULL) {
        printf("Error.\n");
        return -1;
    }

    printf("%s", prompt);

    if (fgets(input_string, sizeof(input_string), stdin) == NULL) {
        fseek(stdin, 0, SEEK_END);
        printf("%s", err_msg);
        return -1;
    }

    errno = 0;

    *number = strtol(input_string, &endptr, 10);
    if (errno !=0 || *endptr != '\n' || (*number < LONG_MIN || LONG_MAX < *number)) {
        fseek(stdin, 0, SEEK_END);
        printf("%s", err_msg);
        return -1;
    }

    return 0;
}


int main(int argc, char *argv[]) {
    long a,b;
    long op;
    long answer;
    int c;

    do {
        answer = 0;

        if (input_number_from_console("Input number > ", "\nInput error.\n", &a) == 1) {
            continue;
        }

        if (input_number_from_console("Input number > ", "\nInput error.\n", &b) == 1) {
            continue;
        }

        printf("+---Operator menu---+\n");
        printf("|  1. +%*c|\n", 13, ' ');
        printf("|  2. -%*c|\n", 13, ' ');
        printf("|  3. *%*c|\n", 13, ' ');
        printf("|  4. /%*c|\n", 13, ' ');
        printf("+-------------------+\n");

        if (input_number_from_console("Input operator number > ", "\nInput error.\n", &op) == 1) {
            continue;
        }

        switch (op) {
        case 1:
            answer = a + b;
            break;
        case 2:
            answer = a - b;
            break;
        case 3:
            answer = a * b;
            break;
        case 4:
            if (b==0) {
                printf("divide by zero\n");
                continue;
            } else {
                answer = a / b;
            }
            break;
        default:
            printf("operator unknown\n");
            continue;
            // NOT REACHED
            break;
        }
        printf("answer is %ld\n", answer);

        printf("Input q[return] to quit, [return] to continuer.\n");
        c = getchar();
        if (c == EOF) {
            fseek(stdin, 0, SEEK_END);
        }

    } while (c != 'q');

    return 0;
}
