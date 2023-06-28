class Solution {
public:
    bool isIsomorphic(string s, string t) {
        unordered_map<char, int> mp1;
        unordered_map<char, int> mp2;
        int n = s.length();
        
//         for(auto it: s){
//             mp1[it]++;
//         }
        
//         for(auto it: t){
//             mp2[it]++;
            
//         }
        
        for(int i = 0;i<n;i++){
            if(mp1[s[i]] != mp2[t[i]]){
                return false;
            }
            mp1[s[i]] = i+1;
            mp2[t[i]] = i+1;
        }
        return true;
    }
};