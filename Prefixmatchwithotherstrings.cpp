  string s="";
        for(int i=0;i<k;i++){
            s.push_back(str[i]);
        }
        int count=0;
        for(int i=0;i<n;i++){
            string st=arr[i];
            if(st.find(s)==0){
                count++;
            }
        }
        return count;
    }
