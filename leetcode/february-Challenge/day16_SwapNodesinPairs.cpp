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
    ListNode* swapPairs(ListNode* head) {
        ListNode* dummy = new ListNode(-1);
        ListNode* d=dummy,*h1=head,*h2;
        if(!h1||!h1->next)return head;
        while(h1&&h1->next){
            h2=h1->next;
            d->next=h2;
            d=h2;
            h2=h2->next;
            d->next=h1;
            d=h1;
            h1->next=h2;
            h1=h2;
        }
        return dummy->next;
        
    }
};
