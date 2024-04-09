#include <stdio.h>
#include <stdlib.h>

void insert_begin();
void insert_end();
void traverse(int n);
struct node* head = NULL;

struct node{
    int data;
    int* next;
};

int main(){
    int n;

    printf("Enter number of nodes:");
    scanf("%d", &n);

    for(int i = 0; i < n; i++){
        insert_begin();
    }

    traverse(n);
    insert_end();
    traverse(n + 1);
}

void insert_begin(){
    struct node* temp = malloc(sizeof(struct node));
    temp->next = NULL;
    printf("Enter node data:");
    scanf("%d", &temp->data);

    if(!head){
        head = temp;
    }else{
        temp->next = head;
        head = temp;
    }
}

void insert_end(){
    int end_data = -1;
    struct node* ptr = head;
    while(ptr->next != NULL){
        ptr = ptr->next;
    }
    struct node* temp = malloc(sizeof(struct node));
    temp->next = NULL;
    temp->data = end_data;
    ptr->next = temp;
}


void traverse(int n){
    struct node* temp = head;
    for(int j=0; j < n; j++){
        printf("%d ", temp->data);
        temp = temp->next;
    }
}