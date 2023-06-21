class Solution {
public:
    int strStr(string haystack, string needle) {
        int n = haystack.length();
        int m = needle.length();
        int ans = 0;
        for(int i = 0; i<= n-m;i++){
            bool isans = true;
            for(int j = 0;j<m;j++){
                if(needle[j] != haystack[j+i]){
                    isans = false;
                    break;
                }
                ans= i;
                
            }
            if(isans){
                return ans;
            }
        }
        return -1;
    }
};