class Solution {
public:
    void sortColors(vector<int>& arr) {
        int n=arr.size();
        int c0=0,c1=0,c2=0;
        for(int i=0;i<n;i++)
        {
            if(arr[i]==0)
            {
                c0++;
            }
            else if(arr[i]==1)
                c1++;
            else
                c2++;
        }
        vector<int>ans;
        for(int i=0;i<c0;i++)
        {
            ans.push_back(0);
        }
                for(int i=0;i<c1;i++)
        {
            ans.push_back(1);
        }
                for(int i=0;i<c2;i++)
        {
            ans.push_back(2);
        }
        arr=ans;
        
        
        
    }
};