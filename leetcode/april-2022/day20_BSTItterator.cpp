
class BSTIterator {
public:
    vector<int>v;
    int pos;
    void inorder(TreeNode* root){
        if(root==NULL)return;
        inorder(root->left);
        v.push_back(root->val);
        inorder(root->right);
    }
    BSTIterator(TreeNode* root) {
        inorder(root);
         pos=0;
    }
    
    int next() {
        return v[pos++];
    }
    
    bool hasNext() {
        if(pos==v.size())return 0;
        return 1;
        
    }
};

/**
 * Your BSTIterator object will be instantiated and called as such:
 * BSTIterator* obj = new BSTIterator(root);
 * int param_1 = obj->next();
 * bool param_2 = obj->hasNext();
 */
