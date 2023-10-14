map<int, int>mpp;
    vector<int>ans;
    void f(Node* root){
        if(root==NULL) return;
        mpp[root->data]++;
        f(root->left);
        f(root->right);
        
    }
    void solve(Node* root){
        if(root==NULL) return;
        if(mpp[root->data]>0) ans.push_back(root->data);
        solve(root->left);
        solve(root->right);
    }
    //Function to find the nodes that are common in both BST. 
    vector <int> findCommon(Node *root1, Node *root2)
    {
     //Your code here
     if(root1==NULL || root2==NULL) return {};
     f(root1);
     solve(root2);
     sort(ans.begin(), ans.end());
     return ans;
