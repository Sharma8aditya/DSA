class Solution {
public:
    int deleteGreatestValue(vector<vector<int>>& grid) {
        int ans = 0;
        int n = grid.size();
        int m = grid[0].size();
        //int maxi = INT_MIN;
        
        //sort according to rows
        for(int i = 0;i<n;i++){
            sort(grid[i].begin(), grid[i].end());
        }
        
        for(int j = 0;j<m;++j){
            int maxi = 0;
            for(int i = 0;i<n;++i){
                // if(grid[i][j] > maxi){
                //     maxi = grid[i][j];
                // }
                maxi = max(maxi, grid[i][j]);
                
                
            }
            ans+= maxi;
            
        }
        return ans;
        
    }
};