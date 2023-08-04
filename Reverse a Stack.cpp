   stack<int>s;
       // st.();
        while(!st.empty())
        {
            s.push(st.top());
            st.pop();
        }
        st=s;
