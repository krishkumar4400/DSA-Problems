#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int maximumPoints(vector<int>&nums, int k) {
    int leftSum = 0, rightSum = 0, maxSum = 0;
    int n = nums.size();

    for(int i = 0; i < k; i++) {
        leftSum += nums[i];
    }

    maxSum = leftSum;

    int rightIndex = n-1;
    for(int i = k-1; i >= 0; i--) {
        leftSum -= nums[i];
        rightSum += nums[rightIndex];
        rightIndex--;
        maxSum = max(maxSum,leftSum+rightSum);
    }

    return maxSum;
}

int main(){
    vector<int> nums = {1, 2, 3, 4, 5, 6, 1};
    int k = 3;
    int ans = maximumPoints(nums,k);
    cout << ans << endl; // 12
}