class Solution {
public:
    void solve(vector<int> ans ,vector<int>nums , vector<vector<int>>&res)
    {
        if(nums.size()==0)
        {
            res.push_back(ans);
            return;
        }
        else{
            
            vector<int> temp1=ans;
        vector<int>temp2=ans;
        temp1.push_back(nums[0]);
        nums.erase(nums.begin());
        solve(temp1,nums,res);
        solve(temp2,nums,res);
        
        }
        
        
    }
    vector<vector<int>> subsets(vector<int>& nums) {
        vector<vector<int>>res;
        vector<int> ans;
        int n=nums.size();
        solve( ans,nums,res);
        return res;
        
    }
};