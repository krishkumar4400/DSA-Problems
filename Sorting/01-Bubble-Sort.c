#include<stdio.h>

int bubbleSort(int arr[], int size) {
    for(int i = 0; i<size-1; i++) {
        for(int j = i+1; j<size; j++) {
            if(arr[i] > arr[j]) {
                int temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
}

void printArray(int arr[], int size) {
    printf("Data of the Array: ");
    for(int i = 0; i<size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

int main() {
    int arr[] = {2, 43, 5, 89, 21, 43, 77, 90};
    int size = sizeof(arr)/sizeof(arr[0]);
    printArray(arr, size);
    bubbleSort(arr, size);
    printArray(arr, size);
}

/** output
 
Data of the Array: 2 43 5 89 21 43 77 90
Data of the Array: 2 5 21 43 43 77 89 90

 */