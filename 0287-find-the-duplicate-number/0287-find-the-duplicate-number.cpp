class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        //linked list cycle method
        
        int slow = nums[0];
        int fast = nums[0];
        
        do{
            slow = nums[slow];
            fast = nums[nums[fast]];
            
        }
        while(slow!= fast);         //until slow and fast are not collided
        
        fast = nums[0];
        while(slow != fast){
            slow = nums[slow];
            fast = nums[fast];
        }
        return slow;
    }
};