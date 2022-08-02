class Solution {
public:
    void help(int i , string &digit,vector<string >&ans,string &temp, unordered_map<char,string> &m){
        string str=m[digit[i]];
        if(i>=digit.size()){
            ans.push_back(temp);
            return;
        }
        for (int j=0;j<str.size();j++){
            temp.push_back(str[j]);
            help(i+1,digit,ans,temp,m);
            temp.pop_back();
        }
    }
    
    vector<string> letterCombinations(string digits) {

        unordered_map<char,string> m;
        m['2']="abc";
        m['3']="def";
        m['4']="ghi";
        m['5']="jkl";
        m['6']="mno";
        m['7']="pqrs";
        m['8']="tuv";
        m['9']="wxyz";
        vector<string > ans;
        string temp;
        if(digits.size()==0)
            return ans;

        help(0,digits,ans,temp,m);
        return ans;
        
        
    }
};