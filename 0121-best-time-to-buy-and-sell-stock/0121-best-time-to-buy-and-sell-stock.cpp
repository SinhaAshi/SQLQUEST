class Solution {
public:
    int maxProfit(vector<int>& prices) {
   /*     int maxProfit = 0;
    int n = prices.size();

    for (int i = 0; i < n - 1; ++i) {
        for (int j = i + 1; j < n; ++j) {
            int profit = prices[j] - prices[i];
            maxProfit = max(maxProfit, profit);
        }
    }

    return maxProfit;*/
    int minPrice = INT_MAX;  // track lowest price so far
    int maxProfit = 0;       // track maximum profit

    for (int price : prices) {
        if (price < minPrice) {
            minPrice = price; // found a better day to buy
        } else {
            int profit = price - minPrice;
            maxProfit = max(maxProfit, profit); // better day to sell
        }
    }

    return maxProfit;
}

        
    
};