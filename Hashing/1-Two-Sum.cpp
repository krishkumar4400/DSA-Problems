#include<iostream>
#include<unordered_map>
#include<vector>
#include<algorithm>

using namespace std;

class Solution {
    public:
    void twoSum(vector<int>&nums, int target, vector<int>&ans) {
        // Brute Force 
        for(int i = 0; i < nums.size(); i++) {
            int first = nums[i];
            for(int j = i + 1; j < nums.size(); j++) {
                int second = nums[j];
                if(first + second == target) {
                    ans.push_back(i);
                    ans.push_back(j);
                    return;
                }
            }
        }
    }

    // optimized
    void twoSumOptimized(vector<int>&nums, int target, vector<int>&ans) {
        sort(nums.begin(), nums.end());
        int start = 0, end = nums.size() - 1;

        while(start < end) {
            int sum = nums[start] + nums[end];
            if(sum < target) {
                start++;
            }  else if(sum > target) {
                end--;
            } else {
                ans.push_back(nums[start]);
                ans.push_back(nums[end]);
                return;
            }
        }
    }
    // optimal
    void twoSumOptimal(vector<int>&nums, int target, vector<int>&ans) {
        unordered_map<int,int>m;
        for(int i = 0; i < nums.size(); i++) {
            int second = target - nums[i];
            if(m.find(second) != m.end()) {
                ans.push_back(m[second]);
                ans.push_back(i);
                break;
            }
            m[nums[i]] = i;
        }
    }

    void printAns(vector<int>ans) {
        for(auto value : ans) {
            cout << value << " " << endl;
        }
    }
};

int main() {
    vector<int>nums = { 2, 7, 11, 15 };
    int target = 22;
    vector<int>ans;

    Solution s;
    // s.twoSum(nums, target, ans);
    // s.printAns(ans);
    // s.twoSumOptimized(nums,target,ans);
    // s.printAns(ans);
    s.twoSumOptimal(nums,target,ans);
    s.printAns(ans);
}