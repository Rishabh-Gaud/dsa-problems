#include<iostream>
using namespace std;

#include <queue>
struct node{
	int data;
	node* left;
	node* right;
	node(int val){
		data =val;
		left=NULL;
		right= NULL;
	}
};

void sumReplace(struct node * root ){
	if(root==NULL)return;
	sumReplace(root->left);
	sumReplace(root->right);
	if(root->left!=NULL){
		root->data+=root->left->data;
	}
	if(root->right!=NULL){
		root->data+=root->right->data;
	}

}
void preorder(struct node* root ){
	if(root==NULL)return;
	cout<<root->data<<" ";
	preorder(root->left);
	preorder(root->right);

}


void levelTraversal(struct node* root){
	if(root==NULL)return ;
	queue<struct node*>q;
	q.push(root);
	q.push(NULL);
	while(!q.empty()){
		struct node* head = q.front();

		q.pop();
		if(head!=NULL){
			cout<<head->data<<" ";

			if(head->left){
				q.push(head->left);
			}
			if(head->right){
				q.push(head->right);
			}
		}
		else if(!q.empty()){
			q.push(NULL); 			
		}
	}
}

int main(){
	struct node* root = new node(1);
	root->left = new node(2);
	root->right = new node(3);
	root->left->left = new node(4);
	root->left->right = new node(5);
	root->right->left = new node(6);
	root->right->right = new node(7);
	levelTraversal(root);
	cout<<"\n";
	sumReplace(root);
	levelTraversal(root);
	cout<<"\n";
	



	return 0;
}