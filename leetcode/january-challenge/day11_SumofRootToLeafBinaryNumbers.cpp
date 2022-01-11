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
    int ans;
    
    void solve(TreeNode* root,int data){
        if(root==NULL){
            return ;
        }
        if(root&&root->left==NULL&&root->right==NULL){
            ans+=data*2+root->val;
            return ;
        }
        
        solve(root->left,data*2+root->val);
        solve(root->right,data*2+root->val);
    }
    
    int sumRootToLeaf(TreeNode* root) {
        ans=0;
        solve(root,0);
        return ans;
    }
}; 





