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
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
     
        ListNode* dummy = new ListNode(-1);
        ListNode* res = dummy;
        int carry=0;
        while(l1||l2){
            int x = l1!=NULL?l1->val:0;
            int y=l2!=NULL?l2->val:0;
            int sum = x+y+carry;
            ListNode* d = new ListNode(sum%10);
            carry = sum/10;
            res->next = d;
            res=d;
            if(l1)l1=l1->next;
            if(l2)l2=l2->next;
        }
        if(carry){
             ListNode* d = new ListNode(carry);
            res->next = d;
            res=d;
            
        }
        return dummy->next;
    }
};
