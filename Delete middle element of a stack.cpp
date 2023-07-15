if(st.size()==(sizeOfStack+1)/2){
            st.pop();
            return;
        }
        int x=st.top();
        st.pop();
        deleteMid(st,sizeOfStack);
        st.push(x);
        
    }
    
};

