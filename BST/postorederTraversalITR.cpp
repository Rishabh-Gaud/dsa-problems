// basic intution is that to create implement go to left than right and finally print the root.
// we can  see this question in different angle. The angle is nothing but reversing the postorder pattern.
// it means first print than go to right than go left
// now it look like preorder traversal 
// now just write code like preorder 
// than reverse the vector and return it.


class Solution{
    public:
    vector<int> postOrder(Node* node) {
        stack<Node*>s;
        vector<int>v;
        s.push(node);
        while(!s.empty()){
            Node* curr = s.top();
            s.pop();
            v.push_back(curr->data);
            if(curr->left){
                s.push(curr->left);
            }
            if(curr->right){
                s.push(curr->right);
            }
        }
        reverse(v.begin(),v.end());
        return v;
    }
};
