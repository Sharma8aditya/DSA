/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    int maxLevelSum(TreeNode* root) {
        int res = INT_MIN;
        int level = 0;
        int out = 0;
        if(!root){
            return 0;
        }
        
        queue <TreeNode*> q;
        q.push(root);
        
        while(!q.empty()){
            int cnt = q.size();
            int sum = 0;
            level++;
            
            while(cnt--){
                TreeNode* node = q.front();
                q.pop();
                
                sum = sum + node->val;
                if(node->left){
                    q.push(node->left);
                }
                if(node->right){
                    q.push(node->right);
                }
            }
            if(sum > res){
                res = sum;
                out = level;
            }
            
        }
        return out;
    }
};