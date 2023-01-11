class Solution {
public:
    int minTime(int n, vector<vector<int>>& edges, vector<bool>& hasApple) {
        //make a visited array and initialize all elements with false
        vector<bool> vis(n, false);
        
        //make a adjacency list(graph)
        vector<vector<int>> adj(n);
        for(auto it: edges){
            adj[it[0]].push_back(it[1]);
            adj[it[1]].push_back(it[0]);
        }
        
        vis[0] = true;
        return dfs(0, n, adj, hasApple, vis);
    }
    
    int dfs(int start, int n, vector<vector<int>>& adj, vector<bool>& hasApple, vector<bool>& vis){
        int time = 0, time1;
        
        //traverse the nodes 
        for(auto it: adj[start]){
            if(!vis[it]){
                vis[it] = true;
                time1 = dfs(it, n, adj, hasApple, vis);
                
                if(time1 != 0 || hasApple[it]){
                    time += (time1 + 2);
                }
            }
        }
        return time;
    }
};