class Solution {
public:
    bool halvesAreAlike(string s) {
        unordered_set<int> st{'a', 'e','i','o','u','A','E','I','O','U'};
        int c1 = 0;
        int c2 = 0;
        for(int i = 0; i<s.size()/2;i++){
            if(st.find(s[i])!=st.end()){
                c1++;
            }
            
        }
        for(int j = s.size()/2; j<s.size();j++){
            if(st.find(s[j])!= st.end())
                c2++;
        }
        
        if(c1 == c2){
            return true;
        }
        return false;
    }
};