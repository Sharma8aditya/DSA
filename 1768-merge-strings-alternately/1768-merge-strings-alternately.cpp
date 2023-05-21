class Solution {
public:
    string mergeAlternately(string word1, string word2) {
        string ans = "";
        int n = word1.length();
        int m = word2.length();
        int i = 0;
        while(i<n || i<m){
            if(i<n){
                ans += word1[i];
                
            }
            if(i<m){
                ans += word2[i];
            }
            i++;
        }
        return ans;
        
    }
};