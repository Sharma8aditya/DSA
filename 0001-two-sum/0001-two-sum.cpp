class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int> ans;
        int n = nums.size();
        unordered_map<int, int>mp;
        for(int i = 0;i<n;i++){
            int ele = nums[i];
            int rem = target - ele;
            if(mp.find(rem)!= mp.end()){
                ans.push_back(mp.find(rem)->second);
                ans.push_back(i);
            }
            mp[ele] = i;
        }
        return ans;
    }
};