class Solution {
public:
    int percentageLetter(string s, char letter) {
        int ans = 0;
        
        unordered_map<int , int> mp;
        for(int i = 0;i<s.length();i++){
            mp[s[i]]++;
        }
        
        for(auto x: mp){
            if(x.first == letter){
                ans = x.second *100/ s.length();
            }
        }
        return ans;
    }
};