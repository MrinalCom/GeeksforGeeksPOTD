void solve(struct Node * root, vector<int>&ans){
    if(root == NULL)
        return ;
        
    solve(root->left,ans);
    ans.push_back(root->data);
    solve(root->right,ans);
}
float findMedian(struct Node *root)
{
      //Code here
       vector<int>ans;
    solve(root,ans);
    int n = ans.size();
    float  n1 , n2 ;
    if(n%2 == 0){
        n1 = ans[(n/2)-1];
        n2 = ans[(n/2)];
        return (n1+n2)/2 ;
    }else{
        return ans[n/2];
}
