/*

Problem: Majority Element
LeetCode: 169
Pattern: Moores Voting Algorithm
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
#include <algorithm>
using namespace std;

// brute force
// int majorityElement(vector<int> nums)
// {
//     int n = nums.size();
//     for (int val : nums)
//     {
//         int freq = 0;
//         for (int el : nums)
//         {
//             if (val == el)
//             {
//                 if (val == el)
//                 {
//                     freq++;
//                 }
//             }
//         }

//         if (freq > n / 2)
//         {
//             return val;
//         }
//     }
// }

// optimized using unordered map
// int majorityElement(vector<int> nums)
// {
//     int n = nums.size();
//     unordered_map<int, int> m;
//     for (int val : nums)
//     {
//         m[val]++;
//     }

//     for (auto it : m)
//     {
//         if (it.second > n / 2)
//         {
//             return it.first;
//         }
//     }
// }

// optimized by sorting
// int majorityElement(vector<int> nums)
// {
//     sort(nums.begin(), nums.end());
//     int n = nums.size();
//     int freq = 1, ans = nums[0];
//     for(int i=1; i<n; i++) {
//         if(nums[i] == nums[i-1]) {
//             freq++;
//         } else {
//             ans = nums[i];
//             freq = 1;
//         }

//         if(freq > n/2) {
//             return nums[i];
//         }
//     }
// }

// optimal approach - moores voting algorithm
int majorityElement(vector<int> nums)
{
    int n = nums.size();
    int freq = 0, ans = 0;
    for (int i = 0; i < n; i++)
    {
        if (freq == 0)
        {
            ans = nums[i];
        }
        if (ans == nums[i])
        {
            freq++;
        }
        else
        {
            freq--;
        }
    }

    int count = 0;
    for (int val : nums)
    {
        if (val == ans)
        {
            count++;
        }
    }
    if (count > n / 2)
    {
        return ans;
    }
    return -1;
}

int main()
{
    vector<int> nums = {3, 1, 3, 2, 3, 4, 3};
    int ans = majorityElement(nums);
    cout << "Majority Element = " << ans << endl; // 3

    return 0;
}