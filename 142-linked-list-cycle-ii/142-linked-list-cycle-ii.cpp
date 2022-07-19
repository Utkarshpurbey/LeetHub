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

    
    ListNode *detectCycle(ListNode *head)
    {
      
        ListNode * slow=head;
        ListNode * fast=head;
        while(fast!=NULL && fast->next!=NULL)
        {
            slow=slow->next;
            fast=fast->next->next;
            if(slow==fast)
                break;
        }
          if(fast==NULL || fast->next==NULL)
            return NULL;
        ListNode * pt1 = head;
        ListNode * pt2 = slow;
        while(pt1!=pt2)
        {
             pt1=pt1->next;
             pt2=pt2->next;
        }
        return pt1;
        
        
    }
};