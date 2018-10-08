#include <stdio.h>
#include <limits.h>

int main() {
    int total = 199;
    int num_count = 0;

    printf("The prime numbers between 1 and 199 are: \n");
    printf(" 2");
    num_count++;

    for (int i = 3; i <= total; i++){
        int judge_flg;
        judge_flg = judge_prime(i);

        if ( judge_flg == 1 ) {
            printf(" %i", i);
            num_count++;
            if ( num_count % 5 == 0 ){
                printf("\n");
            }
        }
    }

    printf("\n");
    return 0;
}

int judge_prime (int input) {
    int upto = input / 2 + 1;
    int judge_flg = 1;

    for (int i = 2; i <= upto; i++) {
        if ( input % i == 0 ) {
            judge_flg = 0;
            break;
        }
    }

    return judge_flg;
}
