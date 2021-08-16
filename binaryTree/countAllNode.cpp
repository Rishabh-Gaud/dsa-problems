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
int count1(struct node* root){
	static int cnt=0;
	if(root==NULL)return 0;
	if(root!=NULL)cnt++;
	count1(root->left);
	count1(root->right);
	return cnt;
}

int allNodeSum1(struct node* root){
	static int cnt=0;
	if(root==NULL)return 0;
	if(root!=NULL)cnt+=root->data;
	allNodeSum1(root->left);
	allNodeSum1(root->right);
	return cnt;
}
int count(struct node* root){
	if(root==NULL)return 0;
	return count(root->left)+count(root->right)+1;
}

int allNodeSum(struct node* root){
	if(root==NULL)return 0;
	return allNodeSum(root->left)+allNodeSum(root->right)+root->data;
}
int main(){
	struct node* root = new node(1);
	root->left = new node(2);
	root->right = new node(3);
	root->left->left = new node(4);
	root->left->right = new node(5);
	root->right->left = new node(6);
	root->right->right = new node(7);
	cout<<count(root)<<" "<<allNodeSum(root);


	return 0;
}