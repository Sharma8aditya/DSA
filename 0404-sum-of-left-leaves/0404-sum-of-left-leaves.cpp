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
    int sum = 0;
    int dfs(TreeNode* root, bool value){
        if(root == NULL){
            return sum;
        }
        //traverse through the tree and for left side value is true, for right it's false
        dfs(root->left, true);
        dfs(root->right, false);
        if(root->left == NULL && root->right == NULL && value == true){
            sum += root->val;
        }
        return sum;
        
    }
    
    int sumOfLeftLeaves(TreeNode* root) {
        bool flag = false;
        dfs(root, flag);
        return sum;
    }
};