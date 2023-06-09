string permute = S;
		    unordered_set<string> st;
		    do{
		        st.insert(permute);
		        next_permutation(permute.begin(),permute.end());
		    }while(permute!=S);
		    vector<string> ans(st.begin(),st.end());
		    sort(ans.begin(),ans.end());
		    return ans;
