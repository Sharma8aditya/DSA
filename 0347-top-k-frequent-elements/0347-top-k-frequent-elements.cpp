class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        vector<int> ans;
        int count = 0;
        unordered_map<int, int>mp;
        for(int i = 0;i<nums.size();i++){
            mp[nums[i]]++;
        }
        
        //create a multimap
        multimap<int,int, greater<int>>mp2;
        for(auto it:mp){
            mp2.insert({it.second,it.first});
        }
        
        for(auto it: mp2){
            count++;
            if(count > k){
                return ans;
            }
            ans.push_back(it.second);
        }
        return ans;
    }
};