class Solution {
public:
    int lengthOfLastWord(string s) {
        int count = 0;
        bool flag = false;
        for(int i = s.length()-1;i>-1;i--){
            if((s[i] >= 'a' && s[i] <= 'z') || (s[i] >= 'A' && s[i] <= 'Z')){
                flag = true;
                count++;
            }
            else{
                if(flag == true){
                    return count;
                }
            }
            
        }
        return count;
    }
};