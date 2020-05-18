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
        bool firNull = l1 == nullptr;
        bool secNull = l2 == nullptr;
        if((firNull && secNull) || (!firNull && secNull))
        {
            return l1;
        }
        else if(!secNull && firNull)
        {
            return l2;

        }
        else
        {
            ListNode* p1 = l1;
            ListNode* p2 = l2;
            int head = 0;
            if(p1->val <= p2->val)
            {
                head = p1->val;
                p1 = p1->next;
            }
            else
            {
                head = p2->val;
                p2 = p2->next;
            }
            ListNode* res = new ListNode(head);
            ListNode* p = res;
            while(p1 != nullptr && p2 != nullptr)
            {
                int a = p1->val, b = p2->val;
                if( a <= b )
                {
                    p1 = p1->next;
                    p->next = new ListNode(a);
                    if(a == b)
                    {
                        p2 = p2->next;
                        p = p->next;
                        p->next = new ListNode(b);
                    }
                }
                else
                {
                    p2 = p2->next;
                    p->next = new ListNode(b);
                }
                p = p->next;
            }
            if(p1 != nullptr && p2 == nullptr)
            {
                p->next = p1;
            }
            if(p1 == nullptr && p2 != nullptr)
            {
                p->next = p2;
            }
            return res;
        }
    }
};