class Solution {
public:
    int solve(vector<int>& arr,int i,vector<int> &dp)
    {
        if(i==0)
            return arr[0];
        if(i<0) return 0;
        if(dp[i]!=-1)
            return dp[i];
        return dp[i]=max(arr[i]+solve(arr,i-2,dp),solve(arr,i-1,dp));
    }
    
    int rob(vector<int>& arr) {
        vector<int> dp(arr.size()+1,-1);
        return solve(arr,arr.size()-1,dp);
    }
};