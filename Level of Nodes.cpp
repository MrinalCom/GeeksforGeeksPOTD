if(X == 0) return 0;
        vector<int> vis(V+1, 0);
        queue<int> que;
        int level = 0;
        que.push(0);
        que.push(-1);
        vis[0] = 1;
        while(que.front() != -1){
            int curr = que.front();
            que.pop();
            if(curr == X) return level;
            for(auto val: adj[curr]){
                if(vis[val] == false){
                    vis[val] = true;
                    que.push(val);
                }
            }
            if(que.front() == -1){
                level++;
                que.pop();
                que.push(-1);
            }
        }
        return -1;
