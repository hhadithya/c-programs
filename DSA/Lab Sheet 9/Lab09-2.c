# include <stdio.h>

void fibonacci(int, int, int);

int main(){
    int n;

    printf("Enter number of elements:");
    scanf("%d", &n);
    
    if (n == 1)
        printf("0");
    else if (n == 2)
        printf("0 1");
    else{
        printf("0 1 ");
        fibonacci(n - 2, 0, 1);
    }

}

void fibonacci(int n, int prevVal, int newVal){
    if (n == 0)
        return;

    int temp = newVal;
    newVal = prevVal + temp;
    prevVal = temp;
    
    printf("%d ", newVal);
    fibonacci(n - 1, prevVal, newVal);
}