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
void printCircularList(Node*, int);

// to show that this code works as a Circular Doubly Linked List,
//Forward and Backward prints two times the number of nodes
// therefore, node_count defined as global variable
int node_count;

int main(){
    int data;

    printf("\nInput the number of nodes :");
    scanf("%d", &node_count);
    
    for (int i = 0; i < node_count; i++){
        printf("Input data for node %d :", i + 1);
        scanf("%d", &data);
        insertNode(createNode(data));
    }
    
    printf("\nData in forward order are :");
    printCircularList(head, 0);
    printf("\n\nData in backward order are :");
    printCircularList(tail, 1);
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

    //linking head and new tail
    tail->next = head;
    head->prev = tail;
}

void printCircularList(Node* node, int order){
    Node* ptr = node;
    int i = 1, key;
    
    while (ptr){
        key = (i++) % node_count;
        if (key == 0)
            key = node_count;

        printf("\nData in node %d : %d", key, ptr->data);
        if (order == 0)
            ptr = ptr->next;
        else
            ptr = ptr->prev;
        
        //to show that this code works as a Circular Doubly Linked List
        if(i == node_count*2 + 1)
            break;
    }
}
