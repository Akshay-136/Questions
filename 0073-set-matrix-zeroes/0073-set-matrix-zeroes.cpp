class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
         
            int m=matrix.size();
            int n=matrix[0].size();

            vector<int> row(m,-1);
            vector<int> col(n,-1);
            
            //traverse array for matrix[i][j] == 0
            for(int i=0;i<m;i++)
            {
                    for(int j=0;j<n;j++)
                    {
                            if(matrix[i][j]==0)
                            {
                                    row[i]=0;  // mark ith index of col wih 1:
                                    col[j]=0;  // mark jth index of col wih 1:
                            }
                    }
            }
            // Finally, mark all (i, j) as 0
            // if row[i] or col[j] is marked with 1.
            for(int i=0;i<m;i++)
            {
                for(int j=0;j<n;j++)
                {
                        if(row[i]==0 || col[j]==0)
                        {
                                matrix[i][j]=0;
                        }
                }
            }
        
    }
};