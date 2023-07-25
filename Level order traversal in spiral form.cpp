vector<int> ans;
    if(root == NULL)
        return ans;
    queue<Node*> q;
    q.push(root);
    bool ltr = false;
    while(!q.empty()){
        int size = q.size();
        vector<int> row(size);
        for(int i = 0; i < size; i++){
            Node* fnode = q.front();
            q.pop();
            int index = ltr ? i : (size - 1 - i);
            row[index] = fnode -> data;
            if(fnode -> left)
                q.push(fnode -> left);
            if(fnode -> right)
                q.push(fnode -> right);
        }
        ltr = !ltr;
        for(auto i : row)
            ans.push_back(i);
    }
    return ans;
