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
void leveorder(struct node*  root){
	if(root==NULL)return;
	queue<struct node*>q;
	q.push(root);
	q.push(NULL);
	while(!q.empty()){
		struct node* n = q.front();
		q.pop();
		if(n!=NULL){
			cout<<n->data<<" ";
			if(n->left)
				q.push(n->left);
			if(n->right)
				q.push(n->right);

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
	
	leveorder(root);


	return 0;
}