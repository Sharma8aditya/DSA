class Solution {
public:
    int findJudge(int n, vector<vector<int>>& trust) {
        //initialize two arrays for storing a and b
        vector<int> ai(n+1 ,0);
        vector<int> bi(n+1, 0);
        
        for(auto i: trust){
            ai[i[0]]++;
            bi[i[1]]++;
        }
        
        int ans = -1;
        
        for(int i = 1;i<=n;i++){
            if(ai[i] == 0 && bi[i] == n-1){
                ans = i;
            }
            
        }
        return ans;
    }
};