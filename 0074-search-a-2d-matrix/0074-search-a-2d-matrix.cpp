class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        //we can apply binary search here because it is already sorted
        int i = 0, j = matrix[0].size()-1, n= matrix.size();
        while(i<n && j>=0){
            if(matrix[i][j] == target){
                return true;
            }
            else if(matrix[i][j] > target){
                j--;
            }
            else{
                i++;
            }
        }
        return false;
    }
};