class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        if(s.length() == 0)
            return 0;
        unordered_map<char, int> m;          //create a map to store freqof unique characters
        int i=0,  j= 0, ans = INT_MIN;
        while(j<s.length()){
            m[s[j]]++;              //increase the freq as you traverse through the string
            
            if(m.size()== j-i+1)     //compare the map size with max size of silding window
                ans = max(ans, j-i+1);
            else if(m.size()<j-i+1){         //map size less than max window size means there some duplicates present
                while(m.size()<j-i+1){         
                    m[s[i]]--;           //remove the duplicates
                    if(m[s[i]]==0)         //if frequency becomes zero
                        m.erase(s[i]);           //remove it completely
                    i++;                   //move for the next item
                    
                }
                
            }
            j++;                 //move for next item
        }
        return ans;
    }
    
};