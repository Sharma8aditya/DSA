class Solution {
public:
    vector<vector<int>> mergeArrays(vector<vector<int>>& nums1, vector<vector<int>>& nums2) {
        vector<vector<int>> ans;
        map<int, int> mp;              //already merge elements in sorted order
        
        //map check if the key already exist in map if yes it'll add the value to the existing key
        for(auto it : nums1){
            mp[it[0]] += it[1];
        }
        for(auto it: nums2){
            mp[it[0]] += it[1];
        }
        for(auto it: mp){
            ans.push_back({it.first, it.second});
        }
        return ans;
    }
};