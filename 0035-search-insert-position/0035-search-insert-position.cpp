class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        //we can use lower bound here
        int low = 0, high = nums.size() - 1, mid;
        if(target > nums[high]){
            return nums.size();
        }
        int ans = 0;
        while(low <= high){
            mid = (high + low)/2;
            if(nums[mid] >= target){
                ans = mid;
                high = mid -1;         //looks for small index on left
            }
            else{
                low = mid +1;          //looks for right
            }
        }
        return ans;
    }
};