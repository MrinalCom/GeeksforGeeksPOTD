class Solution{
    public:
    bool helper(struct Node* left, struct Node* right) {
        if(!left && !right) return true;
        if(!left || !right) return false;
        if(left->data != right->data) return false;
        return helper(left->left, right->right) && helper(left->right, right->left);
    }
    bool isSymmetric(struct Node* root)
    {
	    // Code here
	    return helper(root, root);
    }
};
