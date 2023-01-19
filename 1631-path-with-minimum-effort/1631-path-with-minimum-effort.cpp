class Solution {
public:
    int minimumEffortPath(vector<vector<int>>& heights) {
        
        //stores {diff, {row, col}}
       priority_queue<pair<int, pair<int, int>>, vector<pair<int, pair<int, int>>>, greater<pair<int, pair<int, int>>>>pq;
        int n = heights.size();
        int m = heights[0].size();
        vector<vector<int>>dist(n, vector<int>(m, 1e9));
        dist[0][0] = {0};
        pq.push({0,{0,0}});
        
        //4 side movement from row and col
        int dr[] = {-1,0,1,0};
        int dc[] = {0,1,0,-1};
        
        while(!pq.empty()){
            auto it = pq.top();
            pq.pop();
            int diff = it.first;
            int row = it.second.first;
            int col = it.second.second;
            
            if(row == n-1 && col == m-1){
                return diff;
            }
            
            for(int i = 0;i<4;i++){
                int nrow = row + dr[i];
                int ncol = col + dc[i];
                
                if(nrow >=0 && nrow< n && ncol >=0 && ncol <m){
                    
                    //calculate the max diff of every path
                    int neweffort = max(abs(heights[row][col] - heights[nrow][ncol]), diff);
                    
                    if(neweffort < dist[nrow][ncol]){
                        dist[nrow][ncol] = neweffort;
                        pq.push({neweffort, {nrow, ncol}});
                    }
                }
            }
        }
        return 0;
    }
};