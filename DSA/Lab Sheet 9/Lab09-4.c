# include <stdio.h>

void prime();
int devider = 2;
int count = 0;
int n;

int main(){
    printf("Enter any number:");
    scanf("%d", &n);

    if (n  == 1){
        printf("1 is neiter prime nor composite. It is a special number");
    } else if(n % 2 == 0 && n != 2){
        // since 2 is the only even prime number
        printf("%d is not a prime number", n);
    } else{
        prime();
    }
    
}

void prime(){
    if (count == 1){
        printf("%d is not a prime number", n);
        return;
    }
    if (devider == n){
        printf("%d is a prime number", n);
        return;
    }
    if (n % devider == 0){
        count++;
    }else{
        devider++;
    }
    prime();
}