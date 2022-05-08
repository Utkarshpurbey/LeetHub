class Solution {
public:
    int search(vector<int>& a, int target) {
        int n=a.size();
        int l=0;
        int h=n-1;
        while(l<=h)
        {
          int  m=l+(h-l)/2;
            if(a[m]==target)
                return m;
            if(a[m]>target)
                h=m-1;
            else
                l=m+1;
        }
        return -1;
        
    }
};