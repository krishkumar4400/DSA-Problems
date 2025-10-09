#include<iostream>
#include<vector>

using namespace std;

//brute force -> sc = O(n)
vector<int>calculatePrefix(vector<int>&nums) {
    int n = nums.size();
    vector<int>prefix(n,-1);
    prefix[0] = nums[0];
    for(int i = 1; i < n; i++) {
        prefix[i] = prefix[i-1] + nums[i];
    }
    return prefix;
}

// optimal
vector<int>calculatePrefixOptimal(vector<int>&nums) {
    int n = nums.size();
    for(int i = 1; i < n; i++) {
        nums[i] += nums[i-1];
    }
    return nums;
}

void printArray(vector<int>nums) {
    for(int value : nums) {
        cout << value << " ";
    }
    cout << endl;
}

int main() {
    vector<int>nums = {2,3,1,5,6,8};
    printArray(nums);
    nums = calculatePrefixOptimal(nums);
    printArray(nums);
}