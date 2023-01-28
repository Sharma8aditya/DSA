class Solution {
public:
    int singleNonDuplicate(vector<int>& nums) {
        int xo = 0;
        for(int i = 0;i<nums.size();i++){
            xo ^= nums[i];
        }
        return xo;
    }
};