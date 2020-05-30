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
    ListNode* mergeTwoLists(ListNode* l1, ListNode* l2) {
        if((!l1 && !l2) || (l1 && !l2)) return l1;
        else if(l2 && !l1) return l2;
        else
        {
            ListNode* p1 = l1, *p2 = l2;
            int head = min(p1->val,p2->val);
            if(p1->val <= p2->val) p1 = p1->next;
            else p2 = p2->next;
            
            ListNode* res = new ListNode(head), *p = res;
            while(p1 && p2)
            {
                int a = p1->val, b = p2->val;
                if( a < b )
                {
                    p1 = p1->next;
                    p->next = new ListNode(a);
                }
                else if(a>=b)
                {
                    p2 = p2->next;
                    p->next = new ListNode(b);
                }
                p = p->next;
            }
            p->next = (p1 && !p2)? p1:(!p1 && p2)?p2:nullptr;
            return res;
        }
    }
};
