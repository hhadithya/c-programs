#include <stdio.h>

int product(int, int);
int sum = 0;

int main(){
    int num1, num2, result;

    printf("Enter two numbers:");
    scanf("%d %d", &num1, &num2);

    result = product(num1, num2);
    printf("product of %d and %d \n= %d x %d \n= %d", num1, num2, num1, num2, result);
}

int product(int x, int y){
    if (y == 0)
        return sum;
    sum += x;
    product(x, y - 1);
}