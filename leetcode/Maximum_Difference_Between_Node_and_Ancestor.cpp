/** struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 */
class Solution {
public:
    int maxAncestorDiff(TreeNode* root,int maxi=0,int mini=100001) {
        if(root==NULL)return maxi-mini;
        
        maxi = max(maxi , root->val);
        mini = min(mini,root->val);
        
        return max(maxAncestorDiff(root->left,maxi,mini),maxAncestorDiff(root->right,maxi,mini));
    }
};
