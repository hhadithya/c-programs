#include <stdio.h>

void printElements(int* ptr, int len);

int main(){
    int array[10] = {10, 14, 20, 34, 45, 8, 4, 3, 23};

    printf("Original array: ");
    printElements(array, 9);

    // Insert 12 into 3rd position
    for(int i = 9; i > 2; i--){
        array[i] = array[i - 1];
    }
    array[2] = 12;
    printf("\nAfter inserting 12 into array: ");
    printElements(array, 10);

    // Delete 8 from the array
    for (int i = 6; i < 9; i++){
        array[i] = array[i + 1];
    }
    printf("\nAfter deleting 8 from array: ");
    printElements(array, 9);

}

void printElements(int* ptr, int len){
    for(int i = 0; i < len; i++){
        printf("%d ", *ptr);
        ptr++;
    }
}