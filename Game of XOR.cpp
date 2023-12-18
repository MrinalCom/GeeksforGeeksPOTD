  int ans = 0;
        if(N==1)
        {
            return A[0];
        }
        
        int r = N;
        int l = 1;
        for(int i=0;i<N;i++)
        {
            int mul = r*l;
            if(mul%2==0)
            {
                r--;
                l++;
                continue;
            }
            
            if(ans==-1)
            {
                ans = A[i];
            }
            else
            {
                ans=ans^A[i];
            }
            
            r--;
            l++;
        }
        
        return ans;
