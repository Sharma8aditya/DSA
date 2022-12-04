class Solution {
public:
    int minimumAverageDifference(vector<int>& nums) {
        int ans = 0;
        int mini = INT_MAX;
        int n = nums.size();
        //since we need to calc the sum of first i+1 and last n-i elements
        //we have to calculate prefix sum and suffix sum
        
        vector<long long> vec(n);
        vec[0] = nums[0];
        for(int i = 1; i < n ; i++){
            vec[i] = vec[i-1] + nums[i];
        }
        
        //then iterate each number 
        for(int i = 0; i<n;i++){
            long long k = abs((vec[i]/(i+1)) - ((vec[n-1]- vec[i])/max(n-i-1,1)));
            
            if(k<mini){
                mini = k;
                ans = i;
            }
        }
        return ans;
    }
};