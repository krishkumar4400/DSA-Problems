
public class BestTimeToBuySndSellStock {
    public static void main(String[] args) {
        int[] prices = {7,10,5,3,6,4,2,6,1,6};
        int ans = maxProfit(prices);
        System.out.println(ans);
    }

    public static int maxProfit(int[] prices) {
        int bestBuy = prices[0];
        int maxProfit = 0;
        int n = prices.length;

        for(int i = 1; i < n; i++) {
            if(prices[i] > bestBuy) {
                maxProfit = Math.max(maxProfit, prices[i] - bestBuy);
            }
            bestBuy = Math.min(prices[i], bestBuy);
        }
        return maxProfit;
    }
}
