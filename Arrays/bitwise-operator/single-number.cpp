/**
Problem Statement (LeetCode 136)

Given a non-empty array of integers nums, every element appears twice except for one. Find that single one.
You must implement a solution with O(n) time complexity and O(1) extra space.

 */

#include<iostream>
#include<vector>
#include<unordered_map>

using namespace std;

// Brute Force Approach
// 1. Count occurrences using a hashmap.
// 2. Return the element with count 1.
int singleNumber(vector<int>& nums) {
    unordered_map<int,int> mp;
    for(int n : nums) mp[n]++;

    for(auto it = mp.begin(); it != mp.end(); ++it) {
        int num = it->first;
        int count = it->second;
        if(count == 1) return num;
    }
    return -1;
}


// optimal approach
int singleNumberOptimal(vector<int>nums) { // sc = o(1) and tc = o(n)
    if(nums.size() < 1) {
        return -1;
    }
    int ans = 0;
    for(int value : nums) {
        ans ^= value;
    }
    return ans;
}

int main() {
    vector<int>nums = {6, 2, 1, 1, 2};
    // int ans = singleNumberOptimal(nums);
    int ans = singleNumber(nums);
    cout << ans << endl;
}