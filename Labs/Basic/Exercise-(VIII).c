#include<stdio.h>

int main(){

    int year;
    printf("Enter a year:");
    scanf("%d", &year);

    (!(year%400))?
        printf("%d is a leap year", year):
        (year%100)?
            (!(year%4))?
                printf("%d is a leap year", year):
                printf("%d is not a leap year", year):
            printf("%d is not a leap year", year);

    return 0;
}