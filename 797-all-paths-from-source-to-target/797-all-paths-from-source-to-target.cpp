class Solution {
public:
    
    vector<int> maza;
    void dfs(vector<vector<int>>&graph,vector<bool>vis,int i,vector<vector<int>>&res)
    {     vis[i]=1;
          maza.push_back(i);  
        for(int x:graph[i])
        {
            if(!vis[x] && x!=graph.size()-1)
              {
                dfs(graph,vis,x,res);
              }
              else if(!vis[x])
              {
                   maza.push_back(x);
                   res.push_back(maza);   
              }
            maza.pop_back();
        }
    }
    
    vector<vector<int>> allPathsSourceTarget(vector<vector<int>>& graph) 
     {
       
        int n =graph.size();
        vector<bool> vis(n,0);
        vector<vector<int>> res;
        
        dfs(graph,vis,0,res);
        
        return res;
    }
};