class Solution {
public:
    int maxSubArray(vector<int>& arr) {
        int n=arr.size();
        int sum=arr[0];
        int res=arr[0];
        for(int i=1;i<n;i++)
        {
            sum+=arr[i];
              sum=max(sum,arr[i]);
            res=max(sum,res);
        }
        return res;
        
    }
};