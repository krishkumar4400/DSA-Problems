#include<stdio.h>


// brute force approach
int *pairSum(int nums[], int target, int n) {
    static int ans[2];
    for(int i = 0; i < n; i++) {
        for(int j = i + 1; j < n; j++) {
            if(nums[i] + nums[j] == target) {
                ans[0] = i;
                ans[1] = j;
                return ans;
            }
        }
    }
    ans[0] = ans[1] = -1;
    return ans;
}

// optimal approach using two pointers approach
int *pairSumOptimal(int nums[], int target, int n) {
    static int ans[2];
    int start = 0; 
    int end = n-1;

    while(start < end) {
        if(nums[start] + nums[end] == target) {
            ans[0] = start;
            ans[1] = end;
            return ans;
        } else if(nums[start] + nums[end] < target) {
            start++;
        } else {
            end--;
        }
    }
    ans[0] = ans[1] = -1;
}

void printAns(int ans[]) {
    for(int i = 0; i < 2; i++) {
        printf("%d ", ans[i]);
    }
    printf("\n");
}

int main() {
    int nums[] = {4, 12, 36, 41, 64, };
    int n = sizeof(nums) / sizeof(nums[0]);
    int target = 100;

    int *ans1 = pairSum(nums, target, n);
    int *ans2 = pairSumOptimal(nums, target, n);

    printAns(ans1);
    printAns(ans2);
}