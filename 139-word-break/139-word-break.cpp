class Solution {
public:
    
    int help(int i, string s, set<string> words, vector<int> &dp){
        if(i==s.size()) return 1;
        string temp;
        if(dp[i]!=-1) return dp[i];
        for(int j = i;j<s.size();j++){
            temp += s[j];                   
            if(words.find(temp)!=words.end()){ 
                if(help(j+1,s,words,dp)) return dp[i] = 1; 
            }
        }
        return dp[i] = 0;
    }
    
    bool wordBreak(string s, vector<string>& wordDict) {
        set<string> words;
        vector<int> dp(s.size(),-1);
        for(string x: wordDict)
            words.insert(x);
        return help(0,s,words,dp);
    }
};