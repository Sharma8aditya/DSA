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
    ListNode* deleteDuplicates(ListNode* head) {
        if(!head)
            return NULL;
        ListNode* q = head, *p = head->next;
        while(q->next){
            if(q->val == q->next->val){
                p = q->next->next;
                delete(q->next);
                q->next = p;
            }
            else{
                q = q->next;
            }
        }
        return head;
    }
};