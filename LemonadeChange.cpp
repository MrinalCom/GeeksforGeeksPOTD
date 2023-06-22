int cnt5 = 0, cnt10 = 0;
        for(auto it : bills){
            if(it == 5) cnt5++;
            else if(it == 10){
                cnt10++;
                if(cnt5 > 0) cnt5--;
                else return false;
            }
            else{
                if(cnt5 > 0 && cnt10 > 0){
                    cnt5--;
                    cnt10--;
                }
                else if(cnt5 > 2){
                    cnt5 -= 3;
                }
                else return false;
            }
        }
        return true;
    }
