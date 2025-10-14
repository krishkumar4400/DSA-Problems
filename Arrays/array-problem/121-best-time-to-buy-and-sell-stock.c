#include<stdio.h>

int min(int num1, int num2) {
    if(num1 < num2) {
        return num1;
    }
    return num2;
}
int max(int num1, int num2) {
    if(num1 > num2) {
        return num1;
    }
    return num2;
}

int maxProfit(int prices[], int n) {
    int bestBuy = prices[0];
    int maxProfit = 0;

    for(int i = 1; i < n; i++) {
        if(prices[i] > bestBuy) {
            maxProfit = max(maxProfit, prices[i] - bestBuy);
        }
        bestBuy = min(bestBuy, prices[i]);
    }
    return maxProfit;
}

int main() {
    int prices[] = {7, 1, 5, 3, 6, 4};
    int n = sizeof(prices) / sizeof(prices[0]);
    int ans = maxProfit(prices, n);
    printf("%d", ans); // 5
    return 0;
}