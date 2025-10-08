#include<stdio.h>

void prefix(int nums[], int n) {

    for(int i = 1; i < n; i++) {
        nums[i] += nums[i-1];
    }
}

void printArray(int nums[], int n) {

    printf("Array Elements are: \n");
    for(int i = 0; i < n; i++) {
        printf("%d ", nums[i]);
    }
    printf("\n");
}

int main() {
    int nums[] = {1,2,4,3,2};
    int n = sizeof(nums) / sizeof(int);
    printArray(nums, n);
    prefix(nums, n);
    printArray(nums, n);
    return 0;
}