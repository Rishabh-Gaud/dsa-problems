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
    ListNode* rotateRight(ListNode* head, int k) {
       ListNode* newH=head;
        ListNode* curr = head;
        int len=1;
        if(head==NULL)return NULL;
        while(curr->next){
            len++;
            curr=curr->next;
        }
        curr->next = head;
        k%=len;
        for(int i=0;i<len-k;i++){
            curr=curr->next;
        }
        newH = curr->next;
        curr->next=NULL;
        return newH;
        
        
    }
};
