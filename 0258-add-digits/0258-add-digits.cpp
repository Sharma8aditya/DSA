class Solution {
public:
    int addDigits(int n) {
        int temp = 0;
        //int sum = 0;
        while(n>0){
            temp += n%10;
            n = n/10;
        }
        if(temp < 10){
            return temp;
        }
        else{
            return addDigits(temp);
        }
    }
};