int c=0;
        while(n!=0)
        {
            if(n%3==0)
            n=n/3;
            else
            n--;
            c++;
        }
        return c-1;
