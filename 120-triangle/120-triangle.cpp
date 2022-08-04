class Solution {
public:
    
    int minimumTotal(vector<vector<int>>& arr) {
        
        
        int n = arr.size();
        vector<int> front(n,0);       
        
        for(int i =0 ;i<n;i++)
        {
            front[i]= arr[n-1][i];
        }
        for(int i = n-2;i>=0;i--){
            vector<int> curr(n,0);
            for(int j = i;j>=0;j--){
                
                int down =  arr[i][j] + front[j];
                int dia = arr[i][j] +  front[j+1];
                
                curr[j] = min(down,dia);
            }
            front = curr;
        }
        return front[0];
        
    }
};