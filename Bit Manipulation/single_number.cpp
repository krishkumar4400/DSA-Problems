#include<iostream>
#include<vector>
#include<unordered_map>

using namespace std;

int singleNumberBrute(vector<int>&nums, int n) {
    unordered_map<int, int> freq;
    int ans=0;
    for(int value:nums) {
        freq[value]++;
    }
    
    for(auto it : freq) {
        if(it.second == 1) {
            return it.first;
        }
    }
    return -1;
}

int singleNumberB(vector<int> &nums, int n) {
    int single=0;
    for(int i = 0; i<n; i++) {
        int ans = nums[i];
        for(int j = 0; j < n; j++) {
            if(ans == nums[j] && !i==j) {
                break;
            }
            single=ans;
        }
    }
    return single;
}

int singleNumber(vector<int> &nums, int n) {
    int ans = 0;
    for(int i=0; i<n; i++) {
        ans ^= nums[i];
    }
    return ans;
}

int main(){
    vector<int>nums = {4,1,2,1,2};
    int n = nums.size();
    // singleNumberBrute(nums, n);
    // cout<<singleNumber(nums, n) <<endl;
    cout << singleNumberB(nums, n) << endl;

    return 0;
}