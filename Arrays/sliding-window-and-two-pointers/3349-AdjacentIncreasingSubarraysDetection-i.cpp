#include<iostream>
#include<vector>
#include<vector>

using namespace std;

bool isSorted(int start, int end, vector<int>nums) {
    for(int i = start; i < end; i++) {
        if(nums[i] >= nums[i+1]) {
            return false;
        }
    }
    return true;
}

bool increasingSubArray(vector<int>&nums, int k) {
    int st1 = 0, end1 = st1 + k-1;
    int st2 = st1+k, end2 = st2 + k-1;
    int n = nums.size();

    while (end2 < n) 
    {
        if(isSorted(st1, end1, nums) && isSorted(st2, end2, nums)) {
            return true;
        }

        st1++;
        end1 = st1 + k-1;

        st2++;
        end2 = st2 + k-1;
    }
    return false;
}

int main() {
    vector<int> nums = {2, 5, 7, 8, 9, 2, 3, 4, 3, 1};
    int k = 3;
    cout << increasingSubArray(nums, k); // 1
}