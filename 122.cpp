class Solution {
public:
    int maxProfit(vector<int>& prices) { 
        int maxProfit = 0;
        for (int i = prices.size() - 1; i > 0; i--) {
            if (prices[i] > prices[i-1]) {
                maxProfit += prices[i] - prices[i-1];
            }
        }
        return maxProfit;
    }
};  