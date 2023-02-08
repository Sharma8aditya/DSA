class Solution {
public:
    int jump(vector<int>& nums) {
        //take 3 variables and take the most optimal solution
        int farthest = 0, jumps = 0, curr = 0;
        
        //itrate over the array 
        for(int i = 0;i<nums.size() - 1;i++){
            farthest = max(farthest, nums[i] + i);           //farthest you can go is nums[i] + i
            if(i == curr){
                curr = farthest;
                jumps++;
            }
        }
        return jumps;
    }
};