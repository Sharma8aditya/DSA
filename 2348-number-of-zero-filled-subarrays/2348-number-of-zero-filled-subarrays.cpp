#define ll long long
class Solution {
    
public:
    long long zeroFilledSubarray(vector<int>& nums) {
        ll count = 0;
        ll ans = 0;
        ll n = nums.size();
        for(int i = 0;i<n;i++){
            if(nums[i] == 0){
                count++;
            }
            else{
                count = 0;
            }
            ans += count;
        }
        return ans;
    }
};