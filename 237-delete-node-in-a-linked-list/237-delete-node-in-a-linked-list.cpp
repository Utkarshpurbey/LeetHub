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
    void deleteNode(ListNode* node) {
        ListNode *curr=node;
        curr->val=curr->next->val;
        ListNode *temp=curr->next->next;
        ListNode *t=curr->next;
        curr->next=temp;
        delete(t);
    }
};