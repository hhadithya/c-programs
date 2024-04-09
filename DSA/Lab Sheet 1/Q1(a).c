#include <stdio.h>
#include <stdlib.h>

struct node* head = NULL;

struct node{
    int data;
    struct node* next;
};

void insertNode();
void printList();
void addToPosition(int, int);
void printReverse(struct node*);

int main(){
    int n, i, pos, data;
    printf("\n---Initialising linked list---\n");
    printf("\nEnter number of nodes:");
    scanf("%d", &n);

    for (i = 0; i < n; i++){
        insertNode();
    }

    if (n > 0){
        // Before inserting new data
        printf("\nBefore inserting new data: ");
        printList();

        // Position and new data input 
        printf("\n\n---Inserting new data at a position---\n");
        printf("\nEnter new data:");
        scanf("%d", &data);
        printf("Enter the positions do you need to add new data:");
        scanf("%d", &pos);

        addToPosition(pos, data);

        // After inserting new data
        printf("\nAfter inserting new data: ");
        printList();

        // Print reverse order
        printf("\n\nAfter reversing the order: ");
        printReverse(head);
    }
}

void insertNode(){
    struct node* Node = (struct node*) malloc(sizeof(struct node));

    printf("Enter the node value:");
    scanf("%d", &Node->data);

    if(!head){
        head = Node;
        Node->next = NULL;
    }else{
        Node->next = head;
        head = Node;
    }
}

void printList(){
    struct node* ptr = head; 
    while(ptr){
        printf("%d ", ptr->data);
        ptr = ptr->next;
    }
}   

void addToPosition(int pos, int data){
    int i = 1;

    struct node* ptr = head;
    struct node* new_node = (struct node*) malloc(sizeof(struct node));
    new_node->data = data;
    
    if (pos == 1){
        new_node->next = head;
        head = new_node;
        return;
    }

    while(i != pos - 1){
        ptr = ptr->next;
        i++;
    }

    new_node->next = ptr->next;
    ptr->next = new_node;
}

void printReverse(struct node* ptr){
    if(!ptr)
        return;
    printReverse(ptr->next);
    printf("%d ", ptr->data);
}
