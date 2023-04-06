class Solution {
public:
    int uniquePaths(int m, int n) {
        int  dp[m][n];
        for(int i = 0;i<m;i++){
            for(int j = 0;j<n;j++){
                if(i == 0 && j == 0){               //base case
                    dp[i][j] = 1;
                }
                else{
                    int up = 0, left = 0;
                    if(i>0) up = dp[i-1][j];              //moving up in row
                    if(j>0) left = dp[i][j-1];            //moving left in column
                    dp[i][j] = up + left;
                }
            }
        }
        return dp[m-1][n-1];                              //start from bottom-right
    }
};