class Solution {
public:
    int lengthOfLastWord(string s) {
        int n=s.length();
        int count=0;
        while(s[n-1]==' ')
        {
            n--;
        }
        for (int i=n-1;i>0;i--)
        {
            if(s[i]!=' ')
            count++;
            else
                break;
        }
    if(n==0)
        return 0;
        if(count==n-1 && s[0]!=' ')
            return n;
        return count;
    }
};