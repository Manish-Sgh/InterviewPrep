class Solution {
public:
    int maxProfit(vector<int>& prices) {
        // TC - 0(n)
        //  SC - 0(1)
        int minPriceSoFar = INT_MAX;
        int maxProfit = 0;
        int currProfit = 0; // profit if sold today

        for (int i = 0; i < prices.size(); i++) {
            if (prices[i] < minPriceSoFar) {
                minPriceSoFar = prices[i];
            }

            currProfit = prices[i] - minPriceSoFar;

            if (maxProfit < currProfit) {
                maxProfit = currProfit;
            }
        }
        return maxProfit;
    }
};