class Solution {
public:
    double myPow(double x, int n) {
        double ans=1.0;
        long nn=n;
        if(n<0)
            nn=nn*-1;
        while(nn)
        {
            if(nn%2!=0)
            {
                ans=ans*x;
                nn--;
            }
            else
            {
                
                x=x*x;
                nn=nn/2;
            }
        }
    if(n<0)
        return (double)(1.0/ans);
    return ans;
    }
};