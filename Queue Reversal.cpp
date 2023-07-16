queue<int> rev(queue<int> q)
    {
        // add code here.
        vector<int> temp;
        while (!q.empty()) {
            temp.push_back(q.front());
            q.pop();
        }
        
        int n = temp.size();
        for (int i=n-1; i>=0; i--) {
            q.push(temp[i]);
        }
        return q;
    }
