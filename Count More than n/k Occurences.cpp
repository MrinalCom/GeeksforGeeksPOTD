        int a=n/k;
        unordered_map<int,int>m;
        for(int i=0;i<n;i++)
        {
            m[arr[i]]++;
        }
        for(auto it:m)
        {
            if(it.second>a)
            {
                v.push_back(it.first);
            }
        }
        return v.size();
