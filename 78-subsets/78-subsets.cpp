class Solution {
public:
    
    void solve(int i,vector<int> &nums,vector<vector<int>> &ans, vector<int> &ds){
        if(i==nums.size())
        {
            ans.push_back(ds);
            return ;
        }
        if(i>nums.size()) return ;
        ds.push_back(nums[i]);
        solve(i+1,nums,ans,ds);
        ds.pop_back();
        solve(i+1,nums,ans,ds);
    }
    
    vector<vector<int>> subsets(vector<int>& nums) {
        int n = nums.size();
        vector<vector<int>> ans;
        vector<int> ds;
        solve(0,nums,ans,ds);
        return ans;
        
    }
};