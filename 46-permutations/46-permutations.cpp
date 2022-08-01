class Solution {
public:
    
    void solve(int pos,vector<int> & arr, vector<vector<int>> &ans){
        if(pos>=arr.size()-1){
            ans.push_back(arr);
            return;
        }
        vector<int > temp = arr;
        for(int i=pos;i<arr.size();i++){
            swap(temp[i],temp[pos]);
            solve(pos+1,temp,ans);
            //swap(arr[i],arr[pos]);
        }
    }
    
    vector<vector<int>> permute(vector<int>& nums) {
        vector<vector<int>> ans;
        solve(0,nums,ans);
        return ans;
        
        
    }
};