class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int minSofar = INT_MAX;
        int maxReturn = 0;

        for(int i=0; i<prices.size(); i++){
            minSofar = min(minSofar, prices[i]);
            int profit = prices[i]-minSofar;
            maxReturn = max(maxReturn, profit);
        }
        return maxReturn;
    }
};
