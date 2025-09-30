#include<stdio.h>

int binarySearch(int arr[], int size, int element) {
    int start = 0; int end = size-1;

    while(start <= end) {
        int mid = start + (end - start) / 2;
        if(arr[mid] == element) {
            return mid;
        } else if(arr[mid] < element) {
            start = mid + 1;
        } else {
            end = mid - 1;
        }
    }
    return -1;
}

int main() {
    int arr[] = {2,5, 6, 8, 9, 33, 56 ,67, 89, 99};
    int size = sizeof(arr) / sizeof(arr[0]);
    int element = binarySearch(arr, size, 67);
    printf("%d", element);
}