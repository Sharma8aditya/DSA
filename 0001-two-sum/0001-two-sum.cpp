class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int> result;
        unordered_map<int, int> mp;
        
        for(int i = 0; i<nums.size();i++){
            int value = target - nums[i];
            if(mp.find(value)!= mp.end()){
                result.push_back(mp.find(value)->second);
                result.push_back(i);
                break;
            }
            mp.insert(pair<int, int>(nums[i],i));
        }
        return result;
    }
};