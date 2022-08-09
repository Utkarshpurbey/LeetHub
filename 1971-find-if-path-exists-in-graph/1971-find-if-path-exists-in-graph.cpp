class Solution {
public:
    bool validPath(int n, vector<vector<int>>& edges, int source, int destination) 
    {
        
        
        
        vector<int> adj[n];
        for(auto x : edges)
        {


           adj[x[0]].push_back(x[1]);
           adj[x[1]].push_back(x[0]);    
           
           
        
        
        }
        
        
        
        vector<bool>vis(n,false);
        
        queue<int>q;
        q.push(source);
        vis[source]=1;        
        while(!q.empty())
        {
            
            int temp=q.front();
            
            q.pop();
            
            for(int x:adj[temp])
            {

                if(!vis[x])
                {
                     q.push(x);
                     vis[x]=1;
                }
            }
        }
        return vis[destination];
    }
};