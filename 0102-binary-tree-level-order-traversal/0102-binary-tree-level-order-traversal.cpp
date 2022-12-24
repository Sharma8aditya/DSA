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
    vector<vector<int>> levelOrder(TreeNode* root) {
        vector<vector<int>> ans;
        if(root == NULL){
            return ans;
        }
        queue<TreeNode*> qt;
        qt.push(root);        //push value of root inside the queue
        while(!qt.empty()){
            int n = qt.size();
            vector <int> level;
            for(int i = 0; i<n;i++){           //loop runs according to the number of elements present inside the queue
                TreeNode* node = qt.front();      //set new node to the front element of queue
                qt.pop();
                if(node->left)  qt.push(node->left);         //if node->left is not NULL store it in the queue
                if(node->right)  qt.push(node->right);       //if node->right is not NULL store it in the queue
                
                level.push_back(node->val);       //after the traversal ends store the value of node in level vector
            }
            ans.push_back(level);         //store value of level inside ans vector
        }
        return ans;          
    }
};