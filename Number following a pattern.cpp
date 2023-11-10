int n = S.length();
        int count=1;
        string D="1";
        string ans="";
        for(int i=0;i<n;i++){
            if(S[i]=='D'){
                count++;
                D=to_string(count)+D;
            }
            else{
                ans+=D;
                count++;
                D=to_string(count);
            }
        }
        ans+=D;
        return ans;
