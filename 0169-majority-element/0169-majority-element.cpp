class Solution {
public:
    int majorityElement(vector<int>& nums) {
        unordered_map <int, int> mp;
        int maxi = nums[0];
        for(int i = 0;i<nums.size();i++){
            mp[nums[i]]++;
        }
        
        for(auto x: mp){
            if(x.second > mp[maxi]){
                maxi = x.first;
            }
        }
        return maxi;
    }
};