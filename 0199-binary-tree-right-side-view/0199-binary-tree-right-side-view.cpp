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
    vector<int> rightSideView(TreeNode* root) {
        //take a queue , helper vector, output vector
        vector<int> out;
        queue<TreeNode*> q;
        q.push(root);
        if(!root){
            return out;
        }
        while(!q.empty()){
            vector<int> helper;
            int n = q.size();
            for(int i = 0; i<n;i++){
                TreeNode* node = q.front();
                q.pop();
                helper.push_back(node->val);
                if(node->left)  q.push(node->left);
                if(node->right)  q.push(node->right);
            }
            
            //copy the last element of helper vector in th out vector bcz it's the right side element
            out.push_back(helper[n-1]);
        }
        return out;
    }
};