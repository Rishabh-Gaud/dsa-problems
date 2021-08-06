#include <bits/stdc++.h>
using namespace std;

class node
{
public:
    int data;
    node* next;
    node(int val){
         data=val;
         next = NULL;
    }
};

void insertAtTail(node* &head,int val){
    node* n= new node(val);
    if(head==NULL){
        head =n;
        return ;
    }

    node* temp = head;
    while(temp->next!=NULL){
        temp=temp->next;
    }
    temp->next=n;


}
void insertAtHead(node* &head, int val){
    node * n= new node(val);
    n->next=head;
    head = n;
}

void Display(node* head){
    while(head!=NULL){
        cout<<head->data<<" -> ";
        head=head->next;
    }
    cout<<"NULL"<<endl;
}
void insertAtAny(node* &head, int pos , int val){
    node* n =  new node(val);
    node* temp = head;
    while(temp!=NULL){
        if(temp->data == pos){
            
            n->next=temp->next;
            temp->next=n;
        }
        temp=temp->next;
    }
}

bool Search(node* head , int val){
    while(head!=NULL){
        if(head->data==val){
            return true;
        }
        head=head->next;
    }
    return 0;
}
void DeleteAtHead(node* &head){
    node* todelete =head;
    head = head->next;
    delete todelete;
}

void DeleteAtAny(node* &head, int pos){
    node* temp = head;
    node* todelete;
    if(head==NULL){
        return;
    }
    if(head->next==NULL){
        head=head->next;
        delete temp;
        return;
    }
    while(temp!=NULL){
        if(temp->data==pos){
            todelete=temp->next;
            temp->next=temp->next->next;
            return;
        }
        temp=temp->next;
    }
}

node* reverse(node* &head){
    node* curr = head;
    node* prev =  NULL;
    node* nextptr;
    while(curr!=NULL){
        nextptr = curr->next;
        curr->next=prev;
        prev=curr;
        curr=nextptr;
    }
    return prev;
}
node* reversek(node* &head, int k){
    node* curr = head;
    node* prev = NULL;
    node*  nextptr;
    int cnt=0;
    while(curr!=NULL && cnt<k){
        nextptr=curr->next;
        curr->next=prev;
        prev=curr;
        curr=nextptr;
        cnt++;
    }
    if(nextptr!=NULL){
        head->next=reversek(nextptr,k);
    }
    return prev;
}
void makeCycle(node* &head, int pos){
    node* temp=head;
    node* n;
    while(temp->next!=NULL){
        if(temp->data==pos){
            n=temp;
        }
        temp = temp->next;

    }
    temp->next=n;
}

bool detectCycle(node* head){
    node* fast = head;
    node* slow = head;
    while(fast!=NULL && fast->next!=NULL){

        fast=fast->next->next;
        slow=slow->next;
        if(fast==slow){
            return 1;
        }

    }
    return 0;
}
void removeCycle(node* &head){
     node* fast = head;
    node* slow = head;
    do
    {
        fast=fast->next->next;
        slow=slow->next;
    } while (fast!=slow);
    fast=head;
    while(fast->next!=slow->next){

        fast=fast->next;
        slow=slow->next;
    }
    slow->next=NULL;
}


int main(){
    node* head =NULL;
    insertAtTail(head,1);
    insertAtTail(head,2);
    insertAtTail(head,3);
    insertAtHead(head,0);
    insertAtTail(head,4);
    insertAtAny(head,4,5);
    // cout<<Search(head,41 );
    // DeleteAtAny(head,4);
    Display(head);
    // node* newhead = reversek(head,4);
    makeCycle(head,3);
    cout<<detectCycle(head);
    removeCycle(head);
    cout<<detectCycle(head);
    // Display(newhead); 
}
