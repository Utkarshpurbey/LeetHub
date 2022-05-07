class Solution {
public:
    bool isPalindrome(int x) {
        long long int a=x;
        if(a<0)
            return false;
        long long int b=0;
        while(x!=0)
        {
           int digit=x%10;
            b=b*10+digit;
            x=x/10;
        }
        return(a==b);
    }
};