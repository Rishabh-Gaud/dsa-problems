// Given a binary tree. Find the inorder traversal of the tree without using recursion.

class Solution {
public:
    vector<int> inOrder(Node* root)
    {
        stack<Node*>s;
        vector<int>v;
        // s.push(root);
        Node* curr = root;
        while(!s.empty()||curr!=NULL){
            if(curr!=NULL){
                s.push(curr);
                curr = curr->left;
                continue;
            }
            curr = s.top();
            s.pop();
            v.push_back(curr->data);
            curr=curr->right;
        }
    return v;
    }
};
