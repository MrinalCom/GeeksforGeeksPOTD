  int indegree[V] = {0};
        vector<int> ans;
        queue<int> q;
        
        for(int i=0; i<V; i++){
            for(auto x:adj[i]){
                indegree[x]++;
            }
        }
        for(int i=0; i<V; i++){
            if(indegree[i]==0){
                q.push(i);
                ans.push_back(i);
            }
        }
        
        while(!q.empty()){
            int temp = q.front();
            q.pop();
            for(auto i:adj[temp]){
                indegree[i]--;
                if(indegree[i]==0){
                    q.push(i);
                    ans.push_back(i);
                }
            }
        }
        return ans;
