class Solution {
public:
    
    void dfs(vector<int>adj[],int source,vector<bool>&visited){
        visited[source] = true;
        for(int i : adj[source]){
            if(visited[i]== false){
                dfs(adj,i,visited);
            }
        }
    }
    
    bool validPath(int n, vector<vector<int>>& edges, int source, int destination) 
    {
        vector<int> adj[n];
        for(auto x : edges)
        {
           adj[x[0]].push_back(x[1]);
           adj[x[1]].push_back(x[0]);    
        }
        vector<bool>visited(n,false);
        dfs(adj,source,visited);
        return visited[destination];
        
    }
};