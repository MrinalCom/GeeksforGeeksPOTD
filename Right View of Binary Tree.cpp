void helper(vector<int> &ans , int level , Node *root){
        if(!root) return;
        
        if(ans.size()<level){
            ans.push_back(root->data);
        }
        helper(ans , level+1 , root->right);
        helper(ans , level+1 , root->left);
        
    }
class Solution
{
    public:
    //Function to return list containing elements of right view of binary tree.
    vector<int> rightView(Node *root)
    {
       // Your Code here
       vector<int> ans;;
       helper(ans , 1 , root);
       return ans;
    }
