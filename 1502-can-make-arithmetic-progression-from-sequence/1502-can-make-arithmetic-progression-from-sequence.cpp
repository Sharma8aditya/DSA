class Solution {
public:
    bool canMakeArithmeticProgression(vector<int>& nums) {
        
        //sort the array
        sort(nums.begin(), nums.end());
        
        int diff = nums[1] - nums[0];
        
        for(int i = 2;i<nums.size();++i){
            if(nums[i] - nums[i-1] != diff){
                return false;
            }
        }
        return true;
    }
};