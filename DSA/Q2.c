#include <stdio.h>

int n;
void selectionSortAsc(int []);
void selectionSortDesc(int []);
void printArray(int*);

int main(){
    
    printf("Enter number of elements:");
    scanf("%d", &n);
    
    int array[n], option;

    for (int i = 0; i < n; i++){
        printf("Enter value %d: ", i+1);
        scanf("%d", &array[i]);
    }
    
    printf("1. Ascending\n2. Descending\n");
    printf("Which order do you want to sort the array in?\n");
    
    scanf("%d", &option);

    switch (option){
        case 1:
            selectionSortAsc(array);
            break;
        case 2:
            selectionSortDesc(array);
            break;
        default:
            printf("Invalid option\n");
    }

    printArray(array);

    return 0;
}

void selectionSortAsc(int array[]){
    int i, j, minIdx, temp;

    for (i = 0; i < n - 1; i++){
        minIdx = i;
        for (j = i + 1; j < n; j++){
            if (array[j] < array[minIdx]){
                minIdx = j;
            }
        }
        temp = array[minIdx];
        array[minIdx] = array[i];
        array[i] = temp;
    }  
}

void selectionSortDesc(int array[]){
    int i, j, maxIdx, temp;

    for (i = 0; i < n - 1; i++){
        maxIdx = i;
        for (j = i + 1; j < n; j++){
            if (array[j] > array[maxIdx]){
                maxIdx = j;
            }
        }
        temp = array[maxIdx];
        array[maxIdx] = array[i];
        array[i] = temp;
    }  
}

void printArray(int* ptr){
    for (int i = 0; i < n; i++){
        printf("%d ", *ptr);
        ptr++;
    }
}
