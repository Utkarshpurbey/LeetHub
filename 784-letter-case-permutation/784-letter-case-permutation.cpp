class Solution {
public:

    
   void per(string ip, string op,vector<string> &ans)
    {
        if(ip.length()==0)
        {
         ans.push_back(op);
            return;
        }
        if(isalpha(ip[0]))
        {
            string op1=op;
            string op2=op;
            op1.push_back(toupper(ip[0]));
            op2.push_back(tolower(ip[0]));
            ip.erase(ip.begin()+0);
                per(ip,op1,ans);
        per(ip,op2,ans);
            
        }
       else
       {
                       string op1=op;
            op1.push_back(ip[0]);
             ip.erase(ip.begin()+0);
            
            per(ip,op1,ans);
       }
    
        
        
    }
    vector<string> letterCasePermutation(string s) {
        vector<string> ans;
        per(s,"",ans);
        return ans;
        
    }
};