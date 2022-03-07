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
    ListNode* mergeTwoLists(ListNode* l1, ListNode* l2) {
        ListNode* dummy  =  new ListNode(-1);
        ListNode* d = dummy;
        while(l1!=NULL&&l2!=NULL){
            if(l1->val<l2->val){
                d->next = l1;
                d=l1;
                l1=l1->next;
            }else{
                d->next = l2;
                d = l2;
                l2=l2->next;
            }
        }
        while(l1!=NULL){
            d->next  = l1;
            d = l1;
            l1=l1->next;
        }
        while(l2!=NULL){
            d->next = l2;
            d=l2;
            l2=l2->next;
        }
        return dummy->next;
    }
};
