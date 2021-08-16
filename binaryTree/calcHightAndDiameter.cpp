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

int calcHight(struct node* root){

	if(root==NULL)return 0;
	int lhight = calcHight(root->left);
	int rhight = calcHight(root->right);
	return max(lhight,rhight)+1;
}
int calcDiameter(struct node* root){
	if (root==NULL)
	{
		return 0;
	}
	int lhight = calcHight(root->left);
	int rhight = calcHight(root->right);
	return	max(lhight+rhight+1, max(calcDiameter(root->left), calcDiameter(root->right)));
}

int calcDiameterOptimised(struct node* root ,int *hight){

	if(root==NULL){
		*hight =0;
		return 0;
	}
	int lh=0,rh=0;
	int lDia = calcDiameterOptimised(root->left,&lh);
	int rDia = calcDiameterOptimised(root->right,&rh);
	int currDia = lh+rh+1;
	*hight = max(lh,rh)+1;
	return max(lDia,max(rDia,currDia));

}
int main(){
	struct node* root = new node(1);
	root->left = new node(2);
	root->right = new node(3);
	root->left->left = new node(4);
	root->left->right = new node(5);
	root->right->left = new node(6);
	root->right->right = new node(7);
	int hight=0;
	cout<<calcDiameterOptimised(root, &hight);


	return 0;
}