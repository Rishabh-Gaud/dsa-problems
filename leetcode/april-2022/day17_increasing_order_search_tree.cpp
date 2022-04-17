/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    TreeNode* curr;
    void in(TreeNode* root){
        if(!root)return;
        in(root->left);
        root->left=NULL;
        curr->right=root;
        curr=root;
        in(root->right);
    }
    TreeNode* increasingBST(TreeNode* root) {
        TreeNode* dummy  = new TreeNode(-1);
        curr=dummy;
        in(root);
        return dummy->right;
        
    }
};
