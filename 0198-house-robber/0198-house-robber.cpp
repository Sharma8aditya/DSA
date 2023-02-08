class Solution {
public:
    int rob(vector<int>& nums) {
        int prev = nums[0], prev2 = 0;
        
        for(int i = 1;i<nums.size();i++){
            int take = nums[i];
            if(i>1){
                take += prev2;
            }
            int nontake = 0 + prev;
            int curi = max(take, nontake);
            prev2 = prev;
            prev = curi;
        }
        return prev;
        
    }
};