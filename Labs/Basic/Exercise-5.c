#include<stdio.h>

int main() {
    float mark, total;
    int count = 1;

    while (count <= 5) {
        printf("Input subject-%d mark(%%): ", count);
        scanf("%f", &mark);
        if ((mark < 0) || (mark > 100)) {
            printf("Invalid mark. Please input again.\n");
            continue;
        }
        // from above code line user can see percentage mark of all the subjects

        total += mark;
        count++;
    }

    printf("Total marks of subjects: %.2f\n", total);
    printf("Average mark of subjects: %.2f %%", total / 5);

    return 0;
}