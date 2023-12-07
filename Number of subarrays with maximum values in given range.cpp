queue<int>q1;
        queue<int>q2;
        int s=0; 
        int c=0;
        long long int ans= 0;
        for(int i=0; i<n; i++){
            if(a[i]>=L and R>=a[i]){
                s++;
                q2.push(c);
                c=0;
            }
            else if(L>a[i]){
                s++;
                c++;
            }
            else if(a[i]>R){
                q1.push(s);
                q2.push(c);
                s=0;
                c=0;
            }
        }
        q1.push(s);
        q2.push(c);
        while(!q1.empty()){
            int e= q1.front();
            ans+= e*(e+ 1)/2;
            q1.pop();
        }
        while(!q2.empty()){
            int e= q2.front();
            ans-= e*(e+ 1)/2;
            q2.pop();
        }
        return ans;
