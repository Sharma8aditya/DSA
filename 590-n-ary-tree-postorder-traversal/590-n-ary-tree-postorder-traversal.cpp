/*
// Definition for a Node.
class Node {
public:
    int val;
    vector<Node*> children;

    Node() {}

    Node(int _val) {
        val = _val;
    }

    Node(int _val, vector<Node*> _children) {
        val = _val;
        children = _children;
    }
};
*/

class Solution {
    vector <int> ans;
public:
    int post(Node* root){
        if(root!=0){
            for(auto i: root->children){
                post(i);
            }
            ans.push_back(root->val);
        }
        return 0;
    }
    vector<int> postorder(Node* root) {
        ans.clear();
        post(root);
        return ans;
    }
};