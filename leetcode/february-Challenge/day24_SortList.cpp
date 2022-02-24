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
    ListNode* sortList(ListNode* head) {
        if(!head||!head->next)return head;
        ListNode* fast = head->next->next;
        ListNode* slow = head;
        while(fast&&fast->next){
            fast=fast->next->next;
            slow = slow->next;
        }
        ListNode* r = sortList(slow->next);
        slow->next=NULL;
        ListNode* l = sortList(head);
        return merge(l,r);
    }
    ListNode* merge(ListNode* n1,ListNode* n2){
        if(!n1)return n2;
        if(!n2)return n1;
        ListNode* dummy = new ListNode(-1);
        ListNode* d = dummy;
        while(n1&&n2){
            if(n1->val<n2->val){
                d->next = n1;
                d = n1;
                n1=n1->next;
            }else{
                d->next = n2;
                d=n2;
                n2=n2->next;
            }
        }
        while(n2){
            d->next = n2;
                d=n2;
                n2=n2->next;
        }
        
        while(n1){
            d->next = n1;
                d=n1;
                n1=n1->next;
        }
        return dummy->next;
        
        
    }
};
