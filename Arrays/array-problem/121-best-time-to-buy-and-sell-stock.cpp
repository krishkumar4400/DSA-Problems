#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

int maxProfit(vector<int>prices) {
    int bestBuy = prices[0];
    int maxProfit = 0;
    int n = prices.size();

    for(int i=1; i<n; i++) {
        if(prices[i] > bestBuy) {
            maxProfit = max(maxProfit, prices[i] - bestBuy);
        }
        bestBuy = min(bestBuy, prices[i]);
    }
    return maxProfit;
}

int main() {
    vector<int> prices = {7, 1, 5, 3, 6, 4};
    int ans = maxProfit(prices);
    cout<< ans;
}
