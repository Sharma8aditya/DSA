class Solution {
public:
    vector<vector<int>> updateMatrix(vector<vector<int>>& mat) {
        int n = mat.size();
        int m = mat[0].size();
        
        vector<vector<int>>vis(n, vector<int>(m,0));
        vector<vector<int>>dist(n, vector<int>(m,0));
        
        queue<pair<pair<int,int>, int>>q;
        
        //traverse the matrix mat
        for(int i = 0;i<n;i++){
            for(int j = 0;j<m;j++){
                if(mat[i][j] == 0){           //start bfs when cell contains 0
                    q.push({{i,j}, 0});
                    vis[i][j] = 1;
                }
                else{
                    
                    //mark unvisited
                    vis[i][j] = 0;
                }
            }
        }
        
        int delrow[] = {-1,0,1,0};
        int delcol[] = {0,1,0,-1};
        
        while(!q.empty()){
            int row = q.front().first.first;
            int col = q.front().first.second;
            int step = q.front().second;
            q.pop();
            
            dist[row][col] = step;
            
            for(int i = 0;i<4;i++){            //for all 4 neighbours
                int nrow = row + delrow[i];
                int ncol = col + delcol[i];
                
                //check validity of nrow and ncol and element should be not visited
                if(nrow >=0 && nrow <n && ncol >=0 && ncol < m && vis[nrow][ncol] == 0){
                    vis[nrow][ncol] = 1;
                    q.push({{nrow, ncol}, step + 1});
                }
            }
        }
        return dist;
    }
};