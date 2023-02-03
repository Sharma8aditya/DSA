class Solution {
public:
    long long maxKelements(vector<int>& nums, int k) {
        priority_queue<int>pq;
        for(auto it: nums){
            pq.push(it);
        }
        
        long long sum = 0;
        while(k--){
            long long maxele = pq.top();
            pq.pop();
            long long newmax;
            if(maxele%3 == 0){
                newmax = maxele/3;
            }
            else{
                newmax = maxele/3 + 1;
            }
            
            sum += maxele;
            pq.push(newmax);
        }
        return sum;
    }
};