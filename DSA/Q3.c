#include <stdio.h>

int n = 25;
void selectionSortAsc(float []);
void printArray(float []);

int main(){
    // array of prices of more than 10 items for a perticular seller
    float prices[] = { 1000, 500, 250, 15000, 10000, 5000, 2500, 1500, 1000, 500, 250, 15000, 10000, 5000, 2500, 1500, 1000, 500, 250, 15000, 10000, 5000, 2500, 1500, 1000};

    selectionSortAsc(prices);
    printArray(prices);

    return 0;
}

void selectionSortAsc(float array[]){
    int i, j, minIdx;
    float temp;

    for (i = 0; i < 10; i++){
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

void printArray(float array[]){
    printf("Sorted prices");
    for (int i = 0; i < 10; i++){
        printf("%.2f ", array[i]);
    }
    printf("\n");
    printf("Unsorted prices:");
    for (int i = 10; i < n; i++){
        printf("%.2f ", array[i]);
    }
}