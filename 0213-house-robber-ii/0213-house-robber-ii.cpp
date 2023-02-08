class Solution {
public:
    int solve(vector<int>& nums){
        int n = nums.size();
        int prev = nums[0], prev2 = 0;
        for(int i = 1;i<n;i++){
            int take = nums[i];
            if(i>1){
                take += prev2;
            }
            int nontake = 0 + prev;
            int curi = max(take, nontake);
            prev2 = prev;
            prev = curi;
        }
        return prev;
    }
    
    int rob(vector<int>& nums) {
        int n = nums.size();
        vector<int> temp1, temp2;
        if(n == 1){
            return nums[0];
        }
        for(int i = 0;i<n;i++){
            
            //removing the first element
            if(i!= 0){
                temp1.push_back(nums[i]);
            }
            if(i!=n-1){
                temp2.push_back(nums[i]);
            }
            
        }
        return max(solve(temp1), solve(temp2));
    }
};