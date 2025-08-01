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
    int minPrice = INT_MAX;  
    int maxProfit = 0;       
for (int i = 0; i < prices.size(); ++i) {
    int price = prices[i];
        if (price < minPrice) {
            minPrice = price; 
        } else {
            int profit = price - minPrice;
            maxProfit = max(maxProfit, profit); 
        }
    }

    return maxProfit;
}

        
    
};