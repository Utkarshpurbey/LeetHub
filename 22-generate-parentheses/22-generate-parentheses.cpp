class Solution {
public:
    
    void helper(int open,int close,string temp,vector<string> &ans){
        if(open == 0 && close ==0 ){
            ans.push_back(temp);
            return;
        }
        
         if(open!=0)
        {
            string op1=temp+"(";
            helper(open-1,close,op1,ans);
        }
        if(close>open)
        {
             string op2=temp+")";
            helper(open,close-1,op2,ans);

        }
    }
    
    vector<string> generateParenthesis(int n) {
        int open =n;
        int close =n;
        
        string temp;
        vector<string>ans;
        
        // helper function;
        
        helper(open,close,temp,ans);
        return ans;
    }
};