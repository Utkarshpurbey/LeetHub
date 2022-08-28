class Solution {
public:
    bool isAnagram(string s, string t) {
        int n1 = s.length();
        int n2 = t.length();
        unordered_map<char,int>map;
        if(n1!=n2) return false;
        
        for(int i =0;i<n1;i++){
            map[s[i]]++;
        }
        for(int i =0;i<n2;i++){
            if(map.find(t[i])!=map.end())
            {
                map[t[i]]--;
            }else
            return false;
        }
        for(auto i :map){
            if(i.second!=0)
                return false;
        }
        return true;
        
        
    }
};