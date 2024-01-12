 int n=q.size();
        stack<int>st;
        vector<int>v;
        
        for(int i=0;i<k;i++)
        {
            int x=q.front();
            st.push(x);
            q.pop();
        }
        
        while(!st.empty())
        {
            v.push_back(st.top());
            st.pop();
        }
        
        
        for(int i=k;i<n;i++)
        {
            v.push_back(q.front());
            q.pop();
        }
        
        //now add up all the elements
        
        for(int i=0;i<n;i++)
        {
            q.push(v[i]);
        }
        
        return q;
