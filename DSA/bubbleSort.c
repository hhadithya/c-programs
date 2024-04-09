#include <stdio.h>

void bubbleSort(int [], int);

void printArray(int *, int);

float avg(int *, int);

int main() {
    int arr[] = {120, 33, 59, 10, 75, 85, 165, 8, 90, 44};
    int lenArr = sizeof(arr) / sizeof(int);
    float avgNum;

    bubbleSort(arr, lenArr);

    printf("Sorted array(ascending): ");
    printArray(arr, lenArr);

    avgNum = avg(arr, lenArr);
    printf("\nAverage: %.2f\n", avgNum);

    printf("Data greater than average: ");
    for (int i = 0; i < lenArr; i++) {
        if ((float) arr[i] > avgNum) {
            printf("%d ", arr[i]);
        }
    }
    return 0;
}

void bubbleSort(int arr[], int len) {
    int i, j, temp;
    for (i = 0; i < len - 1; i++) {
        for (j = 0; j < len - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}

void printArray(int *ptr, int len) {
    for (int i = 0; i < len; i++) {
        printf("%d ", *ptr);
        ptr++;
    }
}

float avg(int *ptr, int len) {
    float total = 0;
    for (int i = 0; i < len; i++) {
        total += (float) *ptr;
        ptr++;
    }

    return total / (float)len;
}