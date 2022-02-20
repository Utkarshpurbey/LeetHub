class Solution {
public:
    
    int targetsun(vector<int> &nums,int n,int sum,int target)
    {
        if(n==0)
        {
            if(sum==target)
                return 1;
            else
                return 0;
        }
        return targetsun(nums,n-1,sum+nums[n-1],target)+targetsun(nums,n-1,sum-nums[n-1],target);
        
    }
    
    
    
    int findTargetSumWays(vector<int>& nums, int target) {
        int n=nums.size();
       return targetsun(nums,n,0,target);
        
    }
};