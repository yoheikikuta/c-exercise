#include <stdio.h>

int main() {
    int v1=0, v2=0, v3=0;
    int v_1st=0, v_2nd=0, v_3rd=0;

    printf("Please input 1st int: ");
    scanf("%i", &v1);
    printf("Please input 2nd int: ");
    scanf("%i", &v2);
    printf("Please input 3rd int: ");
    scanf("%i", &v3);

    if (v1 >= v2) {
        if (v3 > v1) {
            v_1st = v3;
            v_2nd = v1;
            v_3rd = v2;
        } else if (v2 > v3) {
            v_1st = v1;
            v_2nd = v2;
            v_3rd = v3;
        } else {
            v_1st = v1;
            v_2nd = v3;
            v_3rd = v2;
        }
    } else {
        if (v3 > v2) {
            v_1st = v3;
            v_2nd = v2;
            v_3rd = v1;
        } else if (v1 > v3) {
            v_1st = v2;
            v_2nd = v1;
            v_3rd = v3;
        } else {
            v_1st = v2;
            v_2nd = v3;
            v_3rd = v1;
        }
    }

    printf("1st: %i\n" , v_1st);
    printf("2nd: %i\n" , v_2nd);
    printf("3rd: %i\n" , v_3rd);

    return 0;
}
