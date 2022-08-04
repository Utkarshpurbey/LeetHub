class Solution {
public:
        
    int rob(vector<int>& arr) {
        int n = arr.size();
        int prev1 = arr[0];
        int prev2 =0;
        
        for(int i=1;i<n;i++)
        {
            int fc = arr[i];
            if(i>1)
                fc +=prev2;
            int sc = prev1;
            
            int curr = max(fc,sc);
            prev2= prev1;
            prev1 = curr;
        }
        return prev1; 
        
        
    }
};