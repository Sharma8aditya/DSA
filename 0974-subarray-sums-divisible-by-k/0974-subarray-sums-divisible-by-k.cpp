class Solution {
public:
    int subarraysDivByK(vector<int>& nums, int k) {
        int n = nums.size();
        vector<int> sum(k, 0);
        sum[0]++;
        int count = 0;
        int currsum = 0;
        for(int i = 0;i<n;i++){
            currsum = (currsum + nums[i]%k + k)%k;
            count += sum[currsum];
            sum[currsum]++;
        }
        return count;
    }
};