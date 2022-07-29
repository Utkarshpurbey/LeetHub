typedef pair<int,int> p;
class Solution {
public:
    struct mycomp{
        bool operator () (p a, p b){
        if(a.first==b.first){
            return(a.second<b.second);
        }
        return a.first>b.first;
    }
        
    };
    
    
    vector<int> frequencySort(vector<int>& arr) {
        vector<int> ans;
        int n= arr.size();
        unordered_map<int,int> map;
        
        for(int i=0;i<n;i++){
            map[arr[i]]++;
            
        }
        priority_queue< p,vector<p>, mycomp > mini;
        for(auto i : map){
            p temp = {i.second,i.first};
            mini.push(temp);
        }
        
        int i =mini.size();
        while(i!=0){
            int b = mini.top().first;
            while(b!=0)
            {
                ans.push_back(mini.top().second);
                --b;
            }
            mini.pop();
            
            --i;
        }
        return ans;
    }
};