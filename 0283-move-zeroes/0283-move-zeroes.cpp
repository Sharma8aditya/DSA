class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int i, j;
        for(i = 0, j=0;i<nums.size();){
            if(nums[i] == 0){
                i++;
            }
            else{
                swap(nums[i], nums[j]);
                i++;
                j++;
            }
        }
    }
};