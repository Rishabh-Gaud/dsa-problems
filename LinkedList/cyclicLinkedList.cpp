#include<iostream>
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
	node* n = new node(val);
	node* temp=head;
	if(head==NULL){
		head=n;
		head->next=head;
		return;
	}
	while(temp->next!=head){
		temp=temp->next;
	}
	temp->next=n;
	n->next=head;

}

void DeleteAtHead(node* &head){
	node* temp=head;
	if( head->next==head){
		head =NULL;
		return ;
	}
	node* todelete=head;
	while(temp->next!=head){
		temp=temp->next;
	}
	temp->next=head->next;
	head=head->next;
	delete todelete;

}

void Display(node* head){
	int cnt=20;
    while(head!=NULL && cnt--){
        cout<<head->data<<" -> ";
        head=head->next;
    }
    cout<<"NULL"<<endl;
}


int main(){
	node* head=NULL;
	insertAtTail(head,1);
	// insertAtTail(head,2);
	// insertAtTail(head,3);
	// insertAtTail(head,4);
	DeleteAtHead(head);
	Display(head);



	return 0;
}