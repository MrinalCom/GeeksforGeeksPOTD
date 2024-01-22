 vector<vector<int>> ans;
        map<Node*,vector<int>>m;
        queue<Node*> q;
        q.push(root);
        m[root].push_back(root->key);
        map<Node*,int> m1;
        m1[root]=root->key;
        if(root->key==sum) ans.push_back(m[root]);
        while(!q.empty()){
            int size=q.size();
            while(size--){
                auto q1=q.front();
                q.pop();
                if(q1->left) {
                    m[q1->left]=m[q1];
                    m[q1->left].push_back(q1->left->key);
                    m1[q1->left]=q1->left->key+m1[q1];
                    if(m1[q1->left]==sum) ans.push_back(m[q1->left]);
                    q.push(q1->left);
                }
                if(q1->right) {
                    m[q1->right]=m[q1];
                    m[q1->right].push_back(q1->right->key);
                    m1[q1->right]=q1->right->key+m1[q1];
                    if(m1[q1->right]==sum) ans.push_back(m[q1->right]);
                    q.push(q1->right);
                }
             }
        }
        return ans;
