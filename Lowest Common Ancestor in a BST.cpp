  if(root->data == n1 || root->data == n2 || !root)return root;
            
            if((n1 < root->data && n2 > root->data) || (n1 > root->data && n2 < root->data)){
                return root;
            }
            
            else if(n1 < root->data && n2 < root->data)return LCA(root->left, n1, n2);
            else if(n1 > root->data && n2 > root->data)return LCA(root->right, n1, n2);
