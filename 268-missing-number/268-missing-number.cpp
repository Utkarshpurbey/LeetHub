class Solution {
public:
    int missingNumber(vector<int>& a) {
        int n=a.size();
        int b;
        unordered_set<int>u;
        for(int i=0;i<n;i++)
        {
            u.insert(a[i]);
            
        }
        for(int i=0;i<=n;i++)
        {
            if(u.find(i)==u.end())
                b=i;
                
        }
        return b;
        
        
    }
};