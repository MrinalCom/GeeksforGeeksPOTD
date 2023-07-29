 Node* prev = root;
        
        if(x->right){
            x = x->right;
            while(x->left){
                x = x->left;
            }
            return x;
        }
        
        else{
            while(root && root!=x){
                if(root->data > x->data){
                    prev = root;
                    root = root->left;
                }
                else
                    root = root->right;
            }
        }
        if(prev->data > x->data)
            return prev;
            
        Node* ans = new Node(-1);
        return ans;
