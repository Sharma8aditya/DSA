class Solution {
public:
    void dfs(vector<vector<int>>& graph, vector<vector<int>>& ans, vector<int>& path, int start){
        
        //traverse all the neighbours
        for(int i = 0; i<graph[start].size(); i++){
            path.push_back(graph[start][i]);
            
            //check if neighbour is the destination
            if(graph[start][i] == graph.size()-1){
                ans.push_back(path);
                
            }
            dfs(graph, ans, path, graph[start][i]);
            path.pop_back();
        }
    }
    
    vector<vector<int>> allPathsSourceTarget(vector<vector<int>>& graph) {
        vector<int> path;
        path.push_back(0);
        vector<vector<int>>ans;
        dfs(graph, ans, path, 0);
        return ans;
    }
};