class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int i=0,k = 2;
        if(nums.size() < 3){
            return nums.size();
        }
        
        for(i = 2;i<nums.size();i++){
            if(nums[i] != nums[k-2]){
                nums[k++] = nums[i];
            }
        }
        return k;
    }
};