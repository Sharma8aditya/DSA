class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector <int> result;
        unordered_map<int, int>m;
        
        for(int i=0;i<nums.size();i++){
            int value = target - nums[i];
            if (m.find(value)!=m.end()){
                result.push_back(m.find(value)->second);
                result.push_back(i);
                break;
            }
            m.insert(pair<int,int>(nums[i],i));
        }
        return result;
    }
};