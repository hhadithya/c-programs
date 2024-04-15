#include <stdio.h>

void print(int);

int main() {
    print(1);
}

void print(int n){
    if (n > 10)
        return;
    
    if (n % 2 == 0) {
        printf("%d ", n - 1);
    } else {
        printf("%d ", n + 1);
    }

    print(n + 1);
}