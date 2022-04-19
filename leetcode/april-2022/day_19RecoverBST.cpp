class Solution {
public:
    vector<int>v;
    void inorder(TreeNode* root){
        if(root==NULL)return;
        inorder(root->left);
        v.push_back(root->val);
        inorder(root->right);
    }
    int pos=0;
    void arrange(TreeNode* root){
        if(root==NULL)return;
        arrange(root->left);
        root->val = v[pos++];
        arrange(root->right);
    }
    void recoverTree(TreeNode* root) {
        inorder(root);
        sort(v.begin(),v.end());
        arrange(root);
    }
};
