class Solution {
public:
    int solve(vector<int>& nums, int target, bool index){
        int n = nums.size();
        int low = 0, high = n-1, ans = -1;
        while( low <= high){
            int mid = low + (high - low)/2;
            if(nums[mid] < target){
                low = mid + 1;
                
            }
            else if(nums[mid] > target){
                high = mid - 1;
            }
            else{
                ans = mid;
                if(index){
                    high = mid -1;
                }
                else{
                    low = mid + 1;
                }
            }
            //return ans;
        }
        return ans;
    }
    
    vector<int> searchRange(vector<int>& nums, int target) {
        int start = solve(nums, target, true);
        int end = solve(nums, target, false);
        
        return vector<int>({start, end});
    }
};