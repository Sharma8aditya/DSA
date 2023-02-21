class Solution {
public:
    int singleNonDuplicate(vector<int>& nums) {
        unordered_map<int, int> mp;
        for(auto it: nums){
            mp[it]++;
        }
        int ans = 0;
        for(auto it: mp){
            if(it.second == 1){
                ans = it.first;
            }
        }
        return ans;
    }
};