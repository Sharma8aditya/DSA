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
    bool isSymmetric(TreeNode* root) {
        
        if(root == nullptr) return true;
        //move to left andright simultaneously
        return isSymmetric(root->left,root->right);
    }
    
    bool isSymmetric(TreeNode* leftroot,TreeNode* rightroot){
        //return true if both are same
        if(!leftroot && !rightroot)  return true;
        
        if(!leftroot || !rightroot)  return false;
        
        if(leftroot->val != rightroot->val)  return false;
        //if both true return true
        return isSymmetric(leftroot->left, rightroot->right) && isSymmetric(leftroot->right, rightroot->left);
    }
};