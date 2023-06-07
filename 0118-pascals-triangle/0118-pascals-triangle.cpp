class Solution {
public:
    vector<int> ncr(int n){
        long long ans = 1;
        vector<int> store;
        store.push_back(1);
        for(int i = 1;i<n;i++){
            ans = ans * (n-i);
            ans = ans/i;
            store.push_back(ans);
        }
        return store;
    }
    
    vector<vector<int>> generate(int n) {
        vector<vector<int>> res;
        for(int i = 1;i<=n;i++){
            res.push_back(ncr(i));
        }
        return res;
    }
};