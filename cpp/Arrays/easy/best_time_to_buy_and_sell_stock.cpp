/*
Problem: Best Time to Buy and Sell Stock
LeetCode: 121
Pattern: Array
Difficulty: Easy

Approach 1: Single loop iteration.
Time: O(n)
Space: O(1)

*/

#include <iostream>
#include <vector>
using namespace std;

int maxProfit(vector<int> &prices)
{
    int n = prices.size();
    int bestBuy = prices[0];
    int maxProfit = 0;
    for (int i = 1; i < n; i++)
    {
        if (prices[i] > bestBuy)
        {
            maxProfit = max(maxProfit, prices[i] - bestBuy);
        }

        bestBuy = min(bestBuy, prices[i]);
    }
    return maxProfit; // 7
}

int main()
{
    vector<int> prices = {7, 1, 5, 3, 8, 4};
    int profit = maxProfit(prices);
    cout << "Profit = " << profit << endl; // 7
    return 0;
}