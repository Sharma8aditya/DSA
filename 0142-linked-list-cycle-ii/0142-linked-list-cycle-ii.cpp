/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    ListNode *detectCycle(ListNode *head) {
        ListNode* slow = head;
        ListNode* fast = head;
        int ans = 0;
        while(fast && fast->next){
            slow = slow->next;
            fast = fast->next->next;
            
            //loop present
            if(slow == fast){
                ans = 1;
                break;
            }
   
        }
        
        //if no loop present
        if(ans == 0){
            return NULL;
        }
        fast = head;
        while(fast!= slow){
            fast = fast->next;
            slow = slow->next;
        }
        return fast;
    }
};