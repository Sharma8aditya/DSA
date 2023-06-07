class Solution {
public:
    int minBitFlips(int a, int b) {
        int ans = 0;
        int xor_res = a ^ b;
        
        if(xor_res == 0){
            return ans;
        }
        while(xor_res != 0){
            ans += xor_res &1;
            xor_res >>=1;
        }
        return ans;
        
        
    }
};