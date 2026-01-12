// check if we can partition array in 2 equal parts.

#include <iostream>
#include <vector>

using namespace std;

// function to calculate total sum of array
int totalSum(vector<int> nums)
{
    int totalSum = 0;

    // calculating total sum
    for (int val : nums)
    {
        totalSum += val;
    }

    return totalSum;
}

// brute force approach
bool partitionArrayBrute(vector<int> &nums)
{ // tc = O(n), sc = O(2n).
    int n = nums.size();
    vector<int> prefix(n, -1);
    vector<int> suffix(n, -1);

    prefix[0] = nums[0];
    suffix[n - 1] = nums[n - 1];

    for (int i = 1; i < n; i++)
    {
        prefix[i] = prefix[i - 1] + nums[i];
    }

    for (int i = n - 2; i >= 0; i--)
    {
        suffix[i] = suffix[i + 1] + nums[i];
    }

    for (int i = 0; i < n - 1; i++)
    {
        if (prefix[i] == suffix[i + 1])
        {
            return true;
        }
    }

    return false;
}

// optimization in space
bool partitionArray(vector<int> &nums)
{ // tc = O(n), sc = O(1)
    int n = nums.size();
    int arraySum = totalSum(nums);

    int prefixSum = 0;

    for (int i = 0; i < n - 1; i++)
    {
        prefixSum += nums[i];
        if (prefixSum == arraySum - prefixSum)
        {
            return true;
        }
    }
    return false;
}

int main()
{
    vector<int> nums = {5, 3, 2, 6, 3, 1};
    // cout << partitionArrayBrute(nums);
    cout << partitionArray(nums);

    return 0;
}