class Solution {
public:
    vector<int> topKFrequent(vector<int>& arr, int k) {
        
        unordered_map<int,int> map;
        for(int i=0;i<arr.size();i++){
            map[arr[i]]++;
        }
        priority_queue <pair<int,int>> ans;
        for(auto i :map){
            ans.push({i.second,i.first});
        }
        vector<int> res;
        
        while(k!=0)
        {
            pair<int,int> temp = ans.top();
            res.push_back(temp.second);
            ans.pop();
            k--;
            
        }
        return res;     
    }
};