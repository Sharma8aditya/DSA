class Solution {
public:
    void rotate(vector<vector<int>>& matrix) {
        //transpose of a matrix
        int n = matrix.size();
        for(int i = 0;i<n;i++){
            for(int j = i;j<n;j++){
                swap(matrix[i][j], matrix[j][i]);
            }
        }
        
        //reverse the column of the tranposed matrix
        for(int i = 0;i<n;i++){
            int left = 0, right = n-1;
            while(left < right){
                swap(matrix[i][left], matrix[i][right]);
                ++left;
                --right;
            }
        }
    }
};