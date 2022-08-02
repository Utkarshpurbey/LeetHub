class Solution {
public:
    
    void help (int i, int target,vector<int> arr,vector<vector<int>>&ans,vector<int>&ds){
 
     if(target==0){
            ans.push_back(ds);
             return;
         }
    if(i>=arr.size()) return;
    
    if(target>= arr[i]){
        ds.push_back(arr[i]);
        help(i+1,target-arr[i],arr,ans,ds);
        ds.pop_back();
    }
        while(i+1<arr.size() and arr[i]==arr[i+1]) i++;
        help(i+1,target,arr,ans,ds);
    
}

    
    
    vector<vector<int>> combinationSum2(vector<int>& arr, int target) {
        vector<vector<int>> ans;
    vector<int> ds;
    sort(arr.begin(),arr.end());
    
    help(0,target,arr,ans,ds);
    return ans;
        
    }
};