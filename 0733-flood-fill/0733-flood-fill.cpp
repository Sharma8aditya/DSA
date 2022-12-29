class Solution {
    private:
    void dfs(int row, int col, vector<vector<int>>& ans, vector<vector<int>>& image, int color, int delrow[], int delcol[], int inicolour){
     
        ans[row][col] = color;       //colour the initial element with new colour
        int n = image.size();
        int m = image[0].size();
        for(int i =0;i<4;i++){           //every element can have upto atmost 4 neighbours
            int nrow = row + delrow[i];
            int ncol = col + delcol[i];
            
            //check validity of nrow and ncol, check initial colour neighbour and check 
            if(nrow >=0 && nrow<n && ncol>=0 && ncol<m && image[nrow][ncol] == inicolour && ans[nrow][ncol]!= color)
                dfs(nrow, ncol, ans, image, color, delrow, delcol, inicolour);
        }
    }
    
public:
    vector<vector<int>> floodFill(vector<vector<int>>& image, int sr, int sc, int color) {
        
        //initialize the colour
        int inicolour = image[sr][sc];
        vector<vector<int>> ans = image;      //make a copy of image array
        
        int delrow[] = {-1,0,1,0};           //neighbours of a element vary from -1 to +1
        int delcol[] = {0,1,0,-1};
        
        dfs(sr, sc, ans, image, color, delrow, delcol, inicolour);
        
        return ans;
    }
    
};