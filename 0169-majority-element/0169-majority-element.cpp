class Solution {
public:
    int majorityElement(vector<int>& nums) {
        unordered_map<int, int>mp;
        int maxi = nums[0];
        for(int i = 0;i<nums.size();i++){
            mp[nums[i]]++;
        }
        for(auto it: mp){
            if(it.second > mp[maxi]){
                maxi = it.first;
            }
        }
        return maxi;
    }
};