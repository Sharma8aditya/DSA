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
    
    //postorder is left, right, node
    
    int postorder(TreeNode* root, vector<int>& x){
        if(root!=0){
            postorder(root->left, x);
            postorder(root->right, x);
            x.push_back(root->val);
        }
        return 0;
    }
    vector<int> postorderTraversal(TreeNode* root) {
        vector<int> x;
        x.clear();
        postorder(root, x);
        return x;
    }
};