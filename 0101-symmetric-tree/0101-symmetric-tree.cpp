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
        if(root == NULL){
            return false;
        }
       return isSym(root->left, root->right); 
    }
    
    bool isSym(TreeNode* leftroot, TreeNode* rightroot){
        if(!leftroot && !rightroot){
            return true;
        }
        if(!leftroot || !rightroot){
            return false;
        }
        
        if(leftroot->val != rightroot->val){
            return false;
        }
        return isSym(leftroot->left , rightroot->right) && isSym(leftroot->right , rightroot->left);
    }
};