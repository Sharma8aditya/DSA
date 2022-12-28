class Solution {
public:
    int minStoneSum(vector<int>& piles, int k) {
        priority_queue<int> q;
        
        //store the elements in the queue
        for(int i =0; i<piles.size();i++){
            q.push(piles[i]);
        }
        
        //perform the halving operation on top element of queue and store the element into the queue
        while(k--){
            int temp = q.top();
            q.pop();
            temp = temp - floor(temp/2);
            q.push(temp);
            
        }
        
        //sum of the elements present in the queue
        int sum = 0;
        while(!q.empty()){
            sum += q.top();
            q.pop();
        }
        return sum;
    }
};