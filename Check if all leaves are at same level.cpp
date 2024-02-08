 if(!root){
            return true;
        }
        int a = -1;
        queue<pair<Node*,int>> qu;
        qu.push({root,0});
        while(!qu.empty()){
            int size = qu.size();
            while(size--){
                Node* node = qu.front().first;
                int level = qu.front().second;
                qu.pop();
                if(!node->left && !node->right){
                    if(a == -1){
                        a = level;
                    }else if(level!=a){
                        return false;
                    }
                }
                if(node->left){
                    qu.push({node->left,level+1});
                }
                if(node->right){
                    qu.push({node->right,level+1});
                }
            }
        }
        return true;
