#include<stdio.h>

int main() {
    float a, b, c;

    printf("Angle a: ");
    scanf("%f", &a);
    printf("Angle b: ");
    scanf("%f", &b);

    c = 180 - (a + b);
    printf("Angle c: %.2f", c);

    return 0;
}