class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int curr_sum = 0;
        int maxi = INT_MIN;
        for(int i = 0; i< nums.size();i++){
            curr_sum += nums[i];
            if(curr_sum > maxi){
                maxi = curr_sum;
            }
            
            if(curr_sum < 0){
                curr_sum = 0;
            }
        }
        return maxi;
    }
};