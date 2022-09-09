class Solution {
public:
    int firstUniqChar(string arr) {
       
        int n = arr.size();
        map< char, int> map;
        
        for(int i =0;i<n;i++){
            map[arr[i]]++;
        }
        for(int i =0;i<n;i++){
            if(map[arr[i]]== 1)
                return i;
        }
        return -1;
    }
};