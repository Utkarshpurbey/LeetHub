class Solution {
public:
    int solve(int i,int j,int m ,int n,vector<vector<int>> &arr,vector<vector<int>> &dp){
        if(i==0 && j==0)
            return 1;
        if((i<0 || j<0) || arr[i][j]==1)
            return 0;
        if(dp[i][j]!=-1)
            return dp[i][j];
        int up = solve(i-1,j,m,n,arr,dp);
        int left = solve(i,j-1,m,n,arr,dp);
        
        return dp[i][j]=up + left;
    }
    int uniquePathsWithObstacles(vector<vector<int>>& arr) {
        int m = arr.size();
        int n = arr[0].size();
        
        vector<vector<int>> dp ( m , vector<int>(n,-1));
        if(arr[0][0]==1)
            return 0;
        
        return solve(m-1,n-1,m,n,arr,dp);
        
    }
};