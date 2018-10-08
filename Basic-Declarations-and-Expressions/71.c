#include <stdio.h>

int main(){
    char *str;
    int char_cnt = 0;

    printf("Original string: ");
    scanf("%s", str);

    for (int i = 0; str[i] != '\0'; i++) {char_cnt++;}
    printf("Number of characters = %i\n", char_cnt);

    return 0;
}
