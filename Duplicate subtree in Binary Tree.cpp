class Solution {
  public:
  
     map<vector<int>,int> mp;
     void order(Node* root)
     {
         vector<int> v;
         queue<Node*> qq;
         qq.push(root);
         while(!qq.empty())
         {
             Node* root=qq.front();
             v.push_back(root->data);
             qq.pop();
             if(root->left){
                 qq.push(root->left); v.push_back(root->left->data);
             }
             if(root->right){
                 qq.push(root->right); v.push_back(root->right->data);
             }
         }
         if(v.size()>=2) mp[v]++;
     }
     
     void traversal (Node* node)
     {
         queue<Node*> q;
         q.push(node);
         while(!q.empty())
         {
             Node * root=q.front();
             q.pop();
             if(root->left) {q.push(root->left); order(root->left); }
             if(root->right) {q.push(root->right); order(root->right); }
         }
     }
    
    int dupSub(Node *root) {
        if(!root) return 0;
         traversal(root);
         for(auto it: mp)
         {
             if(it.second>1) return 1;
         }
         return 0;
    }
};
