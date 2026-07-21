// 121. Best Time to Buy and Sell Stock

// Example 1:
// Input: prices = [7,1,5,3,6,4]
// Output: 5
// Explanation: Buy on day 2 (price = 1) and sell on day 5 (price = 6), profit = 6-1 = 5.
// Note that buying on day 2 and selling on day 1 is not allowed because you must buy before you sell.

class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int minPrice = INT_MAX;
        int maxProfit = 0;

        for (int i = 0; i < prices.size(); i++) {
            if (prices[i] < minPrice) {
                minPrice = prices[i];
            }

            int profit = prices[i] - minPrice;

            if (profit > maxProfit) {
                maxProfit = profit;
            }
        }

        return maxProfit;
    }
};