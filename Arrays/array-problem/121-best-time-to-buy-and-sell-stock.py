def maxProfit(prices):
    n = len(prices)
    maxProfit = 0
    bestBuy = prices[0]
    
    for i in range(1, n):
        if(prices[i] > bestBuy):
            maxProfit = max(maxProfit, prices[i] - bestBuy)
        bestBuy = min(bestBuy, prices[i])
        
    return maxProfit

def main():
    prices = [7,1,5,3,6,4,8,2]
    ans = maxProfit(prices)
    print(ans) # 7
    
main()