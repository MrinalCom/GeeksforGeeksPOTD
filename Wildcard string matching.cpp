int i=0;
        int j=0;
        while(i<wild.size() and j<pattern.size()){
            if(wild[i]!=pattern[j] and wild[i]!='*' and wild[i]!='?'){
                return false;
            }else if(wild[i]!=pattern[j] and wild[i]=='?'){
                i++;
                j++;
            }else if(wild[i]!=pattern[j] and wild[i]=='*'){
                while(wild[i]=='*' or wild[i]=='?'){
                    i++;
                    j++;
                }
                while(pattern[j]!=wild[i]){
                    j++;
                }
            }else{
                i++;
                j++;
            }
        }
        if(i!=wild.size() or j!=pattern.size()) return false;
        return true;
