int findMinOpeartion(vector<vector<int> > matrix, int n)
    {
        // code here 
        int msum=0, rsum=0,csum=0,maxi=0;
        for(int i=0; i<n; i++)
        {
            for(int j=0; j<n; j++)
            {
                rsum+=matrix[i][j];
                csum+=matrix[j][i];
            
            }
            msum +=rsum;
            maxi=max(max(rsum, csum),maxi);
            rsum = csum =0;
        }
        
        return (maxi*n) - msum;
    } 
