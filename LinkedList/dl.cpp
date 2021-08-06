#include<iostream>
using namespace std;

class node
{
public:
	int data;
	node* next;
	node* prev;
	node(int val){
		data =val;
		next=NULL;
		prev = NULL;
	}
	
};
 
void insertAtHead(node* &head , int val){
	node* n =new node(val);
	n->next=head;
	if(head!=NULL){
		head->prev=n;
	}
	head =n;
}

void insertAtTail(node* &head, int val){
	node* n= new node(val);
	node* temp = head;
	while(temp->next!=NULL){
		temp=temp->next;
	}
	temp->next=n;
	n->prev=temp;
}

void Display(node* head){
	while(head!=NULL){
		cout<<head->data<<" -> ";
		head=head->next;
	}
	cout<<"NULL"<<endl;
}
void insertAtAny(node* &head,int pos, int val){
	node* n = new node(val);
	node* temp=head;
	if(head==NULL){
		n->next=head;
		head =n;
	}

	while(temp->next!=NULL){
		if(temp->data==pos){
			n->next = temp->next;
			temp->next = n;
			n->prev = temp;
		}
		temp=temp->next;
	}
}

void DeleteAtHead(node* &head){
	node* temp =head;
	head=head->next;
	head->prev=NULL;
	delete temp;
}

void DeleteAtAny(node* &head, int pos){
	node* temp = head;
	int cnt=1;
	if(pos ==1){
		DeleteAtHead(head);
		return;
	}

	while(temp->next!=NULL && cnt!=pos){
		temp=temp->next;
		cnt++;
	}
			temp->prev->next=temp->next;
			if(temp->next!=NULL){

			temp->next->prev=temp->prev;
	
			}

			delete temp;
}

int main(){
	node* head=NULL;
	insertAtHead(head,3);
	insertAtHead(head,2);
	insertAtHead(head,1);
	insertAtTail(head,4);
	insertAtAny(head,1,5);
	// DeleteAtHead(head);
	// DeleteAtHead(head);
	DeleteAtAny(head,2);
	Display(head);
	return 0;
}