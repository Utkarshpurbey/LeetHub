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
        while(i+1<nums.size() && nums[i]==nums[i+1]) i++;
        solve(i+1,nums,ans,ds);
    }
    vector<vector<int>> subsetsWithDup(vector<int>& arr) {
        sort(arr.begin(),arr.end());
         vector<vector<int>> ans;
        vector<int> ds;
        solve(0,arr,ans,ds);
        return ans;
    }
};