queue<Node*>q;
    q.push(root);
    
    while(!q.empty()){


        int n = q.size();
        int size=1;


        while(size<=n){
            auto node = q.front();
            q.pop();
            
            if(size==1 || size==n){
                cout<<node->data<<" ";
            }
            
            if(node->left)q.push(node->left);
            if(node->right)q.push(node->right);
            size++;
        }
    }
