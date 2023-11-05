vector<int> ans(q);
        
        for(int i=0;i<q;i++)
        {
            int qt=queries[i][0];
            int r=queries[i][1],c=queries[i][2];
            int sum=0;
            if(qt==1)
            {
                int dr[8]={-1,-1,-1,0,0,1,1,1};
                int dc[8]={-1,0,1,-1,1,-1,0,1};
                for(int j=0;j<8;j++)
                {
                    int nr=r+dr[j],nc=c+dc[j];
                    if(nr>=0 && nr<n && nc>=0 && nc<m)
                    {
                        sum+=mat[nr][nc];
                    }
                }
            }
            if(qt==2)
            {
                int dr1[16]={-2,-2,-2,-2,-2,2,2,2,2,2,-1,0,1,-1,0,1};
                int dc1[16]={-2,-1,0,1,2,-2,-1,0,1,2,-2,-2,-2,2,2,2};
                for(int j=0;j<16;j++)
                {
                    int nr=r+dr1[j],nc=c+dc1[j];
                    if(nr>=0 && nr<n && nc>=0 && nc<m)
                    {
                        sum+=mat[nr][nc];
                    }
                }
            }
            ans[i]=sum;
        }
        return ans;

