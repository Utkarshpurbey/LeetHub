class Solution {
public:
    vector<vector<int>> transpose(vector<vector<int>>& matrix) {
        int n=matrix.size();
        int m=matrix[0].size();
        vector<vector<int>> newm(matrix[0].size(),vector<int> (matrix.size()));
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
            {
                newm[j][i]=matrix[i][j];
            }
        }
          return newm;
      
    }
};