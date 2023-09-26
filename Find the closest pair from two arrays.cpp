vector<int> ans;
       ans.push_back(-1);
       ans.push_back(-1);
       int a,b,i,j=m-1;
       i=0;
       int sum;
       int diff,mindiff=INT_MAX;
       while(i<n && j>=0)
       {
           
           a=arr[i];
           b=brr[j];
           sum=a+b;
           if(sum>x)
           {
               diff=sum-x;
               j--;
           }
           else if(sum<x)
           {
               diff=x-sum;
               i++;
           }
           else
           {
               ans[0]=a;
               ans[1]=b;
               return ans;
           }
           if(diff<=mindiff)
           {
               
               if(diff!=mindiff)
               {
                   ans[0]=a;
                   ans[1]=b;
               }
               mindiff=diff;
                   
           }
           
           
       }
       return ans;
