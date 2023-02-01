class Solution {
public:
    string gcdOfStrings(string str1, string str2) {
        //concatenate the srings and check them
        if(str1 + str2 == str2 + str1){
            //check the gcd of of length of both the strings
            return str1.substr(0, gcd(str1.length(), str2.length()));
        }
        return "";
    }
};