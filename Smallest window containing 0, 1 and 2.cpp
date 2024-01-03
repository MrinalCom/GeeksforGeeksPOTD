  int n=s.size();
        if(n<3) return -1;
        map<int,int>mp;
        for(auto i:s){
            mp[i]++;
        }
        if(mp.size()<3) return -1;
        
        int a=-1,b=-1,c=-1;
        int len=INT_MAX;
        int mini,maxi;
        for(int i=0;i<n;i++){
            if(a!=-1 && b!=-1 && c!=-1){
              if(s[i]=='0') a=i;
              else if(s[i]=='1') b=i;
              else if(s[i]=='2') c=i;
            
              if(a<b && a<c) mini=a;
              else if(b<a && b<c) mini=b;
              if(c<a && c<b) mini=c;
              
              if(a>b && a>c) maxi=a;
              else if(b>a && b>c) maxi=b;
              if(c>a && c>b) maxi=c;
              
              len=min(len,(maxi-mini+1));  
            } 
            else if(s[i]=='0') a=i;
            else if(s[i]=='1') b=i;
            else if(s[i]=='2') c=i;
            
            if(a!=-1 && b!=-1 && c!=-1){
                if(a<b && a<c) mini=a;
              else if(b<a && b<c) mini=b;
              if(c<a && c<b) mini=c;
              
              if(a>b && a>c) maxi=a;
              else if(b>a && b>c) maxi=b;
              if(c>a && c>b) maxi=c;
              
              len=min(len,(maxi-mini+1));
            }
        }
       return len; 
