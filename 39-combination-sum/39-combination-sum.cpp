class Solution {
public:
    
    void solve(int i,vector<int> &arr,vector<int> res,set<vector<int>>&ans,int target)
    {
        if(i<0)
        {
            return;
        }
      if(target==0)
      {
          ans.insert(res);
          return;
      }
    vector<int>temp1=res;
    vector<int>temp2=res;
        if(target>=arr[i] && target>=0)
        {
            temp1.push_back(arr[i]);
            solve(i,arr,temp1,ans,target-arr[i]);
        }
        solve(i-1,arr,temp2,ans,target);
    
    }
    
    vector<vector<int>> combinationSum(vector<int>& arr, int target) {
        set<vector<int>> ans;
        vector<int> res;
        solve(arr.size()-1,arr,res,ans,target);
        vector<vector<int>> result(ans.begin(),ans.end());
        return result;
        
    }
};