class Solution {
public:
    
    void dfs(int i,vector<vector<int>>& graph,vector<vector<int>>& ans,vector<int>& ds){
        ds.push_back(i);
        if(i== graph.size()-1)
            ans.push_back(ds);
        else{
            for(int a: graph[i]){
                dfs(a,graph,ans,ds);
            }
        }
        ds.pop_back();
    }
    
    
    vector<vector<int>> allPathsSourceTarget(vector<vector<int>>& graph) {
        vector<vector<int>>ans;
        vector<int> ds;
        vector<bool>visited(graph.size(),false);
        //dfs 0 se start karnege
        dfs(0,graph,ans,ds);
        return ans;

        
        
    }
};