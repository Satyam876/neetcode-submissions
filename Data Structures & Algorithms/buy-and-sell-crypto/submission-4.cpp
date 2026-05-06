class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int minSofar = INT_MAX;
        int totalProfit = 0;

        for(int i=0; i<prices.size(); i++){
            minSofar = min(minSofar, prices[i]);
            int profit = prices[i] - minSofar;
            totalProfit = max(totalProfit, profit);
        }
        return totalProfit;
    }
};
