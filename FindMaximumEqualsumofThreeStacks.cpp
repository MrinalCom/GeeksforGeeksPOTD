

#include <bits/stdc++.h>
using namespace std;


class Solution{
public:
    int maxEqualSum(int N1,int N2,int N3,vector<int> &S1,vector<int> &S2,vector<int> &S3){
        int sum1 = 0,sum2 = 0,sum3 = 0;
        stack<int> s1;
        stack<int> s2;
        stack<int> s3;
        for(int i=S1.size()-1;i>=0;--i){ 
            sum1+=S1[i];
            s1.push(S1[i]);
        }
        for(int i=S2.size()-1;i>=0;--i){ 
            sum2+=S2[i];
            s2.push(S2[i]);
        }
        for(int i=S3.size()-1;i>=0;--i){ 
            sum3+=S3[i];
            s3.push(S3[i]);
        }
        while(!s1.empty() && !s2.empty() && !s3.empty()){
            if(sum1 == sum2 && sum2 == sum3){
                return sum1;
            }
            else{
                if(sum1 > sum2 || sum1 > sum3){
                    sum1-=s1.top();
                    s1.pop();
                }
                else if(sum2 > sum1 || sum2 > sum3){
                    sum2-=s2.top();
                    s2.pop();
                }
                else if(sum3 > sum2 || sum3 > sum1){
                    sum3-=s3.top();
                    s3.pop();
                }
            }
        }
    
    return 0;
    }
};
