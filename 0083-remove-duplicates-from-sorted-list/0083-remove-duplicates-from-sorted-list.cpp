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
        //create a new node and assign it's next to head
        ListNode *ans = new ListNode(0);
        ListNode *curr = ans;

        while(head) {
            while(head->next && head -> val == head -> next -> val) head = head -> next;
            curr -> next = head;
            curr = head;
            head = head -> next;
        }
        return ans->next;    }
};