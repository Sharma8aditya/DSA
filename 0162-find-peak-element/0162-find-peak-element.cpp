class Solution {
public:
    int findPeakElement(vector<int>& nums) {
        int n = nums.size();
        int low = 0, high = n-1, mid = 0;
        while(low <= high){
            mid = low + (high - low)/2;
            
            if((mid == 0 || nums[mid-1] <= nums[mid]) && (mid == n-1 || nums[mid + 1] <= nums[mid])){
                return mid;
            }
            else if(mid >0 && nums[mid - 1] >= nums[mid]){
                high = mid - 1;
            }
            else{
                low = mid + 1;
            }
        }
        return -1;
    }
};