class Solution {
public:
    
    int countsub(vector<int>nums,int n,int sum)
    {
        int count=0;
    int t[n+1][sum+1];
        
        for(int i=0;i<sum+1;i++)
            t[0][i]=0;
        for(int j=0;j<n+1;j++)
            t[j][0]=1;
        for(int i=1;i<n+1;i++)
        {
            for(int j=0;j<sum+1;j++)
            {
                if(nums[i-1]<=j)
                    t[i][j]=t[i-1][j]+t[i-1][j-nums[i-1]];
                else
                    t[i][j]=t[i-1][j];
            }
        }
        return t[n][sum];
    }
    
    
    int findTargetSumWays(vector<int>& nums, int target) {
        int n=nums.size();
        target=abs(target);
        int sum=0;
        for(int i=0;i<n;i++)
        {
            sum+=nums[i];
            
        }
        if(sum< target || (sum+target)%2!=0)
            return 0;
        int newt=(target+sum)/2;
        return countsub(nums,n,newt);
        
                
    }
};