class Solution {
public:
    int singleNumber(vector<int>& nums) {
        int xor1 = nums[0];
        for(int i = 1;i<nums.size();i++){
            xor1 ^= nums[i];
        }
        return xor1;
    }
};