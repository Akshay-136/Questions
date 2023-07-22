class Solution {
public:
    int maximumWealth(vector<vector<int>>& accounts) {
        int res = 0;
        int n = accounts.size();
        
        for(int i =0 ; i< n ;i++){
            int ans=0;
            for(int j=0;j<accounts[i].size();j++){
                ans+=accounts[i][j];
            }
            res = max(res,ans);
            
        }
        return res;
    }
};