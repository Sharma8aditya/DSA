class Solution {
public:
    bool isPalindrome(string s) {
        int left = 0, right = s.length() - 1;
        while(left < right){
            
            //if left is not alpha numeric increment the left
            if(!isalnum(s[left])){
                left++;
            }
            
            //similarly decrement the right
            else if(!isalnum(s[right])){
                right--;
            }
            
            //is lower of s[left] != s[right] it means string isn't palindrome
            else if(tolower(s[left]) != tolower(s[right])){
                return false;
            }
            
            //if string is palindrome then increment the both
            else{
                left++;
                right--;
            }
        }
        return true;
    }
};