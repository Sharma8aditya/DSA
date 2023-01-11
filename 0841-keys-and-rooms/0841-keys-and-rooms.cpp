class Solution {
public:
    bool canVisitAllRooms(vector<vector<int>>& rooms) {
        int n = rooms.size();
        
        //create a visited array and intialized it with 0
        vector<int> vis(n,0);
        
        dfs(0, rooms, vis);
        
        for(auto it: vis){
            if(!it){
                return false;
            }
        }
        return true;
    }
    
    void dfs(int node, vector<vector<int>>& rooms, vector<int>& vis){
        vis[node] = 1;
        for(auto it: rooms[node]){
            if(!vis[it]){
                dfs(it, rooms, vis);
            }
        }
    }
};