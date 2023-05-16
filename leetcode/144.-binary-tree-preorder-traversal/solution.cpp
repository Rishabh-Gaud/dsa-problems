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
    void printPreorderTraversal(TreeNode* root, vector<int>&ans) {
        if(root == NULL) {
            return;
        }
        ans.push_back(root -> val);
        printPreorderTraversal(root -> left, ans);
        printPreorderTraversal(root -> right, ans);
    }
    vector<int> preorderTraversal(TreeNode* root) {
        vector<int> ans;
        stack<TreeNode*> st;
        while(true) {
            if(root != NULL) {
                st.push(root);
                ans.push_back(root -> val);
                root = root -> left;
            } else {
                if(st.empty()) {
                    break;
                }
                root = st.top();
                st.pop();
                root = root -> right;
            }
        }
        return ans;
    }
};