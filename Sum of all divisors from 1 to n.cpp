class Solution
{
public:
    long long sumOfDivisors(int N)
    {
        // Write Your Code here
        long long int sum=0;
        for(int i=1;i<=N;i++){
            
                sum+=i*(N/i);
            
        }
        return sum;
    }
};
