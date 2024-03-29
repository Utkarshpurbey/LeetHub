class Solution {
public:
    void dfs(int i,int j,int n,int m,vector<vector<char>>& grid,vector<vector<bool>>& visited){
        if(i<0 || j<0)
            return;
        if(i>=n || j>=m)
            return;
        if(grid[i][j]!='1') return;
        if(visited[i][j]==true) return;
        
        visited[i][j] =true;
        dfs(i+1,j,n,m,grid,visited);
        dfs(i-1,j,n,m,grid,visited);
        dfs(i,j+1,n,m,grid,visited);
        dfs(i,j-1,n,m,grid,visited);
        
    }
    
    int numIslands(vector<vector<char>>& grid) {
        int n = grid.size();
        int m = grid[0].size();
        int count =0;
        vector<vector<bool>> visited(n,vector<bool>(m,false));
        
        for(int i =0;i<n;i++){
            for(int j =0;j<m;j++){
                if(grid[i][j]=='1'){
                    if(!visited[i][j]){
                        dfs(i,j,n,m,grid,visited);
                        count++;
                    }
                }
            }
        }
        return count;
        
    }
};