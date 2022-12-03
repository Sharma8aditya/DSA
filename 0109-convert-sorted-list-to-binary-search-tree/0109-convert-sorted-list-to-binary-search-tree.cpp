/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
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
    TreeNode* help(vector<int>& vec, int left, int right){
        if(left > right){
            return NULL;
        }
        int mid = (left + right)/2;
        
        //root node will be the middle element of linked list
        TreeNode* res = new TreeNode(vec[mid]);
        
        //left part will be left subtree
        res->left = help(vec, left, mid-1);
        
        //right part will be right subtree
        res->right = help(vec, mid+1, right);
        
        return res;
         
    }
    
    TreeNode* sortedListToBST(ListNode* head) {
        vector<int> v;
        while (head) {
            v.push_back(head->val);
            head = head->next;
        }
        return help(v, 0, v.size() - 1);
    }
};