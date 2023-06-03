class Solution {
public:
    
    int maxTime = INT_MIN;
    
    int numOfMinutes(int n, int headID, vector<int>& manager, vector<int>& informTime) {
        vector<int> adjlist[n];
        
        //store all ids of employee
        for(int i = 0;i<n;i++){
            if(manager[i]!= -1){
                adjlist[manager[i]].push_back(i);
            }
        }
        
        //push headid to queue
        queue<pair<int, int>>q;
        q.push({headID, 0});
        
        while(!q.empty()){
            pair<int, int> it = q.front();
            q.pop();
            
            int parent = it.first;
            int time = it.second;
            
            maxTime = max(maxTime, time);
            
            for(int adja: adjlist[parent]){
                q.push({adja, time + informTime[parent]});
            }
        }
        return maxTime;
    }
};