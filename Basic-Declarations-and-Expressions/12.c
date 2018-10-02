#include <stdio.h>

int main() {
    char id[10];
    float hr, salary_per_hr;

    printf("Please input Employees ID (Max 10 chars.): ");
    scanf("%s", &id);
    printf("Please input Working hours: ");
    scanf("%f", &hr);
    printf("Please input Salary amount/hour: ");
    scanf("%f", &salary_per_hr);

    printf("Employees ID = %s\n" , id);
    printf("Salary = $%.2f\n" , hr * salary_per_hr);

    return 0;
}
