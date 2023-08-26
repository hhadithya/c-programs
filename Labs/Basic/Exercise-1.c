#include<stdio.h>

#define PI 3.14159

int main() {
    // assume that user will input a radius
    float r, area, circumference;  // r = radius in units

    printf("Enter radius(units): ");
    scanf("%f", &r);

    area = PI * r * r;
    circumference = 2 * PI * r;

    printf("Area of the circle: %.3f square units\n", area);
    printf("Circumference of the circle: %.3f units", circumference);

    return 0;
}

