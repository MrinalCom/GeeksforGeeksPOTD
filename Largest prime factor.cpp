 long long int largestPrimeFactor(int N){
        // code here
           for(int i = 2; i <= sqrt(N); i++){
            if(N%i == 0){
                //N = N/i;
                N /= i;
                
                i--;
            }
        }
        
        return N;
    }
};
