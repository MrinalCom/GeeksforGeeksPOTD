deque<int> dq;
        for(int i=1;i<=N;i++){
            dq.push_back(i);
        }
        int res=0;
        int u=1;
        while(!dq.empty()){
        int count=K;
            if(u==1){
            while(!dq.empty() && count!=0) {
                res=dq.front();
                dq.pop_front();
                count--;
            }
            u=0;
            }
            else{
            while(!dq.empty() && count!=0){
                res=dq.back();
                dq.pop_back();
                count--;
            }
            u=1;
            }
        }
        return res;
