#include <stdio.h>

#define deduct_rate 0.08

int main() {
    int no_of_hours, hourly_rate, gross_salary;
    float deduction, net_salary;

    printf("Number of hours = ");
    scanf("%d", &no_of_hours);
    printf("Hourly rate = Rs.");
    scanf("%d", &hourly_rate);

    gross_salary = no_of_hours * hourly_rate;
    printf("Deduction rate = 8 %% \n");
    deduction = gross_salary * deduct_rate;
    net_salary = gross_salary - deduction;
    printf("Net salary = Rs.%.2f", net_salary);

    return 0;
}