class Solution {
public:
    
    void dfs(int i,int j,vector<vector<int>> &image,int intialcolor,int color){
        int m = image.size();
        int n = image[0].size();
        if(i<0 || j<0)
            return;
        if(i>=m || j>=n)
            return;
        if(image[i][j]!=intialcolor) return;
        image[i][j] = color;
        
        dfs(i-1,j,image,intialcolor,color);
        dfs(i,j-1,image,intialcolor,color);
        dfs(i+1,j,image,intialcolor,color);
        dfs(i,j+1,image,intialcolor,color);
    }
    
    vector<vector<int>> floodFill(vector<vector<int>>& image, int sr, int sc, int color){
        int m = image.size();
        int n = image[0].size();
        int intialcolor = image[sr][sc];
        if(intialcolor!= color)
            dfs(sr,sc,image,intialcolor,color);
        return image;
        
    }
};