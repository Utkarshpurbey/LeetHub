class Solution {
public:
    string removeall(string str){
        int n =str.length();
        stack<char>s;
        for(int i =0;i<n;i++){
             if(str[i]=='#'){
                if((!s.empty()))
                    s.pop();
            }else{
                s.push(str[i]);
            }
        }
        int m = s.size();
        string temp;
        while(m!=0){
            temp += s.top();
            s.pop();
            m--;
        }
        return temp;
    }
    bool backspaceCompare(string s, string t) {
        
        string temp1 = removeall(s);
        string temp2 = removeall(t);
        return (temp1 == temp2);
        
    }
};