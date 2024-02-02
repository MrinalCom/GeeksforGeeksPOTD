int ans=0;
        int sign=+1;
        int i=0;
        if(s[0]=='-'){
            sign=-1;
            i++;
        }
        int n=s.length();
        for( i;i<n;i++)
        {
            char c=s[i];
            if(c>=48 && c<=57)
            {
                int m=c-'0';
                ans=ans*10+m;
            }
            else{
                return -1;
            
            }
        }
        return ans*sign;
