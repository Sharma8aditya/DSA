class Solution {
public:
    int firstMissingPositive(vector<int>& nums) {
       int n = nums.size();
       for(int i = 0;i<n;i++){
           int ele = nums[i];
                     //set element to it's position
           
           if(ele >= 1 && ele <=n){
               int pos = ele - 1;
               if(nums[pos] != ele){
                   swap(nums[pos], nums[i]);
                   i--;
               }
           }
       }
        for(int i = 0;i<n;i++){
            if(i+1 != nums[i]){                //after swapping if the element is not on it's position
                return i+1;
            }
        }
        return n+1;                 //if number is out of the array
    }
};