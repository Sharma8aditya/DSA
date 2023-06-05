class Solution {
public:
    bool checkStraightLine(vector<vector<int>>& cor) {
        int n =  cor.size();
        int x1 = cor[0][0];
        int y1 = cor[0][1];
        
        int x2 = cor[1][0];
        int y2 = cor[1][1];
        
        for(int i = 2;i<n;i++){
            int x = cor[i][0];
            int y = cor[i][1];
            
            if((y - y1)*(x - x2) != (y - y2)*(x - x1)){
                return false;
            }
        }
        return true;
    }
};