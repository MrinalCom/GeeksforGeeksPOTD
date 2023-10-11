 int height(struct Node * root){
        return root==NULL ?0 : 1+max(height(root->left),height(root->right));
    }

    bool isBalanced(Node *root)
    {
        if(!root) return true;
        if(abs(height(root->left)-height(root->right)) >1) return false;
        return isBalanced(root->left) and isBalanced(root->right);
