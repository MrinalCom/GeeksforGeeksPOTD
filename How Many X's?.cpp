 int i,count=0;
        for(i=L+1;i<R;i++)
        {
           int temp=i;
            while(temp>0)
            {
                int rem =temp%10;
                if(rem==X)
                {
                    count++;
                }
                temp=temp/10;
            }
        }
        return count;
