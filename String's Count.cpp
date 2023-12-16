long long int ans = 1; // all a
    ans = ans + n; // 1 b
    ans = ans + n; // 1 c
    ans = ans + n*(n-1) / 2; // 2 c
    ans = ans + n*(n-1); // 1 b 1 c
    ans = ans + n*(n-1)*(n-2) / 2; // 1b 2c;
    return ans;
