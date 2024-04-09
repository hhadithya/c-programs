#include <stdio.h>
#include <stdlib.h>

typedef struct node{
    int data;
    struct node* prev;
    struct node* next;
}Node;

Node* head = NULL;
Node* tail = NULL;

Node* createNode(int);
void insertNode(Node*);

// Forward->0, Backward->1
void printLinkedList(Node*, int);

int main(){
    int node_count, data;

    printf("\nInput the number of nodes :");
    scanf("%d", &node_count);
    
    for (int i = 0; i < node_count; i++){
        printf("Input data for node %d :", i + 1);
        scanf("%d", &data);
        insertNode(createNode(data));
    }
    
    printf("\nData in forward order are :");
    printLinkedList(head, 0);
    printf("\n\nData in backward order are :");
    printLinkedList(tail, 1);
}

Node* createNode(int data){
    Node* node = (Node*) malloc(sizeof(Node));

    if (node == NULL) {
        printf("Memory not allocated.\n");
        exit(0);
    }
    node->data = data;
    node->next = node->prev = NULL;

    return node;
}

void insertNode(Node* node){
    if (!head){
        head = tail = node;
    }else{
        tail->next = node;
        node->prev = tail;
        tail = node;
    }
}

void printLinkedList(Node* node, int order){
    Node* ptr = node;
    int i = 1;
    while (ptr){
        printf("\nData in node %d : %d", i++, ptr->data);
        if (order == 0)
            ptr = ptr->next;
        else
            ptr = ptr->prev;
    }
}