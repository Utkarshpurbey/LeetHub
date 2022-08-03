class Solution {
public:
    vector<int> intersect(vector<int>& nums1, vector<int>& nums2) {
        vector<int> ans;
        unordered_map<int,int> map1,map2;
        for(int i =0;i<nums1.size();i++)
        {
            map1[nums1[i]]++;   
        }
        for(int i=0;i<nums2.size();i++){
            map2[nums2[i]]++;
        }
        
        for( auto i :map1)
        {
            if(map2.find(i.first)!=map2.end())
            {
                int n = min(i.second,map2[i.first]);
                for(int j=0;j<n;j++)
                {
                    ans.push_back(i.first);
                }
            }
        }
        return ans;
    }
};