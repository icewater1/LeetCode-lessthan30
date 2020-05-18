/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution
{
public:
    bool L1isLonger (ListNode* l1, ListNode* l2)
    {
        ListNode* ptr1 = l1;
        ListNode* ptr2 = l2;
        int lenL1,lenL2 = 0;
        
        while (ptr1 != nullptr && ptr2 != nullptr)
        {
            ptr1 = ptr1->next;
            ptr2 = ptr2->next;
        }
        
        if(ptr1 == nullptr && ptr2 != nullptr)
        {
            return false;
        }
        else
        {
            return true;
        }
    }

    void sum(ListNode* l1, ListNode* l2, ListNode* result)
    {
        ListNode* ptr = result;
        int carry = 0;
        
        while(l1!=nullptr)
        {
            int val1,val2 = 0;
            
            val1 = l1->val;
            l1 = l1->next;
            
            if(l2 != nullptr)
            {
                val2 = l2->val;
                l2 = l2->next;
            }
            else
            {
                val2 = 0;
            }
            
            int sum = val1+val2;
            ptr->val += sum;
            carry = ptr->val/10;
            ptr->val %= 10;

            if(l1!=nullptr || carry != 0)
            {
                ptr->next = new ListNode(carry);
                ptr = ptr->next;
            }
        }
    }
    
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2)
    {
        ListNode* result = new ListNode(0);
        ListNode* ptr = result;
        
        if(L1isLonger(l1,l2))
        {
            sum(l1,l2,result);
        }
        else
        {
            sum(l2,l1,result);
        }
        
        return result;
    }
};
