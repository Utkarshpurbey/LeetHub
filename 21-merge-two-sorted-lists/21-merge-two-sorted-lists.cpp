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
    ListNode* mergeTwoLists(ListNode* h1, ListNode* h2) {
        if(h1==NULL)
            return h2;
        if(h2==NULL)
            return h1;
       ListNode * temp;
       ListNode *ans=new ListNode(-1);
       temp=ans;
        
        while(h1!=NULL && h2!=NULL)
        {
            if(h1 -> val < h2 -> val)
            {
                ans->next=new ListNode(h1->val);
                ans=ans->next;
                h1=h1->next;
            }
            else
            {
                ans->next=new ListNode(h2->val);
                ans=ans->next;
                h2=h2->next;
            }
        }
        while(h1!=NULL)
        {
            ans->next=new ListNode(h1->val);
                ans=ans->next;
                h1=h1->next;
        }  
        while(h2!=NULL)
        {
            ans->next=new ListNode(h2->val);
                ans=ans->next;
                h2=h2->next;
        }
        return temp->next;
        
    }
};