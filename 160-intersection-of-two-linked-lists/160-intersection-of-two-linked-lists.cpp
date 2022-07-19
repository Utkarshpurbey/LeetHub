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
    ListNode *getIntersectionNode(ListNode *h1, ListNode *h2) {
        
        unordered_set<ListNode *> s;
        ListNode *curr= h1;
        while(curr!=NULL)
        {
            s.insert(curr);
            curr=curr->next;
        }
        
        ListNode * temp=h2;
        
        while(temp!=NULL)
        {
            if(s.find(temp)!=s.end())
            {
                return temp;
            }
            temp=temp->next;
        }
        return NULL;
        
    }
};