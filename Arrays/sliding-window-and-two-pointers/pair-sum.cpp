#include<iostream>
#include<vector>

using namespace std;


// Brute Force Approach
vector<int>pairSum(vector<int>nums, int target) { // o(n)^2
    int n = nums.size();
    vector<int>ans;
    for (int i = 0; i < n; i++)
    {
        for(int j = i + 1; j < n; j++) {
            if(nums[i] + nums[j] == target) {
                ans.push_back(i);
                ans.push_back(j);
            }
        }
    }
    return ans;
}

// optimal approach - two pointers due to sorted array
vector<int>pairSumOptimal(vector<int>nums, int target) {
    int start = 0; int end = nums.size() - 1;
    vector<int>ans;
    while (start < end) 
    {
        if(nums[start] + nums[end] == target) {
            ans.push_back(start);
            ans.push_back(end);
            return ans;
        } else if(target > nums[start] + nums[end]) {
            start++;
        } else {
            end--;
        }
    }
}

void printAns(vector<int>ans) {
    for(auto value : ans) {
        cout << value << " ";
    }
    cout << endl;
}

int main() {
    vector<int> nums = {2,7,11,15,16};
    int target = 26;
    vector<int>ans = pairSumOptimal(nums, target);
    printAns(ans);
}