class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int min_price=INT_MAX;
        int i,profit=0;
        
        for(i=0;i<prices.size();i++){
            min_price=min(prices[i],min_price);
            profit=max(profit,prices[i]-min_price);
        }
        return profit;
    }
    //return {-1,-1};
};
