 unordered_map<long long , bool > mp;
         vector<vector<int> > ans;
        for(int i = 0; i<row; i++)
        {
            vector<int> row;
            long long key = 0;
            for(int j = 0; j<col; j++)
            {
                key += M[i][j]*pow(2 , j);
            }
            if(!mp.count(key))
            {
                for(int j = 0; j<col; j++)
                {
                    mp[key] = true; //Not needed Just for creating a new entry
                    row.push_back(M[i][j]);
                }
                ans.push_back(row);
            }
            
        }
        
        return ans;
    }
};
