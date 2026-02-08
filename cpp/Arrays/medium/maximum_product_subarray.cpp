
/*
Problem: Maximum Product Subarray
LeetCode: 152
Pattern: kadane's algorithm - array
Difficulty: Medium

Approach 1: Optimal Kadane's algorithm
Time: O(n)
Space: O(1)
*/

#include<iostream>
#include<vector>
using namespace std;

int maxProduct(vector<int>nums) {
    int minProd = nums[0], maxProd = nums[0], ans = nums[0];
    int n = nums.size();

    for(int i=1; i<n; i++) {
        int curr = nums[i];

        //  // If current number is negative, swap max and min
        if(curr < 0) {
            swap(minProd, maxProd);
        }

        // Either start new subarray or extend previous
        minProd = min(curr, minProd * curr);
        maxProd = max(curr, maxProd * curr);
        ans = max(ans, maxProd);
    }
    return ans;
}

int main(){
    vector<int>nums = {-2, 3, -4}; // 24
    int ans = maxProduct(nums);
    cout<<ans << endl;
    return 0;
}