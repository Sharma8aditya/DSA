class Solution {
public:
    int countNegatives(vector<vector<int>>& grid) {
        int n = grid.size();
        int m = grid[0].size();
        int i = n-1;
        int j = 0;
        int cnt = 0;
        
        while(i>=0 && j<m){
            if(grid[i][j] <0){
                cnt += m - j;
                i--;
            }
            else{
                j++;
            }
        }
        return cnt;
    }
};
