class Solution {
public:
    vector <string> res;
    void helper(int open, int close, int n, string curr){
        if(curr.length()== n*2){
            res.push_back(curr);
            return;
        }
        if(open < n)
            helper(open +1, close, n, curr + "(");
        if(close < open)
            helper(open, close+1, n, curr + ")");
    }
    vector<string> generateParenthesis(int n) {
        helper(0,0,n,"");
        return res;
    }
};