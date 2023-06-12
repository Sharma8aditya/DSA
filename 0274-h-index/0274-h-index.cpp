class Solution {
public:
    int hIndex(vector<int>& nums) {
        int n = nums.size();
        sort(nums.begin(), nums.end());
        
        if(nums[0] >= n){
            return n;
        }
        
        if(n == 1){
            return !(nums[0] == 0);
        }
        
        for(int i = 0;i<n;i++){
            int left = n-i;
            if(nums[i] >= left){
                return left;
            }
        }
        return 0;
    }
};