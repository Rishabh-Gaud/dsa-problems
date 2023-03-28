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
        ListNode* dummy  = new ListNode(-1);
        ListNode* d = dummy;
        int carry =0;
        
        while(l1&&l2){
            int sum = l1->val+l2->val+carry;
            d->next = new ListNode(sum%10);
            d = d->next;
            carry = sum/10;
            l1= l1->next;
            l2 = l2->next;
        }
        while(l1){
            int sum = l1->val+carry;
            d->next = new ListNode(sum%10);
            d = d->next;
            carry = sum/10;
            l1= l1->next;
        }
        while(l2){
            int sum = l2->val+carry;
            d->next = new ListNode(sum%10);
            d = d->next;
            carry = sum/10;
            l2= l2->next;
        }
        if(carry)d->next =new ListNode(1);
        return dummy->next;
    }
};