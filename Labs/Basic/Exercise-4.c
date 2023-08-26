#include<stdio.h>
#include<math.h>

int main() {
    float number, root;

    printf("Input a number: ");
    scanf("%f", &number);

    if (number >= 0) {
        root = sqrt(number);
        printf("Square root(approximately) of %f is %.3f", number, root);
    } else {
        printf("Square root is not defined for negative values");
    }

    return 0;
}