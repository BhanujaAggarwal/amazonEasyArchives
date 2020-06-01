int height(Node* node)
{
   if(!node) return 0;
   int l = height(node->left);
   int r = height(node->right);
   return 1+max(l,r);
}