int getCount(Node *root, int k)
    {
        //code here
        int count=0;
        queue<pair<Node*,int>>q;
        q.push({root,1});
        while(!q.empty()){
            int n=q.size();
            while(n--){
                auto x=q.front();
                q.pop();
                Node *node=x.first;
                int level=x.second;
                if(!node->left && !node->right){
                      if(level<=k){
                          k=k-level;
                          count++;
                          if(k==0) break;
                      }else break;
                }
                if(node->left)q.push({node->left,level+1});
                if(node->right)q.push({node->right,level+1});
            }
        }
        return count;
