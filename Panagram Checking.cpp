 for (int i=0;i<(int)a.size();++i) if (a[i]>='A' && a[i]<='Z') a[i]+='a'-'A';
      vector<int>v(26,0);
      for(int i=0;i<a.length();i++){
          if(a[i]>='a' && a[i]<='z'){
              v[a[i]-'a']++;
          }
      }
      for(int i=0;i<26;i++){
          if(!v[i]) return false;
      }
      return true;
