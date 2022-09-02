class Solution {
public:
    
    void help(int i,vector<int> &arr,vector<int> &ds,vector<vector<int>> &ans){
        if(i == arr.size()){
            ans.push_back(ds);
            return;
        }
        ds.push_back(arr[i]);
        help(i+1,arr,ds,ans);
        ds.pop_back();
        while(i+1<arr.size() && arr[i]==arr[i+1]) i++;
        help(i+1,arr,ds,ans);
    }
    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
        
        vector<vector<int>>ans;
        vector<int>ds;
        sort(nums.begin(),nums.end());
        // helper function 
        help(0,nums,ds,ans);
        sort(ans.begin(),ans.end());
        
        
        return ans;
    }
};