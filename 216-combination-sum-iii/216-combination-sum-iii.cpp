class Solution {
public:
    
    void help(int i,int k,int target,vector<int> &ds,vector<vector<int>> &ans){
        if(target == 0){
            if(k==0){
                ans.push_back(ds);
            }
            return;
        }
        if(i>9)
            return;
        if(k<0)
            return;
        
        if(target>= i){
            ds.push_back(i);
            help(i+1,k-1,target-i,ds,ans);
            ds.pop_back();
        }
        help(i+1,k,target,ds,ans);
    }
    vector<vector<int>> combinationSum3(int k, int n) {
        vector<vector<int>> ans;
        
        vector<int>ds;
        
        //help 
        help(1,k,n,ds,ans);
        
        return ans;
        
    }
};