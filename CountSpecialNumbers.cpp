int countSpecialNumbers(int n, vector<int> a) {
        // Code here
        sort(a.begin(),a.end());
        unordered_map<int,int> m;
        int an=0;
        for(int i=0;i<n;i++){
            m[a[i]]++;
        }
        for(auto i:m){
            if(i.second>1){
                an+=i.second;
            }else{
                for(int j=0;j<n;j++){
                    if(a[j]>=i.first) continue;
                    else{
                        if(i.first%a[j]==0){an++; break;}
                    }
                }
            }
        }
        return an;
