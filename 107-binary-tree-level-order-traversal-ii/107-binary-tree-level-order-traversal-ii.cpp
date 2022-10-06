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
    vector<vector<int>> levelOrderBottom(TreeNode* root) {
        vector<vector<int>> ans;
        if(root==NULL)
            return ans;
        queue<TreeNode*> Q;
        Q.push(root);
        while(!Q.empty())
        {
            int n = Q.size();
            vector<int> res(n);
            for(int i=0;i<n;i++)
            {
                TreeNode* temp=Q.front();
                res[i]=temp->val;
                
                if(temp->left)
                    Q.push(temp->left);
                if(temp->right)
                    Q.push(temp->right);
                Q.pop();
            }
            ans.push_back(res);
        }
        reverse(ans.begin(),ans.end());
        return ans;
    }
};