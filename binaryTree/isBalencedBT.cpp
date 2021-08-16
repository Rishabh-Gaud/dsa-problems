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

bool isBalencedOptimised(struct node* root,int *hight){
		int l=0,r=0;
		if(root==NULL){
			*hight =0;
			return 1;
		}
		if(isBalencedOptimised(root->left,&l)==false)return false;
		
		if(isBalencedOptimised(root->right,&r)==false)return false;
		*hight = max(l,r)+1;
		if(abs(l-r)<=1){
			return 1;
		}else{
			return 0;
		}

}


int calcHight(struct node * root){
	if(root==NULL){
		return 0;
	}
	int lh=calcHight(root->left);
	int rh = calcHight(root->right);
	return max(lh,rh)+1;
}

bool isBalenced(struct node* root){
	if(root==NULL)return true;

	if(isBalenced(root->left)==false){
		return false;
	}
	if(isBalenced(root->right)==false){
		return false;
	}
	int lh= calcHight(root->left);
	int rh = calcHight(root->right);
	if(abs(lh-rh)<=1){
		return 1;
	}else{
		return 0;
	}

}

int main(){
	struct node* root = new node(1);
	root->left = new node(2);
	// root->right = new node(3);
	root->left->left = new node(4);
	// root->left->right = new node(5);
	// root->right->left = new node(6);
	// root->right->right = new node(7);
// cout<<isBalenced(root);
	int hight=0;
	cout<<isBalencedOptimised(root,&hight);

	return 0;
}