int mx=0;
           int i=0,j=n-1;
           int ind=0;
           while(i<j)
           {
               if(arr[i]<=arr[j])
               {
                   mx=max(mx,j-i);
                   i++;
                   ind=j;
                   j=n-1;
               }
               else if(j>ind)
               j--;
               else if(j<=ind)
               {
                   i++;
                   j=n-1;
               }
           }
           return mx;
    }
