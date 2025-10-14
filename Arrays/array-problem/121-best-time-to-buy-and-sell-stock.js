const maxProfit = (prices) => {
  const n = prices.length;
  let maxProfit = 0;
  let bestBuy = prices[0];

  for (let i = 1; i < n; i++) {
    if (prices[i] > bestBuy) {
      maxProfit = Math.max(maxProfit, prices[i] - bestBuy);
    }
    bestBuy = Math.min(bestBuy, prices[i]);
  }
  return maxProfit;
};


function main() {
    const prices = [7, 2, 5, 9, 6, 4];
    ans = maxProfit(prices);
    console.log(ans); // 7
}

main();