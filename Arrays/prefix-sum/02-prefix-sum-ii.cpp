/**
Given an array of integers of size n answer Q queries where you
need to print the sum of values in a given range of indices from
l to r (both includes)
    Note: The of l and r in queries follow 1-based indexing
    -> Range Sum Query Problem
*/

#include <iostream>
#include <vector>

using namespace std;

vector<int> prefixSum(vector<int> &nums)
{
    int n = nums.size();
    for (int i = 1; i < n; i++)
    {
        nums[i] += nums[i - 1];
    }
    return nums;
}

void answerQueries(vector<int> &nums)
{
    int n = nums.size();
    // brute force approach
    int q;
    cout << "Enter the number of queries: ";
    cin >> q;
    while (q-- > 0)
    {
        int l, r;
        cout << "Enter the value of L ";
        cin >> l;
        cout << "Enter the value of R ";
        cin >> r;
        int ans = 0;
        for (int i = l; i <= r; i++)
        {
            ans += nums[i];
        }
        cout << "For L = " << l << "and R = " << r << " Answer = " << ans << endl;
    }
}
void answerQueriesOptimal(vector<int> &nums)
{
    int n = nums.size();
    // optimal approach
    int q;
    cout << "Enter the number of queries: ";
    cin >> q;
    while (q-- > 0)
    {
        int l, r;
        cout << "Enter the value of L ";
        cin >> l;
        cout << "Enter the value of R ";
        cin >> r;
        int ans;
        if (l == 0)
        {
            ans = nums[r] - 0;
        }
        else
        {
            ans = nums[r] - nums[l - 1];
        }
        cout << "For L = " << l << "and R = " << r << " Answer = " << ans << endl;
    }
}

int main()
{
    vector<int> nums = {2, 4, 1, 3, 6, 5};
    for (int i = 0; i < nums.size(); i++)
    {
        cout << nums[i] << " ";
    }
    cout << endl;
    answerQueries(nums);
    // nums = prefixSum(nums);
    // answerQueriesOptimal(nums);
    return 0;
}