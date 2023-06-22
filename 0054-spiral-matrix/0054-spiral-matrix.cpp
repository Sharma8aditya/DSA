class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& mat) {
        int n = mat.size(), m= mat[0].size();
        int dir = 1;
        int left = 0, top = 0, right = m-1, bottom = n-1;
        vector<int> v;
        while(left <= right && top <= bottom){
            if(dir == 1){
                
                //moving left to right
                for(int i = left; i<= right; i++)
                    v.push_back(mat[top][i]);            //row fixed
                dir = 2;
                top++;
                
            }
            
            else if(dir == 2){
                
                //movinf top to bottom
                for(int i = top; i<= bottom; i++)
                    v.push_back(mat[i][right]);
                dir = 3;
                right--;
                
            }
            
            else if(dir == 3){
                
                //moving left to right
                for(int i = right; i>= left; i--)
                    v.push_back(mat[bottom][i]);
                    
                dir = 4;
                bottom--;
                
            }
            
            else if(dir == 4){
                for(int i = bottom; i>= top; i--)
                    v.push_back(mat[i][left]);
                    
                dir = 1;
                left++;
                
            }
        }
        return v;
    }
};