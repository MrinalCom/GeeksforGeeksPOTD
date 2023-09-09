public:
    vector<int>arr;
    void nam(Node *root){
        if(!root)
        return;
        nam(root->left);
        arr.push_back(root->data);
        nam(root->right);
    }
    int kthLargest(Node *root, int K)
    {
        //Your code here
        nam(root);
        int n=arr.size();
        return arr[n-K];
    }
};
