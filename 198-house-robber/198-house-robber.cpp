class Solution {
public:
        
    int rob(vector<int>& arr) {
        int n = arr.size();
        vector<int> dp(n,-1);
        dp[0] = arr[0];
        
        for(int i=1;i<n;i++)
        {
            int fc = arr[i];
            if(i>1)
                fc+= dp[i-2];
            int sc = dp[i-1];
            
            dp[i] = max(fc,sc);
        }
        return dp[n-1]; 
        
        
    }
};