class Solution {
public:
    void rotate(vector<vector<int>>& matrix) {
        
        //transpose of the matrix
        int n = matrix.size();
        int m = matrix[0].size();
        for(int i = 0;i<n;i++){
            for(int j = i;j<m;j++){
                swap(matrix[i][j], matrix[j][i]);
            }
        }
        
        //reverse the column
        for(int i = 0;i<n;i++){
            int left = 0, right = m-1;
            while(left < right){
                swap(matrix[i][left], matrix[i][right]);
                left++;
                right--;
            }
        }
    }
};