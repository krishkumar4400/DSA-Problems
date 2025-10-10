#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

// brute force approach
int majorityElement(vector<int> nums)
{ // o(n)^2
    int n = nums.size();
    for (int value : nums)
    {
        int freq = 0;
        for (int element : nums)
        {
            if (value == element)
            {
                freq++;
            }
        }
        if (freq > n / 2)
        {
            return value;
        }
    }
    return -1;
}

// optimized approach -> sorting
int majorityElementOptimized(vector<int> nums)
{ // o(nlogn)
    sort(nums.begin(), nums.end());
    int freq = 1;
    int ans = nums[0];
    int n = nums.size();
    int maxFreq = 1;
    for (int i = 1; i < n; i++)
    {
        if (nums[i] == nums[i-1])
        {
            freq++;
        }
        else
        {
            freq = 1;
        }
        if (freq > maxFreq)
        {
            maxFreq = freq;
            ans = nums[i];
        }
    }
    if (maxFreq > n / 2)
    {
        return ans;
    }
    return -1;
}

// optimal approach using moore's voting algorithm
int majorityElementOptimal(vector<int> nums)
{ // O(n)
    int freq = 0;
    int ans = 0;
    int n = nums.size();
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

    // extra check for the total frequency of the ans
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
    vector<int> nums = {1, 2, 1, 1, 2, 1};
    int ans = majorityElement(nums);
    int ans1 = majorityElementOptimized(nums);
    int ans2 = majorityElementOptimal(nums);
    cout << ans << " " << ans1 << " " << ans2 << endl;
    return 0;
}