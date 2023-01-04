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
    ListNode* rotateRight(ListNode* head, int k) {
        if(!head || !head->next || k==0){
            return head;
            
        }
        
        //compute the length of linked list
        ListNode* curr = head;
        int len = 1;
        while(curr->next && ++len){
            curr = curr->next;
        }
        
        //point last node to first node(head)
        curr->next = head;
        k = k%len;              //if k>= len
        
        //find the (len-k)th node
        k = len - k;
        while(k--){
            curr = curr->next;
        }
        
        head= curr->next;           //set the new head
        curr->next = NULL;
        
        return head;
    }
};