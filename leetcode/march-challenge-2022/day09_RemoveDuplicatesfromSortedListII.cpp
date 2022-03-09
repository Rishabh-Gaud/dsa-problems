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
    ListNode* deleteDuplicates(ListNode* head) {
        ListNode* h = head;
        if(head==NULL||head->next==NULL)return head;
        unordered_map<int,int>mp;
        while(h){
            mp[h->val]++;
            h = h->next;
        }
        h = head;
        ListNode* dummy = new ListNode(-1);
        ListNode* d = dummy;
        while(h){
            if(mp[h->val]==1){
                d->next =h;
                d=h;
                
            }
            h = h->next;
        }
        d->next = NULL;
        return dummy->next;
    }
};
