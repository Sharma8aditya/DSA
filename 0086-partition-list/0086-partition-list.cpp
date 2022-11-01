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
    ListNode* partition(ListNode* head, int x) {
        ListNode* left = new ListNode(-1);
        ListNode* right = new ListNode(-1);
        
        //make two new linked list so that we can put data into them 
        ListNode* leftlist = left;     //set leftlist data to left
        ListNode* rightlist = right;
        
        while(head!= NULL){
            if(head->val < x){
                leftlist ->next = head;
                leftlist = leftlist->next;
            }
            else{
                rightlist->next = head;
                rightlist = rightlist->next;
            }
            
            head = head->next;
        }
        
        leftlist->next = right->next;
        rightlist->next = NULL;
        return left->next;
    }
    
};