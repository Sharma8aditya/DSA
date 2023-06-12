class Solution {
public:
    int canCompleteCircuit(vector<int>& gas, vector<int>& cost) {
        int ans = 0,total = 0;
        // if(accumulate(gas.begin(), gas.end(),0) < accumulate(cost.begin(), cost.end(),0)){
        //     return -1;
        // }
        int n = gas.size();
        int remaining_fuel = 0;
        for(int i = 0;i<n;i++){
            total += gas[i] -cost[i];
            remaining_fuel += gas[i] - cost[i];
            if(remaining_fuel < 0){        //if this condition occurs then that index can't be the answer
                ans = i+1;
                remaining_fuel = 0;
            }
        }
        return total < 0?-1:ans;
    }
};