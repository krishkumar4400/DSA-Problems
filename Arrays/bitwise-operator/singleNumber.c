#include<stdio.h>

int singleNumber(int nums[], int n){
    int ans = 0;
    for(int i = 0; i < n; i++) {
        ans ^= nums[i];
    }
    return ans;
}

int main() {
    int nums[] = {10,1,2,6,2,1,6};
    int n = sizeof(nums) / sizeof(nums[0]);
    int ans = singleNumber(nums, n);
    printf("%d ", ans);//10
}