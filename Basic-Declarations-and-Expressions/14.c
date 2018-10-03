#include <stdio.h>

int main() {
    int dist=0;
    float fuel=0, avg_fuel_consumption=0;

    printf("Input total distance in km: ");
    scanf("%i", &dist);
    printf("Input total fuel spent in liters: ");
    scanf("%f", &fuel);

    avg_fuel_consumption = dist / fuel;

    printf("Average consumption (km/lt): %.2f\n" , avg_fuel_consumption);

    return 0;
}
