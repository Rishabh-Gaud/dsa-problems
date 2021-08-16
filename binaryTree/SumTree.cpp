// Given a Binary Tree. Return 1 if, for every node X in the tree other than the leaves, its value is equal to the sum of its left subtree's value and its right subtree's value. Else return 0.

// An empty tree is also a Sum Tree as the sum of an empty tree can be considered to be 0. A leaf node is also considered a Sum Tree.

// Input:
//     3
//   /   \    
//  1     2

// Output: 1

class Solution
{
    public:
    int Sum(Node* root){
        if(root==NULL)return 0;
        return Sum(root->left)+Sum(root->right)+root->data;
    }
    bool isSumTree(Node* root)
    {
         if(root==NULL)return 1;
         if(root->left==NULL&&root->right==NULL)return 1;
         
         int l=Sum(root->left);
         int r=Sum(root->right);
         
         
         if(l+r==root->data&&isSumTree(root->left)&&isSumTree(root->right))return true;
         return false;
        
    }
};
