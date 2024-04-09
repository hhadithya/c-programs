#include <stdio.h>
#include <stdlib.h>
#define SIZE 5

int stack[SIZE];
int top = -1;

void push();
void pop();
void printStack();
int isFull();
int isEmpty();

int main(){
    int op_code;
    while(1){
        printf("-------------------------------------\n");
        printf("Operations:");
        printf("\n\t1. Push");
        printf("\n\t2. Pop");
        printf("\n\t3. Print all the elements");
        printf("\n\t4. Exit");
        printf("\nEnter the operation number:");
        scanf("%d", &op_code);

        switch(op_code){
            case 1:
                push();
                break;
            case 2:
                pop();
                break;
            case 3:
                printStack();
                break;
            case 4:
                printf("Exit from the program successful!");
                exit(0);
                break;  
            default:
                printf("Try again! Invalid operation number\n");
        }
    }
}

void push(){
    if(!isFull()){
        int data;
        printf("Enter the element to be pushed:");
        scanf("%d", &data);
        top++;
        stack[top] = data;

    }else{
        printf("Stack is full! Can't push more elements\n");
    }
}

void pop(){
    if (isEmpty()){
        printf("Stack is empty! Can't pop any element\n");
        return;
    }
    printf("Popped element: %d\n", stack[top]);
    top--;
}

void printStack(){
    if (isEmpty()){
        printf("Stack is empty!\n");
        return;
    }

    printf("Elements in the stack: ");
    for(int i = top; i > -1; i--) {
        printf("%d ", stack[i]);
    }
    printf("\n");
}

int isFull(){
    if(top == SIZE - 1)
        return 1;
    return 0;
}

int isEmpty(){
    if(top == -1)
        return 1;
    return 0;
}


