# include <stdio.h>

int factorial(int);

int main(){
    int n;

    printf("Enter any number:");
    scanf("%d", &n);
    if (n < 0)
        printf("Cannot obtain factorial for negative integers");
    else
        printf("%d! = %d", n, factorial(n));
}

int factorial(int n){
    if (n == 0)
        return 1;
    
    return n * factorial (n - 1);
}