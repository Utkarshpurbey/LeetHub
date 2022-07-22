class Solution {
public:
    
bool isSum(vector<int>arr,int n,int sum)
{
    bool dp[n+1][sum+1];
    memset(dp,false,sizeof(dp));
    for(int i=0;i<=n;i++)
    {
        for(int j=0;j<=sum;j++)
        {
            if(i==0)
            dp[i][j]=0;
            if(j==0)
            dp[i][j]=1;
        }
    }
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=sum;j++)
        {
            if(arr[i-1]>j)
            dp[i][j]=dp[i-1][j];
            else
            dp[i][j]=dp[i-1][j] || dp[i-1][j-arr[i-1]];
        }
    }
    return dp[n][sum];
}

    bool canPartition(vector<int>& arr)
    {
        int n=arr.size();
        int sum=0;
        for(int i=0;i<n;i++)
        {
            sum+=arr[i];
        }
        if(sum%2!=0)
         return false;
        return isSum(arr,n,sum/2);
         
    }
};