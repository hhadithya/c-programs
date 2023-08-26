#include<stdio.h>

int main() {
    float temp_c, temp_f;   // temp_c = temperature in Centigrade, temp_f = temperature in Fahrenheit

    printf("Enter temperature in Centigrade(°C): ");
    scanf("%f", &temp_c);

    temp_f = (temp_c * 9 / 5) + 32;
    printf("Temperature in Fahrenheit: %.2f°F", temp_f);

    return 0;
}