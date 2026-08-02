class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int n=prices.size();
        vector<int>best_buy(n);
        best_buy[0]=INT_MAX;
        for(int i=1;i<n;i++){
            best_buy[i]=min(best_buy[i-1],prices[i-1]);
        }
        int max_profit=0;
        int current_profit=0;
        for(int i=0;i<n;i++){
        current_profit=prices[i]-best_buy[i];
        max_profit=max(max_profit,current_profit);
        }
        return max_profit;
        
    }
};