#include<stdio.h>

int maximumPoints(int nums[], int k, int n) {
    int leftSum = 0, rightSum = 0, maxSum = 0;

    for(int i = 0; i < k; i++) {
        leftSum += nums[i];
    }
    maxSum =  leftSum;

    int rightIndex = n-1;
    for(int i = k-1; i >= 0; i--) {
        leftSum -= nums[i];
        rightSum += nums[rightIndex];
        rightIndex--;
        if(maxSum < (leftSum + rightSum)) {
            maxSum = leftSum + rightSum;
        }
    }

    return maxSum;
}

int main() {
    int nums[] = {10, 2, 3, 4, 5, 6, 1};
    int n = sizeof(nums) / sizeof(nums[0]);
    int k = 4;
    int ans = maximumPoints(nums,k,n);
    printf("%d\n", ans); // 22
    return 0;
}