/*
Problem: Maximum Subarray Sum
LeetCode: 53
Pattern: kadane's algorithm - array
Difficulty: Midium

Approach 1: Brute Force - 3 nested loops
Time: O(n^3)
Space: O(1)

Approach 2: Brute Force optimized to 2 nested loops
Time: O(n^2)
Space: O(1)

Approach 3: Optimal Kadane's algorithm
Time: O(n)
Space: O(1)
*/

#include <iostream>
using namespace std;

// int maximumSubarraySum(int arr[], int n)
// {
//     int maxSum = INT_MIN;
//     for (int st = 0; st < n; st++) // O(n)
//     {

//         for (int end = st; end < n; end++) // O(n)
//         {
//             int currSum = 0;
//             for (int i = st; i <= end; i++) // O(n)
//             {
//                 currSum += arr[i];
//             }
//             maxSum = max(maxSum, currSum);
//         }
//     }
//     return maxSum;
// }

// int maximumSubarraySum(int arr[], int n)
// {
//     int maxSum = INT_MIN;
//     for (int st = 0; st < n; st++) // O(n)
//     {
//         int currSum = 0;
//         for (int end = st; end < n; end++) // O(n)
//         {
//             currSum += arr[end];
//             maxSum = max(maxSum, currSum);
//         }
//     }
//     return maxSum;
// }

int maximumSubarraySum(int arr[], int n)
{
    int currSum = 0, maxSum = INT_MIN;
    for (int i = 0; i < n; i++) // O(n)
    {
        currSum += arr[i];
        maxSum = max(maxSum, currSum);

        if(currSum < 0) {
            currSum = 0;
        }
    }
    return maxSum;
}



int main()
{
    // int arr[] = {1, 2, 3, 4, 5}; // 15
    // int n = 5; 

    int arr[] = {3, -4, 5, 4, -1, 7, -8}; // 15
    int n = 7;

    int ans = maximumSubarraySum(arr, n);
    cout << ans << endl;

    return 0;
}