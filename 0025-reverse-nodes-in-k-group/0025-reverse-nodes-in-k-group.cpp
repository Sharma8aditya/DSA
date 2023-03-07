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
    int listlen(ListNode* head){
        int len = 0;
        while(head){
            ++len;
            head = head->next;
        }
        return len;
    }
    
    ListNode* reverseKGroup(ListNode* head, int k) {
        
        if(!head || !head->next){
            return head;
        }
        
        
        ListNode* dummy = new ListNode(0);
        dummy->next = head;
        
        ListNode* pre = dummy;
        ListNode* curr, *nex;
        
        int len = listlen(head);
        
        
        while(len >= k){
            curr = pre->next;
            nex = curr->next;
            
            for(int i =1 ;i<k;i++){
                curr->next = nex->next;
                nex->next = pre->next;
                pre->next = nex;
                nex = curr->next;
            }
            pre = curr;
            len -= k;
        }
        return dummy->next;
        
    }
};