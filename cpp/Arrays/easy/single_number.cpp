/*
Problem: Single Number
LeetCode: 136
Pattern: Bit Manipulation (XOR)

Approach 1: Brute Force (HashMap)
Time: O(n)
Space: O(n)

Approach 2: Optimal (XOR)
Time: O(n)
Space: O(1)

*/

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
