class Solution {
public:
    void solve(int i,vector<int> &arr,vector<vector<int>>&ans,vector<int> &ds,int target){
        if(target == 0){
            ans.push_back(ds);   
            return;
        }
        if(i>=arr.size())
            return;
        if(target>=arr[i]){
            ds.push_back(arr[i]);
            solve(i,arr,ans,ds,target-arr[i]);
            ds.pop_back();
        }
        solve(i+1,arr,ans,ds,target);
        
    }
   
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        vector<vector<int>> ans;
        vector<int> ds;
        
        // function 
        int sum =0;
        solve(0,candidates,ans,ds,target);
        return ans;
    }
};