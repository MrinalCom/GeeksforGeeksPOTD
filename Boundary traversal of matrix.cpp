vector<int>ans;
        
        for(int i = 0; i<m; i++)
        {
            ans.push_back(matrix[0][i]);
        }
        
        if(n == 1) return ans;
        
        for(int i = 1; i<n; i++)
        {
            ans.push_back(matrix[i][m-1]);
        }
        
        if(m == 1) return ans;
        
        for(int i = m-2; i>=0; i-- )
        {
            ans.push_back(matrix[n-1][i]);
        }
        
        for(int i = n-2; i>=1; i--)
        {
            ans.push_back(matrix[i][0]);
        }
        
        return ans;
