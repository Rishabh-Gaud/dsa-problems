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

int sumAtLevelK(struct node* head,int k){
	if(head==NULL)return -1;

	queue<struct node*>q;
	q.push(head);
	q.push(NULL);
	int level=0;
	int sum=0;
	while(!q.empty()){
		struct node* root = q.front();
		q.pop();
		if(root!=NULL){
			if(level==k){
				sum+=root->data;

			}
			if(root->left)
				q.push(root->left);
			if(root->right)
				q.push(root->right);
		}
		else if(!q.empty()){
			level++;
			q.push(NULL);
		}

	}
	return sum;


}


int main(){
	struct node* root = new node(1);
	root->left = new node(2);
	root->right = new node(3);
	root->left->left = new node(4);
	root->left->right = new node(5);
	root->right->left = new node(6);
	root->right->right = new node(7);
	
	cout<<sumAtLevelK(root,2)<<endl;


	return 0;
}