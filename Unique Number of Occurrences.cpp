unordered_map<int,int>mp;
        
        for(int i=0;i<n;i++)
        {
            mp[arr[i]]++;
        }
        
        vector<int>ans;
        unordered_map<int,int>::iterator it;
        for(it=mp.begin();it!=mp.end();++it)
        {
            ans.push_back(it->second);
        }
        sort(ans.begin(),ans.end());
        
        for(int i=0;i<ans.size();i++)
        {
            if(i!=0 && ans[i]==ans[i-1]) return false;
        }
        
        
        return true;
