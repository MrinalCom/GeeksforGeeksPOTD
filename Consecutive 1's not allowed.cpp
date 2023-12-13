  ll a = 2;
          ll b = 3;
          ll c = a + b;
 
            if (n == 1) return 2;
            else if (n == 2) return 3;
            else {
                for (int i = 3; i <= n-1; i++) {
                    a = b;
                    b = c;
                    c = (a + b) % (ll)(1e9 + 7);
                }
            }
 
      return c;
