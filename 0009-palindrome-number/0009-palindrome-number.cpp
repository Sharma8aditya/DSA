class Solution {
public:
    bool isPalindrome(int x) {
        long long int ori = x, rev = 0;
        if(ori<0){
            return false;
        }
        while(ori > 0){
            rev = (rev*10) + ori%10;
            ori = ori/10;
        }
        return (x == rev);
    }
};