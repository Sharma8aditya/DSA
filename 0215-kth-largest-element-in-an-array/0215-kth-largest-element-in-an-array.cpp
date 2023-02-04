class Solution {
public:
    int findKthLargest(vector<int>& nums, int k) {
        //take a priority queue(max heap)
        priority_queue<int>pq;
        for(int i = 0;i<nums.size();i++){
            pq.push(nums[i]);
        }
        
        int a = k-1;
        while(a--){
            pq.pop();
        }
        return pq.top();
    }
};