// 1 idea

// Kadane finds the maximum sum of any contiguous subarray in O(n)
// by keeping a running currentSum and restarting it whenever continuing would make things worse;
// track the best(maxSum)
// seen so far.

#include <iostream>
#include <vector>
#include <algorithm>

    using namespace std;

// brute force approach
void maximumSubArraySum(vector<int> nums)
{ // O(n^3)
    int n = nums.size();
    int maxSum = INT32_MIN;
    for (int start = 0; start < n; start++)
    {
        for (int end = start; end < n; end++)
        {
            int currSum = 0;
            for (int i = start; i <= end; i++)
            {
                currSum += nums[i];
                maxSum = max(maxSum, currSum);
            }
        }
    }
    cout << maxSum << endl; // 23
}

// optimal approach (using kadane's algorithm)
void maximumSubArraySumOptimal(vector<int> nums)
{
    int n = nums.size();
    int currentSum = 0, maxSum = INT32_MIN;
    for (int i = 0; i < n; i++)
    {
        currentSum += nums[i];
        maxSum = max(maxSum, currentSum);
        if(currentSum < 0) {
            currentSum = 0;
        }
    }
    cout << maxSum << endl; // 15
}

int main()
{
    vector<int> nums = {3, -4, 5, 4, -10, 7, 8};
    maximumSubArraySumOptimal(nums); 
}