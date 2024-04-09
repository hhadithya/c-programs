#include <stdio.h>
#include <stdlib.h>

typedef struct node{
    int data;
    struct node* next;
}Node; 

Node* head = NULL;

Node* createNode();
void push();
void pop();
void printStack();
int isEmpty();

int main(){
    int op_code;
    while (1){
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

Node* createNode(){
    int data;
    printf("Enter the element to be pushed:");
    scanf("%d", &data);

    Node* node = (Node*) malloc(sizeof(Node)); 
    node->data = data;
    node->next = NULL;

    return node;
}

void push(){
    Node* newNode = createNode();

    if (!isEmpty()){
        newNode->next = head;
    }
    head = newNode;
}

void pop(){
    Node* temp;

    if (isEmpty()){
        printf("Stack is empty! Can't pop any element\n");
        return;
    }
    temp = head;
    head = temp->next;
    printf("Popped element: %d\n", temp->data);
    free(temp);
}

void printStack(){
    Node* ptr = head;
    if (isEmpty()){
        printf("Stack is empty!\n");
        return;
    }

    printf("Elements in the stack: ");
    while (ptr){
        printf("%d ", ptr->data);
        ptr = ptr->next;
    }
    printf("\n");

    free(ptr);
}

int isEmpty(){
    if (!head)
        return 1;
    return 0;
}


