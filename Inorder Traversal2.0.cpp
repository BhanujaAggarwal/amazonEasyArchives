void inorder(Node* root)
{
    if(!root) return ;
    stack<Node*> s;
    Node* temp=root;
    
    while(!s.empty() or temp){
        while(temp){
            s.push(temp);
            temp=temp->left;
        }
        temp = s.top();
        s.pop();
        cout<<temp->data<<" ";
        temp = temp->right;
    }
}