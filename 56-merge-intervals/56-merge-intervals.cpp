class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& v) {
           vector<vector<int>> ans;
        int n=v.size();
        sort(v.begin(),v.end());
            for(int i=0;i<n;i++)
            {
                if(ans.empty())
                {
                    ans.push_back(v[i]);
                }else
                {
                    vector<int>&res=ans.back();
                    //overlapping 
                    
                    if(res[1]>=v[i][0])
                    {
                        res[1]=max(res[1],v[i][1]);
                    }
                    else
                    {
                        ans.push_back(v[i]);
                    }
                }
            }
        return ans;
    }
};