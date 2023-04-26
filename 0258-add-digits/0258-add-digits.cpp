class Solution {
public:
    int addDigits(int n) {
        int temp = 0;
        //divisiblity by 9 (digital root approach)
        if(n == 0){
            return 0;
        }
        else if(n%9 == 0){
            return 9;
        }
        else{
            return n%9;
        }
    }
};