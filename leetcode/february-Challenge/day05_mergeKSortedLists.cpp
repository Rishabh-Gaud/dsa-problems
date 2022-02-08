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
    
    ListNode* merge(ListNode* node1,ListNode* node2){
        if(node2==NULL)return node1;
        ListNode* dummy = new ListNode(-1);
        ListNode* d=dummy;
        while(node1!=NULL&&node2!=NULL){
            if(node1->val>node2->val){
                d->next=node2;
                d=node2;
                node2=node2->next;
            }else{
                d->next=node1;
                d=node1;
                node1=node1->next;
            }
        }
        while(node1){
                d->next=node1;
                d=node1;
                node1=node1->next;
        }
        while(node2){
                d->next=node2;
                d=node2;
                node2=node2->next;
        }
        return dummy->next;
    }
    ListNode* mergeKLists(vector<ListNode*>& lists) {
       if(lists.size()==0)return NULL;
        if(lists.size()==1)return lists[0];
        ListNode* node1 = lists[0];
        for(int i=1;i<lists.size();i++){
           node1= merge(node1,lists[i]);
        }
        return node1;
    }
};
