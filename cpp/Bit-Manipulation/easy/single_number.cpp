/*
Problem: Single Number
LeetCode: 136
Pattern: Bit Manipulation (XOR)
Difficulty: Easy

Approach 1: Brute Force (HashMap)
Time: O(n)
Space: O(n)

Approach 2: Optimal (XOR)
Time: O(n)
Space: O(1)

*/

#include<iostream>
#include<vector>
using namespace std;

class Solution
{
public:
    int singleNumber(vector<int> &nums)
    {
        int ans = 0;
        for (int x : nums)
            ans ^= x;
        return ans;
    }
};

int main() {
    vector<int>nums = {1,1,2,4,4};
    Solution s;
    int ans = s.singleNumber(nums);
    cout<<ans<<endl;
    return 0;
}