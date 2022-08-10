class Solution {
public:
    
    void dfs(int i,vector<bool> &visited,vector<int>adj[]){
      visited[i] = true;
      for(int a : adj[i])
      {
          if(!visited[a])
            dfs(a,visited,adj);
      }
    }
    int findCircleNum(vector<vector<int>>& arr) {
        int V = arr.size();
        vector<int>adj[V];
        for(int i=0;i<V;i++){
            for(int j =0;j<V;j++){
                if(arr[i][j] == 1 && i!=j)
                {
                    adj[i].push_back(j);
                    adj[j].push_back(i);
                }
            }
        }
        int count =0;
        vector<bool>visited(V,false);
        
        for(int i =0;i<V;i++){
            if(!visited[i]){
                dfs(i,visited,adj);
                count++;
            }
        }
        return count;
        
    }
};