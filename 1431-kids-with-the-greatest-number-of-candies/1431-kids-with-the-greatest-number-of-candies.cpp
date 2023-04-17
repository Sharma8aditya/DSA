class Solution {
public:
    vector<bool> kidsWithCandies(vector<int>& candies, int extraCandies) {
        int n = candies.size();
        vector<bool> ans;
        int maxi = INT_MIN;
        for(int i = 0;i<n;i++){
            if(candies[i] > maxi){
                maxi = candies[i];
            }
        }
        
        for(int i = 0;i<n;i++){
            ans.push_back(candies[i] + extraCandies >=maxi);
        }
        return ans;
    }
};