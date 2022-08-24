class Solution {
public:
    void solve(int i,vector<vector<int>>&ans,vector<int> &ds, int k,int n)
    {
        if(k==0){
            if(n==0)
                ans.push_back(ds);
            return;
        }
        if(i>9)
            return;
        // take 
        ds.push_back(i);
        solve(i+1,ans,ds,k-1,n-i);
        ds.pop_back();
        
        solve(i+1,ans,ds,k,n);
        
    }
    
    vector<vector<int>> combinationSum3(int k, int n) {
        int i =1;
        vector<vector<int>>ans;
        vector<int>ds;
        
        // call the helper function
        
        solve(i,ans,ds,k,n);
        return ans;
        
    }
};