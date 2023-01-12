class Solution {
public:
    int singleNumber(vector<int>& nums) {
        //use xor operator
        int res = nums[0];
        for(int i = 1;i<nums.size();i++){
            res ^= nums[i];
        }
        return res;
    }
};