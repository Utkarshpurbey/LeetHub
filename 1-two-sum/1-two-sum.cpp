class Solution {
public:
    vector<int> twoSum(vector<int>& a, int target) {
    unordered_map<int,int>m;
        int n=a.size();
    vector<int>res(2,-1);
        for(int i=0;i<n;i++)
        {
            if(m.find(target-a[i])!=m.end())
            {
               return {i,m[target-a[i]]};
            }
            m.insert({a[i],i});
        
        }
        return res;
        
        
    }
};