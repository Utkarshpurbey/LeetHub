#define inf INT_MAX 
class Solution {
public:
    
    int minPathSum(vector<vector<int>>& arr) {
        
        int m = arr.size();
        int n = arr[0].size();
        
        vector<vector<int>> dp(m,vector<int>(n,-1));
        int cost=0;
        
        	for(int i=0;i<n;i++)
				dp[0][i]=(cost+=arr[0][i]);
				cost=0;
				for(int i=0;i<m;i++)
					dp[i][0]=(cost+=arr[i][0]);
        for(int i=1;i<m;i++)
        {
            for(int j=1;j<n;j++)
            {
        
                dp[i][j]= arr[i][j] + min(dp[i][j-1],dp[i-1][j]);
            }
        }
        return dp[m-1][n-1];
        
    }
};