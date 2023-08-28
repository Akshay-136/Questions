class Solution {
public:
    int diagonalSum(vector<vector<int>>& mat) {
        
        int n= mat.size();
        
        int sum = 0;
        
        for(int i=0;i<n;i++){
            
        sum = sum + mat[i][i];
            
        }
        
        
        for(int i=0;i<n;i++){
            
        sum = sum + mat[n-i-1][i];    
            
        }
        
        if(n%2==0){
            return sum;
        }
        sum = sum - mat[n/2][n/2];
        
        return sum;
    }
};