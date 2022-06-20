class Solution {
public:
    int maxProfit(vector<int>& arr) {
        int n=arr.size();
        int m=arr[0];
        int res=0;
        for(int i=0;i<n;i++)
        {
            m=max(m,arr[i]);
        }
        
        for(int i=0;i<n;i++)
        {
            if(arr[i]<=m)
            {
                m=arr[i];
               
            }
            res=max(res,arr[i]-m);
            
        }
        return res;
        
    }
};