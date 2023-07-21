class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        bool ans = false;
        int n= matrix.size();//row
        int m = matrix[0].size();//col
        int i = 0 ;
        int j =m-1;
        while(i<n && j>=0){
            if(matrix[i][j]==target){
                ans=true;
                break;
            }
            else if(matrix[i][j]>target){
                j--;
            }
            else{
                i++;
            }
        }
        return ans;
    }
};