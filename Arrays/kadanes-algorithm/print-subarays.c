#include<stdio.h>

void printSubArrays(int nums[], int n) {
    for(int start = 0; start < n; start++) {
        for(int end = start; end < n; end++) {
            for (int i = start; i <= end; i++)
            {
                printf("%d", nums[i]);
            }
            printf(" ");
        }
        printf("\n");
    }
}

int main() {
    int nums[] = {1,2,3,4,5};
    int n = sizeof(nums) / sizeof(nums[0]);
    printSubArrays(nums,n);
}