class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int res=0;
        int count=0;
        for(int x: nums)
        {
            if(count==0)
            {
                res=x;
            }
            if(x==res)
            {
                count++;
            }
            else
                count--;
        }
        return res;
    }
};