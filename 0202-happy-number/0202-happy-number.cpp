class Solution {
public:
    long long sqaure(int n){
        if(n>= 0 && n<= 9){
            return n;
        }
        
        long long ans = 0;
        while(n){
            int rem = n%10;
            int sqr = rem * rem;
            ans += sqr;
            n = n/10;
        }
        int res = sqaure(ans);
        return res;
    }
    
    bool isHappy(int n) {
        int ans = sqaure(n);
        if(ans == 1 || ans == 7){
            return true;
        }
        else{
            return false;
        }
    }
};