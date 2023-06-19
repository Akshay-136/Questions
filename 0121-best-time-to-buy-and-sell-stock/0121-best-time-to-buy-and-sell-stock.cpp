class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int n = prices.size();
        int res = 0;
        int i = 1;
        int j = 0;
        
        while (i < n) {
            int ans = prices[i] - prices[j];
            res = max(res, ans);
            
            if (prices[i] < prices[j])
                j = i;
            
            i++;
        }
        
        return res;
    }
};
