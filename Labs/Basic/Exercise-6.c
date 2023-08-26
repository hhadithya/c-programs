#include <stdio.h>

int main() {
    // without user inputs
    // int distance = 10; // distance in kilometers
    // float fuel_volume = 5.2; // spent fuel volume in litres

    // with user inputs
    int distance;
    float fuel_volume;

    printf("Input distance(km): ");
    scanf("%d", &distance);
    printf("Input spent fuel volume(litres): ");
    scanf("%f", &fuel_volume);

    float avg_consumption = fuel_volume / distance;
    printf("Average fuel consumption: %.2f litres per kilometer", avg_consumption);

    return 0;
}











