#include<stdio.h>
#include<limits.h>
#include<math.h>


// Brute - Force Approach
void maximumSubArraySum(int nums[], int n) {
    int maxSum = INT_MIN;
    for(int start = 0; start < n; start++) {
        for(int end = start; end < n; end++) {
            int currSum = 0;
            for(int i = start; i <= end; i++) {
                currSum += nums[i];
                if(currSum > maxSum) {
                    maxSum = currSum;
                }
            }
        }
    }
    printf("%d\n", maxSum); // 17
}


// Optimal approach
void maximumSubArraySumOptimal(int nums[], int n) {
    int maxSum = INT_MIN;
    int currSum = 0;
    for(int i = 0; i < n; i++) {
        currSum += nums[i];
        if(currSum > maxSum) {
            maxSum = currSum;
        }
        if(currSum < 0) {
            currSum = 0;
        }
    }
    printf("%d\n", maxSum); // 17
}


int main() {
    int nums[] = {1, 4, -3, 5, -2, 7, 5};
    int n = sizeof(nums) / sizeof(nums[0]);
    maximumSubArraySum(nums, n);
    maximumSubArraySumOptimal(nums, n);
}