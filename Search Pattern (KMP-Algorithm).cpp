  vector <int> search(string pat, string txt)
        {
            //code here
            vector<int>ans;
            int n=pat.size();
            for(int i=0;i<txt.length();i++){
                
                if(txt[i]==pat[0]){
                    if(txt.substr(i,n)==pat){
                        ans.push_back(i+1);
                    }
                }
                    
                
            }
            if(ans.size()==0){
                ans.push_back(-1);
            }
            return ans;
        
        }


//it states that if there is pattern move not recheck like the simple algorithm 
