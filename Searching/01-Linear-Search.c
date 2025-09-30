#include<stdio.h>

int linearSearch(int arr[], int size, int element) {
    for(int i = 0; i < size; i++) {
        if(element == arr[i]) {
            return arr[i];
        }
    }
    return -1;
}

int main() {
    // considering the all elements will be positive
    int arr[] = {3, 22, 7, 55, 45, 61, 90};
    int size = sizeof(arr) / sizeof(arr[0]);
    int element = linearSearch(arr, size, 7);
    printf("%d", element);
}