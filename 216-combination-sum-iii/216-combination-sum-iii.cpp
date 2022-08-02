class Solution {
public:
    
    void help( int i ,int k, int target, vector<vector<int>> &ans, vector<int> ds)
    {
        if(k==0)
        {
            if(target==0){
                ans.push_back(ds);
            }
            return ;
        }
        if(i>9){
            return ;
        }
        
        if(target>= i){
            ds.push_back(i);
            help(i+1,k-1,target-i,ans,ds);
            ds.pop_back();
            
        }
        help(i+1,k,target,ans,ds);
        
    }
    
    vector<vector<int>> combinationSum3(int k, int target) {
    vector<vector<int>> ans;
        vector<int> ds;
        
        help (1, k,target,ans,ds);
        return ans;
    }
};