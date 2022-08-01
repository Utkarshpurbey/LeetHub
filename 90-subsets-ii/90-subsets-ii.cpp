class Solution {
public:
    
    void solve(vector<int>&arr,int i,vector<vector<int>> &ans,vector<int > ds){
        if(i==arr.size()){
            ans.push_back(ds);
            return ;
        }
        ds.push_back(arr[i]);
        solve(arr,i+1,ans,ds);
        ds.pop_back();
        
        while(i+1 < arr.size() && arr[i]==arr[i+1]) i++;
        solve(arr,i+1,ans,ds);
    }
    
    vector<vector<int>> subsetsWithDup(vector<int>& arr) {
        sort(arr.begin(),arr.end());
        vector<vector<int>> ans;
        vector<int> ds;
        
        solve(arr,0,ans,ds);
        return ans;
    }
};