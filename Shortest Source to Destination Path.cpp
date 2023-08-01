 int t=0;
       queue<pair<pair<int,int>,int>>q;
       q.push({{0,0},0});
       A[0][0]=0;
       while(!q.empty()){
           int a1=q.front().first.first;
           int a2=q.front().first.second;
           int a3=q.front().second;
           if(a1==X && a2==Y)return a3;
           q.pop();
           int x1=a1+1;int y1=a2;
           if(x1>=0 && x1<N &&y1>=0 && y1<M && A[x1][y1]==1){
               q.push({{x1,y1},a3+1});
               A[x1][y1]=0;
           }
            x1=a1-1; y1=a2;
             if(x1>=0 && x1<N &&y1>=0 && y1<M && A[x1][y1]==1){
               q.push({{x1,y1},a3+1});
                A[x1][y1]=0;
           }
             x1=a1;y1=a2+1;
              if(x1>=0 && x1<N &&y1>=0 && y1<M && A[x1][y1]==1){
               q.push({{x1,y1},a3+1});
                A[x1][y1]=0;
           }
               x1=a1;y1=a2-1;
               if(x1>=0 && x1<N &&y1>=0 && y1<M && A[x1][y1]==1){
               q.push({{x1,y1},a3+1});
                A[x1][y1]=0;
           }
           
       }return -1;
