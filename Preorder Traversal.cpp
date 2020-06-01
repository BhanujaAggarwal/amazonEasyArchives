void preorder(Node* root)
{
    if(!root) return;
    stack<Node*> s;
    s.push(root);
    while(!s.empty()){
        Node* temp = s.top();
        s.pop();
        cout<<temp->data<<" ";
        if(temp->right) s.push(temp->right);
        if(temp->left) s.push(temp->left);
    }
}