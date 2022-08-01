class Solution {
public:
    
   void solve(vector<int>& arr, vector<vector<int>> &ans ,vector<int> res,int i,int n,int target){
        if(i==n)
        {
            if(target==0){
                ans.push_back(res);
            }
            return ;
        }
        
       if(target>=arr[i])
       {
           res.push_back(arr[i]);
        solve(arr,ans,res,i,n,target-arr[i]);  
             res.pop_back();
       }
    
      
        solve(arr,ans,res,i+1,n,target);
    }
    
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        vector<vector<int>> ans;
        vector<int> res;
        int n=candidates.size();
        solve(candidates,ans,res,0, n, target);
        return ans;
        
    }
};