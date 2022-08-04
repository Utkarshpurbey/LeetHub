class Solution {
public:
    
    int solve(int i ,int j ,int n ,vector<vector<int>> &arr,vector<vector<int>> &dp){
        if(i== n-1)
        {
            return arr[i][j];
        }
        if(i>n) return 0;
        if(dp[i][j]!=-1)
            return dp[i][j];
        
        int down = arr[i][j] + solve(i+1,j,n,arr,dp);
        int dia = arr[i][j] +   solve(i+1,j+1,n,arr,dp);
        return dp[i][j]=min(down,dia);
        
    }
    int minimumTotal(vector<vector<int>>& triangle) {
        
        
        int m = triangle.size();
        vector<vector<int>> dp (m,vector<int> (m,-1));        
        
        return solve(0,0,m,triangle,dp);
        
    }
};