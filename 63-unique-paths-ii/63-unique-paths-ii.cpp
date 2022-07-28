class Solution {
   private:
  int fun(int n, int m, vector<vector<int>>&grid, vector<vector<int>>&dp){
    if(n>=0 and m>=0 and grid[n][m]==1)return 0;
    if(n==0 and m==0)return 1;
    if(n<0 or m<0 )return 0;
    if(dp[n][m]!=-1)return dp[n][m];
    int left=fun(n-1,m,grid,dp);
    int right=fun(n,m-1,grid,dp);
    return dp[n][m]=left+right;
  }
public:
    int uniquePathsWithObstacles(vector<vector<int>>&grid) {
      int n=grid.size();
      int m=grid[0].size();
      vector<vector<int>>dp(n,vector<int>(m,-1)); 
      return fun(n-1,m-1,grid,dp);
    }
};