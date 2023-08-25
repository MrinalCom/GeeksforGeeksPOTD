	int isPalindrome(string S)
	{
	    // Your code goes here
	    int n=S.length();
	    int i=0;
	    int j=n-1;
	    while(i<=j){
	        if(S[i]!=S[j]){
	            return 0;
	            break;
	        }
	        else
	            i++;
	            j--;
	    }
	    return 1;
	    
	}

};
