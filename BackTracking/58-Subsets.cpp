#include<iostream>
#include<vector>

using namespace std;

class Solution {
    public:
    void subsets(vector<int>&nums, vector<int>&ans, vector<vector<int>>&allSubsets, int idx) {
        // Base case
        if(idx == nums.size()) {
            allSubsets.push_back({ans});
            return;
        }

        // Include
        ans.push_back(nums[idx]);
        subsets(nums, ans, allSubsets, idx+1);

        // Exclude
        ans.pop_back();
        subsets(nums, ans, allSubsets, idx+1);
    }

    void printSubsets(vector<vector<int>> allSubsets)
    {
        for(auto subset : allSubsets) {
            cout<<"[ ";
            for(auto val : subset) {
                cout<<val << " ";
            }
            cout<<"]";
            cout << endl;
        }
    }
};

int main() {
    vector<int>nums = {1,2,3};
    vector<int>ans;
    vector<vector<int>>allSubsets;

    Solution s;
    s.subsets(nums, ans, allSubsets, 0);
    s.printSubsets(allSubsets);
}

/**
 Output
[ 1 2 3 ]
[ 1 2 ]
[ 1 3 ]
[ 1 ]
[ 2 3 ]
[ 2 ]
[ 3 ]
[ ]

 */