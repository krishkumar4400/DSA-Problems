/*
Problem: Pair Sum
LeetCode:
Pattern: Two Pointers
Difficulty: Easy

Approach 1: Brute Force - 2 Nested Loops.
Time: O(n^2)
Space: O(1)

Approach 2: Optimized - using map data structure.
Time: O(n)
Space: O(n)

Approach 3: Optimal Two Pointers
Time: O(n)
Space: O(1)

*/

#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;

void traverse(vector<int> pair)
{
    cout << "Indices are: \n";
    for (int index : pair)
    {
        cout << index << " ";
    }
    cout << endl;
}

// vector<int> pairSum(vector<int> nums, int target)
// {
//     vector<int> ans;
//     int n = nums.size();

//     if (n < 2)
//     {
//         ans.push_back(-1);
//         ans.push_back(-1);
//         return ans;
//     }
//     for (int i = 0; i < n; i++)
//     {
//         for (int j = i + 1; j < n; j++)
//         {
//             if (nums[i] + nums[j] == target)
//             {
//                 ans.push_back(i);
//                 ans.push_back(j);
//                 return ans;
//             }
//         }
//     }
//     ans.push_back(-1);
//     ans.push_back(-1);
//     return ans;
// }

// vector<int> pairSum(vector<int> nums, int target)
// {
//     unordered_map<int, int> m;
//     vector<int> ans;
//     int n = nums.size();

//     if (n < 2)
//     {
//         ans.push_back(-1);
//         ans.push_back(-1);
//         return ans;
//     }

//     for (int i = 0; i < n; i++)
//     {
//         int complement = target - nums[i];
//         if (m.find(complement) != m.end())
//         {
//             ans.push_back(i);
//             ans.push_back(m[complement]);
//             return ans;
//         }
//         m[nums[i]] = i;
//     }

//     ans.push_back(-1);
//     ans.push_back(-1);
//     return ans;
// }

vector<int> pairSum(vector<int> nums, int target)
{
    vector<int> ans;
    int n = nums.size();
    int start = 0, end = n - 1;

    if (n < 2)
    {
        ans.push_back(-1);
        ans.push_back(-1);
        return ans;
    }

    while (start < end)
    {
        int pSum = nums[start] + nums[end];
        if (pSum > target)
        {
            end--;
        }
        else if (pSum < target)
        {
            start++;
        }
        else
        {
            ans.push_back(start);
            ans.push_back(end);
            return ans;
        }
    }

    ans.push_back(-1);
    ans.push_back(-1);
    return ans;
}

int main()
{
    vector<int> nums = {2, 7, 11, 15};
    int target = 22;

    vector<int> pair = pairSum(nums, target);
    traverse(pair); // 1 3

    return 0;
}