int F(string S){
        int a[26] = {};
        for(char c : S) a[c - 'a'] = accumulate(begin(a),end(a),1);
        return accumulate(begin(a),end(a),0);
    }

    string betterString(string s1, string s2) {
        // code here
        int cnt1 = F(s1) , cnt2 = F(s2);
        if(cnt1 == cnt2) return s1;
        return cnt1 > cnt2 ? s1 : s2;
    }
