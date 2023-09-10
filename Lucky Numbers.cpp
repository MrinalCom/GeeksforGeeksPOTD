bool isLucky(int n) {
    // code here
      for(int i=2; i <=n; n -= n/i, i++)
            if(n% i == 0) 
            return false;
        return true;
}
