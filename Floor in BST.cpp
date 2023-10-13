int ans = -1;
    void solve(Node* root,int x)
    {
        if(root == NULL)
        {
            return ;
        }
        
        if(root->data<=x)
        {
            ans = root->data;
            solve(root->right,x);
        }
        else
        {
            solve(root->left,x);
        }

    }
    int floor(Node* root, int x) {
        // Code here
        solve(root,x);
        
        return ans;

    }
};
