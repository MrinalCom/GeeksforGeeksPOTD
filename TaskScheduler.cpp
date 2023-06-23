unordered_map<char,int>mp;
        for(int i=0;i<N;i++)
        {
            mp[tasks[i]-'A']++;
        }
        int res=0;
        int count=0;
        for(int i=0;i<mp.size();i++)
        {
            if(mp[i])
            {
                if(count<mp[i])
                {
                    count=mp[i];
                    res=max(res,((count-1)*K+mp[i]));
                }
            
            else if(count==mp[i])
            {
                res+=1;
              }
            }
        }
        return max(N,res);
