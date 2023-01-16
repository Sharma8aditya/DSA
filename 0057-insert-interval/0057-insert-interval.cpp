class Solution {
public:
    vector<vector<int>> insert(vector<vector<int>>& intervals, vector<int>& newInterval) {
        vector<vector<int>> ans;
        for(auto &&it: intervals){
            //if newinterval is after the other interval
            if(newInterval[0] > it[1]){
                ans.push_back(it);
            }
            
            //if newinterval is before the other interval
            else if(newInterval[1] < it[0]){
                ans.push_back(newInterval);
                newInterval = it;
                
            }
            
            //if newinterval is in the range
            else{
                
                newInterval[0] = min(newInterval[0], it[0]);
                newInterval[1] = max(newInterval[1], it[1]);
            }
            //ans.push_back(newInterval);
            
        }
        ans.push_back(newInterval);
        return ans;
    }
};