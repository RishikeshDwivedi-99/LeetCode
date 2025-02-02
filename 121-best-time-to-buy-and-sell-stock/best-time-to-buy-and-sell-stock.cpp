class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int n = prices.size();
        int minBuy = INT_MAX;
        int maxSell = 0;
        for(int i=0;i<n;i++) {
            minBuy =  min(minBuy, prices[i]);
            maxSell = max(maxSell, prices[i]-minBuy);
        }
        return maxSell;
    }
};