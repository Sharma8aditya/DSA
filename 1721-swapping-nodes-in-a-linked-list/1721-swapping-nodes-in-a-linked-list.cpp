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
class Solution {
public:
    ListNode* swapNodes(ListNode* head, int k) {
        ListNode* fast = head;
        ListNode* slow = head;
        ListNode* ans = NULL;
        
        while(--k){
            fast = fast->next;
        }
        
        
        //storig kth node
        ans = fast;
        fast = fast->next;
        
        //traverse n-k nodes to reach kth from last
        while(fast){
            fast = fast->next;
            slow = slow->next;
        }
        
        swap(ans->val, slow->val);
        
        return head;
        
    }
};