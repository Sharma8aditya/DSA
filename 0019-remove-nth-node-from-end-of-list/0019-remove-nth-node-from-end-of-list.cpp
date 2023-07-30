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
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        ListNode* dummy = new ListNode();
        dummy->next = head;
        ListNode* p = dummy;
        ListNode* q = dummy;
        
        if(head == NULL){
            return head;
        }
        
        for(int i = 0;i<n;i++){
            p = p->next;
        }
        
        while(p->next){
            q = q->next;
            p = p->next;
            
        }
        q->next = q->next->next;
        
        return dummy->next;
        
    }
    
};