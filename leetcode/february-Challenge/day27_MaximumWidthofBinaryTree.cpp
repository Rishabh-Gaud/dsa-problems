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
    int widthOfBinaryTree(TreeNode* root) {
        if(!root)return 0;
        queue<pair<TreeNode*,long long>>q;
        q.push({root,0});
        int l,r;
        int res=0;
        while(!q.empty()){
            int n = q.size();
            int mn = q.front().second;
            for(int i=0;i<n;i++){
                TreeNode* curr = q.front().first;
                long long id = q.front().second-mn;
                q.pop();
                if(i==0){
                    l = id;
                }
                if(i==n-1)r = id;
                if(curr->left)q.push({curr->left,2*id+1});
                if(curr->right)q.push({curr->right,2*id+2});
            }
            res = max(res,r-l+1);
        }
        return res;
        
    
    }
};
